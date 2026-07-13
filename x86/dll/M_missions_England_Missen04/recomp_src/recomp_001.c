#include "recomp.h"

/* FUN_10006dd0 @ 0x10466dd0 (10 bytes, 5 insns) */
void f_10466dd0(void) {
  FTRACE(0x10466dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10466dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10466dd3 mov eax, 1 */
  EAX = (0x1u);
  /* 10466dd8 pop ebp */
  EBP = (pop32());
  /* 10466dd9 ret  */
  ESPCHK(0x10466dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x10466de0 (173 bytes, 59 insns) */
void f_10466de0(void) {
  FTRACE(0x10466de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10466de1 mov ebp, esp */
  EBP = (ESP);
  /* 10466de3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10466de6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466dea jbe 0x10466df3 */
  if ((C.cf||C.zf)) goto L_10466df3;
  /* 10466dec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10466dee jmp 0x10466e89 */
  goto L_10466e89;
L_10466df3:;
  /* 10466df3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10466df5 call 0x10466910 */
  push32(0x10466dfau); f_10466910();
  /* 10466dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466dfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466e00 push eax */
  push32((uint32_t)(EAX));
  /* 10466e01 call 0x10467210 */
  push32(0x10466e06u); f_10467210();
  /* 10466e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466e09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10466e0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466e10 je 0x10466e51 */
  if (C.zf) goto L_10466e51;
  /* 10466e12 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10466e19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466e1c cmp ecx, dword ptr [0x1048cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466e22 ja 0x10466e42 */
  if ((!C.cf&&!C.zf)) goto L_10466e42;
  /* 10466e24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466e27 push edx */
  push32((uint32_t)(EDX));
  /* 10466e28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466e2b push eax */
  push32((uint32_t)(EAX));
  /* 10466e2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466e2f push ecx */
  push32((uint32_t)(ECX));
  /* 10466e30 call 0x104680e0 */
  push32(0x10466e35u); f_104680e0();
  /* 10466e35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466e38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10466e3a je 0x10466e42 */
  if (C.zf) goto L_10466e42;
  /* 10466e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466e3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10466e42:;
  /* 10466e42 push 9 */
  push32((uint32_t)(0x9u));
  /* 10466e44 call 0x104669b0 */
  push32(0x10466e49u); f_104669b0();
  /* 10466e49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466e4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466e4f jmp 0x10466e89 */
  goto L_10466e89;
L_10466e51:;
  /* 10466e51 push 9 */
  push32((uint32_t)(0x9u));
  /* 10466e53 call 0x104669b0 */
  push32(0x10466e58u); f_104669b0();
  /* 10466e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466e5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466e5f jne 0x10466e68 */
  if (!C.zf) goto L_10466e68;
  /* 10466e61 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10466e68:;
  /* 10466e68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466e6b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466e6e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10466e70 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10466e73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466e76 push ecx */
  push32((uint32_t)(ECX));
  /* 10466e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466e7a push edx */
  push32((uint32_t)(EDX));
  /* 10466e7b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10466e7d mov eax, dword ptr [0x1048fe2c] */
  EAX = (r32((uint32_t)(0x1048fe2c)));
  /* 10466e82 push eax */
  push32((uint32_t)(EAX));
  /* 10466e83 call dword ptr [0x10490324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490324))), 0x10466e89u);
L_10466e89:;
  /* 10466e89 mov esp, ebp */
  ESP = (EBP);
  /* 10466e8b pop ebp */
  EBP = (pop32());
  /* 10466e8c ret  */
  ESPCHK(0x10466de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e90 @ 0x10466e90 (490 bytes, 165 insns) */
void f_10466e90(void) {
  FTRACE(0x10466e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10466e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10466e91 mov ebp, esp */
  EBP = (ESP);
  /* 10466e93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10466e96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466e9a jne 0x10466ead */
  if (!C.zf) goto L_10466ead;
  /* 10466e9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466e9f push eax */
  push32((uint32_t)(EAX));
  /* 10466ea0 call 0x10466ce0 */
  push32(0x10466ea5u); f_10466ce0();
  /* 10466ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466ea8 jmp 0x10467076 */
  goto L_10467076;
L_10466ead:;
  /* 10466ead cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466eb1 jne 0x10466ec6 */
  if (!C.zf) goto L_10466ec6;
  /* 10466eb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10466eb7 call 0x10467080 */
  push32(0x10466ebcu); f_10467080();
  /* 10466ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466ebf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10466ec1 jmp 0x10467076 */
  goto L_10467076;
L_10466ec6:;
  /* 10466ec6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10466ecd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466ed1 ja 0x10467049 */
  if ((!C.cf&&!C.zf)) goto L_10467049;
  /* 10466ed7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10466ed9 call 0x10466910 */
  push32(0x10466edeu); f_10466910();
  /* 10466ede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466ee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466ee4 push edx */
  push32((uint32_t)(EDX));
  /* 10466ee5 call 0x10467210 */
  push32(0x10466eeau); f_10467210();
  /* 10466eea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466eed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10466ef0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466ef4 je 0x1046700c */
  if (C.zf) goto L_1046700c;
  /* 10466efa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466efd cmp eax, dword ptr [0x1048cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466f03 ja 0x10466f80 */
  if ((!C.cf&&!C.zf)) goto L_10466f80;
  /* 10466f05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466f08 push ecx */
  push32((uint32_t)(ECX));
  /* 10466f09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466f0c push edx */
  push32((uint32_t)(EDX));
  /* 10466f0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10466f10 push eax */
  push32((uint32_t)(EAX));
  /* 10466f11 call 0x104680e0 */
  push32(0x10466f16u); f_104680e0();
  /* 10466f16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10466f1b je 0x10466f25 */
  if (C.zf) goto L_10466f25;
  /* 10466f1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466f20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10466f23 jmp 0x10466f80 */
  goto L_10466f80;
L_10466f25:;
  /* 10466f25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466f28 push edx */
  push32((uint32_t)(EDX));
  /* 10466f29 call 0x104678a0 */
  push32(0x10466f2eu); f_104678a0();
  /* 10466f2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466f31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10466f34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466f38 je 0x10466f80 */
  if (C.zf) goto L_10466f80;
  /* 10466f3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466f3d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10466f40 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10466f43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10466f46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466f49 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466f4c jae 0x10466f56 */
  if (!C.cf) goto L_10466f56;
  /* 10466f4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466f51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10466f54 jmp 0x10466f5c */
  goto L_10466f5c;
L_10466f56:;
  /* 10466f56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466f59 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10466f5c:;
  /* 10466f5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10466f5f push edx */
  push32((uint32_t)(EDX));
  /* 10466f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466f63 push eax */
  push32((uint32_t)(EAX));
  /* 10466f64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466f67 push ecx */
  push32((uint32_t)(ECX));
  /* 10466f68 call 0x104697f0 */
  push32(0x10466f6du); f_104697f0();
  /* 10466f6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466f70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466f73 push edx */
  push32((uint32_t)(EDX));
  /* 10466f74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10466f77 push eax */
  push32((uint32_t)(EAX));
  /* 10466f78 call 0x104672d0 */
  push32(0x10466f7du); f_104672d0();
  /* 10466f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10466f80:;
  /* 10466f80 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466f84 jne 0x10467000 */
  if (!C.zf) goto L_10467000;
  /* 10466f86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466f8a jne 0x10466f93 */
  if (!C.zf) goto L_10466f93;
  /* 10466f8c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10466f93:;
  /* 10466f93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466f96 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10466f99 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10466f9c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10466f9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466fa2 push edx */
  push32((uint32_t)(EDX));
  /* 10466fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10466fa5 mov eax, dword ptr [0x1048fe2c] */
  EAX = (r32((uint32_t)(0x1048fe2c)));
  /* 10466faa push eax */
  push32((uint32_t)(EAX));
  /* 10466fab call dword ptr [0x10490320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490320))), 0x10466fb1u);
  /* 10466fb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10466fb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466fb8 je 0x10467000 */
  if (C.zf) goto L_10467000;
  /* 10466fba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466fbd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10466fc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10466fc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10466fc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466fc9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10466fcc jae 0x10466fd6 */
  if (!C.cf) goto L_10466fd6;
  /* 10466fce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10466fd1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10466fd4 jmp 0x10466fdc */
  goto L_10466fdc;
L_10466fd6:;
  /* 10466fd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10466fd9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10466fdc:;
  /* 10466fdc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10466fdf push eax */
  push32((uint32_t)(EAX));
  /* 10466fe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10466fe4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10466fe7 push edx */
  push32((uint32_t)(EDX));
  /* 10466fe8 call 0x104697f0 */
  push32(0x10466fedu); f_104697f0();
  /* 10466fed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10466ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10466ff3 push eax */
  push32((uint32_t)(EAX));
  /* 10466ff4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10466ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 10466ff8 call 0x104672d0 */
  push32(0x10466ffdu); f_104672d0();
  /* 10466ffd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10467000:;
  /* 10467000 push 9 */
  push32((uint32_t)(0x9u));
  /* 10467002 call 0x104669b0 */
  push32(0x10467007u); f_104669b0();
  /* 10467007 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046700a jmp 0x10467049 */
  goto L_10467049;
L_1046700c:;
  /* 1046700c push 9 */
  push32((uint32_t)(0x9u));
  /* 1046700e call 0x104669b0 */
  push32(0x10467013u); f_104669b0();
  /* 10467013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10467016 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046701a jne 0x10467023 */
  if (!C.zf) goto L_10467023;
  /* 1046701c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10467023:;
  /* 10467023 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10467026 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467029 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1046702c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1046702f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10467032 push eax */
  push32((uint32_t)(EAX));
  /* 10467033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467036 push ecx */
  push32((uint32_t)(ECX));
  /* 10467037 push 0 */
  push32((uint32_t)(0x0u));
  /* 10467039 mov edx, dword ptr [0x1048fe2c] */
  EDX = (r32((uint32_t)(0x1048fe2c)));
  /* 1046703f push edx */
  push32((uint32_t)(EDX));
  /* 10467040 call dword ptr [0x10490324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490324))), 0x10467046u);
  /* 10467046 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10467049:;
  /* 10467049 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046704d jne 0x10467058 */
  if (!C.zf) goto L_10467058;
  /* 1046704f cmp dword ptr [0x1048e668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467056 jne 0x1046705d */
  if (!C.zf) goto L_1046705d;
L_10467058:;
  /* 10467058 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046705b jmp 0x10467076 */
  goto L_10467076;
L_1046705d:;
  /* 1046705d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10467060 push eax */
  push32((uint32_t)(EAX));
  /* 10467061 call 0x10466c50 */
  push32(0x10467066u); f_10466c50();
  /* 10467066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10467069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046706b jne 0x10467071 */
  if (!C.zf) goto L_10467071;
  /* 1046706d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046706f jmp 0x10467076 */
  goto L_10467076;
L_10467071:;
  /* 10467071 jmp 0x10466ec6 */
  goto L_10466ec6;
L_10467076:;
  /* 10467076 mov esp, ebp */
  ESP = (EBP);
  /* 10467078 pop ebp */
  EBP = (pop32());
  /* 10467079 ret  */
  ESPCHK(0x10466e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x10467080 (104 bytes, 38 insns) */
void f_10467080(void) {
  FTRACE(0x10467080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10467080 push ebp */
  push32((uint32_t)(EBP));
  /* 10467081 mov ebp, esp */
  EBP = (ESP);
  /* 10467083 push ecx */
  push32((uint32_t)(ECX));
  /* 10467084 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467088 jne 0x1046708c */
  if (!C.zf) goto L_1046708c;
  /* 1046708a jmp 0x104670e4 */
  goto L_104670e4;
L_1046708c:;
  /* 1046708c push 9 */
  push32((uint32_t)(0x9u));
  /* 1046708e call 0x10466910 */
  push32(0x10467093u); f_10466910();
  /* 10467093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10467096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467099 push eax */
  push32((uint32_t)(EAX));
  /* 1046709a call 0x10467210 */
  push32(0x1046709fu); f_10467210();
  /* 1046709f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104670a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104670a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104670a9 je 0x104670c7 */
  if (C.zf) goto L_104670c7;
  /* 104670ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104670ae push ecx */
  push32((uint32_t)(ECX));
  /* 104670af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104670b2 push edx */
  push32((uint32_t)(EDX));
  /* 104670b3 call 0x104672d0 */
  push32(0x104670b8u); f_104672d0();
  /* 104670b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104670bb push 9 */
  push32((uint32_t)(0x9u));
  /* 104670bd call 0x104669b0 */
  push32(0x104670c2u); f_104669b0();
  /* 104670c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104670c5 jmp 0x104670e4 */
  goto L_104670e4;
L_104670c7:;
  /* 104670c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 104670c9 call 0x104669b0 */
  push32(0x104670ceu); f_104669b0();
  /* 104670ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104670d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104670d4 push eax */
  push32((uint32_t)(EAX));
  /* 104670d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104670d7 mov ecx, dword ptr [0x1048fe2c] */
  ECX = (r32((uint32_t)(0x1048fe2c)));
  /* 104670dd push ecx */
  push32((uint32_t)(ECX));
  /* 104670de call dword ptr [0x10490300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490300))), 0x104670e4u);
L_104670e4:;
  /* 104670e4 mov esp, ebp */
  ESP = (EBP);
  /* 104670e6 pop ebp */
  EBP = (pop32());
  /* 104670e7 ret  */
  ESPCHK(0x10467080u, _esp0);
  ESP += 4; return;
}

/* FUN_100070f0 @ 0x104670f0 (116 bytes, 34 insns) */
void f_104670f0(void) {
  FTRACE(0x104670f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104670f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104670f1 mov ebp, esp */
  EBP = (ESP);
  /* 104670f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104670f4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 104670fb push 9 */
  push32((uint32_t)(0x9u));
  /* 104670fd call 0x10466910 */
  push32(0x10467102u); f_10466910();
  /* 10467102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10467105 call 0x10468800 */
  push32(0x1046710au); f_10468800();
  /* 1046710a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046710c jge 0x10467115 */
  if ((C.sf==C.of)) goto L_10467115;
  /* 1046710e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10467115:;
  /* 10467115 push 9 */
  push32((uint32_t)(0x9u));
  /* 10467117 call 0x104669b0 */
  push32(0x1046711cu); f_104669b0();
  /* 1046711c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046711f push 0 */
  push32((uint32_t)(0x0u));
  /* 10467121 push 0 */
  push32((uint32_t)(0x0u));
  /* 10467123 mov eax, dword ptr [0x1048fe2c] */
  EAX = (r32((uint32_t)(0x1048fe2c)));
  /* 10467128 push eax */
  push32((uint32_t)(EAX));
  /* 10467129 call dword ptr [0x10490234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490234))), 0x1046712fu);
  /* 1046712f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10467131 jne 0x1046715d */
  if (!C.zf) goto L_1046715d;
  /* 10467133 call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x10467139u);
  /* 10467139 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046713c jne 0x10467156 */
  if (!C.zf) goto L_10467156;
  /* 1046713e call 0x1046adf0 */
  push32(0x10467143u); f_1046adf0();
  /* 10467143 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10467149 call 0x1046ade0 */
  push32(0x1046714eu); f_1046ade0();
  /* 1046714e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10467154 jmp 0x1046715d */
  goto L_1046715d;
L_10467156:;
  /* 10467156 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1046715d:;
  /* 1046715d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467160 mov esp, ebp */
  ESP = (EBP);
  /* 10467162 pop ebp */
  EBP = (pop32());
  /* 10467163 ret  */
  ESPCHK(0x104670f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007170 @ 0x10467170 (10 bytes, 5 insns) */
void f_10467170(void) {
  FTRACE(0x10467170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10467170 push ebp */
  push32((uint32_t)(EBP));
  /* 10467171 mov ebp, esp */
  EBP = (ESP);
  /* 10467173 call 0x104670f0 */
  push32(0x10467178u); f_104670f0();
  /* 10467178 pop ebp */
  EBP = (pop32());
  /* 10467179 ret  */
  ESPCHK(0x10467170u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x10467180 (10 bytes, 5 insns) */
void f_10467180(void) {
  FTRACE(0x10467180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10467180 push ebp */
  push32((uint32_t)(EBP));
  /* 10467181 mov ebp, esp */
  EBP = (ESP);
  /* 10467183 mov eax, dword ptr [0x1048cc94] */
  EAX = (r32((uint32_t)(0x1048cc94)));
  /* 10467188 pop ebp */
  EBP = (pop32());
  /* 10467189 ret  */
  ESPCHK(0x10467180u, _esp0);
  ESP += 4; return;
}

/* FUN_10007190 @ 0x10467190 (31 bytes, 11 insns) */
void f_10467190(void) {
  FTRACE(0x10467190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10467190 push ebp */
  push32((uint32_t)(EBP));
  /* 10467191 mov ebp, esp */
  EBP = (ESP);
  /* 10467193 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046719a jbe 0x104671a0 */
  if ((C.cf||C.zf)) goto L_104671a0;
  /* 1046719c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046719e jmp 0x104671ad */
  goto L_104671ad;
L_104671a0:;
  /* 104671a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104671a3 mov dword ptr [0x1048cc94], eax */
  w32((uint32_t)(0x1048cc94), (EAX));
  /* 104671a8 mov eax, 1 */
  EAX = (0x1u);
L_104671ad:;
  /* 104671ad pop ebp */
  EBP = (pop32());
  /* 104671ae ret  */
  ESPCHK(0x10467190u, _esp0);
  ESP += 4; return;
}

/* FUN_100071b0 @ 0x104671b0 (89 bytes, 20 insns) */
void f_104671b0(void) {
  FTRACE(0x104671b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104671b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104671b1 mov ebp, esp */
  EBP = (ESP);
  /* 104671b3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 104671b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104671ba mov eax, dword ptr [0x1048fe2c] */
  EAX = (r32((uint32_t)(0x1048fe2c)));
  /* 104671bf push eax */
  push32((uint32_t)(EAX));
  /* 104671c0 call dword ptr [0x10490320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490320))), 0x104671c6u);
  /* 104671c6 mov dword ptr [0x1048fe28], eax */
  w32((uint32_t)(0x1048fe28), (EAX));
  /* 104671cb cmp dword ptr [0x1048fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104671d2 jne 0x104671d8 */
  if (!C.zf) goto L_104671d8;
  /* 104671d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104671d6 jmp 0x10467207 */
  goto L_10467207;
L_104671d8:;
  /* 104671d8 mov ecx, dword ptr [0x1048fe28] */
  ECX = (r32((uint32_t)(0x1048fe28)));
  /* 104671de mov dword ptr [0x1048fe1c], ecx */
  w32((uint32_t)(0x1048fe1c), (ECX));
  /* 104671e4 mov dword ptr [0x1048fe20], 0 */
  w32((uint32_t)(0x1048fe20), (0x0u));
  /* 104671ee mov dword ptr [0x1048fe24], 0 */
  w32((uint32_t)(0x1048fe24), (0x0u));
  /* 104671f8 mov dword ptr [0x1048fe08], 0x10 */
  w32((uint32_t)(0x1048fe08), (0x10u));
  /* 10467202 mov eax, 1 */
  EAX = (0x1u);
L_10467207:;
  /* 10467207 pop ebp */
  EBP = (pop32());
  /* 10467208 ret  */
  ESPCHK(0x104671b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007210 @ 0x10467210 (85 bytes, 29 insns) */
void f_10467210(void) {
  FTRACE(0x10467210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10467210 push ebp */
  push32((uint32_t)(EBP));
  /* 10467211 mov ebp, esp */
  EBP = (ESP);
  /* 10467213 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467216 mov eax, dword ptr [0x1048fe24] */
  EAX = (r32((uint32_t)(0x1048fe24)));
  /* 1046721b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046721e mov ecx, dword ptr [0x1048fe28] */
  ECX = (r32((uint32_t)(0x1048fe28)));
  /* 10467224 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467226 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10467229 mov edx, dword ptr [0x1048fe28] */
  EDX = (r32((uint32_t)(0x1048fe28)));
  /* 1046722f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10467232:;
  /* 10467232 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467235 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467238 jae 0x1046725f */
  if (!C.cf) goto L_1046725f;
  /* 1046723a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046723d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467240 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467243 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10467246 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046724d jae 0x10467254 */
  if (!C.cf) goto L_10467254;
  /* 1046724f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467252 jmp 0x10467261 */
  goto L_10467261;
L_10467254:;
  /* 10467254 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467257 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046725a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046725d jmp 0x10467232 */
  goto L_10467232;
L_1046725f:;
  /* 1046725f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10467261:;
  /* 10467261 mov esp, ebp */
  ESP = (EBP);
  /* 10467263 pop ebp */
  EBP = (pop32());
  /* 10467264 ret  */
  ESPCHK(0x10467210u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x10467270 (95 bytes, 33 insns) */
void f_10467270(void) {
  FTRACE(0x10467270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10467270 push ebp */
  push32((uint32_t)(EBP));
  /* 10467271 mov ebp, esp */
  EBP = (ESP);
  /* 10467273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467279 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046727c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046727f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10467282 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467285 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10467288 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046728b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10467290 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467293 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10467295 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467298 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1046729b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1046729d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046729f jne 0x104672c1 */
  if (!C.zf) goto L_104672c1;
  /* 104672a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104672a4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 104672a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104672a9 jne 0x104672c1 */
  if (!C.zf) goto L_104672c1;
  /* 104672ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104672ae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 104672b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104672b6 je 0x104672c1 */
  if (C.zf) goto L_104672c1;
  /* 104672b8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 104672bf jmp 0x104672c8 */
  goto L_104672c8;
L_104672c1:;
  /* 104672c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_104672c8:;
  /* 104672c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104672cb mov esp, ebp */
  ESP = (EBP);
  /* 104672cd pop ebp */
  EBP = (pop32());
  /* 104672ce ret  */
  ESPCHK(0x10467270u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x104672d0 (1485 bytes, 453 insns) */
void f_104672d0(void) {
  FTRACE(0x104672d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104672d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104672d1 mov ebp, esp */
  EBP = (ESP);
  /* 104672d3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104672d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104672d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104672dc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 104672df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104672e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104672e5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104672e8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104672eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104672ee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 104672f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104672f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104672f7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104672fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467300 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10467307 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046730a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046730d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467310 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10467313 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467316 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10467318 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046731b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1046731e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467321 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467324 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10467327 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1046732a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046732c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1046732f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467332 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10467335 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10467338 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046733b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1046733e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10467340 jne 0x10467468 */
  if (!C.zf) goto L_10467468;
  /* 10467346 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10467349 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1046734c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046734f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10467352 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467356 jbe 0x1046735f */
  if ((C.cf||C.zf)) goto L_1046735f;
  /* 10467358 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1046735f:;
  /* 1046735f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467362 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467365 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10467368 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046736b jne 0x10467441 */
  if (!C.zf) goto L_10467441;
  /* 10467371 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467375 jae 0x104673d6 */
  if (!C.cf) goto L_104673d6;
  /* 10467377 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1046737c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046737f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10467381 not eax */
  EAX = (~(EAX));
  /* 10467383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467386 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467389 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1046738d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046738f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467392 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467395 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10467399 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1046739c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046739f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 104673a2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104673a5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104673a8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104673ab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 104673ae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104673b1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104673b4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104673b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104673ba jne 0x104673d4 */
  if (!C.zf) goto L_104673d4;
  /* 104673bc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104673c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104673c4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104673c6 not eax */
  EAX = (~(EAX));
  /* 104673c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104673cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104673cd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104673cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104673d2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_104673d4:;
  /* 104673d4 jmp 0x10467441 */
  goto L_10467441;
L_104673d6:;
  /* 104673d6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104673d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104673dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104673e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104673e3 not edx */
  EDX = (~(EDX));
  /* 104673e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104673e8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104673eb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 104673f2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104673f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104673f7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104673fa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10467401 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467404 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467407 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1046740a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1046740d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467410 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467413 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10467416 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467419 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046741c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10467420 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10467422 jne 0x10467441 */
  if (!C.zf) goto L_10467441;
  /* 10467424 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10467427 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046742a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1046742f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10467431 not edx */
  EDX = (~(EDX));
  /* 10467433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467436 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10467439 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1046743b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046743e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10467441:;
  /* 10467441 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467444 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10467447 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1046744a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1046744d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10467450 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467453 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10467456 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467459 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1046745c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1046745f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467462 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467465 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10467468:;
  /* 10467468 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046746b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1046746e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467471 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10467474 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467478 jbe 0x10467481 */
  if ((C.cf||C.zf)) goto L_10467481;
  /* 1046747a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10467481:;
  /* 10467481 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10467484 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10467487 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10467489 jne 0x104675e5 */
  if (!C.zf) goto L_104675e5;
  /* 1046748f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467492 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467495 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10467498 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046749b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1046749e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104674a1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 104674a4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104674a8 jbe 0x104674b1 */
  if ((C.cf||C.zf)) goto L_104674b1;
  /* 104674aa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_104674b1:;
  /* 104674b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104674b4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104674b7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 104674ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104674bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104674c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104674c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104674c6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104674ca jbe 0x104674d3 */
  if ((C.cf||C.zf)) goto L_104674d3;
  /* 104674cc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_104674d3:;
  /* 104674d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104674d6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104674d9 je 0x104675df */
  if (C.zf) goto L_104675df;
  /* 104674df mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104674e2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104674e5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 104674e8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104674eb jne 0x104675c1 */
  if (!C.zf) goto L_104675c1;
  /* 104674f1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104674f5 jae 0x10467556 */
  if (!C.cf) goto L_10467556;
  /* 104674f7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104674fc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104674ff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10467501 not edx */
  EDX = (~(EDX));
  /* 10467503 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467506 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467509 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1046750d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1046750f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467512 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467515 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10467519 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1046751c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046751f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10467522 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10467525 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467528 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046752b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1046752e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467531 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467534 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10467538 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046753a jne 0x10467554 */
  if (!C.zf) goto L_10467554;
  /* 1046753c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10467541 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10467544 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10467546 not edx */
  EDX = (~(EDX));
  /* 10467548 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046754b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046754d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1046754f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467552 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10467554:;
  /* 10467554 jmp 0x104675c1 */
  goto L_104675c1;
L_10467556:;
  /* 10467556 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10467559 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046755c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10467561 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10467563 not eax */
  EAX = (~(EAX));
  /* 10467565 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467568 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1046756b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10467572 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10467574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467577 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1046757a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10467581 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467584 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467587 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1046758a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1046758d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467590 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467593 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10467596 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467599 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046759c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104675a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104675a2 jne 0x104675c1 */
  if (!C.zf) goto L_104675c1;
  /* 104675a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104675a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104675aa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104675af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104675b1 not eax */
  EAX = (~(EAX));
  /* 104675b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104675b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104675b9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 104675bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104675be mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104675c1:;
  /* 104675c1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104675c4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104675c7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 104675ca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104675cd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104675d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 104675d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104675d6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 104675d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 104675dc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_104675df:;
  /* 104675df mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 104675e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_104675e5:;
  /* 104675e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104675e8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104675eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104675ed jne 0x104675fb */
  if (!C.zf) goto L_104675fb;
  /* 104675ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104675f2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104675f5 je 0x1046770b */
  if (C.zf) goto L_1046770b;
L_104675fb:;
  /* 104675fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104675fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467601 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10467604 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10467607 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046760a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046760d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10467610 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10467613 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467616 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10467619 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1046761c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046761f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467622 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10467625 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467628 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1046762b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046762e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10467631 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467634 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467637 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1046763a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046763d jne 0x1046770b */
  if (!C.zf) goto L_1046770b;
  /* 10467643 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467647 jae 0x104676a4 */
  if (!C.cf) goto L_104676a4;
  /* 10467649 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1046764c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046764f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10467653 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467656 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467659 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1046765c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1046765f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467662 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467665 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10467668 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046766a jne 0x10467682 */
  if (!C.zf) goto L_10467682;
  /* 1046766c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10467671 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10467674 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10467676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467679 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046767b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1046767d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467680 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10467682:;
  /* 10467682 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10467687 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046768a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1046768c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046768f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467692 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10467696 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10467698 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046769b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1046769e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 104676a2 jmp 0x1046770b */
  goto L_1046770b;
L_104676a4:;
  /* 104676a4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104676a7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104676aa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 104676ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104676b1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104676b4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104676b7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104676ba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104676bd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104676c0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 104676c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104676c5 jne 0x104676e2 */
  if (!C.zf) goto L_104676e2;
  /* 104676c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104676ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104676cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104676d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104676d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104676d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104676da or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104676dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104676df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104676e2:;
  /* 104676e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104676e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104676e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104676ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104676ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104676f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 104676f5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104676fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104676fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467701 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10467704 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1046770b:;
  /* 1046770b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046770e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467711 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10467713 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467716 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467719 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046771c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1046771f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467722 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10467724 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467727 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046772a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1046772c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046772f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467732 jne 0x10467899 */
  if (!C.zf) goto L_10467899;
  /* 10467738 cmp dword ptr [0x1048fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046773f je 0x10467888 */
  if (C.zf) goto L_10467888;
  /* 10467745 mov eax, dword ptr [0x1048fe18] */
  EAX = (r32((uint32_t)(0x1048fe18)));
  /* 1046774a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1046774d mov ecx, dword ptr [0x1048fe20] */
  ECX = (r32((uint32_t)(0x1048fe20)));
  /* 10467753 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10467756 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467758 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1046775b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10467760 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10467765 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467768 push eax */
  push32((uint32_t)(EAX));
  /* 10467769 call dword ptr [0x10490304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490304))), 0x1046776fu);
  /* 1046776f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10467774 mov ecx, dword ptr [0x1048fe18] */
  ECX = (r32((uint32_t)(0x1048fe18)));
  /* 1046777a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1046777c mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 10467781 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10467784 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10467786 mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 1046778c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1046778f mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 10467794 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10467797 mov edx, dword ptr [0x1048fe18] */
  EDX = (r32((uint32_t)(0x1048fe18)));
  /* 1046779d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 104677a8 mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 104677ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104677b0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 104677b3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104677b6 mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 104677bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104677be mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 104677c1 mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 104677c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104677ca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 104677ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104677d0 jne 0x104677e6 */
  if (!C.zf) goto L_104677e6;
  /* 104677d2 mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 104677d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 104677db and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 104677dd mov ecx, dword ptr [0x1048fe20] */
  ECX = (r32((uint32_t)(0x1048fe20)));
  /* 104677e3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_104677e6:;
  /* 104677e6 mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 104677ec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104677f0 jne 0x10467888 */
  if (!C.zf) goto L_10467888;
  /* 104677f6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 104677fb push 0 */
  push32((uint32_t)(0x0u));
  /* 104677fd mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 10467802 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10467805 push ecx */
  push32((uint32_t)(ECX));
  /* 10467806 call dword ptr [0x10490304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490304))), 0x1046780cu);
  /* 1046780c mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 10467812 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10467815 push eax */
  push32((uint32_t)(EAX));
  /* 10467816 push 0 */
  push32((uint32_t)(0x0u));
  /* 10467818 mov ecx, dword ptr [0x1048fe2c] */
  ECX = (r32((uint32_t)(0x1048fe2c)));
  /* 1046781e push ecx */
  push32((uint32_t)(ECX));
  /* 1046781f call dword ptr [0x10490300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490300))), 0x10467825u);
  /* 10467825 mov edx, dword ptr [0x1048fe24] */
  EDX = (r32((uint32_t)(0x1048fe24)));
  /* 1046782b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046782e mov eax, dword ptr [0x1048fe28] */
  EAX = (r32((uint32_t)(0x1048fe28)));
  /* 10467833 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467835 mov ecx, dword ptr [0x1048fe20] */
  ECX = (r32((uint32_t)(0x1048fe20)));
  /* 1046783b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046783e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467840 push eax */
  push32((uint32_t)(EAX));
  /* 10467841 mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 10467847 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046784a push edx */
  push32((uint32_t)(EDX));
  /* 1046784b mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 10467850 push eax */
  push32((uint32_t)(EAX));
  /* 10467851 call 0x1046ae00 */
  push32(0x10467856u); f_1046ae00();
  /* 10467856 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10467859 mov ecx, dword ptr [0x1048fe24] */
  ECX = (r32((uint32_t)(0x1048fe24)));
  /* 1046785f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467862 mov dword ptr [0x1048fe24], ecx */
  w32((uint32_t)(0x1048fe24), (ECX));
  /* 10467868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046786b cmp edx, dword ptr [0x1048fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467871 jbe 0x1046787c */
  if ((C.cf||C.zf)) goto L_1046787c;
  /* 10467873 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467876 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467879 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1046787c:;
  /* 1046787c mov ecx, dword ptr [0x1048fe28] */
  ECX = (r32((uint32_t)(0x1048fe28)));
  /* 10467882 mov dword ptr [0x1048fe1c], ecx */
  w32((uint32_t)(0x1048fe1c), (ECX));
L_10467888:;
  /* 10467888 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046788b mov dword ptr [0x1048fe20], edx */
  w32((uint32_t)(0x1048fe20), (EDX));
  /* 10467891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467894 mov dword ptr [0x1048fe18], eax */
  w32((uint32_t)(0x1048fe18), (EAX));
L_10467899:;
  /* 10467899 mov esp, ebp */
  ESP = (EBP);
  /* 1046789b pop ebp */
  EBP = (pop32());
  /* 1046789c ret  */
  ESPCHK(0x104672d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078a0 @ 0x104678a0 (1334 bytes, 427 insns) */
void f_104678a0(void) {
  FTRACE(0x104678a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104678a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104678a1 mov ebp, esp */
  EBP = (ESP);
  /* 104678a3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104678a6 push esi */
  push32((uint32_t)(ESI));
  /* 104678a7 mov eax, dword ptr [0x1048fe24] */
  EAX = (r32((uint32_t)(0x1048fe24)));
  /* 104678ac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104678af mov ecx, dword ptr [0x1048fe28] */
  ECX = (r32((uint32_t)(0x1048fe28)));
  /* 104678b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104678b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104678ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104678bd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104678c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 104678c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 104678c6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104678c9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 104678cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104678cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 104678d2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104678d6 jge 0x104678ec */
  if ((C.sf==C.of)) goto L_104678ec;
  /* 104678d8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104678db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104678de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104678e0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104678e3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 104678ea jmp 0x10467901 */
  goto L_10467901;
L_104678ec:;
  /* 104678ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104678f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104678f6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104678f9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104678fc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104678fe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10467901:;
  /* 10467901 mov ecx, dword ptr [0x1048fe1c] */
  ECX = (r32((uint32_t)(0x1048fe1c)));
  /* 10467907 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1046790a:;
  /* 1046790a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046790d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467910 jae 0x10467936 */
  if (!C.cf) goto L_10467936;
  /* 10467912 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467915 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10467918 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1046791a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046791d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10467920 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10467923 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10467925 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10467927 je 0x1046792b */
  if (C.zf) goto L_1046792b;
  /* 10467929 jmp 0x10467936 */
  goto L_10467936;
L_1046792b:;
  /* 1046792b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046792e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467931 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10467934 jmp 0x1046790a */
  goto L_1046790a;
L_10467936:;
  /* 10467936 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467939 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046793c jne 0x10467a1d */
  if (!C.zf) goto L_10467a1d;
  /* 10467942 mov eax, dword ptr [0x1048fe28] */
  EAX = (r32((uint32_t)(0x1048fe28)));
  /* 10467947 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1046794a:;
  /* 1046794a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046794d cmp ecx, dword ptr [0x1048fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467953 jae 0x10467979 */
  if (!C.cf) goto L_10467979;
  /* 10467955 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467958 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046795b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1046795d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467960 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10467963 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10467966 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10467968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046796a je 0x1046796e */
  if (C.zf) goto L_1046796e;
  /* 1046796c jmp 0x10467979 */
  goto L_10467979;
L_1046796e:;
  /* 1046796e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467971 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467974 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10467977 jmp 0x1046794a */
  goto L_1046794a;
L_10467979:;
  /* 10467979 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046797c cmp ecx, dword ptr [0x1048fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467982 jne 0x10467a1d */
  if (!C.zf) goto L_10467a1d;
L_10467988:;
  /* 10467988 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046798b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046798e jae 0x104679a6 */
  if (!C.cf) goto L_104679a6;
  /* 10467990 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467993 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467997 je 0x1046799b */
  if (C.zf) goto L_1046799b;
  /* 10467999 jmp 0x104679a6 */
  goto L_104679a6;
L_1046799b:;
  /* 1046799b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046799e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104679a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104679a4 jmp 0x10467988 */
  goto L_10467988;
L_104679a6:;
  /* 104679a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104679a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104679ac jne 0x104679f7 */
  if (!C.zf) goto L_104679f7;
  /* 104679ae mov eax, dword ptr [0x1048fe28] */
  EAX = (r32((uint32_t)(0x1048fe28)));
  /* 104679b3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_104679b6:;
  /* 104679b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104679b9 cmp ecx, dword ptr [0x1048fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104679bf jae 0x104679d7 */
  if (!C.cf) goto L_104679d7;
  /* 104679c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104679c4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104679c8 je 0x104679cc */
  if (C.zf) goto L_104679cc;
  /* 104679ca jmp 0x104679d7 */
  goto L_104679d7;
L_104679cc:;
  /* 104679cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104679cf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104679d2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104679d5 jmp 0x104679b6 */
  goto L_104679b6;
L_104679d7:;
  /* 104679d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104679da cmp ecx, dword ptr [0x1048fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104679e0 jne 0x104679f7 */
  if (!C.zf) goto L_104679f7;
  /* 104679e2 call 0x10467de0 */
  push32(0x104679e7u); f_10467de0();
  /* 104679e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104679ea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104679ee jne 0x104679f7 */
  if (!C.zf) goto L_104679f7;
  /* 104679f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104679f2 jmp 0x10467dd1 */
  goto L_10467dd1;
L_104679f7:;
  /* 104679f7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104679fa push edx */
  push32((uint32_t)(EDX));
  /* 104679fb call 0x10467ef0 */
  push32(0x10467a00u); f_10467ef0();
  /* 10467a00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10467a03 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467a06 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10467a09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10467a0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467a0e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10467a11 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467a14 jne 0x10467a1d */
  if (!C.zf) goto L_10467a1d;
  /* 10467a16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10467a18 jmp 0x10467dd1 */
  goto L_10467dd1;
L_10467a1d:;
  /* 10467a1d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467a20 mov dword ptr [0x1048fe1c], edx */
  w32((uint32_t)(0x1048fe1c), (EDX));
  /* 10467a26 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467a29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10467a2c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10467a2f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467a32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10467a34 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10467a37 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467a3b je 0x10467a60 */
  if (C.zf) goto L_10467a60;
  /* 10467a3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467a40 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467a43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10467a46 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10467a4a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467a4d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467a50 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10467a53 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10467a5a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10467a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10467a5e jne 0x10467a95 */
  if (!C.zf) goto L_10467a95;
L_10467a60:;
  /* 10467a60 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10467a67:;
  /* 10467a67 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467a6a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467a6d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10467a70 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10467a74 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467a77 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467a7a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10467a7d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10467a84 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10467a86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10467a88 jne 0x10467a95 */
  if (!C.zf) goto L_10467a95;
  /* 10467a8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467a8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467a90 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10467a93 jmp 0x10467a67 */
  goto L_10467a67;
L_10467a95:;
  /* 10467a95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467a98 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10467a9e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467aa1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10467aa8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10467aab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10467ab2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467ab5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467ab8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10467abb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10467abf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10467ac2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467ac6 jne 0x10467ae2 */
  if (!C.zf) goto L_10467ae2;
  /* 10467ac8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10467acf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467ad2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467ad5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10467ad8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10467adf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10467ae2:;
  /* 10467ae2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467ae6 jl 0x10467afb */
  if ((C.sf!=C.of)) goto L_10467afb;
  /* 10467ae8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10467aeb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10467aed mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10467af0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10467af3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467af6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10467af9 jmp 0x10467ae2 */
  goto L_10467ae2;
L_10467afb:;
  /* 10467afb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10467afe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467b01 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10467b05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10467b08 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467b0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10467b0d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467b10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10467b13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467b16 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10467b19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467b1c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10467b1f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467b23 jle 0x10467b2c */
  if ((C.zf||C.sf!=C.of)) goto L_10467b2c;
  /* 10467b25 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10467b2c:;
  /* 10467b2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10467b2f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467b32 je 0x10467d50 */
  if (C.zf) goto L_10467d50;
  /* 10467b38 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467b3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467b3e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10467b41 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467b44 jne 0x10467c1a */
  if (!C.zf) goto L_10467c1a;
  /* 10467b4a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467b4e jge 0x10467baf */
  if ((C.sf==C.of)) goto L_10467baf;
  /* 10467b50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10467b55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10467b58 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10467b5a not eax */
  EAX = (~(EAX));
  /* 10467b5c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467b5f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467b62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10467b66 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10467b68 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467b6b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467b6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10467b72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467b75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467b78 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10467b7b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10467b7e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467b81 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467b84 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10467b87 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467b8a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467b8d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10467b91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10467b93 jne 0x10467bad */
  if (!C.zf) goto L_10467bad;
  /* 10467b95 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10467b9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10467b9d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10467b9f not eax */
  EAX = (~(EAX));
  /* 10467ba1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467ba4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10467ba6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10467ba8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467bab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10467bad:;
  /* 10467bad jmp 0x10467c1a */
  goto L_10467c1a;
L_10467baf:;
  /* 10467baf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10467bb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467bb5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10467bba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10467bbc not edx */
  EDX = (~(EDX));
  /* 10467bbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467bc1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467bc4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10467bcb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10467bcd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467bd0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467bd3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10467bda mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467bdd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467be0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10467be3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10467be6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467be9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467bec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10467bef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467bf2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467bf5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10467bf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10467bfb jne 0x10467c1a */
  if (!C.zf) goto L_10467c1a;
  /* 10467bfd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10467c00 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467c03 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10467c08 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10467c0a not edx */
  EDX = (~(EDX));
  /* 10467c0c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467c0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10467c12 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10467c14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467c17 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10467c1a:;
  /* 10467c1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c1d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10467c20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c23 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10467c26 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10467c29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10467c2f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c32 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10467c35 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10467c38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467c3c je 0x10467d50 */
  if (C.zf) goto L_10467d50;
  /* 10467c42 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10467c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467c48 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10467c4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10467c4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10467c54 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10467c57 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10467c5a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10467c60 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10467c63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10467c66 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c69 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10467c6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10467c72 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c75 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10467c78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467c7e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10467c81 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467c84 jne 0x10467d50 */
  if (!C.zf) goto L_10467d50;
  /* 10467c8a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467c8e jge 0x10467cea */
  if ((C.sf==C.of)) goto L_10467cea;
  /* 10467c90 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467c93 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467c96 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10467c9a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467c9d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467ca0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10467ca3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10467ca5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467ca8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467cab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10467cae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10467cb0 jne 0x10467cc8 */
  if (!C.zf) goto L_10467cc8;
  /* 10467cb2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10467cb7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10467cba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10467cbc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467cbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10467cc1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10467cc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467cc6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10467cc8:;
  /* 10467cc8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10467ccd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10467cd0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10467cd2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467cd5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467cd8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10467cdc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10467cde mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467ce1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467ce4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10467ce8 jmp 0x10467d50 */
  goto L_10467d50;
L_10467cea:;
  /* 10467cea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467ced add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467cf0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10467cf4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467cf7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467cfa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10467cfd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10467cff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467d02 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467d05 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10467d08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10467d0a jne 0x10467d27 */
  if (!C.zf) goto L_10467d27;
  /* 10467d0c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10467d0f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467d12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10467d17 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10467d19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467d1c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10467d1f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10467d21 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467d24 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10467d27:;
  /* 10467d27 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10467d2a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467d2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10467d32 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10467d34 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467d37 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467d3a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10467d41 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10467d43 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467d46 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467d49 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10467d50:;
  /* 10467d50 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467d54 je 0x10467d6a */
  if (C.zf) goto L_10467d6a;
  /* 10467d56 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467d59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467d5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10467d5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467d61 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467d64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467d67 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10467d6a:;
  /* 10467d6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467d6d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467d70 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10467d73 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10467d76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467d79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467d7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10467d7e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10467d81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467d84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467d87 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467d8a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10467d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467d90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10467d92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467d95 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10467d97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467d9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467d9d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10467d9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10467da1 jne 0x10467dc3 */
  if (!C.zf) goto L_10467dc3;
  /* 10467da3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467da6 cmp eax, dword ptr [0x1048fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467dac jne 0x10467dc3 */
  if (!C.zf) goto L_10467dc3;
  /* 10467dae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467db1 cmp ecx, dword ptr [0x1048fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467db7 jne 0x10467dc3 */
  if (!C.zf) goto L_10467dc3;
  /* 10467db9 mov dword ptr [0x1048fe20], 0 */
  w32((uint32_t)(0x1048fe20), (0x0u));
L_10467dc3:;
  /* 10467dc3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10467dc6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10467dc9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10467dcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467dce add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10467dd1:;
  /* 10467dd1 pop esi */
  ESI = (pop32());
  /* 10467dd2 mov esp, ebp */
  ESP = (EBP);
  /* 10467dd4 pop ebp */
  EBP = (pop32());
  /* 10467dd5 ret  */
  ESPCHK(0x104678a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007de0 @ 0x10467de0 (271 bytes, 78 insns) */
void f_10467de0(void) {
  FTRACE(0x10467de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10467de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10467de1 mov ebp, esp */
  EBP = (ESP);
  /* 10467de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10467de4 mov eax, dword ptr [0x1048fe24] */
  EAX = (r32((uint32_t)(0x1048fe24)));
  /* 10467de9 cmp eax, dword ptr [0x1048fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467def jne 0x10467e3b */
  if (!C.zf) goto L_10467e3b;
  /* 10467df1 mov ecx, dword ptr [0x1048fe08] */
  ECX = (r32((uint32_t)(0x1048fe08)));
  /* 10467df7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467dfa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10467dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10467dfe mov edx, dword ptr [0x1048fe28] */
  EDX = (r32((uint32_t)(0x1048fe28)));
  /* 10467e04 push edx */
  push32((uint32_t)(EDX));
  /* 10467e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10467e07 mov eax, dword ptr [0x1048fe2c] */
  EAX = (r32((uint32_t)(0x1048fe2c)));
  /* 10467e0c push eax */
  push32((uint32_t)(EAX));
  /* 10467e0d call dword ptr [0x10490324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490324))), 0x10467e13u);
  /* 10467e13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10467e16 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467e1a jne 0x10467e23 */
  if (!C.zf) goto L_10467e23;
  /* 10467e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10467e1e jmp 0x10467eeb */
  goto L_10467eeb;
L_10467e23:;
  /* 10467e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467e26 mov dword ptr [0x1048fe28], ecx */
  w32((uint32_t)(0x1048fe28), (ECX));
  /* 10467e2c mov edx, dword ptr [0x1048fe08] */
  EDX = (r32((uint32_t)(0x1048fe08)));
  /* 10467e32 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467e35 mov dword ptr [0x1048fe08], edx */
  w32((uint32_t)(0x1048fe08), (EDX));
L_10467e3b:;
  /* 10467e3b mov eax, dword ptr [0x1048fe24] */
  EAX = (r32((uint32_t)(0x1048fe24)));
  /* 10467e40 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10467e43 mov ecx, dword ptr [0x1048fe28] */
  ECX = (r32((uint32_t)(0x1048fe28)));
  /* 10467e49 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467e4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10467e4e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10467e53 push 8 */
  push32((uint32_t)(0x8u));
  /* 10467e55 mov edx, dword ptr [0x1048fe2c] */
  EDX = (r32((uint32_t)(0x1048fe2c)));
  /* 10467e5b push edx */
  push32((uint32_t)(EDX));
  /* 10467e5c call dword ptr [0x10490320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490320))), 0x10467e62u);
  /* 10467e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467e65 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10467e68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467e6b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467e6f jne 0x10467e75 */
  if (!C.zf) goto L_10467e75;
  /* 10467e71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10467e73 jmp 0x10467eeb */
  goto L_10467eeb;
L_10467e75:;
  /* 10467e75 push 4 */
  push32((uint32_t)(0x4u));
  /* 10467e77 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10467e7c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10467e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10467e83 call dword ptr [0x10490328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490328))), 0x10467e89u);
  /* 10467e89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467e8c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10467e8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467e92 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467e96 jne 0x10467eb2 */
  if (!C.zf) goto L_10467eb2;
  /* 10467e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467e9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10467e9e push ecx */
  push32((uint32_t)(ECX));
  /* 10467e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10467ea1 mov edx, dword ptr [0x1048fe2c] */
  EDX = (r32((uint32_t)(0x1048fe2c)));
  /* 10467ea7 push edx */
  push32((uint32_t)(EDX));
  /* 10467ea8 call dword ptr [0x10490300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490300))), 0x10467eaeu);
  /* 10467eae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10467eb0 jmp 0x10467eeb */
  goto L_10467eeb;
L_10467eb2:;
  /* 10467eb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467eb5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10467ebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467ebe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10467ec5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467ec8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10467ecf mov eax, dword ptr [0x1048fe24] */
  EAX = (r32((uint32_t)(0x1048fe24)));
  /* 10467ed4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467ed7 mov dword ptr [0x1048fe24], eax */
  w32((uint32_t)(0x1048fe24), (EAX));
  /* 10467edc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467edf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10467ee2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10467ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10467eeb:;
  /* 10467eeb mov esp, ebp */
  ESP = (EBP);
  /* 10467eed pop ebp */
  EBP = (pop32());
  /* 10467eee ret  */
  ESPCHK(0x10467de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ef0 @ 0x10467ef0 (494 bytes, 149 insns) */
void f_10467ef0(void) {
  FTRACE(0x10467ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10467ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10467ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10467ef3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10467ef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467ef9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10467efc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10467eff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467f02 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10467f05 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10467f08 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10467f0f:;
  /* 10467f0f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467f13 jl 0x10467f28 */
  if ((C.sf!=C.of)) goto L_10467f28;
  /* 10467f15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10467f18 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10467f1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10467f1d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10467f20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467f23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10467f26 jmp 0x10467f0f */
  goto L_10467f0f;
L_10467f28:;
  /* 10467f28 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10467f2b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10467f31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10467f34 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10467f3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10467f3e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10467f45 jmp 0x10467f50 */
  goto L_10467f50;
L_10467f47:;
  /* 10467f47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10467f4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467f4d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10467f50:;
  /* 10467f50 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467f54 jge 0x10467f76 */
  if ((C.sf==C.of)) goto L_10467f76;
  /* 10467f56 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10467f59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10467f5c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10467f5f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10467f62 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467f65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467f68 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10467f6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467f6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467f71 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10467f74 jmp 0x10467f47 */
  goto L_10467f47;
L_10467f76:;
  /* 10467f76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10467f79 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10467f7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10467f7f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10467f82 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467f84 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10467f87 push 4 */
  push32((uint32_t)(0x4u));
  /* 10467f89 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10467f8e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10467f93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467f96 push edx */
  push32((uint32_t)(EDX));
  /* 10467f97 call dword ptr [0x10490328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490328))), 0x10467f9du);
  /* 10467f9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10467f9f jne 0x10467fa9 */
  if (!C.zf) goto L_10467fa9;
  /* 10467fa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10467fa4 jmp 0x104680da */
  goto L_104680da;
L_10467fa9:;
  /* 10467fa9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467fac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467fb1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10467fb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10467fb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10467fba jmp 0x10467fc8 */
  goto L_10467fc8;
L_10467fbc:;
  /* 10467fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467fbf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467fc5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10467fc8:;
  /* 10467fc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467fcb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10467fce ja 0x1046802d */
  if ((!C.cf&&!C.zf)) goto L_1046802d;
  /* 10467fd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467fd3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10467fda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467fdd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10467fe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10467fea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10467fed mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10467ff0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467ff3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10467ff9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10467ffc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468002 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10468005 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10468008 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046800b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468011 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10468014 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10468017 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046801a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046801f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10468022 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468025 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1046802b jmp 0x10467fbc */
  goto L_10467fbc;
L_1046802d:;
  /* 1046802d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10468030 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468036 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10468039 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046803c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046803f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468042 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10468045 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468048 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1046804b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1046804e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10468051 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468054 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10468057 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046805a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046805d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468060 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10468063 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468066 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10468069 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1046806c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046806f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468072 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10468075 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10468078 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046807b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10468083 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10468086 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468089 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10468094 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468097 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1046809b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046809e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 104680a1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 104680a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104680a7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 104680aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104680ac jne 0x104680bd */
  if (!C.zf) goto L_104680bd;
  /* 104680ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104680b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104680b4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104680b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104680ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_104680bd:;
  /* 104680bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104680c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104680c5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104680c7 not edx */
  EDX = (~(EDX));
  /* 104680c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104680cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104680cf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104680d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104680d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 104680d7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_104680da:;
  /* 104680da mov esp, ebp */
  ESP = (EBP);
  /* 104680dc pop ebp */
  EBP = (pop32());
  /* 104680dd ret  */
  ESPCHK(0x10467ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x104680e0 (1515 bytes, 489 insns) */
void f_104680e0(void) {
  FTRACE(0x104680e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104680e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104680e1 mov ebp, esp */
  EBP = (ESP);
  /* 104680e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104680e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104680e9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104680ec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 104680ee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104680f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104680f4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104680f7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 104680fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104680fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10468100 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468103 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10468106 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10468109 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1046810c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046810f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468112 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10468118 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046811b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10468122 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10468125 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10468128 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046812b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1046812e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468131 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10468133 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468136 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10468139 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046813c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046813f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10468142 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468145 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10468147 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1046814a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046814d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468150 jle 0x10468406 */
  if ((C.zf||C.sf!=C.of)) goto L_10468406;
  /* 10468156 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10468159 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1046815c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046815e jne 0x1046816b */
  if (!C.zf) goto L_1046816b;
  /* 10468160 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10468163 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468166 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468169 jle 0x10468172 */
  if ((C.zf||C.sf!=C.of)) goto L_10468172;
L_1046816b:;
  /* 1046816b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046816d jmp 0x104686c7 */
  goto L_104686c7;
L_10468172:;
  /* 10468172 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10468175 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10468178 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046817b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1046817e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468182 jbe 0x1046818b */
  if ((C.cf||C.zf)) goto L_1046818b;
  /* 10468184 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1046818b:;
  /* 1046818b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046818e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468191 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10468194 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468197 jne 0x1046826d */
  if (!C.zf) goto L_1046826d;
  /* 1046819d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104681a1 jae 0x10468202 */
  if (!C.cf) goto L_10468202;
  /* 104681a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104681a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104681ab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104681ad not edx */
  EDX = (~(EDX));
  /* 104681af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104681b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104681b5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104681b9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104681bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104681be mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104681c1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104681c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104681c8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104681cb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104681ce sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104681d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104681d4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104681d7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104681da mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104681dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104681e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104681e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104681e6 jne 0x10468200 */
  if (!C.zf) goto L_10468200;
  /* 104681e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104681ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104681f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104681f2 not edx */
  EDX = (~(EDX));
  /* 104681f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104681f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104681f9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104681fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104681fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10468200:;
  /* 10468200 jmp 0x1046826d */
  goto L_1046826d;
L_10468202:;
  /* 10468202 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10468205 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468208 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1046820d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1046820f not eax */
  EAX = (~(EAX));
  /* 10468211 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468214 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468217 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1046821e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10468220 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468223 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468226 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1046822d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468230 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468233 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10468236 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10468239 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046823c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046823f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10468242 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468245 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468248 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1046824c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046824e jne 0x1046826d */
  if (!C.zf) goto L_1046826d;
  /* 10468250 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10468253 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468256 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1046825b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1046825d not eax */
  EAX = (~(EAX));
  /* 1046825f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468262 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10468265 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10468267 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046826a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1046826d:;
  /* 1046826d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468270 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10468273 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468276 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10468279 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1046827c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046827f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10468282 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468285 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10468288 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1046828b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046828e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468291 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468294 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10468297 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046829b jle 0x104683e7 */
  if ((C.zf||C.sf!=C.of)) goto L_104683e7;
  /* 104682a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104682a4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104682a7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 104682aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104682ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 104682b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104682b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 104682b6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104682ba jbe 0x104682c3 */
  if ((C.cf||C.zf)) goto L_104682c3;
  /* 104682bc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_104682c3:;
  /* 104682c3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104682c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104682c9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 104682cc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 104682cf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104682d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104682d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104682d8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104682db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104682de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104682e1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 104682e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104682e7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104682ea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 104682ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104682f0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104682f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104682f6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104682f9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104682fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104682ff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10468302 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468305 jne 0x104683d3 */
  if (!C.zf) goto L_104683d3;
  /* 1046830b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046830f jae 0x1046836c */
  if (!C.cf) goto L_1046836c;
  /* 10468311 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468314 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468317 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1046831b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046831e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468321 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10468324 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10468327 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046832a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046832d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10468330 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10468332 jne 0x1046834a */
  if (!C.zf) goto L_1046834a;
  /* 10468334 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10468339 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046833c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1046833e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468341 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10468343 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10468345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468348 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1046834a:;
  /* 1046834a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1046834f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10468352 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10468354 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468357 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046835a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1046835e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10468360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468363 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468366 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1046836a jmp 0x104683d3 */
  goto L_104683d3;
L_1046836c:;
  /* 1046836c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046836f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468372 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10468376 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468379 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046837c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1046837f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10468382 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468385 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468388 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1046838b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046838d jne 0x104683aa */
  if (!C.zf) goto L_104683aa;
  /* 1046838f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10468392 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468395 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1046839a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1046839c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046839f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104683a2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104683a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104683a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_104683aa:;
  /* 104683aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104683ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104683b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 104683b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 104683b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104683ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104683bd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 104683c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 104683c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104683c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104683cc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_104683d3:;
  /* 104683d3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104683d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104683d9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104683db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104683de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104683e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104683e4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_104683e7:;
  /* 104683e7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104683ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104683ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104683f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104683f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104683f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104683f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104683fb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104683fe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10468401 jmp 0x104686c2 */
  goto L_104686c2;
L_10468406:;
  /* 10468406 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10468409 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046840c jge 0x104686c2 */
  if ((C.sf==C.of)) goto L_104686c2;
  /* 10468412 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10468415 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468418 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046841b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1046841d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10468420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468423 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468426 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468429 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1046842c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046842f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468432 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10468435 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10468438 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046843b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1046843e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10468441 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10468444 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468447 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1046844a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046844e jbe 0x10468457 */
  if ((C.cf||C.zf)) goto L_10468457;
  /* 10468450 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10468457:;
  /* 10468457 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046845a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1046845d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046845f jne 0x104685a0 */
  if (!C.zf) goto L_104685a0;
  /* 10468465 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10468468 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1046846b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046846e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10468471 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468475 jbe 0x1046847e */
  if ((C.cf||C.zf)) goto L_1046847e;
  /* 10468477 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1046847e:;
  /* 1046847e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468481 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468484 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10468487 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046848a jne 0x10468560 */
  if (!C.zf) goto L_10468560;
  /* 10468490 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468494 jae 0x104684f5 */
  if (!C.cf) goto L_104684f5;
  /* 10468496 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1046849b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046849e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104684a0 not edx */
  EDX = (~(EDX));
  /* 104684a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104684a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 104684a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 104684ac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104684ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104684b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104684b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 104684b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104684bb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104684be mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104684c1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 104684c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104684c7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104684ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 104684cd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104684d0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104684d3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104684d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104684d9 jne 0x104684f3 */
  if (!C.zf) goto L_104684f3;
  /* 104684db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 104684e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104684e3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 104684e5 not edx */
  EDX = (~(EDX));
  /* 104684e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104684ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104684ec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 104684ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104684f1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_104684f3:;
  /* 104684f3 jmp 0x10468560 */
  goto L_10468560;
L_104684f5:;
  /* 104684f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104684f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104684fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10468500 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10468502 not eax */
  EAX = (~(EAX));
  /* 10468504 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468507 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046850a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10468511 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10468513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468516 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468519 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10468520 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468523 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468526 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10468529 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1046852c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046852f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468532 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10468535 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468538 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046853b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1046853f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10468541 jne 0x10468560 */
  if (!C.zf) goto L_10468560;
  /* 10468543 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10468546 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468549 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1046854e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10468550 not eax */
  EAX = (~(EAX));
  /* 10468552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468555 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10468558 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1046855a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046855d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10468560:;
  /* 10468560 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468563 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10468566 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468569 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1046856c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1046856f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468572 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10468575 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468578 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1046857b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1046857e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10468581 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468584 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10468587 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046858a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1046858d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468590 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10468593 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468597 jbe 0x104685a0 */
  if ((C.cf||C.zf)) goto L_104685a0;
  /* 10468599 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_104685a0:;
  /* 104685a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104685a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104685a6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 104685a9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104685ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104685af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104685b2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104685b5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 104685b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104685bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104685be mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 104685c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104685c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104685c7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 104685ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104685cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104685d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104685d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 104685d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104685d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104685dc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 104685df cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104685e2 jne 0x104686ae */
  if (!C.zf) goto L_104686ae;
  /* 104685e8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104685ec jae 0x10468648 */
  if (!C.cf) goto L_10468648;
  /* 104685ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 104685f1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104685f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 104685f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104685fb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104685fe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10468601 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10468603 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468606 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468609 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1046860c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046860e jne 0x10468626 */
  if (!C.zf) goto L_10468626;
  /* 10468610 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10468615 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468618 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1046861a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046861d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046861f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10468621 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468624 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10468626:;
  /* 10468626 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1046862b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046862e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10468630 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468633 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468636 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1046863a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1046863c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046863f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468642 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10468646 jmp 0x104686ae */
  goto L_104686ae;
L_10468648:;
  /* 10468648 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046864b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046864e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10468652 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468655 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468658 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1046865b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1046865d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468660 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468663 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10468666 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10468668 jne 0x10468685 */
  if (!C.zf) goto L_10468685;
  /* 1046866a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046866d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468670 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10468675 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10468677 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046867a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1046867d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1046867f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468682 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10468685:;
  /* 10468685 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468688 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046868b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10468690 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10468692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468695 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10468698 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1046869f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104686a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104686a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 104686a7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_104686ae:;
  /* 104686ae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104686b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104686b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 104686b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104686b9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104686bc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104686bf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_104686c2:;
  /* 104686c2 mov eax, 1 */
  EAX = (0x1u);
L_104686c7:;
  /* 104686c7 mov esp, ebp */
  ESP = (EBP);
  /* 104686c9 pop ebp */
  EBP = (pop32());
  /* 104686ca ret  */
  ESPCHK(0x104680e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086d0 @ 0x104686d0 (304 bytes, 79 insns) */
void f_104686d0(void) {
  FTRACE(0x104686d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104686d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104686d1 mov ebp, esp */
  EBP = (ESP);
  /* 104686d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104686d4 cmp dword ptr [0x1048fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104686db je 0x104687fc */
  if (C.zf) goto L_104687fc;
  /* 104686e1 mov eax, dword ptr [0x1048fe18] */
  EAX = (r32((uint32_t)(0x1048fe18)));
  /* 104686e6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 104686e9 mov ecx, dword ptr [0x1048fe20] */
  ECX = (r32((uint32_t)(0x1048fe20)));
  /* 104686ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104686f2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104686f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104686f7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 104686fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10468701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468704 push eax */
  push32((uint32_t)(EAX));
  /* 10468705 call dword ptr [0x10490304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490304))), 0x1046870bu);
  /* 1046870b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10468710 mov ecx, dword ptr [0x1048fe18] */
  ECX = (r32((uint32_t)(0x1048fe18)));
  /* 10468716 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10468718 mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 1046871d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10468720 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10468722 mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 10468728 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1046872b mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 10468730 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10468733 mov edx, dword ptr [0x1048fe18] */
  EDX = (r32((uint32_t)(0x1048fe18)));
  /* 10468739 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10468744 mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 10468749 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1046874c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1046874f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10468752 mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 10468757 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1046875a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1046875d mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 10468763 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10468766 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1046876a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046876c jne 0x10468782 */
  if (!C.zf) goto L_10468782;
  /* 1046876e mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 10468774 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10468777 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10468779 mov ecx, dword ptr [0x1048fe20] */
  ECX = (r32((uint32_t)(0x1048fe20)));
  /* 1046877f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10468782:;
  /* 10468782 mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 10468788 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046878c jne 0x104687f2 */
  if (!C.zf) goto L_104687f2;
  /* 1046878e cmp dword ptr [0x1048fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468795 jle 0x104687f2 */
  if ((C.zf||C.sf!=C.of)) goto L_104687f2;
  /* 10468797 mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 1046879c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1046879f push ecx */
  push32((uint32_t)(ECX));
  /* 104687a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104687a2 mov edx, dword ptr [0x1048fe2c] */
  EDX = (r32((uint32_t)(0x1048fe2c)));
  /* 104687a8 push edx */
  push32((uint32_t)(EDX));
  /* 104687a9 call dword ptr [0x10490300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490300))), 0x104687afu);
  /* 104687af mov eax, dword ptr [0x1048fe24] */
  EAX = (r32((uint32_t)(0x1048fe24)));
  /* 104687b4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104687b7 mov ecx, dword ptr [0x1048fe28] */
  ECX = (r32((uint32_t)(0x1048fe28)));
  /* 104687bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104687bf mov edx, dword ptr [0x1048fe20] */
  EDX = (r32((uint32_t)(0x1048fe20)));
  /* 104687c5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104687c8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104687ca push ecx */
  push32((uint32_t)(ECX));
  /* 104687cb mov eax, dword ptr [0x1048fe20] */
  EAX = (r32((uint32_t)(0x1048fe20)));
  /* 104687d0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104687d3 push eax */
  push32((uint32_t)(EAX));
  /* 104687d4 mov ecx, dword ptr [0x1048fe20] */
  ECX = (r32((uint32_t)(0x1048fe20)));
  /* 104687da push ecx */
  push32((uint32_t)(ECX));
  /* 104687db call 0x1046ae00 */
  push32(0x104687e0u); f_1046ae00();
  /* 104687e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104687e3 mov edx, dword ptr [0x1048fe24] */
  EDX = (r32((uint32_t)(0x1048fe24)));
  /* 104687e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104687ec mov dword ptr [0x1048fe24], edx */
  w32((uint32_t)(0x1048fe24), (EDX));
L_104687f2:;
  /* 104687f2 mov dword ptr [0x1048fe20], 0 */
  w32((uint32_t)(0x1048fe20), (0x0u));
L_104687fc:;
  /* 104687fc mov esp, ebp */
  ESP = (EBP);
  /* 104687fe pop ebp */
  EBP = (pop32());
  /* 104687ff ret  */
  ESPCHK(0x104686d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008800 @ 0x10468800 (1565 bytes, 343 insns) */
void f_10468800(void) {
  FTRACE(0x10468800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10468800 push ebp */
  push32((uint32_t)(EBP));
  /* 10468801 mov ebp, esp */
  EBP = (ESP);
  /* 10468803 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468809 mov eax, dword ptr [0x1048fe24] */
  EAX = (r32((uint32_t)(0x1048fe24)));
  /* 1046880e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10468811 push eax */
  push32((uint32_t)(EAX));
  /* 10468812 mov ecx, dword ptr [0x1048fe28] */
  ECX = (r32((uint32_t)(0x1048fe28)));
  /* 10468818 push ecx */
  push32((uint32_t)(ECX));
  /* 10468819 call dword ptr [0x104902d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d8))), 0x1046881fu);
  /* 1046881f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10468821 je 0x1046882b */
  if (C.zf) goto L_1046882b;
  /* 10468823 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10468826 jmp 0x10468e19 */
  goto L_10468e19;
L_1046882b:;
  /* 1046882b mov edx, dword ptr [0x1048fe28] */
  EDX = (r32((uint32_t)(0x1048fe28)));
  /* 10468831 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10468837 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10468841 jmp 0x10468852 */
  goto L_10468852;
L_10468843:;
  /* 10468843 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10468849 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046884c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10468852:;
  /* 10468852 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10468858 cmp ecx, dword ptr [0x1048fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046885e jge 0x10468e17 */
  if ((C.sf==C.of)) goto L_10468e17;
  /* 10468864 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1046886a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1046886d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10468873 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10468878 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1046887e push ecx */
  push32((uint32_t)(ECX));
  /* 1046887f call dword ptr [0x104902d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d8))), 0x10468885u);
  /* 10468885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10468887 je 0x10468893 */
  if (C.zf) goto L_10468893;
  /* 10468889 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1046888e jmp 0x10468e19 */
  goto L_10468e19;
L_10468893:;
  /* 10468893 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10468899 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1046889c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 104688a2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 104688a8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104688ae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 104688b1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 104688b7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104688ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104688bd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 104688c7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 104688d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104688d8 jmp 0x104688e3 */
  goto L_104688e3;
L_104688da:;
  /* 104688da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104688dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104688e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104688e3:;
  /* 104688e3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104688e7 jge 0x10468ddb */
  if ((C.sf==C.of)) goto L_10468ddb;
  /* 104688ed mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 104688f7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10468901 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1046890b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10468915 jmp 0x10468926 */
  goto L_10468926;
L_10468917:;
  /* 10468917 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1046891d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468920 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10468926:;
  /* 10468926 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046892d jge 0x10468942 */
  if ((C.sf==C.of)) goto L_10468942;
  /* 1046892f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10468935 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10468940 jmp 0x10468917 */
  goto L_10468917;
L_10468942:;
  /* 10468942 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468946 jl 0x10468d7d */
  if ((C.sf!=C.of)) goto L_10468d7d;
  /* 1046894c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10468951 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10468957 push ecx */
  push32((uint32_t)(ECX));
  /* 10468958 call dword ptr [0x104902d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d8))), 0x1046895eu);
  /* 1046895e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10468960 je 0x1046896c */
  if (C.zf) goto L_1046896c;
  /* 10468962 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10468967 jmp 0x10468e19 */
  goto L_10468e19;
L_1046896c:;
  /* 1046896c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10468972 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10468975 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1046897f jmp 0x10468990 */
  goto L_10468990;
L_10468981:;
  /* 10468981 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10468987 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046898a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10468990:;
  /* 10468990 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468997 jge 0x10468b14 */
  if ((C.sf==C.of)) goto L_10468b14;
  /* 1046899d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104689a0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104689a3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 104689a9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104689af add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104689b5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 104689bb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 104689c1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104689c5 jne 0x104689d2 */
  if (!C.zf) goto L_104689d2;
  /* 104689c7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 104689cd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104689d0 je 0x104689dc */
  if (C.zf) goto L_104689dc;
L_104689d2:;
  /* 104689d2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 104689d7 jmp 0x10468e19 */
  goto L_10468e19;
L_104689dc:;
  /* 104689dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 104689e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104689e4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 104689ea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 104689f0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 104689f6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 104689fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 104689ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10468a01 je 0x10468a39 */
  if (C.zf) goto L_10468a39;
  /* 10468a03 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10468a09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468a0c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10468a12 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468a1c jle 0x10468a28 */
  if ((C.zf||C.sf!=C.of)) goto L_10468a28;
  /* 10468a1e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10468a23 jmp 0x10468e19 */
  goto L_10468e19;
L_10468a28:;
  /* 10468a28 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10468a2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468a31 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10468a37 jmp 0x10468a7b */
  goto L_10468a7b;
L_10468a39:;
  /* 10468a39 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10468a3f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10468a42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468a45 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10468a4b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468a52 jle 0x10468a5e */
  if ((C.zf||C.sf!=C.of)) goto L_10468a5e;
  /* 10468a54 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10468a5e:;
  /* 10468a5e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10468a64 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10468a6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468a6e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10468a74 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10468a7b:;
  /* 10468a7b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468a82 jl 0x10468a9d */
  if ((C.sf!=C.of)) goto L_10468a9d;
  /* 10468a84 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10468a8a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10468a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10468a8f jne 0x10468a9d */
  if (!C.zf) goto L_10468a9d;
  /* 10468a91 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468a9b jle 0x10468aa7 */
  if ((C.zf||C.sf!=C.of)) goto L_10468aa7;
L_10468a9d:;
  /* 10468a9d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10468aa2 jmp 0x10468e19 */
  goto L_10468e19;
L_10468aa7:;
  /* 10468aa7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10468aad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468ab3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10468ab6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468abc je 0x10468ac8 */
  if (C.zf) goto L_10468ac8;
  /* 10468abe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10468ac3 jmp 0x10468e19 */
  goto L_10468e19;
L_10468ac8:;
  /* 10468ac8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10468ace add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468ad4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10468ada mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10468ae0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468ae6 jb 0x104689dc */
  if (C.cf) goto L_104689dc;
  /* 10468aec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10468af2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468af8 je 0x10468b04 */
  if (C.zf) goto L_10468b04;
  /* 10468afa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10468aff jmp 0x10468e19 */
  goto L_10468e19;
L_10468b04:;
  /* 10468b04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10468b07 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468b0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10468b0f jmp 0x10468981 */
  goto L_10468981;
L_10468b14:;
  /* 10468b14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10468b17 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10468b19 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468b1f je 0x10468b2b */
  if (C.zf) goto L_10468b2b;
  /* 10468b21 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10468b26 jmp 0x10468e19 */
  goto L_10468e19;
L_10468b2b:;
  /* 10468b2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10468b2e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10468b34 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10468b3b jmp 0x10468b46 */
  goto L_10468b46;
L_10468b3d:;
  /* 10468b3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468b40 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468b43 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10468b46:;
  /* 10468b46 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468b4a jge 0x10468d7d */
  if ((C.sf==C.of)) goto L_10468d7d;
  /* 10468b50 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10468b5a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10468b60 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10468b66:;
  /* 10468b66 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10468b6c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10468b6f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10468b75 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10468b7b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468b81 je 0x10468caa */
  if (C.zf) goto L_10468caa;
  /* 10468b87 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468b8a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10468b90 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468b97 je 0x10468caa */
  if (C.zf) goto L_10468caa;
  /* 10468b9d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10468ba3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468ba9 jb 0x10468bbe */
  if (C.cf) goto L_10468bbe;
  /* 10468bab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10468bb1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468bb6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468bbc jb 0x10468bc8 */
  if (C.cf) goto L_10468bc8;
L_10468bbe:;
  /* 10468bbe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10468bc3 jmp 0x10468e19 */
  goto L_10468e19;
L_10468bc8:;
  /* 10468bc8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10468bce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10468bd4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10468bda mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10468be0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468be3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10468be6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10468be9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468bee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10468bf4:;
  /* 10468bf4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10468bf7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468bfd je 0x10468c1e */
  if (C.zf) goto L_10468c1e;
  /* 10468bff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10468c02 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468c08 jne 0x10468c0c */
  if (!C.zf) goto L_10468c0c;
  /* 10468c0a jmp 0x10468c1e */
  goto L_10468c1e;
L_10468c0c:;
  /* 10468c0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10468c0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10468c11 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10468c14 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10468c17 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468c19 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10468c1c jmp 0x10468bf4 */
  goto L_10468bf4;
L_10468c1e:;
  /* 10468c1e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10468c21 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468c27 jne 0x10468c33 */
  if (!C.zf) goto L_10468c33;
  /* 10468c29 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10468c2e jmp 0x10468e19 */
  goto L_10468e19;
L_10468c33:;
  /* 10468c33 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10468c39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10468c3b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10468c3e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468c41 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10468c47 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468c4e jle 0x10468c5a */
  if ((C.zf||C.sf!=C.of)) goto L_10468c5a;
  /* 10468c50 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10468c5a:;
  /* 10468c5a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10468c60 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468c63 je 0x10468c6f */
  if (C.zf) goto L_10468c6f;
  /* 10468c65 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10468c6a jmp 0x10468e19 */
  goto L_10468e19;
L_10468c6f:;
  /* 10468c6f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10468c75 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10468c78 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468c7e je 0x10468c8a */
  if (C.zf) goto L_10468c8a;
  /* 10468c80 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10468c85 jmp 0x10468e19 */
  goto L_10468e19;
L_10468c8a:;
  /* 10468c8a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10468c90 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10468c96 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10468c9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468c9f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10468ca5 jmp 0x10468b66 */
  goto L_10468b66;
L_10468caa:;
  /* 10468caa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468cb1 je 0x10468d21 */
  if (C.zf) goto L_10468d21;
  /* 10468cb3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468cb7 jge 0x10468ceb */
  if ((C.sf==C.of)) goto L_10468ceb;
  /* 10468cb9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10468cbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468cc1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10468cc3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10468cc9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10468ccb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10468cd1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10468cd6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468cd9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10468cdb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10468ce1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10468ce3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10468ce9 jmp 0x10468d21 */
  goto L_10468d21;
L_10468ceb:;
  /* 10468ceb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468cee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468cf1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10468cf6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10468cf8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10468cfe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10468d00 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10468d06 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468d09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468d0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10468d11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10468d13 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10468d19 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10468d1b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10468d21:;
  /* 10468d21 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10468d27 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10468d2a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468d30 jne 0x10468d44 */
  if (!C.zf) goto L_10468d44;
  /* 10468d32 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10468d35 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10468d3b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468d42 je 0x10468d4e */
  if (C.zf) goto L_10468d4e;
L_10468d44:;
  /* 10468d44 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10468d49 jmp 0x10468e19 */
  goto L_10468e19;
L_10468d4e:;
  /* 10468d4e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10468d54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10468d57 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468d5d je 0x10468d69 */
  if (C.zf) goto L_10468d69;
  /* 10468d5f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10468d64 jmp 0x10468e19 */
  goto L_10468e19;
L_10468d69:;
  /* 10468d69 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10468d6f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468d72 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10468d78 jmp 0x10468b3d */
  goto L_10468b3d;
L_10468d7d:;
  /* 10468d7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10468d80 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10468d86 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10468d8c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468d90 jne 0x10468daa */
  if (!C.zf) goto L_10468daa;
  /* 10468d92 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10468d95 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10468d9b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10468da1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468da8 je 0x10468db1 */
  if (C.zf) goto L_10468db1;
L_10468daa:;
  /* 10468daa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10468daf jmp 0x10468e19 */
  goto L_10468e19;
L_10468db1:;
  /* 10468db1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10468db7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468dbd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10468dc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10468dc6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468dcb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10468dce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468dd1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10468dd3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10468dd6 jmp 0x104688da */
  goto L_104688da;
L_10468ddb:;
  /* 10468ddb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10468de1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10468de7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468de9 jne 0x10468dfc */
  if (!C.zf) goto L_10468dfc;
  /* 10468deb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10468df1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10468df7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468dfa je 0x10468e03 */
  if (C.zf) goto L_10468e03;
L_10468dfc:;
  /* 10468dfc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10468e01 jmp 0x10468e19 */
  goto L_10468e19;
L_10468e03:;
  /* 10468e03 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10468e09 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468e0c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10468e12 jmp 0x10468843 */
  goto L_10468843;
L_10468e17:;
  /* 10468e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10468e19:;
  /* 10468e19 mov esp, ebp */
  ESP = (EBP);
  /* 10468e1b pop ebp */
  EBP = (pop32());
  /* 10468e1c ret  */
  ESPCHK(0x10468800u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e20 @ 0x10468e20 (250 bytes, 92 insns) */
void f_10468e20(void) {
  FTRACE(0x10468e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10468e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10468e21 mov ebp, esp */
  EBP = (ESP);
  /* 10468e23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468e26 push ebx */
  push32((uint32_t)(EBX));
  /* 10468e27 push esi */
  push32((uint32_t)(ESI));
  /* 10468e28 push edi */
  push32((uint32_t)(EDI));
  /* 10468e29 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10468e2c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10468e2f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10468e32 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10468e35:;
  /* 10468e35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468e39 jne 0x10468e59 */
  if (!C.zf) goto L_10468e59;
  /* 10468e3b push 0x10489e58 */
  push32((uint32_t)(0x10489e58u));
  /* 10468e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10468e42 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10468e44 push 0x10489e4c */
  push32((uint32_t)(0x10489e4cu));
  /* 10468e49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10468e4b call 0x10461fd0 */
  push32(0x10468e50u); f_10461fd0();
  /* 10468e50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10468e53 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468e56 jne 0x10468e59 */
  if (!C.zf) goto L_10468e59;
  /* 10468e58 int3  */
  x86_unimpl("int3 @ 0x10468e58");
L_10468e59:;
  /* 10468e59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10468e5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10468e5d jne 0x10468e35 */
  if (!C.zf) goto L_10468e35;
L_10468e5f:;
  /* 10468e5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468e63 jne 0x10468e83 */
  if (!C.zf) goto L_10468e83;
  /* 10468e65 push 0x10489e3c */
  push32((uint32_t)(0x10489e3cu));
  /* 10468e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10468e6c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10468e6e push 0x10489e4c */
  push32((uint32_t)(0x10489e4cu));
  /* 10468e73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10468e75 call 0x10461fd0 */
  push32(0x10468e7au); f_10461fd0();
  /* 10468e7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10468e7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468e80 jne 0x10468e83 */
  if (!C.zf) goto L_10468e83;
  /* 10468e82 int3  */
  x86_unimpl("int3 @ 0x10468e82");
L_10468e83:;
  /* 10468e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10468e85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10468e87 jne 0x10468e5f */
  if (!C.zf) goto L_10468e5f;
  /* 10468e89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468e8c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10468e93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468e99 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10468e9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468e9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468ea2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10468ea4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468ea7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10468eae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10468eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10468eb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10468eb5 push edx */
  push32((uint32_t)(EDX));
  /* 10468eb6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468eb9 push eax */
  push32((uint32_t)(EAX));
  /* 10468eba call 0x10469ea0 */
  push32(0x10468ebfu); f_10469ea0();
  /* 10468ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10468ec2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10468ec5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468ec8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10468ecb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468ece mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468ed1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10468ed4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468ed7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468edb jl 0x10468eff */
  if ((C.sf!=C.of)) goto L_10468eff;
  /* 10468edd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468ee0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10468ee2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10468ee5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10468ee7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10468eed mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10468ef0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468ef3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10468ef5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468ef8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468efb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10468efd jmp 0x10468f10 */
  goto L_10468f10;
L_10468eff:;
  /* 10468eff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10468f02 push edx */
  push32((uint32_t)(EDX));
  /* 10468f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10468f05 call 0x10469c20 */
  push32(0x10468f0au); f_10469c20();
  /* 10468f0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10468f0d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10468f10:;
  /* 10468f10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10468f13 pop edi */
  EDI = (pop32());
  /* 10468f14 pop esi */
  ESI = (pop32());
  /* 10468f15 pop ebx */
  EBX = (pop32());
  /* 10468f16 mov esp, ebp */
  ESP = (EBP);
  /* 10468f18 pop ebp */
  EBP = (pop32());
  /* 10468f19 ret  */
  ESPCHK(0x10468e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f20 @ 0x10468f20 (183 bytes, 58 insns) */
void f_10468f20(void) {
  FTRACE(0x10468f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10468f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10468f21 mov ebp, esp */
  EBP = (ESP);
  /* 10468f23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468f29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10468f2c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10468f31 ja 0x10468f4a */
  if ((!C.cf&&!C.zf)) goto L_10468f4a;
  /* 10468f33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468f36 mov edx, dword ptr [0x1048cc98] */
  EDX = (r32((uint32_t)(0x1048cc98)));
  /* 10468f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10468f3e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10468f42 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10468f45 jmp 0x10468fd3 */
  goto L_10468fd3;
L_10468f4a:;
  /* 10468f4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468f4d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10468f50 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10468f56 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10468f5c mov edx, dword ptr [0x1048cc98] */
  EDX = (r32((uint32_t)(0x1048cc98)));
  /* 10468f62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10468f64 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10468f68 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10468f6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10468f6f je 0x10468f93 */
  if (C.zf) goto L_10468f93;
  /* 10468f71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468f74 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10468f77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10468f7d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10468f80 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10468f83 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10468f86 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10468f8a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10468f91 jmp 0x10468fa4 */
  goto L_10468fa4;
L_10468f93:;
  /* 10468f93 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10468f96 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10468f99 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10468f9d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10468fa4:;
  /* 10468fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10468fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10468fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10468faa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10468fad push ecx */
  push32((uint32_t)(ECX));
  /* 10468fae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10468fb1 push edx */
  push32((uint32_t)(EDX));
  /* 10468fb2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10468fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10468fb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10468fb8 call 0x1046b140 */
  push32(0x10468fbdu); f_1046b140();
  /* 10468fbd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10468fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10468fc2 jne 0x10468fc8 */
  if (!C.zf) goto L_10468fc8;
  /* 10468fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10468fc6 jmp 0x10468fd3 */
  goto L_10468fd3;
L_10468fc8:;
  /* 10468fc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10468fcb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10468fd0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10468fd3:;
  /* 10468fd3 mov esp, ebp */
  ESP = (EBP);
  /* 10468fd5 pop ebp */
  EBP = (pop32());
  /* 10468fd6 ret  */
  ESPCHK(0x10468f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x10468fe0 (836 bytes, 238 insns) */
void f_10468fe0(void) {
  FTRACE(0x10468fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10468fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10468fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10468fe3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10468fe6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10468fe8 call 0x10466910 */
  push32(0x10468fedu); f_10466910();
  /* 10468fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10468ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10468ff3 push eax */
  push32((uint32_t)(EAX));
  /* 10468ff4 call 0x10469330 */
  push32(0x10468ff9u); f_10469330();
  /* 10468ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10468ffc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10468fff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10469002 cmp ecx, dword ptr [0x1048fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469008 jne 0x1046901b */
  if (!C.zf) goto L_1046901b;
  /* 1046900a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1046900c call 0x104669b0 */
  push32(0x10469011u); f_104669b0();
  /* 10469011 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10469016 jmp 0x10469320 */
  goto L_10469320;
L_1046901b:;
  /* 1046901b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046901f jne 0x1046903c */
  if (!C.zf) goto L_1046903c;
  /* 10469021 call 0x10469410 */
  push32(0x10469026u); f_10469410();
  /* 10469026 call 0x10469490 */
  push32(0x1046902bu); f_10469490();
  /* 1046902b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1046902d call 0x104669b0 */
  push32(0x10469032u); f_104669b0();
  /* 10469032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469035 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10469037 jmp 0x10469320 */
  goto L_10469320;
L_1046903c:;
  /* 1046903c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10469043 jmp 0x1046904e */
  goto L_1046904e;
L_10469045:;
  /* 10469045 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469048 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046904b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1046904e:;
  /* 1046904e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469052 jae 0x1046919f */
  if (!C.cf) goto L_1046919f;
  /* 10469058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046905b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046905e mov ecx, dword ptr [eax + 0x1048ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x1048ceb8)));
  /* 10469064 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469067 jne 0x1046919a */
  if (!C.zf) goto L_1046919a;
  /* 1046906d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10469074 jmp 0x1046907f */
  goto L_1046907f;
L_10469076:;
  /* 10469076 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10469079 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046907c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1046907f:;
  /* 1046907f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469086 jae 0x10469094 */
  if (!C.cf) goto L_10469094;
  /* 10469088 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046908b mov byte ptr [eax + 0x1048fd00], 0 */
  w8((uint32_t)(EAX + 0x1048fd00), (0x0u));
  /* 10469092 jmp 0x10469076 */
  goto L_10469076;
L_10469094:;
  /* 10469094 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1046909b jmp 0x104690a6 */
  goto L_104690a6;
L_1046909d:;
  /* 1046909d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104690a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104690a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_104690a6:;
  /* 104690a6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104690aa jae 0x10469127 */
  if (!C.cf) goto L_10469127;
  /* 104690ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104690af imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104690b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104690b5 lea ecx, [edx + eax*8 + 0x1048cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1048cec8));
  /* 104690bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104690bf jmp 0x104690ca */
  goto L_104690ca;
L_104690c1:;
  /* 104690c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104690c4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104690c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_104690ca:;
  /* 104690ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104690cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104690cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104690d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104690d3 je 0x10469122 */
  if (C.zf) goto L_10469122;
  /* 104690d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104690d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104690da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 104690dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104690df je 0x10469122 */
  if (C.zf) goto L_10469122;
  /* 104690e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104690e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104690e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104690e8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 104690eb jmp 0x104690f6 */
  goto L_104690f6;
L_104690ed:;
  /* 104690ed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104690f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104690f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104690f6:;
  /* 104690f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104690f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104690fb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 104690fe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469101 ja 0x10469120 */
  if ((!C.cf&&!C.zf)) goto L_10469120;
  /* 10469103 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10469106 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10469109 mov dl, byte ptr [eax + 0x1048fd01] */
  DL = (r8((uint32_t)(EAX + 0x1048fd01)));
  /* 1046910f or dl, byte ptr [ecx + 0x1048ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1048ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10469115 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10469118 mov byte ptr [eax + 0x1048fd01], dl */
  w8((uint32_t)(EAX + 0x1048fd01), (DL));
  /* 1046911e jmp 0x104690ed */
  goto L_104690ed;
L_10469120:;
  /* 10469120 jmp 0x104690c1 */
  goto L_104690c1;
L_10469122:;
  /* 10469122 jmp 0x1046909d */
  goto L_1046909d;
L_10469127:;
  /* 10469127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046912a mov dword ptr [0x1048fb64], ecx */
  w32((uint32_t)(0x1048fb64), (ECX));
  /* 10469130 mov dword ptr [0x1048fbec], 1 */
  w32((uint32_t)(0x1048fbec), (0x1u));
  /* 1046913a mov edx, dword ptr [0x1048fb64] */
  EDX = (r32((uint32_t)(0x1048fb64)));
  /* 10469140 push edx */
  push32((uint32_t)(EDX));
  /* 10469141 call 0x10469390 */
  push32(0x10469146u); f_10469390();
  /* 10469146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469149 mov dword ptr [0x1048fe04], eax */
  w32((uint32_t)(0x1048fe04), (EAX));
  /* 1046914e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10469155 jmp 0x10469160 */
  goto L_10469160;
L_10469157:;
  /* 10469157 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046915a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046915d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10469160:;
  /* 10469160 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469164 jae 0x10469184 */
  if (!C.cf) goto L_10469184;
  /* 10469166 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469169 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046916c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046916f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10469172 mov cx, word ptr [ecx + eax*2 + 0x1048cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1048cebc)));
  /* 1046917a mov word ptr [edx*2 + 0x1048fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x1048fbe0), (CX));
  /* 10469182 jmp 0x10469157 */
  goto L_10469157;
L_10469184:;
  /* 10469184 call 0x10469490 */
  push32(0x10469189u); f_10469490();
  /* 10469189 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1046918b call 0x104669b0 */
  push32(0x10469190u); f_104669b0();
  /* 10469190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10469195 jmp 0x10469320 */
  goto L_10469320;
L_1046919a:;
  /* 1046919a jmp 0x10469045 */
  goto L_10469045;
L_1046919f:;
  /* 1046919f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 104691a2 push edx */
  push32((uint32_t)(EDX));
  /* 104691a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104691a6 push eax */
  push32((uint32_t)(EAX));
  /* 104691a7 call dword ptr [0x1049032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049032c))), 0x104691adu);
  /* 104691ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104691b0 jne 0x104692f2 */
  if (!C.zf) goto L_104692f2;
  /* 104691b6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 104691bd jmp 0x104691c8 */
  goto L_104691c8;
L_104691bf:;
  /* 104691bf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104691c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104691c5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_104691c8:;
  /* 104691c8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104691cf jae 0x104691dd */
  if (!C.cf) goto L_104691dd;
  /* 104691d1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 104691d4 mov byte ptr [edx + 0x1048fd00], 0 */
  w8((uint32_t)(EDX + 0x1048fd00), (0x0u));
  /* 104691db jmp 0x104691bf */
  goto L_104691bf;
L_104691dd:;
  /* 104691dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104691e0 mov dword ptr [0x1048fb64], eax */
  w32((uint32_t)(0x1048fb64), (EAX));
  /* 104691e5 mov dword ptr [0x1048fe04], 0 */
  w32((uint32_t)(0x1048fe04), (0x0u));
  /* 104691ef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104691f3 jbe 0x104692ae */
  if ((C.cf||C.zf)) goto L_104692ae;
  /* 104691f9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 104691fc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 104691ff jmp 0x1046920a */
  goto L_1046920a;
L_10469201:;
  /* 10469201 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10469204 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469207 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1046920a:;
  /* 1046920a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046920d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046920f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10469211 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10469213 je 0x1046925c */
  if (C.zf) goto L_1046925c;
  /* 10469215 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10469218 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046921a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1046921d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046921f je 0x1046925c */
  if (C.zf) goto L_1046925c;
  /* 10469221 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10469224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10469226 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10469228 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1046922b jmp 0x10469236 */
  goto L_10469236;
L_1046922d:;
  /* 1046922d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10469230 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469233 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10469236:;
  /* 10469236 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10469239 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046923b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1046923e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469241 ja 0x1046925a */
  if ((!C.cf&&!C.zf)) goto L_1046925a;
  /* 10469243 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10469246 mov cl, byte ptr [eax + 0x1048fd01] */
  CL = (r8((uint32_t)(EAX + 0x1048fd01)));
  /* 1046924c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1046924f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10469252 mov byte ptr [edx + 0x1048fd01], cl */
  w8((uint32_t)(EDX + 0x1048fd01), (CL));
  /* 10469258 jmp 0x1046922d */
  goto L_1046922d;
L_1046925a:;
  /* 1046925a jmp 0x10469201 */
  goto L_10469201;
L_1046925c:;
  /* 1046925c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10469263 jmp 0x1046926e */
  goto L_1046926e;
L_10469265:;
  /* 10469265 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10469268 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046926b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1046926e:;
  /* 1046926e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469275 jae 0x1046928e */
  if (!C.cf) goto L_1046928e;
  /* 10469277 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046927a mov dl, byte ptr [ecx + 0x1048fd01] */
  DL = (r8((uint32_t)(ECX + 0x1048fd01)));
  /* 10469280 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10469283 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10469286 mov byte ptr [eax + 0x1048fd01], dl */
  w8((uint32_t)(EAX + 0x1048fd01), (DL));
  /* 1046928c jmp 0x10469265 */
  goto L_10469265;
L_1046928e:;
  /* 1046928e mov ecx, dword ptr [0x1048fb64] */
  ECX = (r32((uint32_t)(0x1048fb64)));
  /* 10469294 push ecx */
  push32((uint32_t)(ECX));
  /* 10469295 call 0x10469390 */
  push32(0x1046929au); f_10469390();
  /* 1046929a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046929d mov dword ptr [0x1048fe04], eax */
  w32((uint32_t)(0x1048fe04), (EAX));
  /* 104692a2 mov dword ptr [0x1048fbec], 1 */
  w32((uint32_t)(0x1048fbec), (0x1u));
  /* 104692ac jmp 0x104692b8 */
  goto L_104692b8;
L_104692ae:;
  /* 104692ae mov dword ptr [0x1048fbec], 0 */
  w32((uint32_t)(0x1048fbec), (0x0u));
L_104692b8:;
  /* 104692b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 104692bf jmp 0x104692ca */
  goto L_104692ca;
L_104692c1:;
  /* 104692c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104692c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104692c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104692ca:;
  /* 104692ca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104692ce jae 0x104692df */
  if (!C.cf) goto L_104692df;
  /* 104692d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104692d3 mov word ptr [eax*2 + 0x1048fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1048fbe0), (0x0u));
  /* 104692dd jmp 0x104692c1 */
  goto L_104692c1;
L_104692df:;
  /* 104692df call 0x10469490 */
  push32(0x104692e4u); f_10469490();
  /* 104692e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104692e6 call 0x104669b0 */
  push32(0x104692ebu); f_104669b0();
  /* 104692eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104692ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104692f0 jmp 0x10469320 */
  goto L_10469320;
L_104692f2:;
  /* 104692f2 cmp dword ptr [0x1048e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104692f9 je 0x10469313 */
  if (C.zf) goto L_10469313;
  /* 104692fb call 0x10469410 */
  push32(0x10469300u); f_10469410();
  /* 10469300 call 0x10469490 */
  push32(0x10469305u); f_10469490();
  /* 10469305 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10469307 call 0x104669b0 */
  push32(0x1046930cu); f_104669b0();
  /* 1046930c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046930f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10469311 jmp 0x10469320 */
  goto L_10469320;
L_10469313:;
  /* 10469313 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10469315 call 0x104669b0 */
  push32(0x1046931au); f_104669b0();
  /* 1046931a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046931d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10469320:;
  /* 10469320 mov esp, ebp */
  ESP = (EBP);
  /* 10469322 pop ebp */
  EBP = (pop32());
  /* 10469323 ret  */
  ESPCHK(0x10468fe0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10469330 (89 bytes, 21 insns) */
void f_10469330(void) {
  FTRACE(0x10469330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469330 push ebp */
  push32((uint32_t)(EBP));
  /* 10469331 mov ebp, esp */
  EBP = (ESP);
  /* 10469333 mov dword ptr [0x1048e670], 0 */
  w32((uint32_t)(0x1048e670), (0x0u));
  /* 1046933d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469341 jne 0x10469355 */
  if (!C.zf) goto L_10469355;
  /* 10469343 mov dword ptr [0x1048e670], 1 */
  w32((uint32_t)(0x1048e670), (0x1u));
  /* 1046934d call dword ptr [0x10490334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490334))), 0x10469353u);
  /* 10469353 jmp 0x10469387 */
  goto L_10469387;
L_10469355:;
  /* 10469355 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469359 jne 0x1046936d */
  if (!C.zf) goto L_1046936d;
  /* 1046935b mov dword ptr [0x1048e670], 1 */
  w32((uint32_t)(0x1048e670), (0x1u));
  /* 10469365 call dword ptr [0x10490330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490330))), 0x1046936bu);
  /* 1046936b jmp 0x10469387 */
  goto L_10469387;
L_1046936d:;
  /* 1046936d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469371 jne 0x10469384 */
  if (!C.zf) goto L_10469384;
  /* 10469373 mov dword ptr [0x1048e670], 1 */
  w32((uint32_t)(0x1048e670), (0x1u));
  /* 1046937d mov eax, dword ptr [0x1048e690] */
  EAX = (r32((uint32_t)(0x1048e690)));
  /* 10469382 jmp 0x10469387 */
  goto L_10469387;
L_10469384:;
  /* 10469384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10469387:;
  /* 10469387 pop ebp */
  EBP = (pop32());
  /* 10469388 ret  */
  ESPCHK(0x10469330u, _esp0);
  ESP += 4; return;
}

/* FUN_10009390 @ 0x10469390 (46 bytes, 14 insns) */
void f_10469390(void) {
  FTRACE(0x10469390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469390 push ebp */
  push32((uint32_t)(EBP));
  /* 10469391 mov ebp, esp */
  EBP = (ESP);
  /* 10469393 push ecx */
  push32((uint32_t)(ECX));
  /* 10469394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10469397 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046939a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046939d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104693a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104693a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104693aa ja 0x104693da */
  if ((!C.cf&&!C.zf)) { jmp_ind(0x104693dau); return; }
  /* 104693ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104693af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104693b1 mov dl, byte ptr [eax + 0x104693f4] */
  DL = (r8((uint32_t)(EAX + 0x104693f4)));
  /* 104693b7 jmp dword ptr [edx*4 + 0x104693e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x104693e0)))); return;
}

/* caseD_3a4 @ 0x104693be (11 bytes, 12 insns) */
void f_104693be(void) {
  FTRACE(0x104693beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104693be mov eax, 0x411 */
  EAX = (0x411u);
  /* 104693c3 jmp 0x104693dc */
  goto L_104693dc;
  /* 104693c5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 104693ca jmp 0x104693dc */
  goto L_104693dc;
  /* 104693cc mov eax, 0x412 */
  EAX = (0x412u);
  /* 104693d1 jmp 0x104693dc */
  goto L_104693dc;
  /* 104693d3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 104693d8 jmp 0x104693dc */
  goto L_104693dc;
  /* 104693da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104693dc:;
  /* 104693dc mov esp, ebp */
  ESP = (EBP);
  /* 104693de pop ebp */
  EBP = (pop32());
  /* 104693df ret  */
  ESPCHK(0x104693beu, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10469410 (116 bytes, 29 insns) */
void f_10469410(void) {
  FTRACE(0x10469410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469410 push ebp */
  push32((uint32_t)(EBP));
  /* 10469411 mov ebp, esp */
  EBP = (ESP);
  /* 10469413 push ecx */
  push32((uint32_t)(ECX));
  /* 10469414 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046941b jmp 0x10469426 */
  goto L_10469426;
L_1046941d:;
  /* 1046941d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469423 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10469426:;
  /* 10469426 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046942d jge 0x1046943b */
  if ((C.sf==C.of)) goto L_1046943b;
  /* 1046942f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469432 mov byte ptr [ecx + 0x1048fd00], 0 */
  w8((uint32_t)(ECX + 0x1048fd00), (0x0u));
  /* 10469439 jmp 0x1046941d */
  goto L_1046941d;
L_1046943b:;
  /* 1046943b mov dword ptr [0x1048fb64], 0 */
  w32((uint32_t)(0x1048fb64), (0x0u));
  /* 10469445 mov dword ptr [0x1048fbec], 0 */
  w32((uint32_t)(0x1048fbec), (0x0u));
  /* 1046944f mov dword ptr [0x1048fe04], 0 */
  w32((uint32_t)(0x1048fe04), (0x0u));
  /* 10469459 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10469460 jmp 0x1046946b */
  goto L_1046946b;
L_10469462:;
  /* 10469462 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469465 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469468 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1046946b:;
  /* 1046946b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046946f jge 0x10469480 */
  if ((C.sf==C.of)) goto L_10469480;
  /* 10469471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469474 mov word ptr [eax*2 + 0x1048fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1048fbe0), (0x0u));
  /* 1046947e jmp 0x10469462 */
  goto L_10469462;
L_10469480:;
  /* 10469480 mov esp, ebp */
  ESP = (EBP);
  /* 10469482 pop ebp */
  EBP = (pop32());
  /* 10469483 ret  */
  ESPCHK(0x10469410u, _esp0);
  ESP += 4; return;
}

/* FUN_10009490 @ 0x10469490 (770 bytes, 175 insns) */
void f_10469490(void) {
  FTRACE(0x10469490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469490 push ebp */
  push32((uint32_t)(EBP));
  /* 10469491 mov ebp, esp */
  EBP = (ESP);
  /* 10469493 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469499 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1046949f push eax */
  push32((uint32_t)(EAX));
  /* 104694a0 mov ecx, dword ptr [0x1048fb64] */
  ECX = (r32((uint32_t)(0x1048fb64)));
  /* 104694a6 push ecx */
  push32((uint32_t)(ECX));
  /* 104694a7 call dword ptr [0x1049032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049032c))), 0x104694adu);
  /* 104694ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104694b0 jne 0x104696c9 */
  if (!C.zf) goto L_104696c9;
  /* 104694b6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104694c0 jmp 0x104694d1 */
  goto L_104694d1;
L_104694c2:;
  /* 104694c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104694c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104694cb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_104694d1:;
  /* 104694d1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104694db jae 0x104694f2 */
  if (!C.cf) goto L_104694f2;
  /* 104694dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104694e3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 104694e9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 104694f0 jmp 0x104694c2 */
  goto L_104694c2;
L_104694f2:;
  /* 104694f2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 104694f9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 104694ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10469502 jmp 0x1046950d */
  goto L_1046950d;
L_10469504:;
  /* 10469504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469507 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046950a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046950d:;
  /* 1046950d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469510 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10469512 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10469514 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10469516 je 0x10469558 */
  if (C.zf) goto L_10469558;
  /* 10469518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046951b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046951d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1046951f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10469525 jmp 0x10469536 */
  goto L_10469536;
L_10469527:;
  /* 10469527 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1046952d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469530 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10469536:;
  /* 10469536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469539 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046953b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1046953e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469544 ja 0x10469556 */
  if ((!C.cf&&!C.zf)) goto L_10469556;
  /* 10469546 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1046954c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10469554 jmp 0x10469527 */
  goto L_10469527;
L_10469556:;
  /* 10469556 jmp 0x10469504 */
  goto L_10469504;
L_10469558:;
  /* 10469558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046955a mov eax, dword ptr [0x1048fe04] */
  EAX = (r32((uint32_t)(0x1048fe04)));
  /* 1046955f push eax */
  push32((uint32_t)(EAX));
  /* 10469560 mov ecx, dword ptr [0x1048fb64] */
  ECX = (r32((uint32_t)(0x1048fb64)));
  /* 10469566 push ecx */
  push32((uint32_t)(ECX));
  /* 10469567 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1046956d push edx */
  push32((uint32_t)(EDX));
  /* 1046956e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10469573 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10469579 push eax */
  push32((uint32_t)(EAX));
  /* 1046957a push 1 */
  push32((uint32_t)(0x1u));
  /* 1046957c call 0x1046b140 */
  push32(0x10469581u); f_1046b140();
  /* 10469581 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469584 push 0 */
  push32((uint32_t)(0x0u));
  /* 10469586 mov ecx, dword ptr [0x1048fb64] */
  ECX = (r32((uint32_t)(0x1048fb64)));
  /* 1046958c push ecx */
  push32((uint32_t)(ECX));
  /* 1046958d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10469592 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10469598 push edx */
  push32((uint32_t)(EDX));
  /* 10469599 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1046959e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 104695a4 push eax */
  push32((uint32_t)(EAX));
  /* 104695a5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104695aa mov ecx, dword ptr [0x1048fe04] */
  ECX = (r32((uint32_t)(0x1048fe04)));
  /* 104695b0 push ecx */
  push32((uint32_t)(ECX));
  /* 104695b1 call 0x1046b300 */
  push32(0x104695b6u); f_1046b300();
  /* 104695b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104695b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104695bb mov edx, dword ptr [0x1048fb64] */
  EDX = (r32((uint32_t)(0x1048fb64)));
  /* 104695c1 push edx */
  push32((uint32_t)(EDX));
  /* 104695c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104695c7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 104695cd push eax */
  push32((uint32_t)(EAX));
  /* 104695ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 104695d3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 104695d9 push ecx */
  push32((uint32_t)(ECX));
  /* 104695da push 0x200 */
  push32((uint32_t)(0x200u));
  /* 104695df mov edx, dword ptr [0x1048fe04] */
  EDX = (r32((uint32_t)(0x1048fe04)));
  /* 104695e5 push edx */
  push32((uint32_t)(EDX));
  /* 104695e6 call 0x1046b300 */
  push32(0x104695ebu); f_1046b300();
  /* 104695eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104695ee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104695f8 jmp 0x10469609 */
  goto L_10469609;
L_104695fa:;
  /* 104695fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469600 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469603 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10469609:;
  /* 10469609 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469613 jae 0x104696c4 */
  if (!C.cf) goto L_104696c4;
  /* 10469619 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1046961f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10469621 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10469629 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1046962c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046962e je 0x10469666 */
  if (C.zf) goto L_10469666;
  /* 10469630 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469636 mov cl, byte ptr [eax + 0x1048fd01] */
  CL = (r8((uint32_t)(EAX + 0x1048fd01)));
  /* 1046963c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1046963f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469645 mov byte ptr [edx + 0x1048fd01], cl */
  w8((uint32_t)(EDX + 0x1048fd01), (CL));
  /* 1046964b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469651 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469657 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1046965e mov byte ptr [eax + 0x1048fc00], dl */
  w8((uint32_t)(EAX + 0x1048fc00), (DL));
  /* 10469664 jmp 0x104696bf */
  goto L_104696bf;
L_10469666:;
  /* 10469666 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1046966c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046966e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10469676 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10469679 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046967b je 0x104696b2 */
  if (C.zf) goto L_104696b2;
  /* 1046967d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469683 mov al, byte ptr [edx + 0x1048fd01] */
  AL = (r8((uint32_t)(EDX + 0x1048fd01)));
  /* 10469689 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1046968b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469691 mov byte ptr [ecx + 0x1048fd01], al */
  w8((uint32_t)(ECX + 0x1048fd01), (AL));
  /* 10469697 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1046969d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104696a3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 104696aa mov byte ptr [edx + 0x1048fc00], cl */
  w8((uint32_t)(EDX + 0x1048fc00), (CL));
  /* 104696b0 jmp 0x104696bf */
  goto L_104696bf;
L_104696b2:;
  /* 104696b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104696b8 mov byte ptr [edx + 0x1048fc00], 0 */
  w8((uint32_t)(EDX + 0x1048fc00), (0x0u));
L_104696bf:;
  /* 104696bf jmp 0x104695fa */
  goto L_104695fa;
L_104696c4:;
  /* 104696c4 jmp 0x1046978e */
  goto L_1046978e;
L_104696c9:;
  /* 104696c9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 104696d3 jmp 0x104696e4 */
  goto L_104696e4;
L_104696d5:;
  /* 104696d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 104696db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104696de mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_104696e4:;
  /* 104696e4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104696ee jae 0x1046978e */
  if (!C.cf) goto L_1046978e;
  /* 104696f4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104696fb jb 0x10469738 */
  if (C.cf) goto L_10469738;
  /* 104696fd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469704 ja 0x10469738 */
  if ((!C.cf&&!C.zf)) goto L_10469738;
  /* 10469706 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1046970c mov dl, byte ptr [ecx + 0x1048fd01] */
  DL = (r8((uint32_t)(ECX + 0x1048fd01)));
  /* 10469712 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10469715 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1046971b mov byte ptr [eax + 0x1048fd01], dl */
  w8((uint32_t)(EAX + 0x1048fd01), (DL));
  /* 10469721 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469727 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046972a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469730 mov byte ptr [edx + 0x1048fc00], cl */
  w8((uint32_t)(EDX + 0x1048fc00), (CL));
  /* 10469736 jmp 0x10469789 */
  goto L_10469789;
L_10469738:;
  /* 10469738 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046973f jb 0x1046977c */
  if (C.cf) goto L_1046977c;
  /* 10469741 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469748 ja 0x1046977c */
  if ((!C.cf&&!C.zf)) goto L_1046977c;
  /* 1046974a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469750 mov cl, byte ptr [eax + 0x1048fd01] */
  CL = (r8((uint32_t)(EAX + 0x1048fd01)));
  /* 10469756 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10469759 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1046975f mov byte ptr [edx + 0x1048fd01], cl */
  w8((uint32_t)(EDX + 0x1048fd01), (CL));
  /* 10469765 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1046976b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046976e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469774 mov byte ptr [ecx + 0x1048fc00], al */
  w8((uint32_t)(ECX + 0x1048fc00), (AL));
  /* 1046977a jmp 0x10469789 */
  goto L_10469789;
L_1046977c:;
  /* 1046977c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10469782 mov byte ptr [edx + 0x1048fc00], 0 */
  w8((uint32_t)(EDX + 0x1048fc00), (0x0u));
L_10469789:;
  /* 10469789 jmp 0x104696d5 */
  goto L_104696d5;
L_1046978e:;
  /* 1046978e mov esp, ebp */
  ESP = (EBP);
  /* 10469790 pop ebp */
  EBP = (pop32());
  /* 10469791 ret  */
  ESPCHK(0x10469490u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x104697a0 (23 bytes, 9 insns) */
void f_104697a0(void) {
  FTRACE(0x104697a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104697a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104697a1 mov ebp, esp */
  EBP = (ESP);
  /* 104697a3 cmp dword ptr [0x1048fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104697aa je 0x104697b3 */
  if (C.zf) goto L_104697b3;
  /* 104697ac mov eax, dword ptr [0x1048fb64] */
  EAX = (r32((uint32_t)(0x1048fb64)));
  /* 104697b1 jmp 0x104697b5 */
  goto L_104697b5;
L_104697b3:;
  /* 104697b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104697b5:;
  /* 104697b5 pop ebp */
  EBP = (pop32());
  /* 104697b6 ret  */
  ESPCHK(0x104697a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097c0 @ 0x104697c0 (34 bytes, 10 insns) */
void f_104697c0(void) {
  FTRACE(0x104697c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104697c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104697c1 mov ebp, esp */
  EBP = (ESP);
  /* 104697c3 cmp dword ptr [0x1048ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104697ca jne 0x104697e0 */
  if (!C.zf) goto L_104697e0;
  /* 104697cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 104697ce call 0x10468fe0 */
  push32(0x104697d3u); f_10468fe0();
  /* 104697d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104697d6 mov dword ptr [0x1048ffb0], 1 */
  w32((uint32_t)(0x1048ffb0), (0x1u));
L_104697e0:;
  /* 104697e0 pop ebp */
  EBP = (pop32());
  /* 104697e1 ret  */
  ESPCHK(0x104697c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097f0 @ 0x104697f0 (176 bytes, 55 insns) [1 switch table(s)] */
void f_104697f0(void) {
  FTRACE(0x104697f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104697f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104697f1 mov ebp, esp */
  EBP = (ESP);
  /* 104697f3 push edi */
  push32((uint32_t)(EDI));
  /* 104697f4 push esi */
  push32((uint32_t)(ESI));
  /* 104697f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104697f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104697fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104697fe mov eax, ecx */
  EAX = (ECX);
  /* 10469800 mov edx, ecx */
  EDX = (ECX);
  /* 10469802 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469804 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469806 jbe 0x10469810 */
  if ((C.cf||C.zf)) goto L_10469810;
  /* 10469808 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046980a jb 0x10469988 */
  if (C.cf) { jmp_ind(0x10469988u); return; }
L_10469810:;
  /* 10469810 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10469816 jne 0x1046982c */
  if (!C.zf) goto L_1046982c;
  /* 10469818 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046981b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1046981e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469821 jb 0x1046984c */
  if (C.cf) goto L_1046984c;
  /* 10469823 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10469825 jmp dword ptr [edx*4 + 0x10469938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10469938)))); return;
L_1046982c:;
  /* 1046982c mov eax, edi */
  EAX = (EDI);
  /* 1046982e mov edx, 3 */
  EDX = (0x3u);
  /* 10469833 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469836 jb 0x10469844 */
  if (C.cf) goto L_10469844;
  /* 10469838 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1046983b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046983d jmp dword ptr [eax*4 + 0x10469850] */
  switch (EAX) {
    case 1: goto L_10469860;
    case 2: goto L_1046988c;
    default: x86_unimpl("switch@0x1046983d out of table"); return;
  }
L_10469844:;
  /* 10469844 jmp dword ptr [ecx*4 + 0x10469948] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10469948)))); return;
  /* 1046984b nop  */
  /* nop */
L_1046984c:;
  /* 1046984c jmp dword ptr [ecx*4 + 0x104698cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x104698cc)))); return;
  /* 10469853 nop  */
  /* nop */
  /* 1046985c mov al, 0x98 */
  AL = (0x98u);
  /* 1046985e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046985f adc byte ptr [ebx], ah */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EBX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10469861 ror dword ptr [edx - 0x75f877fa], 1 */
  { uint32_t _n=0x1u&0x1f; if(_n){ uint32_t _r=(uint32_t)((uint32_t)(((uint32_t)(r32((uint32_t)(EDX + -0x75f877fa)))>>((0x1u)&31))|((uint32_t)(r32((uint32_t)(EDX + -0x75f877fa)))<<((32-((0x1u)&31))&31)))); w32((uint32_t)(EDX + -0x75f877fa), (_r)); C.cf=(_r>>31)&1; C.of=((_r>>31)&1)^((_r>>30)&1); } }
  /* 10469867 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10469868 add dword ptr [eax + 0x468a0147], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x468a0147))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EAX + 0x468a0147), (_r)); fl_add(_a,_b,_r,32); }
  /* 1046986e add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10469870 jmp 0x128e2077 */
  jmp_ind(0x128e2077u); return;
  /* 10469875 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10469878 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046987b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046987e jb 0x1046984c */
  if (C.cf) goto L_1046984c;
  /* 10469880 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10469882 jmp dword ptr [edx*4 + 0x10469938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10469938)))); return;
  /* 10469889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1046988c:;
  /* 1046988c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1046988e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10469890 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10469892 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10469895 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10469898 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1046989b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
L_10469860: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x10469860 (unresolved jump table)"); return;
}

/* caseD_1 @ 0x10469860 (166 bytes, 68 insns) */
void f_10469860(void) {
  FTRACE(0x10469860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469860 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10469862 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10469864 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10469866 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10469869 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1046986c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1046986f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10469872 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10469875 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10469878 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046987b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046987e jb 0x1046984c */
  if (C.cf) { jmp_ind(0x1046984cu); return; }
  /* 10469880 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10469882 jmp dword ptr [edx*4 + 0x10469938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10469938)))); return;
  /* 10469889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1046988c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1046988e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10469890 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10469892 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10469895 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10469898 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1046989b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046989e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104698a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104698a4 jb 0x1046984c */
  if (C.cf) { jmp_ind(0x1046984cu); return; }
  /* 104698a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104698a8 jmp dword ptr [edx*4 + 0x10469938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10469938)))); return;
  /* 104698af nop  */
  /* nop */
  /* 104698b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104698b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 104698b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 104698b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104698b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104698ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104698bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104698be jb 0x1046984c */
  if (C.cf) { jmp_ind(0x1046984cu); return; }
  /* 104698c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104698c2 jmp dword ptr [edx*4 + 0x10469938] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10469938)))); return;
  /* 104698c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 104698cc das  */
  x86_unimpl("das @ 0x104698cc");
  /* 104698cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104698ce inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104698cf adc byte ptr [ecx + ebx*4], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + EBX*4))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104698d2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104698d3 adc byte ptr [ecx + ebx*4], dl */
  { uint32_t _a=(r8((uint32_t)(ECX + EBX*4))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104698d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104698d7 adc byte ptr [ecx + ebx*4], cl */
  { uint32_t _a=(r8((uint32_t)(ECX + EBX*4))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104698da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104698db adc byte ptr [ecx + ebx*4], al */
  { uint32_t _a=(r8((uint32_t)(ECX + EBX*4))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EBX*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 104698de inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104698df adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 104698e1 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 104698e2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104698e3 adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 104698e5 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 104698e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104698e7 adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 104698e9 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 104698ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104698eb adc byte ptr [ebx - 0x761b71bc], cl */
  { uint32_t _a=(r8((uint32_t)(EBX + -0x761b71bc))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + -0x761b71bc), (_r)); fl_add(_a,_b,_r,8); }
  /* 104698f1 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 104698f3 in al, 0x8b */
  x86_unimpl("in @ 0x104698f3");
  /* 104698f5 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 104698f6 mov gs, eax */
  C.seg_gs = (EAX);
  /* 104698f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
  /* 104698fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10469900 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
  /* 10469904 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
}

/* caseD_0 @ 0x10469948 (7 bytes, 5 insns) */
void f_10469948(void) {
  FTRACE(0x10469948u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469948 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046994b pop esi */
  ESI = (pop32());
  /* 1046994c pop edi */
  EDI = (pop32());
  /* 1046994d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1046994e ret  */
  ESPCHK(0x10469948u, _esp0);
  ESP += 4; return;
}

/* caseD_1 @ 0x104699e8 (160 bytes, 54 insns) */
void f_104699e8(void) {
  FTRACE(0x104699e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104699e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 104699eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104699ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 104699f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 104699f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 104699f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 104699f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104699f8 jb 0x104699b0 */
  if (C.cf) { jmp_ind(0x104699b0u); return; }
  /* 104699fa std  */
  C.df=1;
  /* 104699fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 104699fd cld  */
  C.df=0;
  /* 104699fe jmp dword ptr [edx*4 + 0x10469ad0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10469ad0)))); return;
  /* 10469a05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10469a08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10469a0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10469a0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10469a10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10469a13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10469a16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10469a19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469a1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469a1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469a22 jb 0x104699b0 */
  if (C.cf) { jmp_ind(0x104699b0u); return; }
  /* 10469a24 std  */
  C.df=1;
  /* 10469a25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10469a27 cld  */
  C.df=0;
  /* 10469a28 jmp dword ptr [edx*4 + 0x10469ad0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10469ad0)))); return;
  /* 10469a2f nop  */
  /* nop */
  /* 10469a30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10469a33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10469a35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10469a38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10469a3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10469a3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10469a41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10469a44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10469a47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469a4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469a4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469a50 jb 0x104699b0 */
  if (C.cf) { jmp_ind(0x104699b0u); return; }
  /* 10469a56 std  */
  C.df=1;
  /* 10469a57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10469a59 cld  */
  C.df=0;
  /* 10469a5a jmp dword ptr [edx*4 + 0x10469ad0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x10469ad0)))); return;
  /* 10469a61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10469a64 test byte ptr [edx - 0x6573efba], bl */
  { uint32_t _r=(r8((uint32_t)(EDX + -0x6573efba)))&(BL); fl_logic(_r,8); }
  /* 10469a6a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10469a6b adc byte ptr [edx + ebx*4 - 0x6563efba], dl */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*4 + -0x6563efba))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*4 + -0x6563efba), (_r)); fl_add(_a,_b,_r,8); }
  /* 10469a72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10469a73 adc byte ptr [edx + ebx*4 - 0x6553efba], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*4 + -0x6553efba))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*4 + -0x6553efba), (_r)); fl_add(_a,_b,_r,8); }
  /* 10469a7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10469a7b adc byte ptr [edx + ebx*4 - 0x6538efba], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBX*4 + -0x6538efba))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBX*4 + -0x6538efba), (_r)); fl_add(_a,_b,_r,8); }
  /* 10469a82 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10469a83 adc byte ptr [ebx - 0x76e371bc], cl */
  { uint32_t _a=(r8((uint32_t)(EBX + -0x76e371bc))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + -0x76e371bc), (_r)); fl_add(_a,_b,_r,8); }
}

/* caseD_0 @ 0x10469ae0 (7 bytes, 5 insns) */
void f_10469ae0(void) {
  FTRACE(0x10469ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10469ae3 pop esi */
  ESI = (pop32());
  /* 10469ae4 pop edi */
  EDI = (pop32());
  /* 10469ae5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10469ae6 ret  */
  ESPCHK(0x10469ae0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10469b30 (104 bytes, 43 insns) */
void f_10469b30(void) {
  FTRACE(0x10469b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469b30 push ebx */
  push32((uint32_t)(EBX));
  /* 10469b31 push esi */
  push32((uint32_t)(ESI));
  /* 10469b32 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10469b36 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10469b38 jne 0x10469b52 */
  if (!C.zf) goto L_10469b52;
  /* 10469b3a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10469b3e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10469b42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10469b44 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10469b46 mov ebx, eax */
  EBX = (EAX);
  /* 10469b48 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10469b4c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10469b4e mov edx, ebx */
  EDX = (EBX);
  /* 10469b50 jmp 0x10469b93 */
  goto L_10469b93;
L_10469b52:;
  /* 10469b52 mov ecx, eax */
  ECX = (EAX);
  /* 10469b54 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10469b58 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10469b5c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10469b60:;
  /* 10469b60 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10469b62 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10469b64 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10469b66 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10469b68 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10469b6a jne 0x10469b60 */
  if (!C.zf) goto L_10469b60;
  /* 10469b6c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10469b6e mov esi, eax */
  ESI = (EAX);
  /* 10469b70 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10469b74 mov ecx, eax */
  ECX = (EAX);
  /* 10469b76 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10469b7a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10469b7c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469b7e jb 0x10469b8e */
  if (C.cf) goto L_10469b8e;
  /* 10469b80 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469b84 ja 0x10469b8e */
  if ((!C.cf&&!C.zf)) goto L_10469b8e;
  /* 10469b86 jb 0x10469b8f */
  if (C.cf) goto L_10469b8f;
  /* 10469b88 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469b8c jbe 0x10469b8f */
  if ((C.cf||C.zf)) goto L_10469b8f;
L_10469b8e:;
  /* 10469b8e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10469b8f:;
  /* 10469b8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10469b91 mov eax, esi */
  EAX = (ESI);
L_10469b93:;
  /* 10469b93 pop esi */
  ESI = (pop32());
  /* 10469b94 pop ebx */
  EBX = (pop32());
  /* 10469b95 ret 0x10 */
  ESPCHK(0x10469b30u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10469ba0 (117 bytes, 44 insns) */
void f_10469ba0(void) {
  FTRACE(0x10469ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469ba0 push ebx */
  push32((uint32_t)(EBX));
  /* 10469ba1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10469ba5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10469ba7 jne 0x10469bc1 */
  if (!C.zf) goto L_10469bc1;
  /* 10469ba9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10469bad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10469bb1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10469bb3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10469bb5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10469bb9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10469bbb mov eax, edx */
  EAX = (EDX);
  /* 10469bbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10469bbf jmp 0x10469c11 */
  goto L_10469c11;
L_10469bc1:;
  /* 10469bc1 mov ecx, eax */
  ECX = (EAX);
  /* 10469bc3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10469bc7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10469bcb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10469bcf:;
  /* 10469bcf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10469bd1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10469bd3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10469bd5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10469bd7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10469bd9 jne 0x10469bcf */
  if (!C.zf) goto L_10469bcf;
  /* 10469bdb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10469bdd mov ecx, eax */
  ECX = (EAX);
  /* 10469bdf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10469be3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10469be4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10469be8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469bea jb 0x10469bfa */
  if (C.cf) goto L_10469bfa;
  /* 10469bec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469bf0 ja 0x10469bfa */
  if ((!C.cf&&!C.zf)) goto L_10469bfa;
  /* 10469bf2 jb 0x10469c02 */
  if (C.cf) goto L_10469c02;
  /* 10469bf4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469bf8 jbe 0x10469c02 */
  if ((C.cf||C.zf)) goto L_10469c02;
L_10469bfa:;
  /* 10469bfa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469bfe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10469c02:;
  /* 10469c02 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469c06 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469c0a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10469c0c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10469c0e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10469c11:;
  /* 10469c11 pop ebx */
  EBX = (pop32());
  /* 10469c12 ret 0x10 */
  ESPCHK(0x10469ba0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009c20 @ 0x10469c20 (628 bytes, 214 insns) */
void f_10469c20(void) {
  FTRACE(0x10469c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10469c21 mov ebp, esp */
  EBP = (ESP);
  /* 10469c23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469c26 push ebx */
  push32((uint32_t)(EBX));
  /* 10469c27 push esi */
  push32((uint32_t)(ESI));
  /* 10469c28 push edi */
  push32((uint32_t)(EDI));
L_10469c29:;
  /* 10469c29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469c2d jne 0x10469c4d */
  if (!C.zf) goto L_10469c4d;
  /* 10469c2f push 0x10489f04 */
  push32((uint32_t)(0x10489f04u));
  /* 10469c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10469c36 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10469c38 push 0x10489ef8 */
  push32((uint32_t)(0x10489ef8u));
  /* 10469c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10469c3f call 0x10461fd0 */
  push32(0x10469c44u); f_10461fd0();
  /* 10469c44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469c47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469c4a jne 0x10469c4d */
  if (!C.zf) goto L_10469c4d;
  /* 10469c4c int3  */
  x86_unimpl("int3 @ 0x10469c4c");
L_10469c4d:;
  /* 10469c4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10469c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10469c51 jne 0x10469c29 */
  if (!C.zf) goto L_10469c29;
  /* 10469c53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10469c56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10469c59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469c5c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10469c5f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10469c62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469c65 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10469c68 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10469c6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10469c70 je 0x10469c7f */
  if (C.zf) goto L_10469c7f;
  /* 10469c72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469c75 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10469c78 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10469c7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10469c7d je 0x10469c95 */
  if (C.zf) goto L_10469c95;
L_10469c7f:;
  /* 10469c7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469c82 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10469c85 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10469c87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469c8a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10469c8d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10469c90 jmp 0x10469e8d */
  goto L_10469e8d;
L_10469c95:;
  /* 10469c95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469c98 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10469c9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10469c9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10469ca0 je 0x10469cec */
  if (C.zf) goto L_10469cec;
  /* 10469ca2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469ca5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10469cac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469caf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10469cb2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10469cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10469cb7 je 0x10469cd5 */
  if (C.zf) goto L_10469cd5;
  /* 10469cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469cbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469cbf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10469cc2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10469cc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469cc7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10469cca and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10469ccd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469cd0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10469cd3 jmp 0x10469cec */
  goto L_10469cec;
L_10469cd5:;
  /* 10469cd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469cd8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10469cdb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10469cde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469ce1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10469ce4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10469ce7 jmp 0x10469e8d */
  goto L_10469e8d;
L_10469cec:;
  /* 10469cec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469cef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10469cf2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10469cf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469cf8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10469cfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469cfe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10469d01 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10469d04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469d07 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10469d0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469d0d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10469d14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10469d1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469d1e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10469d21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469d24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10469d27 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10469d2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10469d2f jne 0x10469d5f */
  if (!C.zf) goto L_10469d5f;
  /* 10469d31 cmp dword ptr [ebp - 8], 0x1048d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1048d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469d38 je 0x10469d43 */
  if (C.zf) goto L_10469d43;
  /* 10469d3a cmp dword ptr [ebp - 8], 0x1048d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1048d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469d41 jne 0x10469d53 */
  if (!C.zf) goto L_10469d53;
L_10469d43:;
  /* 10469d43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10469d46 push edx */
  push32((uint32_t)(EDX));
  /* 10469d47 call 0x1046bb90 */
  push32(0x10469d4cu); f_1046bb90();
  /* 10469d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469d4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10469d51 jne 0x10469d5f */
  if (!C.zf) goto L_10469d5f;
L_10469d53:;
  /* 10469d53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469d56 push eax */
  push32((uint32_t)(EAX));
  /* 10469d57 call 0x1046bac0 */
  push32(0x10469d5cu); f_1046bac0();
  /* 10469d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10469d5f:;
  /* 10469d5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469d62 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10469d65 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10469d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10469d6d je 0x10469e4b */
  if (C.zf) goto L_10469e4b;
L_10469d73:;
  /* 10469d73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469d76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469d79 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10469d7b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469d7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10469d80 jge 0x10469da3 */
  if ((C.sf==C.of)) goto L_10469da3;
  /* 10469d82 push 0x10489eb8 */
  push32((uint32_t)(0x10489eb8u));
  /* 10469d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10469d89 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10469d8e push 0x10489ef8 */
  push32((uint32_t)(0x10489ef8u));
  /* 10469d93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10469d95 call 0x10461fd0 */
  push32(0x10469d9au); f_10461fd0();
  /* 10469d9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469d9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469da0 jne 0x10469da3 */
  if (!C.zf) goto L_10469da3;
  /* 10469da2 int3  */
  x86_unimpl("int3 @ 0x10469da2");
L_10469da3:;
  /* 10469da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10469da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10469da7 jne 0x10469d73 */
  if (!C.zf) goto L_10469d73;
  /* 10469da9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469dac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469daf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10469db1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469db4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10469db7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469dba mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10469dbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469dc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469dc3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10469dc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469dc8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10469dcb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469dce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469dd1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10469dd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469dd8 jle 0x10469df6 */
  if ((C.zf||C.sf!=C.of)) goto L_10469df6;
  /* 10469dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469ddd push ecx */
  push32((uint32_t)(ECX));
  /* 10469dde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469de1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10469de4 push eax */
  push32((uint32_t)(EAX));
  /* 10469de5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10469de8 push ecx */
  push32((uint32_t)(ECX));
  /* 10469de9 call 0x1046b7b0 */
  push32(0x10469deeu); f_1046b7b0();
  /* 10469dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469df1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10469df4 jmp 0x10469e3e */
  goto L_10469e3e;
L_10469df6:;
  /* 10469df6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469dfa je 0x10469e19 */
  if (C.zf) goto L_10469e19;
  /* 10469dfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10469dff sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10469e02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10469e05 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10469e08 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10469e0b mov ecx, dword ptr [edx*4 + 0x1048fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1048fe60)));
  /* 10469e12 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469e14 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10469e17 jmp 0x10469e20 */
  goto L_10469e20;
L_10469e19:;
  /* 10469e19 mov dword ptr [ebp - 0x14], 0x1048ca60 */
  w32((uint32_t)(EBP + -0x14), (0x1048ca60u));
L_10469e20:;
  /* 10469e20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10469e23 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10469e27 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10469e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10469e2c je 0x10469e3e */
  if (C.zf) goto L_10469e3e;
  /* 10469e2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10469e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10469e32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10469e35 push ecx */
  push32((uint32_t)(ECX));
  /* 10469e36 call 0x1046b660 */
  push32(0x10469e3bu); f_1046b660();
  /* 10469e3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10469e3e:;
  /* 10469e3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469e41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10469e44 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10469e47 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10469e49 jmp 0x10469e69 */
  goto L_10469e69;
L_10469e4b:;
  /* 10469e4b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10469e52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10469e55 push edx */
  push32((uint32_t)(EDX));
  /* 10469e56 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10469e59 push eax */
  push32((uint32_t)(EAX));
  /* 10469e5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10469e5d push ecx */
  push32((uint32_t)(ECX));
  /* 10469e5e call 0x1046b7b0 */
  push32(0x10469e63u); f_1046b7b0();
  /* 10469e63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469e66 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10469e69:;
  /* 10469e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10469e6c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469e6f je 0x10469e85 */
  if (C.zf) goto L_10469e85;
  /* 10469e71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469e74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10469e77 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10469e7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10469e7d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10469e80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10469e83 jmp 0x10469e8d */
  goto L_10469e8d;
L_10469e85:;
  /* 10469e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10469e88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10469e8d:;
  /* 10469e8d pop edi */
  EDI = (pop32());
  /* 10469e8e pop esi */
  ESI = (pop32());
  /* 10469e8f pop ebx */
  EBX = (pop32());
  /* 10469e90 mov esp, ebp */
  ESP = (EBP);
  /* 10469e92 pop ebp */
  EBP = (pop32());
  /* 10469e93 ret  */
  ESPCHK(0x10469c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ea0 @ 0x10469ea0 (192 bytes, 45 insns) */
void f_10469ea0(void) {
  FTRACE(0x10469ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10469ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10469ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10469ea3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10469ea9 push ebx */
  push32((uint32_t)(EBX));
  /* 10469eaa push esi */
  push32((uint32_t)(ESI));
  /* 10469eab push edi */
  push32((uint32_t)(EDI));
  /* 10469eac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10469eb3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10469ebd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10469ec4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10469ec7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10469ec9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10469ecc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10469ed0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10469ed3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469ed6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10469ed9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10469edb je 0x1046aab7 */
  if (C.zf) { jmp_ind(0x1046aab7u); return; }
  /* 10469ee1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469ee8 jl 0x1046aab7 */
  if ((C.sf!=C.of)) { jmp_ind(0x1046aab7u); return; }
  /* 10469eee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10469ef2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469ef5 jl 0x10469f16 */
  if ((C.sf!=C.of)) goto L_10469f16;
  /* 10469ef7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10469efb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469efe jg 0x10469f16 */
  if ((!C.zf&&C.sf==C.of)) goto L_10469f16;
  /* 10469f00 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10469f04 movsx ecx, byte ptr [eax + 0x10489ef0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10489ef0))));
  /* 10469f0b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10469f0e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10469f14 jmp 0x10469f20 */
  goto L_10469f20;
L_10469f16:;
  /* 10469f16 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10469f20:;
  /* 10469f20 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10469f26 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10469f29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10469f2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10469f2f movsx edx, byte ptr [ecx + eax*8 + 0x10489f10] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10489f10))));
  /* 10469f37 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10469f3a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10469f3d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10469f40 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10469f46 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469f4d ja 0x1046aab2 */
  if ((!C.cf&&!C.zf)) { jmp_ind(0x1046aab2u); return; }
  /* 10469f53 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10469f59 jmp dword ptr [ecx*4 + 0x1046aac4] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1046aac4)))); return;
}

/* caseD_0 @ 0x10469f60 (2916 bytes, 776 insns) */
void f_10469f60(void) {
  FTRACE(0x10469f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
L_10469f60:;
  /* 10469f60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10469f67 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10469f6a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10469f70 mov eax, dword ptr [0x1048cc98] */
  EAX = (r32((uint32_t)(0x1048cc98)));
  /* 10469f75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10469f77 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10469f7b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10469f81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10469f83 je 0x10469fdd */
  if (C.zf) goto L_10469fdd;
  /* 10469f85 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10469f8b push edx */
  push32((uint32_t)(EDX));
  /* 10469f8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10469f8f push eax */
  push32((uint32_t)(EAX));
  /* 10469f90 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10469f94 push ecx */
  push32((uint32_t)(ECX));
  /* 10469f95 call 0x1046abd0 */
  push32(0x10469f9au); f_1046abd0();
  /* 10469f9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469f9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10469fa0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10469fa2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10469fa5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10469fa8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10469fab mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10469fae:;
  /* 10469fae movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10469fb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10469fb4 jne 0x10469fd7 */
  if (!C.zf) goto L_10469fd7;
  /* 10469fb6 push 0x10489f90 */
  push32((uint32_t)(0x10489f90u));
  /* 10469fbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10469fbd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10469fc2 push 0x10489f84 */
  push32((uint32_t)(0x10489f84u));
  /* 10469fc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10469fc9 call 0x10461fd0 */
  push32(0x10469fceu); f_10461fd0();
  /* 10469fce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469fd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10469fd4 jne 0x10469fd7 */
  if (!C.zf) goto L_10469fd7;
  /* 10469fd6 int3  */
  x86_unimpl("int3 @ 0x10469fd6");
L_10469fd7:;
  /* 10469fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10469fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10469fdb jne 0x10469fae */
  if (!C.zf) goto L_10469fae;
L_10469fdd:;
  /* 10469fdd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10469fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10469fe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10469fe7 push edx */
  push32((uint32_t)(EDX));
  /* 10469fe8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10469fec push eax */
  push32((uint32_t)(EAX));
  /* 10469fed call 0x1046abd0 */
  push32(0x10469ff2u); f_1046abd0();
  /* 10469ff2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10469ff5 jmp 0x1046aab2 */
  goto L_1046aab2;
  /* 10469ffa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046a001 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046a004 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1046a00a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1046a010 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1046a016 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1046a01c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1046a01f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046a026 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1046a030 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1046a037 jmp 0x1046aab2 */
  goto L_1046aab2;
  /* 1046a03c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a040 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1046a046 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1046a04c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a04f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1046a055 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a05c ja 0x1046a0a6 */
  if ((!C.cf&&!C.zf)) goto L_1046a0a6;
  /* 1046a05e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1046a064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046a066 mov al, byte ptr [ecx + 0x1046aafc] */
  AL = (r8((uint32_t)(ECX + 0x1046aafc)));
  /* 1046a06c jmp dword ptr [eax*4 + 0x1046aae4] */
  jmp_ind((uint32_t)(r32((uint32_t)(EAX*4 + 0x1046aae4)))); return;
  /* 1046a073 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a076 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a079 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046a07c jmp 0x1046a0a6 */
  goto L_1046a0a6;
  /* 1046a07e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a081 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1046a083 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046a086 jmp 0x1046a0a6 */
  goto L_1046a0a6;
  /* 1046a088 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a08b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1046a08e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1046a091 jmp 0x1046a0a6 */
  goto L_1046a0a6;
  /* 1046a093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a096 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1046a099 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046a09c jmp 0x1046a0a6 */
  goto L_1046a0a6;
  /* 1046a09e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a0a1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1046a0a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046a0a6:;
  /* 1046a0a6 jmp 0x1046aab2 */
  goto L_1046aab2;
  /* 1046a0ab movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a0af cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a0b2 jne 0x1046a0e7 */
  if (!C.zf) goto L_1046a0e7;
  /* 1046a0b4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1046a0b7 push edx */
  push32((uint32_t)(EDX));
  /* 1046a0b8 call 0x1046ace0 */
  push32(0x1046a0bdu); f_1046ace0();
  /* 1046a0bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a0c0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1046a0c6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a0cd jge 0x1046a0e5 */
  if ((C.sf==C.of)) goto L_1046a0e5;
  /* 1046a0cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a0d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1046a0d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046a0d7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1046a0dd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046a0df mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1046a0e5:;
  /* 1046a0e5 jmp 0x1046a0fe */
  goto L_1046a0fe;
L_1046a0e7:;
  /* 1046a0e7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1046a0ed imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046a0f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a0f4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1046a0f8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1046a0fe:;
  /* 1046a0fe jmp 0x1046aab2 */
  goto L_1046aab2;
  /* 1046a103 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1046a10d jmp 0x1046aab2 */
  goto L_1046aab2;
  /* 1046a112 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a116 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a119 jne 0x1046a142 */
  if (!C.zf) goto L_1046a142;
  /* 1046a11b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1046a11e push eax */
  push32((uint32_t)(EAX));
  /* 1046a11f call 0x1046ace0 */
  push32(0x1046a124u); f_1046ace0();
  /* 1046a124 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a127 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1046a12d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a134 jge 0x1046a140 */
  if ((C.sf==C.of)) goto L_1046a140;
  /* 1046a136 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1046a140:;
  /* 1046a140 jmp 0x1046a159 */
  goto L_1046a159;
L_1046a142:;
  /* 1046a142 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1046a148 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046a14b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a14f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1046a153 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1046a159:;
  /* 1046a159 jmp 0x1046aab2 */
  goto L_1046aab2;
  /* 1046a15e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a162 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1046a168 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1046a16e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a171 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1046a177 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a17e ja 0x1046a1ec */
  if ((!C.cf&&!C.zf)) goto L_1046a1ec;
  /* 1046a180 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1046a186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046a188 mov al, byte ptr [ecx + 0x1046ab21] */
  AL = (r8((uint32_t)(ECX + 0x1046ab21)));
  /* 1046a18e jmp dword ptr [eax*4 + 0x1046ab0d] */
  jmp_ind((uint32_t)(r32((uint32_t)(EAX*4 + 0x1046ab0d)))); return;
  /* 1046a195 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a198 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a19b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046a19e jmp 0x1046a1ec */
  goto L_1046a1ec;
  /* 1046a1a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046a1a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046a1a6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a1a9 jne 0x1046a1cb */
  if (!C.zf) goto L_1046a1cb;
  /* 1046a1ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046a1ae movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1046a1b2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a1b5 jne 0x1046a1cb */
  if (!C.zf) goto L_1046a1cb;
  /* 1046a1b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046a1ba add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a1bd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1046a1c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a1c3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1046a1c6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046a1c9 jmp 0x1046a1d7 */
  goto L_1046a1d7;
L_1046a1cb:;
  /* 1046a1cb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1046a1d2 jmp 0x10469f60 */
  goto L_10469f60;
L_1046a1d7:;
  /* 1046a1d7 jmp 0x1046a1ec */
  goto L_1046a1ec;
  /* 1046a1d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a1dc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1046a1de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046a1e1 jmp 0x1046a1ec */
  goto L_1046a1ec;
  /* 1046a1e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a1e6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1046a1e9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1046a1ec:;
  /* 1046a1ec jmp 0x1046aab2 */
  goto L_1046aab2;
  /* 1046a1f1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a1f5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1046a1fb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1046a201 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a204 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1046a20a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a211 ja 0x1046a8d7 */
  if ((!C.cf&&!C.zf)) goto L_1046a8d7;
  /* 1046a217 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1046a21d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046a21f mov cl, byte ptr [edx + 0x1046ab8c] */
  CL = (r8((uint32_t)(EDX + 0x1046ab8c)));
  /* 1046a225 jmp dword ptr [ecx*4 + 0x1046ab50] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1046ab50)))); return;
  /* 1046a22c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a22f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a236 jne 0x1046a241 */
  if (!C.zf) goto L_1046a241;
  /* 1046a238 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a23b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1046a23e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1046a241:;
  /* 1046a241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a244 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a24a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a24c je 0x1046a287 */
  if (C.zf) goto L_1046a287;
  /* 1046a24e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1046a251 push eax */
  push32((uint32_t)(EAX));
  /* 1046a252 call 0x1046ad20 */
  push32(0x1046a257u); f_1046ad20();
  /* 1046a257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a25a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1046a25e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1046a262 push ecx */
  push32((uint32_t)(ECX));
  /* 1046a263 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1046a269 push edx */
  push32((uint32_t)(EDX));
  /* 1046a26a call 0x1046be00 */
  push32(0x1046a26fu); f_1046be00();
  /* 1046a26f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a272 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1046a275 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a279 jge 0x1046a285 */
  if ((C.sf==C.of)) goto L_1046a285;
  /* 1046a27b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1046a285:;
  /* 1046a285 jmp 0x1046a2ad */
  goto L_1046a2ad;
L_1046a287:;
  /* 1046a287 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1046a28a push eax */
  push32((uint32_t)(EAX));
  /* 1046a28b call 0x1046ace0 */
  push32(0x1046a290u); f_1046ace0();
  /* 1046a290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a293 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1046a29a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1046a2a0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1046a2a6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1046a2ad:;
  /* 1046a2ad lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1046a2b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1046a2b6 jmp 0x1046a8d7 */
  goto L_1046a8d7;
  /* 1046a2bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1046a2be push eax */
  push32((uint32_t)(EAX));
  /* 1046a2bf call 0x1046ace0 */
  push32(0x1046a2c4u); f_1046ace0();
  /* 1046a2c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a2c7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1046a2cd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a2d4 je 0x1046a2e2 */
  if (C.zf) goto L_1046a2e2;
  /* 1046a2d6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1046a2dc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a2e0 jne 0x1046a2fc */
  if (!C.zf) goto L_1046a2fc;
L_1046a2e2:;
  /* 1046a2e2 mov edx, dword ptr [0x1048cfb0] */
  EDX = (r32((uint32_t)(0x1048cfb0)));
  /* 1046a2e8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1046a2eb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a2ee push eax */
  push32((uint32_t)(EAX));
  /* 1046a2ef call 0x10465d40 */
  push32(0x1046a2f4u); f_10465d40();
  /* 1046a2f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a2f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1046a2fa jmp 0x1046a34b */
  goto L_1046a34b;
L_1046a2fc:;
  /* 1046a2fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a2ff and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1046a305 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046a307 je 0x1046a32c */
  if (C.zf) goto L_1046a32c;
  /* 1046a309 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1046a30f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1046a312 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1046a315 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1046a31b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1046a31e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1046a320 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1046a323 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1046a32a jmp 0x1046a34b */
  goto L_1046a34b;
L_1046a32c:;
  /* 1046a32c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1046a333 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1046a339 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1046a33c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1046a33f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1046a345 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1046a348 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1046a34b:;
  /* 1046a34b jmp 0x1046a8d7 */
  goto L_1046a8d7;
  /* 1046a350 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a353 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1046a359 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046a35b jne 0x1046a366 */
  if (!C.zf) goto L_1046a366;
  /* 1046a35d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a360 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1046a363 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1046a366:;
  /* 1046a366 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a36d jne 0x1046a37b */
  if (!C.zf) goto L_1046a37b;
  /* 1046a36f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1046a379 jmp 0x1046a387 */
  goto L_1046a387;
L_1046a37b:;
  /* 1046a37b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1046a381 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1046a387:;
  /* 1046a387 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1046a38d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1046a393 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1046a396 push edx */
  push32((uint32_t)(EDX));
  /* 1046a397 call 0x1046ace0 */
  push32(0x1046a39cu); f_1046ace0();
  /* 1046a39c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a39f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1046a3a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a3a5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a3aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a3ac je 0x1046a416 */
  if (C.zf) goto L_1046a416;
  /* 1046a3ae cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a3b2 jne 0x1046a3bd */
  if (!C.zf) goto L_1046a3bd;
  /* 1046a3b4 mov ecx, dword ptr [0x1048cfb4] */
  ECX = (r32((uint32_t)(0x1048cfb4)));
  /* 1046a3ba mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1046a3bd:;
  /* 1046a3bd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1046a3c4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a3c7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1046a3cd:;
  /* 1046a3cd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1046a3d3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1046a3d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a3dc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1046a3e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a3e4 je 0x1046a406 */
  if (C.zf) goto L_1046a406;
  /* 1046a3e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1046a3ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046a3ee mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1046a3f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a3f3 je 0x1046a406 */
  if (C.zf) goto L_1046a406;
  /* 1046a3f5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1046a3fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a3fe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1046a404 jmp 0x1046a3cd */
  goto L_1046a3cd;
L_1046a406:;
  /* 1046a406 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1046a40c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a40f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1046a411 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1046a414 jmp 0x1046a470 */
  goto L_1046a470;
L_1046a416:;
  /* 1046a416 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a41a jne 0x1046a424 */
  if (!C.zf) goto L_1046a424;
  /* 1046a41c mov eax, dword ptr [0x1048cfb0] */
  EAX = (r32((uint32_t)(0x1048cfb0)));
  /* 1046a421 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1046a424:;
  /* 1046a424 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a427 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1046a42d:;
  /* 1046a42d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1046a433 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1046a439 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a43c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1046a442 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a444 je 0x1046a464 */
  if (C.zf) goto L_1046a464;
  /* 1046a446 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1046a44c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046a44f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a451 je 0x1046a464 */
  if (C.zf) goto L_1046a464;
  /* 1046a453 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1046a459 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a45c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1046a462 jmp 0x1046a42d */
  goto L_1046a42d;
L_1046a464:;
  /* 1046a464 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1046a46a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a46d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1046a470:;
  /* 1046a470 jmp 0x1046a8d7 */
  goto L_1046a8d7;
  /* 1046a475 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1046a478 push edx */
  push32((uint32_t)(EDX));
  /* 1046a479 call 0x1046ace0 */
  push32(0x1046a47eu); f_1046ace0();
  /* 1046a47e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a481 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1046a487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a48a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a48d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a48f je 0x1046a4a3 */
  if (C.zf) goto L_1046a4a3;
  /* 1046a491 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1046a497 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1046a49e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1046a4a1 jmp 0x1046a4b1 */
  goto L_1046a4b1;
L_1046a4a3:;
  /* 1046a4a3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1046a4a9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1046a4af mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1046a4b1:;
  /* 1046a4b1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1046a4bb jmp 0x1046a8d7 */
  goto L_1046a8d7;
  /* 1046a4c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1046a4c7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1046a4ca add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1046a4cd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
  /* 1046a4d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a4d3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1046a4d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046a4d8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1046a4de mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1046a4e1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a4e8 jge 0x1046a4f6 */
  if ((C.sf==C.of)) goto L_1046a4f6;
  /* 1046a4ea mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1046a4f4 jmp 0x1046a512 */
  goto L_1046a512;
L_1046a4f6:;
  /* 1046a4f6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a4fd jne 0x1046a512 */
  if (!C.zf) goto L_1046a512;
  /* 1046a4ff movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a503 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a506 jne 0x1046a512 */
  if (!C.zf) goto L_1046a512;
  /* 1046a508 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1046a512:;
  /* 1046a512 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046a515 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a518 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1046a51b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046a51e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a521 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046a523 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1046a526 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1046a52c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1046a532 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046a535 push ecx */
  push32((uint32_t)(ECX));
  /* 1046a536 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1046a53c push edx */
  push32((uint32_t)(EDX));
  /* 1046a53d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a541 push eax */
  push32((uint32_t)(EAX));
  /* 1046a542 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a545 push ecx */
  push32((uint32_t)(ECX));
  /* 1046a546 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1046a54c push edx */
  push32((uint32_t)(EDX));
  /* 1046a54d call dword ptr [0x1048d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048d3a0))), 0x1046a553u);
  /* 1046a553 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a559 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a55e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a560 je 0x1046a578 */
  if (C.zf) goto L_1046a578;
  /* 1046a562 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a569 jne 0x1046a578 */
  if (!C.zf) goto L_1046a578;
  /* 1046a56b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a56e push ecx */
  push32((uint32_t)(ECX));
  /* 1046a56f call dword ptr [0x1048d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048d3ac))), 0x1046a575u);
  /* 1046a575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046a578:;
  /* 1046a578 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1046a57c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a57f jne 0x1046a59a */
  if (!C.zf) goto L_1046a59a;
  /* 1046a581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a584 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a58b jne 0x1046a59a */
  if (!C.zf) goto L_1046a59a;
  /* 1046a58d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a590 push ecx */
  push32((uint32_t)(ECX));
  /* 1046a591 call dword ptr [0x1048d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048d3a4))), 0x1046a597u);
  /* 1046a597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046a59a:;
  /* 1046a59a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a59d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1046a5a0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a5a3 jne 0x1046a5b7 */
  if (!C.zf) goto L_1046a5b7;
  /* 1046a5a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a5a8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1046a5ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1046a5ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a5b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a5b4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1046a5b7:;
  /* 1046a5b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a5ba push eax */
  push32((uint32_t)(EAX));
  /* 1046a5bb call 0x10465d40 */
  push32(0x1046a5c0u); f_10465d40();
  /* 1046a5c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a5c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1046a5c6 jmp 0x1046a8d7 */
  goto L_1046a8d7;
  /* 1046a5cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a5ce or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1046a5d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1046a5d4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1046a5de jmp 0x1046a665 */
  goto L_1046a665;
  /* 1046a5e3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1046a5ed jmp 0x1046a665 */
  goto L_1046a665;
  /* 1046a5ef mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
  /* 1046a5f9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1046a603 jmp 0x1046a60f */
  goto L_1046a60f;
  /* 1046a605 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1046a60f:;
  /* 1046a60f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1046a619 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a61c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a622 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a624 je 0x1046a643 */
  if (C.zf) goto L_1046a643;
  /* 1046a626 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1046a62d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1046a633 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a636 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1046a63c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1046a643:;
  /* 1046a643 jmp 0x1046a665 */
  goto L_1046a665;
  /* 1046a645 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1046a64f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a652 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1046a658 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046a65a je 0x1046a665 */
  if (C.zf) goto L_1046a665;
  /* 1046a65c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a65f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1046a662 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1046a665:;
  /* 1046a665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a668 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a66d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a66f je 0x1046a68e */
  if (C.zf) goto L_1046a68e;
  /* 1046a671 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1046a674 push ecx */
  push32((uint32_t)(ECX));
  /* 1046a675 call 0x1046ad00 */
  push32(0x1046a67au); f_1046ad00();
  /* 1046a67a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a67d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1046a683 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1046a689 jmp 0x1046a71f */
  goto L_1046a71f;
L_1046a68e:;
  /* 1046a68e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a691 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a694 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a696 je 0x1046a6e0 */
  if (C.zf) goto L_1046a6e0;
  /* 1046a698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a69b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a69e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a6a0 je 0x1046a6c0 */
  if (C.zf) goto L_1046a6c0;
  /* 1046a6a2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1046a6a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1046a6a6 call 0x1046ace0 */
  push32(0x1046a6abu); f_1046ace0();
  /* 1046a6ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a6ae movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1046a6b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1046a6b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1046a6b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1046a6be jmp 0x1046a6de */
  goto L_1046a6de;
L_1046a6c0:;
  /* 1046a6c0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1046a6c3 push edx */
  push32((uint32_t)(EDX));
  /* 1046a6c4 call 0x1046ace0 */
  push32(0x1046a6c9u); f_1046ace0();
  /* 1046a6c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a6cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046a6d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1046a6d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1046a6d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1046a6de:;
  /* 1046a6de jmp 0x1046a71f */
  goto L_1046a71f;
L_1046a6e0:;
  /* 1046a6e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a6e3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a6e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a6e8 je 0x1046a705 */
  if (C.zf) goto L_1046a705;
  /* 1046a6ea lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1046a6ed push ecx */
  push32((uint32_t)(ECX));
  /* 1046a6ee call 0x1046ace0 */
  push32(0x1046a6f3u); f_1046ace0();
  /* 1046a6f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a6f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1046a6f7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1046a6fd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1046a703 jmp 0x1046a71f */
  goto L_1046a71f;
L_1046a705:;
  /* 1046a705 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1046a708 push edx */
  push32((uint32_t)(EDX));
  /* 1046a709 call 0x1046ace0 */
  push32(0x1046a70eu); f_1046ace0();
  /* 1046a70e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a711 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046a713 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1046a719 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1046a71f:;
  /* 1046a71f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a722 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a725 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a727 je 0x1046a767 */
  if (C.zf) goto L_1046a767;
  /* 1046a729 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a730 jg 0x1046a767 */
  if ((!C.zf&&C.sf==C.of)) goto L_1046a767;
  /* 1046a732 jl 0x1046a73d */
  if ((C.sf!=C.of)) goto L_1046a73d;
  /* 1046a734 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a73b jae 0x1046a767 */
  if (!C.cf) goto L_1046a767;
L_1046a73d:;
  /* 1046a73d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1046a743 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046a745 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1046a74b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a74e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046a750 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1046a756 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1046a75c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a75f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1046a762 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046a765 jmp 0x1046a77f */
  goto L_1046a77f;
L_1046a767:;
  /* 1046a767 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1046a76d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1046a773 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1046a779 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1046a77f:;
  /* 1046a77f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a782 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a788 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a78a jne 0x1046a7a7 */
  if (!C.zf) goto L_1046a7a7;
  /* 1046a78c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1046a792 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1046a798 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1046a79b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1046a7a1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1046a7a7:;
  /* 1046a7a7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a7ae jge 0x1046a7bc */
  if ((C.sf==C.of)) goto L_1046a7bc;
  /* 1046a7b0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1046a7ba jmp 0x1046a7c5 */
  goto L_1046a7c5;
L_1046a7bc:;
  /* 1046a7bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a7bf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a7c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1046a7c5:;
  /* 1046a7c5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1046a7cb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1046a7d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a7d3 jne 0x1046a7dc */
  if (!C.zf) goto L_1046a7dc;
  /* 1046a7d5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1046a7dc:;
  /* 1046a7dc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1046a7df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1046a7e2:;
  /* 1046a7e2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1046a7e8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1046a7ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a7f1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1046a7f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a7f9 jg 0x1046a80f */
  if ((!C.zf&&C.sf==C.of)) goto L_1046a80f;
  /* 1046a7fb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1046a801 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1046a807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046a809 je 0x1046a890 */
  if (C.zf) goto L_1046a890;
L_1046a80f:;
  /* 1046a80f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1046a815 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1046a816 push edx */
  push32((uint32_t)(EDX));
  /* 1046a817 push eax */
  push32((uint32_t)(EAX));
  /* 1046a818 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1046a81e push edx */
  push32((uint32_t)(EDX));
  /* 1046a81f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1046a825 push eax */
  push32((uint32_t)(EAX));
  /* 1046a826 call 0x10469ba0 */
  push32(0x1046a82bu); f_10469ba0();
  /* 1046a82b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a82e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1046a834 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1046a83a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1046a83b push edx */
  push32((uint32_t)(EDX));
  /* 1046a83c push eax */
  push32((uint32_t)(EAX));
  /* 1046a83d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1046a843 push ecx */
  push32((uint32_t)(ECX));
  /* 1046a844 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1046a84a push edx */
  push32((uint32_t)(EDX));
  /* 1046a84b call 0x10469b30 */
  push32(0x1046a850u); f_10469b30();
  /* 1046a850 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1046a856 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1046a85c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a863 jle 0x1046a877 */
  if ((C.zf||C.sf!=C.of)) goto L_1046a877;
  /* 1046a865 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1046a86b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a871 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1046a877:;
  /* 1046a877 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a87a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1046a880 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1046a882 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a885 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a888 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1046a88b jmp 0x1046a7e2 */
  goto L_1046a7e2;
L_1046a890:;
  /* 1046a890 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1046a893 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a896 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1046a899 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a89c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a89f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1046a8a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a8a5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a8aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a8ac je 0x1046a8d7 */
  if (C.zf) goto L_1046a8d7;
  /* 1046a8ae mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a8b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046a8b4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a8b7 jne 0x1046a8bf */
  if (!C.zf) goto L_1046a8bf;
  /* 1046a8b9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a8bd jne 0x1046a8d7 */
  if (!C.zf) goto L_1046a8d7;
L_1046a8bf:;
  /* 1046a8bf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a8c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a8c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1046a8c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a8cb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1046a8ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046a8d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a8d4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1046a8d7:;
  /* 1046a8d7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a8de jne 0x1046aab2 */
  if (!C.zf) goto L_1046aab2;
  /* 1046a8e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a8e7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a8ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a8ec je 0x1046a93d */
  if (C.zf) goto L_1046a93d;
  /* 1046a8ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a8f1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1046a8f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046a8f9 je 0x1046a90b */
  if (C.zf) goto L_1046a90b;
  /* 1046a8fb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1046a902 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1046a909 jmp 0x1046a93d */
  goto L_1046a93d;
L_1046a90b:;
  /* 1046a90b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a90e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a911 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a913 je 0x1046a925 */
  if (C.zf) goto L_1046a925;
  /* 1046a915 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1046a91c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1046a923 jmp 0x1046a93d */
  goto L_1046a93d;
L_1046a925:;
  /* 1046a925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a928 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1046a92b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046a92d je 0x1046a93d */
  if (C.zf) goto L_1046a93d;
  /* 1046a92f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1046a936 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1046a93d:;
  /* 1046a93d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1046a943 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a946 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a949 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1046a94f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a952 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1046a955 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a957 jne 0x1046a975 */
  if (!C.zf) goto L_1046a975;
  /* 1046a959 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1046a95f push eax */
  push32((uint32_t)(EAX));
  /* 1046a960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046a963 push ecx */
  push32((uint32_t)(ECX));
  /* 1046a964 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1046a96a push edx */
  push32((uint32_t)(EDX));
  /* 1046a96b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1046a96d call 0x1046ac50 */
  push32(0x1046a972u); f_1046ac50();
  /* 1046a972 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046a975:;
  /* 1046a975 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1046a97b push eax */
  push32((uint32_t)(EAX));
  /* 1046a97c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046a97f push ecx */
  push32((uint32_t)(ECX));
  /* 1046a980 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046a983 push edx */
  push32((uint32_t)(EDX));
  /* 1046a984 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1046a98a push eax */
  push32((uint32_t)(EAX));
  /* 1046a98b call 0x1046ac90 */
  push32(0x1046a990u); f_1046ac90();
  /* 1046a990 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046a993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a996 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1046a999 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046a99b je 0x1046a9c3 */
  if (C.zf) goto L_1046a9c3;
  /* 1046a99d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046a9a0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1046a9a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046a9a5 jne 0x1046a9c3 */
  if (!C.zf) goto L_1046a9c3;
  /* 1046a9a7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1046a9ad push eax */
  push32((uint32_t)(EAX));
  /* 1046a9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046a9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1046a9b2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1046a9b8 push edx */
  push32((uint32_t)(EDX));
  /* 1046a9b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1046a9bb call 0x1046ac50 */
  push32(0x1046a9c0u); f_1046ac50();
  /* 1046a9c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046a9c3:;
  /* 1046a9c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a9c7 je 0x1046aa71 */
  if (C.zf) goto L_1046aa71;
  /* 1046a9cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046a9d1 jle 0x1046aa71 */
  if ((C.zf||C.sf!=C.of)) goto L_1046aa71;
  /* 1046a9d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046a9da mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1046a9e0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046a9e3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1046a9e9:;
  /* 1046a9e9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1046a9ef mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1046a9f5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046a9f8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1046a9fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046aa00 je 0x1046aa6f */
  if (C.zf) goto L_1046aa6f;
  /* 1046aa02 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1046aa08 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1046aa0b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1046aa12 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1046aa19 push eax */
  push32((uint32_t)(EAX));
  /* 1046aa1a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1046aa20 push ecx */
  push32((uint32_t)(ECX));
  /* 1046aa21 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1046aa27 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046aa2a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1046aa30 call 0x1046be00 */
  push32(0x1046aa35u); f_1046be00();
  /* 1046aa35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046aa38 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1046aa3e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046aa45 jg 0x1046aa49 */
  if ((!C.zf&&C.sf==C.of)) goto L_1046aa49;
  /* 1046aa47 jmp 0x1046aa6f */
  goto L_1046aa6f;
L_1046aa49:;
  /* 1046aa49 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1046aa4f push eax */
  push32((uint32_t)(EAX));
  /* 1046aa50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046aa53 push ecx */
  push32((uint32_t)(ECX));
  /* 1046aa54 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1046aa5a push edx */
  push32((uint32_t)(EDX));
  /* 1046aa5b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1046aa61 push eax */
  push32((uint32_t)(EAX));
  /* 1046aa62 call 0x1046ac90 */
  push32(0x1046aa67u); f_1046ac90();
  /* 1046aa67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046aa6a jmp 0x1046a9e9 */
  goto L_1046a9e9;
L_1046aa6f:;
  /* 1046aa6f jmp 0x1046aa8c */
  goto L_1046aa8c;
L_1046aa71:;
  /* 1046aa71 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1046aa77 push ecx */
  push32((uint32_t)(ECX));
  /* 1046aa78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046aa7b push edx */
  push32((uint32_t)(EDX));
  /* 1046aa7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046aa7f push eax */
  push32((uint32_t)(EAX));
  /* 1046aa80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046aa83 push ecx */
  push32((uint32_t)(ECX));
  /* 1046aa84 call 0x1046ac90 */
  push32(0x1046aa89u); f_1046ac90();
  /* 1046aa89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046aa8c:;
  /* 1046aa8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046aa8f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1046aa92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046aa94 je 0x1046aab2 */
  if (C.zf) goto L_1046aab2;
  /* 1046aa96 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1046aa9c push eax */
  push32((uint32_t)(EAX));
  /* 1046aa9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046aaa0 push ecx */
  push32((uint32_t)(ECX));
  /* 1046aaa1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1046aaa7 push edx */
  push32((uint32_t)(EDX));
  /* 1046aaa8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1046aaaa call 0x1046ac50 */
  push32(0x1046aaafu); f_1046ac50();
  /* 1046aaaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046aab2:;
  /* 1046aab2 jmp 0x10469ec4 */
  jmp_ind(0x10469ec4u); return;
  /* 1046aab7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1046aabd pop edi */
  EDI = (pop32());
  /* 1046aabe pop esi */
  ESI = (pop32());
  /* 1046aabf pop ebx */
  EBX = (pop32());
  /* 1046aac0 mov esp, ebp */
  ESP = (EBP);
  /* 1046aac2 pop ebp */
  EBP = (pop32());
  /* 1046aac3 ret  */
  ESPCHK(0x10469f60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abd0 @ 0x1046abd0 (119 bytes, 44 insns) */
void f_1046abd0(void) {
  FTRACE(0x1046abd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046abd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046abd1 mov ebp, esp */
  EBP = (ESP);
  /* 1046abd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046abd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046abd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1046abda sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046abdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046abe0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1046abe3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046abe6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046abea jl 0x1046ac12 */
  if ((C.sf!=C.of)) goto L_1046ac12;
  /* 1046abec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046abef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046abf1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1046abf4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1046abf6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1046abfa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1046ac00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1046ac03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ac06 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1046ac08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ac0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ac0e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1046ac10 jmp 0x1046ac25 */
  goto L_1046ac25;
L_1046ac12:;
  /* 1046ac12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ac15 push edx */
  push32((uint32_t)(EDX));
  /* 1046ac16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ac19 push eax */
  push32((uint32_t)(EAX));
  /* 1046ac1a call 0x10469c20 */
  push32(0x1046ac1fu); f_10469c20();
  /* 1046ac1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ac22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046ac25:;
  /* 1046ac25 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ac29 jne 0x1046ac36 */
  if (!C.zf) goto L_1046ac36;
  /* 1046ac2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046ac2e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1046ac34 jmp 0x1046ac43 */
  goto L_1046ac43;
L_1046ac36:;
  /* 1046ac36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046ac39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1046ac3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ac3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046ac41 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1046ac43:;
  /* 1046ac43 mov esp, ebp */
  ESP = (EBP);
  /* 1046ac45 pop ebp */
  EBP = (pop32());
  /* 1046ac46 ret  */
  ESPCHK(0x1046abd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac50 @ 0x1046ac50 (53 bytes, 23 insns) */
void f_1046ac50(void) {
  FTRACE(0x1046ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ac51 mov ebp, esp */
  EBP = (ESP);
L_1046ac53:;
  /* 1046ac53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ac56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ac59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ac5c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1046ac5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046ac61 jle 0x1046ac83 */
  if ((C.zf||C.sf!=C.of)) goto L_1046ac83;
  /* 1046ac63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046ac66 push edx */
  push32((uint32_t)(EDX));
  /* 1046ac67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046ac6a push eax */
  push32((uint32_t)(EAX));
  /* 1046ac6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ac6e push ecx */
  push32((uint32_t)(ECX));
  /* 1046ac6f call 0x1046abd0 */
  push32(0x1046ac74u); f_1046abd0();
  /* 1046ac74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ac77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046ac7a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ac7d jne 0x1046ac81 */
  if (!C.zf) goto L_1046ac81;
  /* 1046ac7f jmp 0x1046ac83 */
  goto L_1046ac83;
L_1046ac81:;
  /* 1046ac81 jmp 0x1046ac53 */
  goto L_1046ac53;
L_1046ac83:;
  /* 1046ac83 pop ebp */
  EBP = (pop32());
  /* 1046ac84 ret  */
  ESPCHK(0x1046ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac90 @ 0x1046ac90 (74 bytes, 31 insns) */
void f_1046ac90(void) {
  FTRACE(0x1046ac90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ac90 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ac91 mov ebp, esp */
  EBP = (ESP);
  /* 1046ac93 push ecx */
  push32((uint32_t)(ECX));
L_1046ac94:;
  /* 1046ac94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ac97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ac9a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ac9d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1046aca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046aca2 jle 0x1046acd6 */
  if ((C.zf||C.sf!=C.of)) goto L_1046acd6;
  /* 1046aca4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046aca7 push edx */
  push32((uint32_t)(EDX));
  /* 1046aca8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046acab push eax */
  push32((uint32_t)(EAX));
  /* 1046acac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046acaf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046acb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046acb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046acb8 push eax */
  push32((uint32_t)(EAX));
  /* 1046acb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046acbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046acbf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1046acc2 call 0x1046abd0 */
  push32(0x1046acc7u); f_1046abd0();
  /* 1046acc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046acca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046accd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046acd0 jne 0x1046acd4 */
  if (!C.zf) goto L_1046acd4;
  /* 1046acd2 jmp 0x1046acd6 */
  goto L_1046acd6;
L_1046acd4:;
  /* 1046acd4 jmp 0x1046ac94 */
  goto L_1046ac94;
L_1046acd6:;
  /* 1046acd6 mov esp, ebp */
  ESP = (EBP);
  /* 1046acd8 pop ebp */
  EBP = (pop32());
  /* 1046acd9 ret  */
  ESPCHK(0x1046ac90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ace0 @ 0x1046ace0 (26 bytes, 12 insns) */
void f_1046ace0(void) {
  FTRACE(0x1046ace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ace0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ace1 mov ebp, esp */
  EBP = (ESP);
  /* 1046ace3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ace6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046ace8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046aceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046acee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1046acf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046acf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046acf5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1046acf8 pop ebp */
  EBP = (pop32());
  /* 1046acf9 ret  */
  ESPCHK(0x1046ace0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad00 @ 0x1046ad00 (31 bytes, 14 insns) */
void f_1046ad00(void) {
  FTRACE(0x1046ad00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ad00 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ad01 mov ebp, esp */
  EBP = (ESP);
  /* 1046ad03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ad06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046ad08 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ad0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ad0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1046ad10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ad13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046ad15 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ad18 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1046ad1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1046ad1d pop ebp */
  EBP = (pop32());
  /* 1046ad1e ret  */
  ESPCHK(0x1046ad00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad20 @ 0x1046ad20 (27 bytes, 12 insns) */
void f_1046ad20(void) {
  FTRACE(0x1046ad20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ad20 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ad21 mov ebp, esp */
  EBP = (ESP);
  /* 1046ad23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ad26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046ad28 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ad2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ad2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1046ad30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ad33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046ad35 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1046ad39 pop ebp */
  EBP = (pop32());
  /* 1046ad3a ret  */
  ESPCHK(0x1046ad20u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1046ad40 (145 bytes, 42 insns) */
void f_1046ad40(void) {
  FTRACE(0x1046ad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ad40 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ad41 mov ebp, esp */
  EBP = (ESP);
  /* 1046ad43 push ecx */
  push32((uint32_t)(ECX));
  /* 1046ad44 call 0x1046adf0 */
  push32(0x1046ad49u); f_1046adf0();
  /* 1046ad49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ad4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1046ad4e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046ad55 jmp 0x1046ad60 */
  goto L_1046ad60;
L_1046ad57:;
  /* 1046ad57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046ad5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ad5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1046ad60:;
  /* 1046ad60 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ad64 jae 0x1046ad8a */
  if (!C.cf) goto L_1046ad8a;
  /* 1046ad66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046ad69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ad6c cmp ecx, dword ptr [eax*8 + 0x1048cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1048cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ad73 jne 0x1046ad88 */
  if (!C.zf) goto L_1046ad88;
  /* 1046ad75 call 0x1046ade0 */
  push32(0x1046ad7au); f_1046ade0();
  /* 1046ad7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046ad7d mov ecx, dword ptr [edx*8 + 0x1048cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1048cfbc)));
  /* 1046ad84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1046ad86 jmp 0x1046adcd */
  goto L_1046adcd;
L_1046ad88:;
  /* 1046ad88 jmp 0x1046ad57 */
  goto L_1046ad57;
L_1046ad8a:;
  /* 1046ad8a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ad8e jb 0x1046ada3 */
  if (C.cf) goto L_1046ada3;
  /* 1046ad90 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ad94 ja 0x1046ada3 */
  if ((!C.cf&&!C.zf)) goto L_1046ada3;
  /* 1046ad96 call 0x1046ade0 */
  push32(0x1046ad9bu); f_1046ade0();
  /* 1046ad9b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1046ada1 jmp 0x1046adcd */
  goto L_1046adcd;
L_1046ada3:;
  /* 1046ada3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046adaa jb 0x1046adc2 */
  if (C.cf) goto L_1046adc2;
  /* 1046adac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046adb3 ja 0x1046adc2 */
  if ((!C.cf&&!C.zf)) goto L_1046adc2;
  /* 1046adb5 call 0x1046ade0 */
  push32(0x1046adbau); f_1046ade0();
  /* 1046adba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1046adc0 jmp 0x1046adcd */
  goto L_1046adcd;
L_1046adc2:;
  /* 1046adc2 call 0x1046ade0 */
  push32(0x1046adc7u); f_1046ade0();
  /* 1046adc7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1046adcd:;
  /* 1046adcd mov esp, ebp */
  ESP = (EBP);
  /* 1046adcf pop ebp */
  EBP = (pop32());
  /* 1046add0 ret  */
  ESPCHK(0x1046ad40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ade0 @ 0x1046ade0 (13 bytes, 6 insns) */
void f_1046ade0(void) {
  FTRACE(0x1046ade0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ade0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ade1 mov ebp, esp */
  EBP = (ESP);
  /* 1046ade3 call 0x10462950 */
  push32(0x1046ade8u); f_10462950();
  /* 1046ade8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046adeb pop ebp */
  EBP = (pop32());
  /* 1046adec ret  */
  ESPCHK(0x1046ade0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adf0 @ 0x1046adf0 (13 bytes, 6 insns) */
void f_1046adf0(void) {
  FTRACE(0x1046adf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046adf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046adf1 mov ebp, esp */
  EBP = (ESP);
  /* 1046adf3 call 0x10462950 */
  push32(0x1046adf8u); f_10462950();
  /* 1046adf8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046adfb pop ebp */
  EBP = (pop32());
  /* 1046adfc ret  */
  ESPCHK(0x1046adf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae00 @ 0x1046ae00 (176 bytes, 55 insns) [1 switch table(s)] */
void f_1046ae00(void) {
  FTRACE(0x1046ae00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ae00 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ae01 mov ebp, esp */
  EBP = (ESP);
  /* 1046ae03 push edi */
  push32((uint32_t)(EDI));
  /* 1046ae04 push esi */
  push32((uint32_t)(ESI));
  /* 1046ae05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ae08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046ae0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ae0e mov eax, ecx */
  EAX = (ECX);
  /* 1046ae10 mov edx, ecx */
  EDX = (ECX);
  /* 1046ae12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ae14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ae16 jbe 0x1046ae20 */
  if ((C.cf||C.zf)) goto L_1046ae20;
  /* 1046ae18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ae1a jb 0x1046af98 */
  if (C.cf) { jmp_ind(0x1046af98u); return; }
L_1046ae20:;
  /* 1046ae20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1046ae26 jne 0x1046ae3c */
  if (!C.zf) goto L_1046ae3c;
  /* 1046ae28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046ae2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1046ae2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ae31 jb 0x1046ae5c */
  if (C.cf) goto L_1046ae5c;
  /* 1046ae33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1046ae35 jmp dword ptr [edx*4 + 0x1046af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1046af48)))); return;
L_1046ae3c:;
  /* 1046ae3c mov eax, edi */
  EAX = (EDI);
  /* 1046ae3e mov edx, 3 */
  EDX = (0x3u);
  /* 1046ae43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ae46 jb 0x1046ae54 */
  if (C.cf) goto L_1046ae54;
  /* 1046ae48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1046ae4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ae4d jmp dword ptr [eax*4 + 0x1046ae60] */
  switch (EAX) {
    case 1: goto L_1046ae70;
    case 2: goto L_1046ae9c;
    default: x86_unimpl("switch@0x1046ae4d out of table"); return;
  }
L_1046ae54:;
  /* 1046ae54 jmp dword ptr [ecx*4 + 0x1046af58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1046af58)))); return;
  /* 1046ae5b nop  */
  /* nop */
L_1046ae5c:;
  /* 1046ae5c jmp dword ptr [ecx*4 + 0x1046aedc] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1046aedc)))); return;
  /* 1046ae63 nop  */
  /* nop */
  /* 1046ae6c shr byte ptr [esi - 0x2edcefba], 0x8a */
  w8((uint32_t)(ESI + -0x2edcefba), (sh_shr((uint32_t)(r8((uint32_t)(ESI + -0x2edcefba))), (0x8au)&0x1f, 8)));
  /* 1046ae73 push es */
  push32((uint32_t)(C.seg_es));
  /* 1046ae74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1046ae76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1046ae79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1046ae7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1046ae7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046ae82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1046ae85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ae88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ae8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ae8e jb 0x1046ae5c */
  if (C.cf) goto L_1046ae5c;
  /* 1046ae90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1046ae92 jmp dword ptr [edx*4 + 0x1046af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1046af48)))); return;
  /* 1046ae99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1046ae9c:;
  /* 1046ae9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1046ae9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1046aea0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1046aea2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1046aea5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046aea8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1046aeab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
L_1046ae70: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1046ae70 (unresolved jump table)"); return;
}

/* caseD_1 @ 0x1046ae70 (166 bytes, 66 insns) */
void f_1046ae70(void) {
  FTRACE(0x1046ae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ae70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1046ae72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1046ae74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1046ae76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1046ae79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1046ae7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1046ae7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046ae82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1046ae85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ae88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ae8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ae8e jb 0x1046ae5c */
  if (C.cf) { jmp_ind(0x1046ae5cu); return; }
  /* 1046ae90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1046ae92 jmp dword ptr [edx*4 + 0x1046af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1046af48)))); return;
  /* 1046ae99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1046ae9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1046ae9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1046aea0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1046aea2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1046aea5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046aea8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1046aeab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046aeae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1046aeb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046aeb4 jb 0x1046ae5c */
  if (C.cf) { jmp_ind(0x1046ae5cu); return; }
  /* 1046aeb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1046aeb8 jmp dword ptr [edx*4 + 0x1046af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1046af48)))); return;
  /* 1046aebf nop  */
  /* nop */
  /* 1046aec0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1046aec2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1046aec4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1046aec6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046aec7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046aeca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1046aecb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046aece jb 0x1046ae5c */
  if (C.cf) { jmp_ind(0x1046ae5cu); return; }
  /* 1046aed0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1046aed2 jmp dword ptr [edx*4 + 0x1046af48] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1046af48)))); return;
  /* 1046aed9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1046aedc aas  */
  { if(((AL&0x0f)>9)||C.af){ AX=(uint16_t)(AX-6); AH=(uint8_t)(AH-1); C.af=1; C.cf=1; } else { C.af=0; C.cf=0; } AL&=0x0f; }
  /* 1046aedd scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 1046aede inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046aedf adc byte ptr [edi + ebp*4], ch */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046aee2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046aee3 adc byte ptr [edi + ebp*4], ah */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046aee6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046aee7 adc byte ptr [edi + ebp*4], bl */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046aeea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046aeeb adc byte ptr [edi + ebp*4], dl */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046aeee inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046aeef adc byte ptr [edi + ebp*4], cl */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046aef2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046aef3 adc byte ptr [edi + ebp*4], al */
  { uint32_t _a=(r8((uint32_t)(EDI + EBP*4))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EBP*4), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046aef6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046aef7 adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1046aef9 scasb al, byte ptr es:[edi] */
  { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1);
  /* 1046aefa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046aefb adc byte ptr [ebx - 0x761b71bc], cl */
  { uint32_t _a=(r8((uint32_t)(EBX + -0x761b71bc))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + -0x761b71bc), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046af01 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1046af03 in al, 0x8b */
  x86_unimpl("in @ 0x1046af03");
  /* 1046af05 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1046af06 mov gs, eax */
  C.seg_gs = (EAX);
  /* 1046af08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
  /* 1046af0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1046af10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
  /* 1046af14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
}

/* caseD_0 @ 0x1046af58 (7 bytes, 5 insns) */
void f_1046af58(void) {
  FTRACE(0x1046af58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046af58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046af5b pop esi */
  ESI = (pop32());
  /* 1046af5c pop edi */
  EDI = (pop32());
  /* 1046af5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1046af5e ret  */
  ESPCHK(0x1046af58u, _esp0);
  ESP += 4; return;
}

/* caseD_1 @ 0x1046aff8 (160 bytes, 56 insns) */
void f_1046aff8(void) {
  FTRACE(0x1046aff8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046aff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1046affb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1046affd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1046b000 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1046b001 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046b004 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1046b005 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b008 jb 0x1046afc0 */
  if (C.cf) { jmp_ind(0x1046afc0u); return; }
  /* 1046b00a std  */
  C.df=1;
  /* 1046b00b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1046b00d cld  */
  C.df=0;
  /* 1046b00e jmp dword ptr [edx*4 + 0x1046b0e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1046b0e0)))); return;
  /* 1046b015 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1046b018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1046b01b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1046b01d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1046b020 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1046b023 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046b026 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1046b029 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b02c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b02f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b032 jb 0x1046afc0 */
  if (C.cf) { jmp_ind(0x1046afc0u); return; }
  /* 1046b034 std  */
  C.df=1;
  /* 1046b035 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1046b037 cld  */
  C.df=0;
  /* 1046b038 jmp dword ptr [edx*4 + 0x1046b0e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1046b0e0)))); return;
  /* 1046b03f nop  */
  /* nop */
  /* 1046b040 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1046b043 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1046b045 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1046b048 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1046b04b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1046b04e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1046b051 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1046b054 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1046b057 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b05a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b05d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b060 jb 0x1046afc0 */
  if (C.cf) { jmp_ind(0x1046afc0u); return; }
  /* 1046b066 std  */
  C.df=1;
  /* 1046b067 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1046b069 cld  */
  C.df=0;
  /* 1046b06a jmp dword ptr [edx*4 + 0x1046b0e0] */
  jmp_ind((uint32_t)(r32((uint32_t)(EDX*4 + 0x1046b0e0)))); return;
  /* 1046b071 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1046b074 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1046b075 mov al, 0x46 */
  AL = (0x46u);
  /* 1046b077 adc byte ptr [eax + esi*4 - 0x4f5befba], bl */
  { uint32_t _a=(r8((uint32_t)(EAX + ESI*4 + -0x4f5befba))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ESI*4 + -0x4f5befba), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046b07e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046b07f adc byte ptr [eax + esi*4 - 0x4f4befba], ch */
  { uint32_t _a=(r8((uint32_t)(EAX + ESI*4 + -0x4f4befba))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ESI*4 + -0x4f4befba), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046b086 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046b087 adc byte ptr [eax + esi*4 - 0x4f3befba], bh */
  { uint32_t _a=(r8((uint32_t)(EAX + ESI*4 + -0x4f3befba))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ESI*4 + -0x4f3befba), (_r)); fl_add(_a,_b,_r,8); }
  /* 1046b08e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046b08f adc bh, dl */
  { uint32_t _a=(C.b.b.h),_b=(DL),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1046b091 mov al, 0x46 */
  AL = (0x46u);
  /* 1046b093 adc byte ptr [ebx - 0x76e371bc], cl */
  { uint32_t _a=(r8((uint32_t)(EBX + -0x76e371bc))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + -0x76e371bc), (_r)); fl_add(_a,_b,_r,8); }
}

/* caseD_0 @ 0x1046b0f0 (7 bytes, 5 insns) */
void f_1046b0f0(void) {
  FTRACE(0x1046b0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046b0f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b0f3 pop esi */
  ESI = (pop32());
  /* 1046b0f4 pop edi */
  EDI = (pop32());
  /* 1046b0f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1046b0f6 ret  */
  ESPCHK(0x1046b0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x1046b140 (421 bytes, 148 insns) */
void f_1046b140(void) {
  FTRACE(0x1046b140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046b140 push ebp */
  push32((uint32_t)(EBP));
  /* 1046b141 mov ebp, esp */
  EBP = (ESP);
  /* 1046b143 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1046b145 push 0x10489fa8 */
  push32((uint32_t)(0x10489fa8u));
  /* 1046b14a push 0x1046c018 */
  push32((uint32_t)(0x1046c018u));
  /* 1046b14f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1046b155 push eax */
  push32((uint32_t)(EAX));
  /* 1046b156 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1046b15d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b160 push ebx */
  push32((uint32_t)(EBX));
  /* 1046b161 push esi */
  push32((uint32_t)(ESI));
  /* 1046b162 push edi */
  push32((uint32_t)(EDI));
  /* 1046b163 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1046b166 cmp dword ptr [0x1048e674], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e674))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b16d jne 0x1046b1be */
  if (!C.zf) goto L_1046b1be;
  /* 1046b16f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1046b172 push eax */
  push32((uint32_t)(EAX));
  /* 1046b173 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046b175 push 0x10489fa4 */
  push32((uint32_t)(0x10489fa4u));
  /* 1046b17a push 1 */
  push32((uint32_t)(0x1u));
  /* 1046b17c call dword ptr [0x1049033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049033c))), 0x1046b182u);
  /* 1046b182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b184 je 0x1046b192 */
  if (C.zf) goto L_1046b192;
  /* 1046b186 mov dword ptr [0x1048e674], 1 */
  w32((uint32_t)(0x1048e674), (0x1u));
  /* 1046b190 jmp 0x1046b1be */
  goto L_1046b1be;
L_1046b192:;
  /* 1046b192 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1046b195 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b196 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046b198 push 0x10489fa0 */
  push32((uint32_t)(0x10489fa0u));
  /* 1046b19d push 1 */
  push32((uint32_t)(0x1u));
  /* 1046b19f push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b1a1 call dword ptr [0x10490338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490338))), 0x1046b1a7u);
  /* 1046b1a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b1a9 je 0x1046b1b7 */
  if (C.zf) goto L_1046b1b7;
  /* 1046b1ab mov dword ptr [0x1048e674], 2 */
  w32((uint32_t)(0x1048e674), (0x2u));
  /* 1046b1b5 jmp 0x1046b1be */
  goto L_1046b1be;
L_1046b1b7:;
  /* 1046b1b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b1b9 jmp 0x1046b2e8 */
  goto L_1046b2e8;
L_1046b1be:;
  /* 1046b1be cmp dword ptr [0x1048e674], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1048e674))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b1c5 jne 0x1046b1f5 */
  if (!C.zf) goto L_1046b1f5;
  /* 1046b1c7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b1cb jne 0x1046b1d6 */
  if (!C.zf) goto L_1046b1d6;
  /* 1046b1cd mov edx, dword ptr [0x1048e680] */
  EDX = (r32((uint32_t)(0x1048e680)));
  /* 1046b1d3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1046b1d6:;
  /* 1046b1d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046b1d9 push eax */
  push32((uint32_t)(EAX));
  /* 1046b1da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b1dd push ecx */
  push32((uint32_t)(ECX));
  /* 1046b1de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b1e1 push edx */
  push32((uint32_t)(EDX));
  /* 1046b1e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b1e5 push eax */
  push32((uint32_t)(EAX));
  /* 1046b1e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1046b1e9 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b1ea call dword ptr [0x10490338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490338))), 0x1046b1f0u);
  /* 1046b1f0 jmp 0x1046b2e8 */
  goto L_1046b2e8;
L_1046b1f5:;
  /* 1046b1f5 cmp dword ptr [0x1048e674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b1fc jne 0x1046b2e6 */
  if (!C.zf) goto L_1046b2e6;
  /* 1046b202 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b206 jne 0x1046b211 */
  if (!C.zf) goto L_1046b211;
  /* 1046b208 mov edx, dword ptr [0x1048e690] */
  EDX = (r32((uint32_t)(0x1048e690)));
  /* 1046b20e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1046b211:;
  /* 1046b211 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b213 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b215 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b218 push eax */
  push32((uint32_t)(EAX));
  /* 1046b219 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b21c push ecx */
  push32((uint32_t)(ECX));
  /* 1046b21d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1046b220 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046b222 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b224 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1046b227 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b22a push edx */
  push32((uint32_t)(EDX));
  /* 1046b22b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046b22e push eax */
  push32((uint32_t)(EAX));
  /* 1046b22f call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x1046b235u);
  /* 1046b235 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1046b238 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b23c jne 0x1046b245 */
  if (!C.zf) goto L_1046b245;
  /* 1046b23e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b240 jmp 0x1046b2e8 */
  goto L_1046b2e8;
L_1046b245:;
  /* 1046b245 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046b24c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046b24f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1046b251 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b254 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1046b256 call 0x104660b0 */
  push32(0x1046b25bu); f_104660b0();
  /* 1046b25b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1046b25e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1046b261 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046b264 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1046b267 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046b26a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1046b26c push edx */
  push32((uint32_t)(EDX));
  /* 1046b26d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b26f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046b272 push eax */
  push32((uint32_t)(EAX));
  /* 1046b273 call 0x10466c80 */
  push32(0x1046b278u); f_10466c80();
  /* 1046b278 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b27b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1046b282 jmp 0x1046b29b */
  goto L_1046b29b;
  /* 1046b284 mov eax, 1 */
  EAX = (0x1u);
  /* 1046b289 ret  */
  ESPCHK(0x1046b140u, _esp0);
  ESP += 4; return;
  /* 1046b28a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1046b28d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1046b294 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1046b29b:;
  /* 1046b29b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b29f jne 0x1046b2a5 */
  if (!C.zf) goto L_1046b2a5;
  /* 1046b2a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b2a3 jmp 0x1046b2e8 */
  goto L_1046b2e8;
L_1046b2a5:;
  /* 1046b2a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046b2a8 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b2a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046b2ac push edx */
  push32((uint32_t)(EDX));
  /* 1046b2ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b2b0 push eax */
  push32((uint32_t)(EAX));
  /* 1046b2b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b2b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b2b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046b2b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046b2ba push edx */
  push32((uint32_t)(EDX));
  /* 1046b2bb call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x1046b2c1u);
  /* 1046b2c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1046b2c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b2c8 jne 0x1046b2ce */
  if (!C.zf) goto L_1046b2ce;
  /* 1046b2ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b2cc jmp 0x1046b2e8 */
  goto L_1046b2e8;
L_1046b2ce:;
  /* 1046b2ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046b2d1 push eax */
  push32((uint32_t)(EAX));
  /* 1046b2d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046b2d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b2d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046b2d9 push edx */
  push32((uint32_t)(EDX));
  /* 1046b2da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b2dd push eax */
  push32((uint32_t)(EAX));
  /* 1046b2de call dword ptr [0x1049033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049033c))), 0x1046b2e4u);
  /* 1046b2e4 jmp 0x1046b2e8 */
  goto L_1046b2e8;
L_1046b2e6:;
  /* 1046b2e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046b2e8:;
  /* 1046b2e8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1046b2eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046b2ee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1046b2f5 pop edi */
  EDI = (pop32());
  /* 1046b2f6 pop esi */
  ESI = (pop32());
  /* 1046b2f7 pop ebx */
  EBX = (pop32());
  /* 1046b2f8 mov esp, ebp */
  ESP = (EBP);
  /* 1046b2fa pop ebp */
  EBP = (pop32());
  /* 1046b2fb ret  */
  ESPCHK(0x1046b140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b300 @ 0x1046b300 (727 bytes, 263 insns) */
void f_1046b300(void) {
  FTRACE(0x1046b300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046b300 push ebp */
  push32((uint32_t)(EBP));
  /* 1046b301 mov ebp, esp */
  EBP = (ESP);
  /* 1046b303 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1046b305 push 0x10489fb8 */
  push32((uint32_t)(0x10489fb8u));
  /* 1046b30a push 0x1046c018 */
  push32((uint32_t)(0x1046c018u));
  /* 1046b30f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1046b315 push eax */
  push32((uint32_t)(EAX));
  /* 1046b316 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1046b31d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b320 push ebx */
  push32((uint32_t)(EBX));
  /* 1046b321 push esi */
  push32((uint32_t)(ESI));
  /* 1046b322 push edi */
  push32((uint32_t)(EDI));
  /* 1046b323 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1046b326 cmp dword ptr [0x1048e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b32d jne 0x1046b386 */
  if (!C.zf) goto L_1046b386;
  /* 1046b32f push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b331 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b333 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046b335 push 0x10489fa4 */
  push32((uint32_t)(0x10489fa4u));
  /* 1046b33a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1046b33f push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b341 call dword ptr [0x10490344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490344))), 0x1046b347u);
  /* 1046b347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b349 je 0x1046b357 */
  if (C.zf) goto L_1046b357;
  /* 1046b34b mov dword ptr [0x1048e698], 1 */
  w32((uint32_t)(0x1048e698), (0x1u));
  /* 1046b355 jmp 0x1046b386 */
  goto L_1046b386;
L_1046b357:;
  /* 1046b357 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b35b push 1 */
  push32((uint32_t)(0x1u));
  /* 1046b35d push 0x10489fa0 */
  push32((uint32_t)(0x10489fa0u));
  /* 1046b362 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1046b367 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b369 call dword ptr [0x10490340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490340))), 0x1046b36fu);
  /* 1046b36f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b371 je 0x1046b37f */
  if (C.zf) goto L_1046b37f;
  /* 1046b373 mov dword ptr [0x1048e698], 2 */
  w32((uint32_t)(0x1048e698), (0x2u));
  /* 1046b37d jmp 0x1046b386 */
  goto L_1046b386;
L_1046b37f:;
  /* 1046b37f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b381 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b386:;
  /* 1046b386 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b38a jle 0x1046b39f */
  if ((C.zf||C.sf!=C.of)) goto L_1046b39f;
  /* 1046b38c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046b38f push eax */
  push32((uint32_t)(EAX));
  /* 1046b390 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b393 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b394 call 0x1046b610 */
  push32(0x1046b399u); f_1046b610();
  /* 1046b399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b39c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1046b39f:;
  /* 1046b39f cmp dword ptr [0x1048e698], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1048e698))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b3a6 jne 0x1046b3cb */
  if (!C.zf) goto L_1046b3cb;
  /* 1046b3a8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1046b3ab push edx */
  push32((uint32_t)(EDX));
  /* 1046b3ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046b3af push eax */
  push32((uint32_t)(EAX));
  /* 1046b3b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046b3b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b3b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b3b7 push edx */
  push32((uint32_t)(EDX));
  /* 1046b3b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b3bb push eax */
  push32((uint32_t)(EAX));
  /* 1046b3bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b3bf push ecx */
  push32((uint32_t)(ECX));
  /* 1046b3c0 call dword ptr [0x10490340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490340))), 0x1046b3c6u);
  /* 1046b3c6 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b3cb:;
  /* 1046b3cb cmp dword ptr [0x1048e698], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e698))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b3d2 jne 0x1046b5ef */
  if (!C.zf) goto L_1046b5ef;
  /* 1046b3d8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b3dc jne 0x1046b3e7 */
  if (!C.zf) goto L_1046b3e7;
  /* 1046b3de mov edx, dword ptr [0x1048e690] */
  EDX = (r32((uint32_t)(0x1048e690)));
  /* 1046b3e4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1046b3e7:;
  /* 1046b3e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b3e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b3eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046b3ee push eax */
  push32((uint32_t)(EAX));
  /* 1046b3ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b3f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b3f3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1046b3f6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046b3f8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b3fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1046b3fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b400 push edx */
  push32((uint32_t)(EDX));
  /* 1046b401 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1046b404 push eax */
  push32((uint32_t)(EAX));
  /* 1046b405 call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x1046b40bu);
  /* 1046b40b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1046b40e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b412 jne 0x1046b41b */
  if (!C.zf) goto L_1046b41b;
  /* 1046b414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b416 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b41b:;
  /* 1046b41b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046b422 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046b425 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1046b427 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b42a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1046b42c call 0x104660b0 */
  push32(0x1046b431u); f_104660b0();
  /* 1046b431 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1046b434 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1046b437 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046b43a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1046b43d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1046b444 jmp 0x1046b45d */
  goto L_1046b45d;
  /* 1046b446 mov eax, 1 */
  EAX = (0x1u);
  /* 1046b44b ret  */
  ESPCHK(0x1046b300u, _esp0);
  ESP += 4; return;
  /* 1046b44c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1046b44f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1046b456 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1046b45d:;
  /* 1046b45d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b461 jne 0x1046b46a */
  if (!C.zf) goto L_1046b46a;
  /* 1046b463 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b465 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b46a:;
  /* 1046b46a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046b46d push edx */
  push32((uint32_t)(EDX));
  /* 1046b46e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046b471 push eax */
  push32((uint32_t)(EAX));
  /* 1046b472 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046b475 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b476 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b479 push edx */
  push32((uint32_t)(EDX));
  /* 1046b47a push 1 */
  push32((uint32_t)(0x1u));
  /* 1046b47c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1046b47f push eax */
  push32((uint32_t)(EAX));
  /* 1046b480 call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x1046b486u);
  /* 1046b486 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b488 jne 0x1046b491 */
  if (!C.zf) goto L_1046b491;
  /* 1046b48a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b48c jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b491:;
  /* 1046b491 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b493 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b495 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046b498 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b499 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046b49c push edx */
  push32((uint32_t)(EDX));
  /* 1046b49d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b4a0 push eax */
  push32((uint32_t)(EAX));
  /* 1046b4a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b4a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b4a5 call dword ptr [0x10490344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490344))), 0x1046b4abu);
  /* 1046b4ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1046b4ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b4b2 jne 0x1046b4bb */
  if (!C.zf) goto L_1046b4bb;
  /* 1046b4b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b4b6 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b4bb:;
  /* 1046b4bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b4be and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1046b4c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046b4c6 je 0x1046b50b */
  if (C.zf) goto L_1046b50b;
  /* 1046b4c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b4cc je 0x1046b506 */
  if (C.zf) goto L_1046b506;
  /* 1046b4ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046b4d1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b4d4 jle 0x1046b4dd */
  if ((C.zf||C.sf!=C.of)) goto L_1046b4dd;
  /* 1046b4d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b4d8 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b4dd:;
  /* 1046b4dd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1046b4e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b4e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046b4e4 push edx */
  push32((uint32_t)(EDX));
  /* 1046b4e5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046b4e8 push eax */
  push32((uint32_t)(EAX));
  /* 1046b4e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046b4ec push ecx */
  push32((uint32_t)(ECX));
  /* 1046b4ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b4f0 push edx */
  push32((uint32_t)(EDX));
  /* 1046b4f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b4f4 push eax */
  push32((uint32_t)(EAX));
  /* 1046b4f5 call dword ptr [0x10490344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490344))), 0x1046b4fbu);
  /* 1046b4fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b4fd jne 0x1046b506 */
  if (!C.zf) goto L_1046b506;
  /* 1046b4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b501 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b506:;
  /* 1046b506 jmp 0x1046b5ea */
  goto L_1046b5ea;
L_1046b50b:;
  /* 1046b50b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046b50e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1046b511 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1046b518 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046b51b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1046b51d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b520 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1046b522 call 0x104660b0 */
  push32(0x1046b527u); f_104660b0();
  /* 1046b527 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1046b52a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1046b52d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1046b530 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1046b533 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1046b53a jmp 0x1046b553 */
  goto L_1046b553;
  /* 1046b53c mov eax, 1 */
  EAX = (0x1u);
  /* 1046b541 ret  */
  ESPCHK(0x1046b300u, _esp0);
  ESP += 4; return;
  /* 1046b542 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1046b545 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1046b54c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1046b553:;
  /* 1046b553 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b557 jne 0x1046b560 */
  if (!C.zf) goto L_1046b560;
  /* 1046b559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b55b jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b560:;
  /* 1046b560 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046b563 push eax */
  push32((uint32_t)(EAX));
  /* 1046b564 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046b567 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b568 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046b56b push edx */
  push32((uint32_t)(EDX));
  /* 1046b56c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046b56f push eax */
  push32((uint32_t)(EAX));
  /* 1046b570 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b573 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b577 push edx */
  push32((uint32_t)(EDX));
  /* 1046b578 call dword ptr [0x10490344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490344))), 0x1046b57eu);
  /* 1046b57e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b580 jne 0x1046b586 */
  if (!C.zf) goto L_1046b586;
  /* 1046b582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b584 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b586:;
  /* 1046b586 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b58a jne 0x1046b5ba */
  if (!C.zf) goto L_1046b5ba;
  /* 1046b58c push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b58e push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b590 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b592 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b594 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046b597 push eax */
  push32((uint32_t)(EAX));
  /* 1046b598 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046b59b push ecx */
  push32((uint32_t)(ECX));
  /* 1046b59c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1046b5a1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1046b5a4 push edx */
  push32((uint32_t)(EDX));
  /* 1046b5a5 call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x1046b5abu);
  /* 1046b5ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1046b5ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b5b2 jne 0x1046b5b8 */
  if (!C.zf) goto L_1046b5b8;
  /* 1046b5b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b5b6 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b5b8:;
  /* 1046b5b8 jmp 0x1046b5ea */
  goto L_1046b5ea;
L_1046b5ba:;
  /* 1046b5ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b5bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b5be mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1046b5c1 push eax */
  push32((uint32_t)(EAX));
  /* 1046b5c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1046b5c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b5c6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046b5c9 push edx */
  push32((uint32_t)(EDX));
  /* 1046b5ca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046b5cd push eax */
  push32((uint32_t)(EAX));
  /* 1046b5ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1046b5d3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1046b5d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b5d7 call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x1046b5ddu);
  /* 1046b5dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1046b5e0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b5e4 jne 0x1046b5ea */
  if (!C.zf) goto L_1046b5ea;
  /* 1046b5e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b5e8 jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b5ea:;
  /* 1046b5ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046b5ed jmp 0x1046b5f1 */
  goto L_1046b5f1;
L_1046b5ef:;
  /* 1046b5ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046b5f1:;
  /* 1046b5f1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1046b5f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046b5f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1046b5fe pop edi */
  EDI = (pop32());
  /* 1046b5ff pop esi */
  ESI = (pop32());
  /* 1046b600 pop ebx */
  EBX = (pop32());
  /* 1046b601 mov esp, ebp */
  ESP = (EBP);
  /* 1046b603 pop ebp */
  EBP = (pop32());
  /* 1046b604 ret  */
  ESPCHK(0x1046b300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b610 @ 0x1046b610 (80 bytes, 32 insns) */
void f_1046b610(void) {
  FTRACE(0x1046b610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046b610 push ebp */
  push32((uint32_t)(EBP));
  /* 1046b611 mov ebp, esp */
  EBP = (ESP);
  /* 1046b613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b616 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b619 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046b61c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b61f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1046b622:;
  /* 1046b622 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046b625 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046b628 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b62b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046b62e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046b630 je 0x1046b647 */
  if (C.zf) goto L_1046b647;
  /* 1046b632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046b635 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046b638 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046b63a je 0x1046b647 */
  if (C.zf) goto L_1046b647;
  /* 1046b63c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046b63f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b642 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046b645 jmp 0x1046b622 */
  goto L_1046b622;
L_1046b647:;
  /* 1046b647 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046b64a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046b64d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046b64f jne 0x1046b659 */
  if (!C.zf) goto L_1046b659;
  /* 1046b651 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046b654 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b657 jmp 0x1046b65c */
  goto L_1046b65c;
L_1046b659:;
  /* 1046b659 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1046b65c:;
  /* 1046b65c mov esp, ebp */
  ESP = (EBP);
  /* 1046b65e pop ebp */
  EBP = (pop32());
  /* 1046b65f ret  */
  ESPCHK(0x1046b610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b660 @ 0x1046b660 (130 bytes, 43 insns) */
void f_1046b660(void) {
  FTRACE(0x1046b660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046b660 push ebp */
  push32((uint32_t)(EBP));
  /* 1046b661 mov ebp, esp */
  EBP = (ESP);
  /* 1046b663 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b664 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b667 cmp eax, dword ptr [0x1048ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b66d jae 0x1046b691 */
  if (!C.cf) goto L_1046b691;
  /* 1046b66f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b672 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046b675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b678 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046b67b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046b67e mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046b685 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1046b68a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1046b68d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046b68f jne 0x1046b6ac */
  if (!C.zf) goto L_1046b6ac;
L_1046b691:;
  /* 1046b691 call 0x1046ade0 */
  push32(0x1046b696u); f_1046ade0();
  /* 1046b696 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046b69c call 0x1046adf0 */
  push32(0x1046b6a1u); f_1046adf0();
  /* 1046b6a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1046b6a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046b6aa jmp 0x1046b6de */
  goto L_1046b6de;
L_1046b6ac:;
  /* 1046b6ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b6af push edx */
  push32((uint32_t)(EDX));
  /* 1046b6b0 call 0x1046c600 */
  push32(0x1046b6b5u); f_1046c600();
  /* 1046b6b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b6b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b6bb push eax */
  push32((uint32_t)(EAX));
  /* 1046b6bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b6bf push ecx */
  push32((uint32_t)(ECX));
  /* 1046b6c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b6c3 push edx */
  push32((uint32_t)(EDX));
  /* 1046b6c4 call 0x1046b6f0 */
  push32(0x1046b6c9u); f_1046b6f0();
  /* 1046b6c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b6cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046b6cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b6d2 push eax */
  push32((uint32_t)(EAX));
  /* 1046b6d3 call 0x1046c690 */
  push32(0x1046b6d8u); f_1046c690();
  /* 1046b6d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b6db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1046b6de:;
  /* 1046b6de mov esp, ebp */
  ESP = (EBP);
  /* 1046b6e0 pop ebp */
  EBP = (pop32());
  /* 1046b6e1 ret  */
  ESPCHK(0x1046b660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x1046b6f0 (178 bytes, 56 insns) */
void f_1046b6f0(void) {
  FTRACE(0x1046b6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046b6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046b6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1046b6f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b6f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b6f9 push eax */
  push32((uint32_t)(EAX));
  /* 1046b6fa call 0x1046c480 */
  push32(0x1046b6ffu); f_1046c480();
  /* 1046b6ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b702 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046b705 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b709 jne 0x1046b71e */
  if (!C.zf) goto L_1046b71e;
  /* 1046b70b call 0x1046ade0 */
  push32(0x1046b710u); f_1046ade0();
  /* 1046b710 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046b716 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046b719 jmp 0x1046b79e */
  goto L_1046b79e;
L_1046b71e:;
  /* 1046b71e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b721 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b722 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b724 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b727 push edx */
  push32((uint32_t)(EDX));
  /* 1046b728 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046b72b push eax */
  push32((uint32_t)(EAX));
  /* 1046b72c call dword ptr [0x10490348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490348))), 0x1046b732u);
  /* 1046b732 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046b735 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b739 jne 0x1046b746 */
  if (!C.zf) goto L_1046b746;
  /* 1046b73b call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x1046b741u);
  /* 1046b741 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046b744 jmp 0x1046b74d */
  goto L_1046b74d;
L_1046b746:;
  /* 1046b746 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1046b74d:;
  /* 1046b74d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b751 je 0x1046b764 */
  if (C.zf) goto L_1046b764;
  /* 1046b753 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046b756 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b757 call 0x1046ad40 */
  push32(0x1046b75cu); f_1046ad40();
  /* 1046b75c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b75f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046b762 jmp 0x1046b79e */
  goto L_1046b79e;
L_1046b764:;
  /* 1046b764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b767 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1046b76a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b76d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1046b770 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046b773 mov ecx, dword ptr [edx*4 + 0x1048fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1048fe60)));
  /* 1046b77a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1046b77e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1046b781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b784 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046b787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b78a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046b78d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046b790 mov eax, dword ptr [eax*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046b797 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1046b79b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1046b79e:;
  /* 1046b79e mov esp, ebp */
  ESP = (EBP);
  /* 1046b7a0 pop ebp */
  EBP = (pop32());
  /* 1046b7a1 ret  */
  ESPCHK(0x1046b6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7b0 @ 0x1046b7b0 (130 bytes, 43 insns) */
void f_1046b7b0(void) {
  FTRACE(0x1046b7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046b7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046b7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1046b7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b7b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b7b7 cmp eax, dword ptr [0x1048ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b7bd jae 0x1046b7e1 */
  if (!C.cf) goto L_1046b7e1;
  /* 1046b7bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b7c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046b7c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b7c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046b7cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046b7ce mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046b7d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1046b7da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1046b7dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046b7df jne 0x1046b7fc */
  if (!C.zf) goto L_1046b7fc;
L_1046b7e1:;
  /* 1046b7e1 call 0x1046ade0 */
  push32(0x1046b7e6u); f_1046ade0();
  /* 1046b7e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046b7ec call 0x1046adf0 */
  push32(0x1046b7f1u); f_1046adf0();
  /* 1046b7f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1046b7f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046b7fa jmp 0x1046b82e */
  goto L_1046b82e;
L_1046b7fc:;
  /* 1046b7fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b7ff push edx */
  push32((uint32_t)(EDX));
  /* 1046b800 call 0x1046c600 */
  push32(0x1046b805u); f_1046c600();
  /* 1046b805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b808 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b80b push eax */
  push32((uint32_t)(EAX));
  /* 1046b80c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b80f push ecx */
  push32((uint32_t)(ECX));
  /* 1046b810 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b813 push edx */
  push32((uint32_t)(EDX));
  /* 1046b814 call 0x1046b840 */
  push32(0x1046b819u); f_1046b840();
  /* 1046b819 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b81c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046b81f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b822 push eax */
  push32((uint32_t)(EAX));
  /* 1046b823 call 0x1046c690 */
  push32(0x1046b828u); f_1046c690();
  /* 1046b828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b82b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1046b82e:;
  /* 1046b82e mov esp, ebp */
  ESP = (EBP);
  /* 1046b830 pop ebp */
  EBP = (pop32());
  /* 1046b831 ret  */
  ESPCHK(0x1046b7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x1046b840 (627 bytes, 182 insns) */
void f_1046b840(void) {
  FTRACE(0x1046b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046b840 push ebp */
  push32((uint32_t)(EBP));
  /* 1046b841 mov ebp, esp */
  EBP = (ESP);
  /* 1046b843 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b849 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1046b850 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046b853 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1046b859 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b85d jne 0x1046b866 */
  if (!C.zf) goto L_1046b866;
  /* 1046b85f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046b861 jmp 0x1046baaf */
  goto L_1046baaf;
L_1046b866:;
  /* 1046b866 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b869 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046b86c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b86f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046b872 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046b875 mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046b87c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1046b881 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1046b884 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046b886 je 0x1046b898 */
  if (C.zf) goto L_1046b898;
  /* 1046b888 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046b88a push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b88c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b88f push edx */
  push32((uint32_t)(EDX));
  /* 1046b890 call 0x1046b6f0 */
  push32(0x1046b895u); f_1046b6f0();
  /* 1046b895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046b898:;
  /* 1046b898 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b89b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046b89e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b8a1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046b8a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046b8a7 mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046b8ae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1046b8b3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1046b8b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b8ba je 0x1046b9cc */
  if (C.zf) goto L_1046b9cc;
  /* 1046b8c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b8c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1046b8c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1046b8cd:;
  /* 1046b8cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046b8d0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b8d3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b8d6 jae 0x1046b9ca */
  if (!C.cf) goto L_1046b9ca;
  /* 1046b8dc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1046b8e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1046b8e5:;
  /* 1046b8e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046b8e8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1046b8ee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b8f0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b8f6 jge 0x1046b957 */
  if ((C.sf==C.of)) goto L_1046b957;
  /* 1046b8f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046b8fb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b8fe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b901 jae 0x1046b957 */
  if (!C.cf) goto L_1046b957;
  /* 1046b903 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046b906 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1046b908 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1046b90e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046b911 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b914 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046b917 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1046b91e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b921 jne 0x1046b941 */
  if (!C.zf) goto L_1046b941;
  /* 1046b923 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1046b929 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b92c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1046b932 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046b935 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1046b938 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046b93b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b93e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1046b941:;
  /* 1046b941 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046b944 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1046b94a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1046b94c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046b94f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b952 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046b955 jmp 0x1046b8e5 */
  goto L_1046b8e5;
L_1046b957:;
  /* 1046b957 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b959 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1046b95f push edx */
  push32((uint32_t)(EDX));
  /* 1046b960 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046b963 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1046b969 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b96b push eax */
  push32((uint32_t)(EAX));
  /* 1046b96c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1046b972 push edx */
  push32((uint32_t)(EDX));
  /* 1046b973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b976 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046b979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b97c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046b97f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046b982 mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046b989 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1046b98c push eax */
  push32((uint32_t)(EAX));
  /* 1046b98d call dword ptr [0x10490280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490280))), 0x1046b993u);
  /* 1046b993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b995 je 0x1046b9ba */
  if (C.zf) goto L_1046b9ba;
  /* 1046b997 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046b99a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046b9a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1046b9a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046b9a6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1046b9ac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046b9ae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046b9b4 jge 0x1046b9b8 */
  if ((C.sf==C.of)) goto L_1046b9b8;
  /* 1046b9b6 jmp 0x1046b9ca */
  goto L_1046b9ca;
L_1046b9b8:;
  /* 1046b9b8 jmp 0x1046b9c5 */
  goto L_1046b9c5;
L_1046b9ba:;
  /* 1046b9ba call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x1046b9c0u);
  /* 1046b9c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046b9c3 jmp 0x1046b9ca */
  goto L_1046b9ca;
L_1046b9c5:;
  /* 1046b9c5 jmp 0x1046b8cd */
  goto L_1046b8cd;
L_1046b9ca:;
  /* 1046b9ca jmp 0x1046ba1c */
  goto L_1046ba1c;
L_1046b9cc:;
  /* 1046b9cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1046b9ce lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1046b9d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b9d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046b9d8 push edx */
  push32((uint32_t)(EDX));
  /* 1046b9d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046b9dc push eax */
  push32((uint32_t)(EAX));
  /* 1046b9dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b9e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046b9e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046b9e6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046b9e9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046b9ec mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046b9f3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1046b9f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1046b9f7 call dword ptr [0x10490280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490280))), 0x1046b9fdu);
  /* 1046b9fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046b9ff je 0x1046ba13 */
  if (C.zf) goto L_1046ba13;
  /* 1046ba01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1046ba08 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1046ba0e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1046ba11 jmp 0x1046ba1c */
  goto L_1046ba1c;
L_1046ba13:;
  /* 1046ba13 call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x1046ba19u);
  /* 1046ba19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1046ba1c:;
  /* 1046ba1c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ba20 jne 0x1046baa6 */
  if (!C.zf) goto L_1046baa6;
  /* 1046ba26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ba2a je 0x1046ba5a */
  if (C.zf) goto L_1046ba5a;
  /* 1046ba2c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ba30 jne 0x1046ba49 */
  if (!C.zf) goto L_1046ba49;
  /* 1046ba32 call 0x1046ade0 */
  push32(0x1046ba37u); f_1046ade0();
  /* 1046ba37 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046ba3d call 0x1046adf0 */
  push32(0x1046ba42u); f_1046adf0();
  /* 1046ba42 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ba45 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1046ba47 jmp 0x1046ba55 */
  goto L_1046ba55;
L_1046ba49:;
  /* 1046ba49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ba4c push edx */
  push32((uint32_t)(EDX));
  /* 1046ba4d call 0x1046ad40 */
  push32(0x1046ba52u); f_1046ad40();
  /* 1046ba52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046ba55:;
  /* 1046ba55 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046ba58 jmp 0x1046baaf */
  goto L_1046baaf;
L_1046ba5a:;
  /* 1046ba5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ba5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046ba60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ba63 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046ba66 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046ba69 mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046ba70 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1046ba75 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1046ba78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046ba7a je 0x1046ba8b */
  if (C.zf) goto L_1046ba8b;
  /* 1046ba7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ba7f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046ba82 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ba85 jne 0x1046ba8b */
  if (!C.zf) goto L_1046ba8b;
  /* 1046ba87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ba89 jmp 0x1046baaf */
  goto L_1046baaf;
L_1046ba8b:;
  /* 1046ba8b call 0x1046ade0 */
  push32(0x1046ba90u); f_1046ade0();
  /* 1046ba90 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1046ba96 call 0x1046adf0 */
  push32(0x1046ba9bu); f_1046adf0();
  /* 1046ba9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1046baa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046baa4 jmp 0x1046baaf */
  goto L_1046baaf;
L_1046baa6:;
  /* 1046baa6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046baa9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1046baaf:;
  /* 1046baaf mov esp, ebp */
  ESP = (EBP);
  /* 1046bab1 pop ebp */
  EBP = (pop32());
  /* 1046bab2 ret  */
  ESPCHK(0x1046b840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac0 @ 0x1046bac0 (199 bytes, 68 insns) */
void f_1046bac0(void) {
  FTRACE(0x1046bac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bac1 mov ebp, esp */
  EBP = (ESP);
  /* 1046bac3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046bac4 push ebx */
  push32((uint32_t)(EBX));
  /* 1046bac5 push esi */
  push32((uint32_t)(ESI));
  /* 1046bac6 push edi */
  push32((uint32_t)(EDI));
L_1046bac7:;
  /* 1046bac7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bacb jne 0x1046baeb */
  if (!C.zf) goto L_1046baeb;
  /* 1046bacd push 0x10489f04 */
  push32((uint32_t)(0x10489f04u));
  /* 1046bad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046bad4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1046bad6 push 0x10489fd0 */
  push32((uint32_t)(0x10489fd0u));
  /* 1046badb push 2 */
  push32((uint32_t)(0x2u));
  /* 1046badd call 0x10461fd0 */
  push32(0x1046bae2u); f_10461fd0();
  /* 1046bae2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bae5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bae8 jne 0x1046baeb */
  if (!C.zf) goto L_1046baeb;
  /* 1046baea int3  */
  x86_unimpl("int3 @ 0x1046baea");
L_1046baeb:;
  /* 1046baeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046baed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046baef jne 0x1046bac7 */
  if (!C.zf) goto L_1046bac7;
  /* 1046baf1 mov ecx, dword ptr [0x1048e69c] */
  ECX = (r32((uint32_t)(0x1048e69c)));
  /* 1046baf7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bafa mov dword ptr [0x1048e69c], ecx */
  w32((uint32_t)(0x1048e69c), (ECX));
  /* 1046bb00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bb03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046bb06 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1046bb08 push 0x10489fd0 */
  push32((uint32_t)(0x10489fd0u));
  /* 1046bb0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1046bb0f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1046bb14 call 0x10462f10 */
  push32(0x1046bb19u); f_10462f10();
  /* 1046bb19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bb1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb1f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1046bb22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb25 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bb29 je 0x1046bb46 */
  if (C.zf) goto L_1046bb46;
  /* 1046bb2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb2e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1046bb31 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1046bb34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb37 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1046bb3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb3d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1046bb44 jmp 0x1046bb6b */
  goto L_1046bb6b;
L_1046bb46:;
  /* 1046bb46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb49 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046bb4c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1046bb4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb52 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1046bb55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb58 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bb5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb5e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1046bb61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb64 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1046bb6b:;
  /* 1046bb6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1046bb74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1046bb76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bb79 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1046bb80 pop edi */
  EDI = (pop32());
  /* 1046bb81 pop esi */
  ESI = (pop32());
  /* 1046bb82 pop ebx */
  EBX = (pop32());
  /* 1046bb83 mov esp, ebp */
  ESP = (EBP);
  /* 1046bb85 pop ebp */
  EBP = (pop32());
  /* 1046bb86 ret  */
  ESPCHK(0x1046bac0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1046bb90 (50 bytes, 17 insns) */
void f_1046bb90(void) {
  FTRACE(0x1046bb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bb91 mov ebp, esp */
  EBP = (ESP);
  /* 1046bb93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bb96 cmp eax, dword ptr [0x1048ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bb9c jb 0x1046bba2 */
  if (C.cf) goto L_1046bba2;
  /* 1046bb9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046bba0 jmp 0x1046bbc0 */
  goto L_1046bbc0;
L_1046bba2:;
  /* 1046bba2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bba5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046bba8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bbab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046bbae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046bbb1 mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046bbb8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1046bbbd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1046bbc0:;
  /* 1046bbc0 pop ebp */
  EBP = (pop32());
  /* 1046bbc1 ret  */
  ESPCHK(0x1046bb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x1046bbd0 (300 bytes, 80 insns) */
void f_1046bbd0(void) {
  FTRACE(0x1046bbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bbd1 mov ebp, esp */
  EBP = (ESP);
  /* 1046bbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046bbd4 cmp dword ptr [0x1048fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bbdb jne 0x1046bbe9 */
  if (!C.zf) goto L_1046bbe9;
  /* 1046bbdd mov dword ptr [0x1048fb60], 0x200 */
  w32((uint32_t)(0x1048fb60), (0x200u));
  /* 1046bbe7 jmp 0x1046bbfc */
  goto L_1046bbfc;
L_1046bbe9:;
  /* 1046bbe9 cmp dword ptr [0x1048fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x1048fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bbf0 jge 0x1046bbfc */
  if ((C.sf==C.of)) goto L_1046bbfc;
  /* 1046bbf2 mov dword ptr [0x1048fb60], 0x14 */
  w32((uint32_t)(0x1048fb60), (0x14u));
L_1046bbfc:;
  /* 1046bbfc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1046bc01 push 0x10489fdc */
  push32((uint32_t)(0x10489fdcu));
  /* 1046bc06 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046bc08 push 4 */
  push32((uint32_t)(0x4u));
  /* 1046bc0a mov eax, dword ptr [0x1048fb60] */
  EAX = (r32((uint32_t)(0x1048fb60)));
  /* 1046bc0f push eax */
  push32((uint32_t)(EAX));
  /* 1046bc10 call 0x10463320 */
  push32(0x1046bc15u); f_10463320();
  /* 1046bc15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bc18 mov dword ptr [0x1048e810], eax */
  w32((uint32_t)(0x1048e810), (EAX));
  /* 1046bc1d cmp dword ptr [0x1048e810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bc24 jne 0x1046bc65 */
  if (!C.zf) goto L_1046bc65;
  /* 1046bc26 mov dword ptr [0x1048fb60], 0x14 */
  w32((uint32_t)(0x1048fb60), (0x14u));
  /* 1046bc30 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1046bc35 push 0x10489fdc */
  push32((uint32_t)(0x10489fdcu));
  /* 1046bc3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046bc3c push 4 */
  push32((uint32_t)(0x4u));
  /* 1046bc3e mov ecx, dword ptr [0x1048fb60] */
  ECX = (r32((uint32_t)(0x1048fb60)));
  /* 1046bc44 push ecx */
  push32((uint32_t)(ECX));
  /* 1046bc45 call 0x10463320 */
  push32(0x1046bc4au); f_10463320();
  /* 1046bc4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bc4d mov dword ptr [0x1048e810], eax */
  w32((uint32_t)(0x1048e810), (EAX));
  /* 1046bc52 cmp dword ptr [0x1048e810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bc59 jne 0x1046bc65 */
  if (!C.zf) goto L_1046bc65;
  /* 1046bc5b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1046bc5d call 0x10461e80 */
  push32(0x1046bc62u); f_10461e80();
  /* 1046bc62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046bc65:;
  /* 1046bc65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046bc6c jmp 0x1046bc77 */
  goto L_1046bc77;
L_1046bc6e:;
  /* 1046bc6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bc71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bc74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1046bc77:;
  /* 1046bc77 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bc7b jge 0x1046bc96 */
  if ((C.sf==C.of)) goto L_1046bc96;
  /* 1046bc7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bc80 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046bc83 add eax, 0x1048d120 */
  { uint32_t _a=(EAX),_b=(0x1048d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bc88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bc8b mov edx, dword ptr [0x1048e810] */
  EDX = (r32((uint32_t)(0x1048e810)));
  /* 1046bc91 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1046bc94 jmp 0x1046bc6e */
  goto L_1046bc6e;
L_1046bc96:;
  /* 1046bc96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046bc9d jmp 0x1046bca8 */
  goto L_1046bca8;
L_1046bc9f:;
  /* 1046bc9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bca2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046bca8:;
  /* 1046bca8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bcac jge 0x1046bcf8 */
  if ((C.sf==C.of)) goto L_1046bcf8;
  /* 1046bcae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bcb1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046bcb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bcb7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046bcba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046bcbd mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046bcc4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bcc8 je 0x1046bce6 */
  if (C.zf) goto L_1046bce6;
  /* 1046bcca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bccd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046bcd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bcd3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046bcd6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046bcd9 mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046bce0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bce4 jne 0x1046bcf6 */
  if (!C.zf) goto L_1046bcf6;
L_1046bce6:;
  /* 1046bce6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046bce9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046bcec mov dword ptr [ecx + 0x1048d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1048d130), (0xffffffffu));
L_1046bcf6:;
  /* 1046bcf6 jmp 0x1046bc9f */
  goto L_1046bc9f;
L_1046bcf8:;
  /* 1046bcf8 mov esp, ebp */
  ESP = (EBP);
  /* 1046bcfa pop ebp */
  EBP = (pop32());
  /* 1046bcfb ret  */
  ESPCHK(0x1046bbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd00 @ 0x1046bd00 (26 bytes, 9 insns) */
void f_1046bd00(void) {
  FTRACE(0x1046bd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bd00 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bd01 mov ebp, esp */
  EBP = (ESP);
  /* 1046bd03 call 0x1046c900 */
  push32(0x1046bd08u); f_1046c900();
  /* 1046bd08 movsx eax, byte ptr [0x1048e4b4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1048e4b4))));
  /* 1046bd0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046bd11 je 0x1046bd18 */
  if (C.zf) goto L_1046bd18;
  /* 1046bd13 call 0x1046c6c0 */
  push32(0x1046bd18u); f_1046c6c0();
L_1046bd18:;
  /* 1046bd18 pop ebp */
  EBP = (pop32());
  /* 1046bd19 ret  */
  ESPCHK(0x1046bd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd20 @ 0x1046bd20 (61 bytes, 20 insns) */
void f_1046bd20(void) {
  FTRACE(0x1046bd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bd21 mov ebp, esp */
  EBP = (ESP);
  /* 1046bd23 cmp dword ptr [ebp + 8], 0x1048d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1048d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bd2a jb 0x1046bd4e */
  if (C.cf) goto L_1046bd4e;
  /* 1046bd2c cmp dword ptr [ebp + 8], 0x1048d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1048d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bd33 ja 0x1046bd4e */
  if ((!C.cf&&!C.zf)) goto L_1046bd4e;
  /* 1046bd35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bd38 sub eax, 0x1048d120 */
  { uint32_t _a=(EAX),_b=(0x1048d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046bd3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046bd40 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bd43 push eax */
  push32((uint32_t)(EAX));
  /* 1046bd44 call 0x10466910 */
  push32(0x1046bd49u); f_10466910();
  /* 1046bd49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bd4c jmp 0x1046bd5b */
  goto L_1046bd5b;
L_1046bd4e:;
  /* 1046bd4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bd51 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bd54 push ecx */
  push32((uint32_t)(ECX));
  /* 1046bd55 call dword ptr [0x10490310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490310))), 0x1046bd5bu);
L_1046bd5b:;
  /* 1046bd5b pop ebp */
  EBP = (pop32());
  /* 1046bd5c ret  */
  ESPCHK(0x1046bd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd60 @ 0x1046bd60 (41 bytes, 16 insns) */
void f_1046bd60(void) {
  FTRACE(0x1046bd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bd60 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bd61 mov ebp, esp */
  EBP = (ESP);
  /* 1046bd63 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bd67 jge 0x1046bd7a */
  if ((C.sf==C.of)) goto L_1046bd7a;
  /* 1046bd69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bd6c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bd6f push eax */
  push32((uint32_t)(EAX));
  /* 1046bd70 call 0x10466910 */
  push32(0x1046bd75u); f_10466910();
  /* 1046bd75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bd78 jmp 0x1046bd87 */
  goto L_1046bd87;
L_1046bd7a:;
  /* 1046bd7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046bd7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bd80 push ecx */
  push32((uint32_t)(ECX));
  /* 1046bd81 call dword ptr [0x10490310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490310))), 0x1046bd87u);
L_1046bd87:;
  /* 1046bd87 pop ebp */
  EBP = (pop32());
  /* 1046bd88 ret  */
  ESPCHK(0x1046bd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x1046bd90 (61 bytes, 20 insns) */
void f_1046bd90(void) {
  FTRACE(0x1046bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bd91 mov ebp, esp */
  EBP = (ESP);
  /* 1046bd93 cmp dword ptr [ebp + 8], 0x1048d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1048d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bd9a jb 0x1046bdbe */
  if (C.cf) goto L_1046bdbe;
  /* 1046bd9c cmp dword ptr [ebp + 8], 0x1048d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1048d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bda3 ja 0x1046bdbe */
  if ((!C.cf&&!C.zf)) goto L_1046bdbe;
  /* 1046bda5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bda8 sub eax, 0x1048d120 */
  { uint32_t _a=(EAX),_b=(0x1048d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046bdad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046bdb0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bdb3 push eax */
  push32((uint32_t)(EAX));
  /* 1046bdb4 call 0x104669b0 */
  push32(0x1046bdb9u); f_104669b0();
  /* 1046bdb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bdbc jmp 0x1046bdcb */
  goto L_1046bdcb;
L_1046bdbe:;
  /* 1046bdbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bdc1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bdc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1046bdc5 call dword ptr [0x10490314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490314))), 0x1046bdcbu);
L_1046bdcb:;
  /* 1046bdcb pop ebp */
  EBP = (pop32());
  /* 1046bdcc ret  */
  ESPCHK(0x1046bd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdd0 @ 0x1046bdd0 (41 bytes, 16 insns) */
void f_1046bdd0(void) {
  FTRACE(0x1046bdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bdd1 mov ebp, esp */
  EBP = (ESP);
  /* 1046bdd3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bdd7 jge 0x1046bdea */
  if ((C.sf==C.of)) goto L_1046bdea;
  /* 1046bdd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bddc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bddf push eax */
  push32((uint32_t)(EAX));
  /* 1046bde0 call 0x104669b0 */
  push32(0x1046bde5u); f_104669b0();
  /* 1046bde5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bde8 jmp 0x1046bdf7 */
  goto L_1046bdf7;
L_1046bdea:;
  /* 1046bdea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046bded add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bdf0 push ecx */
  push32((uint32_t)(ECX));
  /* 1046bdf1 call dword ptr [0x10490314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490314))), 0x1046bdf7u);
L_1046bdf7:;
  /* 1046bdf7 pop ebp */
  EBP = (pop32());
  /* 1046bdf8 ret  */
  ESPCHK(0x1046bdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be00 @ 0x1046be00 (119 bytes, 34 insns) */
void f_1046be00(void) {
  FTRACE(0x1046be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046be00 push ebp */
  push32((uint32_t)(EBP));
  /* 1046be01 mov ebp, esp */
  EBP = (ESP);
  /* 1046be03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046be06 push 0x1048e80c */
  push32((uint32_t)(0x1048e80cu));
  /* 1046be0b call dword ptr [0x10490294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490294))), 0x1046be11u);
  /* 1046be11 cmp dword ptr [0x1048e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046be18 je 0x1046be38 */
  if (C.zf) goto L_1046be38;
  /* 1046be1a push 0x1048e80c */
  push32((uint32_t)(0x1048e80cu));
  /* 1046be1f call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x1046be25u);
  /* 1046be25 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1046be27 call 0x10466910 */
  push32(0x1046be2cu); f_10466910();
  /* 1046be2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046be2f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1046be36 jmp 0x1046be3f */
  goto L_1046be3f;
L_1046be38:;
  /* 1046be38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1046be3f:;
  /* 1046be3f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1046be43 push eax */
  push32((uint32_t)(EAX));
  /* 1046be44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046be47 push ecx */
  push32((uint32_t)(ECX));
  /* 1046be48 call 0x1046be80 */
  push32(0x1046be4du); f_1046be80();
  /* 1046be4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046be50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046be53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046be57 je 0x1046be65 */
  if (C.zf) goto L_1046be65;
  /* 1046be59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1046be5b call 0x104669b0 */
  push32(0x1046be60u); f_104669b0();
  /* 1046be60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046be63 jmp 0x1046be70 */
  goto L_1046be70;
L_1046be65:;
  /* 1046be65 push 0x1048e80c */
  push32((uint32_t)(0x1048e80cu));
  /* 1046be6a call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x1046be70u);
L_1046be70:;
  /* 1046be70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046be73 mov esp, ebp */
  ESP = (EBP);
  /* 1046be75 pop ebp */
  EBP = (pop32());
  /* 1046be76 ret  */
  ESPCHK(0x1046be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be80 @ 0x1046be80 (160 bytes, 50 insns) */
void f_1046be80(void) {
  FTRACE(0x1046be80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046be80 push ebp */
  push32((uint32_t)(EBP));
  /* 1046be81 mov ebp, esp */
  EBP = (ESP);
  /* 1046be83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046be86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046be8a jne 0x1046be93 */
  if (!C.zf) goto L_1046be93;
  /* 1046be8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046be8e jmp 0x1046bf1c */
  goto L_1046bf1c;
L_1046be93:;
  /* 1046be93 cmp dword ptr [0x1048e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046be9a jne 0x1046beca */
  if (!C.zf) goto L_1046beca;
  /* 1046be9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046be9f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046bea4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bea9 jle 0x1046bebb */
  if ((C.zf||C.sf!=C.of)) goto L_1046bebb;
  /* 1046beab call 0x1046ade0 */
  push32(0x1046beb0u); f_1046ade0();
  /* 1046beb0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1046beb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046beb9 jmp 0x1046bf1c */
  goto L_1046bf1c;
L_1046bebb:;
  /* 1046bebb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bebe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1046bec1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1046bec3 mov eax, 1 */
  EAX = (0x1u);
  /* 1046bec8 jmp 0x1046bf1c */
  goto L_1046bf1c;
L_1046beca:;
  /* 1046beca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046bed1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1046bed4 push eax */
  push32((uint32_t)(EAX));
  /* 1046bed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046bed7 mov ecx, dword ptr [0x1048cea4] */
  ECX = (r32((uint32_t)(0x1048cea4)));
  /* 1046bedd push ecx */
  push32((uint32_t)(ECX));
  /* 1046bede mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046bee1 push edx */
  push32((uint32_t)(EDX));
  /* 1046bee2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046bee4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1046bee7 push eax */
  push32((uint32_t)(EAX));
  /* 1046bee8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1046beed mov ecx, dword ptr [0x1048e690] */
  ECX = (r32((uint32_t)(0x1048e690)));
  /* 1046bef3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046bef4 call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x1046befau);
  /* 1046befa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046befd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bf01 je 0x1046bf09 */
  if (C.zf) goto L_1046bf09;
  /* 1046bf03 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bf07 je 0x1046bf19 */
  if (C.zf) goto L_1046bf19;
L_1046bf09:;
  /* 1046bf09 call 0x1046ade0 */
  push32(0x1046bf0eu); f_1046ade0();
  /* 1046bf0e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1046bf14 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046bf17 jmp 0x1046bf1c */
  goto L_1046bf1c;
L_1046bf19:;
  /* 1046bf19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1046bf1c:;
  /* 1046bf1c mov esp, ebp */
  ESP = (EBP);
  /* 1046bf1e pop ebp */
  EBP = (pop32());
  /* 1046bf1f ret  */
  ESPCHK(0x1046be80u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1046bf20 (32 bytes, 18 insns) */
void f_1046bf20(void) {
  FTRACE(0x1046bf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bf20 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bf21 mov ebp, esp */
  EBP = (ESP);
  /* 1046bf23 push ebx */
  push32((uint32_t)(EBX));
  /* 1046bf24 push esi */
  push32((uint32_t)(ESI));
  /* 1046bf25 push edi */
  push32((uint32_t)(EDI));
  /* 1046bf26 push ebp */
  push32((uint32_t)(EBP));
  /* 1046bf27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046bf29 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046bf2b push 0x1046bf38 */
  push32((uint32_t)(0x1046bf38u));
  /* 1046bf30 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1046bf33 call 0x1047366c */
  push32(0x1046bf38u); f_1047366c();
  /* 1046bf38 pop ebp */
  EBP = (pop32());
  /* 1046bf39 pop edi */
  EDI = (pop32());
  /* 1046bf3a pop esi */
  ESI = (pop32());
  /* 1046bf3b pop ebx */
  EBX = (pop32());
  /* 1046bf3c mov esp, ebp */
  ESP = (EBP);
  /* 1046bf3e pop ebp */
  EBP = (pop32());
  /* 1046bf3f ret  */
  ESPCHK(0x1046bf20u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1046bf62 (104 bytes, 33 insns) */
void f_1046bf62(void) {
  FTRACE(0x1046bf62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bf62 push ebx */
  push32((uint32_t)(EBX));
  /* 1046bf63 push esi */
  push32((uint32_t)(ESI));
  /* 1046bf64 push edi */
  push32((uint32_t)(EDI));
  /* 1046bf65 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1046bf69 push eax */
  push32((uint32_t)(EAX));
  /* 1046bf6a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1046bf6c push 0x1046bf40 */
  push32((uint32_t)(0x1046bf40u));
  /* 1046bf71 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1046bf78 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1046bf7f:;
  /* 1046bf7f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1046bf83 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1046bf86 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1046bf89 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bf8c je 0x1046bfbc */
  if (C.zf) goto L_1046bfbc;
  /* 1046bf8e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bf92 je 0x1046bfbc */
  if (C.zf) goto L_1046bfbc;
  /* 1046bf94 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1046bf97 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1046bf9a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1046bf9e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1046bfa1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046bfa6 jne 0x1046bfba */
  if (!C.zf) goto L_1046bfba;
  /* 1046bfa8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1046bfad mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1046bfb1 call 0x1046bff6 */
  push32(0x1046bfb6u); f_1046bff6();
  /* 1046bfb6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1046bfbau);
L_1046bfba:;
  /* 1046bfba jmp 0x1046bf7f */
  goto L_1046bf7f;
L_1046bfbc:;
  /* 1046bfbc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1046bfc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046bfc6 pop edi */
  EDI = (pop32());
  /* 1046bfc7 pop esi */
  ESI = (pop32());
  /* 1046bfc8 pop ebx */
  EBX = (pop32());
  /* 1046bfc9 ret  */
  ESPCHK(0x1046bf62u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bff6 @ 0x1046bff6 (24 bytes, 10 insns) */
void f_1046bff6(void) {
  FTRACE(0x1046bff6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046bff6 push ebx */
  push32((uint32_t)(EBX));
  /* 1046bff7 push ecx */
  push32((uint32_t)(ECX));
  /* 1046bff8 mov ebx, 0x1048d3b8 */
  EBX = (0x1048d3b8u);
  /* 1046bffd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c000 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1046c003 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1046c006 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1046c009 pop ecx */
  ECX = (pop32());
  /* 1046c00a pop ebx */
  EBX = (pop32());
  /* 1046c00b ret 4 */
  ESPCHK(0x1046bff6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c0d5 @ 0x1046c0d5 (27 bytes, 11 insns) */
void f_1046c0d5(void) {
  FTRACE(0x1046c0d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c0d5 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c0d6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1046c0da mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1046c0dc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1046c0df push eax */
  push32((uint32_t)(EAX));
  /* 1046c0e0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1046c0e3 push eax */
  push32((uint32_t)(EAX));
  /* 1046c0e4 call 0x1046bf62 */
  push32(0x1046c0e9u); f_1046bf62();
  /* 1046c0e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c0ec pop ebp */
  EBP = (pop32());
  /* 1046c0ed ret 4 */
  ESPCHK(0x1046c0d5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c0f0 @ 0x1046c0f0 (482 bytes, 138 insns) */
void f_1046c0f0(void) {
  FTRACE(0x1046c0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1046c0f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046c0f6 push esi */
  push32((uint32_t)(ESI));
  /* 1046c0f7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1046c0fe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1046c100 call 0x10466910 */
  push32(0x1046c105u); f_10466910();
  /* 1046c105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c108 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1046c10f jmp 0x1046c11a */
  goto L_1046c11a;
L_1046c111:;
  /* 1046c111 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c114 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c117 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1046c11a:;
  /* 1046c11a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c11e jge 0x1046c2c0 */
  if ((C.sf==C.of)) goto L_1046c2c0;
  /* 1046c124 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c127 cmp dword ptr [ecx*4 + 0x1048fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1048fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c12f je 0x1046c226 */
  if (C.zf) goto L_1046c226;
  /* 1046c135 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c138 mov eax, dword ptr [edx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048fe60)));
  /* 1046c13f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046c142 jmp 0x1046c14d */
  goto L_1046c14d;
L_1046c144:;
  /* 1046c144 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c147 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c14a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1046c14d:;
  /* 1046c14d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c150 mov eax, dword ptr [edx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048fe60)));
  /* 1046c157 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c15c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c15f jae 0x1046c216 */
  if (!C.cf) goto L_1046c216;
  /* 1046c165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c168 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1046c16c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1046c16f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046c171 jne 0x1046c211 */
  if (!C.zf) goto L_1046c211;
  /* 1046c177 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c17a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c17e jne 0x1046c1b9 */
  if (!C.zf) goto L_1046c1b9;
  /* 1046c180 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1046c182 call 0x10466910 */
  push32(0x1046c187u); f_10466910();
  /* 1046c187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c18a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c18d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c191 jne 0x1046c1af */
  if (!C.zf) goto L_1046c1af;
  /* 1046c193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c196 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c199 push edx */
  push32((uint32_t)(EDX));
  /* 1046c19a call dword ptr [0x1049030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049030c))), 0x1046c1a0u);
  /* 1046c1a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c1a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1046c1a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c1a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c1ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1046c1af:;
  /* 1046c1af push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1046c1b1 call 0x104669b0 */
  push32(0x1046c1b6u); f_104669b0();
  /* 1046c1b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046c1b9:;
  /* 1046c1b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c1bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c1bf push eax */
  push32((uint32_t)(EAX));
  /* 1046c1c0 call dword ptr [0x10490310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490310))), 0x1046c1c6u);
  /* 1046c1c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c1c9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1046c1cd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1046c1d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046c1d2 je 0x1046c1e6 */
  if (C.zf) goto L_1046c1e6;
  /* 1046c1d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c1d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c1da push eax */
  push32((uint32_t)(EAX));
  /* 1046c1db call dword ptr [0x10490314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490314))), 0x1046c1e1u);
  /* 1046c1e1 jmp 0x1046c144 */
  goto L_1046c144;
L_1046c1e6:;
  /* 1046c1e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c1e9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1046c1ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c1f2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046c1f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c1f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c1fb sub eax, dword ptr [edx*4 + 0x1048fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1048fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046c202 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1046c203 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1046c208 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1046c20a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c20c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046c20f jmp 0x1046c216 */
  goto L_1046c216;
L_1046c211:;
  /* 1046c211 jmp 0x1046c144 */
  goto L_1046c144;
L_1046c216:;
  /* 1046c216 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c21a je 0x1046c221 */
  if (C.zf) goto L_1046c221;
  /* 1046c21c jmp 0x1046c2c0 */
  goto L_1046c2c0;
L_1046c221:;
  /* 1046c221 jmp 0x1046c2bb */
  goto L_1046c2bb;
L_1046c226:;
  /* 1046c226 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1046c228 push 0x10489fe4 */
  push32((uint32_t)(0x10489fe4u));
  /* 1046c22d push 2 */
  push32((uint32_t)(0x2u));
  /* 1046c22f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1046c234 call 0x10462f10 */
  push32(0x1046c239u); f_10462f10();
  /* 1046c239 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c23c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046c23f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c243 je 0x1046c2b9 */
  if (C.zf) goto L_1046c2b9;
  /* 1046c245 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c248 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c24b mov dword ptr [eax*4 + 0x1048fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1048fe60), (ECX));
  /* 1046c252 mov edx, dword ptr [0x1048ff9c] */
  EDX = (r32((uint32_t)(0x1048ff9c)));
  /* 1046c258 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c25b mov dword ptr [0x1048ff9c], edx */
  w32((uint32_t)(0x1048ff9c), (EDX));
  /* 1046c261 jmp 0x1046c26c */
  goto L_1046c26c;
L_1046c263:;
  /* 1046c263 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c266 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c269 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046c26c:;
  /* 1046c26c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c26f mov edx, dword ptr [ecx*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046c276 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c27c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c27f jae 0x1046c2a4 */
  if (!C.cf) goto L_1046c2a4;
  /* 1046c281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c284 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1046c288 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c28b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1046c291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c294 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1046c298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c29b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1046c2a2 jmp 0x1046c263 */
  goto L_1046c263;
L_1046c2a4:;
  /* 1046c2a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c2a7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046c2aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046c2ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c2b0 push edx */
  push32((uint32_t)(EDX));
  /* 1046c2b1 call 0x1046c600 */
  push32(0x1046c2b6u); f_1046c600();
  /* 1046c2b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046c2b9:;
  /* 1046c2b9 jmp 0x1046c2c0 */
  goto L_1046c2c0;
L_1046c2bb:;
  /* 1046c2bb jmp 0x1046c111 */
  goto L_1046c111;
L_1046c2c0:;
  /* 1046c2c0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1046c2c2 call 0x104669b0 */
  push32(0x1046c2c7u); f_104669b0();
  /* 1046c2c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c2ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c2cd pop esi */
  ESI = (pop32());
  /* 1046c2ce mov esp, ebp */
  ESP = (EBP);
  /* 1046c2d0 pop ebp */
  EBP = (pop32());
  /* 1046c2d1 ret  */
  ESPCHK(0x1046c0f0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1046c2e0 (183 bytes, 57 insns) */
void f_1046c2e0(void) {
  FTRACE(0x1046c2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1046c2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046c2e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c2e7 cmp eax, dword ptr [0x1048ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c2ed jae 0x1046c37a */
  if (!C.cf) goto L_1046c37a;
  /* 1046c2f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c2f6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046c2f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c2fc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046c2ff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c302 mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046c309 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c30d jne 0x1046c37a */
  if (!C.zf) goto L_1046c37a;
  /* 1046c30f cmp dword ptr [0x1048e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c316 jne 0x1046c35a */
  if (!C.zf) goto L_1046c35a;
  /* 1046c318 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c31b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1046c31e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c322 je 0x1046c332 */
  if (C.zf) goto L_1046c332;
  /* 1046c324 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c328 je 0x1046c340 */
  if (C.zf) goto L_1046c340;
  /* 1046c32a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c32e je 0x1046c34e */
  if (C.zf) goto L_1046c34e;
  /* 1046c330 jmp 0x1046c35a */
  goto L_1046c35a;
L_1046c332:;
  /* 1046c332 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046c335 push edx */
  push32((uint32_t)(EDX));
  /* 1046c336 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1046c338 call dword ptr [0x10490350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490350))), 0x1046c33eu);
  /* 1046c33e jmp 0x1046c35a */
  goto L_1046c35a;
L_1046c340:;
  /* 1046c340 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046c343 push eax */
  push32((uint32_t)(EAX));
  /* 1046c344 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1046c346 call dword ptr [0x10490350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490350))), 0x1046c34cu);
  /* 1046c34c jmp 0x1046c35a */
  goto L_1046c35a;
L_1046c34e:;
  /* 1046c34e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046c351 push ecx */
  push32((uint32_t)(ECX));
  /* 1046c352 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1046c354 call dword ptr [0x10490350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490350))), 0x1046c35au);
L_1046c35a:;
  /* 1046c35a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c35d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1046c360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c363 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1046c366 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c369 mov ecx, dword ptr [edx*4 + 0x1048fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1048fe60)));
  /* 1046c370 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046c373 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1046c376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046c378 jmp 0x1046c393 */
  goto L_1046c393;
L_1046c37a:;
  /* 1046c37a call 0x1046ade0 */
  push32(0x1046c37fu); f_1046ade0();
  /* 1046c37f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046c385 call 0x1046adf0 */
  push32(0x1046c38au); f_1046adf0();
  /* 1046c38a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1046c390 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1046c393:;
  /* 1046c393 mov esp, ebp */
  ESP = (EBP);
  /* 1046c395 pop ebp */
  EBP = (pop32());
  /* 1046c396 ret  */
  ESPCHK(0x1046c2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3a0 @ 0x1046c3a0 (216 bytes, 63 insns) */
void f_1046c3a0(void) {
  FTRACE(0x1046c3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1046c3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046c3a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c3a7 cmp eax, dword ptr [0x1048ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c3ad jae 0x1046c45b */
  if (!C.cf) goto L_1046c45b;
  /* 1046c3b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c3b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046c3b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c3bc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046c3bf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c3c2 mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046c3c9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1046c3ce and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1046c3d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046c3d3 je 0x1046c45b */
  if (C.zf) goto L_1046c45b;
  /* 1046c3d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c3dc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1046c3df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c3e2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1046c3e5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c3e8 mov ecx, dword ptr [edx*4 + 0x1048fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1048fe60)));
  /* 1046c3ef cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c3f3 je 0x1046c45b */
  if (C.zf) goto L_1046c45b;
  /* 1046c3f5 cmp dword ptr [0x1048e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c3fc jne 0x1046c43a */
  if (!C.zf) goto L_1046c43a;
  /* 1046c3fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c401 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046c404 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c408 je 0x1046c418 */
  if (C.zf) goto L_1046c418;
  /* 1046c40a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c40e je 0x1046c424 */
  if (C.zf) goto L_1046c424;
  /* 1046c410 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c414 je 0x1046c430 */
  if (C.zf) goto L_1046c430;
  /* 1046c416 jmp 0x1046c43a */
  goto L_1046c43a;
L_1046c418:;
  /* 1046c418 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046c41a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1046c41c call dword ptr [0x10490350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490350))), 0x1046c422u);
  /* 1046c422 jmp 0x1046c43a */
  goto L_1046c43a;
L_1046c424:;
  /* 1046c424 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046c426 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1046c428 call dword ptr [0x10490350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490350))), 0x1046c42eu);
  /* 1046c42e jmp 0x1046c43a */
  goto L_1046c43a;
L_1046c430:;
  /* 1046c430 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046c432 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1046c434 call dword ptr [0x10490350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490350))), 0x1046c43au);
L_1046c43a:;
  /* 1046c43a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c43d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046c440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c443 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046c446 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c449 mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046c450 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1046c457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046c459 jmp 0x1046c474 */
  goto L_1046c474;
L_1046c45b:;
  /* 1046c45b call 0x1046ade0 */
  push32(0x1046c460u); f_1046ade0();
  /* 1046c460 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046c466 call 0x1046adf0 */
  push32(0x1046c46bu); f_1046adf0();
  /* 1046c46b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1046c471 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1046c474:;
  /* 1046c474 mov esp, ebp */
  ESP = (EBP);
  /* 1046c476 pop ebp */
  EBP = (pop32());
  /* 1046c477 ret  */
  ESPCHK(0x1046c3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c480 @ 0x1046c480 (102 bytes, 30 insns) */
void f_1046c480(void) {
  FTRACE(0x1046c480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c480 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c481 mov ebp, esp */
  EBP = (ESP);
  /* 1046c483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c486 cmp eax, dword ptr [0x1048ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c48c jae 0x1046c4cb */
  if (!C.cf) goto L_1046c4cb;
  /* 1046c48e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c491 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046c494 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c497 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046c49a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c49d mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046c4a4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1046c4a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1046c4ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046c4ae je 0x1046c4cb */
  if (C.zf) goto L_1046c4cb;
  /* 1046c4b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c4b3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1046c4b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c4b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1046c4bc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c4bf mov ecx, dword ptr [edx*4 + 0x1048fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1048fe60)));
  /* 1046c4c6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1046c4c9 jmp 0x1046c4e4 */
  goto L_1046c4e4;
L_1046c4cb:;
  /* 1046c4cb call 0x1046ade0 */
  push32(0x1046c4d0u); f_1046ade0();
  /* 1046c4d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046c4d6 call 0x1046adf0 */
  push32(0x1046c4dbu); f_1046adf0();
  /* 1046c4db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1046c4e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1046c4e4:;
  /* 1046c4e4 pop ebp */
  EBP = (pop32());
  /* 1046c4e5 ret  */
  ESPCHK(0x1046c480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4f0 @ 0x1046c4f0 (260 bytes, 83 insns) */
void f_1046c4f0(void) {
  FTRACE(0x1046c4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1046c4f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046c4f6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1046c4fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046c4fd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1046c500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046c502 je 0x1046c50d */
  if (C.zf) goto L_1046c50d;
  /* 1046c504 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1046c507 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1046c50a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1046c50d:;
  /* 1046c50d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046c510 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1046c516 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046c518 je 0x1046c522 */
  if (C.zf) goto L_1046c522;
  /* 1046c51a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1046c51d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1046c51f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1046c522:;
  /* 1046c522 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046c525 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1046c52b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046c52d je 0x1046c538 */
  if (C.zf) goto L_1046c538;
  /* 1046c52f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1046c532 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1046c535 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1046c538:;
  /* 1046c538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c53b push eax */
  push32((uint32_t)(EAX));
  /* 1046c53c call dword ptr [0x104902cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902cc))), 0x1046c542u);
  /* 1046c542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046c545 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c549 jne 0x1046c562 */
  if (!C.zf) goto L_1046c562;
  /* 1046c54b call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x1046c551u);
  /* 1046c551 push eax */
  push32((uint32_t)(EAX));
  /* 1046c552 call 0x1046ad40 */
  push32(0x1046c557u); f_1046ad40();
  /* 1046c557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c55a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046c55d jmp 0x1046c5f0 */
  goto L_1046c5f0;
L_1046c562:;
  /* 1046c562 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c566 jne 0x1046c573 */
  if (!C.zf) goto L_1046c573;
  /* 1046c568 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1046c56b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1046c56e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1046c571 jmp 0x1046c582 */
  goto L_1046c582;
L_1046c573:;
  /* 1046c573 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c577 jne 0x1046c582 */
  if (!C.zf) goto L_1046c582;
  /* 1046c579 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1046c57c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1046c57f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1046c582:;
  /* 1046c582 call 0x1046c0f0 */
  push32(0x1046c587u); f_1046c0f0();
  /* 1046c587 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046c58a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c58e jne 0x1046c5ab */
  if (!C.zf) goto L_1046c5ab;
  /* 1046c590 call 0x1046ade0 */
  push32(0x1046c595u); f_1046ade0();
  /* 1046c595 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1046c59b call 0x1046adf0 */
  push32(0x1046c5a0u); f_1046adf0();
  /* 1046c5a0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1046c5a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046c5a9 jmp 0x1046c5f0 */
  goto L_1046c5f0;
L_1046c5ab:;
  /* 1046c5ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c5ae push eax */
  push32((uint32_t)(EAX));
  /* 1046c5af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c5b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1046c5b3 call 0x1046c2e0 */
  push32(0x1046c5b8u); f_1046c2e0();
  /* 1046c5b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c5bb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1046c5be or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1046c5c1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1046c5c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c5c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046c5ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c5cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046c5d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c5d3 mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046c5da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1046c5dd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1046c5e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c5e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1046c5e5 call 0x1046c690 */
  push32(0x1046c5eau); f_1046c690();
  /* 1046c5ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c5ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1046c5f0:;
  /* 1046c5f0 mov esp, ebp */
  ESP = (EBP);
  /* 1046c5f2 pop ebp */
  EBP = (pop32());
  /* 1046c5f3 ret  */
  ESPCHK(0x1046c4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c600 @ 0x1046c600 (134 bytes, 44 insns) */
void f_1046c600(void) {
  FTRACE(0x1046c600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c600 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c601 mov ebp, esp */
  EBP = (ESP);
  /* 1046c603 push ecx */
  push32((uint32_t)(ECX));
  /* 1046c604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c607 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046c60a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c60d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046c610 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c613 mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046c61a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c61c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1046c61f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c622 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c626 jne 0x1046c661 */
  if (!C.zf) goto L_1046c661;
  /* 1046c628 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1046c62a call 0x10466910 */
  push32(0x1046c62fu); f_10466910();
  /* 1046c62f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c635 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c639 jne 0x1046c657 */
  if (!C.zf) goto L_1046c657;
  /* 1046c63b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c63e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c641 push edx */
  push32((uint32_t)(EDX));
  /* 1046c642 call dword ptr [0x1049030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049030c))), 0x1046c648u);
  /* 1046c648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c64b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1046c64e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c651 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c654 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1046c657:;
  /* 1046c657 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1046c659 call 0x104669b0 */
  push32(0x1046c65eu); f_104669b0();
  /* 1046c65e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046c661:;
  /* 1046c661 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c664 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046c667 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c66a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046c66d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c670 mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046c677 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1046c67b push eax */
  push32((uint32_t)(EAX));
  /* 1046c67c call dword ptr [0x10490310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490310))), 0x1046c682u);
  /* 1046c682 mov esp, ebp */
  ESP = (EBP);
  /* 1046c684 pop ebp */
  EBP = (pop32());
  /* 1046c685 ret  */
  ESPCHK(0x1046c600u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1046c690 (38 bytes, 13 insns) */
void f_1046c690(void) {
  FTRACE(0x1046c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c690 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c691 mov ebp, esp */
  EBP = (ESP);
  /* 1046c693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c696 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046c699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c69c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046c69f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046c6a2 mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046c6a9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1046c6ad push eax */
  push32((uint32_t)(EAX));
  /* 1046c6ae call dword ptr [0x10490314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490314))), 0x1046c6b4u);
  /* 1046c6b4 pop ebp */
  EBP = (pop32());
  /* 1046c6b5 ret  */
  ESPCHK(0x1046c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c0 @ 0x1046c6c0 (218 bytes, 63 insns) */
void f_1046c6c0(void) {
  FTRACE(0x1046c6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1046c6c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046c6c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046c6cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1046c6cf call 0x10466910 */
  push32(0x1046c6d4u); f_10466910();
  /* 1046c6d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c6d7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1046c6de jmp 0x1046c6e9 */
  goto L_1046c6e9;
L_1046c6e0:;
  /* 1046c6e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c6e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c6e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1046c6e9:;
  /* 1046c6e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c6ec cmp ecx, dword ptr [0x1048fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c6f2 jge 0x1046c789 */
  if ((C.sf==C.of)) goto L_1046c789;
  /* 1046c6f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c6fb mov eax, dword ptr [0x1048e810] */
  EAX = (r32((uint32_t)(0x1048e810)));
  /* 1046c700 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c704 je 0x1046c784 */
  if (C.zf) goto L_1046c784;
  /* 1046c706 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c709 mov edx, dword ptr [0x1048e810] */
  EDX = (r32((uint32_t)(0x1048e810)));
  /* 1046c70f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1046c712 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1046c715 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1046c71b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046c71d je 0x1046c741 */
  if (C.zf) goto L_1046c741;
  /* 1046c71f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c722 mov eax, dword ptr [0x1048e810] */
  EAX = (r32((uint32_t)(0x1048e810)));
  /* 1046c727 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1046c72a push ecx */
  push32((uint32_t)(ECX));
  /* 1046c72b call 0x1046d4b0 */
  push32(0x1046c730u); f_1046d4b0();
  /* 1046c730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c733 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c736 je 0x1046c741 */
  if (C.zf) goto L_1046c741;
  /* 1046c738 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c73b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c73e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1046c741:;
  /* 1046c741 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c745 jl 0x1046c784 */
  if ((C.sf!=C.of)) goto L_1046c784;
  /* 1046c747 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c74a mov ecx, dword ptr [0x1048e810] */
  ECX = (r32((uint32_t)(0x1048e810)));
  /* 1046c750 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1046c753 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c756 push edx */
  push32((uint32_t)(EDX));
  /* 1046c757 call dword ptr [0x104902d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902d4))), 0x1046c75du);
  /* 1046c75d push 2 */
  push32((uint32_t)(0x2u));
  /* 1046c75f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c762 mov ecx, dword ptr [0x1048e810] */
  ECX = (r32((uint32_t)(0x1048e810)));
  /* 1046c768 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1046c76b push edx */
  push32((uint32_t)(EDX));
  /* 1046c76c call 0x104639a0 */
  push32(0x1046c771u); f_104639a0();
  /* 1046c771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c774 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c777 mov ecx, dword ptr [0x1048e810] */
  ECX = (r32((uint32_t)(0x1048e810)));
  /* 1046c77d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1046c784:;
  /* 1046c784 jmp 0x1046c6e0 */
  goto L_1046c6e0;
L_1046c789:;
  /* 1046c789 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046c78b call 0x104669b0 */
  push32(0x1046c790u); f_104669b0();
  /* 1046c790 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c793 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c796 mov esp, ebp */
  ESP = (EBP);
  /* 1046c798 pop ebp */
  EBP = (pop32());
  /* 1046c799 ret  */
  ESPCHK(0x1046c6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7a0 @ 0x1046c7a0 (68 bytes, 26 insns) */
void f_1046c7a0(void) {
  FTRACE(0x1046c7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1046c7a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046c7a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c7a8 jne 0x1046c7b6 */
  if (!C.zf) goto L_1046c7b6;
  /* 1046c7aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1046c7ac call 0x1046c910 */
  push32(0x1046c7b1u); f_1046c910();
  /* 1046c7b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c7b4 jmp 0x1046c7e0 */
  goto L_1046c7e0;
L_1046c7b6:;
  /* 1046c7b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c7b9 push eax */
  push32((uint32_t)(EAX));
  /* 1046c7ba call 0x1046bd20 */
  push32(0x1046c7bfu); f_1046bd20();
  /* 1046c7bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c7c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c7c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1046c7c6 call 0x1046c7f0 */
  push32(0x1046c7cbu); f_1046c7f0();
  /* 1046c7cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c7ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046c7d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c7d4 push edx */
  push32((uint32_t)(EDX));
  /* 1046c7d5 call 0x1046bd90 */
  push32(0x1046c7dau); f_1046bd90();
  /* 1046c7da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c7dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1046c7e0:;
  /* 1046c7e0 mov esp, ebp */
  ESP = (EBP);
  /* 1046c7e2 pop ebp */
  EBP = (pop32());
  /* 1046c7e3 ret  */
  ESPCHK(0x1046c7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7f0 @ 0x1046c7f0 (65 bytes, 26 insns) */
void f_1046c7f0(void) {
  FTRACE(0x1046c7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1046c7f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c7f6 push eax */
  push32((uint32_t)(EAX));
  /* 1046c7f7 call 0x1046c840 */
  push32(0x1046c7fcu); f_1046c840();
  /* 1046c7fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c7ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046c801 je 0x1046c808 */
  if (C.zf) goto L_1046c808;
  /* 1046c803 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046c806 jmp 0x1046c82f */
  goto L_1046c82f;
L_1046c808:;
  /* 1046c808 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c80b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046c80e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1046c814 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046c816 je 0x1046c82d */
  if (C.zf) goto L_1046c82d;
  /* 1046c818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c81b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1046c81e push ecx */
  push32((uint32_t)(ECX));
  /* 1046c81f call 0x1046d600 */
  push32(0x1046c824u); f_1046d600();
  /* 1046c824 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c827 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046c829 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046c82b jmp 0x1046c82f */
  goto L_1046c82f;
L_1046c82d:;
  /* 1046c82d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046c82f:;
  /* 1046c82f pop ebp */
  EBP = (pop32());
  /* 1046c830 ret  */
  ESPCHK(0x1046c7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c840 @ 0x1046c840 (183 bytes, 62 insns) */
void f_1046c840(void) {
  FTRACE(0x1046c840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c840 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c841 mov ebp, esp */
  EBP = (ESP);
  /* 1046c843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046c846 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046c84d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046c850 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046c853 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c856 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046c859 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1046c85c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c85f jne 0x1046c8db */
  if (!C.zf) goto L_1046c8db;
  /* 1046c861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c864 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1046c867 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1046c86d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046c86f je 0x1046c8db */
  if (C.zf) goto L_1046c8db;
  /* 1046c871 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c874 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c877 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1046c879 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046c87c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046c87f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c883 jle 0x1046c8db */
  if ((C.zf||C.sf!=C.of)) goto L_1046c8db;
  /* 1046c885 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c888 push edx */
  push32((uint32_t)(EDX));
  /* 1046c889 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c88c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1046c88f push ecx */
  push32((uint32_t)(ECX));
  /* 1046c890 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c893 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1046c896 push eax */
  push32((uint32_t)(EAX));
  /* 1046c897 call 0x1046b7b0 */
  push32(0x1046c89cu); f_1046b7b0();
  /* 1046c89c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c89f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c8a2 jne 0x1046c8c5 */
  if (!C.zf) goto L_1046c8c5;
  /* 1046c8a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c8a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046c8aa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1046c8b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046c8b2 je 0x1046c8c3 */
  if (C.zf) goto L_1046c8c3;
  /* 1046c8b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c8b7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1046c8ba and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1046c8bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c8c0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1046c8c3:;
  /* 1046c8c3 jmp 0x1046c8db */
  goto L_1046c8db;
L_1046c8c5:;
  /* 1046c8c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c8c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1046c8cb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1046c8ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c8d1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1046c8d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1046c8db:;
  /* 1046c8db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c8de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c8e1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1046c8e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1046c8e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046c8e9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1046c8f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c8f3 mov esp, ebp */
  ESP = (EBP);
  /* 1046c8f5 pop ebp */
  EBP = (pop32());
  /* 1046c8f6 ret  */
  ESPCHK(0x1046c840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c900 @ 0x1046c900 (15 bytes, 7 insns) */
void f_1046c900(void) {
  FTRACE(0x1046c900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c900 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c901 mov ebp, esp */
  EBP = (ESP);
  /* 1046c903 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046c905 call 0x1046c910 */
  push32(0x1046c90au); f_1046c910();
  /* 1046c90a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c90d pop ebp */
  EBP = (pop32());
  /* 1046c90e ret  */
  ESPCHK(0x1046c900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c910 @ 0x1046c910 (319 bytes, 94 insns) */
void f_1046c910(void) {
  FTRACE(0x1046c910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046c910 push ebp */
  push32((uint32_t)(EBP));
  /* 1046c911 mov ebp, esp */
  EBP = (ESP);
  /* 1046c913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046c916 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046c91d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046c924 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046c926 call 0x10466910 */
  push32(0x1046c92bu); f_10466910();
  /* 1046c92b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c92e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1046c935 jmp 0x1046c940 */
  goto L_1046c940;
L_1046c937:;
  /* 1046c937 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c93a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c93d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1046c940:;
  /* 1046c940 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c943 cmp ecx, dword ptr [0x1048fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c949 jge 0x1046ca33 */
  if ((C.sf==C.of)) goto L_1046ca33;
  /* 1046c94f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c952 mov eax, dword ptr [0x1048e810] */
  EAX = (r32((uint32_t)(0x1048e810)));
  /* 1046c957 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c95b je 0x1046ca2e */
  if (C.zf) goto L_1046ca2e;
  /* 1046c961 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c964 mov edx, dword ptr [0x1048e810] */
  EDX = (r32((uint32_t)(0x1048e810)));
  /* 1046c96a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1046c96d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1046c970 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1046c976 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046c978 je 0x1046ca2e */
  if (C.zf) goto L_1046ca2e;
  /* 1046c97e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c981 mov eax, dword ptr [0x1048e810] */
  EAX = (r32((uint32_t)(0x1048e810)));
  /* 1046c986 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1046c989 push ecx */
  push32((uint32_t)(ECX));
  /* 1046c98a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c98d push edx */
  push32((uint32_t)(EDX));
  /* 1046c98e call 0x1046bd60 */
  push32(0x1046c993u); f_1046bd60();
  /* 1046c993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c996 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c999 mov ecx, dword ptr [0x1048e810] */
  ECX = (r32((uint32_t)(0x1048e810)));
  /* 1046c99f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1046c9a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1046c9a5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1046c9aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046c9ac je 0x1046ca15 */
  if (C.zf) goto L_1046ca15;
  /* 1046c9ae cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c9b2 jne 0x1046c9d9 */
  if (!C.zf) goto L_1046c9d9;
  /* 1046c9b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c9b7 mov edx, dword ptr [0x1048e810] */
  EDX = (r32((uint32_t)(0x1048e810)));
  /* 1046c9bd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1046c9c0 push eax */
  push32((uint32_t)(EAX));
  /* 1046c9c1 call 0x1046c7f0 */
  push32(0x1046c9c6u); f_1046c7f0();
  /* 1046c9c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c9c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c9cc je 0x1046c9d7 */
  if (C.zf) goto L_1046c9d7;
  /* 1046c9ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046c9d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046c9d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1046c9d7:;
  /* 1046c9d7 jmp 0x1046ca15 */
  goto L_1046ca15;
L_1046c9d9:;
  /* 1046c9d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046c9dd jne 0x1046ca15 */
  if (!C.zf) goto L_1046ca15;
  /* 1046c9df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c9e2 mov eax, dword ptr [0x1048e810] */
  EAX = (r32((uint32_t)(0x1048e810)));
  /* 1046c9e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1046c9ea mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046c9ed and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1046c9f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046c9f2 je 0x1046ca15 */
  if (C.zf) goto L_1046ca15;
  /* 1046c9f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046c9f7 mov ecx, dword ptr [0x1048e810] */
  ECX = (r32((uint32_t)(0x1048e810)));
  /* 1046c9fd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1046ca00 push edx */
  push32((uint32_t)(EDX));
  /* 1046ca01 call 0x1046c7f0 */
  push32(0x1046ca06u); f_1046c7f0();
  /* 1046ca06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ca09 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ca0c jne 0x1046ca15 */
  if (!C.zf) goto L_1046ca15;
  /* 1046ca0e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1046ca15:;
  /* 1046ca15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ca18 mov ecx, dword ptr [0x1048e810] */
  ECX = (r32((uint32_t)(0x1048e810)));
  /* 1046ca1e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1046ca21 push edx */
  push32((uint32_t)(EDX));
  /* 1046ca22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ca25 push eax */
  push32((uint32_t)(EAX));
  /* 1046ca26 call 0x1046bdd0 */
  push32(0x1046ca2bu); f_1046bdd0();
  /* 1046ca2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046ca2e:;
  /* 1046ca2e jmp 0x1046c937 */
  goto L_1046c937;
L_1046ca33:;
  /* 1046ca33 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046ca35 call 0x104669b0 */
  push32(0x1046ca3au); f_104669b0();
  /* 1046ca3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ca3d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ca41 jne 0x1046ca48 */
  if (!C.zf) goto L_1046ca48;
  /* 1046ca43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046ca46 jmp 0x1046ca4b */
  goto L_1046ca4b;
L_1046ca48:;
  /* 1046ca48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1046ca4b:;
  /* 1046ca4b mov esp, ebp */
  ESP = (EBP);
  /* 1046ca4d pop ebp */
  EBP = (pop32());
  /* 1046ca4e ret  */
  ESPCHK(0x1046c910u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1046ca50 (15 bytes, 7 insns) */
void f_1046ca50(void) {
  FTRACE(0x1046ca50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ca50 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ca51 mov ebp, esp */
  EBP = (ESP);
  /* 1046ca53 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046ca55 call 0x10461e80 */
  push32(0x1046ca5au); f_10461e80();
  /* 1046ca5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ca5d pop ebp */
  EBP = (pop32());
  /* 1046ca5e ret  */
  ESPCHK(0x1046ca50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca60 @ 0x1046ca60 (1007 bytes, 269 insns) */
void f_1046ca60(void) {
  FTRACE(0x1046ca60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ca60 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ca61 mov ebp, esp */
  EBP = (ESP);
  /* 1046ca63 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ca69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ca6d jl 0x1046ca75 */
  if ((C.sf!=C.of)) goto L_1046ca75;
  /* 1046ca6f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ca73 jle 0x1046ca7c */
  if ((C.zf||C.sf!=C.of)) goto L_1046ca7c;
L_1046ca75:;
  /* 1046ca75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ca77 jmp 0x1046ce4b */
  goto L_1046ce4b;
L_1046ca7c:;
  /* 1046ca7c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1046ca7e call 0x10466910 */
  push32(0x1046ca83u); f_10466910();
  /* 1046ca83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ca86 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1046ca8d mov eax, dword ptr [0x1048e7fc] */
  EAX = (r32((uint32_t)(0x1048e7fc)));
  /* 1046ca92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ca95 mov dword ptr [0x1048e7fc], eax */
  w32((uint32_t)(0x1048e7fc), (EAX));
L_1046ca9a:;
  /* 1046ca9a cmp dword ptr [0x1048e80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046caa1 je 0x1046caad */
  if (C.zf) goto L_1046caad;
  /* 1046caa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046caa5 call dword ptr [0x1049026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049026c))), 0x1046caabu);
  /* 1046caab jmp 0x1046ca9a */
  goto L_1046ca9a;
L_1046caad:;
  /* 1046caad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cab1 je 0x1046caf1 */
  if (C.zf) goto L_1046caf1;
  /* 1046cab3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cab7 je 0x1046cad1 */
  if (C.zf) goto L_1046cad1;
  /* 1046cab9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046cabc push ecx */
  push32((uint32_t)(ECX));
  /* 1046cabd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cac0 push edx */
  push32((uint32_t)(EDX));
  /* 1046cac1 call 0x1046ce50 */
  push32(0x1046cac6u); f_1046ce50();
  /* 1046cac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cac9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1046cacf jmp 0x1046cae3 */
  goto L_1046cae3;
L_1046cad1:;
  /* 1046cad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cad4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cad7 mov ecx, dword ptr [eax + 0x1048d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1048d4dc)));
  /* 1046cadd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1046cae3:;
  /* 1046cae3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1046cae9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1046caec jmp 0x1046ce2b */
  goto L_1046ce2b;
L_1046caf1:;
  /* 1046caf1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1046caf8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1046caff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cb03 je 0x1046ce23 */
  if (C.zf) goto L_1046ce23;
  /* 1046cb09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046cb0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046cb0f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cb12 jne 0x1046cd34 */
  if (!C.zf) goto L_1046cd34;
  /* 1046cb18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046cb1b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1046cb1f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cb22 jne 0x1046cd34 */
  if (!C.zf) goto L_1046cd34;
  /* 1046cb28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046cb2b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1046cb2f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cb32 jne 0x1046cd34 */
  if (!C.zf) goto L_1046cd34;
  /* 1046cb38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046cb3b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1046cb41:;
  /* 1046cb41 push 0x1048a034 */
  push32((uint32_t)(0x1048a034u));
  /* 1046cb46 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1046cb4c push ecx */
  push32((uint32_t)(ECX));
  /* 1046cb4d call 0x1046ecb0 */
  push32(0x1046cb52u); f_1046ecb0();
  /* 1046cb52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cb55 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1046cb5b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cb62 je 0x1046cb8d */
  if (C.zf) goto L_1046cb8d;
  /* 1046cb64 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1046cb6a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046cb70 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1046cb76 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cb7d je 0x1046cb8d */
  if (C.zf) goto L_1046cb8d;
  /* 1046cb7f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1046cb85 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046cb88 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cb8b jne 0x1046cbb3 */
  if (!C.zf) goto L_1046cbb3;
L_1046cb8d:;
  /* 1046cb8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cb91 je 0x1046cbac */
  if (C.zf) goto L_1046cbac;
  /* 1046cb93 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1046cb95 call 0x104669b0 */
  push32(0x1046cb9au); f_104669b0();
  /* 1046cb9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cb9d mov edx, dword ptr [0x1048e7fc] */
  EDX = (r32((uint32_t)(0x1048e7fc)));
  /* 1046cba3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046cba6 mov dword ptr [0x1048e7fc], edx */
  w32((uint32_t)(0x1048e7fc), (EDX));
L_1046cbac:;
  /* 1046cbac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046cbae jmp 0x1046ce4b */
  goto L_1046ce4b;
L_1046cbb3:;
  /* 1046cbb3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1046cbba jmp 0x1046cbc5 */
  goto L_1046cbc5;
L_1046cbbc:;
  /* 1046cbbc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046cbbf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cbc2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1046cbc5:;
  /* 1046cbc5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cbc9 jg 0x1046cc13 */
  if ((!C.zf&&C.sf==C.of)) goto L_1046cc13;
  /* 1046cbcb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1046cbd1 push ecx */
  push32((uint32_t)(ECX));
  /* 1046cbd2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1046cbd8 push edx */
  push32((uint32_t)(EDX));
  /* 1046cbd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046cbdc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cbdf mov ecx, dword ptr [eax + 0x1048d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1048d4d8)));
  /* 1046cbe5 push ecx */
  push32((uint32_t)(ECX));
  /* 1046cbe6 call 0x1046ec70 */
  push32(0x1046cbebu); f_1046ec70();
  /* 1046cbeb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cbee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046cbf0 jne 0x1046cc11 */
  if (!C.zf) goto L_1046cc11;
  /* 1046cbf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046cbf5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cbf8 mov eax, dword ptr [edx + 0x1048d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1048d4d8)));
  /* 1046cbfe push eax */
  push32((uint32_t)(EAX));
  /* 1046cbff call 0x10465d40 */
  push32(0x1046cc04u); f_10465d40();
  /* 1046cc04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cc07 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cc0d jne 0x1046cc11 */
  if (!C.zf) goto L_1046cc11;
  /* 1046cc0f jmp 0x1046cc13 */
  goto L_1046cc13;
L_1046cc11:;
  /* 1046cc11 jmp 0x1046cbbc */
  goto L_1046cbbc;
L_1046cc13:;
  /* 1046cc13 push 0x1048a030 */
  push32((uint32_t)(0x1048a030u));
  /* 1046cc18 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1046cc1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cc21 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1046cc27 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1046cc2d push edx */
  push32((uint32_t)(EDX));
  /* 1046cc2e call 0x1046ec30 */
  push32(0x1046cc33u); f_1046ec30();
  /* 1046cc33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cc36 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1046cc3c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cc43 jne 0x1046cc79 */
  if (!C.zf) goto L_1046cc79;
  /* 1046cc45 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1046cc4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046cc4e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cc51 je 0x1046cc79 */
  if (C.zf) goto L_1046cc79;
  /* 1046cc53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cc57 je 0x1046cc72 */
  if (C.zf) goto L_1046cc72;
  /* 1046cc59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1046cc5b call 0x104669b0 */
  push32(0x1046cc60u); f_104669b0();
  /* 1046cc60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cc63 mov edx, dword ptr [0x1048e7fc] */
  EDX = (r32((uint32_t)(0x1048e7fc)));
  /* 1046cc69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046cc6c mov dword ptr [0x1048e7fc], edx */
  w32((uint32_t)(0x1048e7fc), (EDX));
L_1046cc72:;
  /* 1046cc72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046cc74 jmp 0x1046ce4b */
  goto L_1046ce4b;
L_1046cc79:;
  /* 1046cc79 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cc7d jg 0x1046ccca */
  if ((!C.zf&&C.sf==C.of)) goto L_1046ccca;
  /* 1046cc7f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1046cc85 push eax */
  push32((uint32_t)(EAX));
  /* 1046cc86 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1046cc8c push ecx */
  push32((uint32_t)(ECX));
  /* 1046cc8d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1046cc93 push edx */
  push32((uint32_t)(EDX));
  /* 1046cc94 call 0x10466730 */
  push32(0x1046cc99u); f_10466730();
  /* 1046cc99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cc9c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1046cca2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1046ccaa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1046ccb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1046ccb1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046ccb4 push edx */
  push32((uint32_t)(EDX));
  /* 1046ccb5 call 0x1046ce50 */
  push32(0x1046ccbau); f_1046ce50();
  /* 1046ccba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ccbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046ccbf je 0x1046ccca */
  if (C.zf) goto L_1046ccca;
  /* 1046ccc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ccc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ccc7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1046ccca:;
  /* 1046ccca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1046ccd0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ccd6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1046ccdc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1046cce2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1046cce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046cce7 je 0x1046ccf8 */
  if (C.zf) goto L_1046ccf8;
  /* 1046cce9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1046ccef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ccf2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1046ccf8:;
  /* 1046ccf8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1046ccfe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1046cd01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046cd03 jne 0x1046cb41 */
  if (!C.zf) goto L_1046cb41;
  /* 1046cd09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cd0d je 0x1046cd1c */
  if (C.zf) goto L_1046cd1c;
  /* 1046cd0f call 0x1046cff0 */
  push32(0x1046cd14u); f_1046cff0();
  /* 1046cd14 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1046cd1a jmp 0x1046cd26 */
  goto L_1046cd26;
L_1046cd1c:;
  /* 1046cd1c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1046cd26:;
  /* 1046cd26 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1046cd2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046cd2f jmp 0x1046ce21 */
  goto L_1046ce21;
L_1046cd34:;
  /* 1046cd34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cd37 push edx */
  push32((uint32_t)(EDX));
  /* 1046cd38 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046cd3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1046cd3c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1046cd42 push eax */
  push32((uint32_t)(EAX));
  /* 1046cd43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046cd46 push ecx */
  push32((uint32_t)(ECX));
  /* 1046cd47 call 0x1046d0f0 */
  push32(0x1046cd4cu); f_1046d0f0();
  /* 1046cd4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cd4f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046cd52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cd56 je 0x1046ce21 */
  if (C.zf) goto L_1046ce21;
  /* 1046cd5c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1046cd63 jmp 0x1046cd6e */
  goto L_1046cd6e;
L_1046cd65:;
  /* 1046cd65 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046cd68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cd6b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1046cd6e:;
  /* 1046cd6e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cd72 jg 0x1046cdd0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1046cdd0;
  /* 1046cd74 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cd78 je 0x1046cdce */
  if (C.zf) goto L_1046cdce;
  /* 1046cd7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046cd7d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cd80 mov ecx, dword ptr [eax + 0x1048d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1048d4dc)));
  /* 1046cd86 push ecx */
  push32((uint32_t)(ECX));
  /* 1046cd87 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1046cd8d push edx */
  push32((uint32_t)(EDX));
  /* 1046cd8e call 0x1046eba0 */
  push32(0x1046cd93u); f_1046eba0();
  /* 1046cd93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cd96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046cd98 je 0x1046cdc5 */
  if (C.zf) goto L_1046cdc5;
  /* 1046cd9a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1046cda0 push eax */
  push32((uint32_t)(EAX));
  /* 1046cda1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046cda4 push ecx */
  push32((uint32_t)(ECX));
  /* 1046cda5 call 0x1046ce50 */
  push32(0x1046cdaau); f_1046ce50();
  /* 1046cdaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cdad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046cdaf je 0x1046cdbc */
  if (C.zf) goto L_1046cdbc;
  /* 1046cdb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046cdb4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cdb7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1046cdba jmp 0x1046cdc3 */
  goto L_1046cdc3;
L_1046cdbc:;
  /* 1046cdbc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1046cdc3:;
  /* 1046cdc3 jmp 0x1046cdce */
  goto L_1046cdce;
L_1046cdc5:;
  /* 1046cdc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046cdc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cdcb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1046cdce:;
  /* 1046cdce jmp 0x1046cd65 */
  goto L_1046cd65;
L_1046cdd0:;
  /* 1046cdd0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cdd4 je 0x1046cdfb */
  if (C.zf) goto L_1046cdfb;
  /* 1046cdd6 call 0x1046cff0 */
  push32(0x1046cddbu); f_1046cff0();
  /* 1046cddb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046cdde push 2 */
  push32((uint32_t)(0x2u));
  /* 1046cde0 mov ecx, dword ptr [0x1048d4dc] */
  ECX = (r32((uint32_t)(0x1048d4dc)));
  /* 1046cde6 push ecx */
  push32((uint32_t)(ECX));
  /* 1046cde7 call 0x104639a0 */
  push32(0x1046cdecu); f_104639a0();
  /* 1046cdec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cdef mov dword ptr [0x1048d4dc], 0 */
  w32((uint32_t)(0x1048d4dc), (0x0u));
  /* 1046cdf9 jmp 0x1046ce21 */
  goto L_1046ce21;
L_1046cdfb:;
  /* 1046cdfb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cdff je 0x1046ce0e */
  if (C.zf) goto L_1046ce0e;
  /* 1046ce01 call 0x1046cff0 */
  push32(0x1046ce06u); f_1046cff0();
  /* 1046ce06 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1046ce0c jmp 0x1046ce18 */
  goto L_1046ce18;
L_1046ce0e:;
  /* 1046ce0e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1046ce18:;
  /* 1046ce18 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1046ce1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1046ce21:;
  /* 1046ce21 jmp 0x1046ce2b */
  goto L_1046ce2b;
L_1046ce23:;
  /* 1046ce23 call 0x1046cff0 */
  push32(0x1046ce28u); f_1046cff0();
  /* 1046ce28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1046ce2b:;
  /* 1046ce2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ce2f je 0x1046ce48 */
  if (C.zf) goto L_1046ce48;
  /* 1046ce31 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1046ce33 call 0x104669b0 */
  push32(0x1046ce38u); f_104669b0();
  /* 1046ce38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ce3b mov eax, dword ptr [0x1048e7fc] */
  EAX = (r32((uint32_t)(0x1048e7fc)));
  /* 1046ce40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ce43 mov dword ptr [0x1048e7fc], eax */
  w32((uint32_t)(0x1048e7fc), (EAX));
L_1046ce48:;
  /* 1046ce48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1046ce4b:;
  /* 1046ce4b mov esp, ebp */
  ESP = (EBP);
  /* 1046ce4d pop ebp */
  EBP = (pop32());
  /* 1046ce4e ret  */
  ESPCHK(0x1046ca60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce50 @ 0x1046ce50 (403 bytes, 117 insns) */
void f_1046ce50(void) {
  FTRACE(0x1046ce50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ce50 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ce51 mov ebp, esp */
  EBP = (ESP);
  /* 1046ce53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ce59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ce5c push eax */
  push32((uint32_t)(EAX));
  /* 1046ce5d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1046ce63 push ecx */
  push32((uint32_t)(ECX));
  /* 1046ce64 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1046ce6a push edx */
  push32((uint32_t)(EDX));
  /* 1046ce6b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1046ce71 push eax */
  push32((uint32_t)(EAX));
  /* 1046ce72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ce75 push ecx */
  push32((uint32_t)(ECX));
  /* 1046ce76 call 0x1046d0f0 */
  push32(0x1046ce7bu); f_1046d0f0();
  /* 1046ce7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ce7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046ce80 jne 0x1046ce89 */
  if (!C.zf) goto L_1046ce89;
  /* 1046ce82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ce84 jmp 0x1046cfdf */
  goto L_1046cfdf;
L_1046ce89:;
  /* 1046ce89 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1046ce8e push 0x1048a038 */
  push32((uint32_t)(0x1048a038u));
  /* 1046ce93 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046ce95 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1046ce9b push edx */
  push32((uint32_t)(EDX));
  /* 1046ce9c call 0x10465d40 */
  push32(0x1046cea1u); f_10465d40();
  /* 1046cea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cea4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cea7 push eax */
  push32((uint32_t)(EAX));
  /* 1046cea8 call 0x10462f10 */
  push32(0x1046ceadu); f_10462f10();
  /* 1046cead add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ceb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046ceb3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ceb7 jne 0x1046cec0 */
  if (!C.zf) goto L_1046cec0;
  /* 1046ceb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046cebb jmp 0x1046cfdf */
  goto L_1046cfdf;
L_1046cec0:;
  /* 1046cec0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cec3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cec6 mov ecx, dword ptr [eax + 0x1048d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1048d4dc)));
  /* 1046cecc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046cecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ced2 mov eax, dword ptr [edx*4 + 0x1048e678] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048e678)));
  /* 1046ced9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046cedc push 6 */
  push32((uint32_t)(0x6u));
  /* 1046cede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cee1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cee4 add ecx, 0x1048e6c8 */
  { uint32_t _a=(ECX),_b=(0x1048e6c8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ceea push ecx */
  push32((uint32_t)(ECX));
  /* 1046ceeb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1046ceee push edx */
  push32((uint32_t)(EDX));
  /* 1046ceef call 0x104697f0 */
  push32(0x1046cef4u); f_104697f0();
  /* 1046cef4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cef7 mov eax, dword ptr [0x1048e690] */
  EAX = (r32((uint32_t)(0x1048e690)));
  /* 1046cefc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1046ceff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1046cf05 push ecx */
  push32((uint32_t)(ECX));
  /* 1046cf06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046cf09 push edx */
  push32((uint32_t)(EDX));
  /* 1046cf0a call 0x10465ec0 */
  push32(0x1046cf0fu); f_10465ec0();
  /* 1046cf0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cf12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cf15 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cf18 mov dword ptr [ecx + 0x1048d4dc], eax */
  w32((uint32_t)(ECX + 0x1048d4dc), (EAX));
  /* 1046cf1e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1046cf24 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1046cf2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cf2d mov dword ptr [eax*4 + 0x1048e678], edx */
  w32((uint32_t)(EAX*4 + 0x1048e678), (EDX));
  /* 1046cf34 push 6 */
  push32((uint32_t)(0x6u));
  /* 1046cf36 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1046cf3c push ecx */
  push32((uint32_t)(ECX));
  /* 1046cf3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cf40 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cf43 add edx, 0x1048e6c8 */
  { uint32_t _a=(EDX),_b=(0x1048e6c8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cf49 push edx */
  push32((uint32_t)(EDX));
  /* 1046cf4a call 0x104697f0 */
  push32(0x1046cf4fu); f_104697f0();
  /* 1046cf4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cf52 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cf56 jne 0x1046cf63 */
  if (!C.zf) goto L_1046cf63;
  /* 1046cf58 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1046cf5e mov dword ptr [0x1048e690], eax */
  w32((uint32_t)(0x1048e690), (EAX));
L_1046cf63:;
  /* 1046cf63 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cf67 jne 0x1046cf75 */
  if (!C.zf) goto L_1046cf75;
  /* 1046cf69 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1046cf6f mov dword ptr [0x1048e694], ecx */
  w32((uint32_t)(0x1048e694), (ECX));
L_1046cf75:;
  /* 1046cf75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cf78 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cf7b call dword ptr [edx + 0x1048d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1048d4e0))), 0x1046cf81u);
  /* 1046cf81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046cf83 je 0x1046cfbc */
  if (C.zf) goto L_1046cfbc;
  /* 1046cf85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cf88 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cf8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046cf8e mov dword ptr [eax + 0x1048d4dc], ecx */
  w32((uint32_t)(EAX + 0x1048d4dc), (ECX));
  /* 1046cf94 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046cf96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046cf99 push edx */
  push32((uint32_t)(EDX));
  /* 1046cf9a call 0x104639a0 */
  push32(0x1046cf9fu); f_104639a0();
  /* 1046cf9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046cfa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cfa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046cfa8 mov dword ptr [eax*4 + 0x1048e678], ecx */
  w32((uint32_t)(EAX*4 + 0x1048e678), (ECX));
  /* 1046cfaf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046cfb2 mov dword ptr [0x1048e690], edx */
  w32((uint32_t)(0x1048e690), (EDX));
  /* 1046cfb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046cfba jmp 0x1046cfdf */
  goto L_1046cfdf;
L_1046cfbc:;
  /* 1046cfbc cmp dword ptr [ebp - 0xc], 0x1048d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1048d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046cfc3 je 0x1046cfd3 */
  if (C.zf) goto L_1046cfd3;
  /* 1046cfc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046cfc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046cfca push eax */
  push32((uint32_t)(EAX));
  /* 1046cfcb call 0x104639a0 */
  push32(0x1046cfd0u); f_104639a0();
  /* 1046cfd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046cfd3:;
  /* 1046cfd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046cfd6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046cfd9 mov eax, dword ptr [ecx + 0x1048d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1048d4dc)));
L_1046cfdf:;
  /* 1046cfdf mov esp, ebp */
  ESP = (EBP);
  /* 1046cfe1 pop ebp */
  EBP = (pop32());
  /* 1046cfe2 ret  */
  ESPCHK(0x1046ce50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cff0 @ 0x1046cff0 (256 bytes, 72 insns) */
void f_1046cff0(void) {
  FTRACE(0x1046cff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046cff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046cff1 mov ebp, esp */
  EBP = (ESP);
  /* 1046cff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046cff6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1046cffd cmp dword ptr [0x1048d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d004 jne 0x1046d024 */
  if (!C.zf) goto L_1046d024;
  /* 1046d006 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1046d00b push 0x1048a038 */
  push32((uint32_t)(0x1048a038u));
  /* 1046d010 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d012 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1046d017 call 0x10462f10 */
  push32(0x1046d01cu); f_10462f10();
  /* 1046d01c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d01f mov dword ptr [0x1048d4dc], eax */
  w32((uint32_t)(0x1048d4dc), (EAX));
L_1046d024:;
  /* 1046d024 mov eax, dword ptr [0x1048d4dc] */
  EAX = (r32((uint32_t)(0x1048d4dc)));
  /* 1046d029 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1046d02c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1046d033 jmp 0x1046d03e */
  goto L_1046d03e;
L_1046d035:;
  /* 1046d035 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d038 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d03b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1046d03e:;
  /* 1046d03e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d041 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046d044 mov eax, dword ptr [edx + 0x1048d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1048d4dc)));
  /* 1046d04a push eax */
  push32((uint32_t)(EAX));
  /* 1046d04b push 0x1048a044 */
  push32((uint32_t)(0x1048a044u));
  /* 1046d050 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d053 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046d056 mov edx, dword ptr [ecx + 0x1048d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1048d4d8)));
  /* 1046d05c push edx */
  push32((uint32_t)(EDX));
  /* 1046d05d push 3 */
  push32((uint32_t)(0x3u));
  /* 1046d05f mov eax, dword ptr [0x1048d4dc] */
  EAX = (r32((uint32_t)(0x1048d4dc)));
  /* 1046d064 push eax */
  push32((uint32_t)(EAX));
  /* 1046d065 call 0x1046d290 */
  push32(0x1046d06au); f_1046d290();
  /* 1046d06a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d06d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d071 jge 0x1046d0b9 */
  if ((C.sf==C.of)) goto L_1046d0b9;
  /* 1046d073 push 0x1048a030 */
  push32((uint32_t)(0x1048a030u));
  /* 1046d078 mov ecx, dword ptr [0x1048d4dc] */
  ECX = (r32((uint32_t)(0x1048d4dc)));
  /* 1046d07e push ecx */
  push32((uint32_t)(ECX));
  /* 1046d07f call 0x10465ed0 */
  push32(0x1046d084u); f_10465ed0();
  /* 1046d084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d087 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d08a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d08d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046d090 mov eax, dword ptr [edx + 0x1048d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1048d4dc)));
  /* 1046d096 push eax */
  push32((uint32_t)(EAX));
  /* 1046d097 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d09a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046d09d mov edx, dword ptr [ecx + 0x1048d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1048d4dc)));
  /* 1046d0a3 push edx */
  push32((uint32_t)(EDX));
  /* 1046d0a4 call 0x1046eba0 */
  push32(0x1046d0a9u); f_1046eba0();
  /* 1046d0a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d0ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d0ae je 0x1046d0b7 */
  if (C.zf) goto L_1046d0b7;
  /* 1046d0b0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1046d0b7:;
  /* 1046d0b7 jmp 0x1046d0e7 */
  goto L_1046d0e7;
L_1046d0b9:;
  /* 1046d0b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d0bd jne 0x1046d0c6 */
  if (!C.zf) goto L_1046d0c6;
  /* 1046d0bf mov eax, dword ptr [0x1048d4dc] */
  EAX = (r32((uint32_t)(0x1048d4dc)));
  /* 1046d0c4 jmp 0x1046d0ec */
  goto L_1046d0ec;
L_1046d0c6:;
  /* 1046d0c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d0c8 mov eax, dword ptr [0x1048d4dc] */
  EAX = (r32((uint32_t)(0x1048d4dc)));
  /* 1046d0cd push eax */
  push32((uint32_t)(EAX));
  /* 1046d0ce call 0x104639a0 */
  push32(0x1046d0d3u); f_104639a0();
  /* 1046d0d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d0d6 mov dword ptr [0x1048d4dc], 0 */
  w32((uint32_t)(0x1048d4dc), (0x0u));
  /* 1046d0e0 mov eax, dword ptr [0x1048d4f4] */
  EAX = (r32((uint32_t)(0x1048d4f4)));
  /* 1046d0e5 jmp 0x1046d0ec */
  goto L_1046d0ec;
L_1046d0e7:;
  /* 1046d0e7 jmp 0x1046d035 */
  goto L_1046d035;
L_1046d0ec:;
  /* 1046d0ec mov esp, ebp */
  ESP = (EBP);
  /* 1046d0ee pop ebp */
  EBP = (pop32());
  /* 1046d0ef ret  */
  ESPCHK(0x1046cff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x1046d0f0 (388 bytes, 115 insns) */
void f_1046d0f0(void) {
  FTRACE(0x1046d0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1046d0f3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046d0f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d0fd jne 0x1046d106 */
  if (!C.zf) goto L_1046d106;
  /* 1046d0ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046d101 jmp 0x1046d270 */
  goto L_1046d270;
L_1046d106:;
  /* 1046d106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d109 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046d10c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d10f jne 0x1046d160 */
  if (!C.zf) goto L_1046d160;
  /* 1046d111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d114 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1046d118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d11a jne 0x1046d160 */
  if (!C.zf) goto L_1046d160;
  /* 1046d11c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d11f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1046d122 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d125 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1046d129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d12d je 0x1046d149 */
  if (C.zf) goto L_1046d149;
  /* 1046d12f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046d132 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1046d137 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046d13a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1046d140 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046d143 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1046d149:;
  /* 1046d149 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d14d je 0x1046d158 */
  if (C.zf) goto L_1046d158;
  /* 1046d14f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046d152 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1046d158:;
  /* 1046d158 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d15b jmp 0x1046d270 */
  goto L_1046d270;
L_1046d160:;
  /* 1046d160 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d163 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d164 push 0x1048d450 */
  push32((uint32_t)(0x1048d450u));
  /* 1046d169 call 0x1046eba0 */
  push32(0x1046d16eu); f_1046eba0();
  /* 1046d16e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d173 je 0x1046d228 */
  if (C.zf) goto L_1046d228;
  /* 1046d179 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d17c push edx */
  push32((uint32_t)(EDX));
  /* 1046d17d push 0x1048d3cc */
  push32((uint32_t)(0x1048d3ccu));
  /* 1046d182 call 0x1046eba0 */
  push32(0x1046d187u); f_1046eba0();
  /* 1046d187 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d18a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d18c je 0x1046d228 */
  if (C.zf) goto L_1046d228;
  /* 1046d192 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d195 push eax */
  push32((uint32_t)(EAX));
  /* 1046d196 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1046d19c push ecx */
  push32((uint32_t)(ECX));
  /* 1046d19d call 0x1046d2e0 */
  push32(0x1046d1a2u); f_1046d2e0();
  /* 1046d1a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d1a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d1a7 je 0x1046d1b0 */
  if (C.zf) goto L_1046d1b0;
  /* 1046d1a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046d1ab jmp 0x1046d270 */
  goto L_1046d270;
L_1046d1b0:;
  /* 1046d1b0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1046d1b6 push edx */
  push32((uint32_t)(EDX));
  /* 1046d1b7 push 0x1048e6a0 */
  push32((uint32_t)(0x1048e6a0u));
  /* 1046d1bc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1046d1c2 push eax */
  push32((uint32_t)(EAX));
  /* 1046d1c3 call 0x1046ecf0 */
  push32(0x1046d1c8u); f_1046ecf0();
  /* 1046d1c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d1cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d1cd jne 0x1046d1d6 */
  if (!C.zf) goto L_1046d1d6;
  /* 1046d1cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046d1d1 jmp 0x1046d270 */
  goto L_1046d270;
L_1046d1d6:;
  /* 1046d1d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d1d8 mov cx, word ptr [0x1048e6a4] */
  CX = (r16((uint32_t)(0x1048e6a4)));
  /* 1046d1df mov dword ptr [0x1048e6a8], ecx */
  w32((uint32_t)(0x1048e6a8), (ECX));
  /* 1046d1e5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1046d1eb push edx */
  push32((uint32_t)(EDX));
  /* 1046d1ec push 0x1048d450 */
  push32((uint32_t)(0x1048d450u));
  /* 1046d1f1 call 0x1046d440 */
  push32(0x1046d1f6u); f_1046d440();
  /* 1046d1f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d1f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d1fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046d1ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046d201 je 0x1046d216 */
  if (C.zf) goto L_1046d216;
  /* 1046d203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d206 push edx */
  push32((uint32_t)(EDX));
  /* 1046d207 push 0x1048d3cc */
  push32((uint32_t)(0x1048d3ccu));
  /* 1046d20c call 0x10465ec0 */
  push32(0x1046d211u); f_10465ec0();
  /* 1046d211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d214 jmp 0x1046d228 */
  goto L_1046d228;
L_1046d216:;
  /* 1046d216 push 0x1048d450 */
  push32((uint32_t)(0x1048d450u));
  /* 1046d21b push 0x1048d3cc */
  push32((uint32_t)(0x1048d3ccu));
  /* 1046d220 call 0x10465ec0 */
  push32(0x1046d225u); f_10465ec0();
  /* 1046d225 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046d228:;
  /* 1046d228 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d22c je 0x1046d241 */
  if (C.zf) goto L_1046d241;
  /* 1046d22e push 6 */
  push32((uint32_t)(0x6u));
  /* 1046d230 push 0x1048e6a0 */
  push32((uint32_t)(0x1048e6a0u));
  /* 1046d235 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046d238 push eax */
  push32((uint32_t)(EAX));
  /* 1046d239 call 0x104697f0 */
  push32(0x1046d23eu); f_104697f0();
  /* 1046d23e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046d241:;
  /* 1046d241 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d245 je 0x1046d25a */
  if (C.zf) goto L_1046d25a;
  /* 1046d247 push 4 */
  push32((uint32_t)(0x4u));
  /* 1046d249 push 0x1048e6a8 */
  push32((uint32_t)(0x1048e6a8u));
  /* 1046d24e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046d251 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d252 call 0x104697f0 */
  push32(0x1046d257u); f_104697f0();
  /* 1046d257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046d25a:;
  /* 1046d25a push 0x1048d450 */
  push32((uint32_t)(0x1048d450u));
  /* 1046d25f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d262 push edx */
  push32((uint32_t)(EDX));
  /* 1046d263 call 0x10465ec0 */
  push32(0x1046d268u); f_10465ec0();
  /* 1046d268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d26b mov eax, 0x1048d450 */
  EAX = (0x1048d450u);
L_1046d270:;
  /* 1046d270 mov esp, ebp */
  ESP = (EBP);
  /* 1046d272 pop ebp */
  EBP = (pop32());
  /* 1046d273 ret  */
  ESPCHK(0x1046d0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d280 @ 0x1046d280 (7 bytes, 5 insns) */
void f_1046d280(void) {
  FTRACE(0x1046d280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d280 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d281 mov ebp, esp */
  EBP = (ESP);
  /* 1046d283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046d285 pop ebp */
  EBP = (pop32());
  /* 1046d286 ret  */
  ESPCHK(0x1046d280u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1046d290 (79 bytes, 28 insns) */
void f_1046d290(void) {
  FTRACE(0x1046d290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d290 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d291 mov ebp, esp */
  EBP = (ESP);
  /* 1046d293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046d296 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1046d299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046d29c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046d2a3 jmp 0x1046d2ae */
  goto L_1046d2ae;
L_1046d2a5:;
  /* 1046d2a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d2a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d2ab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1046d2ae:;
  /* 1046d2ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d2b1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d2b4 jge 0x1046d2d4 */
  if ((C.sf==C.of)) goto L_1046d2d4;
  /* 1046d2b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d2b9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d2bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046d2bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d2c2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1046d2c5 push edx */
  push32((uint32_t)(EDX));
  /* 1046d2c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d2c9 push eax */
  push32((uint32_t)(EAX));
  /* 1046d2ca call 0x10465ed0 */
  push32(0x1046d2cfu); f_10465ed0();
  /* 1046d2cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d2d2 jmp 0x1046d2a5 */
  goto L_1046d2a5;
L_1046d2d4:;
  /* 1046d2d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046d2db mov esp, ebp */
  ESP = (EBP);
  /* 1046d2dd pop ebp */
  EBP = (pop32());
  /* 1046d2de ret  */
  ESPCHK(0x1046d290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e0 @ 0x1046d2e0 (349 bytes, 122 insns) */
void f_1046d2e0(void) {
  FTRACE(0x1046d2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1046d2e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046d2e6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1046d2eb push 0 */
  push32((uint32_t)(0x0u));
  /* 1046d2ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d2f0 push eax */
  push32((uint32_t)(EAX));
  /* 1046d2f1 call 0x10466c80 */
  push32(0x1046d2f6u); f_10466c80();
  /* 1046d2f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d2f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d2fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046d2ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046d301 jne 0x1046d30a */
  if (!C.zf) goto L_1046d30a;
  /* 1046d303 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046d305 jmp 0x1046d439 */
  goto L_1046d439;
L_1046d30a:;
  /* 1046d30a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d30d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046d310 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d313 jne 0x1046d340 */
  if (!C.zf) goto L_1046d340;
  /* 1046d315 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d318 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1046d31c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d31e je 0x1046d340 */
  if (C.zf) goto L_1046d340;
  /* 1046d320 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d323 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d326 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d32a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d330 push edx */
  push32((uint32_t)(EDX));
  /* 1046d331 call 0x10465ec0 */
  push32(0x1046d336u); f_10465ec0();
  /* 1046d336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046d33b jmp 0x1046d439 */
  goto L_1046d439;
L_1046d340:;
  /* 1046d340 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046d347 jmp 0x1046d352 */
  goto L_1046d352;
L_1046d349:;
  /* 1046d349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d34c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d34f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046d352:;
  /* 1046d352 push 0x1048a048 */
  push32((uint32_t)(0x1048a048u));
  /* 1046d357 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d35a push ecx */
  push32((uint32_t)(ECX));
  /* 1046d35b call 0x1046ec30 */
  push32(0x1046d360u); f_1046ec30();
  /* 1046d360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d363 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046d366 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d36a jne 0x1046d374 */
  if (!C.zf) goto L_1046d374;
  /* 1046d36c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046d36f jmp 0x1046d439 */
  goto L_1046d439;
L_1046d374:;
  /* 1046d374 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d377 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d37a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1046d37c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1046d37f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d383 jne 0x1046d3aa */
  if (!C.zf) goto L_1046d3aa;
  /* 1046d385 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d389 jge 0x1046d3aa */
  if ((C.sf==C.of)) goto L_1046d3aa;
  /* 1046d38b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046d38f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d392 je 0x1046d3aa */
  if (C.zf) goto L_1046d3aa;
  /* 1046d394 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d397 push edx */
  push32((uint32_t)(EDX));
  /* 1046d398 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d39b push eax */
  push32((uint32_t)(EAX));
  /* 1046d39c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d39f push ecx */
  push32((uint32_t)(ECX));
  /* 1046d3a0 call 0x10466730 */
  push32(0x1046d3a5u); f_10466730();
  /* 1046d3a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d3a8 jmp 0x1046d410 */
  goto L_1046d410;
L_1046d3aa:;
  /* 1046d3aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d3ae jne 0x1046d3d8 */
  if (!C.zf) goto L_1046d3d8;
  /* 1046d3b0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d3b4 jge 0x1046d3d8 */
  if ((C.sf==C.of)) goto L_1046d3d8;
  /* 1046d3b6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046d3ba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d3bd je 0x1046d3d8 */
  if (C.zf) goto L_1046d3d8;
  /* 1046d3bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d3c2 push eax */
  push32((uint32_t)(EAX));
  /* 1046d3c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d3c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d3c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d3ca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d3cd push edx */
  push32((uint32_t)(EDX));
  /* 1046d3ce call 0x10466730 */
  push32(0x1046d3d3u); f_10466730();
  /* 1046d3d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d3d6 jmp 0x1046d410 */
  goto L_1046d410;
L_1046d3d8:;
  /* 1046d3d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d3dc jne 0x1046d40b */
  if (!C.zf) goto L_1046d40b;
  /* 1046d3de movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046d3e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d3e4 je 0x1046d3ef */
  if (C.zf) goto L_1046d3ef;
  /* 1046d3e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046d3ea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d3ed jne 0x1046d40b */
  if (!C.zf) goto L_1046d40b;
L_1046d3ef:;
  /* 1046d3ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d3f2 push edx */
  push32((uint32_t)(EDX));
  /* 1046d3f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d3f6 push eax */
  push32((uint32_t)(EAX));
  /* 1046d3f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d3fa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d400 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d401 call 0x10466730 */
  push32(0x1046d406u); f_10466730();
  /* 1046d406 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d409 jmp 0x1046d410 */
  goto L_1046d410;
L_1046d40b:;
  /* 1046d40b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046d40e jmp 0x1046d439 */
  goto L_1046d439;
L_1046d410:;
  /* 1046d410 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046d414 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d417 jne 0x1046d41b */
  if (!C.zf) goto L_1046d41b;
  /* 1046d419 jmp 0x1046d437 */
  goto L_1046d437;
L_1046d41b:;
  /* 1046d41b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046d41f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d421 jne 0x1046d425 */
  if (!C.zf) goto L_1046d425;
  /* 1046d423 jmp 0x1046d437 */
  goto L_1046d437;
L_1046d425:;
  /* 1046d425 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d428 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d42b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1046d42f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1046d432 jmp 0x1046d349 */
  goto L_1046d349;
L_1046d437:;
  /* 1046d437 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046d439:;
  /* 1046d439 mov esp, ebp */
  ESP = (EBP);
  /* 1046d43b pop ebp */
  EBP = (pop32());
  /* 1046d43c ret  */
  ESPCHK(0x1046d2e0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1046d440 (101 bytes, 36 insns) */
void f_1046d440(void) {
  FTRACE(0x1046d440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d440 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d441 mov ebp, esp */
  EBP = (ESP);
  /* 1046d443 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d446 push eax */
  push32((uint32_t)(EAX));
  /* 1046d447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d44a push ecx */
  push32((uint32_t)(ECX));
  /* 1046d44b call 0x10465ec0 */
  push32(0x1046d450u); f_10465ec0();
  /* 1046d450 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d453 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d456 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1046d45a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d45c je 0x1046d478 */
  if (C.zf) goto L_1046d478;
  /* 1046d45e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d461 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d464 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d465 push 0x1048a050 */
  push32((uint32_t)(0x1048a050u));
  /* 1046d46a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d46c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d46f push edx */
  push32((uint32_t)(EDX));
  /* 1046d470 call 0x1046d290 */
  push32(0x1046d475u); f_1046d290();
  /* 1046d475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046d478:;
  /* 1046d478 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d47b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1046d482 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046d484 je 0x1046d4a3 */
  if (C.zf) goto L_1046d4a3;
  /* 1046d486 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046d489 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d48f push edx */
  push32((uint32_t)(EDX));
  /* 1046d490 push 0x1048a04c */
  push32((uint32_t)(0x1048a04cu));
  /* 1046d495 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d497 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d49a push eax */
  push32((uint32_t)(EAX));
  /* 1046d49b call 0x1046d290 */
  push32(0x1046d4a0u); f_1046d290();
  /* 1046d4a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046d4a3:;
  /* 1046d4a3 pop ebp */
  EBP = (pop32());
  /* 1046d4a4 ret  */
  ESPCHK(0x1046d440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4b0 @ 0x1046d4b0 (130 bytes, 50 insns) */
void f_1046d4b0(void) {
  FTRACE(0x1046d4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1046d4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d4b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1046d4b5 push esi */
  push32((uint32_t)(ESI));
  /* 1046d4b6 push edi */
  push32((uint32_t)(EDI));
  /* 1046d4b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1046d4be:;
  /* 1046d4be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d4c2 jne 0x1046d4e2 */
  if (!C.zf) goto L_1046d4e2;
  /* 1046d4c4 push 0x1048a060 */
  push32((uint32_t)(0x1048a060u));
  /* 1046d4c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046d4cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1046d4cd push 0x1048a054 */
  push32((uint32_t)(0x1048a054u));
  /* 1046d4d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d4d4 call 0x10461fd0 */
  push32(0x1046d4d9u); f_10461fd0();
  /* 1046d4d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d4dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d4df jne 0x1046d4e2 */
  if (!C.zf) goto L_1046d4e2;
  /* 1046d4e1 int3  */
  x86_unimpl("int3 @ 0x1046d4e1");
L_1046d4e2:;
  /* 1046d4e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046d4e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d4e6 jne 0x1046d4be */
  if (!C.zf) goto L_1046d4be;
  /* 1046d4e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d4eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046d4ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1046d4f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046d4f3 je 0x1046d501 */
  if (C.zf) goto L_1046d501;
  /* 1046d4f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d4f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1046d4ff jmp 0x1046d528 */
  goto L_1046d528;
L_1046d501:;
  /* 1046d501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d504 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d505 call 0x1046bd20 */
  push32(0x1046d50au); f_1046bd20();
  /* 1046d50a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d50d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d510 push edx */
  push32((uint32_t)(EDX));
  /* 1046d511 call 0x1046d540 */
  push32(0x1046d516u); f_1046d540();
  /* 1046d516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d519 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046d51c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d51f push eax */
  push32((uint32_t)(EAX));
  /* 1046d520 call 0x1046bd90 */
  push32(0x1046d525u); f_1046bd90();
  /* 1046d525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046d528:;
  /* 1046d528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d52b pop edi */
  EDI = (pop32());
  /* 1046d52c pop esi */
  ESI = (pop32());
  /* 1046d52d pop ebx */
  EBX = (pop32());
  /* 1046d52e mov esp, ebp */
  ESP = (EBP);
  /* 1046d530 pop ebp */
  EBP = (pop32());
  /* 1046d531 ret  */
  ESPCHK(0x1046d4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d540 @ 0x1046d540 (190 bytes, 67 insns) */
void f_1046d540(void) {
  FTRACE(0x1046d540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d540 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d541 mov ebp, esp */
  EBP = (ESP);
  /* 1046d543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046d546 push ebx */
  push32((uint32_t)(EBX));
  /* 1046d547 push esi */
  push32((uint32_t)(ESI));
  /* 1046d548 push edi */
  push32((uint32_t)(EDI));
  /* 1046d549 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1046d550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d553 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1046d556:;
  /* 1046d556 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d55a jne 0x1046d57a */
  if (!C.zf) goto L_1046d57a;
  /* 1046d55c push 0x10489f04 */
  push32((uint32_t)(0x10489f04u));
  /* 1046d561 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046d563 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1046d565 push 0x1048a054 */
  push32((uint32_t)(0x1048a054u));
  /* 1046d56a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d56c call 0x10461fd0 */
  push32(0x1046d571u); f_10461fd0();
  /* 1046d571 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d574 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d577 jne 0x1046d57a */
  if (!C.zf) goto L_1046d57a;
  /* 1046d579 int3  */
  x86_unimpl("int3 @ 0x1046d579");
L_1046d57a:;
  /* 1046d57a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d57c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046d57e jne 0x1046d556 */
  if (!C.zf) goto L_1046d556;
  /* 1046d580 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d583 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1046d586 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1046d58b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d58d je 0x1046d5ea */
  if (C.zf) goto L_1046d5ea;
  /* 1046d58f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d592 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d593 call 0x1046c840 */
  push32(0x1046d598u); f_1046c840();
  /* 1046d598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d59b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046d59e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d5a1 push edx */
  push32((uint32_t)(EDX));
  /* 1046d5a2 call 0x1046fbc0 */
  push32(0x1046d5a7u); f_1046fbc0();
  /* 1046d5a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d5aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d5ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1046d5b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d5b1 call 0x1046fa90 */
  push32(0x1046d5b6u); f_1046fa90();
  /* 1046d5b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d5b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d5bb jge 0x1046d5c6 */
  if ((C.sf==C.of)) goto L_1046d5c6;
  /* 1046d5bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1046d5c4 jmp 0x1046d5ea */
  goto L_1046d5ea;
L_1046d5c6:;
  /* 1046d5c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d5c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d5cd je 0x1046d5ea */
  if (C.zf) goto L_1046d5ea;
  /* 1046d5cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d5d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d5d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1046d5d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d5d8 call 0x104639a0 */
  push32(0x1046d5ddu); f_104639a0();
  /* 1046d5dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d5e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d5e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1046d5ea:;
  /* 1046d5ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046d5ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1046d5f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d5f7 pop edi */
  EDI = (pop32());
  /* 1046d5f8 pop esi */
  ESI = (pop32());
  /* 1046d5f9 pop ebx */
  EBX = (pop32());
  /* 1046d5fa mov esp, ebp */
  ESP = (EBP);
  /* 1046d5fc pop ebp */
  EBP = (pop32());
  /* 1046d5fd ret  */
  ESPCHK(0x1046d540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d600 @ 0x1046d600 (210 bytes, 63 insns) */
void f_1046d600(void) {
  FTRACE(0x1046d600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d600 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d601 mov ebp, esp */
  EBP = (ESP);
  /* 1046d603 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d607 cmp eax, dword ptr [0x1048ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d60d jae 0x1046d631 */
  if (!C.cf) goto L_1046d631;
  /* 1046d60f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d612 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046d615 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d618 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046d61b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046d61e mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046d625 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1046d62a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1046d62d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046d62f jne 0x1046d644 */
  if (!C.zf) goto L_1046d644;
L_1046d631:;
  /* 1046d631 call 0x1046ade0 */
  push32(0x1046d636u); f_1046ade0();
  /* 1046d636 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046d63c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046d63f jmp 0x1046d6ce */
  goto L_1046d6ce;
L_1046d644:;
  /* 1046d644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d647 push edx */
  push32((uint32_t)(EDX));
  /* 1046d648 call 0x1046c600 */
  push32(0x1046d64du); f_1046c600();
  /* 1046d64d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d653 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046d656 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d659 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046d65c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046d65f mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046d666 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1046d66b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1046d66e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d670 je 0x1046d6ad */
  if (C.zf) goto L_1046d6ad;
  /* 1046d672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d675 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d676 call 0x1046c480 */
  push32(0x1046d67bu); f_1046c480();
  /* 1046d67b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d67e push eax */
  push32((uint32_t)(EAX));
  /* 1046d67f call dword ptr [0x10490268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490268))), 0x1046d685u);
  /* 1046d685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d687 jne 0x1046d694 */
  if (!C.zf) goto L_1046d694;
  /* 1046d689 call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x1046d68fu);
  /* 1046d68f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046d692 jmp 0x1046d69b */
  goto L_1046d69b;
L_1046d694:;
  /* 1046d694 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1046d69b:;
  /* 1046d69b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d69f jne 0x1046d6a3 */
  if (!C.zf) goto L_1046d6a3;
  /* 1046d6a1 jmp 0x1046d6bf */
  goto L_1046d6bf;
L_1046d6a3:;
  /* 1046d6a3 call 0x1046adf0 */
  push32(0x1046d6a8u); f_1046adf0();
  /* 1046d6a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d6ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1046d6ad:;
  /* 1046d6ad call 0x1046ade0 */
  push32(0x1046d6b2u); f_1046ade0();
  /* 1046d6b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046d6b8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1046d6bf:;
  /* 1046d6bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d6c2 push eax */
  push32((uint32_t)(EAX));
  /* 1046d6c3 call 0x1046c690 */
  push32(0x1046d6c8u); f_1046c690();
  /* 1046d6c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d6cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1046d6ce:;
  /* 1046d6ce mov esp, ebp */
  ESP = (EBP);
  /* 1046d6d0 pop ebp */
  EBP = (pop32());
  /* 1046d6d1 ret  */
  ESPCHK(0x1046d600u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1046d6e0 (219 bytes, 64 insns) */
void f_1046d6e0(void) {
  FTRACE(0x1046d6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1046d6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d6e4 cmp dword ptr [0x1048e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d6eb je 0x1046d781 */
  if (C.zf) goto L_1046d781;
  /* 1046d6f1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1046d6f3 push 0x1048a070 */
  push32((uint32_t)(0x1048a070u));
  /* 1046d6f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d6fa push 0xac */
  push32((uint32_t)(0xacu));
  /* 1046d6ff push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d701 call 0x10463320 */
  push32(0x1046d706u); f_10463320();
  /* 1046d706 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d709 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046d70c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d710 jne 0x1046d71c */
  if (!C.zf) goto L_1046d71c;
  /* 1046d712 mov eax, 1 */
  EAX = (0x1u);
  /* 1046d717 jmp 0x1046d7b7 */
  goto L_1046d7b7;
L_1046d71c:;
  /* 1046d71c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d71f push eax */
  push32((uint32_t)(EAX));
  /* 1046d720 call 0x1046d7c0 */
  push32(0x1046d725u); f_1046d7c0();
  /* 1046d725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046d72a je 0x1046d74d */
  if (C.zf) goto L_1046d74d;
  /* 1046d72c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d72f push ecx */
  push32((uint32_t)(ECX));
  /* 1046d730 call 0x1046dd50 */
  push32(0x1046d735u); f_1046dd50();
  /* 1046d735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d738 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d73a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d73d push edx */
  push32((uint32_t)(EDX));
  /* 1046d73e call 0x104639a0 */
  push32(0x1046d743u); f_104639a0();
  /* 1046d743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d746 mov eax, 1 */
  EAX = (0x1u);
  /* 1046d74b jmp 0x1046d7b7 */
  goto L_1046d7b7;
L_1046d74d:;
  /* 1046d74d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d750 mov dword ptr [0x1048dc98], eax */
  w32((uint32_t)(0x1048dc98), (EAX));
  /* 1046d755 mov ecx, dword ptr [0x1048e6ac] */
  ECX = (r32((uint32_t)(0x1048e6ac)));
  /* 1046d75b push ecx */
  push32((uint32_t)(ECX));
  /* 1046d75c call 0x1046dd50 */
  push32(0x1046d761u); f_1046dd50();
  /* 1046d761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d764 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d766 mov edx, dword ptr [0x1048e6ac] */
  EDX = (r32((uint32_t)(0x1048e6ac)));
  /* 1046d76c push edx */
  push32((uint32_t)(EDX));
  /* 1046d76d call 0x104639a0 */
  push32(0x1046d772u); f_104639a0();
  /* 1046d772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d778 mov dword ptr [0x1048e6ac], eax */
  w32((uint32_t)(0x1048e6ac), (EAX));
  /* 1046d77d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046d77f jmp 0x1046d7b7 */
  goto L_1046d7b7;
L_1046d781:;
  /* 1046d781 mov dword ptr [0x1048dc98], 0x1048dca0 */
  w32((uint32_t)(0x1048dc98), (0x1048dca0u));
  /* 1046d78b mov ecx, dword ptr [0x1048e6ac] */
  ECX = (r32((uint32_t)(0x1048e6ac)));
  /* 1046d791 push ecx */
  push32((uint32_t)(ECX));
  /* 1046d792 call 0x1046dd50 */
  push32(0x1046d797u); f_1046dd50();
  /* 1046d797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d79a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046d79c mov edx, dword ptr [0x1048e6ac] */
  EDX = (r32((uint32_t)(0x1048e6ac)));
  /* 1046d7a2 push edx */
  push32((uint32_t)(EDX));
  /* 1046d7a3 call 0x104639a0 */
  push32(0x1046d7a8u); f_104639a0();
  /* 1046d7a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d7ab mov dword ptr [0x1048e6ac], 0 */
  w32((uint32_t)(0x1048e6ac), (0x0u));
  /* 1046d7b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046d7b7:;
  /* 1046d7b7 mov esp, ebp */
  ESP = (EBP);
  /* 1046d7b9 pop ebp */
  EBP = (pop32());
  /* 1046d7ba ret  */
  ESPCHK(0x1046d6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x1046d7c0 (1423 bytes, 533 insns) */
void f_1046d7c0(void) {
  FTRACE(0x1046d7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046d7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046d7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1046d7c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046d7c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1046d7cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046d7cf mov ax, word ptr [0x1048e6e6] */
  AX = (r16((uint32_t)(0x1048e6e6)));
  /* 1046d7d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046d7d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d7da mov cx, word ptr [0x1048e6e8] */
  CX = (r16((uint32_t)(0x1048e6e8)));
  /* 1046d7e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046d7e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046d7e8 jne 0x1046d7f2 */
  if (!C.zf) goto L_1046d7f2;
  /* 1046d7ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046d7ed jmp 0x1046dd4b */
  goto L_1046dd4b;
L_1046d7f2:;
  /* 1046d7f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d7f5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d7f8 push edx */
  push32((uint32_t)(EDX));
  /* 1046d7f9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1046d7fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d7fe push eax */
  push32((uint32_t)(EAX));
  /* 1046d7ff push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d801 call 0x104710d0 */
  push32(0x1046d806u); f_104710d0();
  /* 1046d806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d809 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d80c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d80e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d814 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d817 push edx */
  push32((uint32_t)(EDX));
  /* 1046d818 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1046d81a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d81d push eax */
  push32((uint32_t)(EAX));
  /* 1046d81e push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d820 call 0x104710d0 */
  push32(0x1046d825u); f_104710d0();
  /* 1046d825 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d828 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d82b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d82d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d830 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d833 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d836 push edx */
  push32((uint32_t)(EDX));
  /* 1046d837 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1046d839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d83c push eax */
  push32((uint32_t)(EAX));
  /* 1046d83d push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d83f call 0x104710d0 */
  push32(0x1046d844u); f_104710d0();
  /* 1046d844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d847 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d84a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d84c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d852 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d855 push edx */
  push32((uint32_t)(EDX));
  /* 1046d856 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1046d858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d85b push eax */
  push32((uint32_t)(EAX));
  /* 1046d85c push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d85e call 0x104710d0 */
  push32(0x1046d863u); f_104710d0();
  /* 1046d863 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d866 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d869 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d86b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d86e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d871 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d874 push edx */
  push32((uint32_t)(EDX));
  /* 1046d875 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1046d877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d87a push eax */
  push32((uint32_t)(EAX));
  /* 1046d87b push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d87d call 0x104710d0 */
  push32(0x1046d882u); f_104710d0();
  /* 1046d882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d885 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d888 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d88a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d88d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d890 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d893 push edx */
  push32((uint32_t)(EDX));
  /* 1046d894 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1046d896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d899 push eax */
  push32((uint32_t)(EAX));
  /* 1046d89a push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d89c call 0x104710d0 */
  push32(0x1046d8a1u); f_104710d0();
  /* 1046d8a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d8a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d8a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d8a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d8ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d8af push edx */
  push32((uint32_t)(EDX));
  /* 1046d8b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1046d8b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d8b5 push eax */
  push32((uint32_t)(EAX));
  /* 1046d8b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d8b8 call 0x104710d0 */
  push32(0x1046d8bdu); f_104710d0();
  /* 1046d8bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d8c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d8c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d8c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d8c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d8cb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d8ce push edx */
  push32((uint32_t)(EDX));
  /* 1046d8cf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1046d8d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d8d4 push eax */
  push32((uint32_t)(EAX));
  /* 1046d8d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d8d7 call 0x104710d0 */
  push32(0x1046d8dcu); f_104710d0();
  /* 1046d8dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d8df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d8e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d8e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d8e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d8ea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d8ed push edx */
  push32((uint32_t)(EDX));
  /* 1046d8ee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1046d8f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d8f3 push eax */
  push32((uint32_t)(EAX));
  /* 1046d8f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d8f6 call 0x104710d0 */
  push32(0x1046d8fbu); f_104710d0();
  /* 1046d8fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d8fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d901 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d903 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d906 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d909 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d90c push edx */
  push32((uint32_t)(EDX));
  /* 1046d90d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1046d90f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d912 push eax */
  push32((uint32_t)(EAX));
  /* 1046d913 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d915 call 0x104710d0 */
  push32(0x1046d91au); f_104710d0();
  /* 1046d91a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d91d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d920 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d922 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d925 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d928 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d92b push edx */
  push32((uint32_t)(EDX));
  /* 1046d92c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1046d92e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d931 push eax */
  push32((uint32_t)(EAX));
  /* 1046d932 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d934 call 0x104710d0 */
  push32(0x1046d939u); f_104710d0();
  /* 1046d939 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d93c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d93f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d941 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d944 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d947 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d94a push edx */
  push32((uint32_t)(EDX));
  /* 1046d94b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1046d94d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d950 push eax */
  push32((uint32_t)(EAX));
  /* 1046d951 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d953 call 0x104710d0 */
  push32(0x1046d958u); f_104710d0();
  /* 1046d958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d95b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d95e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d960 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d966 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d969 push edx */
  push32((uint32_t)(EDX));
  /* 1046d96a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1046d96c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d96f push eax */
  push32((uint32_t)(EAX));
  /* 1046d970 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d972 call 0x104710d0 */
  push32(0x1046d977u); f_104710d0();
  /* 1046d977 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d97a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d97d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d97f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d982 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d985 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d988 push edx */
  push32((uint32_t)(EDX));
  /* 1046d989 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1046d98b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d98e push eax */
  push32((uint32_t)(EAX));
  /* 1046d98f push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d991 call 0x104710d0 */
  push32(0x1046d996u); f_104710d0();
  /* 1046d996 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d999 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d99c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d99e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d9a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d9a4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d9a7 push edx */
  push32((uint32_t)(EDX));
  /* 1046d9a8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1046d9aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d9ad push eax */
  push32((uint32_t)(EAX));
  /* 1046d9ae push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d9b0 call 0x104710d0 */
  push32(0x1046d9b5u); f_104710d0();
  /* 1046d9b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d9b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d9bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d9bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d9c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d9c3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d9c6 push edx */
  push32((uint32_t)(EDX));
  /* 1046d9c7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1046d9c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d9cc push eax */
  push32((uint32_t)(EAX));
  /* 1046d9cd push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d9cf call 0x104710d0 */
  push32(0x1046d9d4u); f_104710d0();
  /* 1046d9d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d9d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d9da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d9dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d9df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046d9e2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d9e5 push edx */
  push32((uint32_t)(EDX));
  /* 1046d9e6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1046d9e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046d9eb push eax */
  push32((uint32_t)(EAX));
  /* 1046d9ec push 1 */
  push32((uint32_t)(0x1u));
  /* 1046d9ee call 0x104710d0 */
  push32(0x1046d9f3u); f_104710d0();
  /* 1046d9f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046d9f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046d9f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046d9fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046d9fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046da01 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da04 push edx */
  push32((uint32_t)(EDX));
  /* 1046da05 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1046da07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046da0a push eax */
  push32((uint32_t)(EAX));
  /* 1046da0b push 1 */
  push32((uint32_t)(0x1u));
  /* 1046da0d call 0x104710d0 */
  push32(0x1046da12u); f_104710d0();
  /* 1046da12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046da18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046da1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046da1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046da20 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da23 push edx */
  push32((uint32_t)(EDX));
  /* 1046da24 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1046da26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046da29 push eax */
  push32((uint32_t)(EAX));
  /* 1046da2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1046da2c call 0x104710d0 */
  push32(0x1046da31u); f_104710d0();
  /* 1046da31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046da37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046da39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046da3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046da3f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da42 push edx */
  push32((uint32_t)(EDX));
  /* 1046da43 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1046da45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046da48 push eax */
  push32((uint32_t)(EAX));
  /* 1046da49 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046da4b call 0x104710d0 */
  push32(0x1046da50u); f_104710d0();
  /* 1046da50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046da56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046da58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046da5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046da5e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da61 push edx */
  push32((uint32_t)(EDX));
  /* 1046da62 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1046da64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046da67 push eax */
  push32((uint32_t)(EAX));
  /* 1046da68 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046da6a call 0x104710d0 */
  push32(0x1046da6fu); f_104710d0();
  /* 1046da6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da72 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046da75 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046da77 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046da7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046da7d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da80 push edx */
  push32((uint32_t)(EDX));
  /* 1046da81 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1046da83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046da86 push eax */
  push32((uint32_t)(EAX));
  /* 1046da87 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046da89 call 0x104710d0 */
  push32(0x1046da8eu); f_104710d0();
  /* 1046da8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046da94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046da96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046da99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046da9c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046da9f push edx */
  push32((uint32_t)(EDX));
  /* 1046daa0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1046daa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046daa5 push eax */
  push32((uint32_t)(EAX));
  /* 1046daa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046daa8 call 0x104710d0 */
  push32(0x1046daadu); f_104710d0();
  /* 1046daad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dab0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dab3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dab5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dab8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dabb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dabe push edx */
  push32((uint32_t)(EDX));
  /* 1046dabf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1046dac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dac4 push eax */
  push32((uint32_t)(EAX));
  /* 1046dac5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dac7 call 0x104710d0 */
  push32(0x1046daccu); f_104710d0();
  /* 1046dacc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dacf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dad2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dad4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dad7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dada add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dadd push edx */
  push32((uint32_t)(EDX));
  /* 1046dade push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1046dae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dae3 push eax */
  push32((uint32_t)(EAX));
  /* 1046dae4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dae6 call 0x104710d0 */
  push32(0x1046daebu); f_104710d0();
  /* 1046daeb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046daee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046daf1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046daf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046daf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046daf9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dafc push edx */
  push32((uint32_t)(EDX));
  /* 1046dafd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1046daff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046db02 push eax */
  push32((uint32_t)(EAX));
  /* 1046db03 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046db05 call 0x104710d0 */
  push32(0x1046db0au); f_104710d0();
  /* 1046db0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046db10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046db12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046db15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046db18 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db1b push edx */
  push32((uint32_t)(EDX));
  /* 1046db1c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1046db1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046db21 push eax */
  push32((uint32_t)(EAX));
  /* 1046db22 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046db24 call 0x104710d0 */
  push32(0x1046db29u); f_104710d0();
  /* 1046db29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046db2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046db31 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046db34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046db37 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db3a push edx */
  push32((uint32_t)(EDX));
  /* 1046db3b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1046db3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046db40 push eax */
  push32((uint32_t)(EAX));
  /* 1046db41 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046db43 call 0x104710d0 */
  push32(0x1046db48u); f_104710d0();
  /* 1046db48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046db4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046db50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046db53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046db56 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db59 push edx */
  push32((uint32_t)(EDX));
  /* 1046db5a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1046db5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046db5f push eax */
  push32((uint32_t)(EAX));
  /* 1046db60 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046db62 call 0x104710d0 */
  push32(0x1046db67u); f_104710d0();
  /* 1046db67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046db6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046db6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046db72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046db75 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db78 push edx */
  push32((uint32_t)(EDX));
  /* 1046db79 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1046db7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046db7e push eax */
  push32((uint32_t)(EAX));
  /* 1046db7f push 1 */
  push32((uint32_t)(0x1u));
  /* 1046db81 call 0x104710d0 */
  push32(0x1046db86u); f_104710d0();
  /* 1046db86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046db8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046db8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046db91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046db94 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046db97 push edx */
  push32((uint32_t)(EDX));
  /* 1046db98 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1046db9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046db9d push eax */
  push32((uint32_t)(EAX));
  /* 1046db9e push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dba0 call 0x104710d0 */
  push32(0x1046dba5u); f_104710d0();
  /* 1046dba5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dba8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dbab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dbad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dbb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dbb3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dbb6 push edx */
  push32((uint32_t)(EDX));
  /* 1046dbb7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1046dbb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dbbc push eax */
  push32((uint32_t)(EAX));
  /* 1046dbbd push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dbbf call 0x104710d0 */
  push32(0x1046dbc4u); f_104710d0();
  /* 1046dbc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dbc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dbca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dbcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dbcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dbd2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dbd8 push edx */
  push32((uint32_t)(EDX));
  /* 1046dbd9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1046dbdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dbde push eax */
  push32((uint32_t)(EAX));
  /* 1046dbdf push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dbe1 call 0x104710d0 */
  push32(0x1046dbe6u); f_104710d0();
  /* 1046dbe6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dbe9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dbec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dbee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dbf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dbf4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dbfa push edx */
  push32((uint32_t)(EDX));
  /* 1046dbfb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1046dbfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dc00 push eax */
  push32((uint32_t)(EAX));
  /* 1046dc01 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dc03 call 0x104710d0 */
  push32(0x1046dc08u); f_104710d0();
  /* 1046dc08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dc0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dc0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dc10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dc13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dc16 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dc1c push edx */
  push32((uint32_t)(EDX));
  /* 1046dc1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1046dc1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dc22 push eax */
  push32((uint32_t)(EAX));
  /* 1046dc23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dc25 call 0x104710d0 */
  push32(0x1046dc2au); f_104710d0();
  /* 1046dc2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dc2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dc30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dc32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dc35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dc38 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dc3e push edx */
  push32((uint32_t)(EDX));
  /* 1046dc3f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1046dc41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dc44 push eax */
  push32((uint32_t)(EAX));
  /* 1046dc45 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dc47 call 0x104710d0 */
  push32(0x1046dc4cu); f_104710d0();
  /* 1046dc4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dc4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dc52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dc54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dc57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dc5a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dc60 push edx */
  push32((uint32_t)(EDX));
  /* 1046dc61 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1046dc63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dc66 push eax */
  push32((uint32_t)(EAX));
  /* 1046dc67 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dc69 call 0x104710d0 */
  push32(0x1046dc6eu); f_104710d0();
  /* 1046dc6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dc71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dc74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dc76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dc79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dc7c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dc82 push edx */
  push32((uint32_t)(EDX));
  /* 1046dc83 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1046dc85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dc88 push eax */
  push32((uint32_t)(EAX));
  /* 1046dc89 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dc8b call 0x104710d0 */
  push32(0x1046dc90u); f_104710d0();
  /* 1046dc90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dc93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dc96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dc98 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dc9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dc9e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dca4 push edx */
  push32((uint32_t)(EDX));
  /* 1046dca5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1046dca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dcaa push eax */
  push32((uint32_t)(EAX));
  /* 1046dcab push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dcad call 0x104710d0 */
  push32(0x1046dcb2u); f_104710d0();
  /* 1046dcb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dcb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dcb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dcba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dcbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dcc0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dcc6 push edx */
  push32((uint32_t)(EDX));
  /* 1046dcc7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1046dcc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046dccc push eax */
  push32((uint32_t)(EAX));
  /* 1046dccd push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dccf call 0x104710d0 */
  push32(0x1046dcd4u); f_104710d0();
  /* 1046dcd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dcd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dcda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dcdc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dcdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dce2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dce8 push edx */
  push32((uint32_t)(EDX));
  /* 1046dce9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1046dceb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046dcee push eax */
  push32((uint32_t)(EAX));
  /* 1046dcef push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dcf1 call 0x104710d0 */
  push32(0x1046dcf6u); f_104710d0();
  /* 1046dcf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dcf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dcfc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dcfe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dd01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dd04 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dd0a push edx */
  push32((uint32_t)(EDX));
  /* 1046dd0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1046dd0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046dd10 push eax */
  push32((uint32_t)(EAX));
  /* 1046dd11 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dd13 call 0x104710d0 */
  push32(0x1046dd18u); f_104710d0();
  /* 1046dd18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dd1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dd1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dd20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dd23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dd26 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dd2c push edx */
  push32((uint32_t)(EDX));
  /* 1046dd2d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1046dd32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046dd35 push eax */
  push32((uint32_t)(EAX));
  /* 1046dd36 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046dd38 call 0x104710d0 */
  push32(0x1046dd3du); f_104710d0();
  /* 1046dd3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dd40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046dd43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046dd45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1046dd48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1046dd4b:;
  /* 1046dd4b mov esp, ebp */
  ESP = (EBP);
  /* 1046dd4d pop ebp */
  EBP = (pop32());
  /* 1046dd4e ret  */
  ESPCHK(0x1046d7c0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1046dd50 (779 bytes, 265 insns) */
void f_1046dd50(void) {
  FTRACE(0x1046dd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046dd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1046dd51 mov ebp, esp */
  EBP = (ESP);
  /* 1046dd53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046dd57 jne 0x1046dd5e */
  if (!C.zf) goto L_1046dd5e;
  /* 1046dd59 jmp 0x1046e059 */
  goto L_1046e059;
L_1046dd5e:;
  /* 1046dd5e push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dd60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dd63 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1046dd66 push ecx */
  push32((uint32_t)(ECX));
  /* 1046dd67 call 0x104639a0 */
  push32(0x1046dd6cu); f_104639a0();
  /* 1046dd6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dd6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dd71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dd74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1046dd77 push eax */
  push32((uint32_t)(EAX));
  /* 1046dd78 call 0x104639a0 */
  push32(0x1046dd7du); f_104639a0();
  /* 1046dd7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dd80 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dd82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dd85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046dd88 push edx */
  push32((uint32_t)(EDX));
  /* 1046dd89 call 0x104639a0 */
  push32(0x1046dd8eu); f_104639a0();
  /* 1046dd8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dd91 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dd93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dd96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1046dd99 push ecx */
  push32((uint32_t)(ECX));
  /* 1046dd9a call 0x104639a0 */
  push32(0x1046dd9fu); f_104639a0();
  /* 1046dd9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dda2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dda4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dda7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1046ddaa push eax */
  push32((uint32_t)(EAX));
  /* 1046ddab call 0x104639a0 */
  push32(0x1046ddb0u); f_104639a0();
  /* 1046ddb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ddb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046ddb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ddb8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1046ddbb push edx */
  push32((uint32_t)(EDX));
  /* 1046ddbc call 0x104639a0 */
  push32(0x1046ddc1u); f_104639a0();
  /* 1046ddc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ddc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046ddc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ddc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046ddcb push ecx */
  push32((uint32_t)(ECX));
  /* 1046ddcc call 0x104639a0 */
  push32(0x1046ddd1u); f_104639a0();
  /* 1046ddd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ddd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046ddd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ddd9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1046dddc push eax */
  push32((uint32_t)(EAX));
  /* 1046dddd call 0x104639a0 */
  push32(0x1046dde2u); f_104639a0();
  /* 1046dde2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dde5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dde7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ddea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1046dded push edx */
  push32((uint32_t)(EDX));
  /* 1046ddee call 0x104639a0 */
  push32(0x1046ddf3u); f_104639a0();
  /* 1046ddf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ddf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046ddf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ddfb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1046ddfe push ecx */
  push32((uint32_t)(ECX));
  /* 1046ddff call 0x104639a0 */
  push32(0x1046de04u); f_104639a0();
  /* 1046de04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046de07 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046de09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046de0c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1046de0f push eax */
  push32((uint32_t)(EAX));
  /* 1046de10 call 0x104639a0 */
  push32(0x1046de15u); f_104639a0();
  /* 1046de15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046de18 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046de1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046de1d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1046de20 push edx */
  push32((uint32_t)(EDX));
  /* 1046de21 call 0x104639a0 */
  push32(0x1046de26u); f_104639a0();
  /* 1046de26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046de29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046de2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046de2e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1046de31 push ecx */
  push32((uint32_t)(ECX));
  /* 1046de32 call 0x104639a0 */
  push32(0x1046de37u); f_104639a0();
  /* 1046de37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046de3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046de3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046de3f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1046de42 push eax */
  push32((uint32_t)(EAX));
  /* 1046de43 call 0x104639a0 */
  push32(0x1046de48u); f_104639a0();
  /* 1046de48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046de4b push 2 */
  push32((uint32_t)(0x2u));
  /* 1046de4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046de50 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1046de53 push edx */
  push32((uint32_t)(EDX));
  /* 1046de54 call 0x104639a0 */
  push32(0x1046de59u); f_104639a0();
  /* 1046de59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046de5c push 2 */
  push32((uint32_t)(0x2u));
  /* 1046de5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046de61 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1046de64 push ecx */
  push32((uint32_t)(ECX));
  /* 1046de65 call 0x104639a0 */
  push32(0x1046de6au); f_104639a0();
  /* 1046de6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046de6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1046de6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046de72 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1046de75 push eax */
  push32((uint32_t)(EAX));
  /* 1046de76 call 0x104639a0 */
  push32(0x1046de7bu); f_104639a0();
  /* 1046de7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046de7e push 2 */
  push32((uint32_t)(0x2u));
  /* 1046de80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046de83 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1046de86 push edx */
  push32((uint32_t)(EDX));
  /* 1046de87 call 0x104639a0 */
  push32(0x1046de8cu); f_104639a0();
  /* 1046de8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046de8f push 2 */
  push32((uint32_t)(0x2u));
  /* 1046de91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046de94 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1046de97 push ecx */
  push32((uint32_t)(ECX));
  /* 1046de98 call 0x104639a0 */
  push32(0x1046de9du); f_104639a0();
  /* 1046de9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dea0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dea2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dea5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1046dea8 push eax */
  push32((uint32_t)(EAX));
  /* 1046dea9 call 0x104639a0 */
  push32(0x1046deaeu); f_104639a0();
  /* 1046deae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046deb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046deb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046deb6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1046deb9 push edx */
  push32((uint32_t)(EDX));
  /* 1046deba call 0x104639a0 */
  push32(0x1046debfu); f_104639a0();
  /* 1046debf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dec7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1046deca push ecx */
  push32((uint32_t)(ECX));
  /* 1046decb call 0x104639a0 */
  push32(0x1046ded0u); f_104639a0();
  /* 1046ded0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ded3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046ded5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ded8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1046dedb push eax */
  push32((uint32_t)(EAX));
  /* 1046dedc call 0x104639a0 */
  push32(0x1046dee1u); f_104639a0();
  /* 1046dee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dee6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dee9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1046deec push edx */
  push32((uint32_t)(EDX));
  /* 1046deed call 0x104639a0 */
  push32(0x1046def2u); f_104639a0();
  /* 1046def2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046def5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046def7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046defa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1046defd push ecx */
  push32((uint32_t)(ECX));
  /* 1046defe call 0x104639a0 */
  push32(0x1046df03u); f_104639a0();
  /* 1046df03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046df06 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046df08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046df0b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1046df0e push eax */
  push32((uint32_t)(EAX));
  /* 1046df0f call 0x104639a0 */
  push32(0x1046df14u); f_104639a0();
  /* 1046df14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046df17 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046df19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046df1c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1046df1f push edx */
  push32((uint32_t)(EDX));
  /* 1046df20 call 0x104639a0 */
  push32(0x1046df25u); f_104639a0();
  /* 1046df25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046df28 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046df2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046df2d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1046df30 push ecx */
  push32((uint32_t)(ECX));
  /* 1046df31 call 0x104639a0 */
  push32(0x1046df36u); f_104639a0();
  /* 1046df36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046df39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046df3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046df3e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1046df41 push eax */
  push32((uint32_t)(EAX));
  /* 1046df42 call 0x104639a0 */
  push32(0x1046df47u); f_104639a0();
  /* 1046df47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046df4a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046df4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046df4f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1046df52 push edx */
  push32((uint32_t)(EDX));
  /* 1046df53 call 0x104639a0 */
  push32(0x1046df58u); f_104639a0();
  /* 1046df58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046df5b push 2 */
  push32((uint32_t)(0x2u));
  /* 1046df5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046df60 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1046df63 push ecx */
  push32((uint32_t)(ECX));
  /* 1046df64 call 0x104639a0 */
  push32(0x1046df69u); f_104639a0();
  /* 1046df69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046df6c push 2 */
  push32((uint32_t)(0x2u));
  /* 1046df6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046df71 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1046df74 push eax */
  push32((uint32_t)(EAX));
  /* 1046df75 call 0x104639a0 */
  push32(0x1046df7au); f_104639a0();
  /* 1046df7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046df7d push 2 */
  push32((uint32_t)(0x2u));
  /* 1046df7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046df82 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1046df88 push edx */
  push32((uint32_t)(EDX));
  /* 1046df89 call 0x104639a0 */
  push32(0x1046df8eu); f_104639a0();
  /* 1046df8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046df91 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046df93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046df96 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1046df9c push ecx */
  push32((uint32_t)(ECX));
  /* 1046df9d call 0x104639a0 */
  push32(0x1046dfa2u); f_104639a0();
  /* 1046dfa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dfa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dfa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dfaa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1046dfb0 push eax */
  push32((uint32_t)(EAX));
  /* 1046dfb1 call 0x104639a0 */
  push32(0x1046dfb6u); f_104639a0();
  /* 1046dfb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dfb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dfbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dfbe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1046dfc4 push edx */
  push32((uint32_t)(EDX));
  /* 1046dfc5 call 0x104639a0 */
  push32(0x1046dfcau); f_104639a0();
  /* 1046dfca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dfcd push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dfcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dfd2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1046dfd8 push ecx */
  push32((uint32_t)(ECX));
  /* 1046dfd9 call 0x104639a0 */
  push32(0x1046dfdeu); f_104639a0();
  /* 1046dfde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dfe1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dfe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dfe6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1046dfec push eax */
  push32((uint32_t)(EAX));
  /* 1046dfed call 0x104639a0 */
  push32(0x1046dff2u); f_104639a0();
  /* 1046dff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046dff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046dff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046dffa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1046e000 push edx */
  push32((uint32_t)(EDX));
  /* 1046e001 call 0x104639a0 */
  push32(0x1046e006u); f_104639a0();
  /* 1046e006 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e009 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e00b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e00e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1046e014 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e015 call 0x104639a0 */
  push32(0x1046e01au); f_104639a0();
  /* 1046e01a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e01d push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e01f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e022 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1046e028 push eax */
  push32((uint32_t)(EAX));
  /* 1046e029 call 0x104639a0 */
  push32(0x1046e02eu); f_104639a0();
  /* 1046e02e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e031 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e036 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1046e03c push edx */
  push32((uint32_t)(EDX));
  /* 1046e03d call 0x104639a0 */
  push32(0x1046e042u); f_104639a0();
  /* 1046e042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e045 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e047 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e04a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1046e050 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e051 call 0x104639a0 */
  push32(0x1046e056u); f_104639a0();
  /* 1046e056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046e059:;
  /* 1046e059 pop ebp */
  EBP = (pop32());
  /* 1046e05a ret  */
  ESPCHK(0x1046dd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e060 @ 0x1046e060 (678 bytes, 180 insns) */
void f_1046e060(void) {
  FTRACE(0x1046e060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046e060 push ebp */
  push32((uint32_t)(EBP));
  /* 1046e061 mov ebp, esp */
  EBP = (ESP);
  /* 1046e063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046e066 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046e06d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046e06f mov ax, word ptr [0x1048e6e2] */
  AX = (r16((uint32_t)(0x1048e6e2)));
  /* 1046e075 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046e078 cmp dword ptr [0x1048e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e07f je 0x1046e1da */
  if (C.zf) goto L_1046e1da;
  /* 1046e085 push 0x1048e6b0 */
  push32((uint32_t)(0x1048e6b0u));
  /* 1046e08a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1046e08c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e08f push ecx */
  push32((uint32_t)(ECX));
  /* 1046e090 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e092 call 0x104710d0 */
  push32(0x1046e097u); f_104710d0();
  /* 1046e097 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e09a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e09d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1046e09f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1046e0a2 push 0x1048e6b4 */
  push32((uint32_t)(0x1048e6b4u));
  /* 1046e0a7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1046e0a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e0ac push eax */
  push32((uint32_t)(EAX));
  /* 1046e0ad push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e0af call 0x104710d0 */
  push32(0x1046e0b4u); f_104710d0();
  /* 1046e0b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e0b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e0ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e0bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e0bf push 0x1048e6b8 */
  push32((uint32_t)(0x1048e6b8u));
  /* 1046e0c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1046e0c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e0c9 push edx */
  push32((uint32_t)(EDX));
  /* 1046e0ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e0cc call 0x104710d0 */
  push32(0x1046e0d1u); f_104710d0();
  /* 1046e0d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e0d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e0d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e0d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e0dc mov edx, dword ptr [0x1048e6b8] */
  EDX = (r32((uint32_t)(0x1048e6b8)));
  /* 1046e0e2 push edx */
  push32((uint32_t)(EDX));
  /* 1046e0e3 call 0x1046e310 */
  push32(0x1046e0e8u); f_1046e310();
  /* 1046e0e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e0eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e0ef je 0x1046e149 */
  if (C.zf) goto L_1046e149;
  /* 1046e0f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e0f3 mov eax, dword ptr [0x1048e6b0] */
  EAX = (r32((uint32_t)(0x1048e6b0)));
  /* 1046e0f8 push eax */
  push32((uint32_t)(EAX));
  /* 1046e0f9 call 0x104639a0 */
  push32(0x1046e0feu); f_104639a0();
  /* 1046e0fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e101 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e103 mov ecx, dword ptr [0x1048e6b4] */
  ECX = (r32((uint32_t)(0x1048e6b4)));
  /* 1046e109 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e10a call 0x104639a0 */
  push32(0x1046e10fu); f_104639a0();
  /* 1046e10f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e112 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e114 mov edx, dword ptr [0x1048e6b8] */
  EDX = (r32((uint32_t)(0x1048e6b8)));
  /* 1046e11a push edx */
  push32((uint32_t)(EDX));
  /* 1046e11b call 0x104639a0 */
  push32(0x1046e120u); f_104639a0();
  /* 1046e120 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e123 mov dword ptr [0x1048e6b0], 0 */
  w32((uint32_t)(0x1048e6b0), (0x0u));
  /* 1046e12d mov dword ptr [0x1048e6b4], 0 */
  w32((uint32_t)(0x1048e6b4), (0x0u));
  /* 1046e137 mov dword ptr [0x1048e6b8], 0 */
  w32((uint32_t)(0x1048e6b8), (0x0u));
  /* 1046e141 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046e144 jmp 0x1046e302 */
  goto L_1046e302;
L_1046e149:;
  /* 1046e149 mov eax, dword ptr [0x1048dd88] */
  EAX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e14e cmp dword ptr [eax], 0x1048dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1048dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e154 je 0x1046e190 */
  if (C.zf) goto L_1046e190;
  /* 1046e156 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e158 mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e15e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046e160 push edx */
  push32((uint32_t)(EDX));
  /* 1046e161 call 0x104639a0 */
  push32(0x1046e166u); f_104639a0();
  /* 1046e166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e169 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e16b mov eax, dword ptr [0x1048dd88] */
  EAX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e170 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1046e173 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e174 call 0x104639a0 */
  push32(0x1046e179u); f_104639a0();
  /* 1046e179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e17c push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e17e mov edx, dword ptr [0x1048dd88] */
  EDX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e184 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1046e187 push eax */
  push32((uint32_t)(EAX));
  /* 1046e188 call 0x104639a0 */
  push32(0x1046e18du); f_104639a0();
  /* 1046e18d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046e190:;
  /* 1046e190 mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e196 mov edx, dword ptr [0x1048e6b0] */
  EDX = (r32((uint32_t)(0x1048e6b0)));
  /* 1046e19c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1046e19e mov eax, dword ptr [0x1048dd88] */
  EAX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e1a3 mov ecx, dword ptr [0x1048e6b4] */
  ECX = (r32((uint32_t)(0x1048e6b4)));
  /* 1046e1a9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1046e1ac mov edx, dword ptr [0x1048dd88] */
  EDX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e1b2 mov eax, dword ptr [0x1048e6b8] */
  EAX = (r32((uint32_t)(0x1048e6b8)));
  /* 1046e1b7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1046e1ba mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e1c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046e1c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1046e1c4 mov byte ptr [0x1048cea8], al */
  w8((uint32_t)(0x1048cea8), (AL));
  /* 1046e1c9 mov dword ptr [0x1048ceac], 1 */
  w32((uint32_t)(0x1048ceac), (0x1u));
  /* 1046e1d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046e1d5 jmp 0x1046e302 */
  goto L_1046e302;
L_1046e1da:;
  /* 1046e1da push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e1dc mov ecx, dword ptr [0x1048e6b0] */
  ECX = (r32((uint32_t)(0x1048e6b0)));
  /* 1046e1e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e1e3 call 0x104639a0 */
  push32(0x1046e1e8u); f_104639a0();
  /* 1046e1e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e1eb push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e1ed mov edx, dword ptr [0x1048e6b4] */
  EDX = (r32((uint32_t)(0x1048e6b4)));
  /* 1046e1f3 push edx */
  push32((uint32_t)(EDX));
  /* 1046e1f4 call 0x104639a0 */
  push32(0x1046e1f9u); f_104639a0();
  /* 1046e1f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e1fc push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e1fe mov eax, dword ptr [0x1048e6b8] */
  EAX = (r32((uint32_t)(0x1048e6b8)));
  /* 1046e203 push eax */
  push32((uint32_t)(EAX));
  /* 1046e204 call 0x104639a0 */
  push32(0x1046e209u); f_104639a0();
  /* 1046e209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e20c mov dword ptr [0x1048e6b0], 0 */
  w32((uint32_t)(0x1048e6b0), (0x0u));
  /* 1046e216 mov dword ptr [0x1048e6b4], 0 */
  w32((uint32_t)(0x1048e6b4), (0x0u));
  /* 1046e220 mov dword ptr [0x1048e6b8], 0 */
  w32((uint32_t)(0x1048e6b8), (0x0u));
  /* 1046e22a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1046e22f push 0x1048a07c */
  push32((uint32_t)(0x1048a07cu));
  /* 1046e234 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e236 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e238 call 0x10462f10 */
  push32(0x1046e23du); f_10462f10();
  /* 1046e23d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e240 mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e246 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1046e248 mov edx, dword ptr [0x1048dd88] */
  EDX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e24e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e251 jne 0x1046e25b */
  if (!C.zf) goto L_1046e25b;
  /* 1046e253 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046e256 jmp 0x1046e302 */
  goto L_1046e302;
L_1046e25b:;
  /* 1046e25b push 0x1048a04c */
  push32((uint32_t)(0x1048a04cu));
  /* 1046e260 mov eax, dword ptr [0x1048dd88] */
  EAX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e265 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1046e267 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e268 call 0x10465ec0 */
  push32(0x1046e26du); f_10465ec0();
  /* 1046e26d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e270 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1046e275 push 0x1048a07c */
  push32((uint32_t)(0x1048a07cu));
  /* 1046e27a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e27c push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e27e call 0x10462f10 */
  push32(0x1046e283u); f_10462f10();
  /* 1046e283 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e286 mov edx, dword ptr [0x1048dd88] */
  EDX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e28c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1046e28f mov eax, dword ptr [0x1048dd88] */
  EAX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e294 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e298 jne 0x1046e29f */
  if (!C.zf) goto L_1046e29f;
  /* 1046e29a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046e29d jmp 0x1046e302 */
  goto L_1046e302;
L_1046e29f:;
  /* 1046e29f mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e2a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1046e2a8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1046e2ab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1046e2b0 push 0x1048a07c */
  push32((uint32_t)(0x1048a07cu));
  /* 1046e2b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e2b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e2b9 call 0x10462f10 */
  push32(0x1046e2beu); f_10462f10();
  /* 1046e2be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e2c1 mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e2c7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1046e2ca mov edx, dword ptr [0x1048dd88] */
  EDX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e2d0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e2d4 jne 0x1046e2db */
  if (!C.zf) goto L_1046e2db;
  /* 1046e2d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046e2d9 jmp 0x1046e302 */
  goto L_1046e302;
L_1046e2db:;
  /* 1046e2db mov eax, dword ptr [0x1048dd88] */
  EAX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e2e0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1046e2e3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1046e2e6 mov edx, dword ptr [0x1048dd88] */
  EDX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e2ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1046e2ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1046e2f0 mov byte ptr [0x1048cea8], cl */
  w8((uint32_t)(0x1048cea8), (CL));
  /* 1046e2f6 mov dword ptr [0x1048ceac], 1 */
  w32((uint32_t)(0x1048ceac), (0x1u));
  /* 1046e300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046e302:;
  /* 1046e302 mov esp, ebp */
  ESP = (EBP);
  /* 1046e304 pop ebp */
  EBP = (pop32());
  /* 1046e305 ret  */
  ESPCHK(0x1046e060u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1046e310 (125 bytes, 49 insns) */
void f_1046e310(void) {
  FTRACE(0x1046e310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046e310 push ebp */
  push32((uint32_t)(EBP));
  /* 1046e311 mov ebp, esp */
  EBP = (ESP);
  /* 1046e313 push ecx */
  push32((uint32_t)(ECX));
L_1046e314:;
  /* 1046e314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e317 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046e31a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046e31c je 0x1046e389 */
  if (C.zf) goto L_1046e389;
  /* 1046e31e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e321 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1046e324 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e327 jl 0x1046e34d */
  if ((C.sf!=C.of)) goto L_1046e34d;
  /* 1046e329 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e32c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046e32f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e332 jg 0x1046e34d */
  if ((!C.zf&&C.sf==C.of)) goto L_1046e34d;
  /* 1046e334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e337 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046e33a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046e33d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e340 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1046e342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e345 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e348 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1046e34b jmp 0x1046e387 */
  goto L_1046e387;
L_1046e34d:;
  /* 1046e34d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e350 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046e353 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e356 jne 0x1046e37e */
  if (!C.zf) goto L_1046e37e;
  /* 1046e358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e35b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046e35e:;
  /* 1046e35e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e364 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1046e367 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1046e369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e36c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e36f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1046e372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e375 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1046e378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046e37a jne 0x1046e35e */
  if (!C.zf) goto L_1046e35e;
  /* 1046e37c jmp 0x1046e387 */
  goto L_1046e387;
L_1046e37e:;
  /* 1046e37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e381 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e384 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1046e387:;
  /* 1046e387 jmp 0x1046e314 */
  goto L_1046e314;
L_1046e389:;
  /* 1046e389 mov esp, ebp */
  ESP = (EBP);
  /* 1046e38b pop ebp */
  EBP = (pop32());
  /* 1046e38c ret  */
  ESPCHK(0x1046e310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e390 @ 0x1046e390 (304 bytes, 85 insns) */
void f_1046e390(void) {
  FTRACE(0x1046e390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046e390 push ebp */
  push32((uint32_t)(EBP));
  /* 1046e391 mov ebp, esp */
  EBP = (ESP);
  /* 1046e393 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e394 cmp dword ptr [0x1048e684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e39b je 0x1046e45c */
  if (C.zf) goto L_1046e45c;
  /* 1046e3a1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1046e3a3 push 0x1048a088 */
  push32((uint32_t)(0x1048a088u));
  /* 1046e3a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e3aa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1046e3ac push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e3ae call 0x10463320 */
  push32(0x1046e3b3u); f_10463320();
  /* 1046e3b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e3b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046e3b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e3bd jne 0x1046e3c9 */
  if (!C.zf) goto L_1046e3c9;
  /* 1046e3bf mov eax, 1 */
  EAX = (0x1u);
  /* 1046e3c4 jmp 0x1046e4bc */
  goto L_1046e4bc;
L_1046e3c9:;
  /* 1046e3c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e3cc push eax */
  push32((uint32_t)(EAX));
  /* 1046e3cd call 0x1046e4c0 */
  push32(0x1046e3d2u); f_1046e4c0();
  /* 1046e3d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e3d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046e3d7 je 0x1046e3fd */
  if (C.zf) goto L_1046e3fd;
  /* 1046e3d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e3dc push ecx */
  push32((uint32_t)(ECX));
  /* 1046e3dd call 0x1046e750 */
  push32(0x1046e3e2u); f_1046e750();
  /* 1046e3e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e3e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e3e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e3ea push edx */
  push32((uint32_t)(EDX));
  /* 1046e3eb call 0x104639a0 */
  push32(0x1046e3f0u); f_104639a0();
  /* 1046e3f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e3f3 mov eax, 1 */
  EAX = (0x1u);
  /* 1046e3f8 jmp 0x1046e4bc */
  goto L_1046e4bc;
L_1046e3fd:;
  /* 1046e3fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e400 mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e406 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046e408 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1046e40a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e40d mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e413 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1046e416 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1046e419 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e41c mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e422 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1046e425 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1046e428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e42b mov dword ptr [0x1048dd88], eax */
  w32((uint32_t)(0x1048dd88), (EAX));
  /* 1046e430 mov ecx, dword ptr [0x1048e6bc] */
  ECX = (r32((uint32_t)(0x1048e6bc)));
  /* 1046e436 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e437 call 0x1046e750 */
  push32(0x1046e43cu); f_1046e750();
  /* 1046e43c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e43f push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e441 mov edx, dword ptr [0x1048e6bc] */
  EDX = (r32((uint32_t)(0x1048e6bc)));
  /* 1046e447 push edx */
  push32((uint32_t)(EDX));
  /* 1046e448 call 0x104639a0 */
  push32(0x1046e44du); f_104639a0();
  /* 1046e44d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e450 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e453 mov dword ptr [0x1048e6bc], eax */
  w32((uint32_t)(0x1048e6bc), (EAX));
  /* 1046e458 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046e45a jmp 0x1046e4bc */
  goto L_1046e4bc;
L_1046e45c:;
  /* 1046e45c mov ecx, dword ptr [0x1048dd88] */
  ECX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e462 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046e464 mov dword ptr [0x1048dd58], edx */
  w32((uint32_t)(0x1048dd58), (EDX));
  /* 1046e46a mov eax, dword ptr [0x1048dd88] */
  EAX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e46f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1046e472 mov dword ptr [0x1048dd5c], ecx */
  w32((uint32_t)(0x1048dd5c), (ECX));
  /* 1046e478 mov edx, dword ptr [0x1048dd88] */
  EDX = (r32((uint32_t)(0x1048dd88)));
  /* 1046e47e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1046e481 mov dword ptr [0x1048dd60], eax */
  w32((uint32_t)(0x1048dd60), (EAX));
  /* 1046e486 mov dword ptr [0x1048dd88], 0x1048dd58 */
  w32((uint32_t)(0x1048dd88), (0x1048dd58u));
  /* 1046e490 mov ecx, dword ptr [0x1048e6bc] */
  ECX = (r32((uint32_t)(0x1048e6bc)));
  /* 1046e496 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e497 call 0x1046e750 */
  push32(0x1046e49cu); f_1046e750();
  /* 1046e49c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e49f push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e4a1 mov edx, dword ptr [0x1048e6bc] */
  EDX = (r32((uint32_t)(0x1048e6bc)));
  /* 1046e4a7 push edx */
  push32((uint32_t)(EDX));
  /* 1046e4a8 call 0x104639a0 */
  push32(0x1046e4adu); f_104639a0();
  /* 1046e4ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e4b0 mov dword ptr [0x1048e6bc], 0 */
  w32((uint32_t)(0x1048e6bc), (0x0u));
  /* 1046e4ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046e4bc:;
  /* 1046e4bc mov esp, ebp */
  ESP = (EBP);
  /* 1046e4be pop ebp */
  EBP = (pop32());
  /* 1046e4bf ret  */
  ESPCHK(0x1046e390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4c0 @ 0x1046e4c0 (525 bytes, 200 insns) */
void f_1046e4c0(void) {
  FTRACE(0x1046e4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046e4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046e4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1046e4c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046e4c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046e4cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046e4cf mov ax, word ptr [0x1048e6dc] */
  AX = (r16((uint32_t)(0x1048e6dc)));
  /* 1046e4d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046e4d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e4dc jne 0x1046e4e6 */
  if (!C.zf) goto L_1046e4e6;
  /* 1046e4de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046e4e1 jmp 0x1046e6c9 */
  goto L_1046e6c9;
L_1046e4e6:;
  /* 1046e4e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e4e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e4ec push ecx */
  push32((uint32_t)(ECX));
  /* 1046e4ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1046e4ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e4f2 push edx */
  push32((uint32_t)(EDX));
  /* 1046e4f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e4f5 call 0x104710d0 */
  push32(0x1046e4fau); f_104710d0();
  /* 1046e4fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e4fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e500 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e502 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e508 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e50b push edx */
  push32((uint32_t)(EDX));
  /* 1046e50c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1046e50e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e511 push eax */
  push32((uint32_t)(EAX));
  /* 1046e512 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e514 call 0x104710d0 */
  push32(0x1046e519u); f_104710d0();
  /* 1046e519 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e51c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e51f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e521 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e527 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e52a push edx */
  push32((uint32_t)(EDX));
  /* 1046e52b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1046e52d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e530 push eax */
  push32((uint32_t)(EAX));
  /* 1046e531 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e533 call 0x104710d0 */
  push32(0x1046e538u); f_104710d0();
  /* 1046e538 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e53b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e53e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e540 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e543 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e546 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e549 push edx */
  push32((uint32_t)(EDX));
  /* 1046e54a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1046e54c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e54f push eax */
  push32((uint32_t)(EAX));
  /* 1046e550 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e552 call 0x104710d0 */
  push32(0x1046e557u); f_104710d0();
  /* 1046e557 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e55a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e55d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e55f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e565 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e568 push edx */
  push32((uint32_t)(EDX));
  /* 1046e569 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1046e56b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e56e push eax */
  push32((uint32_t)(EAX));
  /* 1046e56f push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e571 call 0x104710d0 */
  push32(0x1046e576u); f_104710d0();
  /* 1046e576 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e57c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e57e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e584 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1046e587 push eax */
  push32((uint32_t)(EAX));
  /* 1046e588 call 0x1046e6d0 */
  push32(0x1046e58du); f_1046e6d0();
  /* 1046e58d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e593 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e596 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e597 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1046e599 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e59c push edx */
  push32((uint32_t)(EDX));
  /* 1046e59d push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e59f call 0x104710d0 */
  push32(0x1046e5a4u); f_104710d0();
  /* 1046e5a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e5a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e5aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e5ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e5af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e5b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e5b5 push edx */
  push32((uint32_t)(EDX));
  /* 1046e5b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1046e5b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e5bb push eax */
  push32((uint32_t)(EAX));
  /* 1046e5bc push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e5be call 0x104710d0 */
  push32(0x1046e5c3u); f_104710d0();
  /* 1046e5c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e5c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e5c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e5cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e5ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e5d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e5d4 push edx */
  push32((uint32_t)(EDX));
  /* 1046e5d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1046e5d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e5da push eax */
  push32((uint32_t)(EAX));
  /* 1046e5db push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e5dd call 0x104710d0 */
  push32(0x1046e5e2u); f_104710d0();
  /* 1046e5e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e5e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e5e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e5ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e5ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e5f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e5f3 push edx */
  push32((uint32_t)(EDX));
  /* 1046e5f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1046e5f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e5f9 push eax */
  push32((uint32_t)(EAX));
  /* 1046e5fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e5fc call 0x104710d0 */
  push32(0x1046e601u); f_104710d0();
  /* 1046e601 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e604 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e607 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e609 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e60c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e60f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e612 push edx */
  push32((uint32_t)(EDX));
  /* 1046e613 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1046e615 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e618 push eax */
  push32((uint32_t)(EAX));
  /* 1046e619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e61b call 0x104710d0 */
  push32(0x1046e620u); f_104710d0();
  /* 1046e620 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e623 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e626 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e628 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e62b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e62e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e631 push edx */
  push32((uint32_t)(EDX));
  /* 1046e632 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1046e634 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e637 push eax */
  push32((uint32_t)(EAX));
  /* 1046e638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e63a call 0x104710d0 */
  push32(0x1046e63fu); f_104710d0();
  /* 1046e63f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e642 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e645 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e647 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e64a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e64d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e650 push edx */
  push32((uint32_t)(EDX));
  /* 1046e651 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1046e653 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e656 push eax */
  push32((uint32_t)(EAX));
  /* 1046e657 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e659 call 0x104710d0 */
  push32(0x1046e65eu); f_104710d0();
  /* 1046e65e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e661 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e664 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e666 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e66c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e66f push edx */
  push32((uint32_t)(EDX));
  /* 1046e670 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1046e672 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e675 push eax */
  push32((uint32_t)(EAX));
  /* 1046e676 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e678 call 0x104710d0 */
  push32(0x1046e67du); f_104710d0();
  /* 1046e67d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e680 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e683 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e685 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e688 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e68b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e68e push edx */
  push32((uint32_t)(EDX));
  /* 1046e68f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1046e691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e694 push eax */
  push32((uint32_t)(EAX));
  /* 1046e695 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e697 call 0x104710d0 */
  push32(0x1046e69cu); f_104710d0();
  /* 1046e69c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e69f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e6a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e6a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e6a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e6aa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e6ad push edx */
  push32((uint32_t)(EDX));
  /* 1046e6ae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1046e6b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e6b3 push eax */
  push32((uint32_t)(EAX));
  /* 1046e6b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e6b6 call 0x104710d0 */
  push32(0x1046e6bbu); f_104710d0();
  /* 1046e6bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e6be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046e6c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e6c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046e6c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1046e6c9:;
  /* 1046e6c9 mov esp, ebp */
  ESP = (EBP);
  /* 1046e6cb pop ebp */
  EBP = (pop32());
  /* 1046e6cc ret  */
  ESPCHK(0x1046e4c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1046e6d0 (125 bytes, 49 insns) */
void f_1046e6d0(void) {
  FTRACE(0x1046e6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046e6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046e6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1046e6d3 push ecx */
  push32((uint32_t)(ECX));
L_1046e6d4:;
  /* 1046e6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e6d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046e6da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046e6dc je 0x1046e749 */
  if (C.zf) goto L_1046e749;
  /* 1046e6de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e6e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1046e6e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e6e7 jl 0x1046e70d */
  if ((C.sf!=C.of)) goto L_1046e70d;
  /* 1046e6e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e6ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046e6ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e6f2 jg 0x1046e70d */
  if ((!C.zf&&C.sf==C.of)) goto L_1046e70d;
  /* 1046e6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e6f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046e6fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046e6fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e700 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1046e702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e705 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e708 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1046e70b jmp 0x1046e747 */
  goto L_1046e747;
L_1046e70d:;
  /* 1046e70d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e710 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046e713 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e716 jne 0x1046e73e */
  if (!C.zf) goto L_1046e73e;
  /* 1046e718 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e71b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046e71e:;
  /* 1046e71e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e724 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1046e727 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1046e729 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e72c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e72f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1046e732 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046e735 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1046e738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046e73a jne 0x1046e71e */
  if (!C.zf) goto L_1046e71e;
  /* 1046e73c jmp 0x1046e747 */
  goto L_1046e747;
L_1046e73e:;
  /* 1046e73e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e741 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e744 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1046e747:;
  /* 1046e747 jmp 0x1046e6d4 */
  goto L_1046e6d4;
L_1046e749:;
  /* 1046e749 mov esp, ebp */
  ESP = (EBP);
  /* 1046e74b pop ebp */
  EBP = (pop32());
  /* 1046e74c ret  */
  ESPCHK(0x1046e6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e750 @ 0x1046e750 (147 bytes, 52 insns) */
void f_1046e750(void) {
  FTRACE(0x1046e750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046e750 push ebp */
  push32((uint32_t)(EBP));
  /* 1046e751 mov ebp, esp */
  EBP = (ESP);
  /* 1046e753 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e757 jne 0x1046e75e */
  if (!C.zf) goto L_1046e75e;
  /* 1046e759 jmp 0x1046e7e1 */
  goto L_1046e7e1;
L_1046e75e:;
  /* 1046e75e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e761 cmp dword ptr [eax + 0xc], 0x1048e718 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1048e718u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e768 je 0x1046e7e1 */
  if (C.zf) goto L_1046e7e1;
  /* 1046e76a push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e76c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e76f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046e772 push edx */
  push32((uint32_t)(EDX));
  /* 1046e773 call 0x104639a0 */
  push32(0x1046e778u); f_104639a0();
  /* 1046e778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e77b push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e77d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e780 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1046e783 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e784 call 0x104639a0 */
  push32(0x1046e789u); f_104639a0();
  /* 1046e789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e78c push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e78e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e791 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1046e794 push eax */
  push32((uint32_t)(EAX));
  /* 1046e795 call 0x104639a0 */
  push32(0x1046e79au); f_104639a0();
  /* 1046e79a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e79d push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e79f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e7a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1046e7a5 push edx */
  push32((uint32_t)(EDX));
  /* 1046e7a6 call 0x104639a0 */
  push32(0x1046e7abu); f_104639a0();
  /* 1046e7ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e7ae push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e7b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e7b3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1046e7b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1046e7b7 call 0x104639a0 */
  push32(0x1046e7bcu); f_104639a0();
  /* 1046e7bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e7bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e7c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e7c4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1046e7c7 push eax */
  push32((uint32_t)(EAX));
  /* 1046e7c8 call 0x104639a0 */
  push32(0x1046e7cdu); f_104639a0();
  /* 1046e7cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e7d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e7d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046e7d5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1046e7d8 push edx */
  push32((uint32_t)(EDX));
  /* 1046e7d9 call 0x104639a0 */
  push32(0x1046e7deu); f_104639a0();
  /* 1046e7de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046e7e1:;
  /* 1046e7e1 pop ebp */
  EBP = (pop32());
  /* 1046e7e2 ret  */
  ESPCHK(0x1046e750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7f0 @ 0x1046e7f0 (928 bytes, 284 insns) */
void f_1046e7f0(void) {
  FTRACE(0x1046e7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046e7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046e7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1046e7f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046e7f6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1046e7fd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1046e804 cmp dword ptr [0x1048e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e80b je 0x1046eb41 */
  if (C.zf) goto L_1046eb41;
  /* 1046e811 cmp dword ptr [0x1048e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e818 jne 0x1046e840 */
  if (!C.zf) goto L_1046e840;
  /* 1046e81a push 0x1048e690 */
  push32((uint32_t)(0x1048e690u));
  /* 1046e81f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1046e824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046e826 mov ax, word ptr [0x1048e6d4] */
  AX = (r16((uint32_t)(0x1048e6d4)));
  /* 1046e82c push eax */
  push32((uint32_t)(EAX));
  /* 1046e82d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e82f call 0x104710d0 */
  push32(0x1046e834u); f_104710d0();
  /* 1046e834 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046e839 je 0x1046e840 */
  if (C.zf) goto L_1046e840;
  /* 1046e83b jmp 0x1046eb02 */
  goto L_1046eb02;
L_1046e840:;
  /* 1046e840 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1046e842 push 0x1048a094 */
  push32((uint32_t)(0x1048a094u));
  /* 1046e847 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e849 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1046e84e call 0x10462f10 */
  push32(0x1046e853u); f_10462f10();
  /* 1046e853 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e856 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1046e859 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1046e85b push 0x1048a094 */
  push32((uint32_t)(0x1048a094u));
  /* 1046e860 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e862 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1046e867 call 0x10462f10 */
  push32(0x1046e86cu); f_10462f10();
  /* 1046e86c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e86f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1046e872 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1046e874 push 0x1048a094 */
  push32((uint32_t)(0x1048a094u));
  /* 1046e879 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e87b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1046e880 call 0x10462f10 */
  push32(0x1046e885u); f_10462f10();
  /* 1046e885 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e888 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1046e88b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1046e88d push 0x1048a094 */
  push32((uint32_t)(0x1048a094u));
  /* 1046e892 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046e894 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1046e899 call 0x10462f10 */
  push32(0x1046e89eu); f_10462f10();
  /* 1046e89e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e8a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1046e8a4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e8a8 je 0x1046e8bc */
  if (C.zf) goto L_1046e8bc;
  /* 1046e8aa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e8ae je 0x1046e8bc */
  if (C.zf) goto L_1046e8bc;
  /* 1046e8b0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e8b4 je 0x1046e8bc */
  if (C.zf) goto L_1046e8bc;
  /* 1046e8b6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e8ba jne 0x1046e8c1 */
  if (!C.zf) goto L_1046e8c1;
L_1046e8bc:;
  /* 1046e8bc jmp 0x1046eb02 */
  goto L_1046eb02;
L_1046e8c1:;
  /* 1046e8c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046e8c4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1046e8c7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1046e8ce jmp 0x1046e8d9 */
  goto L_1046e8d9;
L_1046e8d0:;
  /* 1046e8d0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046e8d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e8d6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1046e8d9:;
  /* 1046e8d9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e8e0 jge 0x1046e8f5 */
  if ((C.sf==C.of)) goto L_1046e8f5;
  /* 1046e8e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046e8e5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1046e8e8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1046e8ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046e8ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e8f0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1046e8f3 jmp 0x1046e8d0 */
  goto L_1046e8d0;
L_1046e8f5:;
  /* 1046e8f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1046e8f8 push eax */
  push32((uint32_t)(EAX));
  /* 1046e8f9 mov ecx, dword ptr [0x1048e690] */
  ECX = (r32((uint32_t)(0x1048e690)));
  /* 1046e8ff push ecx */
  push32((uint32_t)(ECX));
  /* 1046e900 call dword ptr [0x1049032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049032c))), 0x1046e906u);
  /* 1046e906 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046e908 jne 0x1046e90f */
  if (!C.zf) goto L_1046e90f;
  /* 1046e90a jmp 0x1046eb02 */
  goto L_1046eb02;
L_1046e90f:;
  /* 1046e90f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e913 jbe 0x1046e91a */
  if ((C.cf||C.zf)) goto L_1046e91a;
  /* 1046e915 jmp 0x1046eb02 */
  goto L_1046eb02;
L_1046e91a:;
  /* 1046e91a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046e91d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1046e923 mov dword ptr [0x1048cea4], edx */
  w32((uint32_t)(0x1048cea4), (EDX));
  /* 1046e929 cmp dword ptr [0x1048cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e930 jle 0x1046e989 */
  if ((C.zf||C.sf!=C.of)) goto L_1046e989;
  /* 1046e932 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1046e935 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1046e938 jmp 0x1046e943 */
  goto L_1046e943;
L_1046e93a:;
  /* 1046e93a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046e93d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e940 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1046e943:;
  /* 1046e943 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046e946 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046e948 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1046e94a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046e94c je 0x1046e989 */
  if (C.zf) goto L_1046e989;
  /* 1046e94e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046e951 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046e953 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1046e956 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046e958 je 0x1046e989 */
  if (C.zf) goto L_1046e989;
  /* 1046e95a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046e95d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e95f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1046e961 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1046e964 jmp 0x1046e96f */
  goto L_1046e96f;
L_1046e966:;
  /* 1046e966 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046e969 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e96c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1046e96f:;
  /* 1046e96f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046e972 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046e974 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1046e977 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e97a jg 0x1046e987 */
  if ((!C.zf&&C.sf==C.of)) goto L_1046e987;
  /* 1046e97c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046e97f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e982 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1046e985 jmp 0x1046e966 */
  goto L_1046e966;
L_1046e987:;
  /* 1046e987 jmp 0x1046e93a */
  goto L_1046e93a;
L_1046e989:;
  /* 1046e989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e98b push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e98d push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e98f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046e992 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e995 push eax */
  push32((uint32_t)(EAX));
  /* 1046e996 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1046e99b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046e99e push ecx */
  push32((uint32_t)(ECX));
  /* 1046e99f push 1 */
  push32((uint32_t)(0x1u));
  /* 1046e9a1 call 0x1046b140 */
  push32(0x1046e9a6u); f_1046b140();
  /* 1046e9a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e9a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046e9ab jne 0x1046e9b2 */
  if (!C.zf) goto L_1046e9b2;
  /* 1046e9ad jmp 0x1046eb02 */
  goto L_1046eb02;
L_1046e9b2:;
  /* 1046e9b2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046e9b5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1046e9ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046e9bd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1046e9c0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1046e9c7 jmp 0x1046e9d2 */
  goto L_1046e9d2;
L_1046e9c9:;
  /* 1046e9c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046e9cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e9cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1046e9d2:;
  /* 1046e9d2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046e9d9 jge 0x1046e9f0 */
  if ((C.sf==C.of)) goto L_1046e9f0;
  /* 1046e9db mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046e9de mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1046e9e2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1046e9e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1046e9e8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e9eb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1046e9ee jmp 0x1046e9c9 */
  goto L_1046e9c9;
L_1046e9f0:;
  /* 1046e9f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e9f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046e9f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046e9f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046e9fa push edx */
  push32((uint32_t)(EDX));
  /* 1046e9fb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1046ea00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046ea03 push eax */
  push32((uint32_t)(EAX));
  /* 1046ea04 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046ea06 call 0x10471370 */
  push32(0x1046ea0bu); f_10471370();
  /* 1046ea0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ea0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046ea10 jne 0x1046ea17 */
  if (!C.zf) goto L_1046ea17;
  /* 1046ea12 jmp 0x1046eb02 */
  goto L_1046eb02;
L_1046ea17:;
  /* 1046ea17 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046ea1a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1046ea1f cmp dword ptr [0x1048cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ea26 jle 0x1046ea83 */
  if ((C.zf||C.sf!=C.of)) goto L_1046ea83;
  /* 1046ea28 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1046ea2b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1046ea2e jmp 0x1046ea39 */
  goto L_1046ea39;
L_1046ea30:;
  /* 1046ea30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046ea33 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ea36 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1046ea39:;
  /* 1046ea39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046ea3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1046ea3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1046ea40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046ea42 je 0x1046ea83 */
  if (C.zf) goto L_1046ea83;
  /* 1046ea44 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046ea47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046ea49 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1046ea4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046ea4e je 0x1046ea83 */
  if (C.zf) goto L_1046ea83;
  /* 1046ea50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046ea53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ea55 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1046ea57 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1046ea5a jmp 0x1046ea65 */
  goto L_1046ea65;
L_1046ea5c:;
  /* 1046ea5c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046ea5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ea62 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1046ea65:;
  /* 1046ea65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1046ea68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ea6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1046ea6d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ea70 jg 0x1046ea81 */
  if ((!C.zf&&C.sf==C.of)) goto L_1046ea81;
  /* 1046ea72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1046ea75 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046ea78 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1046ea7f jmp 0x1046ea5c */
  goto L_1046ea5c;
L_1046ea81:;
  /* 1046ea81 jmp 0x1046ea30 */
  goto L_1046ea30;
L_1046ea83:;
  /* 1046ea83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046ea86 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ea89 mov dword ptr [0x1048cc98], eax */
  w32((uint32_t)(0x1048cc98), (EAX));
  /* 1046ea8e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046ea91 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ea94 mov dword ptr [0x1048cc9c], ecx */
  w32((uint32_t)(0x1048cc9c), (ECX));
  /* 1046ea9a cmp dword ptr [0x1048e6c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046eaa1 je 0x1046eab4 */
  if (C.zf) goto L_1046eab4;
  /* 1046eaa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eaa5 mov edx, dword ptr [0x1048e6c0] */
  EDX = (r32((uint32_t)(0x1048e6c0)));
  /* 1046eaab push edx */
  push32((uint32_t)(EDX));
  /* 1046eaac call 0x104639a0 */
  push32(0x1046eab1u); f_104639a0();
  /* 1046eab1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046eab4:;
  /* 1046eab4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046eab7 mov dword ptr [0x1048e6c0], eax */
  w32((uint32_t)(0x1048e6c0), (EAX));
  /* 1046eabc cmp dword ptr [0x1048e6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046eac3 je 0x1046ead6 */
  if (C.zf) goto L_1046ead6;
  /* 1046eac5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eac7 mov ecx, dword ptr [0x1048e6c4] */
  ECX = (r32((uint32_t)(0x1048e6c4)));
  /* 1046eacd push ecx */
  push32((uint32_t)(ECX));
  /* 1046eace call 0x104639a0 */
  push32(0x1046ead3u); f_104639a0();
  /* 1046ead3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046ead6:;
  /* 1046ead6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046ead9 mov dword ptr [0x1048e6c4], edx */
  w32((uint32_t)(0x1048e6c4), (EDX));
  /* 1046eadf push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eae1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046eae4 push eax */
  push32((uint32_t)(EAX));
  /* 1046eae5 call 0x104639a0 */
  push32(0x1046eaeau); f_104639a0();
  /* 1046eaea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eaed push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eaef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046eaf2 push ecx */
  push32((uint32_t)(ECX));
  /* 1046eaf3 call 0x104639a0 */
  push32(0x1046eaf8u); f_104639a0();
  /* 1046eaf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eafb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046eafd jmp 0x1046eb8c */
  goto L_1046eb8c;
L_1046eb02:;
  /* 1046eb02 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eb04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1046eb07 push edx */
  push32((uint32_t)(EDX));
  /* 1046eb08 call 0x104639a0 */
  push32(0x1046eb0du); f_104639a0();
  /* 1046eb0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eb10 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eb12 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1046eb15 push eax */
  push32((uint32_t)(EAX));
  /* 1046eb16 call 0x104639a0 */
  push32(0x1046eb1bu); f_104639a0();
  /* 1046eb1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eb1e push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eb20 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1046eb23 push ecx */
  push32((uint32_t)(ECX));
  /* 1046eb24 call 0x104639a0 */
  push32(0x1046eb29u); f_104639a0();
  /* 1046eb29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eb2c push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eb2e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1046eb31 push edx */
  push32((uint32_t)(EDX));
  /* 1046eb32 call 0x104639a0 */
  push32(0x1046eb37u); f_104639a0();
  /* 1046eb37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eb3a mov eax, 1 */
  EAX = (0x1u);
  /* 1046eb3f jmp 0x1046eb8c */
  goto L_1046eb8c;
L_1046eb41:;
  /* 1046eb41 mov dword ptr [0x1048cc98], 0x1048cca2 */
  w32((uint32_t)(0x1048cc98), (0x1048cca2u));
  /* 1046eb4b mov dword ptr [0x1048cc9c], 0x1048cca2 */
  w32((uint32_t)(0x1048cc9c), (0x1048cca2u));
  /* 1046eb55 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eb57 mov eax, dword ptr [0x1048e6c0] */
  EAX = (r32((uint32_t)(0x1048e6c0)));
  /* 1046eb5c push eax */
  push32((uint32_t)(EAX));
  /* 1046eb5d call 0x104639a0 */
  push32(0x1046eb62u); f_104639a0();
  /* 1046eb62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eb65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1046eb67 mov ecx, dword ptr [0x1048e6c4] */
  ECX = (r32((uint32_t)(0x1048e6c4)));
  /* 1046eb6d push ecx */
  push32((uint32_t)(ECX));
  /* 1046eb6e call 0x104639a0 */
  push32(0x1046eb73u); f_104639a0();
  /* 1046eb73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eb76 mov dword ptr [0x1048e6c0], 0 */
  w32((uint32_t)(0x1048e6c0), (0x0u));
  /* 1046eb80 mov dword ptr [0x1048e6c4], 0 */
  w32((uint32_t)(0x1048e6c4), (0x0u));
  /* 1046eb8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046eb8c:;
  /* 1046eb8c mov esp, ebp */
  ESP = (EBP);
  /* 1046eb8e pop ebp */
  EBP = (pop32());
  /* 1046eb8f ret  */
  ESPCHK(0x1046e7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb90 @ 0x1046eb90 (7 bytes, 5 insns) */
void f_1046eb90(void) {
  FTRACE(0x1046eb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046eb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1046eb91 mov ebp, esp */
  EBP = (ESP);
  /* 1046eb93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046eb95 pop ebp */
  EBP = (pop32());
  /* 1046eb96 ret  */
  ESPCHK(0x1046eb90u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1046eba0 (129 bytes, 56 insns) */
void f_1046eba0(void) {
  FTRACE(0x1046eba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046eba0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1046eba4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1046eba8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1046ebae jne 0x1046ebec */
  if (!C.zf) goto L_1046ebec;
L_1046ebb0:;
  /* 1046ebb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1046ebb2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1046ebb4 jne 0x1046ebe4 */
  if (!C.zf) goto L_1046ebe4;
  /* 1046ebb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1046ebb8 je 0x1046ebe0 */
  if (C.zf) goto L_1046ebe0;
  /* 1046ebba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1046ebbd jne 0x1046ebe4 */
  if (!C.zf) goto L_1046ebe4;
  /* 1046ebbf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1046ebc1 je 0x1046ebe0 */
  if (C.zf) goto L_1046ebe0;
  /* 1046ebc3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1046ebc6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1046ebc9 jne 0x1046ebe4 */
  if (!C.zf) goto L_1046ebe4;
  /* 1046ebcb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1046ebcd je 0x1046ebe0 */
  if (C.zf) goto L_1046ebe0;
  /* 1046ebcf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1046ebd2 jne 0x1046ebe4 */
  if (!C.zf) goto L_1046ebe4;
  /* 1046ebd4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ebd7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ebda or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1046ebdc jne 0x1046ebb0 */
  if (!C.zf) goto L_1046ebb0;
  /* 1046ebde mov edi, edi */
  EDI = (EDI);
L_1046ebe0:;
  /* 1046ebe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ebe2 ret  */
  ESPCHK(0x1046eba0u, _esp0);
  ESP += 4; return;
  /* 1046ebe3 nop  */
  /* nop */
L_1046ebe4:;
  /* 1046ebe4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ebe6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1046ebe8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1046ebe9 ret  */
  ESPCHK(0x1046eba0u, _esp0);
  ESP += 4; return;
  /* 1046ebea mov edi, edi */
  EDI = (EDI);
L_1046ebec:;
  /* 1046ebec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1046ebf2 je 0x1046ec08 */
  if (C.zf) goto L_1046ec08;
  /* 1046ebf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1046ebf6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1046ebf7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1046ebf9 jne 0x1046ebe4 */
  if (!C.zf) goto L_1046ebe4;
  /* 1046ebfb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1046ebfc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1046ebfe je 0x1046ebe0 */
  if (C.zf) goto L_1046ebe0;
  /* 1046ec00 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1046ec06 je 0x1046ebb0 */
  if (C.zf) goto L_1046ebb0;
L_1046ec08:;
  /* 1046ec08 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1046ec0b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ec0e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1046ec10 jne 0x1046ebe4 */
  if (!C.zf) goto L_1046ebe4;
  /* 1046ec12 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1046ec14 je 0x1046ebe0 */
  if (C.zf) goto L_1046ebe0;
  /* 1046ec16 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1046ec19 jne 0x1046ebe4 */
  if (!C.zf) goto L_1046ebe4;
  /* 1046ec1b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1046ec1d je 0x1046ebe0 */
  if (C.zf) goto L_1046ebe0;
  /* 1046ec1f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ec22 jmp 0x1046ebb0 */
  goto L_1046ebb0;
}

/* FUN_1000ec30 @ 0x1046ec30 (62 bytes, 35 insns) */
void f_1046ec30(void) {
  FTRACE(0x1046ec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ec30 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ec31 mov ebp, esp */
  EBP = (ESP);
  /* 1046ec33 push esi */
  push32((uint32_t)(ESI));
  /* 1046ec34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ec36 push eax */
  push32((uint32_t)(EAX));
  /* 1046ec37 push eax */
  push32((uint32_t)(EAX));
  /* 1046ec38 push eax */
  push32((uint32_t)(EAX));
  /* 1046ec39 push eax */
  push32((uint32_t)(EAX));
  /* 1046ec3a push eax */
  push32((uint32_t)(EAX));
  /* 1046ec3b push eax */
  push32((uint32_t)(EAX));
  /* 1046ec3c push eax */
  push32((uint32_t)(EAX));
  /* 1046ec3d push eax */
  push32((uint32_t)(EAX));
  /* 1046ec3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ec41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1046ec44:;
  /* 1046ec44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1046ec46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1046ec48 je 0x1046ec51 */
  if (C.zf) goto L_1046ec51;
  /* 1046ec4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1046ec4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1046ec4b");
  /* 1046ec4f jmp 0x1046ec44 */
  goto L_1046ec44;
L_1046ec51:;
  /* 1046ec51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ec54 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1046ec57 nop  */
  /* nop */
L_1046ec58:;
  /* 1046ec58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1046ec59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1046ec5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1046ec5d je 0x1046ec66 */
  if (C.zf) goto L_1046ec66;
  /* 1046ec5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046ec60 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1046ec60");
  /* 1046ec64 jae 0x1046ec58 */
  if (!C.cf) goto L_1046ec58;
L_1046ec66:;
  /* 1046ec66 mov eax, ecx */
  EAX = (ECX);
  /* 1046ec68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ec6b pop esi */
  ESI = (pop32());
  /* 1046ec6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1046ec6d ret  */
  ESPCHK(0x1046ec30u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1046ec70 (56 bytes, 31 insns) */
void f_1046ec70(void) {
  FTRACE(0x1046ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ec71 mov ebp, esp */
  EBP = (ESP);
  /* 1046ec73 push edi */
  push32((uint32_t)(EDI));
  /* 1046ec74 push esi */
  push32((uint32_t)(ESI));
  /* 1046ec75 push ebx */
  push32((uint32_t)(EBX));
  /* 1046ec76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046ec79 jecxz 0x1046eca1 */
  x86_unimpl("jecxz @ 0x1046ec79");
  /* 1046ec7b mov ebx, ecx */
  EBX = (ECX);
  /* 1046ec7d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ec80 mov esi, edi */
  ESI = (EDI);
  /* 1046ec82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ec84 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1046ec86 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046ec88 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ec8a mov edi, esi */
  EDI = (ESI);
  /* 1046ec8c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ec8f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1046ec91 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1046ec94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046ec96 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1046ec99 ja 0x1046ec9f */
  if ((!C.cf&&!C.zf)) goto L_1046ec9f;
  /* 1046ec9b je 0x1046eca1 */
  if (C.zf) goto L_1046eca1;
  /* 1046ec9d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1046ec9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1046ec9f:;
  /* 1046ec9f not ecx */
  ECX = (~(ECX));
L_1046eca1:;
  /* 1046eca1 mov eax, ecx */
  EAX = (ECX);
  /* 1046eca3 pop ebx */
  EBX = (pop32());
  /* 1046eca4 pop esi */
  ESI = (pop32());
  /* 1046eca5 pop edi */
  EDI = (pop32());
  /* 1046eca6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1046eca7 ret  */
  ESPCHK(0x1046ec70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecb0 @ 0x1046ecb0 (58 bytes, 32 insns) */
void f_1046ecb0(void) {
  FTRACE(0x1046ecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ecb1 mov ebp, esp */
  EBP = (ESP);
  /* 1046ecb3 push esi */
  push32((uint32_t)(ESI));
  /* 1046ecb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ecb6 push eax */
  push32((uint32_t)(EAX));
  /* 1046ecb7 push eax */
  push32((uint32_t)(EAX));
  /* 1046ecb8 push eax */
  push32((uint32_t)(EAX));
  /* 1046ecb9 push eax */
  push32((uint32_t)(EAX));
  /* 1046ecba push eax */
  push32((uint32_t)(EAX));
  /* 1046ecbb push eax */
  push32((uint32_t)(EAX));
  /* 1046ecbc push eax */
  push32((uint32_t)(EAX));
  /* 1046ecbd push eax */
  push32((uint32_t)(EAX));
  /* 1046ecbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ecc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1046ecc4:;
  /* 1046ecc4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1046ecc6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1046ecc8 je 0x1046ecd1 */
  if (C.zf) goto L_1046ecd1;
  /* 1046ecca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1046eccb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1046eccb");
  /* 1046eccf jmp 0x1046ecc4 */
  goto L_1046ecc4;
L_1046ecd1:;
  /* 1046ecd1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1046ecd4:;
  /* 1046ecd4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1046ecd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1046ecd8 je 0x1046ece4 */
  if (C.zf) goto L_1046ece4;
  /* 1046ecda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1046ecdb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1046ecdb");
  /* 1046ecdf jae 0x1046ecd4 */
  if (!C.cf) goto L_1046ecd4;
  /* 1046ece1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1046ece4:;
  /* 1046ece4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ece7 pop esi */
  ESI = (pop32());
  /* 1046ece8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1046ece9 ret  */
  ESPCHK(0x1046ecb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecf0 @ 0x1046ecf0 (512 bytes, 147 insns) */
void f_1046ecf0(void) {
  FTRACE(0x1046ecf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ecf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ecf1 mov ebp, esp */
  EBP = (ESP);
  /* 1046ecf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ecf6 cmp dword ptr [0x1048e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ecfd jne 0x1046ed22 */
  if (!C.zf) goto L_1046ed22;
  /* 1046ecff call 0x1046f7c0 */
  push32(0x1046ed04u); f_1046f7c0();
  /* 1046ed04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046ed06 je 0x1046ed12 */
  if (C.zf) goto L_1046ed12;
  /* 1046ed08 mov eax, dword ptr [0x1049025c] */
  EAX = (r32((uint32_t)(0x1049025c)));
  /* 1046ed0d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046ed10 jmp 0x1046ed19 */
  goto L_1046ed19;
L_1046ed12:;
  /* 1046ed12 mov dword ptr [ebp - 8], 0x1046f810 */
  w32((uint32_t)(EBP + -0x8), (0x1046f810u));
L_1046ed19:;
  /* 1046ed19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046ed1c mov dword ptr [0x1048e70c], ecx */
  w32((uint32_t)(0x1048e70c), (ECX));
L_1046ed22:;
  /* 1046ed22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ed26 jne 0x1046ed32 */
  if (!C.zf) goto L_1046ed32;
  /* 1046ed28 call 0x1046f610 */
  push32(0x1046ed2du); f_1046f610();
  /* 1046ed2d jmp 0x1046edfe */
  goto L_1046edfe;
L_1046ed32:;
  /* 1046ed32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ed35 mov dword ptr [0x1048e6fc], edx */
  w32((uint32_t)(0x1048e6fc), (EDX));
  /* 1046ed3b cmp dword ptr [0x1048e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ed42 je 0x1046ed64 */
  if (C.zf) goto L_1046ed64;
  /* 1046ed44 mov eax, dword ptr [0x1048e6fc] */
  EAX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046ed49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046ed4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046ed4e je 0x1046ed64 */
  if (C.zf) goto L_1046ed64;
  /* 1046ed50 push 0x1048e6fc */
  push32((uint32_t)(0x1048e6fcu));
  /* 1046ed55 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1046ed57 push 0x1048da90 */
  push32((uint32_t)(0x1048da90u));
  /* 1046ed5c call 0x1046eef0 */
  push32(0x1046ed61u); f_1046eef0();
  /* 1046ed61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046ed64:;
  /* 1046ed64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ed67 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ed6a mov dword ptr [0x1048e700], edx */
  w32((uint32_t)(0x1048e700), (EDX));
  /* 1046ed70 cmp dword ptr [0x1048e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ed77 je 0x1046ed99 */
  if (C.zf) goto L_1046ed99;
  /* 1046ed79 mov eax, dword ptr [0x1048e700] */
  EAX = (r32((uint32_t)(0x1048e700)));
  /* 1046ed7e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046ed81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046ed83 je 0x1046ed99 */
  if (C.zf) goto L_1046ed99;
  /* 1046ed85 push 0x1048e700 */
  push32((uint32_t)(0x1048e700u));
  /* 1046ed8a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1046ed8c push 0x1048d9d8 */
  push32((uint32_t)(0x1048d9d8u));
  /* 1046ed91 call 0x1046eef0 */
  push32(0x1046ed96u); f_1046eef0();
  /* 1046ed96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046ed99:;
  /* 1046ed99 mov dword ptr [0x1048e704], 0 */
  w32((uint32_t)(0x1048e704), (0x0u));
  /* 1046eda3 cmp dword ptr [0x1048e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046edaa je 0x1046eddd */
  if (C.zf) goto L_1046eddd;
  /* 1046edac mov edx, dword ptr [0x1048e6fc] */
  EDX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046edb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1046edb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046edb7 je 0x1046eddd */
  if (C.zf) goto L_1046eddd;
  /* 1046edb9 cmp dword ptr [0x1048e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046edc0 je 0x1046edd6 */
  if (C.zf) goto L_1046edd6;
  /* 1046edc2 mov ecx, dword ptr [0x1048e700] */
  ECX = (r32((uint32_t)(0x1048e700)));
  /* 1046edc8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1046edcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046edcd je 0x1046edd6 */
  if (C.zf) goto L_1046edd6;
  /* 1046edcf call 0x1046ef80 */
  push32(0x1046edd4u); f_1046ef80();
  /* 1046edd4 jmp 0x1046eddb */
  goto L_1046eddb;
L_1046edd6:;
  /* 1046edd6 call 0x1046f370 */
  push32(0x1046eddbu); f_1046f370();
L_1046eddb:;
  /* 1046eddb jmp 0x1046edfe */
  goto L_1046edfe;
L_1046eddd:;
  /* 1046eddd cmp dword ptr [0x1048e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ede4 je 0x1046edf9 */
  if (C.zf) goto L_1046edf9;
  /* 1046ede6 mov eax, dword ptr [0x1048e700] */
  EAX = (r32((uint32_t)(0x1048e700)));
  /* 1046edeb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046edee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046edf0 je 0x1046edf9 */
  if (C.zf) goto L_1046edf9;
  /* 1046edf2 call 0x1046f510 */
  push32(0x1046edf7u); f_1046f510();
  /* 1046edf7 jmp 0x1046edfe */
  goto L_1046edfe;
L_1046edf9:;
  /* 1046edf9 call 0x1046f610 */
  push32(0x1046edfeu); f_1046f610();
L_1046edfe:;
  /* 1046edfe cmp dword ptr [0x1048e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ee05 jne 0x1046ee0e */
  if (!C.zf) goto L_1046ee0e;
  /* 1046ee07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ee09 jmp 0x1046eeec */
  goto L_1046eeec;
L_1046ee0e:;
  /* 1046ee0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ee11 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ee17 push edx */
  push32((uint32_t)(EDX));
  /* 1046ee18 call 0x1046f640 */
  push32(0x1046ee1du); f_1046f640();
  /* 1046ee1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ee20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046ee23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ee27 je 0x1046ee3c */
  if (C.zf) goto L_1046ee3c;
  /* 1046ee29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046ee2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046ee31 push eax */
  push32((uint32_t)(EAX));
  /* 1046ee32 call dword ptr [0x10490260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490260))), 0x1046ee38u);
  /* 1046ee38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046ee3a jne 0x1046ee43 */
  if (!C.zf) goto L_1046ee43;
L_1046ee3c:;
  /* 1046ee3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ee3e jmp 0x1046eeec */
  goto L_1046eeec;
L_1046ee43:;
  /* 1046ee43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046ee45 mov ecx, dword ptr [0x1048e6ec] */
  ECX = (r32((uint32_t)(0x1048e6ec)));
  /* 1046ee4b push ecx */
  push32((uint32_t)(ECX));
  /* 1046ee4c call dword ptr [0x104902e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902e4))), 0x1046ee52u);
  /* 1046ee52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046ee54 jne 0x1046ee5d */
  if (!C.zf) goto L_1046ee5d;
  /* 1046ee56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046ee58 jmp 0x1046eeec */
  goto L_1046eeec;
L_1046ee5d:;
  /* 1046ee5d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ee61 je 0x1046ee88 */
  if (C.zf) goto L_1046ee88;
  /* 1046ee63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ee66 mov ax, word ptr [0x1048e6ec] */
  AX = (r16((uint32_t)(0x1048e6ec)));
  /* 1046ee6c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1046ee6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ee72 mov dx, word ptr [0x1048e708] */
  DX = (r16((uint32_t)(0x1048e708)));
  /* 1046ee79 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1046ee7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046ee80 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1046ee84 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1046ee88:;
  /* 1046ee88 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ee8c je 0x1046eee7 */
  if (C.zf) goto L_1046eee7;
  /* 1046ee8e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1046ee90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046ee93 push edx */
  push32((uint32_t)(EDX));
  /* 1046ee94 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1046ee99 mov eax, dword ptr [0x1048e6ec] */
  EAX = (r32((uint32_t)(0x1048e6ec)));
  /* 1046ee9e push eax */
  push32((uint32_t)(EAX));
  /* 1046ee9f call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046eea5u);
  /* 1046eea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046eea7 jne 0x1046eead */
  if (!C.zf) goto L_1046eead;
  /* 1046eea9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046eeab jmp 0x1046eeec */
  goto L_1046eeec;
L_1046eead:;
  /* 1046eead push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1046eeaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046eeb2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eeb5 push ecx */
  push32((uint32_t)(ECX));
  /* 1046eeb6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1046eebb mov edx, dword ptr [0x1048e708] */
  EDX = (r32((uint32_t)(0x1048e708)));
  /* 1046eec1 push edx */
  push32((uint32_t)(EDX));
  /* 1046eec2 call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046eec8u);
  /* 1046eec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046eeca jne 0x1046eed0 */
  if (!C.zf) goto L_1046eed0;
  /* 1046eecc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046eece jmp 0x1046eeec */
  goto L_1046eeec;
L_1046eed0:;
  /* 1046eed0 push 0xa */
  push32((uint32_t)(0xau));
  /* 1046eed2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046eed5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046eeda push eax */
  push32((uint32_t)(EAX));
  /* 1046eedb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046eede push ecx */
  push32((uint32_t)(ECX));
  /* 1046eedf call 0x10465a50 */
  push32(0x1046eee4u); f_10465a50();
  /* 1046eee4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046eee7:;
  /* 1046eee7 mov eax, 1 */
  EAX = (0x1u);
L_1046eeec:;
  /* 1046eeec mov esp, ebp */
  ESP = (EBP);
  /* 1046eeee pop ebp */
  EBP = (pop32());
  /* 1046eeef ret  */
  ESPCHK(0x1046ecf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eef0 @ 0x1046eef0 (130 bytes, 47 insns) */
void f_1046eef0(void) {
  FTRACE(0x1046eef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046eef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046eef1 mov ebp, esp */
  EBP = (ESP);
  /* 1046eef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046eef6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1046eefd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1046ef04:;
  /* 1046ef04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ef07 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ef0a jg 0x1046ef6e */
  if ((!C.zf&&C.sf==C.of)) goto L_1046ef6e;
  /* 1046ef0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ef10 je 0x1046ef6e */
  if (C.zf) goto L_1046ef6e;
  /* 1046ef12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ef15 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ef18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1046ef19 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ef1b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1046ef1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046ef20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046ef23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ef26 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1046ef29 push eax */
  push32((uint32_t)(EAX));
  /* 1046ef2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046ef2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1046ef2f push edx */
  push32((uint32_t)(EDX));
  /* 1046ef30 call 0x104715e0 */
  push32(0x1046ef35u); f_104715e0();
  /* 1046ef35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ef38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046ef3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ef3f jne 0x1046ef52 */
  if (!C.zf) goto L_1046ef52;
  /* 1046ef41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046ef44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046ef47 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1046ef4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046ef4e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1046ef50 jmp 0x1046ef6c */
  goto L_1046ef6c;
L_1046ef52:;
  /* 1046ef52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ef56 jge 0x1046ef63 */
  if ((C.sf==C.of)) goto L_1046ef63;
  /* 1046ef58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046ef5b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046ef5e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1046ef61 jmp 0x1046ef6c */
  goto L_1046ef6c;
L_1046ef63:;
  /* 1046ef63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046ef66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ef69 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1046ef6c:;
  /* 1046ef6c jmp 0x1046ef04 */
  goto L_1046ef04;
L_1046ef6e:;
  /* 1046ef6e mov esp, ebp */
  ESP = (EBP);
  /* 1046ef70 pop ebp */
  EBP = (pop32());
  /* 1046ef71 ret  */
  ESPCHK(0x1046eef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x1046ef80 (186 bytes, 50 insns) */
void f_1046ef80(void) {
  FTRACE(0x1046ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 1046ef81 mov ebp, esp */
  EBP = (ESP);
  /* 1046ef83 push ecx */
  push32((uint32_t)(ECX));
  /* 1046ef84 mov eax, dword ptr [0x1048e6fc] */
  EAX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046ef89 push eax */
  push32((uint32_t)(EAX));
  /* 1046ef8a call 0x10465d40 */
  push32(0x1046ef8fu); f_10465d40();
  /* 1046ef8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ef92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046ef94 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ef97 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1046ef9a mov dword ptr [0x1048e6f8], ecx */
  w32((uint32_t)(0x1048e6f8), (ECX));
  /* 1046efa0 mov edx, dword ptr [0x1048e700] */
  EDX = (r32((uint32_t)(0x1048e700)));
  /* 1046efa6 push edx */
  push32((uint32_t)(EDX));
  /* 1046efa7 call 0x10465d40 */
  push32(0x1046efacu); f_10465d40();
  /* 1046efac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046efaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046efb1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046efb4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1046efb7 mov dword ptr [0x1048e6f0], ecx */
  w32((uint32_t)(0x1048e6f0), (ECX));
  /* 1046efbd mov dword ptr [0x1048e6ec], 0 */
  w32((uint32_t)(0x1048e6ec), (0x0u));
  /* 1046efc7 cmp dword ptr [0x1048e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046efce je 0x1046efd9 */
  if (C.zf) goto L_1046efd9;
  /* 1046efd0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1046efd7 jmp 0x1046efeb */
  goto L_1046efeb;
L_1046efd9:;
  /* 1046efd9 mov edx, dword ptr [0x1048e6fc] */
  EDX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046efdf push edx */
  push32((uint32_t)(EDX));
  /* 1046efe0 call 0x1046fa20 */
  push32(0x1046efe5u); f_1046fa20();
  /* 1046efe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046efe8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046efeb:;
  /* 1046efeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046efee mov dword ptr [0x1048e6f4], eax */
  w32((uint32_t)(0x1048e6f4), (EAX));
  /* 1046eff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046eff5 push 0x1046f040 */
  push32((uint32_t)(0x1046f040u));
  /* 1046effa call dword ptr [0x10490264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490264))), 0x1046f000u);
  /* 1046f000 mov ecx, dword ptr [0x1048e704] */
  ECX = (r32((uint32_t)(0x1048e704)));
  /* 1046f006 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1046f00c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046f00e je 0x1046f02c */
  if (C.zf) goto L_1046f02c;
  /* 1046f010 mov edx, dword ptr [0x1048e704] */
  EDX = (r32((uint32_t)(0x1048e704)));
  /* 1046f016 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1046f01c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046f01e je 0x1046f02c */
  if (C.zf) goto L_1046f02c;
  /* 1046f020 mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f025 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1046f028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f02a jne 0x1046f036 */
  if (!C.zf) goto L_1046f036;
L_1046f02c:;
  /* 1046f02c mov dword ptr [0x1048e704], 0 */
  w32((uint32_t)(0x1048e704), (0x0u));
L_1046f036:;
  /* 1046f036 mov esp, ebp */
  ESP = (EBP);
  /* 1046f038 pop ebp */
  EBP = (pop32());
  /* 1046f039 ret  */
  ESPCHK(0x1046ef80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f040 @ 0x1046f040 (804 bytes, 220 insns) */
void f_1046f040(void) {
  FTRACE(0x1046f040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f040 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f041 mov ebp, esp */
  EBP = (ESP);
  /* 1046f043 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f049 push eax */
  push32((uint32_t)(EAX));
  /* 1046f04a call 0x1046f9a0 */
  push32(0x1046f04fu); f_1046f9a0();
  /* 1046f04f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f052 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1046f055 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1046f057 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1046f05a push ecx */
  push32((uint32_t)(ECX));
  /* 1046f05b mov edx, dword ptr [0x1048e6f0] */
  EDX = (r32((uint32_t)(0x1048e6f0)));
  /* 1046f061 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046f063 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f065 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1046f06b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f071 push edx */
  push32((uint32_t)(EDX));
  /* 1046f072 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f075 push eax */
  push32((uint32_t)(EAX));
  /* 1046f076 call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046f07cu);
  /* 1046f07c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f07e jne 0x1046f094 */
  if (!C.zf) goto L_1046f094;
  /* 1046f080 mov dword ptr [0x1048e704], 0 */
  w32((uint32_t)(0x1048e704), (0x0u));
  /* 1046f08a mov eax, 1 */
  EAX = (0x1u);
  /* 1046f08f jmp 0x1046f35e */
  goto L_1046f35e;
L_1046f094:;
  /* 1046f094 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1046f097 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f098 mov edx, dword ptr [0x1048e700] */
  EDX = (r32((uint32_t)(0x1048e700)));
  /* 1046f09e push edx */
  push32((uint32_t)(EDX));
  /* 1046f09f call 0x104715e0 */
  push32(0x1046f0a4u); f_104715e0();
  /* 1046f0a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f0a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f0a9 jne 0x1046f1cf */
  if (!C.zf) goto L_1046f1cf;
  /* 1046f0af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1046f0b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1046f0b4 push eax */
  push32((uint32_t)(EAX));
  /* 1046f0b5 mov ecx, dword ptr [0x1048e6f8] */
  ECX = (r32((uint32_t)(0x1048e6f8)));
  /* 1046f0bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046f0bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f0bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1046f0c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f0cb push ecx */
  push32((uint32_t)(ECX));
  /* 1046f0cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f0cf push edx */
  push32((uint32_t)(EDX));
  /* 1046f0d0 call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046f0d6u);
  /* 1046f0d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f0d8 jne 0x1046f0ee */
  if (!C.zf) goto L_1046f0ee;
  /* 1046f0da mov dword ptr [0x1048e704], 0 */
  w32((uint32_t)(0x1048e704), (0x0u));
  /* 1046f0e4 mov eax, 1 */
  EAX = (0x1u);
  /* 1046f0e9 jmp 0x1046f35e */
  goto L_1046f35e;
L_1046f0ee:;
  /* 1046f0ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1046f0f1 push eax */
  push32((uint32_t)(EAX));
  /* 1046f0f2 mov ecx, dword ptr [0x1048e6fc] */
  ECX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f0f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f0f9 call 0x104715e0 */
  push32(0x1046f0feu); f_104715e0();
  /* 1046f0fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f103 jne 0x1046f130 */
  if (!C.zf) goto L_1046f130;
  /* 1046f105 mov edx, dword ptr [0x1048e704] */
  EDX = (r32((uint32_t)(0x1048e704)));
  /* 1046f10b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1046f111 mov dword ptr [0x1048e704], edx */
  w32((uint32_t)(0x1048e704), (EDX));
  /* 1046f117 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f11a mov dword ptr [0x1048e708], eax */
  w32((uint32_t)(0x1048e708), (EAX));
  /* 1046f11f mov ecx, dword ptr [0x1048e708] */
  ECX = (r32((uint32_t)(0x1048e708)));
  /* 1046f125 mov dword ptr [0x1048e6ec], ecx */
  w32((uint32_t)(0x1048e6ec), (ECX));
  /* 1046f12b jmp 0x1046f1cf */
  goto L_1046f1cf;
L_1046f130:;
  /* 1046f130 mov edx, dword ptr [0x1048e704] */
  EDX = (r32((uint32_t)(0x1048e704)));
  /* 1046f136 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1046f139 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046f13b jne 0x1046f1cf */
  if (!C.zf) goto L_1046f1cf;
  /* 1046f141 cmp dword ptr [0x1048e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f148 je 0x1046f19d */
  if (C.zf) goto L_1046f19d;
  /* 1046f14a mov eax, dword ptr [0x1048e6f4] */
  EAX = (r32((uint32_t)(0x1048e6f4)));
  /* 1046f14f push eax */
  push32((uint32_t)(EAX));
  /* 1046f150 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1046f153 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f154 mov edx, dword ptr [0x1048e6fc] */
  EDX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f15a push edx */
  push32((uint32_t)(EDX));
  /* 1046f15b call 0x104716b0 */
  push32(0x1046f160u); f_104716b0();
  /* 1046f160 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f165 jne 0x1046f19d */
  if (!C.zf) goto L_1046f19d;
  /* 1046f167 mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f16c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1046f16e mov dword ptr [0x1048e704], eax */
  w32((uint32_t)(0x1048e704), (EAX));
  /* 1046f173 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f176 mov dword ptr [0x1048e708], ecx */
  w32((uint32_t)(0x1048e708), (ECX));
  /* 1046f17c mov edx, dword ptr [0x1048e6fc] */
  EDX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f182 push edx */
  push32((uint32_t)(EDX));
  /* 1046f183 call 0x10465d40 */
  push32(0x1046f188u); f_10465d40();
  /* 1046f188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f18b cmp eax, dword ptr [0x1048e6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048e6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f191 jne 0x1046f19b */
  if (!C.zf) goto L_1046f19b;
  /* 1046f193 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f196 mov dword ptr [0x1048e6ec], eax */
  w32((uint32_t)(0x1048e6ec), (EAX));
L_1046f19b:;
  /* 1046f19b jmp 0x1046f1cf */
  goto L_1046f1cf;
L_1046f19d:;
  /* 1046f19d mov ecx, dword ptr [0x1048e704] */
  ECX = (r32((uint32_t)(0x1048e704)));
  /* 1046f1a3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1046f1a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046f1a8 jne 0x1046f1cf */
  if (!C.zf) goto L_1046f1cf;
  /* 1046f1aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f1ad push edx */
  push32((uint32_t)(EDX));
  /* 1046f1ae call 0x1046f6e0 */
  push32(0x1046f1b3u); f_1046f6e0();
  /* 1046f1b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f1b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f1b8 je 0x1046f1cf */
  if (C.zf) goto L_1046f1cf;
  /* 1046f1ba mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f1bf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1046f1c1 mov dword ptr [0x1048e704], eax */
  w32((uint32_t)(0x1048e704), (EAX));
  /* 1046f1c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f1c9 mov dword ptr [0x1048e708], ecx */
  w32((uint32_t)(0x1048e708), (ECX));
L_1046f1cf:;
  /* 1046f1cf mov edx, dword ptr [0x1048e704] */
  EDX = (r32((uint32_t)(0x1048e704)));
  /* 1046f1d5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1046f1db cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f1e1 je 0x1046f351 */
  if (C.zf) goto L_1046f351;
  /* 1046f1e7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1046f1e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1046f1ec push eax */
  push32((uint32_t)(EAX));
  /* 1046f1ed mov ecx, dword ptr [0x1048e6f8] */
  ECX = (r32((uint32_t)(0x1048e6f8)));
  /* 1046f1f3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046f1f5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f1f7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1046f1fd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f203 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f204 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f207 push edx */
  push32((uint32_t)(EDX));
  /* 1046f208 call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046f20eu);
  /* 1046f20e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f210 jne 0x1046f226 */
  if (!C.zf) goto L_1046f226;
  /* 1046f212 mov dword ptr [0x1048e704], 0 */
  w32((uint32_t)(0x1048e704), (0x0u));
  /* 1046f21c mov eax, 1 */
  EAX = (0x1u);
  /* 1046f221 jmp 0x1046f35e */
  goto L_1046f35e;
L_1046f226:;
  /* 1046f226 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1046f229 push eax */
  push32((uint32_t)(EAX));
  /* 1046f22a mov ecx, dword ptr [0x1048e6fc] */
  ECX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f230 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f231 call 0x104715e0 */
  push32(0x1046f236u); f_104715e0();
  /* 1046f236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f23b jne 0x1046f2f0 */
  if (!C.zf) goto L_1046f2f0;
  /* 1046f241 mov edx, dword ptr [0x1048e704] */
  EDX = (r32((uint32_t)(0x1048e704)));
  /* 1046f247 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1046f24a mov dword ptr [0x1048e704], edx */
  w32((uint32_t)(0x1048e704), (EDX));
  /* 1046f250 cmp dword ptr [0x1048e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f257 je 0x1046f27a */
  if (C.zf) goto L_1046f27a;
  /* 1046f259 mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f25e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1046f261 mov dword ptr [0x1048e704], eax */
  w32((uint32_t)(0x1048e704), (EAX));
  /* 1046f266 cmp dword ptr [0x1048e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f26d jne 0x1046f278 */
  if (!C.zf) goto L_1046f278;
  /* 1046f26f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f272 mov dword ptr [0x1048e6ec], ecx */
  w32((uint32_t)(0x1048e6ec), (ECX));
L_1046f278:;
  /* 1046f278 jmp 0x1046f2ee */
  goto L_1046f2ee;
L_1046f27a:;
  /* 1046f27a cmp dword ptr [0x1048e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f281 je 0x1046f2cf */
  if (C.zf) goto L_1046f2cf;
  /* 1046f283 mov edx, dword ptr [0x1048e6fc] */
  EDX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f289 push edx */
  push32((uint32_t)(EDX));
  /* 1046f28a call 0x10465d40 */
  push32(0x1046f28fu); f_10465d40();
  /* 1046f28f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f292 cmp eax, dword ptr [0x1048e6f4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048e6f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f298 jne 0x1046f2cf */
  if (!C.zf) goto L_1046f2cf;
  /* 1046f29a push 1 */
  push32((uint32_t)(0x1u));
  /* 1046f29c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f29f push eax */
  push32((uint32_t)(EAX));
  /* 1046f2a0 call 0x1046f730 */
  push32(0x1046f2a5u); f_1046f730();
  /* 1046f2a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f2aa je 0x1046f2cd */
  if (C.zf) goto L_1046f2cd;
  /* 1046f2ac mov ecx, dword ptr [0x1048e704] */
  ECX = (r32((uint32_t)(0x1048e704)));
  /* 1046f2b2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1046f2b5 mov dword ptr [0x1048e704], ecx */
  w32((uint32_t)(0x1048e704), (ECX));
  /* 1046f2bb cmp dword ptr [0x1048e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f2c2 jne 0x1046f2cd */
  if (!C.zf) goto L_1046f2cd;
  /* 1046f2c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f2c7 mov dword ptr [0x1048e6ec], edx */
  w32((uint32_t)(0x1048e6ec), (EDX));
L_1046f2cd:;
  /* 1046f2cd jmp 0x1046f2ee */
  goto L_1046f2ee;
L_1046f2cf:;
  /* 1046f2cf mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f2d4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1046f2d7 mov dword ptr [0x1048e704], eax */
  w32((uint32_t)(0x1048e704), (EAX));
  /* 1046f2dc cmp dword ptr [0x1048e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f2e3 jne 0x1046f2ee */
  if (!C.zf) goto L_1046f2ee;
  /* 1046f2e5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f2e8 mov dword ptr [0x1048e6ec], ecx */
  w32((uint32_t)(0x1048e6ec), (ECX));
L_1046f2ee:;
  /* 1046f2ee jmp 0x1046f351 */
  goto L_1046f351;
L_1046f2f0:;
  /* 1046f2f0 cmp dword ptr [0x1048e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f2f7 jne 0x1046f351 */
  if (!C.zf) goto L_1046f351;
  /* 1046f2f9 cmp dword ptr [0x1048e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f300 je 0x1046f351 */
  if (C.zf) goto L_1046f351;
  /* 1046f302 mov edx, dword ptr [0x1048e6f4] */
  EDX = (r32((uint32_t)(0x1048e6f4)));
  /* 1046f308 push edx */
  push32((uint32_t)(EDX));
  /* 1046f309 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1046f30c push eax */
  push32((uint32_t)(EAX));
  /* 1046f30d mov ecx, dword ptr [0x1048e6fc] */
  ECX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f313 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f314 call 0x104716b0 */
  push32(0x1046f319u); f_104716b0();
  /* 1046f319 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f31c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f31e jne 0x1046f351 */
  if (!C.zf) goto L_1046f351;
  /* 1046f320 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046f322 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f325 push edx */
  push32((uint32_t)(EDX));
  /* 1046f326 call 0x1046f730 */
  push32(0x1046f32bu); f_1046f730();
  /* 1046f32b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f32e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f330 je 0x1046f351 */
  if (C.zf) goto L_1046f351;
  /* 1046f332 mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f337 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1046f33a mov dword ptr [0x1048e704], eax */
  w32((uint32_t)(0x1048e704), (EAX));
  /* 1046f33f cmp dword ptr [0x1048e6ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f346 jne 0x1046f351 */
  if (!C.zf) goto L_1046f351;
  /* 1046f348 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f34b mov dword ptr [0x1048e6ec], ecx */
  w32((uint32_t)(0x1048e6ec), (ECX));
L_1046f351:;
  /* 1046f351 mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f356 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1046f359 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046f35b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f35d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1046f35e:;
  /* 1046f35e mov esp, ebp */
  ESP = (EBP);
  /* 1046f360 pop ebp */
  EBP = (pop32());
  /* 1046f361 ret 4 */
  ESPCHK(0x1046f040u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f370 @ 0x1046f370 (116 bytes, 33 insns) */
void f_1046f370(void) {
  FTRACE(0x1046f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f370 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f371 mov ebp, esp */
  EBP = (ESP);
  /* 1046f373 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f374 mov eax, dword ptr [0x1048e6fc] */
  EAX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f379 push eax */
  push32((uint32_t)(EAX));
  /* 1046f37a call 0x10465d40 */
  push32(0x1046f37fu); f_10465d40();
  /* 1046f37f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f382 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046f384 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f387 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1046f38a mov dword ptr [0x1048e6f8], ecx */
  w32((uint32_t)(0x1048e6f8), (ECX));
  /* 1046f390 cmp dword ptr [0x1048e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f397 je 0x1046f3a2 */
  if (C.zf) goto L_1046f3a2;
  /* 1046f399 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1046f3a0 jmp 0x1046f3b4 */
  goto L_1046f3b4;
L_1046f3a2:;
  /* 1046f3a2 mov edx, dword ptr [0x1048e6fc] */
  EDX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f3a8 push edx */
  push32((uint32_t)(EDX));
  /* 1046f3a9 call 0x1046fa20 */
  push32(0x1046f3aeu); f_1046fa20();
  /* 1046f3ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f3b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046f3b4:;
  /* 1046f3b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046f3b7 mov dword ptr [0x1048e6f4], eax */
  w32((uint32_t)(0x1048e6f4), (EAX));
  /* 1046f3bc push 1 */
  push32((uint32_t)(0x1u));
  /* 1046f3be push 0x1046f3f0 */
  push32((uint32_t)(0x1046f3f0u));
  /* 1046f3c3 call dword ptr [0x10490264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490264))), 0x1046f3c9u);
  /* 1046f3c9 mov ecx, dword ptr [0x1048e704] */
  ECX = (r32((uint32_t)(0x1048e704)));
  /* 1046f3cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1046f3d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046f3d4 jne 0x1046f3e0 */
  if (!C.zf) goto L_1046f3e0;
  /* 1046f3d6 mov dword ptr [0x1048e704], 0 */
  w32((uint32_t)(0x1048e704), (0x0u));
L_1046f3e0:;
  /* 1046f3e0 mov esp, ebp */
  ESP = (EBP);
  /* 1046f3e2 pop ebp */
  EBP = (pop32());
  /* 1046f3e3 ret  */
  ESPCHK(0x1046f370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3f0 @ 0x1046f3f0 (287 bytes, 86 insns) */
void f_1046f3f0(void) {
  FTRACE(0x1046f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1046f3f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1046f3fa call 0x1046f9a0 */
  push32(0x1046f3ffu); f_1046f9a0();
  /* 1046f3ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f402 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1046f405 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1046f407 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1046f40a push ecx */
  push32((uint32_t)(ECX));
  /* 1046f40b mov edx, dword ptr [0x1048e6f8] */
  EDX = (r32((uint32_t)(0x1048e6f8)));
  /* 1046f411 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046f413 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f415 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1046f41b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f421 push edx */
  push32((uint32_t)(EDX));
  /* 1046f422 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f425 push eax */
  push32((uint32_t)(EAX));
  /* 1046f426 call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046f42cu);
  /* 1046f42c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f42e jne 0x1046f444 */
  if (!C.zf) goto L_1046f444;
  /* 1046f430 mov dword ptr [0x1048e704], 0 */
  w32((uint32_t)(0x1048e704), (0x0u));
  /* 1046f43a mov eax, 1 */
  EAX = (0x1u);
  /* 1046f43f jmp 0x1046f509 */
  goto L_1046f509;
L_1046f444:;
  /* 1046f444 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1046f447 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f448 mov edx, dword ptr [0x1048e6fc] */
  EDX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f44e push edx */
  push32((uint32_t)(EDX));
  /* 1046f44f call 0x104715e0 */
  push32(0x1046f454u); f_104715e0();
  /* 1046f454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f457 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f459 jne 0x1046f499 */
  if (!C.zf) goto L_1046f499;
  /* 1046f45b cmp dword ptr [0x1048e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f462 jne 0x1046f476 */
  if (!C.zf) goto L_1046f476;
  /* 1046f464 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046f466 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f469 push eax */
  push32((uint32_t)(EAX));
  /* 1046f46a call 0x1046f730 */
  push32(0x1046f46fu); f_1046f730();
  /* 1046f46f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f474 je 0x1046f497 */
  if (C.zf) goto L_1046f497;
L_1046f476:;
  /* 1046f476 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f479 mov dword ptr [0x1048e708], ecx */
  w32((uint32_t)(0x1048e708), (ECX));
  /* 1046f47f mov edx, dword ptr [0x1048e708] */
  EDX = (r32((uint32_t)(0x1048e708)));
  /* 1046f485 mov dword ptr [0x1048e6ec], edx */
  w32((uint32_t)(0x1048e6ec), (EDX));
  /* 1046f48b mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f490 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1046f492 mov dword ptr [0x1048e704], eax */
  w32((uint32_t)(0x1048e704), (EAX));
L_1046f497:;
  /* 1046f497 jmp 0x1046f4fc */
  goto L_1046f4fc;
L_1046f499:;
  /* 1046f499 cmp dword ptr [0x1048e6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f4a0 jne 0x1046f4fc */
  if (!C.zf) goto L_1046f4fc;
  /* 1046f4a2 cmp dword ptr [0x1048e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f4a9 je 0x1046f4fc */
  if (C.zf) goto L_1046f4fc;
  /* 1046f4ab mov ecx, dword ptr [0x1048e6f4] */
  ECX = (r32((uint32_t)(0x1048e6f4)));
  /* 1046f4b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f4b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1046f4b5 push edx */
  push32((uint32_t)(EDX));
  /* 1046f4b6 mov eax, dword ptr [0x1048e6fc] */
  EAX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f4bb push eax */
  push32((uint32_t)(EAX));
  /* 1046f4bc call 0x104716b0 */
  push32(0x1046f4c1u); f_104716b0();
  /* 1046f4c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f4c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f4c6 jne 0x1046f4fc */
  if (!C.zf) goto L_1046f4fc;
  /* 1046f4c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046f4ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f4cd push ecx */
  push32((uint32_t)(ECX));
  /* 1046f4ce call 0x1046f730 */
  push32(0x1046f4d3u); f_1046f730();
  /* 1046f4d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f4d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f4d8 je 0x1046f4fc */
  if (C.zf) goto L_1046f4fc;
  /* 1046f4da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f4dd mov dword ptr [0x1048e708], edx */
  w32((uint32_t)(0x1048e708), (EDX));
  /* 1046f4e3 mov eax, dword ptr [0x1048e708] */
  EAX = (r32((uint32_t)(0x1048e708)));
  /* 1046f4e8 mov dword ptr [0x1048e6ec], eax */
  w32((uint32_t)(0x1048e6ec), (EAX));
  /* 1046f4ed mov ecx, dword ptr [0x1048e704] */
  ECX = (r32((uint32_t)(0x1048e704)));
  /* 1046f4f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1046f4f6 mov dword ptr [0x1048e704], ecx */
  w32((uint32_t)(0x1048e704), (ECX));
L_1046f4fc:;
  /* 1046f4fc mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f501 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1046f504 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046f506 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f508 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1046f509:;
  /* 1046f509 mov esp, ebp */
  ESP = (EBP);
  /* 1046f50b pop ebp */
  EBP = (pop32());
  /* 1046f50c ret 4 */
  ESPCHK(0x1046f3f0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f510 @ 0x1046f510 (69 bytes, 20 insns) */
void f_1046f510(void) {
  FTRACE(0x1046f510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f510 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f511 mov ebp, esp */
  EBP = (ESP);
  /* 1046f513 mov eax, dword ptr [0x1048e700] */
  EAX = (r32((uint32_t)(0x1048e700)));
  /* 1046f518 push eax */
  push32((uint32_t)(EAX));
  /* 1046f519 call 0x10465d40 */
  push32(0x1046f51eu); f_10465d40();
  /* 1046f51e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f521 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046f523 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f526 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1046f529 mov dword ptr [0x1048e6f0], ecx */
  w32((uint32_t)(0x1048e6f0), (ECX));
  /* 1046f52f push 1 */
  push32((uint32_t)(0x1u));
  /* 1046f531 push 0x1046f560 */
  push32((uint32_t)(0x1046f560u));
  /* 1046f536 call dword ptr [0x10490264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490264))), 0x1046f53cu);
  /* 1046f53c mov edx, dword ptr [0x1048e704] */
  EDX = (r32((uint32_t)(0x1048e704)));
  /* 1046f542 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1046f545 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046f547 jne 0x1046f553 */
  if (!C.zf) goto L_1046f553;
  /* 1046f549 mov dword ptr [0x1048e704], 0 */
  w32((uint32_t)(0x1048e704), (0x0u));
L_1046f553:;
  /* 1046f553 pop ebp */
  EBP = (pop32());
  /* 1046f554 ret  */
  ESPCHK(0x1046f510u, _esp0);
  ESP += 4; return;
}

