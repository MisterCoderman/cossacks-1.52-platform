#include "recomp.h"

/* FUN_10008f90 @ 0x107e8f90 (490 bytes, 165 insns) */
void f_107e8f90(void) {
  FTRACE(0x107e8f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e8f90 push ebp */
  push32((uint32_t)(EBP));
  /* 107e8f91 mov ebp, esp */
  EBP = (ESP);
  /* 107e8f93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e8f96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8f9a jne 0x107e8fad */
  if (!C.zf) goto L_107e8fad;
  /* 107e8f9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8f9f push eax */
  push32((uint32_t)(EAX));
  /* 107e8fa0 call 0x107e8de0 */
  push32(0x107e8fa5u); f_107e8de0();
  /* 107e8fa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8fa8 jmp 0x107e9176 */
  goto L_107e9176;
L_107e8fad:;
  /* 107e8fad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8fb1 jne 0x107e8fc6 */
  if (!C.zf) goto L_107e8fc6;
  /* 107e8fb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 107e8fb7 call 0x107e9180 */
  push32(0x107e8fbcu); f_107e9180();
  /* 107e8fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8fbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e8fc1 jmp 0x107e9176 */
  goto L_107e9176;
L_107e8fc6:;
  /* 107e8fc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107e8fcd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8fd1 ja 0x107e9149 */
  if ((!C.cf&&!C.zf)) goto L_107e9149;
  /* 107e8fd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e8fd9 call 0x107e8a10 */
  push32(0x107e8fdeu); f_107e8a10();
  /* 107e8fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e8fe4 push edx */
  push32((uint32_t)(EDX));
  /* 107e8fe5 call 0x107e9310 */
  push32(0x107e8feau); f_107e9310();
  /* 107e8fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e8fed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e8ff0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e8ff4 je 0x107e910c */
  if (C.zf) goto L_107e910c;
  /* 107e8ffa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e8ffd cmp eax, dword ptr [0x1080ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1080ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9003 ja 0x107e9080 */
  if ((!C.cf&&!C.zf)) goto L_107e9080;
  /* 107e9005 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e9008 push ecx */
  push32((uint32_t)(ECX));
  /* 107e9009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e900c push edx */
  push32((uint32_t)(EDX));
  /* 107e900d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e9010 push eax */
  push32((uint32_t)(EAX));
  /* 107e9011 call 0x107ea1e0 */
  push32(0x107e9016u); f_107ea1e0();
  /* 107e9016 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e901b je 0x107e9025 */
  if (C.zf) goto L_107e9025;
  /* 107e901d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9020 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107e9023 jmp 0x107e9080 */
  goto L_107e9080;
L_107e9025:;
  /* 107e9025 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e9028 push edx */
  push32((uint32_t)(EDX));
  /* 107e9029 call 0x107e99a0 */
  push32(0x107e902eu); f_107e99a0();
  /* 107e902e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9031 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e9034 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9038 je 0x107e9080 */
  if (C.zf) goto L_107e9080;
  /* 107e903a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e903d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 107e9040 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9043 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e9046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9049 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e904c jae 0x107e9056 */
  if (!C.cf) goto L_107e9056;
  /* 107e904e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9051 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107e9054 jmp 0x107e905c */
  goto L_107e905c;
L_107e9056:;
  /* 107e9056 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e9059 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_107e905c:;
  /* 107e905c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e905f push edx */
  push32((uint32_t)(EDX));
  /* 107e9060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9063 push eax */
  push32((uint32_t)(EAX));
  /* 107e9064 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9067 push ecx */
  push32((uint32_t)(ECX));
  /* 107e9068 call 0x107eb8f0 */
  push32(0x107e906du); f_107eb8f0();
  /* 107e906d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9070 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9073 push edx */
  push32((uint32_t)(EDX));
  /* 107e9074 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e9077 push eax */
  push32((uint32_t)(EAX));
  /* 107e9078 call 0x107e93d0 */
  push32(0x107e907du); f_107e93d0();
  /* 107e907d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e9080:;
  /* 107e9080 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9084 jne 0x107e9100 */
  if (!C.zf) goto L_107e9100;
  /* 107e9086 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e908a jne 0x107e9093 */
  if (!C.zf) goto L_107e9093;
  /* 107e908c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_107e9093:;
  /* 107e9093 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e9096 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9099 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 107e909c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107e909f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e90a2 push edx */
  push32((uint32_t)(EDX));
  /* 107e90a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e90a5 mov eax, dword ptr [0x10811fac] */
  EAX = (r32((uint32_t)(0x10811fac)));
  /* 107e90aa push eax */
  push32((uint32_t)(EAX));
  /* 107e90ab call dword ptr [0x1081330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081330c))), 0x107e90b1u);
  /* 107e90b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e90b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e90b8 je 0x107e9100 */
  if (C.zf) goto L_107e9100;
  /* 107e90ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e90bd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 107e90c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e90c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e90c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e90c9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e90cc jae 0x107e90d6 */
  if (!C.cf) goto L_107e90d6;
  /* 107e90ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e90d1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107e90d4 jmp 0x107e90dc */
  goto L_107e90dc;
L_107e90d6:;
  /* 107e90d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e90d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_107e90dc:;
  /* 107e90dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e90df push eax */
  push32((uint32_t)(EAX));
  /* 107e90e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e90e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e90e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e90e7 push edx */
  push32((uint32_t)(EDX));
  /* 107e90e8 call 0x107eb8f0 */
  push32(0x107e90edu); f_107eb8f0();
  /* 107e90ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e90f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e90f3 push eax */
  push32((uint32_t)(EAX));
  /* 107e90f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e90f7 push ecx */
  push32((uint32_t)(ECX));
  /* 107e90f8 call 0x107e93d0 */
  push32(0x107e90fdu); f_107e93d0();
  /* 107e90fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107e9100:;
  /* 107e9100 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e9102 call 0x107e8ab0 */
  push32(0x107e9107u); f_107e8ab0();
  /* 107e9107 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e910a jmp 0x107e9149 */
  goto L_107e9149;
L_107e910c:;
  /* 107e910c push 9 */
  push32((uint32_t)(0x9u));
  /* 107e910e call 0x107e8ab0 */
  push32(0x107e9113u); f_107e8ab0();
  /* 107e9113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9116 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e911a jne 0x107e9123 */
  if (!C.zf) goto L_107e9123;
  /* 107e911c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_107e9123:;
  /* 107e9123 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e9126 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9129 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107e912c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 107e912f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e9132 push eax */
  push32((uint32_t)(EAX));
  /* 107e9133 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9136 push ecx */
  push32((uint32_t)(ECX));
  /* 107e9137 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e9139 mov edx, dword ptr [0x10811fac] */
  EDX = (r32((uint32_t)(0x10811fac)));
  /* 107e913f push edx */
  push32((uint32_t)(EDX));
  /* 107e9140 call dword ptr [0x10813314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813314))), 0x107e9146u);
  /* 107e9146 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107e9149:;
  /* 107e9149 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e914d jne 0x107e9158 */
  if (!C.zf) goto L_107e9158;
  /* 107e914f cmp dword ptr [0x108107f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108107f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9156 jne 0x107e915d */
  if (!C.zf) goto L_107e915d;
L_107e9158:;
  /* 107e9158 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e915b jmp 0x107e9176 */
  goto L_107e9176;
L_107e915d:;
  /* 107e915d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e9160 push eax */
  push32((uint32_t)(EAX));
  /* 107e9161 call 0x107e8d50 */
  push32(0x107e9166u); f_107e8d50();
  /* 107e9166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9169 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e916b jne 0x107e9171 */
  if (!C.zf) goto L_107e9171;
  /* 107e916d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e916f jmp 0x107e9176 */
  goto L_107e9176;
L_107e9171:;
  /* 107e9171 jmp 0x107e8fc6 */
  goto L_107e8fc6;
L_107e9176:;
  /* 107e9176 mov esp, ebp */
  ESP = (EBP);
  /* 107e9178 pop ebp */
  EBP = (pop32());
  /* 107e9179 ret  */
  ESPCHK(0x107e8f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009180 @ 0x107e9180 (104 bytes, 38 insns) */
void f_107e9180(void) {
  FTRACE(0x107e9180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e9180 push ebp */
  push32((uint32_t)(EBP));
  /* 107e9181 mov ebp, esp */
  EBP = (ESP);
  /* 107e9183 push ecx */
  push32((uint32_t)(ECX));
  /* 107e9184 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9188 jne 0x107e918c */
  if (!C.zf) goto L_107e918c;
  /* 107e918a jmp 0x107e91e4 */
  goto L_107e91e4;
L_107e918c:;
  /* 107e918c push 9 */
  push32((uint32_t)(0x9u));
  /* 107e918e call 0x107e8a10 */
  push32(0x107e9193u); f_107e8a10();
  /* 107e9193 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9199 push eax */
  push32((uint32_t)(EAX));
  /* 107e919a call 0x107e9310 */
  push32(0x107e919fu); f_107e9310();
  /* 107e919f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e91a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e91a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e91a9 je 0x107e91c7 */
  if (C.zf) goto L_107e91c7;
  /* 107e91ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e91ae push ecx */
  push32((uint32_t)(ECX));
  /* 107e91af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e91b2 push edx */
  push32((uint32_t)(EDX));
  /* 107e91b3 call 0x107e93d0 */
  push32(0x107e91b8u); f_107e93d0();
  /* 107e91b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e91bb push 9 */
  push32((uint32_t)(0x9u));
  /* 107e91bd call 0x107e8ab0 */
  push32(0x107e91c2u); f_107e8ab0();
  /* 107e91c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e91c5 jmp 0x107e91e4 */
  goto L_107e91e4;
L_107e91c7:;
  /* 107e91c7 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e91c9 call 0x107e8ab0 */
  push32(0x107e91ceu); f_107e8ab0();
  /* 107e91ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e91d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e91d4 push eax */
  push32((uint32_t)(EAX));
  /* 107e91d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e91d7 mov ecx, dword ptr [0x10811fac] */
  ECX = (r32((uint32_t)(0x10811fac)));
  /* 107e91dd push ecx */
  push32((uint32_t)(ECX));
  /* 107e91de call dword ptr [0x1081339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081339c))), 0x107e91e4u);
L_107e91e4:;
  /* 107e91e4 mov esp, ebp */
  ESP = (EBP);
  /* 107e91e6 pop ebp */
  EBP = (pop32());
  /* 107e91e7 ret  */
  ESPCHK(0x107e9180u, _esp0);
  ESP += 4; return;
}

/* FUN_100091f0 @ 0x107e91f0 (116 bytes, 34 insns) */
void f_107e91f0(void) {
  FTRACE(0x107e91f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e91f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e91f1 mov ebp, esp */
  EBP = (ESP);
  /* 107e91f3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e91f4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 107e91fb push 9 */
  push32((uint32_t)(0x9u));
  /* 107e91fd call 0x107e8a10 */
  push32(0x107e9202u); f_107e8a10();
  /* 107e9202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9205 call 0x107ea900 */
  push32(0x107e920au); f_107ea900();
  /* 107e920a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e920c jge 0x107e9215 */
  if ((C.sf==C.of)) goto L_107e9215;
  /* 107e920e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_107e9215:;
  /* 107e9215 push 9 */
  push32((uint32_t)(0x9u));
  /* 107e9217 call 0x107e8ab0 */
  push32(0x107e921cu); f_107e8ab0();
  /* 107e921c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e921f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e9221 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e9223 mov eax, dword ptr [0x10811fac] */
  EAX = (r32((uint32_t)(0x10811fac)));
  /* 107e9228 push eax */
  push32((uint32_t)(EAX));
  /* 107e9229 call dword ptr [0x108133a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133a0))), 0x107e922fu);
  /* 107e922f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e9231 jne 0x107e925d */
  if (!C.zf) goto L_107e925d;
  /* 107e9233 call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107e9239u);
  /* 107e9239 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e923c jne 0x107e9256 */
  if (!C.zf) goto L_107e9256;
  /* 107e923e call 0x107ecef0 */
  push32(0x107e9243u); f_107ecef0();
  /* 107e9243 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 107e9249 call 0x107ecee0 */
  push32(0x107e924eu); f_107ecee0();
  /* 107e924e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 107e9254 jmp 0x107e925d */
  goto L_107e925d;
L_107e9256:;
  /* 107e9256 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_107e925d:;
  /* 107e925d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9260 mov esp, ebp */
  ESP = (EBP);
  /* 107e9262 pop ebp */
  EBP = (pop32());
  /* 107e9263 ret  */
  ESPCHK(0x107e91f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009270 @ 0x107e9270 (10 bytes, 5 insns) */
void f_107e9270(void) {
  FTRACE(0x107e9270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e9270 push ebp */
  push32((uint32_t)(EBP));
  /* 107e9271 mov ebp, esp */
  EBP = (ESP);
  /* 107e9273 call 0x107e91f0 */
  push32(0x107e9278u); f_107e91f0();
  /* 107e9278 pop ebp */
  EBP = (pop32());
  /* 107e9279 ret  */
  ESPCHK(0x107e9270u, _esp0);
  ESP += 4; return;
}

/* FUN_10009280 @ 0x107e9280 (10 bytes, 5 insns) */
void f_107e9280(void) {
  FTRACE(0x107e9280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e9280 push ebp */
  push32((uint32_t)(EBP));
  /* 107e9281 mov ebp, esp */
  EBP = (ESP);
  /* 107e9283 mov eax, dword ptr [0x1080ec94] */
  EAX = (r32((uint32_t)(0x1080ec94)));
  /* 107e9288 pop ebp */
  EBP = (pop32());
  /* 107e9289 ret  */
  ESPCHK(0x107e9280u, _esp0);
  ESP += 4; return;
}

/* FUN_10009290 @ 0x107e9290 (31 bytes, 11 insns) */
void f_107e9290(void) {
  FTRACE(0x107e9290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e9290 push ebp */
  push32((uint32_t)(EBP));
  /* 107e9291 mov ebp, esp */
  EBP = (ESP);
  /* 107e9293 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e929a jbe 0x107e92a0 */
  if ((C.cf||C.zf)) goto L_107e92a0;
  /* 107e929c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e929e jmp 0x107e92ad */
  goto L_107e92ad;
L_107e92a0:;
  /* 107e92a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e92a3 mov dword ptr [0x1080ec94], eax */
  w32((uint32_t)(0x1080ec94), (EAX));
  /* 107e92a8 mov eax, 1 */
  EAX = (0x1u);
L_107e92ad:;
  /* 107e92ad pop ebp */
  EBP = (pop32());
  /* 107e92ae ret  */
  ESPCHK(0x107e9290u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x107e92b0 (89 bytes, 20 insns) */
void f_107e92b0(void) {
  FTRACE(0x107e92b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e92b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e92b1 mov ebp, esp */
  EBP = (ESP);
  /* 107e92b3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 107e92b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e92ba mov eax, dword ptr [0x10811fac] */
  EAX = (r32((uint32_t)(0x10811fac)));
  /* 107e92bf push eax */
  push32((uint32_t)(EAX));
  /* 107e92c0 call dword ptr [0x1081330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081330c))), 0x107e92c6u);
  /* 107e92c6 mov dword ptr [0x10811fa8], eax */
  w32((uint32_t)(0x10811fa8), (EAX));
  /* 107e92cb cmp dword ptr [0x10811fa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10811fa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e92d2 jne 0x107e92d8 */
  if (!C.zf) goto L_107e92d8;
  /* 107e92d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e92d6 jmp 0x107e9307 */
  goto L_107e9307;
L_107e92d8:;
  /* 107e92d8 mov ecx, dword ptr [0x10811fa8] */
  ECX = (r32((uint32_t)(0x10811fa8)));
  /* 107e92de mov dword ptr [0x10811f9c], ecx */
  w32((uint32_t)(0x10811f9c), (ECX));
  /* 107e92e4 mov dword ptr [0x10811fa0], 0 */
  w32((uint32_t)(0x10811fa0), (0x0u));
  /* 107e92ee mov dword ptr [0x10811fa4], 0 */
  w32((uint32_t)(0x10811fa4), (0x0u));
  /* 107e92f8 mov dword ptr [0x10811f88], 0x10 */
  w32((uint32_t)(0x10811f88), (0x10u));
  /* 107e9302 mov eax, 1 */
  EAX = (0x1u);
L_107e9307:;
  /* 107e9307 pop ebp */
  EBP = (pop32());
  /* 107e9308 ret  */
  ESPCHK(0x107e92b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009310 @ 0x107e9310 (85 bytes, 29 insns) */
void f_107e9310(void) {
  FTRACE(0x107e9310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e9310 push ebp */
  push32((uint32_t)(EBP));
  /* 107e9311 mov ebp, esp */
  EBP = (ESP);
  /* 107e9313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9316 mov eax, dword ptr [0x10811fa4] */
  EAX = (r32((uint32_t)(0x10811fa4)));
  /* 107e931b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e931e mov ecx, dword ptr [0x10811fa8] */
  ECX = (r32((uint32_t)(0x10811fa8)));
  /* 107e9324 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9326 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107e9329 mov edx, dword ptr [0x10811fa8] */
  EDX = (r32((uint32_t)(0x10811fa8)));
  /* 107e932f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107e9332:;
  /* 107e9332 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9335 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9338 jae 0x107e935f */
  if (!C.cf) goto L_107e935f;
  /* 107e933a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e933d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9340 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9343 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e9346 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e934d jae 0x107e9354 */
  if (!C.cf) goto L_107e9354;
  /* 107e934f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9352 jmp 0x107e9361 */
  goto L_107e9361;
L_107e9354:;
  /* 107e9354 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9357 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e935a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e935d jmp 0x107e9332 */
  goto L_107e9332;
L_107e935f:;
  /* 107e935f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107e9361:;
  /* 107e9361 mov esp, ebp */
  ESP = (EBP);
  /* 107e9363 pop ebp */
  EBP = (pop32());
  /* 107e9364 ret  */
  ESPCHK(0x107e9310u, _esp0);
  ESP += 4; return;
}

/* FUN_10009370 @ 0x107e9370 (95 bytes, 33 insns) */
void f_107e9370(void) {
  FTRACE(0x107e9370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e9370 push ebp */
  push32((uint32_t)(EBP));
  /* 107e9371 mov ebp, esp */
  EBP = (ESP);
  /* 107e9373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9379 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e937c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e937f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107e9382 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9385 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 107e9388 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e938b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e9390 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9393 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e9395 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9398 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107e939b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107e939d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e939f jne 0x107e93c1 */
  if (!C.zf) goto L_107e93c1;
  /* 107e93a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e93a4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 107e93a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e93a9 jne 0x107e93c1 */
  if (!C.zf) goto L_107e93c1;
  /* 107e93ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e93ae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 107e93b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e93b6 je 0x107e93c1 */
  if (C.zf) goto L_107e93c1;
  /* 107e93b8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 107e93bf jmp 0x107e93c8 */
  goto L_107e93c8;
L_107e93c1:;
  /* 107e93c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_107e93c8:;
  /* 107e93c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e93cb mov esp, ebp */
  ESP = (EBP);
  /* 107e93cd pop ebp */
  EBP = (pop32());
  /* 107e93ce ret  */
  ESPCHK(0x107e9370u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x107e93d0 (1485 bytes, 453 insns) */
void f_107e93d0(void) {
  FTRACE(0x107e93d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e93d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e93d1 mov ebp, esp */
  EBP = (ESP);
  /* 107e93d3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e93d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e93d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e93dc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 107e93df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e93e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e93e5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e93e8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107e93eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e93ee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 107e93f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e93f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e93f7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e93fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9400 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 107e9407 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107e940a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107e940d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9410 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107e9413 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9416 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e9418 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e941b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 107e941e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9421 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9424 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 107e9427 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e942a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e942c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107e942f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9432 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 107e9435 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107e9438 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e943b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107e943e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e9440 jne 0x107e9568 */
  if (!C.zf) goto L_107e9568;
  /* 107e9446 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e9449 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107e944c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e944f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107e9452 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9456 jbe 0x107e945f */
  if ((C.cf||C.zf)) goto L_107e945f;
  /* 107e9458 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_107e945f:;
  /* 107e945f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9462 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9465 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e9468 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e946b jne 0x107e9541 */
  if (!C.zf) goto L_107e9541;
  /* 107e9471 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9475 jae 0x107e94d6 */
  if (!C.cf) goto L_107e94d6;
  /* 107e9477 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e947c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e947f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e9481 not eax */
  EAX = (~(EAX));
  /* 107e9483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9486 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9489 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 107e948d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107e948f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9492 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9495 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107e9499 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e949c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e949f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107e94a2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107e94a5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e94a8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e94ab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107e94ae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e94b1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e94b4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107e94b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e94ba jne 0x107e94d4 */
  if (!C.zf) goto L_107e94d4;
  /* 107e94bc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e94c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e94c4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e94c6 not eax */
  EAX = (~(EAX));
  /* 107e94c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e94cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e94cd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107e94cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e94d2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107e94d4:;
  /* 107e94d4 jmp 0x107e9541 */
  goto L_107e9541;
L_107e94d6:;
  /* 107e94d6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e94d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e94dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e94e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e94e3 not edx */
  EDX = (~(EDX));
  /* 107e94e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e94e8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e94eb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107e94f2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e94f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e94f7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e94fa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 107e9501 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9504 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9507 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107e950a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107e950d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9510 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9513 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107e9516 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9519 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e951c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107e9520 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e9522 jne 0x107e9541 */
  if (!C.zf) goto L_107e9541;
  /* 107e9524 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e9527 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e952a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e952f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e9531 not edx */
  EDX = (~(EDX));
  /* 107e9533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9536 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e9539 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107e953b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e953e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_107e9541:;
  /* 107e9541 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9544 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107e9547 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e954a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107e954d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107e9550 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9553 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e9556 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9559 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107e955c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107e955f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9562 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9565 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_107e9568:;
  /* 107e9568 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e956b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107e956e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9571 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107e9574 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9578 jbe 0x107e9581 */
  if ((C.cf||C.zf)) goto L_107e9581;
  /* 107e957a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_107e9581:;
  /* 107e9581 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e9584 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107e9587 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e9589 jne 0x107e96e5 */
  if (!C.zf) goto L_107e96e5;
  /* 107e958f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9592 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9595 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 107e9598 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e959b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107e959e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e95a1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 107e95a4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e95a8 jbe 0x107e95b1 */
  if ((C.cf||C.zf)) goto L_107e95b1;
  /* 107e95aa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_107e95b1:;
  /* 107e95b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e95b4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e95b7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 107e95ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e95bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107e95c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e95c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107e95c6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e95ca jbe 0x107e95d3 */
  if ((C.cf||C.zf)) goto L_107e95d3;
  /* 107e95cc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_107e95d3:;
  /* 107e95d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107e95d6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e95d9 je 0x107e96df */
  if (C.zf) goto L_107e96df;
  /* 107e95df mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e95e2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e95e5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e95e8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e95eb jne 0x107e96c1 */
  if (!C.zf) goto L_107e96c1;
  /* 107e95f1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e95f5 jae 0x107e9656 */
  if (!C.cf) goto L_107e9656;
  /* 107e95f7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e95fc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107e95ff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e9601 not edx */
  EDX = (~(EDX));
  /* 107e9603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9606 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9609 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107e960d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e960f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9612 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9615 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107e9619 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e961c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e961f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107e9622 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107e9625 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9628 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e962b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107e962e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9631 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9634 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107e9638 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e963a jne 0x107e9654 */
  if (!C.zf) goto L_107e9654;
  /* 107e963c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e9641 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107e9644 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e9646 not edx */
  EDX = (~(EDX));
  /* 107e9648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e964b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e964d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107e964f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9652 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107e9654:;
  /* 107e9654 jmp 0x107e96c1 */
  goto L_107e96c1;
L_107e9656:;
  /* 107e9656 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107e9659 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e965c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e9661 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e9663 not eax */
  EAX = (~(EAX));
  /* 107e9665 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9668 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e966b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107e9672 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107e9674 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9677 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e967a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 107e9681 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9684 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9687 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107e968a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107e968d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9690 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9693 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107e9696 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9699 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e969c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107e96a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e96a2 jne 0x107e96c1 */
  if (!C.zf) goto L_107e96c1;
  /* 107e96a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107e96a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e96aa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e96af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e96b1 not eax */
  EAX = (~(EAX));
  /* 107e96b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e96b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e96b9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107e96bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e96be mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107e96c1:;
  /* 107e96c1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e96c4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107e96c7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e96ca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e96cd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107e96d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e96d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107e96d6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e96d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107e96dc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_107e96df:;
  /* 107e96df mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e96e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_107e96e5:;
  /* 107e96e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e96e8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107e96eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e96ed jne 0x107e96fb */
  if (!C.zf) goto L_107e96fb;
  /* 107e96ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107e96f2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e96f5 je 0x107e980b */
  if (C.zf) goto L_107e980b;
L_107e96fb:;
  /* 107e96fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e96fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9701 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 107e9704 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107e9707 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e970a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e970d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e9710 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107e9713 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9716 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e9719 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 107e971c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e971f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9722 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 107e9725 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9728 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e972b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e972e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107e9731 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9734 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9737 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e973a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e973d jne 0x107e980b */
  if (!C.zf) goto L_107e980b;
  /* 107e9743 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9747 jae 0x107e97a4 */
  if (!C.cf) goto L_107e97a4;
  /* 107e9749 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e974c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e974f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107e9753 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9756 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9759 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107e975c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107e975f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9762 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9765 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107e9768 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e976a jne 0x107e9782 */
  if (!C.zf) goto L_107e9782;
  /* 107e976c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e9771 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e9774 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e9776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9779 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e977b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107e977d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9780 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107e9782:;
  /* 107e9782 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e9787 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e978a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e978c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e978f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9792 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 107e9796 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107e9798 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e979b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e979e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107e97a2 jmp 0x107e980b */
  goto L_107e980b;
L_107e97a4:;
  /* 107e97a4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e97a7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e97aa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107e97ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e97b1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e97b4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107e97b7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107e97ba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e97bd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e97c0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107e97c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e97c5 jne 0x107e97e2 */
  if (!C.zf) goto L_107e97e2;
  /* 107e97c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e97ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e97cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e97d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e97d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e97d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e97da or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107e97dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e97df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_107e97e2:;
  /* 107e97e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e97e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e97e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e97ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e97ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e97f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e97f5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107e97fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107e97fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9801 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107e9804 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_107e980b:;
  /* 107e980b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e980e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9811 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107e9813 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9816 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9819 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e981c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 107e981f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9822 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e9824 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9827 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e982a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107e982c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e982f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9832 jne 0x107e9999 */
  if (!C.zf) goto L_107e9999;
  /* 107e9838 cmp dword ptr [0x10811fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10811fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e983f je 0x107e9988 */
  if (C.zf) goto L_107e9988;
  /* 107e9845 mov eax, dword ptr [0x10811f98] */
  EAX = (r32((uint32_t)(0x10811f98)));
  /* 107e984a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 107e984d mov ecx, dword ptr [0x10811fa0] */
  ECX = (r32((uint32_t)(0x10811fa0)));
  /* 107e9853 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107e9856 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9858 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107e985b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 107e9860 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107e9865 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9868 push eax */
  push32((uint32_t)(EAX));
  /* 107e9869 call dword ptr [0x10813328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813328))), 0x107e986fu);
  /* 107e986f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e9874 mov ecx, dword ptr [0x10811f98] */
  ECX = (r32((uint32_t)(0x10811f98)));
  /* 107e987a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e987c mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107e9881 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107e9884 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107e9886 mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107e988c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107e988f mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107e9894 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e9897 mov edx, dword ptr [0x10811f98] */
  EDX = (r32((uint32_t)(0x10811f98)));
  /* 107e989d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 107e98a8 mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107e98ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e98b0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 107e98b3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107e98b6 mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107e98bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e98be mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 107e98c1 mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107e98c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e98ca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 107e98ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e98d0 jne 0x107e98e6 */
  if (!C.zf) goto L_107e98e6;
  /* 107e98d2 mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107e98d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107e98db and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 107e98dd mov ecx, dword ptr [0x10811fa0] */
  ECX = (r32((uint32_t)(0x10811fa0)));
  /* 107e98e3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_107e98e6:;
  /* 107e98e6 mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107e98ec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e98f0 jne 0x107e9988 */
  if (!C.zf) goto L_107e9988;
  /* 107e98f6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107e98fb push 0 */
  push32((uint32_t)(0x0u));
  /* 107e98fd mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107e9902 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107e9905 push ecx */
  push32((uint32_t)(ECX));
  /* 107e9906 call dword ptr [0x10813328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813328))), 0x107e990cu);
  /* 107e990c mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107e9912 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107e9915 push eax */
  push32((uint32_t)(EAX));
  /* 107e9916 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e9918 mov ecx, dword ptr [0x10811fac] */
  ECX = (r32((uint32_t)(0x10811fac)));
  /* 107e991e push ecx */
  push32((uint32_t)(ECX));
  /* 107e991f call dword ptr [0x1081339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081339c))), 0x107e9925u);
  /* 107e9925 mov edx, dword ptr [0x10811fa4] */
  EDX = (r32((uint32_t)(0x10811fa4)));
  /* 107e992b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e992e mov eax, dword ptr [0x10811fa8] */
  EAX = (r32((uint32_t)(0x10811fa8)));
  /* 107e9933 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9935 mov ecx, dword ptr [0x10811fa0] */
  ECX = (r32((uint32_t)(0x10811fa0)));
  /* 107e993b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e993e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9940 push eax */
  push32((uint32_t)(EAX));
  /* 107e9941 mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107e9947 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e994a push edx */
  push32((uint32_t)(EDX));
  /* 107e994b mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107e9950 push eax */
  push32((uint32_t)(EAX));
  /* 107e9951 call 0x107ecf00 */
  push32(0x107e9956u); f_107ecf00();
  /* 107e9956 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9959 mov ecx, dword ptr [0x10811fa4] */
  ECX = (r32((uint32_t)(0x10811fa4)));
  /* 107e995f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9962 mov dword ptr [0x10811fa4], ecx */
  w32((uint32_t)(0x10811fa4), (ECX));
  /* 107e9968 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e996b cmp edx, dword ptr [0x10811fa0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10811fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9971 jbe 0x107e997c */
  if ((C.cf||C.zf)) goto L_107e997c;
  /* 107e9973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9976 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9979 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107e997c:;
  /* 107e997c mov ecx, dword ptr [0x10811fa8] */
  ECX = (r32((uint32_t)(0x10811fa8)));
  /* 107e9982 mov dword ptr [0x10811f9c], ecx */
  w32((uint32_t)(0x10811f9c), (ECX));
L_107e9988:;
  /* 107e9988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e998b mov dword ptr [0x10811fa0], edx */
  w32((uint32_t)(0x10811fa0), (EDX));
  /* 107e9991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9994 mov dword ptr [0x10811f98], eax */
  w32((uint32_t)(0x10811f98), (EAX));
L_107e9999:;
  /* 107e9999 mov esp, ebp */
  ESP = (EBP);
  /* 107e999b pop ebp */
  EBP = (pop32());
  /* 107e999c ret  */
  ESPCHK(0x107e93d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099a0 @ 0x107e99a0 (1334 bytes, 427 insns) */
void f_107e99a0(void) {
  FTRACE(0x107e99a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e99a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e99a1 mov ebp, esp */
  EBP = (ESP);
  /* 107e99a3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e99a6 push esi */
  push32((uint32_t)(ESI));
  /* 107e99a7 mov eax, dword ptr [0x10811fa4] */
  EAX = (r32((uint32_t)(0x10811fa4)));
  /* 107e99ac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e99af mov ecx, dword ptr [0x10811fa8] */
  ECX = (r32((uint32_t)(0x10811fa8)));
  /* 107e99b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e99b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107e99ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e99bd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e99c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107e99c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107e99c6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e99c9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107e99cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e99cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107e99d2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e99d6 jge 0x107e99ec */
  if ((C.sf==C.of)) goto L_107e99ec;
  /* 107e99d8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107e99db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e99de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e99e0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107e99e3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 107e99ea jmp 0x107e9a01 */
  goto L_107e9a01;
L_107e99ec:;
  /* 107e99ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107e99f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e99f6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e99f9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107e99fc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e99fe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_107e9a01:;
  /* 107e9a01 mov ecx, dword ptr [0x10811f9c] */
  ECX = (r32((uint32_t)(0x10811f9c)));
  /* 107e9a07 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_107e9a0a:;
  /* 107e9a0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a0d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9a10 jae 0x107e9a36 */
  if (!C.cf) goto L_107e9a36;
  /* 107e9a12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a15 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e9a18 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 107e9a1a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a1d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e9a20 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 107e9a23 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107e9a25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e9a27 je 0x107e9a2b */
  if (C.zf) goto L_107e9a2b;
  /* 107e9a29 jmp 0x107e9a36 */
  goto L_107e9a36;
L_107e9a2b:;
  /* 107e9a2b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a2e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9a31 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107e9a34 jmp 0x107e9a0a */
  goto L_107e9a0a;
L_107e9a36:;
  /* 107e9a36 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a39 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9a3c jne 0x107e9b1d */
  if (!C.zf) goto L_107e9b1d;
  /* 107e9a42 mov eax, dword ptr [0x10811fa8] */
  EAX = (r32((uint32_t)(0x10811fa8)));
  /* 107e9a47 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_107e9a4a:;
  /* 107e9a4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a4d cmp ecx, dword ptr [0x10811f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10811f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9a53 jae 0x107e9a79 */
  if (!C.cf) goto L_107e9a79;
  /* 107e9a55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a58 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e9a5b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 107e9a5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a60 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e9a63 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 107e9a66 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e9a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e9a6a je 0x107e9a6e */
  if (C.zf) goto L_107e9a6e;
  /* 107e9a6c jmp 0x107e9a79 */
  goto L_107e9a79;
L_107e9a6e:;
  /* 107e9a6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a71 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9a74 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107e9a77 jmp 0x107e9a4a */
  goto L_107e9a4a;
L_107e9a79:;
  /* 107e9a79 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a7c cmp ecx, dword ptr [0x10811f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10811f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9a82 jne 0x107e9b1d */
  if (!C.zf) goto L_107e9b1d;
L_107e9a88:;
  /* 107e9a88 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a8b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9a8e jae 0x107e9aa6 */
  if (!C.cf) goto L_107e9aa6;
  /* 107e9a90 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a93 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9a97 je 0x107e9a9b */
  if (C.zf) goto L_107e9a9b;
  /* 107e9a99 jmp 0x107e9aa6 */
  goto L_107e9aa6;
L_107e9a9b:;
  /* 107e9a9b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9a9e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9aa1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107e9aa4 jmp 0x107e9a88 */
  goto L_107e9a88;
L_107e9aa6:;
  /* 107e9aa6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9aa9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9aac jne 0x107e9af7 */
  if (!C.zf) goto L_107e9af7;
  /* 107e9aae mov eax, dword ptr [0x10811fa8] */
  EAX = (r32((uint32_t)(0x10811fa8)));
  /* 107e9ab3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_107e9ab6:;
  /* 107e9ab6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9ab9 cmp ecx, dword ptr [0x10811f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10811f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9abf jae 0x107e9ad7 */
  if (!C.cf) goto L_107e9ad7;
  /* 107e9ac1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9ac4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9ac8 je 0x107e9acc */
  if (C.zf) goto L_107e9acc;
  /* 107e9aca jmp 0x107e9ad7 */
  goto L_107e9ad7;
L_107e9acc:;
  /* 107e9acc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9acf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9ad2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107e9ad5 jmp 0x107e9ab6 */
  goto L_107e9ab6;
L_107e9ad7:;
  /* 107e9ad7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9ada cmp ecx, dword ptr [0x10811f9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10811f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9ae0 jne 0x107e9af7 */
  if (!C.zf) goto L_107e9af7;
  /* 107e9ae2 call 0x107e9ee0 */
  push32(0x107e9ae7u); f_107e9ee0();
  /* 107e9ae7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107e9aea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9aee jne 0x107e9af7 */
  if (!C.zf) goto L_107e9af7;
  /* 107e9af0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e9af2 jmp 0x107e9ed1 */
  goto L_107e9ed1;
L_107e9af7:;
  /* 107e9af7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9afa push edx */
  push32((uint32_t)(EDX));
  /* 107e9afb call 0x107e9ff0 */
  push32(0x107e9b00u); f_107e9ff0();
  /* 107e9b00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9b03 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9b06 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107e9b09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107e9b0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9b0e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e9b11 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9b14 jne 0x107e9b1d */
  if (!C.zf) goto L_107e9b1d;
  /* 107e9b16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e9b18 jmp 0x107e9ed1 */
  goto L_107e9ed1;
L_107e9b1d:;
  /* 107e9b1d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9b20 mov dword ptr [0x10811f9c], edx */
  w32((uint32_t)(0x10811f9c), (EDX));
  /* 107e9b26 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9b29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e9b2c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 107e9b2f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9b32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e9b34 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 107e9b37 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9b3b je 0x107e9b60 */
  if (C.zf) goto L_107e9b60;
  /* 107e9b3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9b40 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9b43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e9b46 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 107e9b4a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9b4d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9b50 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 107e9b53 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 107e9b5a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 107e9b5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107e9b5e jne 0x107e9b95 */
  if (!C.zf) goto L_107e9b95;
L_107e9b60:;
  /* 107e9b60 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_107e9b67:;
  /* 107e9b67 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9b6a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9b6d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e9b70 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 107e9b74 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9b77 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9b7a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 107e9b7d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 107e9b84 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 107e9b86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e9b88 jne 0x107e9b95 */
  if (!C.zf) goto L_107e9b95;
  /* 107e9b8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9b8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9b90 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 107e9b93 jmp 0x107e9b67 */
  goto L_107e9b67;
L_107e9b95:;
  /* 107e9b95 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9b98 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e9b9e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9ba1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 107e9ba8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107e9bab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107e9bb2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9bb5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9bb8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107e9bbb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 107e9bbf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107e9bc2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9bc6 jne 0x107e9be2 */
  if (!C.zf) goto L_107e9be2;
  /* 107e9bc8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 107e9bcf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9bd2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9bd5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107e9bd8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 107e9bdf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_107e9be2:;
  /* 107e9be2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9be6 jl 0x107e9bfb */
  if ((C.sf!=C.of)) goto L_107e9bfb;
  /* 107e9be8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107e9beb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107e9bed mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107e9bf0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e9bf3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9bf6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107e9bf9 jmp 0x107e9be2 */
  goto L_107e9be2;
L_107e9bfb:;
  /* 107e9bfb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e9bfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9c01 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 107e9c05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107e9c08 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9c0b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e9c0d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9c10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107e9c13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9c16 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 107e9c19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9c1c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107e9c1f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9c23 jle 0x107e9c2c */
  if ((C.zf||C.sf!=C.of)) goto L_107e9c2c;
  /* 107e9c25 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_107e9c2c:;
  /* 107e9c2c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e9c2f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9c32 je 0x107e9e50 */
  if (C.zf) goto L_107e9e50;
  /* 107e9c38 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9c3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9c3e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e9c41 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9c44 jne 0x107e9d1a */
  if (!C.zf) goto L_107e9d1a;
  /* 107e9c4a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9c4e jge 0x107e9caf */
  if ((C.sf==C.of)) goto L_107e9caf;
  /* 107e9c50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e9c55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e9c58 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e9c5a not eax */
  EAX = (~(EAX));
  /* 107e9c5c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9c5f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9c62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 107e9c66 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107e9c68 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9c6b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9c6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107e9c72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9c75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9c78 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107e9c7b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107e9c7e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9c81 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9c84 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107e9c87 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9c8a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9c8d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107e9c91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107e9c93 jne 0x107e9cad */
  if (!C.zf) goto L_107e9cad;
  /* 107e9c95 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e9c9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e9c9d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e9c9f not eax */
  EAX = (~(EAX));
  /* 107e9ca1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9ca4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e9ca6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107e9ca8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9cab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107e9cad:;
  /* 107e9cad jmp 0x107e9d1a */
  goto L_107e9d1a;
L_107e9caf:;
  /* 107e9caf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e9cb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9cb5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e9cba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e9cbc not edx */
  EDX = (~(EDX));
  /* 107e9cbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9cc1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9cc4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107e9ccb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e9ccd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9cd0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9cd3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 107e9cda mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9cdd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9ce0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107e9ce3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107e9ce6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9ce9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9cec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107e9cef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9cf2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9cf5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107e9cf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e9cfb jne 0x107e9d1a */
  if (!C.zf) goto L_107e9d1a;
  /* 107e9cfd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107e9d00 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9d03 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e9d08 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e9d0a not edx */
  EDX = (~(EDX));
  /* 107e9d0c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9d0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e9d12 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107e9d14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9d17 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_107e9d1a:;
  /* 107e9d1a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d1d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107e9d20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d23 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107e9d26 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107e9d29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e9d2f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d32 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107e9d35 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107e9d38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9d3c je 0x107e9e50 */
  if (C.zf) goto L_107e9e50;
  /* 107e9d42 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e9d45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9d48 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 107e9d4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107e9d4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e9d54 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e9d57 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107e9d5a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e9d60 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107e9d63 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107e9d66 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d69 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107e9d6c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e9d72 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d75 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107e9d78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9d7e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107e9d81 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9d84 jne 0x107e9e50 */
  if (!C.zf) goto L_107e9e50;
  /* 107e9d8a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9d8e jge 0x107e9dea */
  if ((C.sf==C.of)) goto L_107e9dea;
  /* 107e9d90 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9d93 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9d96 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107e9d9a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9d9d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9da0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107e9da3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107e9da5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9da8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9dab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107e9dae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e9db0 jne 0x107e9dc8 */
  if (!C.zf) goto L_107e9dc8;
  /* 107e9db2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e9db7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e9dba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e9dbc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9dbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107e9dc1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107e9dc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9dc6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107e9dc8:;
  /* 107e9dc8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e9dcd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e9dd0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e9dd2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9dd5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9dd8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107e9ddc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e9dde mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9de1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9de4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107e9de8 jmp 0x107e9e50 */
  goto L_107e9e50;
L_107e9dea:;
  /* 107e9dea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9ded add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9df0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107e9df4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9df7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9dfa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107e9dfd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107e9dff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9e02 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9e05 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107e9e08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e9e0a jne 0x107e9e27 */
  if (!C.zf) goto L_107e9e27;
  /* 107e9e0c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e9e0f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9e12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107e9e17 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107e9e19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9e1c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107e9e1f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107e9e21 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9e24 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107e9e27:;
  /* 107e9e27 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107e9e2a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9e2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107e9e32 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107e9e34 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9e37 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9e3a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107e9e41 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107e9e43 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9e46 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9e49 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_107e9e50:;
  /* 107e9e50 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9e54 je 0x107e9e6a */
  if (C.zf) goto L_107e9e6a;
  /* 107e9e56 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9e59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9e5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107e9e5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9e61 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9e64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107e9e67 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_107e9e6a:;
  /* 107e9e6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9e6d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9e70 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107e9e73 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e9e76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9e79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9e7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107e9e7e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107e9e81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9e84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9e87 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9e8a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 107e9e8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9e90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107e9e92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9e95 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107e9e97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9e9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9e9d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107e9e9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107e9ea1 jne 0x107e9ec3 */
  if (!C.zf) goto L_107e9ec3;
  /* 107e9ea3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107e9ea6 cmp eax, dword ptr [0x10811fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10811fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9eac jne 0x107e9ec3 */
  if (!C.zf) goto L_107e9ec3;
  /* 107e9eae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9eb1 cmp ecx, dword ptr [0x10811f98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10811f98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9eb7 jne 0x107e9ec3 */
  if (!C.zf) goto L_107e9ec3;
  /* 107e9eb9 mov dword ptr [0x10811fa0], 0 */
  w32((uint32_t)(0x10811fa0), (0x0u));
L_107e9ec3:;
  /* 107e9ec3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107e9ec6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107e9ec9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107e9ecb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107e9ece add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_107e9ed1:;
  /* 107e9ed1 pop esi */
  ESI = (pop32());
  /* 107e9ed2 mov esp, ebp */
  ESP = (EBP);
  /* 107e9ed4 pop ebp */
  EBP = (pop32());
  /* 107e9ed5 ret  */
  ESPCHK(0x107e99a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ee0 @ 0x107e9ee0 (271 bytes, 78 insns) */
void f_107e9ee0(void) {
  FTRACE(0x107e9ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e9ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e9ee1 mov ebp, esp */
  EBP = (ESP);
  /* 107e9ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 107e9ee4 mov eax, dword ptr [0x10811fa4] */
  EAX = (r32((uint32_t)(0x10811fa4)));
  /* 107e9ee9 cmp eax, dword ptr [0x10811f88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10811f88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9eef jne 0x107e9f3b */
  if (!C.zf) goto L_107e9f3b;
  /* 107e9ef1 mov ecx, dword ptr [0x10811f88] */
  ECX = (r32((uint32_t)(0x10811f88)));
  /* 107e9ef7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9efa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e9efd push ecx */
  push32((uint32_t)(ECX));
  /* 107e9efe mov edx, dword ptr [0x10811fa8] */
  EDX = (r32((uint32_t)(0x10811fa8)));
  /* 107e9f04 push edx */
  push32((uint32_t)(EDX));
  /* 107e9f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e9f07 mov eax, dword ptr [0x10811fac] */
  EAX = (r32((uint32_t)(0x10811fac)));
  /* 107e9f0c push eax */
  push32((uint32_t)(EAX));
  /* 107e9f0d call dword ptr [0x10813314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813314))), 0x107e9f13u);
  /* 107e9f13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107e9f16 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9f1a jne 0x107e9f23 */
  if (!C.zf) goto L_107e9f23;
  /* 107e9f1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e9f1e jmp 0x107e9feb */
  goto L_107e9feb;
L_107e9f23:;
  /* 107e9f23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9f26 mov dword ptr [0x10811fa8], ecx */
  w32((uint32_t)(0x10811fa8), (ECX));
  /* 107e9f2c mov edx, dword ptr [0x10811f88] */
  EDX = (r32((uint32_t)(0x10811f88)));
  /* 107e9f32 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9f35 mov dword ptr [0x10811f88], edx */
  w32((uint32_t)(0x10811f88), (EDX));
L_107e9f3b:;
  /* 107e9f3b mov eax, dword ptr [0x10811fa4] */
  EAX = (r32((uint32_t)(0x10811fa4)));
  /* 107e9f40 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107e9f43 mov ecx, dword ptr [0x10811fa8] */
  ECX = (r32((uint32_t)(0x10811fa8)));
  /* 107e9f49 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9f4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107e9f4e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 107e9f53 push 8 */
  push32((uint32_t)(0x8u));
  /* 107e9f55 mov edx, dword ptr [0x10811fac] */
  EDX = (r32((uint32_t)(0x10811fac)));
  /* 107e9f5b push edx */
  push32((uint32_t)(EDX));
  /* 107e9f5c call dword ptr [0x1081330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081330c))), 0x107e9f62u);
  /* 107e9f62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9f65 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 107e9f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9f6b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9f6f jne 0x107e9f75 */
  if (!C.zf) goto L_107e9f75;
  /* 107e9f71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e9f73 jmp 0x107e9feb */
  goto L_107e9feb;
L_107e9f75:;
  /* 107e9f75 push 4 */
  push32((uint32_t)(0x4u));
  /* 107e9f77 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 107e9f7c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 107e9f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 107e9f83 call dword ptr [0x10813304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813304))), 0x107e9f89u);
  /* 107e9f89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9f8c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 107e9f8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9f92 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107e9f96 jne 0x107e9fb2 */
  if (!C.zf) goto L_107e9fb2;
  /* 107e9f98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9f9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e9f9e push ecx */
  push32((uint32_t)(ECX));
  /* 107e9f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 107e9fa1 mov edx, dword ptr [0x10811fac] */
  EDX = (r32((uint32_t)(0x10811fac)));
  /* 107e9fa7 push edx */
  push32((uint32_t)(EDX));
  /* 107e9fa8 call dword ptr [0x1081339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081339c))), 0x107e9faeu);
  /* 107e9fae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107e9fb0 jmp 0x107e9feb */
  goto L_107e9feb;
L_107e9fb2:;
  /* 107e9fb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9fb5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107e9fbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9fbe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107e9fc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9fc8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 107e9fcf mov eax, dword ptr [0x10811fa4] */
  EAX = (r32((uint32_t)(0x10811fa4)));
  /* 107e9fd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107e9fd7 mov dword ptr [0x10811fa4], eax */
  w32((uint32_t)(0x10811fa4), (EAX));
  /* 107e9fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107e9fdf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107e9fe2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 107e9fe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107e9feb:;
  /* 107e9feb mov esp, ebp */
  ESP = (EBP);
  /* 107e9fed pop ebp */
  EBP = (pop32());
  /* 107e9fee ret  */
  ESPCHK(0x107e9ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ff0 @ 0x107e9ff0 (494 bytes, 149 insns) */
void f_107e9ff0(void) {
  FTRACE(0x107e9ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107e9ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 107e9ff1 mov ebp, esp */
  EBP = (ESP);
  /* 107e9ff3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107e9ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107e9ff9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107e9ffc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107e9fff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea002 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107ea005 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ea008 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_107ea00f:;
  /* 107ea00f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea013 jl 0x107ea028 */
  if ((C.sf!=C.of)) goto L_107ea028;
  /* 107ea015 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ea018 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107ea01a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107ea01d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea020 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea023 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107ea026 jmp 0x107ea00f */
  goto L_107ea00f;
L_107ea028:;
  /* 107ea028 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea02b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ea031 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea034 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 107ea03b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107ea03e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107ea045 jmp 0x107ea050 */
  goto L_107ea050;
L_107ea047:;
  /* 107ea047 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea04a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea04d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_107ea050:;
  /* 107ea050 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea054 jge 0x107ea076 */
  if ((C.sf==C.of)) goto L_107ea076;
  /* 107ea056 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea059 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ea05c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 107ea05f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107ea062 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea065 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea068 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107ea06b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea06e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea071 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 107ea074 jmp 0x107ea047 */
  goto L_107ea047;
L_107ea076:;
  /* 107ea076 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea079 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 107ea07c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea07f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ea082 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea084 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107ea087 push 4 */
  push32((uint32_t)(0x4u));
  /* 107ea089 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107ea08e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107ea093 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea096 push edx */
  push32((uint32_t)(EDX));
  /* 107ea097 call dword ptr [0x10813304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813304))), 0x107ea09du);
  /* 107ea09d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ea09f jne 0x107ea0a9 */
  if (!C.zf) goto L_107ea0a9;
  /* 107ea0a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ea0a4 jmp 0x107ea1da */
  goto L_107ea1da;
L_107ea0a9:;
  /* 107ea0a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea0ac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea0b1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107ea0b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea0b7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ea0ba jmp 0x107ea0c8 */
  goto L_107ea0c8;
L_107ea0bc:;
  /* 107ea0bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea0bf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea0c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ea0c8:;
  /* 107ea0c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea0cb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea0ce ja 0x107ea12d */
  if ((!C.cf&&!C.zf)) goto L_107ea12d;
  /* 107ea0d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea0d3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 107ea0da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea0dd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 107ea0e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea0ea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea0ed mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107ea0f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea0f3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 107ea0f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea0fc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea102 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea105 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107ea108 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea10b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea111 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea114 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107ea117 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea11a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea11f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107ea122 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ea125 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 107ea12b jmp 0x107ea0bc */
  goto L_107ea0bc;
L_107ea12d:;
  /* 107ea12d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ea130 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea136 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107ea139 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea13c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea13f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea142 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 107ea145 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea148 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107ea14b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107ea14e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea151 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea154 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107ea157 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ea15a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea15d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea160 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 107ea163 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea166 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107ea169 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107ea16c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea16f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea172 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107ea175 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea178 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea17b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 107ea183 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea186 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea189 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 107ea194 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea197 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 107ea19b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea19e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 107ea1a1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107ea1a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea1a7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 107ea1aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ea1ac jne 0x107ea1bd */
  if (!C.zf) goto L_107ea1bd;
  /* 107ea1ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea1b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ea1b4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107ea1b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea1ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107ea1bd:;
  /* 107ea1bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea1c2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea1c5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea1c7 not edx */
  EDX = (~(EDX));
  /* 107ea1c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea1cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ea1cf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea1d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea1d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107ea1d7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_107ea1da:;
  /* 107ea1da mov esp, ebp */
  ESP = (EBP);
  /* 107ea1dc pop ebp */
  EBP = (pop32());
  /* 107ea1dd ret  */
  ESPCHK(0x107e9ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1e0 @ 0x107ea1e0 (1515 bytes, 489 insns) */
void f_107ea1e0(void) {
  FTRACE(0x107ea1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ea1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ea1e1 mov ebp, esp */
  EBP = (ESP);
  /* 107ea1e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea1e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ea1e9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea1ec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 107ea1ee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107ea1f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea1f4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107ea1f7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 107ea1fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea1fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ea200 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea203 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ea206 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ea209 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 107ea20c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ea20f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea212 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ea218 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea21b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 107ea222 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107ea225 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ea228 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea22b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107ea22e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea231 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107ea233 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea236 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107ea239 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea23c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea23f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 107ea242 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea245 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107ea247 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107ea24a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ea24d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea250 jle 0x107ea506 */
  if ((C.zf||C.sf!=C.of)) goto L_107ea506;
  /* 107ea256 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea259 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ea25c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ea25e jne 0x107ea26b */
  if (!C.zf) goto L_107ea26b;
  /* 107ea260 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea263 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea266 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea269 jle 0x107ea272 */
  if ((C.zf||C.sf!=C.of)) goto L_107ea272;
L_107ea26b:;
  /* 107ea26b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ea26d jmp 0x107ea7c7 */
  goto L_107ea7c7;
L_107ea272:;
  /* 107ea272 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea275 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107ea278 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea27b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ea27e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea282 jbe 0x107ea28b */
  if ((C.cf||C.zf)) goto L_107ea28b;
  /* 107ea284 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_107ea28b:;
  /* 107ea28b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea28e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea291 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ea294 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea297 jne 0x107ea36d */
  if (!C.zf) goto L_107ea36d;
  /* 107ea29d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea2a1 jae 0x107ea302 */
  if (!C.cf) goto L_107ea302;
  /* 107ea2a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea2a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea2ab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea2ad not edx */
  EDX = (~(EDX));
  /* 107ea2af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea2b2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea2b5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107ea2b9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107ea2bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea2be mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea2c1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107ea2c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea2c8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea2cb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107ea2ce sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107ea2d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea2d4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea2d7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107ea2da mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea2dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea2e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107ea2e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ea2e6 jne 0x107ea300 */
  if (!C.zf) goto L_107ea300;
  /* 107ea2e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea2ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea2f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea2f2 not edx */
  EDX = (~(EDX));
  /* 107ea2f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea2f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ea2f9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea2fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea2fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107ea300:;
  /* 107ea300 jmp 0x107ea36d */
  goto L_107ea36d;
L_107ea302:;
  /* 107ea302 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea305 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea308 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107ea30d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107ea30f not eax */
  EAX = (~(EAX));
  /* 107ea311 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea314 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea317 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107ea31e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea320 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea323 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea326 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 107ea32d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea330 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea333 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107ea336 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107ea339 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea33c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea33f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107ea342 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea345 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea348 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107ea34c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ea34e jne 0x107ea36d */
  if (!C.zf) goto L_107ea36d;
  /* 107ea350 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea353 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea356 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107ea35b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107ea35d not eax */
  EAX = (~(EAX));
  /* 107ea35f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea362 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ea365 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107ea367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea36a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107ea36d:;
  /* 107ea36d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea370 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107ea373 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea376 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107ea379 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107ea37c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea37f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107ea382 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea385 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107ea388 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 107ea38b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea38e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea391 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea394 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107ea397 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea39b jle 0x107ea4e7 */
  if ((C.zf||C.sf!=C.of)) goto L_107ea4e7;
  /* 107ea3a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea3a4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea3a7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107ea3aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea3ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107ea3b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea3b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107ea3b6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea3ba jbe 0x107ea3c3 */
  if ((C.cf||C.zf)) goto L_107ea3c3;
  /* 107ea3bc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_107ea3c3:;
  /* 107ea3c3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea3c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ea3c9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 107ea3cc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107ea3cf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea3d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea3d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ea3d8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107ea3db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea3de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea3e1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 107ea3e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea3e7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea3ea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 107ea3ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea3f0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ea3f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea3f6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107ea3f9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea3fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea3ff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ea402 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea405 jne 0x107ea4d3 */
  if (!C.zf) goto L_107ea4d3;
  /* 107ea40b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea40f jae 0x107ea46c */
  if (!C.cf) goto L_107ea46c;
  /* 107ea411 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea414 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea417 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107ea41b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea41e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea421 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107ea424 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107ea427 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea42a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea42d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107ea430 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ea432 jne 0x107ea44a */
  if (!C.zf) goto L_107ea44a;
  /* 107ea434 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea439 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea43c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea43e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea441 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ea443 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea448 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107ea44a:;
  /* 107ea44a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107ea44f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea452 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107ea454 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea457 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea45a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 107ea45e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea460 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea463 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea466 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107ea46a jmp 0x107ea4d3 */
  goto L_107ea4d3;
L_107ea46c:;
  /* 107ea46c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea46f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea472 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107ea476 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea479 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea47c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107ea47f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107ea482 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea485 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea488 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107ea48b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ea48d jne 0x107ea4aa */
  if (!C.zf) goto L_107ea4aa;
  /* 107ea48f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea492 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea495 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea49a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea49c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea49f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107ea4a2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea4a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea4a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_107ea4aa:;
  /* 107ea4aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea4ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea4b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107ea4b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107ea4b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea4ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea4bd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107ea4c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea4c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea4c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea4cc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_107ea4d3:;
  /* 107ea4d3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea4d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea4d9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107ea4db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea4de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea4e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea4e4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_107ea4e7:;
  /* 107ea4e7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ea4ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea4ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea4f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107ea4f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ea4f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea4f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea4fb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea4fe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 107ea501 jmp 0x107ea7c2 */
  goto L_107ea7c2;
L_107ea506:;
  /* 107ea506 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ea509 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea50c jge 0x107ea7c2 */
  if ((C.sf==C.of)) goto L_107ea7c2;
  /* 107ea512 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ea515 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea518 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea51b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107ea51d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ea520 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea523 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea526 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea529 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 107ea52c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea52f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea532 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 107ea535 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea538 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea53b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ea53e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea541 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 107ea544 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea547 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107ea54a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea54e jbe 0x107ea557 */
  if ((C.cf||C.zf)) goto L_107ea557;
  /* 107ea550 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_107ea557:;
  /* 107ea557 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea55a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107ea55d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ea55f jne 0x107ea6a0 */
  if (!C.zf) goto L_107ea6a0;
  /* 107ea565 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ea568 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107ea56b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea56e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ea571 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea575 jbe 0x107ea57e */
  if ((C.cf||C.zf)) goto L_107ea57e;
  /* 107ea577 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_107ea57e:;
  /* 107ea57e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea581 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea584 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ea587 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea58a jne 0x107ea660 */
  if (!C.zf) goto L_107ea660;
  /* 107ea590 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea594 jae 0x107ea5f5 */
  if (!C.cf) goto L_107ea5f5;
  /* 107ea596 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea59b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea59e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea5a0 not edx */
  EDX = (~(EDX));
  /* 107ea5a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea5a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea5a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107ea5ac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107ea5ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea5b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea5b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107ea5b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea5bb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea5be mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107ea5c1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107ea5c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea5c7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea5ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107ea5cd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea5d0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea5d3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107ea5d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ea5d9 jne 0x107ea5f3 */
  if (!C.zf) goto L_107ea5f3;
  /* 107ea5db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea5e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea5e3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea5e5 not edx */
  EDX = (~(EDX));
  /* 107ea5e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea5ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ea5ec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea5f1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107ea5f3:;
  /* 107ea5f3 jmp 0x107ea660 */
  goto L_107ea660;
L_107ea5f5:;
  /* 107ea5f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea5f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea5fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107ea600 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107ea602 not eax */
  EAX = (~(EAX));
  /* 107ea604 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea607 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea60a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107ea611 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea616 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea619 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 107ea620 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea623 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea626 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107ea629 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107ea62c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea62f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea632 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107ea635 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea638 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea63b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107ea63f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ea641 jne 0x107ea660 */
  if (!C.zf) goto L_107ea660;
  /* 107ea643 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ea646 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea649 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107ea64e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107ea650 not eax */
  EAX = (~(EAX));
  /* 107ea652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea655 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ea658 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107ea65a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea65d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107ea660:;
  /* 107ea660 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea663 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107ea666 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea669 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107ea66c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107ea66f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea672 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107ea675 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ea678 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107ea67b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 107ea67e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea681 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea684 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ea687 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea68a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 107ea68d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea690 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107ea693 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea697 jbe 0x107ea6a0 */
  if ((C.cf||C.zf)) goto L_107ea6a0;
  /* 107ea699 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_107ea6a0:;
  /* 107ea6a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ea6a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ea6a6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 107ea6a9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107ea6ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea6af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea6b2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107ea6b5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107ea6b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea6bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea6be mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107ea6c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ea6c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea6c7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107ea6ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea6cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107ea6d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea6d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107ea6d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea6d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea6dc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107ea6df cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea6e2 jne 0x107ea7ae */
  if (!C.zf) goto L_107ea7ae;
  /* 107ea6e8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea6ec jae 0x107ea748 */
  if (!C.cf) goto L_107ea748;
  /* 107ea6ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea6f1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea6f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107ea6f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea6fb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea6fe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107ea701 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107ea703 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea706 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea709 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107ea70c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ea70e jne 0x107ea726 */
  if (!C.zf) goto L_107ea726;
  /* 107ea710 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107ea715 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ea718 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107ea71a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea71d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107ea71f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107ea721 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea724 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107ea726:;
  /* 107ea726 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea72b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ea72e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea730 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea733 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea736 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107ea73a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107ea73c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea73f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea742 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107ea746 jmp 0x107ea7ae */
  goto L_107ea7ae;
L_107ea748:;
  /* 107ea748 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea74b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea74e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107ea752 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea755 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea758 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107ea75b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107ea75d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea760 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea763 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107ea766 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ea768 jne 0x107ea785 */
  if (!C.zf) goto L_107ea785;
  /* 107ea76a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ea76d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea770 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107ea775 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107ea777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea77a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ea77d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107ea77f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ea782 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107ea785:;
  /* 107ea785 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ea788 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea78b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea790 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea795 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea798 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107ea79f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107ea7a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea7a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ea7a7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_107ea7ae:;
  /* 107ea7ae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea7b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea7b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107ea7b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ea7b9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea7bc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ea7bf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_107ea7c2:;
  /* 107ea7c2 mov eax, 1 */
  EAX = (0x1u);
L_107ea7c7:;
  /* 107ea7c7 mov esp, ebp */
  ESP = (EBP);
  /* 107ea7c9 pop ebp */
  EBP = (pop32());
  /* 107ea7ca ret  */
  ESPCHK(0x107ea1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7d0 @ 0x107ea7d0 (304 bytes, 79 insns) */
void f_107ea7d0(void) {
  FTRACE(0x107ea7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ea7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ea7d1 mov ebp, esp */
  EBP = (ESP);
  /* 107ea7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ea7d4 cmp dword ptr [0x10811fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10811fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea7db je 0x107ea8fc */
  if (C.zf) goto L_107ea8fc;
  /* 107ea7e1 mov eax, dword ptr [0x10811f98] */
  EAX = (r32((uint32_t)(0x10811f98)));
  /* 107ea7e6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 107ea7e9 mov ecx, dword ptr [0x10811fa0] */
  ECX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea7ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ea7f2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea7f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ea7f7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 107ea7fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107ea801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ea804 push eax */
  push32((uint32_t)(EAX));
  /* 107ea805 call dword ptr [0x10813328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813328))), 0x107ea80bu);
  /* 107ea80b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107ea810 mov ecx, dword ptr [0x10811f98] */
  ECX = (r32((uint32_t)(0x10811f98)));
  /* 107ea816 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107ea818 mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea81d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ea820 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107ea822 mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea828 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107ea82b mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea830 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107ea833 mov edx, dword ptr [0x10811f98] */
  EDX = (r32((uint32_t)(0x10811f98)));
  /* 107ea839 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 107ea844 mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea849 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107ea84c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 107ea84f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107ea852 mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea857 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107ea85a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 107ea85d mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea863 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107ea866 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 107ea86a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ea86c jne 0x107ea882 */
  if (!C.zf) goto L_107ea882;
  /* 107ea86e mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea874 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107ea877 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 107ea879 mov ecx, dword ptr [0x10811fa0] */
  ECX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea87f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_107ea882:;
  /* 107ea882 mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea888 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea88c jne 0x107ea8f2 */
  if (!C.zf) goto L_107ea8f2;
  /* 107ea88e cmp dword ptr [0x10811fa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10811fa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea895 jle 0x107ea8f2 */
  if ((C.zf||C.sf!=C.of)) goto L_107ea8f2;
  /* 107ea897 mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea89c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107ea89f push ecx */
  push32((uint32_t)(ECX));
  /* 107ea8a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ea8a2 mov edx, dword ptr [0x10811fac] */
  EDX = (r32((uint32_t)(0x10811fac)));
  /* 107ea8a8 push edx */
  push32((uint32_t)(EDX));
  /* 107ea8a9 call dword ptr [0x1081339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081339c))), 0x107ea8afu);
  /* 107ea8af mov eax, dword ptr [0x10811fa4] */
  EAX = (r32((uint32_t)(0x10811fa4)));
  /* 107ea8b4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ea8b7 mov ecx, dword ptr [0x10811fa8] */
  ECX = (r32((uint32_t)(0x10811fa8)));
  /* 107ea8bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea8bf mov edx, dword ptr [0x10811fa0] */
  EDX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea8c5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea8c8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea8ca push ecx */
  push32((uint32_t)(ECX));
  /* 107ea8cb mov eax, dword ptr [0x10811fa0] */
  EAX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea8d0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea8d3 push eax */
  push32((uint32_t)(EAX));
  /* 107ea8d4 mov ecx, dword ptr [0x10811fa0] */
  ECX = (r32((uint32_t)(0x10811fa0)));
  /* 107ea8da push ecx */
  push32((uint32_t)(ECX));
  /* 107ea8db call 0x107ecf00 */
  push32(0x107ea8e0u); f_107ecf00();
  /* 107ea8e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea8e3 mov edx, dword ptr [0x10811fa4] */
  EDX = (r32((uint32_t)(0x10811fa4)));
  /* 107ea8e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea8ec mov dword ptr [0x10811fa4], edx */
  w32((uint32_t)(0x10811fa4), (EDX));
L_107ea8f2:;
  /* 107ea8f2 mov dword ptr [0x10811fa0], 0 */
  w32((uint32_t)(0x10811fa0), (0x0u));
L_107ea8fc:;
  /* 107ea8fc mov esp, ebp */
  ESP = (EBP);
  /* 107ea8fe pop ebp */
  EBP = (pop32());
  /* 107ea8ff ret  */
  ESPCHK(0x107ea7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a900 @ 0x107ea900 (1565 bytes, 343 insns) */
void f_107ea900(void) {
  FTRACE(0x107ea900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ea900 push ebp */
  push32((uint32_t)(EBP));
  /* 107ea901 mov ebp, esp */
  EBP = (ESP);
  /* 107ea903 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ea909 mov eax, dword ptr [0x10811fa4] */
  EAX = (r32((uint32_t)(0x10811fa4)));
  /* 107ea90e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ea911 push eax */
  push32((uint32_t)(EAX));
  /* 107ea912 mov ecx, dword ptr [0x10811fa8] */
  ECX = (r32((uint32_t)(0x10811fa8)));
  /* 107ea918 push ecx */
  push32((uint32_t)(ECX));
  /* 107ea919 call dword ptr [0x10813378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813378))), 0x107ea91fu);
  /* 107ea91f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ea921 je 0x107ea92b */
  if (C.zf) goto L_107ea92b;
  /* 107ea923 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ea926 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107ea92b:;
  /* 107ea92b mov edx, dword ptr [0x10811fa8] */
  EDX = (r32((uint32_t)(0x10811fa8)));
  /* 107ea931 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 107ea937 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 107ea941 jmp 0x107ea952 */
  goto L_107ea952;
L_107ea943:;
  /* 107ea943 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 107ea949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea94c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_107ea952:;
  /* 107ea952 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 107ea958 cmp ecx, dword ptr [0x10811fa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10811fa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea95e jge 0x107eaf17 */
  if ((C.sf==C.of)) goto L_107eaf17;
  /* 107ea964 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107ea96a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107ea96d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 107ea973 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 107ea978 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 107ea97e push ecx */
  push32((uint32_t)(ECX));
  /* 107ea97f call dword ptr [0x10813378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813378))), 0x107ea985u);
  /* 107ea985 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ea987 je 0x107ea993 */
  if (C.zf) goto L_107ea993;
  /* 107ea989 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 107ea98e jmp 0x107eaf19 */
  goto L_107eaf19;
L_107ea993:;
  /* 107ea993 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107ea999 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107ea99c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 107ea9a2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 107ea9a8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea9ae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107ea9b1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107ea9b7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107ea9ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ea9bd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 107ea9c7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 107ea9d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107ea9d8 jmp 0x107ea9e3 */
  goto L_107ea9e3;
L_107ea9da:;
  /* 107ea9da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ea9dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ea9e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107ea9e3:;
  /* 107ea9e3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ea9e7 jge 0x107eaedb */
  if ((C.sf==C.of)) goto L_107eaedb;
  /* 107ea9ed mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 107ea9f7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 107eaa01 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 107eaa0b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 107eaa15 jmp 0x107eaa26 */
  goto L_107eaa26;
L_107eaa17:;
  /* 107eaa17 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107eaa1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaa20 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_107eaa26:;
  /* 107eaa26 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaa2d jge 0x107eaa42 */
  if ((C.sf==C.of)) goto L_107eaa42;
  /* 107eaa2f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107eaa35 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 107eaa40 jmp 0x107eaa17 */
  goto L_107eaa17;
L_107eaa42:;
  /* 107eaa42 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaa46 jl 0x107eae7d */
  if ((C.sf!=C.of)) goto L_107eae7d;
  /* 107eaa4c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107eaa51 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 107eaa57 push ecx */
  push32((uint32_t)(ECX));
  /* 107eaa58 call dword ptr [0x10813378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813378))), 0x107eaa5eu);
  /* 107eaa5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eaa60 je 0x107eaa6c */
  if (C.zf) goto L_107eaa6c;
  /* 107eaa62 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 107eaa67 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eaa6c:;
  /* 107eaa6c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 107eaa72 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107eaa75 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 107eaa7f jmp 0x107eaa90 */
  goto L_107eaa90;
L_107eaa81:;
  /* 107eaa81 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 107eaa87 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaa8a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_107eaa90:;
  /* 107eaa90 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaa97 jge 0x107eac14 */
  if ((C.sf==C.of)) goto L_107eac14;
  /* 107eaa9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eaaa0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaaa3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 107eaaa9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 107eaaaf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaab5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 107eaabb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 107eaac1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaac5 jne 0x107eaad2 */
  if (!C.zf) goto L_107eaad2;
  /* 107eaac7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 107eaacd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaad0 je 0x107eaadc */
  if (C.zf) goto L_107eaadc;
L_107eaad2:;
  /* 107eaad2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 107eaad7 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eaadc:;
  /* 107eaadc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 107eaae2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107eaae4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 107eaaea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 107eaaf0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 107eaaf6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 107eaafc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107eaaff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107eab01 je 0x107eab39 */
  if (C.zf) goto L_107eab39;
  /* 107eab03 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 107eab09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eab0c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 107eab12 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eab1c jle 0x107eab28 */
  if ((C.zf||C.sf!=C.of)) goto L_107eab28;
  /* 107eab1e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 107eab23 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eab28:;
  /* 107eab28 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 107eab2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eab31 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 107eab37 jmp 0x107eab7b */
  goto L_107eab7b;
L_107eab39:;
  /* 107eab39 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 107eab3f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107eab42 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eab45 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 107eab4b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eab52 jle 0x107eab5e */
  if ((C.zf||C.sf!=C.of)) goto L_107eab5e;
  /* 107eab54 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_107eab5e:;
  /* 107eab5e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107eab64 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 107eab6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eab6e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107eab74 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_107eab7b:;
  /* 107eab7b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eab82 jl 0x107eab9d */
  if ((C.sf!=C.of)) goto L_107eab9d;
  /* 107eab84 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 107eab8a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 107eab8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eab8f jne 0x107eab9d */
  if (!C.zf) goto L_107eab9d;
  /* 107eab91 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eab9b jle 0x107eaba7 */
  if ((C.zf||C.sf!=C.of)) goto L_107eaba7;
L_107eab9d:;
  /* 107eab9d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 107eaba2 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eaba7:;
  /* 107eaba7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 107eabad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eabb3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 107eabb6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eabbc je 0x107eabc8 */
  if (C.zf) goto L_107eabc8;
  /* 107eabbe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 107eabc3 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eabc8:;
  /* 107eabc8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 107eabce add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eabd4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 107eabda mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 107eabe0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eabe6 jb 0x107eaadc */
  if (C.cf) goto L_107eaadc;
  /* 107eabec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 107eabf2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eabf8 je 0x107eac04 */
  if (C.zf) goto L_107eac04;
  /* 107eabfa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 107eabff jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eac04:;
  /* 107eac04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eac07 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eac0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107eac0f jmp 0x107eaa81 */
  goto L_107eaa81;
L_107eac14:;
  /* 107eac14 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107eac17 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107eac19 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eac1f je 0x107eac2b */
  if (C.zf) goto L_107eac2b;
  /* 107eac21 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 107eac26 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eac2b:;
  /* 107eac2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107eac2e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 107eac34 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 107eac3b jmp 0x107eac46 */
  goto L_107eac46;
L_107eac3d:;
  /* 107eac3d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107eac40 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eac43 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_107eac46:;
  /* 107eac46 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eac4a jge 0x107eae7d */
  if ((C.sf==C.of)) goto L_107eae7d;
  /* 107eac50 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 107eac5a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 107eac60 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_107eac66:;
  /* 107eac66 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 107eac6c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107eac6f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 107eac75 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107eac7b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eac81 je 0x107eadaa */
  if (C.zf) goto L_107eadaa;
  /* 107eac87 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107eac8a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 107eac90 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eac97 je 0x107eadaa */
  if (C.zf) goto L_107eadaa;
  /* 107eac9d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107eaca3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaca9 jb 0x107eacbe */
  if (C.cf) goto L_107eacbe;
  /* 107eacab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 107eacb1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eacb6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eacbc jb 0x107eacc8 */
  if (C.cf) goto L_107eacc8;
L_107eacbe:;
  /* 107eacbe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 107eacc3 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eacc8:;
  /* 107eacc8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107eacce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 107eacd4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 107eacda mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 107eace0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eace3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107eace6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eace9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eacee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_107eacf4:;
  /* 107eacf4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eacf7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eacfd je 0x107ead1e */
  if (C.zf) goto L_107ead1e;
  /* 107eacff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ead02 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ead08 jne 0x107ead0c */
  if (!C.zf) goto L_107ead0c;
  /* 107ead0a jmp 0x107ead1e */
  goto L_107ead1e;
L_107ead0c:;
  /* 107ead0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ead0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ead11 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 107ead14 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ead17 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ead19 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107ead1c jmp 0x107eacf4 */
  goto L_107eacf4;
L_107ead1e:;
  /* 107ead1e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ead21 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ead27 jne 0x107ead33 */
  if (!C.zf) goto L_107ead33;
  /* 107ead29 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 107ead2e jmp 0x107eaf19 */
  goto L_107eaf19;
L_107ead33:;
  /* 107ead33 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107ead39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107ead3b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107ead3e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ead41 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 107ead47 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ead4e jle 0x107ead5a */
  if ((C.zf||C.sf!=C.of)) goto L_107ead5a;
  /* 107ead50 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_107ead5a:;
  /* 107ead5a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 107ead60 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ead63 je 0x107ead6f */
  if (C.zf) goto L_107ead6f;
  /* 107ead65 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 107ead6a jmp 0x107eaf19 */
  goto L_107eaf19;
L_107ead6f:;
  /* 107ead6f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107ead75 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107ead78 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ead7e je 0x107ead8a */
  if (C.zf) goto L_107ead8a;
  /* 107ead80 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 107ead85 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107ead8a:;
  /* 107ead8a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107ead90 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 107ead96 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 107ead9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ead9f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 107eada5 jmp 0x107eac66 */
  goto L_107eac66;
L_107eadaa:;
  /* 107eadaa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eadb1 je 0x107eae21 */
  if (C.zf) goto L_107eae21;
  /* 107eadb3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eadb7 jge 0x107eadeb */
  if ((C.sf==C.of)) goto L_107eadeb;
  /* 107eadb9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107eadbe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107eadc1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107eadc3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 107eadc9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107eadcb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 107eadd1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107eadd6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107eadd9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107eaddb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 107eade1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107eade3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 107eade9 jmp 0x107eae21 */
  goto L_107eae21;
L_107eadeb:;
  /* 107eadeb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107eadee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eadf1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107eadf6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107eadf8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 107eadfe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107eae00 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 107eae06 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107eae09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eae0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107eae11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107eae13 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 107eae19 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107eae1b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_107eae21:;
  /* 107eae21 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 107eae27 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107eae2a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eae30 jne 0x107eae44 */
  if (!C.zf) goto L_107eae44;
  /* 107eae32 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107eae35 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 107eae3b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eae42 je 0x107eae4e */
  if (C.zf) goto L_107eae4e;
L_107eae44:;
  /* 107eae44 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 107eae49 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eae4e:;
  /* 107eae4e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 107eae54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107eae57 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eae5d je 0x107eae69 */
  if (C.zf) goto L_107eae69;
  /* 107eae5f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 107eae64 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eae69:;
  /* 107eae69 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 107eae6f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eae72 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 107eae78 jmp 0x107eac3d */
  goto L_107eac3d;
L_107eae7d:;
  /* 107eae7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eae80 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 107eae86 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 107eae8c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eae90 jne 0x107eaeaa */
  if (!C.zf) goto L_107eaeaa;
  /* 107eae92 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eae95 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 107eae9b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 107eaea1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaea8 je 0x107eaeb1 */
  if (C.zf) goto L_107eaeb1;
L_107eaeaa:;
  /* 107eaeaa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 107eaeaf jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eaeb1:;
  /* 107eaeb1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 107eaeb7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaebd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 107eaec3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107eaec6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaecb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107eaece mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eaed1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107eaed3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107eaed6 jmp 0x107ea9da */
  goto L_107ea9da;
L_107eaedb:;
  /* 107eaedb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107eaee1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 107eaee7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaee9 jne 0x107eaefc */
  if (!C.zf) goto L_107eaefc;
  /* 107eaeeb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107eaef1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 107eaef7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaefa je 0x107eaf03 */
  if (C.zf) goto L_107eaf03;
L_107eaefc:;
  /* 107eaefc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 107eaf01 jmp 0x107eaf19 */
  goto L_107eaf19;
L_107eaf03:;
  /* 107eaf03 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107eaf09 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaf0c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 107eaf12 jmp 0x107ea943 */
  goto L_107ea943;
L_107eaf17:;
  /* 107eaf17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107eaf19:;
  /* 107eaf19 mov esp, ebp */
  ESP = (EBP);
  /* 107eaf1b pop ebp */
  EBP = (pop32());
  /* 107eaf1c ret  */
  ESPCHK(0x107ea900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af20 @ 0x107eaf20 (250 bytes, 92 insns) */
void f_107eaf20(void) {
  FTRACE(0x107eaf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eaf20 push ebp */
  push32((uint32_t)(EBP));
  /* 107eaf21 mov ebp, esp */
  EBP = (ESP);
  /* 107eaf23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eaf26 push ebx */
  push32((uint32_t)(EBX));
  /* 107eaf27 push esi */
  push32((uint32_t)(ESI));
  /* 107eaf28 push edi */
  push32((uint32_t)(EDI));
  /* 107eaf29 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 107eaf2c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107eaf2f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 107eaf32 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_107eaf35:;
  /* 107eaf35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaf39 jne 0x107eaf59 */
  if (!C.zf) goto L_107eaf59;
  /* 107eaf3b push 0x1080c130 */
  push32((uint32_t)(0x1080c130u));
  /* 107eaf40 push 0 */
  push32((uint32_t)(0x0u));
  /* 107eaf42 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 107eaf44 push 0x1080c124 */
  push32((uint32_t)(0x1080c124u));
  /* 107eaf49 push 2 */
  push32((uint32_t)(0x2u));
  /* 107eaf4b call 0x107e40d0 */
  push32(0x107eaf50u); f_107e40d0();
  /* 107eaf50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaf53 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaf56 jne 0x107eaf59 */
  if (!C.zf) goto L_107eaf59;
  /* 107eaf58 int3  */
  x86_unimpl("int3 @ 0x107eaf58");
L_107eaf59:;
  /* 107eaf59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107eaf5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107eaf5d jne 0x107eaf35 */
  if (!C.zf) goto L_107eaf35;
L_107eaf5f:;
  /* 107eaf5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaf63 jne 0x107eaf83 */
  if (!C.zf) goto L_107eaf83;
  /* 107eaf65 push 0x1080c114 */
  push32((uint32_t)(0x1080c114u));
  /* 107eaf6a push 0 */
  push32((uint32_t)(0x0u));
  /* 107eaf6c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 107eaf6e push 0x1080c124 */
  push32((uint32_t)(0x1080c124u));
  /* 107eaf73 push 2 */
  push32((uint32_t)(0x2u));
  /* 107eaf75 call 0x107e40d0 */
  push32(0x107eaf7au); f_107e40d0();
  /* 107eaf7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaf7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eaf80 jne 0x107eaf83 */
  if (!C.zf) goto L_107eaf83;
  /* 107eaf82 int3  */
  x86_unimpl("int3 @ 0x107eaf82");
L_107eaf83:;
  /* 107eaf83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eaf85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eaf87 jne 0x107eaf5f */
  if (!C.zf) goto L_107eaf5f;
  /* 107eaf89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eaf8c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 107eaf93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eaf96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eaf99 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107eaf9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eaf9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eafa2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107eafa4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eafa7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 107eafae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107eafb1 push ecx */
  push32((uint32_t)(ECX));
  /* 107eafb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eafb5 push edx */
  push32((uint32_t)(EDX));
  /* 107eafb6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eafb9 push eax */
  push32((uint32_t)(EAX));
  /* 107eafba call 0x107ebfa0 */
  push32(0x107eafbfu); f_107ebfa0();
  /* 107eafbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eafc2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107eafc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eafc8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107eafcb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eafce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eafd1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107eafd4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eafd7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eafdb jl 0x107eafff */
  if ((C.sf!=C.of)) goto L_107eafff;
  /* 107eafdd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eafe0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107eafe2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107eafe5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107eafe7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107eafed mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 107eaff0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eaff3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107eaff5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eaff8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eaffb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107eaffd jmp 0x107eb010 */
  goto L_107eb010;
L_107eafff:;
  /* 107eafff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb002 push edx */
  push32((uint32_t)(EDX));
  /* 107eb003 push 0 */
  push32((uint32_t)(0x0u));
  /* 107eb005 call 0x107ebd20 */
  push32(0x107eb00au); f_107ebd20();
  /* 107eb00a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb00d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_107eb010:;
  /* 107eb010 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107eb013 pop edi */
  EDI = (pop32());
  /* 107eb014 pop esi */
  ESI = (pop32());
  /* 107eb015 pop ebx */
  EBX = (pop32());
  /* 107eb016 mov esp, ebp */
  ESP = (EBP);
  /* 107eb018 pop ebp */
  EBP = (pop32());
  /* 107eb019 ret  */
  ESPCHK(0x107eaf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b020 @ 0x107eb020 (183 bytes, 58 insns) */
void f_107eb020(void) {
  FTRACE(0x107eb020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eb020 push ebp */
  push32((uint32_t)(EBP));
  /* 107eb021 mov ebp, esp */
  EBP = (ESP);
  /* 107eb023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eb026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb029 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb02c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb031 ja 0x107eb04a */
  if ((!C.cf&&!C.zf)) goto L_107eb04a;
  /* 107eb033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb036 mov edx, dword ptr [0x1080ec98] */
  EDX = (r32((uint32_t)(0x1080ec98)));
  /* 107eb03c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb03e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 107eb042 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 107eb045 jmp 0x107eb0d3 */
  goto L_107eb0d3;
L_107eb04a:;
  /* 107eb04a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb04d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 107eb050 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107eb056 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107eb05c mov edx, dword ptr [0x1080ec98] */
  EDX = (r32((uint32_t)(0x1080ec98)));
  /* 107eb062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb064 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 107eb068 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 107eb06d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eb06f je 0x107eb093 */
  if (C.zf) goto L_107eb093;
  /* 107eb071 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb074 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 107eb077 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107eb07d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 107eb080 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 107eb083 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 107eb086 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 107eb08a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 107eb091 jmp 0x107eb0a4 */
  goto L_107eb0a4;
L_107eb093:;
  /* 107eb093 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 107eb096 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 107eb099 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 107eb09d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_107eb0a4:;
  /* 107eb0a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107eb0a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107eb0a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107eb0aa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 107eb0ad push ecx */
  push32((uint32_t)(ECX));
  /* 107eb0ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eb0b1 push edx */
  push32((uint32_t)(EDX));
  /* 107eb0b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 107eb0b5 push eax */
  push32((uint32_t)(EAX));
  /* 107eb0b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107eb0b8 call 0x107ed240 */
  push32(0x107eb0bdu); f_107ed240();
  /* 107eb0bd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb0c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eb0c2 jne 0x107eb0c8 */
  if (!C.zf) goto L_107eb0c8;
  /* 107eb0c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb0c6 jmp 0x107eb0d3 */
  goto L_107eb0d3;
L_107eb0c8:;
  /* 107eb0c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb0cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107eb0d0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_107eb0d3:;
  /* 107eb0d3 mov esp, ebp */
  ESP = (EBP);
  /* 107eb0d5 pop ebp */
  EBP = (pop32());
  /* 107eb0d6 ret  */
  ESPCHK(0x107eb020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0e0 @ 0x107eb0e0 (836 bytes, 238 insns) */
void f_107eb0e0(void) {
  FTRACE(0x107eb0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eb0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107eb0e1 mov ebp, esp */
  EBP = (ESP);
  /* 107eb0e3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eb0e6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107eb0e8 call 0x107e8a10 */
  push32(0x107eb0edu); f_107e8a10();
  /* 107eb0ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb0f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb0f3 push eax */
  push32((uint32_t)(EAX));
  /* 107eb0f4 call 0x107eb430 */
  push32(0x107eb0f9u); f_107eb430();
  /* 107eb0f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb0fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107eb0ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb102 cmp ecx, dword ptr [0x10811ce4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10811ce4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb108 jne 0x107eb11b */
  if (!C.zf) goto L_107eb11b;
  /* 107eb10a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107eb10c call 0x107e8ab0 */
  push32(0x107eb111u); f_107e8ab0();
  /* 107eb111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb114 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb116 jmp 0x107eb420 */
  goto L_107eb420;
L_107eb11b:;
  /* 107eb11b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb11f jne 0x107eb13c */
  if (!C.zf) goto L_107eb13c;
  /* 107eb121 call 0x107eb510 */
  push32(0x107eb126u); f_107eb510();
  /* 107eb126 call 0x107eb590 */
  push32(0x107eb12bu); f_107eb590();
  /* 107eb12b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107eb12d call 0x107e8ab0 */
  push32(0x107eb132u); f_107e8ab0();
  /* 107eb132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb137 jmp 0x107eb420 */
  goto L_107eb420;
L_107eb13c:;
  /* 107eb13c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107eb143 jmp 0x107eb14e */
  goto L_107eb14e;
L_107eb145:;
  /* 107eb145 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb148 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb14b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107eb14e:;
  /* 107eb14e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb152 jae 0x107eb29f */
  if (!C.cf) goto L_107eb29f;
  /* 107eb158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb15b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eb15e mov ecx, dword ptr [eax + 0x1080eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1080eeb8)));
  /* 107eb164 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb167 jne 0x107eb29a */
  if (!C.zf) goto L_107eb29a;
  /* 107eb16d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107eb174 jmp 0x107eb17f */
  goto L_107eb17f;
L_107eb176:;
  /* 107eb176 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb179 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb17c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_107eb17f:;
  /* 107eb17f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb186 jae 0x107eb194 */
  if (!C.cf) goto L_107eb194;
  /* 107eb188 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb18b mov byte ptr [eax + 0x10811e80], 0 */
  w8((uint32_t)(EAX + 0x10811e80), (0x0u));
  /* 107eb192 jmp 0x107eb176 */
  goto L_107eb176;
L_107eb194:;
  /* 107eb194 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107eb19b jmp 0x107eb1a6 */
  goto L_107eb1a6;
L_107eb19d:;
  /* 107eb19d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eb1a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb1a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107eb1a6:;
  /* 107eb1a6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb1aa jae 0x107eb227 */
  if (!C.cf) goto L_107eb227;
  /* 107eb1ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb1af imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eb1b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eb1b5 lea ecx, [edx + eax*8 + 0x1080eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1080eec8));
  /* 107eb1bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107eb1bf jmp 0x107eb1ca */
  goto L_107eb1ca;
L_107eb1c1:;
  /* 107eb1c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eb1c4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb1c7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107eb1ca:;
  /* 107eb1ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eb1cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107eb1cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107eb1d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107eb1d3 je 0x107eb222 */
  if (C.zf) goto L_107eb222;
  /* 107eb1d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eb1d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb1da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107eb1dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eb1df je 0x107eb222 */
  if (C.zf) goto L_107eb222;
  /* 107eb1e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eb1e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb1e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107eb1e8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107eb1eb jmp 0x107eb1f6 */
  goto L_107eb1f6;
L_107eb1ed:;
  /* 107eb1ed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb1f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb1f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107eb1f6:;
  /* 107eb1f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eb1f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb1fb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 107eb1fe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb201 ja 0x107eb220 */
  if ((!C.cf&&!C.zf)) goto L_107eb220;
  /* 107eb203 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb206 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eb209 mov dl, byte ptr [eax + 0x10811e81] */
  DL = (r8((uint32_t)(EAX + 0x10811e81)));
  /* 107eb20f or dl, byte ptr [ecx + 0x1080eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1080eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 107eb215 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb218 mov byte ptr [eax + 0x10811e81], dl */
  w8((uint32_t)(EAX + 0x10811e81), (DL));
  /* 107eb21e jmp 0x107eb1ed */
  goto L_107eb1ed;
L_107eb220:;
  /* 107eb220 jmp 0x107eb1c1 */
  goto L_107eb1c1;
L_107eb222:;
  /* 107eb222 jmp 0x107eb19d */
  goto L_107eb19d;
L_107eb227:;
  /* 107eb227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb22a mov dword ptr [0x10811ce4], ecx */
  w32((uint32_t)(0x10811ce4), (ECX));
  /* 107eb230 mov dword ptr [0x10811d6c], 1 */
  w32((uint32_t)(0x10811d6c), (0x1u));
  /* 107eb23a mov edx, dword ptr [0x10811ce4] */
  EDX = (r32((uint32_t)(0x10811ce4)));
  /* 107eb240 push edx */
  push32((uint32_t)(EDX));
  /* 107eb241 call 0x107eb490 */
  push32(0x107eb246u); f_107eb490();
  /* 107eb246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb249 mov dword ptr [0x10811f84], eax */
  w32((uint32_t)(0x10811f84), (EAX));
  /* 107eb24e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107eb255 jmp 0x107eb260 */
  goto L_107eb260;
L_107eb257:;
  /* 107eb257 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eb25a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb25d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107eb260:;
  /* 107eb260 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb264 jae 0x107eb284 */
  if (!C.cf) goto L_107eb284;
  /* 107eb266 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb269 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eb26c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eb26f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eb272 mov cx, word ptr [ecx + eax*2 + 0x1080eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1080eebc)));
  /* 107eb27a mov word ptr [edx*2 + 0x10811d60], cx */
  w16((uint32_t)(EDX*2 + 0x10811d60), (CX));
  /* 107eb282 jmp 0x107eb257 */
  goto L_107eb257;
L_107eb284:;
  /* 107eb284 call 0x107eb590 */
  push32(0x107eb289u); f_107eb590();
  /* 107eb289 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107eb28b call 0x107e8ab0 */
  push32(0x107eb290u); f_107e8ab0();
  /* 107eb290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb295 jmp 0x107eb420 */
  goto L_107eb420;
L_107eb29a:;
  /* 107eb29a jmp 0x107eb145 */
  goto L_107eb145;
L_107eb29f:;
  /* 107eb29f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 107eb2a2 push edx */
  push32((uint32_t)(EDX));
  /* 107eb2a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb2a6 push eax */
  push32((uint32_t)(EAX));
  /* 107eb2a7 call dword ptr [0x10813300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813300))), 0x107eb2adu);
  /* 107eb2ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb2b0 jne 0x107eb3f2 */
  if (!C.zf) goto L_107eb3f2;
  /* 107eb2b6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107eb2bd jmp 0x107eb2c8 */
  goto L_107eb2c8;
L_107eb2bf:;
  /* 107eb2bf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb2c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb2c5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_107eb2c8:;
  /* 107eb2c8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb2cf jae 0x107eb2dd */
  if (!C.cf) goto L_107eb2dd;
  /* 107eb2d1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb2d4 mov byte ptr [edx + 0x10811e80], 0 */
  w8((uint32_t)(EDX + 0x10811e80), (0x0u));
  /* 107eb2db jmp 0x107eb2bf */
  goto L_107eb2bf;
L_107eb2dd:;
  /* 107eb2dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb2e0 mov dword ptr [0x10811ce4], eax */
  w32((uint32_t)(0x10811ce4), (EAX));
  /* 107eb2e5 mov dword ptr [0x10811f84], 0 */
  w32((uint32_t)(0x10811f84), (0x0u));
  /* 107eb2ef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb2f3 jbe 0x107eb3ae */
  if ((C.cf||C.zf)) goto L_107eb3ae;
  /* 107eb2f9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 107eb2fc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 107eb2ff jmp 0x107eb30a */
  goto L_107eb30a;
L_107eb301:;
  /* 107eb301 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107eb304 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb307 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_107eb30a:;
  /* 107eb30a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107eb30d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107eb30f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107eb311 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107eb313 je 0x107eb35c */
  if (C.zf) goto L_107eb35c;
  /* 107eb315 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107eb318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb31a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107eb31d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eb31f je 0x107eb35c */
  if (C.zf) goto L_107eb35c;
  /* 107eb321 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107eb324 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb326 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107eb328 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107eb32b jmp 0x107eb336 */
  goto L_107eb336;
L_107eb32d:;
  /* 107eb32d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb333 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107eb336:;
  /* 107eb336 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107eb339 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb33b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 107eb33e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb341 ja 0x107eb35a */
  if ((!C.cf&&!C.zf)) goto L_107eb35a;
  /* 107eb343 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb346 mov cl, byte ptr [eax + 0x10811e81] */
  CL = (r8((uint32_t)(EAX + 0x10811e81)));
  /* 107eb34c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 107eb34f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb352 mov byte ptr [edx + 0x10811e81], cl */
  w8((uint32_t)(EDX + 0x10811e81), (CL));
  /* 107eb358 jmp 0x107eb32d */
  goto L_107eb32d;
L_107eb35a:;
  /* 107eb35a jmp 0x107eb301 */
  goto L_107eb301;
L_107eb35c:;
  /* 107eb35c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 107eb363 jmp 0x107eb36e */
  goto L_107eb36e;
L_107eb365:;
  /* 107eb365 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb368 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb36b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107eb36e:;
  /* 107eb36e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb375 jae 0x107eb38e */
  if (!C.cf) goto L_107eb38e;
  /* 107eb377 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb37a mov dl, byte ptr [ecx + 0x10811e81] */
  DL = (r8((uint32_t)(ECX + 0x10811e81)));
  /* 107eb380 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 107eb383 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107eb386 mov byte ptr [eax + 0x10811e81], dl */
  w8((uint32_t)(EAX + 0x10811e81), (DL));
  /* 107eb38c jmp 0x107eb365 */
  goto L_107eb365;
L_107eb38e:;
  /* 107eb38e mov ecx, dword ptr [0x10811ce4] */
  ECX = (r32((uint32_t)(0x10811ce4)));
  /* 107eb394 push ecx */
  push32((uint32_t)(ECX));
  /* 107eb395 call 0x107eb490 */
  push32(0x107eb39au); f_107eb490();
  /* 107eb39a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb39d mov dword ptr [0x10811f84], eax */
  w32((uint32_t)(0x10811f84), (EAX));
  /* 107eb3a2 mov dword ptr [0x10811d6c], 1 */
  w32((uint32_t)(0x10811d6c), (0x1u));
  /* 107eb3ac jmp 0x107eb3b8 */
  goto L_107eb3b8;
L_107eb3ae:;
  /* 107eb3ae mov dword ptr [0x10811d6c], 0 */
  w32((uint32_t)(0x10811d6c), (0x0u));
L_107eb3b8:;
  /* 107eb3b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107eb3bf jmp 0x107eb3ca */
  goto L_107eb3ca;
L_107eb3c1:;
  /* 107eb3c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eb3c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb3c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107eb3ca:;
  /* 107eb3ca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb3ce jae 0x107eb3df */
  if (!C.cf) goto L_107eb3df;
  /* 107eb3d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eb3d3 mov word ptr [eax*2 + 0x10811d60], 0 */
  w16((uint32_t)(EAX*2 + 0x10811d60), (0x0u));
  /* 107eb3dd jmp 0x107eb3c1 */
  goto L_107eb3c1;
L_107eb3df:;
  /* 107eb3df call 0x107eb590 */
  push32(0x107eb3e4u); f_107eb590();
  /* 107eb3e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107eb3e6 call 0x107e8ab0 */
  push32(0x107eb3ebu); f_107e8ab0();
  /* 107eb3eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb3ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb3f0 jmp 0x107eb420 */
  goto L_107eb420;
L_107eb3f2:;
  /* 107eb3f2 cmp dword ptr [0x108107f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108107f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb3f9 je 0x107eb413 */
  if (C.zf) goto L_107eb413;
  /* 107eb3fb call 0x107eb510 */
  push32(0x107eb400u); f_107eb510();
  /* 107eb400 call 0x107eb590 */
  push32(0x107eb405u); f_107eb590();
  /* 107eb405 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107eb407 call 0x107e8ab0 */
  push32(0x107eb40cu); f_107e8ab0();
  /* 107eb40c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eb411 jmp 0x107eb420 */
  goto L_107eb420;
L_107eb413:;
  /* 107eb413 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107eb415 call 0x107e8ab0 */
  push32(0x107eb41au); f_107e8ab0();
  /* 107eb41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb41d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107eb420:;
  /* 107eb420 mov esp, ebp */
  ESP = (EBP);
  /* 107eb422 pop ebp */
  EBP = (pop32());
  /* 107eb423 ret  */
  ESPCHK(0x107eb0e0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x107eb430 (89 bytes, 21 insns) */
void f_107eb430(void) {
  FTRACE(0x107eb430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eb430 push ebp */
  push32((uint32_t)(EBP));
  /* 107eb431 mov ebp, esp */
  EBP = (ESP);
  /* 107eb433 mov dword ptr [0x108107f8], 0 */
  w32((uint32_t)(0x108107f8), (0x0u));
  /* 107eb43d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb441 jne 0x107eb455 */
  if (!C.zf) goto L_107eb455;
  /* 107eb443 mov dword ptr [0x108107f8], 1 */
  w32((uint32_t)(0x108107f8), (0x1u));
  /* 107eb44d call dword ptr [0x108132f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f8))), 0x107eb453u);
  /* 107eb453 jmp 0x107eb487 */
  goto L_107eb487;
L_107eb455:;
  /* 107eb455 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb459 jne 0x107eb46d */
  if (!C.zf) goto L_107eb46d;
  /* 107eb45b mov dword ptr [0x108107f8], 1 */
  w32((uint32_t)(0x108107f8), (0x1u));
  /* 107eb465 call dword ptr [0x10813308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813308))), 0x107eb46bu);
  /* 107eb46b jmp 0x107eb487 */
  goto L_107eb487;
L_107eb46d:;
  /* 107eb46d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb471 jne 0x107eb484 */
  if (!C.zf) goto L_107eb484;
  /* 107eb473 mov dword ptr [0x108107f8], 1 */
  w32((uint32_t)(0x108107f8), (0x1u));
  /* 107eb47d mov eax, dword ptr [0x10810818] */
  EAX = (r32((uint32_t)(0x10810818)));
  /* 107eb482 jmp 0x107eb487 */
  goto L_107eb487;
L_107eb484:;
  /* 107eb484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_107eb487:;
  /* 107eb487 pop ebp */
  EBP = (pop32());
  /* 107eb488 ret  */
  ESPCHK(0x107eb430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b490 @ 0x107eb490 (80 bytes, 26 insns) [1 switch table(s)] */
void f_107eb490(void) {
  FTRACE(0x107eb490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eb490 push ebp */
  push32((uint32_t)(EBP));
  /* 107eb491 mov ebp, esp */
  EBP = (ESP);
  /* 107eb493 push ecx */
  push32((uint32_t)(ECX));
  /* 107eb494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb497 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107eb49a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb49d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eb4a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107eb4a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb4aa ja 0x107eb4da */
  if ((!C.cf&&!C.zf)) goto L_107eb4da;
  /* 107eb4ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb4af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb4b1 mov dl, byte ptr [eax + 0x107eb4f4] */
  DL = (r8((uint32_t)(EAX + 0x107eb4f4)));
  /* 107eb4b7 jmp dword ptr [edx*4 + 0x107eb4e0] */
  switch (EDX) {
    case 0: goto L_107eb4be;
    case 1: goto L_107eb4c5;
    case 2: goto L_107eb4cc;
    case 3: goto L_107eb4d3;
    case 4: goto L_107eb4da;
    default: x86_unimpl("switch@0x107eb4b7 out of table"); return;
  }
L_107eb4be:;
  /* 107eb4be mov eax, 0x411 */
  EAX = (0x411u);
  /* 107eb4c3 jmp 0x107eb4dc */
  goto L_107eb4dc;
L_107eb4c5:;
  /* 107eb4c5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 107eb4ca jmp 0x107eb4dc */
  goto L_107eb4dc;
L_107eb4cc:;
  /* 107eb4cc mov eax, 0x412 */
  EAX = (0x412u);
  /* 107eb4d1 jmp 0x107eb4dc */
  goto L_107eb4dc;
L_107eb4d3:;
  /* 107eb4d3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 107eb4d8 jmp 0x107eb4dc */
  goto L_107eb4dc;
L_107eb4da:;
  /* 107eb4da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107eb4dc:;
  /* 107eb4dc mov esp, ebp */
  ESP = (EBP);
  /* 107eb4de pop ebp */
  EBP = (pop32());
  /* 107eb4df ret  */
  ESPCHK(0x107eb490u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x107eb510 (116 bytes, 29 insns) */
void f_107eb510(void) {
  FTRACE(0x107eb510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eb510 push ebp */
  push32((uint32_t)(EBP));
  /* 107eb511 mov ebp, esp */
  EBP = (ESP);
  /* 107eb513 push ecx */
  push32((uint32_t)(ECX));
  /* 107eb514 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107eb51b jmp 0x107eb526 */
  goto L_107eb526;
L_107eb51d:;
  /* 107eb51d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb520 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107eb526:;
  /* 107eb526 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb52d jge 0x107eb53b */
  if ((C.sf==C.of)) goto L_107eb53b;
  /* 107eb52f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb532 mov byte ptr [ecx + 0x10811e80], 0 */
  w8((uint32_t)(ECX + 0x10811e80), (0x0u));
  /* 107eb539 jmp 0x107eb51d */
  goto L_107eb51d;
L_107eb53b:;
  /* 107eb53b mov dword ptr [0x10811ce4], 0 */
  w32((uint32_t)(0x10811ce4), (0x0u));
  /* 107eb545 mov dword ptr [0x10811d6c], 0 */
  w32((uint32_t)(0x10811d6c), (0x0u));
  /* 107eb54f mov dword ptr [0x10811f84], 0 */
  w32((uint32_t)(0x10811f84), (0x0u));
  /* 107eb559 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107eb560 jmp 0x107eb56b */
  goto L_107eb56b;
L_107eb562:;
  /* 107eb562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb565 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb568 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107eb56b:;
  /* 107eb56b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb56f jge 0x107eb580 */
  if ((C.sf==C.of)) goto L_107eb580;
  /* 107eb571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb574 mov word ptr [eax*2 + 0x10811d60], 0 */
  w16((uint32_t)(EAX*2 + 0x10811d60), (0x0u));
  /* 107eb57e jmp 0x107eb562 */
  goto L_107eb562;
L_107eb580:;
  /* 107eb580 mov esp, ebp */
  ESP = (EBP);
  /* 107eb582 pop ebp */
  EBP = (pop32());
  /* 107eb583 ret  */
  ESPCHK(0x107eb510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b590 @ 0x107eb590 (770 bytes, 175 insns) */
void f_107eb590(void) {
  FTRACE(0x107eb590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eb590 push ebp */
  push32((uint32_t)(EBP));
  /* 107eb591 mov ebp, esp */
  EBP = (ESP);
  /* 107eb593 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eb599 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 107eb59f push eax */
  push32((uint32_t)(EAX));
  /* 107eb5a0 mov ecx, dword ptr [0x10811ce4] */
  ECX = (r32((uint32_t)(0x10811ce4)));
  /* 107eb5a6 push ecx */
  push32((uint32_t)(ECX));
  /* 107eb5a7 call dword ptr [0x10813300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813300))), 0x107eb5adu);
  /* 107eb5ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb5b0 jne 0x107eb7c9 */
  if (!C.zf) goto L_107eb7c9;
  /* 107eb5b6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 107eb5c0 jmp 0x107eb5d1 */
  goto L_107eb5d1;
L_107eb5c2:;
  /* 107eb5c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb5c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb5cb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_107eb5d1:;
  /* 107eb5d1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb5db jae 0x107eb5f2 */
  if (!C.cf) goto L_107eb5f2;
  /* 107eb5dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb5e3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 107eb5e9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 107eb5f0 jmp 0x107eb5c2 */
  goto L_107eb5c2;
L_107eb5f2:;
  /* 107eb5f2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 107eb5f9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 107eb5ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107eb602 jmp 0x107eb60d */
  goto L_107eb60d;
L_107eb604:;
  /* 107eb604 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb607 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb60a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107eb60d:;
  /* 107eb60d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb610 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb612 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107eb614 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107eb616 je 0x107eb658 */
  if (C.zf) goto L_107eb658;
  /* 107eb618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb61b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107eb61d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107eb61f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 107eb625 jmp 0x107eb636 */
  goto L_107eb636;
L_107eb627:;
  /* 107eb627 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb62d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb630 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_107eb636:;
  /* 107eb636 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eb639 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107eb63b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107eb63e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb644 ja 0x107eb656 */
  if ((!C.cf&&!C.zf)) goto L_107eb656;
  /* 107eb646 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb64c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 107eb654 jmp 0x107eb627 */
  goto L_107eb627;
L_107eb656:;
  /* 107eb656 jmp 0x107eb604 */
  goto L_107eb604;
L_107eb658:;
  /* 107eb658 push 0 */
  push32((uint32_t)(0x0u));
  /* 107eb65a mov eax, dword ptr [0x10811f84] */
  EAX = (r32((uint32_t)(0x10811f84)));
  /* 107eb65f push eax */
  push32((uint32_t)(EAX));
  /* 107eb660 mov ecx, dword ptr [0x10811ce4] */
  ECX = (r32((uint32_t)(0x10811ce4)));
  /* 107eb666 push ecx */
  push32((uint32_t)(ECX));
  /* 107eb667 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 107eb66d push edx */
  push32((uint32_t)(EDX));
  /* 107eb66e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107eb673 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 107eb679 push eax */
  push32((uint32_t)(EAX));
  /* 107eb67a push 1 */
  push32((uint32_t)(0x1u));
  /* 107eb67c call 0x107ed240 */
  push32(0x107eb681u); f_107ed240();
  /* 107eb681 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb684 push 0 */
  push32((uint32_t)(0x0u));
  /* 107eb686 mov ecx, dword ptr [0x10811ce4] */
  ECX = (r32((uint32_t)(0x10811ce4)));
  /* 107eb68c push ecx */
  push32((uint32_t)(ECX));
  /* 107eb68d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107eb692 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 107eb698 push edx */
  push32((uint32_t)(EDX));
  /* 107eb699 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107eb69e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 107eb6a4 push eax */
  push32((uint32_t)(EAX));
  /* 107eb6a5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107eb6aa mov ecx, dword ptr [0x10811f84] */
  ECX = (r32((uint32_t)(0x10811f84)));
  /* 107eb6b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107eb6b1 call 0x107ed400 */
  push32(0x107eb6b6u); f_107ed400();
  /* 107eb6b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb6b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107eb6bb mov edx, dword ptr [0x10811ce4] */
  EDX = (r32((uint32_t)(0x10811ce4)));
  /* 107eb6c1 push edx */
  push32((uint32_t)(EDX));
  /* 107eb6c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107eb6c7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 107eb6cd push eax */
  push32((uint32_t)(EAX));
  /* 107eb6ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107eb6d3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 107eb6d9 push ecx */
  push32((uint32_t)(ECX));
  /* 107eb6da push 0x200 */
  push32((uint32_t)(0x200u));
  /* 107eb6df mov edx, dword ptr [0x10811f84] */
  EDX = (r32((uint32_t)(0x10811f84)));
  /* 107eb6e5 push edx */
  push32((uint32_t)(EDX));
  /* 107eb6e6 call 0x107ed400 */
  push32(0x107eb6ebu); f_107ed400();
  /* 107eb6eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb6ee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 107eb6f8 jmp 0x107eb709 */
  goto L_107eb709;
L_107eb6fa:;
  /* 107eb6fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb700 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb703 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_107eb709:;
  /* 107eb709 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb713 jae 0x107eb7c4 */
  if (!C.cf) goto L_107eb7c4;
  /* 107eb719 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb71f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb721 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 107eb729 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107eb72c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107eb72e je 0x107eb766 */
  if (C.zf) goto L_107eb766;
  /* 107eb730 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb736 mov cl, byte ptr [eax + 0x10811e81] */
  CL = (r8((uint32_t)(EAX + 0x10811e81)));
  /* 107eb73c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 107eb73f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb745 mov byte ptr [edx + 0x10811e81], cl */
  w8((uint32_t)(EDX + 0x10811e81), (CL));
  /* 107eb74b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb751 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb757 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 107eb75e mov byte ptr [eax + 0x10811d80], dl */
  w8((uint32_t)(EAX + 0x10811d80), (DL));
  /* 107eb764 jmp 0x107eb7bf */
  goto L_107eb7bf;
L_107eb766:;
  /* 107eb766 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb76c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107eb76e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 107eb776 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 107eb779 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107eb77b je 0x107eb7b2 */
  if (C.zf) goto L_107eb7b2;
  /* 107eb77d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb783 mov al, byte ptr [edx + 0x10811e81] */
  AL = (r8((uint32_t)(EDX + 0x10811e81)));
  /* 107eb789 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 107eb78b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb791 mov byte ptr [ecx + 0x10811e81], al */
  w8((uint32_t)(ECX + 0x10811e81), (AL));
  /* 107eb797 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb79d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb7a3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 107eb7aa mov byte ptr [edx + 0x10811d80], cl */
  w8((uint32_t)(EDX + 0x10811d80), (CL));
  /* 107eb7b0 jmp 0x107eb7bf */
  goto L_107eb7bf;
L_107eb7b2:;
  /* 107eb7b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb7b8 mov byte ptr [edx + 0x10811d80], 0 */
  w8((uint32_t)(EDX + 0x10811d80), (0x0u));
L_107eb7bf:;
  /* 107eb7bf jmp 0x107eb6fa */
  goto L_107eb6fa;
L_107eb7c4:;
  /* 107eb7c4 jmp 0x107eb88e */
  goto L_107eb88e;
L_107eb7c9:;
  /* 107eb7c9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 107eb7d3 jmp 0x107eb7e4 */
  goto L_107eb7e4;
L_107eb7d5:;
  /* 107eb7d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb7db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb7de mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_107eb7e4:;
  /* 107eb7e4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb7ee jae 0x107eb88e */
  if (!C.cf) goto L_107eb88e;
  /* 107eb7f4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb7fb jb 0x107eb838 */
  if (C.cf) goto L_107eb838;
  /* 107eb7fd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb804 ja 0x107eb838 */
  if ((!C.cf&&!C.zf)) goto L_107eb838;
  /* 107eb806 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb80c mov dl, byte ptr [ecx + 0x10811e81] */
  DL = (r8((uint32_t)(ECX + 0x10811e81)));
  /* 107eb812 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 107eb815 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb81b mov byte ptr [eax + 0x10811e81], dl */
  w8((uint32_t)(EAX + 0x10811e81), (DL));
  /* 107eb821 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb827 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb82a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb830 mov byte ptr [edx + 0x10811d80], cl */
  w8((uint32_t)(EDX + 0x10811d80), (CL));
  /* 107eb836 jmp 0x107eb889 */
  goto L_107eb889;
L_107eb838:;
  /* 107eb838 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb83f jb 0x107eb87c */
  if (C.cf) goto L_107eb87c;
  /* 107eb841 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb848 ja 0x107eb87c */
  if ((!C.cf&&!C.zf)) goto L_107eb87c;
  /* 107eb84a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb850 mov cl, byte ptr [eax + 0x10811e81] */
  CL = (r8((uint32_t)(EAX + 0x10811e81)));
  /* 107eb856 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 107eb859 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb85f mov byte ptr [edx + 0x10811e81], cl */
  w8((uint32_t)(EDX + 0x10811e81), (CL));
  /* 107eb865 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb86b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eb86e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb874 mov byte ptr [ecx + 0x10811d80], al */
  w8((uint32_t)(ECX + 0x10811d80), (AL));
  /* 107eb87a jmp 0x107eb889 */
  goto L_107eb889;
L_107eb87c:;
  /* 107eb87c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 107eb882 mov byte ptr [edx + 0x10811d80], 0 */
  w8((uint32_t)(EDX + 0x10811d80), (0x0u));
L_107eb889:;
  /* 107eb889 jmp 0x107eb7d5 */
  goto L_107eb7d5;
L_107eb88e:;
  /* 107eb88e mov esp, ebp */
  ESP = (EBP);
  /* 107eb890 pop ebp */
  EBP = (pop32());
  /* 107eb891 ret  */
  ESPCHK(0x107eb590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8a0 @ 0x107eb8a0 (23 bytes, 9 insns) */
void f_107eb8a0(void) {
  FTRACE(0x107eb8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eb8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107eb8a1 mov ebp, esp */
  EBP = (ESP);
  /* 107eb8a3 cmp dword ptr [0x10811d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10811d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb8aa je 0x107eb8b3 */
  if (C.zf) goto L_107eb8b3;
  /* 107eb8ac mov eax, dword ptr [0x10811ce4] */
  EAX = (r32((uint32_t)(0x10811ce4)));
  /* 107eb8b1 jmp 0x107eb8b5 */
  goto L_107eb8b5;
L_107eb8b3:;
  /* 107eb8b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107eb8b5:;
  /* 107eb8b5 pop ebp */
  EBP = (pop32());
  /* 107eb8b6 ret  */
  ESPCHK(0x107eb8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8c0 @ 0x107eb8c0 (34 bytes, 10 insns) */
void f_107eb8c0(void) {
  FTRACE(0x107eb8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eb8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107eb8c1 mov ebp, esp */
  EBP = (ESP);
  /* 107eb8c3 cmp dword ptr [0x10812130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10812130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb8ca jne 0x107eb8e0 */
  if (!C.zf) goto L_107eb8e0;
  /* 107eb8cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 107eb8ce call 0x107eb0e0 */
  push32(0x107eb8d3u); f_107eb0e0();
  /* 107eb8d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb8d6 mov dword ptr [0x10812130], 1 */
  w32((uint32_t)(0x10812130), (0x1u));
L_107eb8e0:;
  /* 107eb8e0 pop ebp */
  EBP = (pop32());
  /* 107eb8e1 ret  */
  ESPCHK(0x107eb8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8f0 @ 0x107eb8f0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_107eb8f0(void) {
  FTRACE(0x107eb8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eb8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107eb8f1 mov ebp, esp */
  EBP = (ESP);
  /* 107eb8f3 push edi */
  push32((uint32_t)(EDI));
  /* 107eb8f4 push esi */
  push32((uint32_t)(ESI));
  /* 107eb8f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107eb8f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107eb8fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107eb8fe mov eax, ecx */
  EAX = (ECX);
  /* 107eb900 mov edx, ecx */
  EDX = (ECX);
  /* 107eb902 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb904 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb906 jbe 0x107eb910 */
  if ((C.cf||C.zf)) goto L_107eb910;
  /* 107eb908 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb90a jb 0x107eba88 */
  if (C.cf) goto L_107eba88;
L_107eb910:;
  /* 107eb910 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107eb916 jne 0x107eb92c */
  if (!C.zf) goto L_107eb92c;
  /* 107eb918 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107eb91b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107eb91e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb921 jb 0x107eb94c */
  if (C.cf) goto L_107eb94c;
  /* 107eb923 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107eb925 jmp dword ptr [edx*4 + 0x107eba38] */
  switch (EDX) {
    case 0: goto L_107eba48;
    case 1: goto L_107eba50;
    case 2: goto L_107eba5c;
    case 3: goto L_107eba70;
    default: x86_unimpl("switch@0x107eb925 out of table"); return;
  }
L_107eb92c:;
  /* 107eb92c mov eax, edi */
  EAX = (EDI);
  /* 107eb92e mov edx, 3 */
  EDX = (0x3u);
  /* 107eb933 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eb936 jb 0x107eb944 */
  if (C.cf) goto L_107eb944;
  /* 107eb938 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107eb93b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb93d jmp dword ptr [eax*4 + 0x107eb950] */
  switch (EAX) {
    case 1: goto L_107eb960;
    case 2: goto L_107eb98c;
    case 3: goto L_107eb9b0;
    default: x86_unimpl("switch@0x107eb93d out of table"); return;
  }
L_107eb944:;
  /* 107eb944 jmp dword ptr [ecx*4 + 0x107eba48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x107eba48)))); return;
  /* 107eb94b nop  */
  /* nop */
L_107eb94c:;
  /* 107eb94c jmp dword ptr [ecx*4 + 0x107eb9cc] */
  switch (ECX) {
    case 0: goto L_107eba2f;
    case 1: goto L_107eba1c;
    case 2: goto L_107eba14;
    case 3: goto L_107eba0c;
    case 4: goto L_107eba04;
    case 5: goto L_107eb9fc;
    case 6: goto L_107eb9f4;
    case 7: goto L_107eb9ec;
    default: x86_unimpl("switch@0x107eb94c out of table"); return;
  }
  /* 107eb953 nop  */
  /* nop */
L_107eb960:;
  /* 107eb960 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb962 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107eb964 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107eb966 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107eb969 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107eb96c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107eb96f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107eb972 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107eb975 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb978 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb97b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb97e jb 0x107eb94c */
  if (C.cf) goto L_107eb94c;
  /* 107eb980 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107eb982 jmp dword ptr [edx*4 + 0x107eba38] */
  switch (EDX) {
    case 0: goto L_107eba48;
    case 1: goto L_107eba50;
    case 2: goto L_107eba5c;
    case 3: goto L_107eba70;
    default: x86_unimpl("switch@0x107eb982 out of table"); return;
  }
  /* 107eb989 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107eb98c:;
  /* 107eb98c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb98e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107eb990 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107eb992 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107eb995 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107eb998 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107eb99b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb99e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107eb9a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb9a4 jb 0x107eb94c */
  if (C.cf) goto L_107eb94c;
  /* 107eb9a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107eb9a8 jmp dword ptr [edx*4 + 0x107eba38] */
  switch (EDX) {
    case 0: goto L_107eba48;
    case 1: goto L_107eba50;
    case 2: goto L_107eba5c;
    case 3: goto L_107eba70;
    default: x86_unimpl("switch@0x107eb9a8 out of table"); return;
  }
  /* 107eb9af nop  */
  /* nop */
L_107eb9b0:;
  /* 107eb9b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107eb9b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107eb9b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107eb9b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107eb9b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107eb9ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107eb9bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eb9be jb 0x107eb94c */
  if (C.cf) goto L_107eb94c;
  /* 107eb9c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107eb9c2 jmp dword ptr [edx*4 + 0x107eba38] */
  switch (EDX) {
    case 0: goto L_107eba48;
    case 1: goto L_107eba50;
    case 2: goto L_107eba5c;
    case 3: goto L_107eba70;
    default: x86_unimpl("switch@0x107eb9c2 out of table"); return;
  }
  /* 107eb9c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107eb9ec:;
  /* 107eb9ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 107eb9f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_107eb9f4:;
  /* 107eb9f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 107eb9f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_107eb9fc:;
  /* 107eb9fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 107eba00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_107eba04:;
  /* 107eba04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 107eba08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_107eba0c:;
  /* 107eba0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 107eba10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_107eba14:;
  /* 107eba14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 107eba18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_107eba1c:;
  /* 107eba1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 107eba20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 107eba24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 107eba2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107eba2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107eba2f:;
  /* 107eba2f jmp dword ptr [edx*4 + 0x107eba38] */
  switch (EDX) {
    case 0: goto L_107eba48;
    case 1: goto L_107eba50;
    case 2: goto L_107eba5c;
    case 3: goto L_107eba70;
    default: x86_unimpl("switch@0x107eba2f out of table"); return;
  }
  /* 107eba36 mov edi, edi */
  EDI = (EDI);
L_107eba48:;
  /* 107eba48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eba4b pop esi */
  ESI = (pop32());
  /* 107eba4c pop edi */
  EDI = (pop32());
  /* 107eba4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107eba4e ret  */
  ESPCHK(0x107eb8f0u, _esp0);
  ESP += 4; return;
  /* 107eba4f nop  */
  /* nop */
L_107eba50:;
  /* 107eba50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107eba52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107eba54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eba57 pop esi */
  ESI = (pop32());
  /* 107eba58 pop edi */
  EDI = (pop32());
  /* 107eba59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107eba5a ret  */
  ESPCHK(0x107eb8f0u, _esp0);
  ESP += 4; return;
  /* 107eba5b nop  */
  /* nop */
L_107eba5c:;
  /* 107eba5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107eba5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107eba60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107eba63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107eba66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eba69 pop esi */
  ESI = (pop32());
  /* 107eba6a pop edi */
  EDI = (pop32());
  /* 107eba6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107eba6c ret  */
  ESPCHK(0x107eb8f0u, _esp0);
  ESP += 4; return;
  /* 107eba6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107eba70:;
  /* 107eba70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107eba72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107eba74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107eba77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107eba7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107eba7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107eba80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eba83 pop esi */
  ESI = (pop32());
  /* 107eba84 pop edi */
  EDI = (pop32());
  /* 107eba85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107eba86 ret  */
  ESPCHK(0x107eb8f0u, _esp0);
  ESP += 4; return;
  /* 107eba87 nop  */
  /* nop */
L_107eba88:;
  /* 107eba88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 107eba8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 107eba90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107eba96 jne 0x107ebabc */
  if (!C.zf) goto L_107ebabc;
  /* 107eba98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107eba9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107eba9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebaa1 jb 0x107ebab0 */
  if (C.cf) goto L_107ebab0;
  /* 107ebaa3 std  */
  C.df=1;
  /* 107ebaa4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ebaa6 cld  */
  C.df=0;
  /* 107ebaa7 jmp dword ptr [edx*4 + 0x107ebbd0] */
  switch (EDX) {
    case 0: goto L_107ebbe0;
    case 1: goto L_107ebbe8;
    case 2: goto L_107ebbf8;
    case 3: goto L_107ebc0c;
    default: x86_unimpl("switch@0x107ebaa7 out of table"); return;
  }
  /* 107ebaae mov edi, edi */
  EDI = (EDI);
L_107ebab0:;
  /* 107ebab0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ebab2 jmp dword ptr [ecx*4 + 0x107ebb80] */
  switch (ECX) {
    case 0: goto L_107ebbc7;
    default: x86_unimpl("switch@0x107ebab2 out of table"); return;
  }
  /* 107ebab9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ebabc:;
  /* 107ebabc mov eax, edi */
  EAX = (EDI);
  /* 107ebabe mov edx, 3 */
  EDX = (0x3u);
  /* 107ebac3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebac6 jb 0x107ebad4 */
  if (C.cf) goto L_107ebad4;
  /* 107ebac8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107ebacb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebacd jmp dword ptr [eax*4 + 0x107ebad8] */
  switch (EAX) {
    case 1: goto L_107ebae8;
    case 2: goto L_107ebb08;
    case 3: goto L_107ebb30;
    default: x86_unimpl("switch@0x107ebacd out of table"); return;
  }
L_107ebad4:;
  /* 107ebad4 jmp dword ptr [ecx*4 + 0x107ebbd0] */
  switch (ECX) {
    case 0: goto L_107ebbe0;
    case 1: goto L_107ebbe8;
    case 2: goto L_107ebbf8;
    case 3: goto L_107ebc0c;
    default: x86_unimpl("switch@0x107ebad4 out of table"); return;
  }
  /* 107ebadb nop  */
  /* nop */
L_107ebae8:;
  /* 107ebae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ebaeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ebaed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ebaf0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 107ebaf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ebaf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 107ebaf5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebaf8 jb 0x107ebab0 */
  if (C.cf) goto L_107ebab0;
  /* 107ebafa std  */
  C.df=1;
  /* 107ebafb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ebafd cld  */
  C.df=0;
  /* 107ebafe jmp dword ptr [edx*4 + 0x107ebbd0] */
  switch (EDX) {
    case 0: goto L_107ebbe0;
    case 1: goto L_107ebbe8;
    case 2: goto L_107ebbf8;
    case 3: goto L_107ebc0c;
    default: x86_unimpl("switch@0x107ebafe out of table"); return;
  }
  /* 107ebb05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ebb08:;
  /* 107ebb08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ebb0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ebb0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ebb10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ebb13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ebb16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ebb19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebb1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebb1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebb22 jb 0x107ebab0 */
  if (C.cf) goto L_107ebab0;
  /* 107ebb24 std  */
  C.df=1;
  /* 107ebb25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ebb27 cld  */
  C.df=0;
  /* 107ebb28 jmp dword ptr [edx*4 + 0x107ebbd0] */
  switch (EDX) {
    case 0: goto L_107ebbe0;
    case 1: goto L_107ebbe8;
    case 2: goto L_107ebbf8;
    case 3: goto L_107ebc0c;
    default: x86_unimpl("switch@0x107ebb28 out of table"); return;
  }
  /* 107ebb2f nop  */
  /* nop */
L_107ebb30:;
  /* 107ebb30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ebb33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ebb35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ebb38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ebb3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ebb3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ebb41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ebb44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ebb47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebb4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebb4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebb50 jb 0x107ebab0 */
  if (C.cf) goto L_107ebab0;
  /* 107ebb56 std  */
  C.df=1;
  /* 107ebb57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ebb59 cld  */
  C.df=0;
  /* 107ebb5a jmp dword ptr [edx*4 + 0x107ebbd0] */
  switch (EDX) {
    case 0: goto L_107ebbe0;
    case 1: goto L_107ebbe8;
    case 2: goto L_107ebbf8;
    case 3: goto L_107ebc0c;
    default: x86_unimpl("switch@0x107ebb5a out of table"); return;
  }
  /* 107ebb61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 107ebb64 test byte ptr [ebx - 0x4473ef82], bh */
  { uint32_t _r=(r8((uint32_t)(EBX + -0x4473ef82)))&(C.b.b.h); fl_logic(_r,8); }
  /* 107ebb6a jle 0x107ebb7c */
  if ((C.zf||C.sf!=C.of)) goto L_107ebb7c;
  /* 107ebb6c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 107ebb6d mov ebx, 0xbb9c107e */
  EBX = (0xbb9c107eu);
  /* 107ebb72 jle 0x107ebb84 */
  if ((C.zf||C.sf!=C.of)) goto L_107ebb84;
  /* 107ebb74 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 107ebb75 mov ebx, 0xbbac107e */
  EBX = (0xbbac107eu);
  /* 107ebb7a jle 0x107ebb8c */
  if ((C.zf||C.sf!=C.of)) goto L_107ebb8c;
L_107ebb7c:;
  /* 107ebb7c mov ah, 0xbb */
  AH = (0xbbu);
  /* 107ebb7e jle 0x107ebb90 */
  if ((C.zf||C.sf!=C.of)) goto L_107ebb90;
L_107ebb84:;
  /* 107ebb84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 107ebb88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
L_107ebb8c:;
  /* 107ebb8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
L_107ebb90:;
  /* 107ebb90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 107ebb94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 107ebb98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 107ebb9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 107ebba0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 107ebba4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 107ebba8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 107ebbac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 107ebbb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 107ebbb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 107ebbb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 107ebbbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 107ebbc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebbc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107ebbc7:;
  /* 107ebbc7 jmp dword ptr [edx*4 + 0x107ebbd0] */
  switch (EDX) {
    case 0: goto L_107ebbe0;
    case 1: goto L_107ebbe8;
    case 2: goto L_107ebbf8;
    case 3: goto L_107ebc0c;
    default: x86_unimpl("switch@0x107ebbc7 out of table"); return;
  }
  /* 107ebbce mov edi, edi */
  EDI = (EDI);
L_107ebbe0:;
  /* 107ebbe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ebbe3 pop esi */
  ESI = (pop32());
  /* 107ebbe4 pop edi */
  EDI = (pop32());
  /* 107ebbe5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ebbe6 ret  */
  ESPCHK(0x107eb8f0u, _esp0);
  ESP += 4; return;
  /* 107ebbe7 nop  */
  /* nop */
L_107ebbe8:;
  /* 107ebbe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ebbeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ebbee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ebbf1 pop esi */
  ESI = (pop32());
  /* 107ebbf2 pop edi */
  EDI = (pop32());
  /* 107ebbf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ebbf4 ret  */
  ESPCHK(0x107eb8f0u, _esp0);
  ESP += 4; return;
  /* 107ebbf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ebbf8:;
  /* 107ebbf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ebbfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ebbfe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ebc01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ebc04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ebc07 pop esi */
  ESI = (pop32());
  /* 107ebc08 pop edi */
  EDI = (pop32());
  /* 107ebc09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ebc0a ret  */
  ESPCHK(0x107eb8f0u, _esp0);
  ESP += 4; return;
  /* 107ebc0b nop  */
  /* nop */
L_107ebc0c:;
  /* 107ebc0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ebc0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ebc12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ebc15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ebc18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ebc1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ebc1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ebc21 pop esi */
  ESI = (pop32());
  /* 107ebc22 pop edi */
  EDI = (pop32());
  /* 107ebc23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ebc24 ret  */
  ESPCHK(0x107eb8f0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x107ebc30 (104 bytes, 43 insns) */
void f_107ebc30(void) {
  FTRACE(0x107ebc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ebc30 push ebx */
  push32((uint32_t)(EBX));
  /* 107ebc31 push esi */
  push32((uint32_t)(ESI));
  /* 107ebc32 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 107ebc36 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ebc38 jne 0x107ebc52 */
  if (!C.zf) goto L_107ebc52;
  /* 107ebc3a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 107ebc3e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 107ebc42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107ebc44 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107ebc46 mov ebx, eax */
  EBX = (EAX);
  /* 107ebc48 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 107ebc4c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107ebc4e mov edx, ebx */
  EDX = (EBX);
  /* 107ebc50 jmp 0x107ebc93 */
  goto L_107ebc93;
L_107ebc52:;
  /* 107ebc52 mov ecx, eax */
  ECX = (EAX);
  /* 107ebc54 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 107ebc58 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 107ebc5c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_107ebc60:;
  /* 107ebc60 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107ebc62 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 107ebc64 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107ebc66 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 107ebc68 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ebc6a jne 0x107ebc60 */
  if (!C.zf) goto L_107ebc60;
  /* 107ebc6c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107ebc6e mov esi, eax */
  ESI = (EAX);
  /* 107ebc70 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107ebc74 mov ecx, eax */
  ECX = (EAX);
  /* 107ebc76 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 107ebc7a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107ebc7c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebc7e jb 0x107ebc8e */
  if (C.cf) goto L_107ebc8e;
  /* 107ebc80 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebc84 ja 0x107ebc8e */
  if ((!C.cf&&!C.zf)) goto L_107ebc8e;
  /* 107ebc86 jb 0x107ebc8f */
  if (C.cf) goto L_107ebc8f;
  /* 107ebc88 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebc8c jbe 0x107ebc8f */
  if ((C.cf||C.zf)) goto L_107ebc8f;
L_107ebc8e:;
  /* 107ebc8e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_107ebc8f:;
  /* 107ebc8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107ebc91 mov eax, esi */
  EAX = (ESI);
L_107ebc93:;
  /* 107ebc93 pop esi */
  ESI = (pop32());
  /* 107ebc94 pop ebx */
  EBX = (pop32());
  /* 107ebc95 ret 0x10 */
  ESPCHK(0x107ebc30u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x107ebca0 (117 bytes, 44 insns) */
void f_107ebca0(void) {
  FTRACE(0x107ebca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ebca0 push ebx */
  push32((uint32_t)(EBX));
  /* 107ebca1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 107ebca5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ebca7 jne 0x107ebcc1 */
  if (!C.zf) goto L_107ebcc1;
  /* 107ebca9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 107ebcad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 107ebcb1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107ebcb3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107ebcb5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 107ebcb9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107ebcbb mov eax, edx */
  EAX = (EDX);
  /* 107ebcbd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107ebcbf jmp 0x107ebd11 */
  goto L_107ebd11;
L_107ebcc1:;
  /* 107ebcc1 mov ecx, eax */
  ECX = (EAX);
  /* 107ebcc3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 107ebcc7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 107ebccb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_107ebccf:;
  /* 107ebccf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107ebcd1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 107ebcd3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107ebcd5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 107ebcd7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ebcd9 jne 0x107ebccf */
  if (!C.zf) goto L_107ebccf;
  /* 107ebcdb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107ebcdd mov ecx, eax */
  ECX = (EAX);
  /* 107ebcdf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107ebce3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 107ebce4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 107ebce8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebcea jb 0x107ebcfa */
  if (C.cf) goto L_107ebcfa;
  /* 107ebcec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebcf0 ja 0x107ebcfa */
  if ((!C.cf&&!C.zf)) goto L_107ebcfa;
  /* 107ebcf2 jb 0x107ebd02 */
  if (C.cf) goto L_107ebd02;
  /* 107ebcf4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebcf8 jbe 0x107ebd02 */
  if ((C.cf||C.zf)) goto L_107ebd02;
L_107ebcfa:;
  /* 107ebcfa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebcfe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_107ebd02:;
  /* 107ebd02 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebd06 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebd0a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ebd0c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ebd0e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_107ebd11:;
  /* 107ebd11 pop ebx */
  EBX = (pop32());
  /* 107ebd12 ret 0x10 */
  ESPCHK(0x107ebca0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000bd20 @ 0x107ebd20 (628 bytes, 214 insns) */
void f_107ebd20(void) {
  FTRACE(0x107ebd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ebd20 push ebp */
  push32((uint32_t)(EBP));
  /* 107ebd21 mov ebp, esp */
  EBP = (ESP);
  /* 107ebd23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebd26 push ebx */
  push32((uint32_t)(EBX));
  /* 107ebd27 push esi */
  push32((uint32_t)(ESI));
  /* 107ebd28 push edi */
  push32((uint32_t)(EDI));
L_107ebd29:;
  /* 107ebd29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebd2d jne 0x107ebd4d */
  if (!C.zf) goto L_107ebd4d;
  /* 107ebd2f push 0x1080c1dc */
  push32((uint32_t)(0x1080c1dcu));
  /* 107ebd34 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ebd36 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 107ebd38 push 0x1080c1d0 */
  push32((uint32_t)(0x1080c1d0u));
  /* 107ebd3d push 2 */
  push32((uint32_t)(0x2u));
  /* 107ebd3f call 0x107e40d0 */
  push32(0x107ebd44u); f_107e40d0();
  /* 107ebd44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebd47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebd4a jne 0x107ebd4d */
  if (!C.zf) goto L_107ebd4d;
  /* 107ebd4c int3  */
  x86_unimpl("int3 @ 0x107ebd4c");
L_107ebd4d:;
  /* 107ebd4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ebd4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ebd51 jne 0x107ebd29 */
  if (!C.zf) goto L_107ebd29;
  /* 107ebd53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ebd56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107ebd59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebd5c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107ebd5f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107ebd62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebd65 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ebd68 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 107ebd6e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ebd70 je 0x107ebd7f */
  if (C.zf) goto L_107ebd7f;
  /* 107ebd72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebd75 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ebd78 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 107ebd7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ebd7d je 0x107ebd95 */
  if (C.zf) goto L_107ebd95;
L_107ebd7f:;
  /* 107ebd7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebd82 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107ebd85 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 107ebd87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebd8a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 107ebd8d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ebd90 jmp 0x107ebf8d */
  goto L_107ebf8d;
L_107ebd95:;
  /* 107ebd95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebd98 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107ebd9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107ebd9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ebda0 je 0x107ebdec */
  if (C.zf) goto L_107ebdec;
  /* 107ebda2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebda5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107ebdac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebdaf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107ebdb2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 107ebdb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ebdb7 je 0x107ebdd5 */
  if (C.zf) goto L_107ebdd5;
  /* 107ebdb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebdbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebdbf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107ebdc2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107ebdc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebdc7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ebdca and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 107ebdcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebdd0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107ebdd3 jmp 0x107ebdec */
  goto L_107ebdec;
L_107ebdd5:;
  /* 107ebdd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebdd8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ebddb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 107ebdde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebde1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107ebde4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ebde7 jmp 0x107ebf8d */
  goto L_107ebf8d;
L_107ebdec:;
  /* 107ebdec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebdef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ebdf2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 107ebdf5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebdf8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107ebdfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebdfe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ebe01 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 107ebe04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebe07 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107ebe0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebe0d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107ebe14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ebe1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ebe1e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107ebe21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebe24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ebe27 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 107ebe2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ebe2f jne 0x107ebe5f */
  if (!C.zf) goto L_107ebe5f;
  /* 107ebe31 cmp dword ptr [ebp - 8], 0x1080f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1080f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebe38 je 0x107ebe43 */
  if (C.zf) goto L_107ebe43;
  /* 107ebe3a cmp dword ptr [ebp - 8], 0x1080f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1080f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebe41 jne 0x107ebe53 */
  if (!C.zf) goto L_107ebe53;
L_107ebe43:;
  /* 107ebe43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ebe46 push edx */
  push32((uint32_t)(EDX));
  /* 107ebe47 call 0x107edc90 */
  push32(0x107ebe4cu); f_107edc90();
  /* 107ebe4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebe4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ebe51 jne 0x107ebe5f */
  if (!C.zf) goto L_107ebe5f;
L_107ebe53:;
  /* 107ebe53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebe56 push eax */
  push32((uint32_t)(EAX));
  /* 107ebe57 call 0x107edbc0 */
  push32(0x107ebe5cu); f_107edbc0();
  /* 107ebe5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ebe5f:;
  /* 107ebe5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebe62 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ebe65 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 107ebe6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ebe6d je 0x107ebf4b */
  if (C.zf) goto L_107ebf4b;
L_107ebe73:;
  /* 107ebe73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebe76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebe79 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 107ebe7b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebe7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ebe80 jge 0x107ebea3 */
  if ((C.sf==C.of)) goto L_107ebea3;
  /* 107ebe82 push 0x1080c190 */
  push32((uint32_t)(0x1080c190u));
  /* 107ebe87 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ebe89 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 107ebe8e push 0x1080c1d0 */
  push32((uint32_t)(0x1080c1d0u));
  /* 107ebe93 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ebe95 call 0x107e40d0 */
  push32(0x107ebe9au); f_107e40d0();
  /* 107ebe9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebe9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebea0 jne 0x107ebea3 */
  if (!C.zf) goto L_107ebea3;
  /* 107ebea2 int3  */
  x86_unimpl("int3 @ 0x107ebea2");
L_107ebea3:;
  /* 107ebea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ebea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ebea7 jne 0x107ebe73 */
  if (!C.zf) goto L_107ebe73;
  /* 107ebea9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebeac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebeaf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107ebeb1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebeb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ebeb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebeba mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107ebebd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebec0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebec3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107ebec5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebec8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107ebecb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebece mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebed1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107ebed4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebed8 jle 0x107ebef6 */
  if ((C.zf||C.sf!=C.of)) goto L_107ebef6;
  /* 107ebeda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ebedd push ecx */
  push32((uint32_t)(ECX));
  /* 107ebede mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebee1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107ebee4 push eax */
  push32((uint32_t)(EAX));
  /* 107ebee5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ebee8 push ecx */
  push32((uint32_t)(ECX));
  /* 107ebee9 call 0x107ed8b0 */
  push32(0x107ebeeeu); f_107ed8b0();
  /* 107ebeee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebef1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107ebef4 jmp 0x107ebf3e */
  goto L_107ebf3e;
L_107ebef6:;
  /* 107ebef6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebefa je 0x107ebf19 */
  if (C.zf) goto L_107ebf19;
  /* 107ebefc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ebeff sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107ebf02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ebf05 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107ebf08 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ebf0b mov ecx, dword ptr [edx*4 + 0x10811fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10811fe0)));
  /* 107ebf12 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebf14 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 107ebf17 jmp 0x107ebf20 */
  goto L_107ebf20;
L_107ebf19:;
  /* 107ebf19 mov dword ptr [ebp - 0x14], 0x1080ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1080ea60u));
L_107ebf20:;
  /* 107ebf20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107ebf23 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 107ebf27 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 107ebf2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ebf2c je 0x107ebf3e */
  if (C.zf) goto L_107ebf3e;
  /* 107ebf2e push 2 */
  push32((uint32_t)(0x2u));
  /* 107ebf30 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ebf32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ebf35 push ecx */
  push32((uint32_t)(ECX));
  /* 107ebf36 call 0x107ed760 */
  push32(0x107ebf3bu); f_107ed760();
  /* 107ebf3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ebf3e:;
  /* 107ebf3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebf41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107ebf44 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 107ebf47 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 107ebf49 jmp 0x107ebf69 */
  goto L_107ebf69;
L_107ebf4b:;
  /* 107ebf4b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107ebf52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ebf55 push edx */
  push32((uint32_t)(EDX));
  /* 107ebf56 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 107ebf59 push eax */
  push32((uint32_t)(EAX));
  /* 107ebf5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ebf5d push ecx */
  push32((uint32_t)(ECX));
  /* 107ebf5e call 0x107ed8b0 */
  push32(0x107ebf63u); f_107ed8b0();
  /* 107ebf63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebf66 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107ebf69:;
  /* 107ebf69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ebf6c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebf6f je 0x107ebf85 */
  if (C.zf) goto L_107ebf85;
  /* 107ebf71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebf74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ebf77 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 107ebf7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ebf7d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 107ebf80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ebf83 jmp 0x107ebf8d */
  goto L_107ebf8d;
L_107ebf85:;
  /* 107ebf85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ebf88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_107ebf8d:;
  /* 107ebf8d pop edi */
  EDI = (pop32());
  /* 107ebf8e pop esi */
  ESI = (pop32());
  /* 107ebf8f pop ebx */
  EBX = (pop32());
  /* 107ebf90 mov esp, ebp */
  ESP = (EBP);
  /* 107ebf92 pop ebp */
  EBP = (pop32());
  /* 107ebf93 ret  */
  ESPCHK(0x107ebd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa0 @ 0x107ebfa0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_107ebfa0(void) {
  FTRACE(0x107ebfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ebfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ebfa1 mov ebp, esp */
  EBP = (ESP);
  /* 107ebfa3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ebfa9 push ebx */
  push32((uint32_t)(EBX));
  /* 107ebfaa push esi */
  push32((uint32_t)(ESI));
  /* 107ebfab push edi */
  push32((uint32_t)(EDI));
  /* 107ebfac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107ebfb3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 107ebfbd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_107ebfc4:;
  /* 107ebfc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ebfc7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107ebfc9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 107ebfcc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ebfd0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ebfd3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ebfd6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 107ebfd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ebfdb je 0x107ecbb7 */
  if (C.zf) goto L_107ecbb7;
  /* 107ebfe1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebfe8 jl 0x107ecbb7 */
  if ((C.sf!=C.of)) goto L_107ecbb7;
  /* 107ebfee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ebff2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebff5 jl 0x107ec016 */
  if ((C.sf!=C.of)) goto L_107ec016;
  /* 107ebff7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ebffb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ebffe jg 0x107ec016 */
  if ((!C.zf&&C.sf==C.of)) goto L_107ec016;
  /* 107ec000 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec004 movsx ecx, byte ptr [eax + 0x1080c1c8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1080c1c8))));
  /* 107ec00b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 107ec00e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 107ec014 jmp 0x107ec020 */
  goto L_107ec020;
L_107ec016:;
  /* 107ec016 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_107ec020:;
  /* 107ec020 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 107ec026 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107ec029 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ec02c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ec02f movsx edx, byte ptr [ecx + eax*8 + 0x1080c1e8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1080c1e8))));
  /* 107ec037 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107ec03a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107ec03d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ec040 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 107ec046 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec04d ja 0x107ecbb2 */
  if ((!C.cf&&!C.zf)) goto L_107ecbb2;
  /* 107ec053 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 107ec059 jmp dword ptr [ecx*4 + 0x107ecbc4] */
  switch (ECX) {
    case 0: goto L_107ec060;
    case 1: goto L_107ec0fa;
    case 2: goto L_107ec13c;
    case 3: goto L_107ec1ab;
    case 4: goto L_107ec203;
    case 5: goto L_107ec212;
    case 6: goto L_107ec25e;
    case 7: goto L_107ec2f1;
    case 8: goto L_107ec188;
    case 9: goto L_107ec193;
    case 10: goto L_107ec17e;
    case 11: goto L_107ec173;
    case 12: goto L_107ec19e;
    case 13: goto L_107ec1a6;
    default: x86_unimpl("switch@0x107ec059 out of table"); return;
  }
L_107ec060:;
  /* 107ec060 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 107ec067 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ec06a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 107ec070 mov eax, dword ptr [0x1080ec98] */
  EAX = (r32((uint32_t)(0x1080ec98)));
  /* 107ec075 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ec077 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 107ec07b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 107ec081 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ec083 je 0x107ec0dd */
  if (C.zf) goto L_107ec0dd;
  /* 107ec085 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 107ec08b push edx */
  push32((uint32_t)(EDX));
  /* 107ec08c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ec08f push eax */
  push32((uint32_t)(EAX));
  /* 107ec090 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec094 push ecx */
  push32((uint32_t)(ECX));
  /* 107ec095 call 0x107eccd0 */
  push32(0x107ec09au); f_107eccd0();
  /* 107ec09a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec09d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ec0a0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107ec0a2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 107ec0a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ec0a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec0ab mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_107ec0ae:;
  /* 107ec0ae movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec0b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ec0b4 jne 0x107ec0d7 */
  if (!C.zf) goto L_107ec0d7;
  /* 107ec0b6 push 0x1080c268 */
  push32((uint32_t)(0x1080c268u));
  /* 107ec0bb push 0 */
  push32((uint32_t)(0x0u));
  /* 107ec0bd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 107ec0c2 push 0x1080c25c */
  push32((uint32_t)(0x1080c25cu));
  /* 107ec0c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ec0c9 call 0x107e40d0 */
  push32(0x107ec0ceu); f_107e40d0();
  /* 107ec0ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec0d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec0d4 jne 0x107ec0d7 */
  if (!C.zf) goto L_107ec0d7;
  /* 107ec0d6 int3  */
  x86_unimpl("int3 @ 0x107ec0d6");
L_107ec0d7:;
  /* 107ec0d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ec0d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec0db jne 0x107ec0ae */
  if (!C.zf) goto L_107ec0ae;
L_107ec0dd:;
  /* 107ec0dd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 107ec0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ec0e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ec0e7 push edx */
  push32((uint32_t)(EDX));
  /* 107ec0e8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec0ec push eax */
  push32((uint32_t)(EAX));
  /* 107ec0ed call 0x107eccd0 */
  push32(0x107ec0f2u); f_107eccd0();
  /* 107ec0f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec0f5 jmp 0x107ecbb2 */
  goto L_107ecbb2;
L_107ec0fa:;
  /* 107ec0fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107ec101 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ec104 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 107ec10a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 107ec110 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 107ec116 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 107ec11c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 107ec11f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ec126 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 107ec130 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 107ec137 jmp 0x107ecbb2 */
  goto L_107ecbb2;
L_107ec13c:;
  /* 107ec13c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec140 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 107ec146 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 107ec14c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec14f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 107ec155 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec15c ja 0x107ec1a6 */
  if ((!C.cf&&!C.zf)) goto L_107ec1a6;
  /* 107ec15e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 107ec164 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ec166 mov al, byte ptr [ecx + 0x107ecbfc] */
  AL = (r8((uint32_t)(ECX + 0x107ecbfc)));
  /* 107ec16c jmp dword ptr [eax*4 + 0x107ecbe4] */
  switch (EAX) {
    case 0: goto L_107ec188;
    case 1: goto L_107ec193;
    case 2: goto L_107ec17e;
    case 3: goto L_107ec173;
    case 4: goto L_107ec19e;
    case 5: goto L_107ec1a6;
    default: x86_unimpl("switch@0x107ec16c out of table"); return;
  }
L_107ec173:;
  /* 107ec173 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec176 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107ec179 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ec17c jmp 0x107ec1a6 */
  goto L_107ec1a6;
L_107ec17e:;
  /* 107ec17e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec181 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 107ec183 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ec186 jmp 0x107ec1a6 */
  goto L_107ec1a6;
L_107ec188:;
  /* 107ec188 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec18b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 107ec18e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ec191 jmp 0x107ec1a6 */
  goto L_107ec1a6;
L_107ec193:;
  /* 107ec193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec196 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 107ec199 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ec19c jmp 0x107ec1a6 */
  goto L_107ec1a6;
L_107ec19e:;
  /* 107ec19e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec1a1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 107ec1a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107ec1a6:;
  /* 107ec1a6 jmp 0x107ecbb2 */
  goto L_107ecbb2;
L_107ec1ab:;
  /* 107ec1ab movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec1af cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec1b2 jne 0x107ec1e7 */
  if (!C.zf) goto L_107ec1e7;
  /* 107ec1b4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ec1b7 push edx */
  push32((uint32_t)(EDX));
  /* 107ec1b8 call 0x107ecde0 */
  push32(0x107ec1bdu); f_107ecde0();
  /* 107ec1bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec1c0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 107ec1c6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec1cd jge 0x107ec1e5 */
  if ((C.sf==C.of)) goto L_107ec1e5;
  /* 107ec1cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec1d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 107ec1d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ec1d7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 107ec1dd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ec1df mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_107ec1e5:;
  /* 107ec1e5 jmp 0x107ec1fe */
  goto L_107ec1fe;
L_107ec1e7:;
  /* 107ec1e7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 107ec1ed imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ec1f0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec1f4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 107ec1f8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_107ec1fe:;
  /* 107ec1fe jmp 0x107ecbb2 */
  goto L_107ecbb2;
L_107ec203:;
  /* 107ec203 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 107ec20d jmp 0x107ecbb2 */
  goto L_107ecbb2;
L_107ec212:;
  /* 107ec212 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec216 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec219 jne 0x107ec242 */
  if (!C.zf) goto L_107ec242;
  /* 107ec21b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ec21e push eax */
  push32((uint32_t)(EAX));
  /* 107ec21f call 0x107ecde0 */
  push32(0x107ec224u); f_107ecde0();
  /* 107ec224 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec227 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 107ec22d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec234 jge 0x107ec240 */
  if ((C.sf==C.of)) goto L_107ec240;
  /* 107ec236 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_107ec240:;
  /* 107ec240 jmp 0x107ec259 */
  goto L_107ec259;
L_107ec242:;
  /* 107ec242 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ec248 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ec24b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec24f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 107ec253 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_107ec259:;
  /* 107ec259 jmp 0x107ecbb2 */
  goto L_107ecbb2;
L_107ec25e:;
  /* 107ec25e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec262 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 107ec268 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 107ec26e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec271 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 107ec277 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec27e ja 0x107ec2ec */
  if ((!C.cf&&!C.zf)) goto L_107ec2ec;
  /* 107ec280 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 107ec286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ec288 mov al, byte ptr [ecx + 0x107ecc21] */
  AL = (r8((uint32_t)(ECX + 0x107ecc21)));
  /* 107ec28e jmp dword ptr [eax*4 + 0x107ecc0d] */
  switch (EAX) {
    case 0: goto L_107ec2a0;
    case 1: goto L_107ec2d9;
    case 2: goto L_107ec295;
    case 3: goto L_107ec2e3;
    case 4: goto L_107ec2ec;
    default: x86_unimpl("switch@0x107ec28e out of table"); return;
  }
L_107ec295:;
  /* 107ec295 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec298 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 107ec29b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ec29e jmp 0x107ec2ec */
  goto L_107ec2ec;
L_107ec2a0:;
  /* 107ec2a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ec2a3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107ec2a6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec2a9 jne 0x107ec2cb */
  if (!C.zf) goto L_107ec2cb;
  /* 107ec2ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ec2ae movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107ec2b2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec2b5 jne 0x107ec2cb */
  if (!C.zf) goto L_107ec2cb;
  /* 107ec2b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ec2ba add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec2bd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107ec2c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec2c3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107ec2c6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ec2c9 jmp 0x107ec2d7 */
  goto L_107ec2d7;
L_107ec2cb:;
  /* 107ec2cb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 107ec2d2 jmp 0x107ec060 */
  goto L_107ec060;
L_107ec2d7:;
  /* 107ec2d7 jmp 0x107ec2ec */
  goto L_107ec2ec;
L_107ec2d9:;
  /* 107ec2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec2dc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 107ec2de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ec2e1 jmp 0x107ec2ec */
  goto L_107ec2ec;
L_107ec2e3:;
  /* 107ec2e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec2e6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 107ec2e9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ec2ec:;
  /* 107ec2ec jmp 0x107ecbb2 */
  goto L_107ecbb2;
L_107ec2f1:;
  /* 107ec2f1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec2f5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 107ec2fb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 107ec301 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec304 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 107ec30a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec311 ja 0x107ec9d7 */
  if ((!C.cf&&!C.zf)) goto L_107ec9d7;
  /* 107ec317 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 107ec31d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ec31f mov cl, byte ptr [edx + 0x107ecc8c] */
  CL = (r8((uint32_t)(EDX + 0x107ecc8c)));
  /* 107ec325 jmp dword ptr [ecx*4 + 0x107ecc50] */
  switch (ECX) {
    case 0: goto L_107ec32c;
    case 1: goto L_107ec5c0;
    case 2: goto L_107ec450;
    case 3: goto L_107ec6f9;
    case 4: goto L_107ec3bb;
    case 5: goto L_107ec341;
    case 6: goto L_107ec6cb;
    case 7: goto L_107ec5d0;
    case 8: goto L_107ec575;
    case 9: goto L_107ec745;
    case 10: goto L_107ec6ef;
    case 11: goto L_107ec466;
    case 12: goto L_107ec6e3;
    case 13: goto L_107ec705;
    case 14: goto L_107ec9d7;
    default: x86_unimpl("switch@0x107ec325 out of table"); return;
  }
L_107ec32c:;
  /* 107ec32c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec32f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec336 jne 0x107ec341 */
  if (!C.zf) goto L_107ec341;
  /* 107ec338 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec33b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 107ec33e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ec341:;
  /* 107ec341 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec344 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 107ec34a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ec34c je 0x107ec387 */
  if (C.zf) goto L_107ec387;
  /* 107ec34e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ec351 push eax */
  push32((uint32_t)(EAX));
  /* 107ec352 call 0x107ece20 */
  push32(0x107ec357u); f_107ece20();
  /* 107ec357 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec35a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 107ec35e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 107ec362 push ecx */
  push32((uint32_t)(ECX));
  /* 107ec363 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 107ec369 push edx */
  push32((uint32_t)(EDX));
  /* 107ec36a call 0x107edf00 */
  push32(0x107ec36fu); f_107edf00();
  /* 107ec36f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec372 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107ec375 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec379 jge 0x107ec385 */
  if ((C.sf==C.of)) goto L_107ec385;
  /* 107ec37b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_107ec385:;
  /* 107ec385 jmp 0x107ec3ad */
  goto L_107ec3ad;
L_107ec387:;
  /* 107ec387 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ec38a push eax */
  push32((uint32_t)(EAX));
  /* 107ec38b call 0x107ecde0 */
  push32(0x107ec390u); f_107ecde0();
  /* 107ec390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec393 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 107ec39a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 107ec3a0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 107ec3a6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_107ec3ad:;
  /* 107ec3ad lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 107ec3b3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107ec3b6 jmp 0x107ec9d7 */
  goto L_107ec9d7;
L_107ec3bb:;
  /* 107ec3bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ec3be push eax */
  push32((uint32_t)(EAX));
  /* 107ec3bf call 0x107ecde0 */
  push32(0x107ec3c4u); f_107ecde0();
  /* 107ec3c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec3c7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 107ec3cd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec3d4 je 0x107ec3e2 */
  if (C.zf) goto L_107ec3e2;
  /* 107ec3d6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ec3dc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec3e0 jne 0x107ec3fc */
  if (!C.zf) goto L_107ec3fc;
L_107ec3e2:;
  /* 107ec3e2 mov edx, dword ptr [0x1080efb0] */
  EDX = (r32((uint32_t)(0x1080efb0)));
  /* 107ec3e8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107ec3eb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec3ee push eax */
  push32((uint32_t)(EAX));
  /* 107ec3ef call 0x107e7e40 */
  push32(0x107ec3f4u); f_107e7e40();
  /* 107ec3f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec3f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107ec3fa jmp 0x107ec44b */
  goto L_107ec44b;
L_107ec3fc:;
  /* 107ec3fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec3ff and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 107ec405 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ec407 je 0x107ec42c */
  if (C.zf) goto L_107ec42c;
  /* 107ec409 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ec40f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107ec412 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ec415 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ec41b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 107ec41e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107ec420 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107ec423 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 107ec42a jmp 0x107ec44b */
  goto L_107ec44b;
L_107ec42c:;
  /* 107ec42c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 107ec433 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ec439 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107ec43c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107ec43f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 107ec445 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 107ec448 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_107ec44b:;
  /* 107ec44b jmp 0x107ec9d7 */
  goto L_107ec9d7;
L_107ec450:;
  /* 107ec450 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec453 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 107ec459 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ec45b jne 0x107ec466 */
  if (!C.zf) goto L_107ec466;
  /* 107ec45d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec460 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107ec463 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ec466:;
  /* 107ec466 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec46d jne 0x107ec47b */
  if (!C.zf) goto L_107ec47b;
  /* 107ec46f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 107ec479 jmp 0x107ec487 */
  goto L_107ec487;
L_107ec47b:;
  /* 107ec47b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ec481 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_107ec487:;
  /* 107ec487 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 107ec48d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 107ec493 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ec496 push edx */
  push32((uint32_t)(EDX));
  /* 107ec497 call 0x107ecde0 */
  push32(0x107ec49cu); f_107ecde0();
  /* 107ec49c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec49f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ec4a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec4a5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec4aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec4ac je 0x107ec516 */
  if (C.zf) goto L_107ec516;
  /* 107ec4ae cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec4b2 jne 0x107ec4bd */
  if (!C.zf) goto L_107ec4bd;
  /* 107ec4b4 mov ecx, dword ptr [0x1080efb4] */
  ECX = (r32((uint32_t)(0x1080efb4)));
  /* 107ec4ba mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_107ec4bd:;
  /* 107ec4bd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 107ec4c4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec4c7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_107ec4cd:;
  /* 107ec4cd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 107ec4d3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 107ec4d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec4dc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 107ec4e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec4e4 je 0x107ec506 */
  if (C.zf) goto L_107ec506;
  /* 107ec4e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 107ec4ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ec4ee mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 107ec4f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec4f3 je 0x107ec506 */
  if (C.zf) goto L_107ec506;
  /* 107ec4f5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 107ec4fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec4fe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 107ec504 jmp 0x107ec4cd */
  goto L_107ec4cd;
L_107ec506:;
  /* 107ec506 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 107ec50c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec50f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107ec511 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107ec514 jmp 0x107ec570 */
  goto L_107ec570;
L_107ec516:;
  /* 107ec516 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec51a jne 0x107ec524 */
  if (!C.zf) goto L_107ec524;
  /* 107ec51c mov eax, dword ptr [0x1080efb0] */
  EAX = (r32((uint32_t)(0x1080efb0)));
  /* 107ec521 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_107ec524:;
  /* 107ec524 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec527 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_107ec52d:;
  /* 107ec52d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 107ec533 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 107ec539 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec53c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 107ec542 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ec544 je 0x107ec564 */
  if (C.zf) goto L_107ec564;
  /* 107ec546 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 107ec54c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ec54f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ec551 je 0x107ec564 */
  if (C.zf) goto L_107ec564;
  /* 107ec553 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 107ec559 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec55c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 107ec562 jmp 0x107ec52d */
  goto L_107ec52d;
L_107ec564:;
  /* 107ec564 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 107ec56a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec56d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_107ec570:;
  /* 107ec570 jmp 0x107ec9d7 */
  goto L_107ec9d7;
L_107ec575:;
  /* 107ec575 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ec578 push edx */
  push32((uint32_t)(EDX));
  /* 107ec579 call 0x107ecde0 */
  push32(0x107ec57eu); f_107ecde0();
  /* 107ec57e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec581 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 107ec587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec58a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec58d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec58f je 0x107ec5a3 */
  if (C.zf) goto L_107ec5a3;
  /* 107ec591 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 107ec597 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 107ec59e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 107ec5a1 jmp 0x107ec5b1 */
  goto L_107ec5b1;
L_107ec5a3:;
  /* 107ec5a3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 107ec5a9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 107ec5af mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_107ec5b1:;
  /* 107ec5b1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 107ec5bb jmp 0x107ec9d7 */
  goto L_107ec9d7;
L_107ec5c0:;
  /* 107ec5c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107ec5c7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 107ec5ca add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 107ec5cd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_107ec5d0:;
  /* 107ec5d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec5d3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 107ec5d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ec5d8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 107ec5de mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107ec5e1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec5e8 jge 0x107ec5f6 */
  if ((C.sf==C.of)) goto L_107ec5f6;
  /* 107ec5ea mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 107ec5f4 jmp 0x107ec612 */
  goto L_107ec612;
L_107ec5f6:;
  /* 107ec5f6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec5fd jne 0x107ec612 */
  if (!C.zf) goto L_107ec612;
  /* 107ec5ff movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec603 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec606 jne 0x107ec612 */
  if (!C.zf) goto L_107ec612;
  /* 107ec608 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_107ec612:;
  /* 107ec612 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ec615 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec618 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 107ec61b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ec61e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec621 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107ec623 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ec626 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 107ec62c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 107ec632 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ec635 push ecx */
  push32((uint32_t)(ECX));
  /* 107ec636 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ec63c push edx */
  push32((uint32_t)(EDX));
  /* 107ec63d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec641 push eax */
  push32((uint32_t)(EAX));
  /* 107ec642 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec645 push ecx */
  push32((uint32_t)(ECX));
  /* 107ec646 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 107ec64c push edx */
  push32((uint32_t)(EDX));
  /* 107ec64d call dword ptr [0x1080f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1080f3a0))), 0x107ec653u);
  /* 107ec653 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec659 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec65e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec660 je 0x107ec678 */
  if (C.zf) goto L_107ec678;
  /* 107ec662 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec669 jne 0x107ec678 */
  if (!C.zf) goto L_107ec678;
  /* 107ec66b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec66e push ecx */
  push32((uint32_t)(ECX));
  /* 107ec66f call dword ptr [0x1080f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1080f3ac))), 0x107ec675u);
  /* 107ec675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ec678:;
  /* 107ec678 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 107ec67c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec67f jne 0x107ec69a */
  if (!C.zf) goto L_107ec69a;
  /* 107ec681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec684 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec68b jne 0x107ec69a */
  if (!C.zf) goto L_107ec69a;
  /* 107ec68d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec690 push ecx */
  push32((uint32_t)(ECX));
  /* 107ec691 call dword ptr [0x1080f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1080f3a4))), 0x107ec697u);
  /* 107ec697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ec69a:;
  /* 107ec69a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec69d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107ec6a0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec6a3 jne 0x107ec6b7 */
  if (!C.zf) goto L_107ec6b7;
  /* 107ec6a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec6a8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 107ec6ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ec6ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec6b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec6b4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_107ec6b7:;
  /* 107ec6b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec6ba push eax */
  push32((uint32_t)(EAX));
  /* 107ec6bb call 0x107e7e40 */
  push32(0x107ec6c0u); f_107e7e40();
  /* 107ec6c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec6c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107ec6c6 jmp 0x107ec9d7 */
  goto L_107ec9d7;
L_107ec6cb:;
  /* 107ec6cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec6ce or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 107ec6d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ec6d4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 107ec6de jmp 0x107ec765 */
  goto L_107ec765;
L_107ec6e3:;
  /* 107ec6e3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 107ec6ed jmp 0x107ec765 */
  goto L_107ec765;
L_107ec6ef:;
  /* 107ec6ef mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_107ec6f9:;
  /* 107ec6f9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 107ec703 jmp 0x107ec70f */
  goto L_107ec70f;
L_107ec705:;
  /* 107ec705 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_107ec70f:;
  /* 107ec70f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 107ec719 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec71c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 107ec722 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ec724 je 0x107ec743 */
  if (C.zf) goto L_107ec743;
  /* 107ec726 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 107ec72d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 107ec733 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec736 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 107ec73c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_107ec743:;
  /* 107ec743 jmp 0x107ec765 */
  goto L_107ec765;
L_107ec745:;
  /* 107ec745 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 107ec74f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec752 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 107ec758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ec75a je 0x107ec765 */
  if (C.zf) goto L_107ec765;
  /* 107ec75c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec75f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107ec762 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ec765:;
  /* 107ec765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec768 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec76f je 0x107ec78e */
  if (C.zf) goto L_107ec78e;
  /* 107ec771 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 107ec774 push ecx */
  push32((uint32_t)(ECX));
  /* 107ec775 call 0x107ece00 */
  push32(0x107ec77au); f_107ece00();
  /* 107ec77a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec77d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ec783 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 107ec789 jmp 0x107ec81f */
  goto L_107ec81f;
L_107ec78e:;
  /* 107ec78e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec791 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 107ec794 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ec796 je 0x107ec7e0 */
  if (C.zf) goto L_107ec7e0;
  /* 107ec798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec79b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec79e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec7a0 je 0x107ec7c0 */
  if (C.zf) goto L_107ec7c0;
  /* 107ec7a2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 107ec7a5 push ecx */
  push32((uint32_t)(ECX));
  /* 107ec7a6 call 0x107ecde0 */
  push32(0x107ec7abu); f_107ecde0();
  /* 107ec7ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec7ae movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 107ec7b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ec7b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ec7b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 107ec7be jmp 0x107ec7de */
  goto L_107ec7de;
L_107ec7c0:;
  /* 107ec7c0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ec7c3 push edx */
  push32((uint32_t)(EDX));
  /* 107ec7c4 call 0x107ecde0 */
  push32(0x107ec7c9u); f_107ecde0();
  /* 107ec7c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec7cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ec7d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ec7d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ec7d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_107ec7de:;
  /* 107ec7de jmp 0x107ec81f */
  goto L_107ec81f;
L_107ec7e0:;
  /* 107ec7e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec7e3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec7e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec7e8 je 0x107ec805 */
  if (C.zf) goto L_107ec805;
  /* 107ec7ea lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 107ec7ed push ecx */
  push32((uint32_t)(ECX));
  /* 107ec7ee call 0x107ecde0 */
  push32(0x107ec7f3u); f_107ecde0();
  /* 107ec7f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec7f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ec7f7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ec7fd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 107ec803 jmp 0x107ec81f */
  goto L_107ec81f;
L_107ec805:;
  /* 107ec805 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 107ec808 push edx */
  push32((uint32_t)(EDX));
  /* 107ec809 call 0x107ecde0 */
  push32(0x107ec80eu); f_107ecde0();
  /* 107ec80e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec811 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ec813 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 107ec819 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_107ec81f:;
  /* 107ec81f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec822 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 107ec825 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ec827 je 0x107ec867 */
  if (C.zf) goto L_107ec867;
  /* 107ec829 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec830 jg 0x107ec867 */
  if ((!C.zf&&C.sf==C.of)) goto L_107ec867;
  /* 107ec832 jl 0x107ec83d */
  if ((C.sf!=C.of)) goto L_107ec83d;
  /* 107ec834 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec83b jae 0x107ec867 */
  if (!C.cf) goto L_107ec867;
L_107ec83d:;
  /* 107ec83d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 107ec843 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ec845 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 107ec84b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec84e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ec850 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 107ec856 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 107ec85c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec85f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107ec862 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ec865 jmp 0x107ec87f */
  goto L_107ec87f;
L_107ec867:;
  /* 107ec867 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 107ec86d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 107ec873 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 107ec879 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_107ec87f:;
  /* 107ec87f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec882 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 107ec888 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ec88a jne 0x107ec8a7 */
  if (!C.zf) goto L_107ec8a7;
  /* 107ec88c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ec892 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 107ec898 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 107ec89b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 107ec8a1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_107ec8a7:;
  /* 107ec8a7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec8ae jge 0x107ec8bc */
  if ((C.sf==C.of)) goto L_107ec8bc;
  /* 107ec8b0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 107ec8ba jmp 0x107ec8c5 */
  goto L_107ec8c5;
L_107ec8bc:;
  /* 107ec8bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec8bf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 107ec8c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ec8c5:;
  /* 107ec8c5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ec8cb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 107ec8d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec8d3 jne 0x107ec8dc */
  if (!C.zf) goto L_107ec8dc;
  /* 107ec8d5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_107ec8dc:;
  /* 107ec8dc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 107ec8df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_107ec8e2:;
  /* 107ec8e2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ec8e8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 107ec8ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec8f1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 107ec8f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ec8f9 jg 0x107ec90f */
  if ((!C.zf&&C.sf==C.of)) goto L_107ec90f;
  /* 107ec8fb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ec901 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 107ec907 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ec909 je 0x107ec990 */
  if (C.zf) goto L_107ec990;
L_107ec90f:;
  /* 107ec90f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 107ec915 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ec916 push edx */
  push32((uint32_t)(EDX));
  /* 107ec917 push eax */
  push32((uint32_t)(EAX));
  /* 107ec918 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 107ec91e push edx */
  push32((uint32_t)(EDX));
  /* 107ec91f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ec925 push eax */
  push32((uint32_t)(EAX));
  /* 107ec926 call 0x107ebca0 */
  push32(0x107ec92bu); f_107ebca0();
  /* 107ec92b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec92e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 107ec934 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 107ec93a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ec93b push edx */
  push32((uint32_t)(EDX));
  /* 107ec93c push eax */
  push32((uint32_t)(EAX));
  /* 107ec93d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 107ec943 push ecx */
  push32((uint32_t)(ECX));
  /* 107ec944 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 107ec94a push edx */
  push32((uint32_t)(EDX));
  /* 107ec94b call 0x107ebc30 */
  push32(0x107ec950u); f_107ebc30();
  /* 107ec950 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 107ec956 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 107ec95c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec963 jle 0x107ec977 */
  if ((C.zf||C.sf!=C.of)) goto L_107ec977;
  /* 107ec965 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 107ec96b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec971 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_107ec977:;
  /* 107ec977 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec97a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 107ec980 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 107ec982 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec985 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec988 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ec98b jmp 0x107ec8e2 */
  goto L_107ec8e2;
L_107ec990:;
  /* 107ec990 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 107ec993 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec996 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107ec999 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec99c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec99f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107ec9a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec9a5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec9aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec9ac je 0x107ec9d7 */
  if (C.zf) goto L_107ec9d7;
  /* 107ec9ae mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec9b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ec9b4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec9b7 jne 0x107ec9bf */
  if (!C.zf) goto L_107ec9bf;
  /* 107ec9b9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec9bd jne 0x107ec9d7 */
  if (!C.zf) goto L_107ec9d7;
L_107ec9bf:;
  /* 107ec9bf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec9c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ec9c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ec9c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ec9cb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 107ec9ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ec9d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ec9d4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_107ec9d7:;
  /* 107ec9d7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ec9de jne 0x107ecbb2 */
  if (!C.zf) goto L_107ecbb2;
  /* 107ec9e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec9e7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 107ec9ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ec9ec je 0x107eca3d */
  if (C.zf) goto L_107eca3d;
  /* 107ec9ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ec9f1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 107ec9f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ec9f9 je 0x107eca0b */
  if (C.zf) goto L_107eca0b;
  /* 107ec9fb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 107eca02 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 107eca09 jmp 0x107eca3d */
  goto L_107eca3d;
L_107eca0b:;
  /* 107eca0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eca0e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107eca11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107eca13 je 0x107eca25 */
  if (C.zf) goto L_107eca25;
  /* 107eca15 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 107eca1c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 107eca23 jmp 0x107eca3d */
  goto L_107eca3d;
L_107eca25:;
  /* 107eca25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eca28 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 107eca2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eca2d je 0x107eca3d */
  if (C.zf) goto L_107eca3d;
  /* 107eca2f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 107eca36 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_107eca3d:;
  /* 107eca3d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 107eca43 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eca46 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eca49 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 107eca4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eca52 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 107eca55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107eca57 jne 0x107eca75 */
  if (!C.zf) goto L_107eca75;
  /* 107eca59 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107eca5f push eax */
  push32((uint32_t)(EAX));
  /* 107eca60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eca63 push ecx */
  push32((uint32_t)(ECX));
  /* 107eca64 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 107eca6a push edx */
  push32((uint32_t)(EDX));
  /* 107eca6b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107eca6d call 0x107ecd50 */
  push32(0x107eca72u); f_107ecd50();
  /* 107eca72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107eca75:;
  /* 107eca75 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107eca7b push eax */
  push32((uint32_t)(EAX));
  /* 107eca7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eca7f push ecx */
  push32((uint32_t)(ECX));
  /* 107eca80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eca83 push edx */
  push32((uint32_t)(EDX));
  /* 107eca84 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 107eca8a push eax */
  push32((uint32_t)(EAX));
  /* 107eca8b call 0x107ecd90 */
  push32(0x107eca90u); f_107ecd90();
  /* 107eca90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eca93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eca96 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 107eca99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107eca9b je 0x107ecac3 */
  if (C.zf) goto L_107ecac3;
  /* 107eca9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ecaa0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107ecaa3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ecaa5 jne 0x107ecac3 */
  if (!C.zf) goto L_107ecac3;
  /* 107ecaa7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107ecaad push eax */
  push32((uint32_t)(EAX));
  /* 107ecaae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecab1 push ecx */
  push32((uint32_t)(ECX));
  /* 107ecab2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 107ecab8 push edx */
  push32((uint32_t)(EDX));
  /* 107ecab9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 107ecabb call 0x107ecd50 */
  push32(0x107ecac0u); f_107ecd50();
  /* 107ecac0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ecac3:;
  /* 107ecac3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecac7 je 0x107ecb71 */
  if (C.zf) goto L_107ecb71;
  /* 107ecacd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecad1 jle 0x107ecb71 */
  if ((C.zf||C.sf!=C.of)) goto L_107ecb71;
  /* 107ecad7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ecada mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 107ecae0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ecae3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_107ecae9:;
  /* 107ecae9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 107ecaef mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 107ecaf5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ecaf8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 107ecafe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ecb00 je 0x107ecb6f */
  if (C.zf) goto L_107ecb6f;
  /* 107ecb02 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 107ecb08 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 107ecb0b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 107ecb12 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 107ecb19 push eax */
  push32((uint32_t)(EAX));
  /* 107ecb1a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 107ecb20 push ecx */
  push32((uint32_t)(ECX));
  /* 107ecb21 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 107ecb27 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecb2a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 107ecb30 call 0x107edf00 */
  push32(0x107ecb35u); f_107edf00();
  /* 107ecb35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecb38 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 107ecb3e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecb45 jg 0x107ecb49 */
  if ((!C.zf&&C.sf==C.of)) goto L_107ecb49;
  /* 107ecb47 jmp 0x107ecb6f */
  goto L_107ecb6f;
L_107ecb49:;
  /* 107ecb49 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107ecb4f push eax */
  push32((uint32_t)(EAX));
  /* 107ecb50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecb53 push ecx */
  push32((uint32_t)(ECX));
  /* 107ecb54 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 107ecb5a push edx */
  push32((uint32_t)(EDX));
  /* 107ecb5b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 107ecb61 push eax */
  push32((uint32_t)(EAX));
  /* 107ecb62 call 0x107ecd90 */
  push32(0x107ecb67u); f_107ecd90();
  /* 107ecb67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecb6a jmp 0x107ecae9 */
  goto L_107ecae9;
L_107ecb6f:;
  /* 107ecb6f jmp 0x107ecb8c */
  goto L_107ecb8c;
L_107ecb71:;
  /* 107ecb71 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 107ecb77 push ecx */
  push32((uint32_t)(ECX));
  /* 107ecb78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecb7b push edx */
  push32((uint32_t)(EDX));
  /* 107ecb7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ecb7f push eax */
  push32((uint32_t)(EAX));
  /* 107ecb80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ecb83 push ecx */
  push32((uint32_t)(ECX));
  /* 107ecb84 call 0x107ecd90 */
  push32(0x107ecb89u); f_107ecd90();
  /* 107ecb89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ecb8c:;
  /* 107ecb8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ecb8f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107ecb92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ecb94 je 0x107ecbb2 */
  if (C.zf) goto L_107ecbb2;
  /* 107ecb96 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 107ecb9c push eax */
  push32((uint32_t)(EAX));
  /* 107ecb9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecba0 push ecx */
  push32((uint32_t)(ECX));
  /* 107ecba1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 107ecba7 push edx */
  push32((uint32_t)(EDX));
  /* 107ecba8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107ecbaa call 0x107ecd50 */
  push32(0x107ecbafu); f_107ecd50();
  /* 107ecbaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ecbb2:;
  /* 107ecbb2 jmp 0x107ebfc4 */
  goto L_107ebfc4;
L_107ecbb7:;
  /* 107ecbb7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 107ecbbd pop edi */
  EDI = (pop32());
  /* 107ecbbe pop esi */
  ESI = (pop32());
  /* 107ecbbf pop ebx */
  EBX = (pop32());
  /* 107ecbc0 mov esp, ebp */
  ESP = (EBP);
  /* 107ecbc2 pop ebp */
  EBP = (pop32());
  /* 107ecbc3 ret  */
  ESPCHK(0x107ebfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccd0 @ 0x107eccd0 (119 bytes, 44 insns) */
void f_107eccd0(void) {
  FTRACE(0x107eccd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eccd0 push ebp */
  push32((uint32_t)(EBP));
  /* 107eccd1 mov ebp, esp */
  EBP = (ESP);
  /* 107eccd3 push ecx */
  push32((uint32_t)(ECX));
  /* 107eccd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eccd7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107eccda sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eccdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecce0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107ecce3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecce6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eccea jl 0x107ecd12 */
  if ((C.sf!=C.of)) goto L_107ecd12;
  /* 107eccec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eccef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107eccf1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 107eccf4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 107eccf6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 107eccfa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 107ecd00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ecd03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecd06 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107ecd08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecd0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecd0e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107ecd10 jmp 0x107ecd25 */
  goto L_107ecd25;
L_107ecd12:;
  /* 107ecd12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecd15 push edx */
  push32((uint32_t)(EDX));
  /* 107ecd16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecd19 push eax */
  push32((uint32_t)(EAX));
  /* 107ecd1a call 0x107ebd20 */
  push32(0x107ecd1fu); f_107ebd20();
  /* 107ecd1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecd22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107ecd25:;
  /* 107ecd25 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecd29 jne 0x107ecd36 */
  if (!C.zf) goto L_107ecd36;
  /* 107ecd2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ecd2e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107ecd34 jmp 0x107ecd43 */
  goto L_107ecd43;
L_107ecd36:;
  /* 107ecd36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ecd39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107ecd3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecd3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ecd41 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_107ecd43:;
  /* 107ecd43 mov esp, ebp */
  ESP = (EBP);
  /* 107ecd45 pop ebp */
  EBP = (pop32());
  /* 107ecd46 ret  */
  ESPCHK(0x107eccd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd50 @ 0x107ecd50 (53 bytes, 23 insns) */
void f_107ecd50(void) {
  FTRACE(0x107ecd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ecd50 push ebp */
  push32((uint32_t)(EBP));
  /* 107ecd51 mov ebp, esp */
  EBP = (ESP);
L_107ecd53:;
  /* 107ecd53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecd56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecd59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ecd5c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107ecd5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ecd61 jle 0x107ecd83 */
  if ((C.zf||C.sf!=C.of)) goto L_107ecd83;
  /* 107ecd63 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ecd66 push edx */
  push32((uint32_t)(EDX));
  /* 107ecd67 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ecd6a push eax */
  push32((uint32_t)(EAX));
  /* 107ecd6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecd6e push ecx */
  push32((uint32_t)(ECX));
  /* 107ecd6f call 0x107eccd0 */
  push32(0x107ecd74u); f_107eccd0();
  /* 107ecd74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecd77 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ecd7a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecd7d jne 0x107ecd81 */
  if (!C.zf) goto L_107ecd81;
  /* 107ecd7f jmp 0x107ecd83 */
  goto L_107ecd83;
L_107ecd81:;
  /* 107ecd81 jmp 0x107ecd53 */
  goto L_107ecd53;
L_107ecd83:;
  /* 107ecd83 pop ebp */
  EBP = (pop32());
  /* 107ecd84 ret  */
  ESPCHK(0x107ecd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd90 @ 0x107ecd90 (74 bytes, 31 insns) */
void f_107ecd90(void) {
  FTRACE(0x107ecd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ecd90 push ebp */
  push32((uint32_t)(EBP));
  /* 107ecd91 mov ebp, esp */
  EBP = (ESP);
  /* 107ecd93 push ecx */
  push32((uint32_t)(ECX));
L_107ecd94:;
  /* 107ecd94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecd97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecd9a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ecd9d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107ecda0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ecda2 jle 0x107ecdd6 */
  if ((C.zf||C.sf!=C.of)) goto L_107ecdd6;
  /* 107ecda4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ecda7 push edx */
  push32((uint32_t)(EDX));
  /* 107ecda8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ecdab push eax */
  push32((uint32_t)(EAX));
  /* 107ecdac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecdaf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ecdb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ecdb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ecdb8 push eax */
  push32((uint32_t)(EAX));
  /* 107ecdb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecdbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecdbf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107ecdc2 call 0x107eccd0 */
  push32(0x107ecdc7u); f_107eccd0();
  /* 107ecdc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecdca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ecdcd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecdd0 jne 0x107ecdd4 */
  if (!C.zf) goto L_107ecdd4;
  /* 107ecdd2 jmp 0x107ecdd6 */
  goto L_107ecdd6;
L_107ecdd4:;
  /* 107ecdd4 jmp 0x107ecd94 */
  goto L_107ecd94;
L_107ecdd6:;
  /* 107ecdd6 mov esp, ebp */
  ESP = (EBP);
  /* 107ecdd8 pop ebp */
  EBP = (pop32());
  /* 107ecdd9 ret  */
  ESPCHK(0x107ecd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cde0 @ 0x107ecde0 (26 bytes, 12 insns) */
void f_107ecde0(void) {
  FTRACE(0x107ecde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ecde0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ecde1 mov ebp, esp */
  EBP = (ESP);
  /* 107ecde3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecde6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ecde8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecdeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecdee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107ecdf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecdf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ecdf5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 107ecdf8 pop ebp */
  EBP = (pop32());
  /* 107ecdf9 ret  */
  ESPCHK(0x107ecde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce00 @ 0x107ece00 (31 bytes, 14 insns) */
void f_107ece00(void) {
  FTRACE(0x107ece00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ece00 push ebp */
  push32((uint32_t)(EBP));
  /* 107ece01 mov ebp, esp */
  EBP = (ESP);
  /* 107ece03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ece06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ece08 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ece0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ece0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107ece10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ece13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ece15 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ece18 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 107ece1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107ece1d pop ebp */
  EBP = (pop32());
  /* 107ece1e ret  */
  ESPCHK(0x107ece00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce20 @ 0x107ece20 (27 bytes, 12 insns) */
void f_107ece20(void) {
  FTRACE(0x107ece20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ece20 push ebp */
  push32((uint32_t)(EBP));
  /* 107ece21 mov ebp, esp */
  EBP = (ESP);
  /* 107ece23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ece26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ece28 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ece2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ece2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 107ece30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ece33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107ece35 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 107ece39 pop ebp */
  EBP = (pop32());
  /* 107ece3a ret  */
  ESPCHK(0x107ece20u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x107ece40 (145 bytes, 42 insns) */
void f_107ece40(void) {
  FTRACE(0x107ece40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ece40 push ebp */
  push32((uint32_t)(EBP));
  /* 107ece41 mov ebp, esp */
  EBP = (ESP);
  /* 107ece43 push ecx */
  push32((uint32_t)(ECX));
  /* 107ece44 call 0x107ecef0 */
  push32(0x107ece49u); f_107ecef0();
  /* 107ece49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ece4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107ece4e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ece55 jmp 0x107ece60 */
  goto L_107ece60;
L_107ece57:;
  /* 107ece57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ece5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ece5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ece60:;
  /* 107ece60 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ece64 jae 0x107ece8a */
  if (!C.cf) goto L_107ece8a;
  /* 107ece66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ece69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ece6c cmp ecx, dword ptr [eax*8 + 0x1080efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1080efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ece73 jne 0x107ece88 */
  if (!C.zf) goto L_107ece88;
  /* 107ece75 call 0x107ecee0 */
  push32(0x107ece7au); f_107ecee0();
  /* 107ece7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ece7d mov ecx, dword ptr [edx*8 + 0x1080efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1080efbc)));
  /* 107ece84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107ece86 jmp 0x107ececd */
  goto L_107ececd;
L_107ece88:;
  /* 107ece88 jmp 0x107ece57 */
  goto L_107ece57;
L_107ece8a:;
  /* 107ece8a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ece8e jb 0x107ecea3 */
  if (C.cf) goto L_107ecea3;
  /* 107ece90 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ece94 ja 0x107ecea3 */
  if ((!C.cf&&!C.zf)) goto L_107ecea3;
  /* 107ece96 call 0x107ecee0 */
  push32(0x107ece9bu); f_107ecee0();
  /* 107ece9b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 107ecea1 jmp 0x107ececd */
  goto L_107ececd;
L_107ecea3:;
  /* 107ecea3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eceaa jb 0x107ecec2 */
  if (C.cf) goto L_107ecec2;
  /* 107eceac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eceb3 ja 0x107ecec2 */
  if ((!C.cf&&!C.zf)) goto L_107ecec2;
  /* 107eceb5 call 0x107ecee0 */
  push32(0x107ecebau); f_107ecee0();
  /* 107eceba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 107ecec0 jmp 0x107ececd */
  goto L_107ececd;
L_107ecec2:;
  /* 107ecec2 call 0x107ecee0 */
  push32(0x107ecec7u); f_107ecee0();
  /* 107ecec7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_107ececd:;
  /* 107ececd mov esp, ebp */
  ESP = (EBP);
  /* 107ececf pop ebp */
  EBP = (pop32());
  /* 107eced0 ret  */
  ESPCHK(0x107ece40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cee0 @ 0x107ecee0 (13 bytes, 6 insns) */
void f_107ecee0(void) {
  FTRACE(0x107ecee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ecee0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ecee1 mov ebp, esp */
  EBP = (ESP);
  /* 107ecee3 call 0x107e4a50 */
  push32(0x107ecee8u); f_107e4a50();
  /* 107ecee8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eceeb pop ebp */
  EBP = (pop32());
  /* 107eceec ret  */
  ESPCHK(0x107ecee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cef0 @ 0x107ecef0 (13 bytes, 6 insns) */
void f_107ecef0(void) {
  FTRACE(0x107ecef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ecef0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ecef1 mov ebp, esp */
  EBP = (ESP);
  /* 107ecef3 call 0x107e4a50 */
  push32(0x107ecef8u); f_107e4a50();
  /* 107ecef8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecefb pop ebp */
  EBP = (pop32());
  /* 107ecefc ret  */
  ESPCHK(0x107ecef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x107ecf00 (664 bytes, 263 insns) [15 switch table(s)] */
void f_107ecf00(void) {
  FTRACE(0x107ecf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ecf00 push ebp */
  push32((uint32_t)(EBP));
  /* 107ecf01 mov ebp, esp */
  EBP = (ESP);
  /* 107ecf03 push edi */
  push32((uint32_t)(EDI));
  /* 107ecf04 push esi */
  push32((uint32_t)(ESI));
  /* 107ecf05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107ecf08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ecf0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107ecf0e mov eax, ecx */
  EAX = (ECX);
  /* 107ecf10 mov edx, ecx */
  EDX = (ECX);
  /* 107ecf12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecf14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecf16 jbe 0x107ecf20 */
  if ((C.cf||C.zf)) goto L_107ecf20;
  /* 107ecf18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecf1a jb 0x107ed098 */
  if (C.cf) goto L_107ed098;
L_107ecf20:;
  /* 107ecf20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107ecf26 jne 0x107ecf3c */
  if (!C.zf) goto L_107ecf3c;
  /* 107ecf28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ecf2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107ecf2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecf31 jb 0x107ecf5c */
  if (C.cf) goto L_107ecf5c;
  /* 107ecf33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ecf35 jmp dword ptr [edx*4 + 0x107ed048] */
  switch (EDX) {
    case 0: goto L_107ed058;
    case 1: goto L_107ed060;
    case 2: goto L_107ed06c;
    case 3: goto L_107ed080;
    default: x86_unimpl("switch@0x107ecf35 out of table"); return;
  }
L_107ecf3c:;
  /* 107ecf3c mov eax, edi */
  EAX = (EDI);
  /* 107ecf3e mov edx, 3 */
  EDX = (0x3u);
  /* 107ecf43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ecf46 jb 0x107ecf54 */
  if (C.cf) goto L_107ecf54;
  /* 107ecf48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107ecf4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecf4d jmp dword ptr [eax*4 + 0x107ecf60] */
  switch (EAX) {
    case 1: goto L_107ecf70;
    case 2: goto L_107ecf9c;
    case 3: goto L_107ecfc0;
    default: x86_unimpl("switch@0x107ecf4d out of table"); return;
  }
L_107ecf54:;
  /* 107ecf54 jmp dword ptr [ecx*4 + 0x107ed058] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x107ed058)))); return;
  /* 107ecf5b nop  */
  /* nop */
L_107ecf5c:;
  /* 107ecf5c jmp dword ptr [ecx*4 + 0x107ecfdc] */
  switch (ECX) {
    case 0: goto L_107ed03f;
    case 1: goto L_107ed02c;
    case 2: goto L_107ed024;
    case 3: goto L_107ed01c;
    case 4: goto L_107ed014;
    case 5: goto L_107ed00c;
    case 6: goto L_107ed004;
    case 7: goto L_107ecffc;
    default: x86_unimpl("switch@0x107ecf5c out of table"); return;
  }
  /* 107ecf63 nop  */
  /* nop */
L_107ecf70:;
  /* 107ecf70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ecf72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107ecf74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107ecf76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ecf79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ecf7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ecf7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ecf82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ecf85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecf88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecf8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecf8e jb 0x107ecf5c */
  if (C.cf) goto L_107ecf5c;
  /* 107ecf90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ecf92 jmp dword ptr [edx*4 + 0x107ed048] */
  switch (EDX) {
    case 0: goto L_107ed058;
    case 1: goto L_107ed060;
    case 2: goto L_107ed06c;
    case 3: goto L_107ed080;
    default: x86_unimpl("switch@0x107ecf92 out of table"); return;
  }
  /* 107ecf99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ecf9c:;
  /* 107ecf9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ecf9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107ecfa0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107ecfa2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ecfa5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ecfa8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ecfab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecfae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 107ecfb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecfb4 jb 0x107ecf5c */
  if (C.cf) goto L_107ecf5c;
  /* 107ecfb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ecfb8 jmp dword ptr [edx*4 + 0x107ed048] */
  switch (EDX) {
    case 0: goto L_107ed058;
    case 1: goto L_107ed060;
    case 2: goto L_107ed06c;
    case 3: goto L_107ed080;
    default: x86_unimpl("switch@0x107ecfb8 out of table"); return;
  }
  /* 107ecfbf nop  */
  /* nop */
L_107ecfc0:;
  /* 107ecfc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ecfc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107ecfc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107ecfc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107ecfc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ecfca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 107ecfcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ecfce jb 0x107ecf5c */
  if (C.cf) goto L_107ecf5c;
  /* 107ecfd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ecfd2 jmp dword ptr [edx*4 + 0x107ed048] */
  switch (EDX) {
    case 0: goto L_107ed058;
    case 1: goto L_107ed060;
    case 2: goto L_107ed06c;
    case 3: goto L_107ed080;
    default: x86_unimpl("switch@0x107ecfd2 out of table"); return;
  }
  /* 107ecfd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ecffc:;
  /* 107ecffc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 107ed000 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_107ed004:;
  /* 107ed004 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 107ed008 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_107ed00c:;
  /* 107ed00c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 107ed010 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_107ed014:;
  /* 107ed014 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 107ed018 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_107ed01c:;
  /* 107ed01c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 107ed020 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_107ed024:;
  /* 107ed024 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 107ed028 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_107ed02c:;
  /* 107ed02c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 107ed030 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 107ed034 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 107ed03b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed03d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107ed03f:;
  /* 107ed03f jmp dword ptr [edx*4 + 0x107ed048] */
  switch (EDX) {
    case 0: goto L_107ed058;
    case 1: goto L_107ed060;
    case 2: goto L_107ed06c;
    case 3: goto L_107ed080;
    default: x86_unimpl("switch@0x107ed03f out of table"); return;
  }
  /* 107ed046 mov edi, edi */
  EDI = (EDI);
L_107ed058:;
  /* 107ed058 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed05b pop esi */
  ESI = (pop32());
  /* 107ed05c pop edi */
  EDI = (pop32());
  /* 107ed05d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ed05e ret  */
  ESPCHK(0x107ecf00u, _esp0);
  ESP += 4; return;
  /* 107ed05f nop  */
  /* nop */
L_107ed060:;
  /* 107ed060 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107ed062 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107ed064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed067 pop esi */
  ESI = (pop32());
  /* 107ed068 pop edi */
  EDI = (pop32());
  /* 107ed069 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ed06a ret  */
  ESPCHK(0x107ecf00u, _esp0);
  ESP += 4; return;
  /* 107ed06b nop  */
  /* nop */
L_107ed06c:;
  /* 107ed06c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107ed06e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107ed070 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ed073 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ed076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed079 pop esi */
  ESI = (pop32());
  /* 107ed07a pop edi */
  EDI = (pop32());
  /* 107ed07b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ed07c ret  */
  ESPCHK(0x107ecf00u, _esp0);
  ESP += 4; return;
  /* 107ed07d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ed080:;
  /* 107ed080 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107ed082 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 107ed084 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ed087 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ed08a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ed08d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ed090 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed093 pop esi */
  ESI = (pop32());
  /* 107ed094 pop edi */
  EDI = (pop32());
  /* 107ed095 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ed096 ret  */
  ESPCHK(0x107ecf00u, _esp0);
  ESP += 4; return;
  /* 107ed097 nop  */
  /* nop */
L_107ed098:;
  /* 107ed098 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 107ed09c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 107ed0a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 107ed0a6 jne 0x107ed0cc */
  if (!C.zf) goto L_107ed0cc;
  /* 107ed0a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ed0ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107ed0ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed0b1 jb 0x107ed0c0 */
  if (C.cf) goto L_107ed0c0;
  /* 107ed0b3 std  */
  C.df=1;
  /* 107ed0b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ed0b6 cld  */
  C.df=0;
  /* 107ed0b7 jmp dword ptr [edx*4 + 0x107ed1e0] */
  switch (EDX) {
    case 0: goto L_107ed1f0;
    case 1: goto L_107ed1f8;
    case 2: goto L_107ed208;
    case 3: goto L_107ed21c;
    default: x86_unimpl("switch@0x107ed0b7 out of table"); return;
  }
  /* 107ed0be mov edi, edi */
  EDI = (EDI);
L_107ed0c0:;
  /* 107ed0c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ed0c2 jmp dword ptr [ecx*4 + 0x107ed190] */
  switch (ECX) {
    case 0: goto L_107ed1d7;
    default: x86_unimpl("switch@0x107ed0c2 out of table"); return;
  }
  /* 107ed0c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ed0cc:;
  /* 107ed0cc mov eax, edi */
  EAX = (EDI);
  /* 107ed0ce mov edx, 3 */
  EDX = (0x3u);
  /* 107ed0d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed0d6 jb 0x107ed0e4 */
  if (C.cf) goto L_107ed0e4;
  /* 107ed0d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 107ed0db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed0dd jmp dword ptr [eax*4 + 0x107ed0e8] */
  switch (EAX) {
    case 1: goto L_107ed0f8;
    case 2: goto L_107ed118;
    case 3: goto L_107ed140;
    default: x86_unimpl("switch@0x107ed0dd out of table"); return;
  }
L_107ed0e4:;
  /* 107ed0e4 jmp dword ptr [ecx*4 + 0x107ed1e0] */
  switch (ECX) {
    case 0: goto L_107ed1f0;
    case 1: goto L_107ed1f8;
    case 2: goto L_107ed208;
    case 3: goto L_107ed21c;
    default: x86_unimpl("switch@0x107ed0e4 out of table"); return;
  }
  /* 107ed0eb nop  */
  /* nop */
L_107ed0f8:;
  /* 107ed0f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ed0fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ed0fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ed100 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 107ed101 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ed104 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 107ed105 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed108 jb 0x107ed0c0 */
  if (C.cf) goto L_107ed0c0;
  /* 107ed10a std  */
  C.df=1;
  /* 107ed10b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ed10d cld  */
  C.df=0;
  /* 107ed10e jmp dword ptr [edx*4 + 0x107ed1e0] */
  switch (EDX) {
    case 0: goto L_107ed1f0;
    case 1: goto L_107ed1f8;
    case 2: goto L_107ed208;
    case 3: goto L_107ed21c;
    default: x86_unimpl("switch@0x107ed10e out of table"); return;
  }
  /* 107ed115 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ed118:;
  /* 107ed118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ed11b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ed11d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ed120 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ed123 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ed126 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ed129 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed12c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed12f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed132 jb 0x107ed0c0 */
  if (C.cf) goto L_107ed0c0;
  /* 107ed134 std  */
  C.df=1;
  /* 107ed135 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ed137 cld  */
  C.df=0;
  /* 107ed138 jmp dword ptr [edx*4 + 0x107ed1e0] */
  switch (EDX) {
    case 0: goto L_107ed1f0;
    case 1: goto L_107ed1f8;
    case 2: goto L_107ed208;
    case 3: goto L_107ed21c;
    default: x86_unimpl("switch@0x107ed138 out of table"); return;
  }
  /* 107ed13f nop  */
  /* nop */
L_107ed140:;
  /* 107ed140 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ed143 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 107ed145 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ed148 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ed14b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ed14e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ed151 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 107ed154 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ed157 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed15a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed15d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed160 jb 0x107ed0c0 */
  if (C.cf) goto L_107ed0c0;
  /* 107ed166 std  */
  C.df=1;
  /* 107ed167 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 107ed169 cld  */
  C.df=0;
  /* 107ed16a jmp dword ptr [edx*4 + 0x107ed1e0] */
  switch (EDX) {
    case 0: goto L_107ed1f0;
    case 1: goto L_107ed1f8;
    case 2: goto L_107ed208;
    case 3: goto L_107ed21c;
    default: x86_unimpl("switch@0x107ed16a out of table"); return;
  }
  /* 107ed171 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 107ed174 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 107ed175 sar dword ptr [esi + 0x10], 1 */
  w32((uint32_t)(ESI + 0x10), (sh_sar((uint32_t)(r32((uint32_t)(ESI + 0x10))), (0x1u)&0x1f, 32)));
  /* 107ed178 pushfd  */
  x86_unimpl("pushfd @ 0x107ed178");
  /* 107ed179 sar dword ptr [esi + 0x10], 1 */
  w32((uint32_t)(ESI + 0x10), (sh_sar((uint32_t)(r32((uint32_t)(ESI + 0x10))), (0x1u)&0x1f, 32)));
  /* 107ed17c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 107ed17d sar dword ptr [esi + 0x10], 1 */
  w32((uint32_t)(ESI + 0x10), (sh_sar((uint32_t)(r32((uint32_t)(ESI + 0x10))), (0x1u)&0x1f, 32)));
  /* 107ed180 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 107ed181 sar dword ptr [esi + 0x10], 1 */
  w32((uint32_t)(ESI + 0x10), (sh_sar((uint32_t)(r32((uint32_t)(ESI + 0x10))), (0x1u)&0x1f, 32)));
  /* 107ed184 mov ah, 0xd1 */
  AH = (0xd1u);
  /* 107ed186 jle 0x107ed198 */
  if ((C.zf||C.sf!=C.of)) goto L_107ed198;
  /* 107ed188 mov esp, 0xc4107ed1 */
  ESP = (0xc4107ed1u);
  /* 107ed18d sar dword ptr [esi + 0x10], 1 */
  w32((uint32_t)(ESI + 0x10), (sh_sar((uint32_t)(r32((uint32_t)(ESI + 0x10))), (0x1u)&0x1f, 32)));
  /* 107ed194 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
L_107ed198:;
  /* 107ed198 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 107ed19c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 107ed1a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 107ed1a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 107ed1a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 107ed1ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 107ed1b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 107ed1b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 107ed1b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 107ed1bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 107ed1c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 107ed1c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 107ed1c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 107ed1cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 107ed1d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed1d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_107ed1d7:;
  /* 107ed1d7 jmp dword ptr [edx*4 + 0x107ed1e0] */
  switch (EDX) {
    case 0: goto L_107ed1f0;
    case 1: goto L_107ed1f8;
    case 2: goto L_107ed208;
    case 3: goto L_107ed21c;
    default: x86_unimpl("switch@0x107ed1d7 out of table"); return;
  }
  /* 107ed1de mov edi, edi */
  EDI = (EDI);
L_107ed1f0:;
  /* 107ed1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed1f3 pop esi */
  ESI = (pop32());
  /* 107ed1f4 pop edi */
  EDI = (pop32());
  /* 107ed1f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ed1f6 ret  */
  ESPCHK(0x107ecf00u, _esp0);
  ESP += 4; return;
  /* 107ed1f7 nop  */
  /* nop */
L_107ed1f8:;
  /* 107ed1f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ed1fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ed1fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed201 pop esi */
  ESI = (pop32());
  /* 107ed202 pop edi */
  EDI = (pop32());
  /* 107ed203 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ed204 ret  */
  ESPCHK(0x107ecf00u, _esp0);
  ESP += 4; return;
  /* 107ed205 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107ed208:;
  /* 107ed208 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ed20b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ed20e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ed211 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ed214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed217 pop esi */
  ESI = (pop32());
  /* 107ed218 pop edi */
  EDI = (pop32());
  /* 107ed219 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ed21a ret  */
  ESPCHK(0x107ecf00u, _esp0);
  ESP += 4; return;
  /* 107ed21b nop  */
  /* nop */
L_107ed21c:;
  /* 107ed21c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 107ed21f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 107ed222 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 107ed225 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 107ed228 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 107ed22b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 107ed22e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed231 pop esi */
  ESI = (pop32());
  /* 107ed232 pop edi */
  EDI = (pop32());
  /* 107ed233 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107ed234 ret  */
  ESPCHK(0x107ecf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x107ed240 (421 bytes, 148 insns) */
void f_107ed240(void) {
  FTRACE(0x107ed240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ed240 push ebp */
  push32((uint32_t)(EBP));
  /* 107ed241 mov ebp, esp */
  EBP = (ESP);
  /* 107ed243 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107ed245 push 0x1080c280 */
  push32((uint32_t)(0x1080c280u));
  /* 107ed24a push 0x107ee118 */
  push32((uint32_t)(0x107ee118u));
  /* 107ed24f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107ed255 push eax */
  push32((uint32_t)(EAX));
  /* 107ed256 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107ed25d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed260 push ebx */
  push32((uint32_t)(EBX));
  /* 107ed261 push esi */
  push32((uint32_t)(ESI));
  /* 107ed262 push edi */
  push32((uint32_t)(EDI));
  /* 107ed263 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ed266 cmp dword ptr [0x108107fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108107fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed26d jne 0x107ed2be */
  if (!C.zf) goto L_107ed2be;
  /* 107ed26f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 107ed272 push eax */
  push32((uint32_t)(EAX));
  /* 107ed273 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ed275 push 0x1080c27c */
  push32((uint32_t)(0x1080c27cu));
  /* 107ed27a push 1 */
  push32((uint32_t)(0x1u));
  /* 107ed27c call dword ptr [0x108132ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132ec))), 0x107ed282u);
  /* 107ed282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ed284 je 0x107ed292 */
  if (C.zf) goto L_107ed292;
  /* 107ed286 mov dword ptr [0x108107fc], 1 */
  w32((uint32_t)(0x108107fc), (0x1u));
  /* 107ed290 jmp 0x107ed2be */
  goto L_107ed2be;
L_107ed292:;
  /* 107ed292 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 107ed295 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed296 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ed298 push 0x1080c278 */
  push32((uint32_t)(0x1080c278u));
  /* 107ed29d push 1 */
  push32((uint32_t)(0x1u));
  /* 107ed29f push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed2a1 call dword ptr [0x108132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132fc))), 0x107ed2a7u);
  /* 107ed2a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ed2a9 je 0x107ed2b7 */
  if (C.zf) goto L_107ed2b7;
  /* 107ed2ab mov dword ptr [0x108107fc], 2 */
  w32((uint32_t)(0x108107fc), (0x2u));
  /* 107ed2b5 jmp 0x107ed2be */
  goto L_107ed2be;
L_107ed2b7:;
  /* 107ed2b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed2b9 jmp 0x107ed3e8 */
  goto L_107ed3e8;
L_107ed2be:;
  /* 107ed2be cmp dword ptr [0x108107fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108107fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed2c5 jne 0x107ed2f5 */
  if (!C.zf) goto L_107ed2f5;
  /* 107ed2c7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed2cb jne 0x107ed2d6 */
  if (!C.zf) goto L_107ed2d6;
  /* 107ed2cd mov edx, dword ptr [0x10810808] */
  EDX = (r32((uint32_t)(0x10810808)));
  /* 107ed2d3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_107ed2d6:;
  /* 107ed2d6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ed2d9 push eax */
  push32((uint32_t)(EAX));
  /* 107ed2da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed2dd push ecx */
  push32((uint32_t)(ECX));
  /* 107ed2de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed2e1 push edx */
  push32((uint32_t)(EDX));
  /* 107ed2e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed2e5 push eax */
  push32((uint32_t)(EAX));
  /* 107ed2e6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107ed2e9 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed2ea call dword ptr [0x108132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132fc))), 0x107ed2f0u);
  /* 107ed2f0 jmp 0x107ed3e8 */
  goto L_107ed3e8;
L_107ed2f5:;
  /* 107ed2f5 cmp dword ptr [0x108107fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108107fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed2fc jne 0x107ed3e6 */
  if (!C.zf) goto L_107ed3e6;
  /* 107ed302 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed306 jne 0x107ed311 */
  if (!C.zf) goto L_107ed311;
  /* 107ed308 mov edx, dword ptr [0x10810818] */
  EDX = (r32((uint32_t)(0x10810818)));
  /* 107ed30e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_107ed311:;
  /* 107ed311 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed313 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed315 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed318 push eax */
  push32((uint32_t)(EAX));
  /* 107ed319 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed31c push ecx */
  push32((uint32_t)(ECX));
  /* 107ed31d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ed320 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ed322 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed324 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 107ed327 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed32a push edx */
  push32((uint32_t)(EDX));
  /* 107ed32b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ed32e push eax */
  push32((uint32_t)(EAX));
  /* 107ed32f call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107ed335u);
  /* 107ed335 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107ed338 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed33c jne 0x107ed345 */
  if (!C.zf) goto L_107ed345;
  /* 107ed33e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed340 jmp 0x107ed3e8 */
  goto L_107ed3e8;
L_107ed345:;
  /* 107ed345 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ed34c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ed34f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107ed351 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed354 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107ed356 call 0x107e81b0 */
  push32(0x107ed35bu); f_107e81b0();
  /* 107ed35b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 107ed35e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ed361 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ed364 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107ed367 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ed36a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 107ed36c push edx */
  push32((uint32_t)(EDX));
  /* 107ed36d push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed36f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ed372 push eax */
  push32((uint32_t)(EAX));
  /* 107ed373 call 0x107e8d80 */
  push32(0x107ed378u); f_107e8d80();
  /* 107ed378 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed37b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ed382 jmp 0x107ed39b */
  goto L_107ed39b;
  /* 107ed384 mov eax, 1 */
  EAX = (0x1u);
  /* 107ed389 ret  */
  ESPCHK(0x107ed240u, _esp0);
  ESP += 4; return;
  /* 107ed38a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107ed38d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107ed394 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ed39b:;
  /* 107ed39b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed39f jne 0x107ed3a5 */
  if (!C.zf) goto L_107ed3a5;
  /* 107ed3a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed3a3 jmp 0x107ed3e8 */
  goto L_107ed3e8;
L_107ed3a5:;
  /* 107ed3a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ed3a8 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed3a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ed3ac push edx */
  push32((uint32_t)(EDX));
  /* 107ed3ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed3b0 push eax */
  push32((uint32_t)(EAX));
  /* 107ed3b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed3b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ed3b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ed3ba push edx */
  push32((uint32_t)(EDX));
  /* 107ed3bb call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107ed3c1u);
  /* 107ed3c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ed3c4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed3c8 jne 0x107ed3ce */
  if (!C.zf) goto L_107ed3ce;
  /* 107ed3ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed3cc jmp 0x107ed3e8 */
  goto L_107ed3e8;
L_107ed3ce:;
  /* 107ed3ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ed3d1 push eax */
  push32((uint32_t)(EAX));
  /* 107ed3d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ed3d5 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed3d6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ed3d9 push edx */
  push32((uint32_t)(EDX));
  /* 107ed3da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed3dd push eax */
  push32((uint32_t)(EAX));
  /* 107ed3de call dword ptr [0x108132ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132ec))), 0x107ed3e4u);
  /* 107ed3e4 jmp 0x107ed3e8 */
  goto L_107ed3e8;
L_107ed3e6:;
  /* 107ed3e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ed3e8:;
  /* 107ed3e8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 107ed3eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ed3ee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107ed3f5 pop edi */
  EDI = (pop32());
  /* 107ed3f6 pop esi */
  ESI = (pop32());
  /* 107ed3f7 pop ebx */
  EBX = (pop32());
  /* 107ed3f8 mov esp, ebp */
  ESP = (EBP);
  /* 107ed3fa pop ebp */
  EBP = (pop32());
  /* 107ed3fb ret  */
  ESPCHK(0x107ed240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x107ed400 (727 bytes, 263 insns) */
void f_107ed400(void) {
  FTRACE(0x107ed400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ed400 push ebp */
  push32((uint32_t)(EBP));
  /* 107ed401 mov ebp, esp */
  EBP = (ESP);
  /* 107ed403 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 107ed405 push 0x1080c290 */
  push32((uint32_t)(0x1080c290u));
  /* 107ed40a push 0x107ee118 */
  push32((uint32_t)(0x107ee118u));
  /* 107ed40f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 107ed415 push eax */
  push32((uint32_t)(EAX));
  /* 107ed416 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 107ed41d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed420 push ebx */
  push32((uint32_t)(EBX));
  /* 107ed421 push esi */
  push32((uint32_t)(ESI));
  /* 107ed422 push edi */
  push32((uint32_t)(EDI));
  /* 107ed423 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ed426 cmp dword ptr [0x10810820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed42d jne 0x107ed486 */
  if (!C.zf) goto L_107ed486;
  /* 107ed42f push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed431 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed433 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ed435 push 0x1080c27c */
  push32((uint32_t)(0x1080c27cu));
  /* 107ed43a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107ed43f push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed441 call dword ptr [0x108132f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f0))), 0x107ed447u);
  /* 107ed447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ed449 je 0x107ed457 */
  if (C.zf) goto L_107ed457;
  /* 107ed44b mov dword ptr [0x10810820], 1 */
  w32((uint32_t)(0x10810820), (0x1u));
  /* 107ed455 jmp 0x107ed486 */
  goto L_107ed486;
L_107ed457:;
  /* 107ed457 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed459 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed45b push 1 */
  push32((uint32_t)(0x1u));
  /* 107ed45d push 0x1080c278 */
  push32((uint32_t)(0x1080c278u));
  /* 107ed462 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107ed467 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed469 call dword ptr [0x108132e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132e8))), 0x107ed46fu);
  /* 107ed46f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ed471 je 0x107ed47f */
  if (C.zf) goto L_107ed47f;
  /* 107ed473 mov dword ptr [0x10810820], 2 */
  w32((uint32_t)(0x10810820), (0x2u));
  /* 107ed47d jmp 0x107ed486 */
  goto L_107ed486;
L_107ed47f:;
  /* 107ed47f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed481 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed486:;
  /* 107ed486 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed48a jle 0x107ed49f */
  if ((C.zf||C.sf!=C.of)) goto L_107ed49f;
  /* 107ed48c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ed48f push eax */
  push32((uint32_t)(EAX));
  /* 107ed490 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed493 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed494 call 0x107ed710 */
  push32(0x107ed499u); f_107ed710();
  /* 107ed499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed49c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_107ed49f:;
  /* 107ed49f cmp dword ptr [0x10810820], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10810820))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed4a6 jne 0x107ed4cb */
  if (!C.zf) goto L_107ed4cb;
  /* 107ed4a8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107ed4ab push edx */
  push32((uint32_t)(EDX));
  /* 107ed4ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ed4af push eax */
  push32((uint32_t)(EAX));
  /* 107ed4b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ed4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed4b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed4b7 push edx */
  push32((uint32_t)(EDX));
  /* 107ed4b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed4bb push eax */
  push32((uint32_t)(EAX));
  /* 107ed4bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed4bf push ecx */
  push32((uint32_t)(ECX));
  /* 107ed4c0 call dword ptr [0x108132e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132e8))), 0x107ed4c6u);
  /* 107ed4c6 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed4cb:;
  /* 107ed4cb cmp dword ptr [0x10810820], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10810820))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed4d2 jne 0x107ed6ef */
  if (!C.zf) goto L_107ed6ef;
  /* 107ed4d8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed4dc jne 0x107ed4e7 */
  if (!C.zf) goto L_107ed4e7;
  /* 107ed4de mov edx, dword ptr [0x10810818] */
  EDX = (r32((uint32_t)(0x10810818)));
  /* 107ed4e4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_107ed4e7:;
  /* 107ed4e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed4e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed4eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ed4ee push eax */
  push32((uint32_t)(EAX));
  /* 107ed4ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed4f2 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed4f3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 107ed4f6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ed4f8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed4fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 107ed4fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed500 push edx */
  push32((uint32_t)(EDX));
  /* 107ed501 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ed504 push eax */
  push32((uint32_t)(EAX));
  /* 107ed505 call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107ed50bu);
  /* 107ed50b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107ed50e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed512 jne 0x107ed51b */
  if (!C.zf) goto L_107ed51b;
  /* 107ed514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed516 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed51b:;
  /* 107ed51b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ed522 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ed525 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107ed527 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed52a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107ed52c call 0x107e81b0 */
  push32(0x107ed531u); f_107e81b0();
  /* 107ed531 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 107ed534 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ed537 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107ed53a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107ed53d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ed544 jmp 0x107ed55d */
  goto L_107ed55d;
  /* 107ed546 mov eax, 1 */
  EAX = (0x1u);
  /* 107ed54b ret  */
  ESPCHK(0x107ed400u, _esp0);
  ESP += 4; return;
  /* 107ed54c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107ed54f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107ed556 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ed55d:;
  /* 107ed55d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed561 jne 0x107ed56a */
  if (!C.zf) goto L_107ed56a;
  /* 107ed563 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed565 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed56a:;
  /* 107ed56a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ed56d push edx */
  push32((uint32_t)(EDX));
  /* 107ed56e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ed571 push eax */
  push32((uint32_t)(EAX));
  /* 107ed572 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ed575 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed576 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed579 push edx */
  push32((uint32_t)(EDX));
  /* 107ed57a push 1 */
  push32((uint32_t)(0x1u));
  /* 107ed57c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ed57f push eax */
  push32((uint32_t)(EAX));
  /* 107ed580 call dword ptr [0x108132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f4))), 0x107ed586u);
  /* 107ed586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ed588 jne 0x107ed591 */
  if (!C.zf) goto L_107ed591;
  /* 107ed58a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed58c jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed591:;
  /* 107ed591 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed593 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed595 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ed598 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed599 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ed59c push edx */
  push32((uint32_t)(EDX));
  /* 107ed59d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed5a0 push eax */
  push32((uint32_t)(EAX));
  /* 107ed5a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed5a4 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed5a5 call dword ptr [0x108132f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f0))), 0x107ed5abu);
  /* 107ed5ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ed5ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed5b2 jne 0x107ed5bb */
  if (!C.zf) goto L_107ed5bb;
  /* 107ed5b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed5b6 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed5bb:;
  /* 107ed5bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed5be and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 107ed5c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ed5c6 je 0x107ed60b */
  if (C.zf) goto L_107ed60b;
  /* 107ed5c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed5cc je 0x107ed606 */
  if (C.zf) goto L_107ed606;
  /* 107ed5ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ed5d1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed5d4 jle 0x107ed5dd */
  if ((C.zf||C.sf!=C.of)) goto L_107ed5dd;
  /* 107ed5d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed5d8 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed5dd:;
  /* 107ed5dd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107ed5e0 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed5e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ed5e4 push edx */
  push32((uint32_t)(EDX));
  /* 107ed5e5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ed5e8 push eax */
  push32((uint32_t)(EAX));
  /* 107ed5e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ed5ec push ecx */
  push32((uint32_t)(ECX));
  /* 107ed5ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed5f0 push edx */
  push32((uint32_t)(EDX));
  /* 107ed5f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed5f4 push eax */
  push32((uint32_t)(EAX));
  /* 107ed5f5 call dword ptr [0x108132f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f0))), 0x107ed5fbu);
  /* 107ed5fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ed5fd jne 0x107ed606 */
  if (!C.zf) goto L_107ed606;
  /* 107ed5ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed601 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed606:;
  /* 107ed606 jmp 0x107ed6ea */
  goto L_107ed6ea;
L_107ed60b:;
  /* 107ed60b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ed60e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107ed611 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107ed618 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ed61b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107ed61d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed620 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 107ed622 call 0x107e81b0 */
  push32(0x107ed627u); f_107e81b0();
  /* 107ed627 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 107ed62a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 107ed62d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107ed630 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107ed633 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ed63a jmp 0x107ed653 */
  goto L_107ed653;
  /* 107ed63c mov eax, 1 */
  EAX = (0x1u);
  /* 107ed641 ret  */
  ESPCHK(0x107ed400u, _esp0);
  ESP += 4; return;
  /* 107ed642 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 107ed645 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107ed64c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ed653:;
  /* 107ed653 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed657 jne 0x107ed660 */
  if (!C.zf) goto L_107ed660;
  /* 107ed659 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed65b jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed660:;
  /* 107ed660 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ed663 push eax */
  push32((uint32_t)(EAX));
  /* 107ed664 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ed667 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed668 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107ed66b push edx */
  push32((uint32_t)(EDX));
  /* 107ed66c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 107ed66f push eax */
  push32((uint32_t)(EAX));
  /* 107ed670 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed673 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed677 push edx */
  push32((uint32_t)(EDX));
  /* 107ed678 call dword ptr [0x108132f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132f0))), 0x107ed67eu);
  /* 107ed67e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ed680 jne 0x107ed686 */
  if (!C.zf) goto L_107ed686;
  /* 107ed682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed684 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed686:;
  /* 107ed686 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed68a jne 0x107ed6ba */
  if (!C.zf) goto L_107ed6ba;
  /* 107ed68c push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed68e push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed690 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed692 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed694 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ed697 push eax */
  push32((uint32_t)(EAX));
  /* 107ed698 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ed69b push ecx */
  push32((uint32_t)(ECX));
  /* 107ed69c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107ed6a1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ed6a4 push edx */
  push32((uint32_t)(EDX));
  /* 107ed6a5 call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107ed6abu);
  /* 107ed6ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ed6ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed6b2 jne 0x107ed6b8 */
  if (!C.zf) goto L_107ed6b8;
  /* 107ed6b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed6b6 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed6b8:;
  /* 107ed6b8 jmp 0x107ed6ea */
  goto L_107ed6ea;
L_107ed6ba:;
  /* 107ed6ba push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed6bc push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed6be mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 107ed6c1 push eax */
  push32((uint32_t)(EAX));
  /* 107ed6c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 107ed6c5 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed6c6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107ed6c9 push edx */
  push32((uint32_t)(EDX));
  /* 107ed6ca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 107ed6cd push eax */
  push32((uint32_t)(EAX));
  /* 107ed6ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107ed6d3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 107ed6d6 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed6d7 call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107ed6ddu);
  /* 107ed6dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107ed6e0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed6e4 jne 0x107ed6ea */
  if (!C.zf) goto L_107ed6ea;
  /* 107ed6e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed6e8 jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed6ea:;
  /* 107ed6ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107ed6ed jmp 0x107ed6f1 */
  goto L_107ed6f1;
L_107ed6ef:;
  /* 107ed6ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ed6f1:;
  /* 107ed6f1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 107ed6f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ed6f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 107ed6fe pop edi */
  EDI = (pop32());
  /* 107ed6ff pop esi */
  ESI = (pop32());
  /* 107ed700 pop ebx */
  EBX = (pop32());
  /* 107ed701 mov esp, ebp */
  ESP = (EBP);
  /* 107ed703 pop ebp */
  EBP = (pop32());
  /* 107ed704 ret  */
  ESPCHK(0x107ed400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d710 @ 0x107ed710 (80 bytes, 32 insns) */
void f_107ed710(void) {
  FTRACE(0x107ed710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ed710 push ebp */
  push32((uint32_t)(EBP));
  /* 107ed711 mov ebp, esp */
  EBP = (ESP);
  /* 107ed713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed716 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed719 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ed71c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed71f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ed722:;
  /* 107ed722 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ed725 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ed728 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed72b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ed72e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ed730 je 0x107ed747 */
  if (C.zf) goto L_107ed747;
  /* 107ed732 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ed735 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ed738 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ed73a je 0x107ed747 */
  if (C.zf) goto L_107ed747;
  /* 107ed73c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ed73f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed742 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ed745 jmp 0x107ed722 */
  goto L_107ed722;
L_107ed747:;
  /* 107ed747 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ed74a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ed74d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ed74f jne 0x107ed759 */
  if (!C.zf) goto L_107ed759;
  /* 107ed751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ed754 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed757 jmp 0x107ed75c */
  goto L_107ed75c;
L_107ed759:;
  /* 107ed759 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_107ed75c:;
  /* 107ed75c mov esp, ebp */
  ESP = (EBP);
  /* 107ed75e pop ebp */
  EBP = (pop32());
  /* 107ed75f ret  */
  ESPCHK(0x107ed710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x107ed760 (130 bytes, 43 insns) */
void f_107ed760(void) {
  FTRACE(0x107ed760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ed760 push ebp */
  push32((uint32_t)(EBP));
  /* 107ed761 mov ebp, esp */
  EBP = (ESP);
  /* 107ed763 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed767 cmp eax, dword ptr [0x1081211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed76d jae 0x107ed791 */
  if (!C.cf) goto L_107ed791;
  /* 107ed76f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed772 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ed775 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed778 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ed77b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ed77e mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107ed785 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ed78a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ed78d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ed78f jne 0x107ed7ac */
  if (!C.zf) goto L_107ed7ac;
L_107ed791:;
  /* 107ed791 call 0x107ecee0 */
  push32(0x107ed796u); f_107ecee0();
  /* 107ed796 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ed79c call 0x107ecef0 */
  push32(0x107ed7a1u); f_107ecef0();
  /* 107ed7a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ed7a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ed7aa jmp 0x107ed7de */
  goto L_107ed7de;
L_107ed7ac:;
  /* 107ed7ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed7af push edx */
  push32((uint32_t)(EDX));
  /* 107ed7b0 call 0x107ee700 */
  push32(0x107ed7b5u); f_107ee700();
  /* 107ed7b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed7b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed7bb push eax */
  push32((uint32_t)(EAX));
  /* 107ed7bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed7bf push ecx */
  push32((uint32_t)(ECX));
  /* 107ed7c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed7c3 push edx */
  push32((uint32_t)(EDX));
  /* 107ed7c4 call 0x107ed7f0 */
  push32(0x107ed7c9u); f_107ed7f0();
  /* 107ed7c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed7cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ed7cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed7d2 push eax */
  push32((uint32_t)(EAX));
  /* 107ed7d3 call 0x107ee790 */
  push32(0x107ed7d8u); f_107ee790();
  /* 107ed7d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed7db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107ed7de:;
  /* 107ed7de mov esp, ebp */
  ESP = (EBP);
  /* 107ed7e0 pop ebp */
  EBP = (pop32());
  /* 107ed7e1 ret  */
  ESPCHK(0x107ed760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7f0 @ 0x107ed7f0 (178 bytes, 56 insns) */
void f_107ed7f0(void) {
  FTRACE(0x107ed7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ed7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ed7f1 mov ebp, esp */
  EBP = (ESP);
  /* 107ed7f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed7f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed7f9 push eax */
  push32((uint32_t)(EAX));
  /* 107ed7fa call 0x107ee580 */
  push32(0x107ed7ffu); f_107ee580();
  /* 107ed7ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed802 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107ed805 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed809 jne 0x107ed81e */
  if (!C.zf) goto L_107ed81e;
  /* 107ed80b call 0x107ecee0 */
  push32(0x107ed810u); f_107ecee0();
  /* 107ed810 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ed816 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ed819 jmp 0x107ed89e */
  goto L_107ed89e;
L_107ed81e:;
  /* 107ed81e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed821 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed822 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed824 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed827 push edx */
  push32((uint32_t)(EDX));
  /* 107ed828 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ed82b push eax */
  push32((uint32_t)(EAX));
  /* 107ed82c call dword ptr [0x108132e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132e0))), 0x107ed832u);
  /* 107ed832 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ed835 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed839 jne 0x107ed846 */
  if (!C.zf) goto L_107ed846;
  /* 107ed83b call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107ed841u);
  /* 107ed841 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ed844 jmp 0x107ed84d */
  goto L_107ed84d;
L_107ed846:;
  /* 107ed846 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107ed84d:;
  /* 107ed84d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed851 je 0x107ed864 */
  if (C.zf) goto L_107ed864;
  /* 107ed853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ed856 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed857 call 0x107ece40 */
  push32(0x107ed85cu); f_107ece40();
  /* 107ed85c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed85f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ed862 jmp 0x107ed89e */
  goto L_107ed89e;
L_107ed864:;
  /* 107ed864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed867 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107ed86a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed86d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107ed870 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ed873 mov ecx, dword ptr [edx*4 + 0x10811fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10811fe0)));
  /* 107ed87a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 107ed87e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 107ed881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed884 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ed887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed88a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ed88d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ed890 mov eax, dword ptr [eax*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107ed897 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 107ed89b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107ed89e:;
  /* 107ed89e mov esp, ebp */
  ESP = (EBP);
  /* 107ed8a0 pop ebp */
  EBP = (pop32());
  /* 107ed8a1 ret  */
  ESPCHK(0x107ed7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8b0 @ 0x107ed8b0 (130 bytes, 43 insns) */
void f_107ed8b0(void) {
  FTRACE(0x107ed8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ed8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ed8b1 mov ebp, esp */
  EBP = (ESP);
  /* 107ed8b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ed8b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed8b7 cmp eax, dword ptr [0x1081211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed8bd jae 0x107ed8e1 */
  if (!C.cf) goto L_107ed8e1;
  /* 107ed8bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed8c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ed8c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed8c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ed8cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ed8ce mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107ed8d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ed8da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ed8dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ed8df jne 0x107ed8fc */
  if (!C.zf) goto L_107ed8fc;
L_107ed8e1:;
  /* 107ed8e1 call 0x107ecee0 */
  push32(0x107ed8e6u); f_107ecee0();
  /* 107ed8e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ed8ec call 0x107ecef0 */
  push32(0x107ed8f1u); f_107ecef0();
  /* 107ed8f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ed8f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ed8fa jmp 0x107ed92e */
  goto L_107ed92e;
L_107ed8fc:;
  /* 107ed8fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed8ff push edx */
  push32((uint32_t)(EDX));
  /* 107ed900 call 0x107ee700 */
  push32(0x107ed905u); f_107ee700();
  /* 107ed905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed908 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ed90b push eax */
  push32((uint32_t)(EAX));
  /* 107ed90c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed90f push ecx */
  push32((uint32_t)(ECX));
  /* 107ed910 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed913 push edx */
  push32((uint32_t)(EDX));
  /* 107ed914 call 0x107ed940 */
  push32(0x107ed919u); f_107ed940();
  /* 107ed919 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed91c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ed91f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed922 push eax */
  push32((uint32_t)(EAX));
  /* 107ed923 call 0x107ee790 */
  push32(0x107ed928u); f_107ee790();
  /* 107ed928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ed92b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107ed92e:;
  /* 107ed92e mov esp, ebp */
  ESP = (EBP);
  /* 107ed930 pop ebp */
  EBP = (pop32());
  /* 107ed931 ret  */
  ESPCHK(0x107ed8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d940 @ 0x107ed940 (627 bytes, 182 insns) */
void f_107ed940(void) {
  FTRACE(0x107ed940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ed940 push ebp */
  push32((uint32_t)(EBP));
  /* 107ed941 mov ebp, esp */
  EBP = (ESP);
  /* 107ed943 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed949 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107ed950 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107ed953 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 107ed959 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed95d jne 0x107ed966 */
  if (!C.zf) goto L_107ed966;
  /* 107ed95f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ed961 jmp 0x107edbaf */
  goto L_107edbaf;
L_107ed966:;
  /* 107ed966 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed969 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ed96c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed96f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ed972 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ed975 mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107ed97c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ed981 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 107ed984 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ed986 je 0x107ed998 */
  if (C.zf) goto L_107ed998;
  /* 107ed988 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ed98a push 0 */
  push32((uint32_t)(0x0u));
  /* 107ed98c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed98f push edx */
  push32((uint32_t)(EDX));
  /* 107ed990 call 0x107ed7f0 */
  push32(0x107ed995u); f_107ed7f0();
  /* 107ed995 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ed998:;
  /* 107ed998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed99b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ed99e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ed9a1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ed9a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ed9a7 mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107ed9ae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 107ed9b3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 107ed9b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ed9ba je 0x107edacc */
  if (C.zf) goto L_107edacc;
  /* 107ed9c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ed9c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ed9c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_107ed9cd:;
  /* 107ed9cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ed9d0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed9d3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed9d6 jae 0x107edaca */
  if (!C.cf) goto L_107edaca;
  /* 107ed9dc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 107ed9e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107ed9e5:;
  /* 107ed9e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ed9e8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 107ed9ee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed9f0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ed9f6 jge 0x107eda57 */
  if ((C.sf==C.of)) goto L_107eda57;
  /* 107ed9f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ed9fb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ed9fe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eda01 jae 0x107eda57 */
  if (!C.cf) goto L_107eda57;
  /* 107eda03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eda06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107eda08 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 107eda0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eda11 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eda14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107eda17 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 107eda1e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eda21 jne 0x107eda41 */
  if (!C.zf) goto L_107eda41;
  /* 107eda23 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 107eda29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eda2c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 107eda32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eda35 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 107eda38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eda3b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eda3e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107eda41:;
  /* 107eda41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eda44 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 107eda4a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 107eda4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eda4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eda52 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107eda55 jmp 0x107ed9e5 */
  goto L_107ed9e5;
L_107eda57:;
  /* 107eda57 push 0 */
  push32((uint32_t)(0x0u));
  /* 107eda59 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 107eda5f push edx */
  push32((uint32_t)(EDX));
  /* 107eda60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107eda63 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 107eda69 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eda6b push eax */
  push32((uint32_t)(EAX));
  /* 107eda6c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 107eda72 push edx */
  push32((uint32_t)(EDX));
  /* 107eda73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eda76 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107eda79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eda7c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107eda7f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eda82 mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107eda89 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 107eda8c push eax */
  push32((uint32_t)(EAX));
  /* 107eda8d call dword ptr [0x10813340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813340))), 0x107eda93u);
  /* 107eda93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eda95 je 0x107edaba */
  if (C.zf) goto L_107edaba;
  /* 107eda97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eda9a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107edaa0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107edaa3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107edaa6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 107edaac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107edaae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edab4 jge 0x107edab8 */
  if ((C.sf==C.of)) goto L_107edab8;
  /* 107edab6 jmp 0x107edaca */
  goto L_107edaca;
L_107edab8:;
  /* 107edab8 jmp 0x107edac5 */
  goto L_107edac5;
L_107edaba:;
  /* 107edaba call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107edac0u);
  /* 107edac0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107edac3 jmp 0x107edaca */
  goto L_107edaca;
L_107edac5:;
  /* 107edac5 jmp 0x107ed9cd */
  goto L_107ed9cd;
L_107edaca:;
  /* 107edaca jmp 0x107edb1c */
  goto L_107edb1c;
L_107edacc:;
  /* 107edacc push 0 */
  push32((uint32_t)(0x0u));
  /* 107edace lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 107edad4 push ecx */
  push32((uint32_t)(ECX));
  /* 107edad5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107edad8 push edx */
  push32((uint32_t)(EDX));
  /* 107edad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107edadc push eax */
  push32((uint32_t)(EAX));
  /* 107edadd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edae0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107edae3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edae6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107edae9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107edaec mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107edaf3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 107edaf6 push ecx */
  push32((uint32_t)(ECX));
  /* 107edaf7 call dword ptr [0x10813340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813340))), 0x107edafdu);
  /* 107edafd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107edaff je 0x107edb13 */
  if (C.zf) goto L_107edb13;
  /* 107edb01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107edb08 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 107edb0e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107edb11 jmp 0x107edb1c */
  goto L_107edb1c;
L_107edb13:;
  /* 107edb13 call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107edb19u);
  /* 107edb19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107edb1c:;
  /* 107edb1c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edb20 jne 0x107edba6 */
  if (!C.zf) goto L_107edba6;
  /* 107edb26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edb2a je 0x107edb5a */
  if (C.zf) goto L_107edb5a;
  /* 107edb2c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edb30 jne 0x107edb49 */
  if (!C.zf) goto L_107edb49;
  /* 107edb32 call 0x107ecee0 */
  push32(0x107edb37u); f_107ecee0();
  /* 107edb37 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107edb3d call 0x107ecef0 */
  push32(0x107edb42u); f_107ecef0();
  /* 107edb42 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107edb45 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107edb47 jmp 0x107edb55 */
  goto L_107edb55;
L_107edb49:;
  /* 107edb49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107edb4c push edx */
  push32((uint32_t)(EDX));
  /* 107edb4d call 0x107ece40 */
  push32(0x107edb52u); f_107ece40();
  /* 107edb52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107edb55:;
  /* 107edb55 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107edb58 jmp 0x107edbaf */
  goto L_107edbaf;
L_107edb5a:;
  /* 107edb5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edb5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107edb60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edb63 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107edb66 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107edb69 mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107edb70 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 107edb75 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 107edb78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107edb7a je 0x107edb8b */
  if (C.zf) goto L_107edb8b;
  /* 107edb7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107edb7f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107edb82 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edb85 jne 0x107edb8b */
  if (!C.zf) goto L_107edb8b;
  /* 107edb87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107edb89 jmp 0x107edbaf */
  goto L_107edbaf;
L_107edb8b:;
  /* 107edb8b call 0x107ecee0 */
  push32(0x107edb90u); f_107ecee0();
  /* 107edb90 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 107edb96 call 0x107ecef0 */
  push32(0x107edb9bu); f_107ecef0();
  /* 107edb9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107edba1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107edba4 jmp 0x107edbaf */
  goto L_107edbaf;
L_107edba6:;
  /* 107edba6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107edba9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_107edbaf:;
  /* 107edbaf mov esp, ebp */
  ESP = (EBP);
  /* 107edbb1 pop ebp */
  EBP = (pop32());
  /* 107edbb2 ret  */
  ESPCHK(0x107ed940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbc0 @ 0x107edbc0 (199 bytes, 68 insns) */
void f_107edbc0(void) {
  FTRACE(0x107edbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107edbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107edbc1 mov ebp, esp */
  EBP = (ESP);
  /* 107edbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 107edbc4 push ebx */
  push32((uint32_t)(EBX));
  /* 107edbc5 push esi */
  push32((uint32_t)(ESI));
  /* 107edbc6 push edi */
  push32((uint32_t)(EDI));
L_107edbc7:;
  /* 107edbc7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edbcb jne 0x107edbeb */
  if (!C.zf) goto L_107edbeb;
  /* 107edbcd push 0x1080c1dc */
  push32((uint32_t)(0x1080c1dcu));
  /* 107edbd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107edbd4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 107edbd6 push 0x1080c2a8 */
  push32((uint32_t)(0x1080c2a8u));
  /* 107edbdb push 2 */
  push32((uint32_t)(0x2u));
  /* 107edbdd call 0x107e40d0 */
  push32(0x107edbe2u); f_107e40d0();
  /* 107edbe2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107edbe5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edbe8 jne 0x107edbeb */
  if (!C.zf) goto L_107edbeb;
  /* 107edbea int3  */
  x86_unimpl("int3 @ 0x107edbea");
L_107edbeb:;
  /* 107edbeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107edbed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107edbef jne 0x107edbc7 */
  if (!C.zf) goto L_107edbc7;
  /* 107edbf1 mov ecx, dword ptr [0x10810824] */
  ECX = (r32((uint32_t)(0x10810824)));
  /* 107edbf7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107edbfa mov dword ptr [0x10810824], ecx */
  w32((uint32_t)(0x10810824), (ECX));
  /* 107edc00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edc03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107edc06 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 107edc08 push 0x1080c2a8 */
  push32((uint32_t)(0x1080c2a8u));
  /* 107edc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 107edc0f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107edc14 call 0x107e5010 */
  push32(0x107edc19u); f_107e5010();
  /* 107edc19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107edc1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc1f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 107edc22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc25 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edc29 je 0x107edc46 */
  if (C.zf) goto L_107edc46;
  /* 107edc2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc2e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107edc31 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 107edc34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc37 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 107edc3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc3d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 107edc44 jmp 0x107edc6b */
  goto L_107edc6b;
L_107edc46:;
  /* 107edc46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc49 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107edc4c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107edc4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc52 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107edc55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc58 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107edc5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc5e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107edc61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc64 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_107edc6b:;
  /* 107edc6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107edc74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107edc76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edc79 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107edc80 pop edi */
  EDI = (pop32());
  /* 107edc81 pop esi */
  ESI = (pop32());
  /* 107edc82 pop ebx */
  EBX = (pop32());
  /* 107edc83 mov esp, ebp */
  ESP = (EBP);
  /* 107edc85 pop ebp */
  EBP = (pop32());
  /* 107edc86 ret  */
  ESPCHK(0x107edbc0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x107edc90 (50 bytes, 17 insns) */
void f_107edc90(void) {
  FTRACE(0x107edc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107edc90 push ebp */
  push32((uint32_t)(EBP));
  /* 107edc91 mov ebp, esp */
  EBP = (ESP);
  /* 107edc93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edc96 cmp eax, dword ptr [0x1081211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edc9c jb 0x107edca2 */
  if (C.cf) goto L_107edca2;
  /* 107edc9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107edca0 jmp 0x107edcc0 */
  goto L_107edcc0;
L_107edca2:;
  /* 107edca2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edca5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107edca8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edcab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107edcae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107edcb1 mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107edcb8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107edcbd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_107edcc0:;
  /* 107edcc0 pop ebp */
  EBP = (pop32());
  /* 107edcc1 ret  */
  ESPCHK(0x107edc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcd0 @ 0x107edcd0 (300 bytes, 80 insns) */
void f_107edcd0(void) {
  FTRACE(0x107edcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107edcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 107edcd1 mov ebp, esp */
  EBP = (ESP);
  /* 107edcd3 push ecx */
  push32((uint32_t)(ECX));
  /* 107edcd4 cmp dword ptr [0x10811ce0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10811ce0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edcdb jne 0x107edce9 */
  if (!C.zf) goto L_107edce9;
  /* 107edcdd mov dword ptr [0x10811ce0], 0x200 */
  w32((uint32_t)(0x10811ce0), (0x200u));
  /* 107edce7 jmp 0x107edcfc */
  goto L_107edcfc;
L_107edce9:;
  /* 107edce9 cmp dword ptr [0x10811ce0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10811ce0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edcf0 jge 0x107edcfc */
  if ((C.sf==C.of)) goto L_107edcfc;
  /* 107edcf2 mov dword ptr [0x10811ce0], 0x14 */
  w32((uint32_t)(0x10811ce0), (0x14u));
L_107edcfc:;
  /* 107edcfc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 107edd01 push 0x1080c2b4 */
  push32((uint32_t)(0x1080c2b4u));
  /* 107edd06 push 2 */
  push32((uint32_t)(0x2u));
  /* 107edd08 push 4 */
  push32((uint32_t)(0x4u));
  /* 107edd0a mov eax, dword ptr [0x10811ce0] */
  EAX = (r32((uint32_t)(0x10811ce0)));
  /* 107edd0f push eax */
  push32((uint32_t)(EAX));
  /* 107edd10 call 0x107e5420 */
  push32(0x107edd15u); f_107e5420();
  /* 107edd15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107edd18 mov dword ptr [0x10810998], eax */
  w32((uint32_t)(0x10810998), (EAX));
  /* 107edd1d cmp dword ptr [0x10810998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edd24 jne 0x107edd65 */
  if (!C.zf) goto L_107edd65;
  /* 107edd26 mov dword ptr [0x10811ce0], 0x14 */
  w32((uint32_t)(0x10811ce0), (0x14u));
  /* 107edd30 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 107edd35 push 0x1080c2b4 */
  push32((uint32_t)(0x1080c2b4u));
  /* 107edd3a push 2 */
  push32((uint32_t)(0x2u));
  /* 107edd3c push 4 */
  push32((uint32_t)(0x4u));
  /* 107edd3e mov ecx, dword ptr [0x10811ce0] */
  ECX = (r32((uint32_t)(0x10811ce0)));
  /* 107edd44 push ecx */
  push32((uint32_t)(ECX));
  /* 107edd45 call 0x107e5420 */
  push32(0x107edd4au); f_107e5420();
  /* 107edd4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107edd4d mov dword ptr [0x10810998], eax */
  w32((uint32_t)(0x10810998), (EAX));
  /* 107edd52 cmp dword ptr [0x10810998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edd59 jne 0x107edd65 */
  if (!C.zf) goto L_107edd65;
  /* 107edd5b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 107edd5d call 0x107e3f80 */
  push32(0x107edd62u); f_107e3f80();
  /* 107edd62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107edd65:;
  /* 107edd65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107edd6c jmp 0x107edd77 */
  goto L_107edd77;
L_107edd6e:;
  /* 107edd6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edd71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107edd74 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107edd77:;
  /* 107edd77 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edd7b jge 0x107edd96 */
  if ((C.sf==C.of)) goto L_107edd96;
  /* 107edd7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edd80 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107edd83 add eax, 0x1080f120 */
  { uint32_t _a=(EAX),_b=(0x1080f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107edd88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edd8b mov edx, dword ptr [0x10810998] */
  EDX = (r32((uint32_t)(0x10810998)));
  /* 107edd91 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 107edd94 jmp 0x107edd6e */
  goto L_107edd6e;
L_107edd96:;
  /* 107edd96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107edd9d jmp 0x107edda8 */
  goto L_107edda8;
L_107edd9f:;
  /* 107edd9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edda2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107edda5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107edda8:;
  /* 107edda8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eddac jge 0x107eddf8 */
  if ((C.sf==C.of)) goto L_107eddf8;
  /* 107eddae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eddb1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107eddb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eddb7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107eddba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eddbd mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107eddc4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eddc8 je 0x107edde6 */
  if (C.zf) goto L_107edde6;
  /* 107eddca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eddcd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107eddd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eddd3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107eddd6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eddd9 mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107edde0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edde4 jne 0x107eddf6 */
  if (!C.zf) goto L_107eddf6;
L_107edde6:;
  /* 107edde6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107edde9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107eddec mov dword ptr [ecx + 0x1080f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1080f130), (0xffffffffu));
L_107eddf6:;
  /* 107eddf6 jmp 0x107edd9f */
  goto L_107edd9f;
L_107eddf8:;
  /* 107eddf8 mov esp, ebp */
  ESP = (EBP);
  /* 107eddfa pop ebp */
  EBP = (pop32());
  /* 107eddfb ret  */
  ESPCHK(0x107edcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x107ede00 (26 bytes, 9 insns) */
void f_107ede00(void) {
  FTRACE(0x107ede00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ede00 push ebp */
  push32((uint32_t)(EBP));
  /* 107ede01 mov ebp, esp */
  EBP = (ESP);
  /* 107ede03 call 0x107eea00 */
  push32(0x107ede08u); f_107eea00();
  /* 107ede08 movsx eax, byte ptr [0x1081063c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1081063c))));
  /* 107ede0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ede11 je 0x107ede18 */
  if (C.zf) goto L_107ede18;
  /* 107ede13 call 0x107ee7c0 */
  push32(0x107ede18u); f_107ee7c0();
L_107ede18:;
  /* 107ede18 pop ebp */
  EBP = (pop32());
  /* 107ede19 ret  */
  ESPCHK(0x107ede00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de20 @ 0x107ede20 (61 bytes, 20 insns) */
void f_107ede20(void) {
  FTRACE(0x107ede20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ede20 push ebp */
  push32((uint32_t)(EBP));
  /* 107ede21 mov ebp, esp */
  EBP = (ESP);
  /* 107ede23 cmp dword ptr [ebp + 8], 0x1080f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1080f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ede2a jb 0x107ede4e */
  if (C.cf) goto L_107ede4e;
  /* 107ede2c cmp dword ptr [ebp + 8], 0x1080f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1080f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ede33 ja 0x107ede4e */
  if ((!C.cf&&!C.zf)) goto L_107ede4e;
  /* 107ede35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ede38 sub eax, 0x1080f120 */
  { uint32_t _a=(EAX),_b=(0x1080f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ede3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ede40 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ede43 push eax */
  push32((uint32_t)(EAX));
  /* 107ede44 call 0x107e8a10 */
  push32(0x107ede49u); f_107e8a10();
  /* 107ede49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ede4c jmp 0x107ede5b */
  goto L_107ede5b;
L_107ede4e:;
  /* 107ede4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ede51 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ede54 push ecx */
  push32((uint32_t)(ECX));
  /* 107ede55 call dword ptr [0x1081331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081331c))), 0x107ede5bu);
L_107ede5b:;
  /* 107ede5b pop ebp */
  EBP = (pop32());
  /* 107ede5c ret  */
  ESPCHK(0x107ede20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de60 @ 0x107ede60 (41 bytes, 16 insns) */
void f_107ede60(void) {
  FTRACE(0x107ede60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ede60 push ebp */
  push32((uint32_t)(EBP));
  /* 107ede61 mov ebp, esp */
  EBP = (ESP);
  /* 107ede63 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ede67 jge 0x107ede7a */
  if ((C.sf==C.of)) goto L_107ede7a;
  /* 107ede69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ede6c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ede6f push eax */
  push32((uint32_t)(EAX));
  /* 107ede70 call 0x107e8a10 */
  push32(0x107ede75u); f_107e8a10();
  /* 107ede75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ede78 jmp 0x107ede87 */
  goto L_107ede87;
L_107ede7a:;
  /* 107ede7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ede7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ede80 push ecx */
  push32((uint32_t)(ECX));
  /* 107ede81 call dword ptr [0x1081331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081331c))), 0x107ede87u);
L_107ede87:;
  /* 107ede87 pop ebp */
  EBP = (pop32());
  /* 107ede88 ret  */
  ESPCHK(0x107ede60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de90 @ 0x107ede90 (61 bytes, 20 insns) */
void f_107ede90(void) {
  FTRACE(0x107ede90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ede90 push ebp */
  push32((uint32_t)(EBP));
  /* 107ede91 mov ebp, esp */
  EBP = (ESP);
  /* 107ede93 cmp dword ptr [ebp + 8], 0x1080f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1080f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ede9a jb 0x107edebe */
  if (C.cf) goto L_107edebe;
  /* 107ede9c cmp dword ptr [ebp + 8], 0x1080f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1080f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edea3 ja 0x107edebe */
  if ((!C.cf&&!C.zf)) goto L_107edebe;
  /* 107edea5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edea8 sub eax, 0x1080f120 */
  { uint32_t _a=(EAX),_b=(0x1080f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107edead sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107edeb0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107edeb3 push eax */
  push32((uint32_t)(EAX));
  /* 107edeb4 call 0x107e8ab0 */
  push32(0x107edeb9u); f_107e8ab0();
  /* 107edeb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107edebc jmp 0x107edecb */
  goto L_107edecb;
L_107edebe:;
  /* 107edebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edec1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107edec4 push ecx */
  push32((uint32_t)(ECX));
  /* 107edec5 call dword ptr [0x10813318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813318))), 0x107edecbu);
L_107edecb:;
  /* 107edecb pop ebp */
  EBP = (pop32());
  /* 107edecc ret  */
  ESPCHK(0x107ede90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ded0 @ 0x107eded0 (41 bytes, 16 insns) */
void f_107eded0(void) {
  FTRACE(0x107eded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eded0 push ebp */
  push32((uint32_t)(EBP));
  /* 107eded1 mov ebp, esp */
  EBP = (ESP);
  /* 107eded3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eded7 jge 0x107edeea */
  if ((C.sf==C.of)) goto L_107edeea;
  /* 107eded9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ededc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ededf push eax */
  push32((uint32_t)(EAX));
  /* 107edee0 call 0x107e8ab0 */
  push32(0x107edee5u); f_107e8ab0();
  /* 107edee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107edee8 jmp 0x107edef7 */
  goto L_107edef7;
L_107edeea:;
  /* 107edeea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107edeed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107edef0 push ecx */
  push32((uint32_t)(ECX));
  /* 107edef1 call dword ptr [0x10813318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813318))), 0x107edef7u);
L_107edef7:;
  /* 107edef7 pop ebp */
  EBP = (pop32());
  /* 107edef8 ret  */
  ESPCHK(0x107eded0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df00 @ 0x107edf00 (119 bytes, 34 insns) */
void f_107edf00(void) {
  FTRACE(0x107edf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107edf00 push ebp */
  push32((uint32_t)(EBP));
  /* 107edf01 mov ebp, esp */
  EBP = (ESP);
  /* 107edf03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107edf06 push 0x10810994 */
  push32((uint32_t)(0x10810994u));
  /* 107edf0b call dword ptr [0x10813354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813354))), 0x107edf11u);
  /* 107edf11 cmp dword ptr [0x10810984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edf18 je 0x107edf38 */
  if (C.zf) goto L_107edf38;
  /* 107edf1a push 0x10810994 */
  push32((uint32_t)(0x10810994u));
  /* 107edf1f call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107edf25u);
  /* 107edf25 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107edf27 call 0x107e8a10 */
  push32(0x107edf2cu); f_107e8a10();
  /* 107edf2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107edf2f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107edf36 jmp 0x107edf3f */
  goto L_107edf3f;
L_107edf38:;
  /* 107edf38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107edf3f:;
  /* 107edf3f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 107edf43 push eax */
  push32((uint32_t)(EAX));
  /* 107edf44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edf47 push ecx */
  push32((uint32_t)(ECX));
  /* 107edf48 call 0x107edf80 */
  push32(0x107edf4du); f_107edf80();
  /* 107edf4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107edf50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107edf53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edf57 je 0x107edf65 */
  if (C.zf) goto L_107edf65;
  /* 107edf59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107edf5b call 0x107e8ab0 */
  push32(0x107edf60u); f_107e8ab0();
  /* 107edf60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107edf63 jmp 0x107edf70 */
  goto L_107edf70;
L_107edf65:;
  /* 107edf65 push 0x10810994 */
  push32((uint32_t)(0x10810994u));
  /* 107edf6a call dword ptr [0x10813344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813344))), 0x107edf70u);
L_107edf70:;
  /* 107edf70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107edf73 mov esp, ebp */
  ESP = (EBP);
  /* 107edf75 pop ebp */
  EBP = (pop32());
  /* 107edf76 ret  */
  ESPCHK(0x107edf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df80 @ 0x107edf80 (160 bytes, 50 insns) */
void f_107edf80(void) {
  FTRACE(0x107edf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107edf80 push ebp */
  push32((uint32_t)(EBP));
  /* 107edf81 mov ebp, esp */
  EBP = (ESP);
  /* 107edf83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107edf86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edf8a jne 0x107edf93 */
  if (!C.zf) goto L_107edf93;
  /* 107edf8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107edf8e jmp 0x107ee01c */
  goto L_107ee01c;
L_107edf93:;
  /* 107edf93 cmp dword ptr [0x10810808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edf9a jne 0x107edfca */
  if (!C.zf) goto L_107edfca;
  /* 107edf9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107edf9f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107edfa4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107edfa9 jle 0x107edfbb */
  if ((C.zf||C.sf!=C.of)) goto L_107edfbb;
  /* 107edfab call 0x107ecee0 */
  push32(0x107edfb0u); f_107ecee0();
  /* 107edfb0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 107edfb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107edfb9 jmp 0x107ee01c */
  goto L_107ee01c;
L_107edfbb:;
  /* 107edfbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edfbe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 107edfc1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 107edfc3 mov eax, 1 */
  EAX = (0x1u);
  /* 107edfc8 jmp 0x107ee01c */
  goto L_107ee01c;
L_107edfca:;
  /* 107edfca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107edfd1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107edfd4 push eax */
  push32((uint32_t)(EAX));
  /* 107edfd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107edfd7 mov ecx, dword ptr [0x1080eea4] */
  ECX = (r32((uint32_t)(0x1080eea4)));
  /* 107edfdd push ecx */
  push32((uint32_t)(ECX));
  /* 107edfde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107edfe1 push edx */
  push32((uint32_t)(EDX));
  /* 107edfe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 107edfe4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 107edfe7 push eax */
  push32((uint32_t)(EAX));
  /* 107edfe8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 107edfed mov ecx, dword ptr [0x10810818] */
  ECX = (r32((uint32_t)(0x10810818)));
  /* 107edff3 push ecx */
  push32((uint32_t)(ECX));
  /* 107edff4 call dword ptr [0x108133ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108133ac))), 0x107edffau);
  /* 107edffa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107edffd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee001 je 0x107ee009 */
  if (C.zf) goto L_107ee009;
  /* 107ee003 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee007 je 0x107ee019 */
  if (C.zf) goto L_107ee019;
L_107ee009:;
  /* 107ee009 call 0x107ecee0 */
  push32(0x107ee00eu); f_107ecee0();
  /* 107ee00e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 107ee014 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ee017 jmp 0x107ee01c */
  goto L_107ee01c;
L_107ee019:;
  /* 107ee019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107ee01c:;
  /* 107ee01c mov esp, ebp */
  ESP = (EBP);
  /* 107ee01e pop ebp */
  EBP = (pop32());
  /* 107ee01f ret  */
  ESPCHK(0x107edf80u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x107ee020 (32 bytes, 18 insns) */
void f_107ee020(void) {
  FTRACE(0x107ee020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee020 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee021 mov ebp, esp */
  EBP = (ESP);
  /* 107ee023 push ebx */
  push32((uint32_t)(EBX));
  /* 107ee024 push esi */
  push32((uint32_t)(ESI));
  /* 107ee025 push edi */
  push32((uint32_t)(EDI));
  /* 107ee026 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee027 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ee029 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ee02b push 0x107ee038 */
  push32((uint32_t)(0x107ee038u));
  /* 107ee030 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 107ee033 call 0x107f576c */
  push32(0x107ee038u); f_107f576c();
  /* 107ee038 pop ebp */
  EBP = (pop32());
  /* 107ee039 pop edi */
  EDI = (pop32());
  /* 107ee03a pop esi */
  ESI = (pop32());
  /* 107ee03b pop ebx */
  EBX = (pop32());
  /* 107ee03c mov esp, ebp */
  ESP = (EBP);
  /* 107ee03e pop ebp */
  EBP = (pop32());
  /* 107ee03f ret  */
  ESPCHK(0x107ee020u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x107ee062 (104 bytes, 33 insns) */
void f_107ee062(void) {
  FTRACE(0x107ee062u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee062 push ebx */
  push32((uint32_t)(EBX));
  /* 107ee063 push esi */
  push32((uint32_t)(ESI));
  /* 107ee064 push edi */
  push32((uint32_t)(EDI));
  /* 107ee065 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 107ee069 push eax */
  push32((uint32_t)(EAX));
  /* 107ee06a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 107ee06c push 0x107ee040 */
  push32((uint32_t)(0x107ee040u));
  /* 107ee071 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 107ee078 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_107ee07f:;
  /* 107ee07f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 107ee083 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ee086 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 107ee089 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee08c je 0x107ee0bc */
  if (C.zf) goto L_107ee0bc;
  /* 107ee08e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee092 je 0x107ee0bc */
  if (C.zf) goto L_107ee0bc;
  /* 107ee094 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 107ee097 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 107ee09a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 107ee09e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 107ee0a1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee0a6 jne 0x107ee0ba */
  if (!C.zf) goto L_107ee0ba;
  /* 107ee0a8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 107ee0ad mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 107ee0b1 call 0x107ee0f6 */
  push32(0x107ee0b6u); f_107ee0f6();
  /* 107ee0b6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x107ee0bau);
L_107ee0ba:;
  /* 107ee0ba jmp 0x107ee07f */
  goto L_107ee07f;
L_107ee0bc:;
  /* 107ee0bc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 107ee0c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee0c6 pop edi */
  EDI = (pop32());
  /* 107ee0c7 pop esi */
  ESI = (pop32());
  /* 107ee0c8 pop ebx */
  EBX = (pop32());
  /* 107ee0c9 ret  */
  ESPCHK(0x107ee062u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0f6 @ 0x107ee0f6 (24 bytes, 10 insns) */
void f_107ee0f6(void) {
  FTRACE(0x107ee0f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee0f6 push ebx */
  push32((uint32_t)(EBX));
  /* 107ee0f7 push ecx */
  push32((uint32_t)(ECX));
  /* 107ee0f8 mov ebx, 0x1080f3b8 */
  EBX = (0x1080f3b8u);
  /* 107ee0fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee100 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 107ee103 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 107ee106 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 107ee109 pop ecx */
  ECX = (pop32());
  /* 107ee10a pop ebx */
  EBX = (pop32());
  /* 107ee10b ret 4 */
  ESPCHK(0x107ee0f6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e1d5 @ 0x107ee1d5 (27 bytes, 11 insns) */
void f_107ee1d5(void) {
  FTRACE(0x107ee1d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee1d5 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee1d6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 107ee1da mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 107ee1dc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 107ee1df push eax */
  push32((uint32_t)(EAX));
  /* 107ee1e0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 107ee1e3 push eax */
  push32((uint32_t)(EAX));
  /* 107ee1e4 call 0x107ee062 */
  push32(0x107ee1e9u); f_107ee062();
  /* 107ee1e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee1ec pop ebp */
  EBP = (pop32());
  /* 107ee1ed ret 4 */
  ESPCHK(0x107ee1d5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e1f0 @ 0x107ee1f0 (482 bytes, 138 insns) */
void f_107ee1f0(void) {
  FTRACE(0x107ee1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee1f1 mov ebp, esp */
  EBP = (ESP);
  /* 107ee1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ee1f6 push esi */
  push32((uint32_t)(ESI));
  /* 107ee1f7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 107ee1fe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 107ee200 call 0x107e8a10 */
  push32(0x107ee205u); f_107e8a10();
  /* 107ee205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee208 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107ee20f jmp 0x107ee21a */
  goto L_107ee21a;
L_107ee211:;
  /* 107ee211 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee214 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee217 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107ee21a:;
  /* 107ee21a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee21e jge 0x107ee3c0 */
  if ((C.sf==C.of)) goto L_107ee3c0;
  /* 107ee224 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee227 cmp dword ptr [ecx*4 + 0x10811fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10811fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee22f je 0x107ee326 */
  if (C.zf) goto L_107ee326;
  /* 107ee235 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee238 mov eax, dword ptr [edx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10811fe0)));
  /* 107ee23f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ee242 jmp 0x107ee24d */
  goto L_107ee24d;
L_107ee244:;
  /* 107ee244 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee247 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee24a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ee24d:;
  /* 107ee24d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee250 mov eax, dword ptr [edx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10811fe0)));
  /* 107ee257 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee25c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee25f jae 0x107ee316 */
  if (!C.cf) goto L_107ee316;
  /* 107ee265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee268 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107ee26c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107ee26f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ee271 jne 0x107ee311 */
  if (!C.zf) goto L_107ee311;
  /* 107ee277 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee27a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee27e jne 0x107ee2b9 */
  if (!C.zf) goto L_107ee2b9;
  /* 107ee280 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107ee282 call 0x107e8a10 */
  push32(0x107ee287u); f_107e8a10();
  /* 107ee287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee28a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee28d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee291 jne 0x107ee2af */
  if (!C.zf) goto L_107ee2af;
  /* 107ee293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee296 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee299 push edx */
  push32((uint32_t)(EDX));
  /* 107ee29a call dword ptr [0x1081332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081332c))), 0x107ee2a0u);
  /* 107ee2a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee2a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ee2a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee2a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee2ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_107ee2af:;
  /* 107ee2af push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107ee2b1 call 0x107e8ab0 */
  push32(0x107ee2b6u); f_107e8ab0();
  /* 107ee2b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ee2b9:;
  /* 107ee2b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee2bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee2bf push eax */
  push32((uint32_t)(EAX));
  /* 107ee2c0 call dword ptr [0x1081331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081331c))), 0x107ee2c6u);
  /* 107ee2c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee2c9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107ee2cd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107ee2d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ee2d2 je 0x107ee2e6 */
  if (C.zf) goto L_107ee2e6;
  /* 107ee2d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee2d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee2da push eax */
  push32((uint32_t)(EAX));
  /* 107ee2db call dword ptr [0x10813318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813318))), 0x107ee2e1u);
  /* 107ee2e1 jmp 0x107ee244 */
  goto L_107ee244;
L_107ee2e6:;
  /* 107ee2e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee2e9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107ee2ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee2f2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ee2f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee2f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee2fb sub eax, dword ptr [edx*4 + 0x10811fe0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10811fe0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ee302 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107ee303 mov esi, 0x24 */
  ESI = (0x24u);
  /* 107ee308 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 107ee30a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee30c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107ee30f jmp 0x107ee316 */
  goto L_107ee316;
L_107ee311:;
  /* 107ee311 jmp 0x107ee244 */
  goto L_107ee244;
L_107ee316:;
  /* 107ee316 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee31a je 0x107ee321 */
  if (C.zf) goto L_107ee321;
  /* 107ee31c jmp 0x107ee3c0 */
  goto L_107ee3c0;
L_107ee321:;
  /* 107ee321 jmp 0x107ee3bb */
  goto L_107ee3bb;
L_107ee326:;
  /* 107ee326 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 107ee328 push 0x1080c2bc */
  push32((uint32_t)(0x1080c2bcu));
  /* 107ee32d push 2 */
  push32((uint32_t)(0x2u));
  /* 107ee32f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 107ee334 call 0x107e5010 */
  push32(0x107ee339u); f_107e5010();
  /* 107ee339 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee33c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ee33f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee343 je 0x107ee3b9 */
  if (C.zf) goto L_107ee3b9;
  /* 107ee345 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee348 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee34b mov dword ptr [eax*4 + 0x10811fe0], ecx */
  w32((uint32_t)(EAX*4 + 0x10811fe0), (ECX));
  /* 107ee352 mov edx, dword ptr [0x1081211c] */
  EDX = (r32((uint32_t)(0x1081211c)));
  /* 107ee358 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee35b mov dword ptr [0x1081211c], edx */
  w32((uint32_t)(0x1081211c), (EDX));
  /* 107ee361 jmp 0x107ee36c */
  goto L_107ee36c;
L_107ee363:;
  /* 107ee363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee366 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee369 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107ee36c:;
  /* 107ee36c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee36f mov edx, dword ptr [ecx*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107ee376 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee37c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee37f jae 0x107ee3a4 */
  if (!C.cf) goto L_107ee3a4;
  /* 107ee381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee384 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 107ee388 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee38b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 107ee391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee394 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 107ee398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee39b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 107ee3a2 jmp 0x107ee363 */
  goto L_107ee363;
L_107ee3a4:;
  /* 107ee3a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee3a7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ee3aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107ee3ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee3b0 push edx */
  push32((uint32_t)(EDX));
  /* 107ee3b1 call 0x107ee700 */
  push32(0x107ee3b6u); f_107ee700();
  /* 107ee3b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ee3b9:;
  /* 107ee3b9 jmp 0x107ee3c0 */
  goto L_107ee3c0;
L_107ee3bb:;
  /* 107ee3bb jmp 0x107ee211 */
  goto L_107ee211;
L_107ee3c0:;
  /* 107ee3c0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 107ee3c2 call 0x107e8ab0 */
  push32(0x107ee3c7u); f_107e8ab0();
  /* 107ee3c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee3ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee3cd pop esi */
  ESI = (pop32());
  /* 107ee3ce mov esp, ebp */
  ESP = (EBP);
  /* 107ee3d0 pop ebp */
  EBP = (pop32());
  /* 107ee3d1 ret  */
  ESPCHK(0x107ee1f0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x107ee3e0 (183 bytes, 57 insns) */
void f_107ee3e0(void) {
  FTRACE(0x107ee3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee3e1 mov ebp, esp */
  EBP = (ESP);
  /* 107ee3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ee3e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee3e7 cmp eax, dword ptr [0x1081211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee3ed jae 0x107ee47a */
  if (!C.cf) goto L_107ee47a;
  /* 107ee3f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee3f6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ee3f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee3fc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ee3ff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee402 mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107ee409 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee40d jne 0x107ee47a */
  if (!C.zf) goto L_107ee47a;
  /* 107ee40f cmp dword ptr [0x108105fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108105fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee416 jne 0x107ee45a */
  if (!C.zf) goto L_107ee45a;
  /* 107ee418 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee41b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107ee41e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee422 je 0x107ee432 */
  if (C.zf) goto L_107ee432;
  /* 107ee424 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee428 je 0x107ee440 */
  if (C.zf) goto L_107ee440;
  /* 107ee42a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee42e je 0x107ee44e */
  if (C.zf) goto L_107ee44e;
  /* 107ee430 jmp 0x107ee45a */
  goto L_107ee45a;
L_107ee432:;
  /* 107ee432 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ee435 push edx */
  push32((uint32_t)(EDX));
  /* 107ee436 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 107ee438 call dword ptr [0x108132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132e4))), 0x107ee43eu);
  /* 107ee43e jmp 0x107ee45a */
  goto L_107ee45a;
L_107ee440:;
  /* 107ee440 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ee443 push eax */
  push32((uint32_t)(EAX));
  /* 107ee444 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 107ee446 call dword ptr [0x108132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132e4))), 0x107ee44cu);
  /* 107ee44c jmp 0x107ee45a */
  goto L_107ee45a;
L_107ee44e:;
  /* 107ee44e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ee451 push ecx */
  push32((uint32_t)(ECX));
  /* 107ee452 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107ee454 call dword ptr [0x108132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132e4))), 0x107ee45au);
L_107ee45a:;
  /* 107ee45a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee45d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107ee460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee463 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107ee466 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee469 mov ecx, dword ptr [edx*4 + 0x10811fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10811fe0)));
  /* 107ee470 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ee473 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 107ee476 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ee478 jmp 0x107ee493 */
  goto L_107ee493;
L_107ee47a:;
  /* 107ee47a call 0x107ecee0 */
  push32(0x107ee47fu); f_107ecee0();
  /* 107ee47f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ee485 call 0x107ecef0 */
  push32(0x107ee48au); f_107ecef0();
  /* 107ee48a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ee490 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107ee493:;
  /* 107ee493 mov esp, ebp */
  ESP = (EBP);
  /* 107ee495 pop ebp */
  EBP = (pop32());
  /* 107ee496 ret  */
  ESPCHK(0x107ee3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4a0 @ 0x107ee4a0 (216 bytes, 63 insns) */
void f_107ee4a0(void) {
  FTRACE(0x107ee4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee4a1 mov ebp, esp */
  EBP = (ESP);
  /* 107ee4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ee4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee4a7 cmp eax, dword ptr [0x1081211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee4ad jae 0x107ee55b */
  if (!C.cf) goto L_107ee55b;
  /* 107ee4b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee4b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ee4b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee4bc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ee4bf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee4c2 mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107ee4c9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ee4ce and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ee4d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ee4d3 je 0x107ee55b */
  if (C.zf) goto L_107ee55b;
  /* 107ee4d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee4dc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107ee4df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee4e2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107ee4e5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee4e8 mov ecx, dword ptr [edx*4 + 0x10811fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10811fe0)));
  /* 107ee4ef cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee4f3 je 0x107ee55b */
  if (C.zf) goto L_107ee55b;
  /* 107ee4f5 cmp dword ptr [0x108105fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108105fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee4fc jne 0x107ee53a */
  if (!C.zf) goto L_107ee53a;
  /* 107ee4fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee501 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ee504 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee508 je 0x107ee518 */
  if (C.zf) goto L_107ee518;
  /* 107ee50a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee50e je 0x107ee524 */
  if (C.zf) goto L_107ee524;
  /* 107ee510 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee514 je 0x107ee530 */
  if (C.zf) goto L_107ee530;
  /* 107ee516 jmp 0x107ee53a */
  goto L_107ee53a;
L_107ee518:;
  /* 107ee518 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ee51a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 107ee51c call dword ptr [0x108132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132e4))), 0x107ee522u);
  /* 107ee522 jmp 0x107ee53a */
  goto L_107ee53a;
L_107ee524:;
  /* 107ee524 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ee526 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 107ee528 call dword ptr [0x108132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132e4))), 0x107ee52eu);
  /* 107ee52e jmp 0x107ee53a */
  goto L_107ee53a;
L_107ee530:;
  /* 107ee530 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ee532 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 107ee534 call dword ptr [0x108132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132e4))), 0x107ee53au);
L_107ee53a:;
  /* 107ee53a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee53d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ee540 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee543 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ee546 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee549 mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107ee550 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 107ee557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ee559 jmp 0x107ee574 */
  goto L_107ee574;
L_107ee55b:;
  /* 107ee55b call 0x107ecee0 */
  push32(0x107ee560u); f_107ecee0();
  /* 107ee560 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ee566 call 0x107ecef0 */
  push32(0x107ee56bu); f_107ecef0();
  /* 107ee56b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ee571 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107ee574:;
  /* 107ee574 mov esp, ebp */
  ESP = (EBP);
  /* 107ee576 pop ebp */
  EBP = (pop32());
  /* 107ee577 ret  */
  ESPCHK(0x107ee4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e580 @ 0x107ee580 (102 bytes, 30 insns) */
void f_107ee580(void) {
  FTRACE(0x107ee580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee580 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee581 mov ebp, esp */
  EBP = (ESP);
  /* 107ee583 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee586 cmp eax, dword ptr [0x1081211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee58c jae 0x107ee5cb */
  if (!C.cf) goto L_107ee5cb;
  /* 107ee58e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee591 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ee594 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee597 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ee59a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee59d mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107ee5a4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ee5a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ee5ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ee5ae je 0x107ee5cb */
  if (C.zf) goto L_107ee5cb;
  /* 107ee5b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee5b3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 107ee5b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee5b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 107ee5bc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee5bf mov ecx, dword ptr [edx*4 + 0x10811fe0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10811fe0)));
  /* 107ee5c6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 107ee5c9 jmp 0x107ee5e4 */
  goto L_107ee5e4;
L_107ee5cb:;
  /* 107ee5cb call 0x107ecee0 */
  push32(0x107ee5d0u); f_107ecee0();
  /* 107ee5d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ee5d6 call 0x107ecef0 */
  push32(0x107ee5dbu); f_107ecef0();
  /* 107ee5db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ee5e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_107ee5e4:;
  /* 107ee5e4 pop ebp */
  EBP = (pop32());
  /* 107ee5e5 ret  */
  ESPCHK(0x107ee580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5f0 @ 0x107ee5f0 (260 bytes, 83 insns) */
void f_107ee5f0(void) {
  FTRACE(0x107ee5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee5f1 mov ebp, esp */
  EBP = (ESP);
  /* 107ee5f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ee5f6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 107ee5fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ee5fd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 107ee600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ee602 je 0x107ee60d */
  if (C.zf) goto L_107ee60d;
  /* 107ee604 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ee607 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 107ee60a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_107ee60d:;
  /* 107ee60d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ee610 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 107ee616 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ee618 je 0x107ee622 */
  if (C.zf) goto L_107ee622;
  /* 107ee61a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ee61d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 107ee61f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_107ee622:;
  /* 107ee622 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ee625 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 107ee62b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ee62d je 0x107ee638 */
  if (C.zf) goto L_107ee638;
  /* 107ee62f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ee632 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 107ee635 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_107ee638:;
  /* 107ee638 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee63b push eax */
  push32((uint32_t)(EAX));
  /* 107ee63c call dword ptr [0x1081338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081338c))), 0x107ee642u);
  /* 107ee642 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ee645 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee649 jne 0x107ee662 */
  if (!C.zf) goto L_107ee662;
  /* 107ee64b call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107ee651u);
  /* 107ee651 push eax */
  push32((uint32_t)(EAX));
  /* 107ee652 call 0x107ece40 */
  push32(0x107ee657u); f_107ece40();
  /* 107ee657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee65a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ee65d jmp 0x107ee6f0 */
  goto L_107ee6f0;
L_107ee662:;
  /* 107ee662 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee666 jne 0x107ee673 */
  if (!C.zf) goto L_107ee673;
  /* 107ee668 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ee66b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 107ee66e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 107ee671 jmp 0x107ee682 */
  goto L_107ee682;
L_107ee673:;
  /* 107ee673 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee677 jne 0x107ee682 */
  if (!C.zf) goto L_107ee682;
  /* 107ee679 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ee67c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 107ee67f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_107ee682:;
  /* 107ee682 call 0x107ee1f0 */
  push32(0x107ee687u); f_107ee1f0();
  /* 107ee687 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ee68a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee68e jne 0x107ee6ab */
  if (!C.zf) goto L_107ee6ab;
  /* 107ee690 call 0x107ecee0 */
  push32(0x107ee695u); f_107ecee0();
  /* 107ee695 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 107ee69b call 0x107ecef0 */
  push32(0x107ee6a0u); f_107ecef0();
  /* 107ee6a0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107ee6a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ee6a9 jmp 0x107ee6f0 */
  goto L_107ee6f0;
L_107ee6ab:;
  /* 107ee6ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee6ae push eax */
  push32((uint32_t)(EAX));
  /* 107ee6af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee6b2 push ecx */
  push32((uint32_t)(ECX));
  /* 107ee6b3 call 0x107ee3e0 */
  push32(0x107ee6b8u); f_107ee3e0();
  /* 107ee6b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee6bb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ee6be or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 107ee6c1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 107ee6c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee6c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ee6ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee6cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ee6d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee6d3 mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107ee6da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 107ee6dd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 107ee6e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee6e4 push ecx */
  push32((uint32_t)(ECX));
  /* 107ee6e5 call 0x107ee790 */
  push32(0x107ee6eau); f_107ee790();
  /* 107ee6ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee6ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107ee6f0:;
  /* 107ee6f0 mov esp, ebp */
  ESP = (EBP);
  /* 107ee6f2 pop ebp */
  EBP = (pop32());
  /* 107ee6f3 ret  */
  ESPCHK(0x107ee5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x107ee700 (134 bytes, 44 insns) */
void f_107ee700(void) {
  FTRACE(0x107ee700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee700 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee701 mov ebp, esp */
  EBP = (ESP);
  /* 107ee703 push ecx */
  push32((uint32_t)(ECX));
  /* 107ee704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee707 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ee70a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee70d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ee710 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee713 mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107ee71a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee71c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107ee71f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee722 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee726 jne 0x107ee761 */
  if (!C.zf) goto L_107ee761;
  /* 107ee728 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107ee72a call 0x107e8a10 */
  push32(0x107ee72fu); f_107e8a10();
  /* 107ee72f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee732 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee735 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee739 jne 0x107ee757 */
  if (!C.zf) goto L_107ee757;
  /* 107ee73b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee73e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee741 push edx */
  push32((uint32_t)(EDX));
  /* 107ee742 call dword ptr [0x1081332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081332c))), 0x107ee748u);
  /* 107ee748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee74b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ee74e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee751 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee754 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_107ee757:;
  /* 107ee757 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 107ee759 call 0x107e8ab0 */
  push32(0x107ee75eu); f_107e8ab0();
  /* 107ee75e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ee761:;
  /* 107ee761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee764 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ee767 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee76a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ee76d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee770 mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107ee777 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 107ee77b push eax */
  push32((uint32_t)(EAX));
  /* 107ee77c call dword ptr [0x1081331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1081331c))), 0x107ee782u);
  /* 107ee782 mov esp, ebp */
  ESP = (EBP);
  /* 107ee784 pop ebp */
  EBP = (pop32());
  /* 107ee785 ret  */
  ESPCHK(0x107ee700u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x107ee790 (38 bytes, 13 insns) */
void f_107ee790(void) {
  FTRACE(0x107ee790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee790 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee791 mov ebp, esp */
  EBP = (ESP);
  /* 107ee793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee796 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ee799 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee79c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ee79f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ee7a2 mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107ee7a9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 107ee7ad push eax */
  push32((uint32_t)(EAX));
  /* 107ee7ae call dword ptr [0x10813318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813318))), 0x107ee7b4u);
  /* 107ee7b4 pop ebp */
  EBP = (pop32());
  /* 107ee7b5 ret  */
  ESPCHK(0x107ee790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7c0 @ 0x107ee7c0 (218 bytes, 63 insns) */
void f_107ee7c0(void) {
  FTRACE(0x107ee7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee7c1 mov ebp, esp */
  EBP = (ESP);
  /* 107ee7c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ee7c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ee7cd push 2 */
  push32((uint32_t)(0x2u));
  /* 107ee7cf call 0x107e8a10 */
  push32(0x107ee7d4u); f_107e8a10();
  /* 107ee7d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee7d7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 107ee7de jmp 0x107ee7e9 */
  goto L_107ee7e9;
L_107ee7e0:;
  /* 107ee7e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee7e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee7e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107ee7e9:;
  /* 107ee7e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee7ec cmp ecx, dword ptr [0x10811ce0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10811ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee7f2 jge 0x107ee889 */
  if ((C.sf==C.of)) goto L_107ee889;
  /* 107ee7f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee7fb mov eax, dword ptr [0x10810998] */
  EAX = (r32((uint32_t)(0x10810998)));
  /* 107ee800 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee804 je 0x107ee884 */
  if (C.zf) goto L_107ee884;
  /* 107ee806 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee809 mov edx, dword ptr [0x10810998] */
  EDX = (r32((uint32_t)(0x10810998)));
  /* 107ee80f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 107ee812 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ee815 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 107ee81b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ee81d je 0x107ee841 */
  if (C.zf) goto L_107ee841;
  /* 107ee81f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee822 mov eax, dword ptr [0x10810998] */
  EAX = (r32((uint32_t)(0x10810998)));
  /* 107ee827 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107ee82a push ecx */
  push32((uint32_t)(ECX));
  /* 107ee82b call 0x107ef5b0 */
  push32(0x107ee830u); f_107ef5b0();
  /* 107ee830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee833 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee836 je 0x107ee841 */
  if (C.zf) goto L_107ee841;
  /* 107ee838 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee83b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee83e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107ee841:;
  /* 107ee841 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee845 jl 0x107ee884 */
  if ((C.sf!=C.of)) goto L_107ee884;
  /* 107ee847 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee84a mov ecx, dword ptr [0x10810998] */
  ECX = (r32((uint32_t)(0x10810998)));
  /* 107ee850 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107ee853 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee856 push edx */
  push32((uint32_t)(EDX));
  /* 107ee857 call dword ptr [0x10813394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813394))), 0x107ee85du);
  /* 107ee85d push 2 */
  push32((uint32_t)(0x2u));
  /* 107ee85f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee862 mov ecx, dword ptr [0x10810998] */
  ECX = (r32((uint32_t)(0x10810998)));
  /* 107ee868 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107ee86b push edx */
  push32((uint32_t)(EDX));
  /* 107ee86c call 0x107e5aa0 */
  push32(0x107ee871u); f_107e5aa0();
  /* 107ee871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee874 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee877 mov ecx, dword ptr [0x10810998] */
  ECX = (r32((uint32_t)(0x10810998)));
  /* 107ee87d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_107ee884:;
  /* 107ee884 jmp 0x107ee7e0 */
  goto L_107ee7e0;
L_107ee889:;
  /* 107ee889 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ee88b call 0x107e8ab0 */
  push32(0x107ee890u); f_107e8ab0();
  /* 107ee890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee893 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee896 mov esp, ebp */
  ESP = (EBP);
  /* 107ee898 pop ebp */
  EBP = (pop32());
  /* 107ee899 ret  */
  ESPCHK(0x107ee7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8a0 @ 0x107ee8a0 (68 bytes, 26 insns) */
void f_107ee8a0(void) {
  FTRACE(0x107ee8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee8a1 mov ebp, esp */
  EBP = (ESP);
  /* 107ee8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ee8a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee8a8 jne 0x107ee8b6 */
  if (!C.zf) goto L_107ee8b6;
  /* 107ee8aa push 0 */
  push32((uint32_t)(0x0u));
  /* 107ee8ac call 0x107eea10 */
  push32(0x107ee8b1u); f_107eea10();
  /* 107ee8b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee8b4 jmp 0x107ee8e0 */
  goto L_107ee8e0;
L_107ee8b6:;
  /* 107ee8b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee8b9 push eax */
  push32((uint32_t)(EAX));
  /* 107ee8ba call 0x107ede20 */
  push32(0x107ee8bfu); f_107ede20();
  /* 107ee8bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee8c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee8c5 push ecx */
  push32((uint32_t)(ECX));
  /* 107ee8c6 call 0x107ee8f0 */
  push32(0x107ee8cbu); f_107ee8f0();
  /* 107ee8cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee8ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ee8d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee8d4 push edx */
  push32((uint32_t)(EDX));
  /* 107ee8d5 call 0x107ede90 */
  push32(0x107ee8dau); f_107ede90();
  /* 107ee8da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee8dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107ee8e0:;
  /* 107ee8e0 mov esp, ebp */
  ESP = (EBP);
  /* 107ee8e2 pop ebp */
  EBP = (pop32());
  /* 107ee8e3 ret  */
  ESPCHK(0x107ee8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x107ee8f0 (65 bytes, 26 insns) */
void f_107ee8f0(void) {
  FTRACE(0x107ee8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee8f1 mov ebp, esp */
  EBP = (ESP);
  /* 107ee8f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee8f6 push eax */
  push32((uint32_t)(EAX));
  /* 107ee8f7 call 0x107ee940 */
  push32(0x107ee8fcu); f_107ee940();
  /* 107ee8fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ee901 je 0x107ee908 */
  if (C.zf) goto L_107ee908;
  /* 107ee903 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ee906 jmp 0x107ee92f */
  goto L_107ee92f;
L_107ee908:;
  /* 107ee908 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee90b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ee90e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 107ee914 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ee916 je 0x107ee92d */
  if (C.zf) goto L_107ee92d;
  /* 107ee918 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee91b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107ee91e push ecx */
  push32((uint32_t)(ECX));
  /* 107ee91f call 0x107ef700 */
  push32(0x107ee924u); f_107ef700();
  /* 107ee924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee927 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107ee929 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ee92b jmp 0x107ee92f */
  goto L_107ee92f;
L_107ee92d:;
  /* 107ee92d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ee92f:;
  /* 107ee92f pop ebp */
  EBP = (pop32());
  /* 107ee930 ret  */
  ESPCHK(0x107ee8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e940 @ 0x107ee940 (183 bytes, 62 insns) */
void f_107ee940(void) {
  FTRACE(0x107ee940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ee940 push ebp */
  push32((uint32_t)(EBP));
  /* 107ee941 mov ebp, esp */
  EBP = (ESP);
  /* 107ee943 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ee946 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ee94d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ee950 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107ee953 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee956 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ee959 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 107ee95c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee95f jne 0x107ee9db */
  if (!C.zf) goto L_107ee9db;
  /* 107ee961 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee964 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ee967 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 107ee96d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ee96f je 0x107ee9db */
  if (C.zf) goto L_107ee9db;
  /* 107ee971 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee974 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee977 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 107ee979 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ee97c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ee97f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee983 jle 0x107ee9db */
  if ((C.zf||C.sf!=C.of)) goto L_107ee9db;
  /* 107ee985 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ee988 push edx */
  push32((uint32_t)(EDX));
  /* 107ee989 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee98c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107ee98f push ecx */
  push32((uint32_t)(ECX));
  /* 107ee990 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee993 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107ee996 push eax */
  push32((uint32_t)(EAX));
  /* 107ee997 call 0x107ed8b0 */
  push32(0x107ee99cu); f_107ed8b0();
  /* 107ee99c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ee99f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ee9a2 jne 0x107ee9c5 */
  if (!C.zf) goto L_107ee9c5;
  /* 107ee9a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee9a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ee9aa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 107ee9b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ee9b2 je 0x107ee9c3 */
  if (C.zf) goto L_107ee9c3;
  /* 107ee9b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee9b7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ee9ba and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 107ee9bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee9c0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_107ee9c3:;
  /* 107ee9c3 jmp 0x107ee9db */
  goto L_107ee9db;
L_107ee9c5:;
  /* 107ee9c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee9c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107ee9cb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 107ee9ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee9d1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 107ee9d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ee9db:;
  /* 107ee9db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee9de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee9e1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107ee9e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107ee9e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ee9e9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 107ee9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ee9f3 mov esp, ebp */
  ESP = (EBP);
  /* 107ee9f5 pop ebp */
  EBP = (pop32());
  /* 107ee9f6 ret  */
  ESPCHK(0x107ee940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea00 @ 0x107eea00 (15 bytes, 7 insns) */
void f_107eea00(void) {
  FTRACE(0x107eea00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eea00 push ebp */
  push32((uint32_t)(EBP));
  /* 107eea01 mov ebp, esp */
  EBP = (ESP);
  /* 107eea03 push 1 */
  push32((uint32_t)(0x1u));
  /* 107eea05 call 0x107eea10 */
  push32(0x107eea0au); f_107eea10();
  /* 107eea0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eea0d pop ebp */
  EBP = (pop32());
  /* 107eea0e ret  */
  ESPCHK(0x107eea00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea10 @ 0x107eea10 (319 bytes, 94 insns) */
void f_107eea10(void) {
  FTRACE(0x107eea10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eea10 push ebp */
  push32((uint32_t)(EBP));
  /* 107eea11 mov ebp, esp */
  EBP = (ESP);
  /* 107eea13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eea16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107eea1d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107eea24 push 2 */
  push32((uint32_t)(0x2u));
  /* 107eea26 call 0x107e8a10 */
  push32(0x107eea2bu); f_107e8a10();
  /* 107eea2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eea2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107eea35 jmp 0x107eea40 */
  goto L_107eea40;
L_107eea37:;
  /* 107eea37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eea3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eea3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107eea40:;
  /* 107eea40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eea43 cmp ecx, dword ptr [0x10811ce0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10811ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eea49 jge 0x107eeb33 */
  if ((C.sf==C.of)) goto L_107eeb33;
  /* 107eea4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eea52 mov eax, dword ptr [0x10810998] */
  EAX = (r32((uint32_t)(0x10810998)));
  /* 107eea57 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eea5b je 0x107eeb2e */
  if (C.zf) goto L_107eeb2e;
  /* 107eea61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eea64 mov edx, dword ptr [0x10810998] */
  EDX = (r32((uint32_t)(0x10810998)));
  /* 107eea6a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 107eea6d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107eea70 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 107eea76 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107eea78 je 0x107eeb2e */
  if (C.zf) goto L_107eeb2e;
  /* 107eea7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eea81 mov eax, dword ptr [0x10810998] */
  EAX = (r32((uint32_t)(0x10810998)));
  /* 107eea86 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107eea89 push ecx */
  push32((uint32_t)(ECX));
  /* 107eea8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eea8d push edx */
  push32((uint32_t)(EDX));
  /* 107eea8e call 0x107ede60 */
  push32(0x107eea93u); f_107ede60();
  /* 107eea93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eea96 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eea99 mov ecx, dword ptr [0x10810998] */
  ECX = (r32((uint32_t)(0x10810998)));
  /* 107eea9f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107eeaa2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107eeaa5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 107eeaaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eeaac je 0x107eeb15 */
  if (C.zf) goto L_107eeb15;
  /* 107eeaae cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeab2 jne 0x107eead9 */
  if (!C.zf) goto L_107eead9;
  /* 107eeab4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eeab7 mov edx, dword ptr [0x10810998] */
  EDX = (r32((uint32_t)(0x10810998)));
  /* 107eeabd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 107eeac0 push eax */
  push32((uint32_t)(EAX));
  /* 107eeac1 call 0x107ee8f0 */
  push32(0x107eeac6u); f_107ee8f0();
  /* 107eeac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeac9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeacc je 0x107eead7 */
  if (C.zf) goto L_107eead7;
  /* 107eeace mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eead1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eead4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107eead7:;
  /* 107eead7 jmp 0x107eeb15 */
  goto L_107eeb15;
L_107eead9:;
  /* 107eead9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeadd jne 0x107eeb15 */
  if (!C.zf) goto L_107eeb15;
  /* 107eeadf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eeae2 mov eax, dword ptr [0x10810998] */
  EAX = (r32((uint32_t)(0x10810998)));
  /* 107eeae7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 107eeaea mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107eeaed and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 107eeaf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107eeaf2 je 0x107eeb15 */
  if (C.zf) goto L_107eeb15;
  /* 107eeaf4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eeaf7 mov ecx, dword ptr [0x10810998] */
  ECX = (r32((uint32_t)(0x10810998)));
  /* 107eeafd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107eeb00 push edx */
  push32((uint32_t)(EDX));
  /* 107eeb01 call 0x107ee8f0 */
  push32(0x107eeb06u); f_107ee8f0();
  /* 107eeb06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeb09 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeb0c jne 0x107eeb15 */
  if (!C.zf) goto L_107eeb15;
  /* 107eeb0e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_107eeb15:;
  /* 107eeb15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eeb18 mov ecx, dword ptr [0x10810998] */
  ECX = (r32((uint32_t)(0x10810998)));
  /* 107eeb1e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 107eeb21 push edx */
  push32((uint32_t)(EDX));
  /* 107eeb22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eeb25 push eax */
  push32((uint32_t)(EAX));
  /* 107eeb26 call 0x107eded0 */
  push32(0x107eeb2bu); f_107eded0();
  /* 107eeb2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107eeb2e:;
  /* 107eeb2e jmp 0x107eea37 */
  goto L_107eea37;
L_107eeb33:;
  /* 107eeb33 push 2 */
  push32((uint32_t)(0x2u));
  /* 107eeb35 call 0x107e8ab0 */
  push32(0x107eeb3au); f_107e8ab0();
  /* 107eeb3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeb3d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeb41 jne 0x107eeb48 */
  if (!C.zf) goto L_107eeb48;
  /* 107eeb43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107eeb46 jmp 0x107eeb4b */
  goto L_107eeb4b;
L_107eeb48:;
  /* 107eeb48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107eeb4b:;
  /* 107eeb4b mov esp, ebp */
  ESP = (EBP);
  /* 107eeb4d pop ebp */
  EBP = (pop32());
  /* 107eeb4e ret  */
  ESPCHK(0x107eea10u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x107eeb50 (15 bytes, 7 insns) */
void f_107eeb50(void) {
  FTRACE(0x107eeb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eeb50 push ebp */
  push32((uint32_t)(EBP));
  /* 107eeb51 mov ebp, esp */
  EBP = (ESP);
  /* 107eeb53 push 2 */
  push32((uint32_t)(0x2u));
  /* 107eeb55 call 0x107e3f80 */
  push32(0x107eeb5au); f_107e3f80();
  /* 107eeb5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeb5d pop ebp */
  EBP = (pop32());
  /* 107eeb5e ret  */
  ESPCHK(0x107eeb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb60 @ 0x107eeb60 (1007 bytes, 269 insns) */
void f_107eeb60(void) {
  FTRACE(0x107eeb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eeb60 push ebp */
  push32((uint32_t)(EBP));
  /* 107eeb61 mov ebp, esp */
  EBP = (ESP);
  /* 107eeb63 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eeb69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeb6d jl 0x107eeb75 */
  if ((C.sf!=C.of)) goto L_107eeb75;
  /* 107eeb6f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeb73 jle 0x107eeb7c */
  if ((C.zf||C.sf!=C.of)) goto L_107eeb7c;
L_107eeb75:;
  /* 107eeb75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eeb77 jmp 0x107eef4b */
  goto L_107eef4b;
L_107eeb7c:;
  /* 107eeb7c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107eeb7e call 0x107e8a10 */
  push32(0x107eeb83u); f_107e8a10();
  /* 107eeb83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeb86 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107eeb8d mov eax, dword ptr [0x10810984] */
  EAX = (r32((uint32_t)(0x10810984)));
  /* 107eeb92 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeb95 mov dword ptr [0x10810984], eax */
  w32((uint32_t)(0x10810984), (EAX));
L_107eeb9a:;
  /* 107eeb9a cmp dword ptr [0x10810994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeba1 je 0x107eebad */
  if (C.zf) goto L_107eebad;
  /* 107eeba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107eeba5 call dword ptr [0x108132d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132d4))), 0x107eebabu);
  /* 107eebab jmp 0x107eeb9a */
  goto L_107eeb9a;
L_107eebad:;
  /* 107eebad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eebb1 je 0x107eebf1 */
  if (C.zf) goto L_107eebf1;
  /* 107eebb3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eebb7 je 0x107eebd1 */
  if (C.zf) goto L_107eebd1;
  /* 107eebb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eebbc push ecx */
  push32((uint32_t)(ECX));
  /* 107eebbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eebc0 push edx */
  push32((uint32_t)(EDX));
  /* 107eebc1 call 0x107eef50 */
  push32(0x107eebc6u); f_107eef50();
  /* 107eebc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eebc9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 107eebcf jmp 0x107eebe3 */
  goto L_107eebe3;
L_107eebd1:;
  /* 107eebd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eebd4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eebd7 mov ecx, dword ptr [eax + 0x1080f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1080f4dc)));
  /* 107eebdd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_107eebe3:;
  /* 107eebe3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 107eebe9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107eebec jmp 0x107eef2b */
  goto L_107eef2b;
L_107eebf1:;
  /* 107eebf1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 107eebf8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107eebff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eec03 je 0x107eef23 */
  if (C.zf) goto L_107eef23;
  /* 107eec09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eec0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107eec0f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eec12 jne 0x107eee34 */
  if (!C.zf) goto L_107eee34;
  /* 107eec18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eec1b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107eec1f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eec22 jne 0x107eee34 */
  if (!C.zf) goto L_107eee34;
  /* 107eec28 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eec2b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 107eec2f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eec32 jne 0x107eee34 */
  if (!C.zf) goto L_107eee34;
  /* 107eec38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eec3b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_107eec41:;
  /* 107eec41 push 0x1080c30c */
  push32((uint32_t)(0x1080c30cu));
  /* 107eec46 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107eec4c push ecx */
  push32((uint32_t)(ECX));
  /* 107eec4d call 0x107f0db0 */
  push32(0x107eec52u); f_107f0db0();
  /* 107eec52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eec55 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 107eec5b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eec62 je 0x107eec8d */
  if (C.zf) goto L_107eec8d;
  /* 107eec64 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107eec6a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eec70 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 107eec76 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eec7d je 0x107eec8d */
  if (C.zf) goto L_107eec8d;
  /* 107eec7f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107eec85 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107eec88 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eec8b jne 0x107eecb3 */
  if (!C.zf) goto L_107eecb3;
L_107eec8d:;
  /* 107eec8d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eec91 je 0x107eecac */
  if (C.zf) goto L_107eecac;
  /* 107eec93 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107eec95 call 0x107e8ab0 */
  push32(0x107eec9au); f_107e8ab0();
  /* 107eec9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eec9d mov edx, dword ptr [0x10810984] */
  EDX = (r32((uint32_t)(0x10810984)));
  /* 107eeca3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eeca6 mov dword ptr [0x10810984], edx */
  w32((uint32_t)(0x10810984), (EDX));
L_107eecac:;
  /* 107eecac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eecae jmp 0x107eef4b */
  goto L_107eef4b;
L_107eecb3:;
  /* 107eecb3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 107eecba jmp 0x107eecc5 */
  goto L_107eecc5;
L_107eecbc:;
  /* 107eecbc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eecbf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eecc2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_107eecc5:;
  /* 107eecc5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eecc9 jg 0x107eed13 */
  if ((!C.zf&&C.sf==C.of)) goto L_107eed13;
  /* 107eeccb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 107eecd1 push ecx */
  push32((uint32_t)(ECX));
  /* 107eecd2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107eecd8 push edx */
  push32((uint32_t)(EDX));
  /* 107eecd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eecdc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eecdf mov ecx, dword ptr [eax + 0x1080f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1080f4d8)));
  /* 107eece5 push ecx */
  push32((uint32_t)(ECX));
  /* 107eece6 call 0x107f0d70 */
  push32(0x107eecebu); f_107f0d70();
  /* 107eeceb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eecee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eecf0 jne 0x107eed11 */
  if (!C.zf) goto L_107eed11;
  /* 107eecf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eecf5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eecf8 mov eax, dword ptr [edx + 0x1080f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1080f4d8)));
  /* 107eecfe push eax */
  push32((uint32_t)(EAX));
  /* 107eecff call 0x107e7e40 */
  push32(0x107eed04u); f_107e7e40();
  /* 107eed04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eed07 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eed0d jne 0x107eed11 */
  if (!C.zf) goto L_107eed11;
  /* 107eed0f jmp 0x107eed13 */
  goto L_107eed13;
L_107eed11:;
  /* 107eed11 jmp 0x107eecbc */
  goto L_107eecbc;
L_107eed13:;
  /* 107eed13 push 0x1080c308 */
  push32((uint32_t)(0x1080c308u));
  /* 107eed18 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107eed1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eed21 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 107eed27 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107eed2d push edx */
  push32((uint32_t)(EDX));
  /* 107eed2e call 0x107f0d30 */
  push32(0x107eed33u); f_107f0d30();
  /* 107eed33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eed36 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 107eed3c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eed43 jne 0x107eed79 */
  if (!C.zf) goto L_107eed79;
  /* 107eed45 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107eed4b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107eed4e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eed51 je 0x107eed79 */
  if (C.zf) goto L_107eed79;
  /* 107eed53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eed57 je 0x107eed72 */
  if (C.zf) goto L_107eed72;
  /* 107eed59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107eed5b call 0x107e8ab0 */
  push32(0x107eed60u); f_107e8ab0();
  /* 107eed60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eed63 mov edx, dword ptr [0x10810984] */
  EDX = (r32((uint32_t)(0x10810984)));
  /* 107eed69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eed6c mov dword ptr [0x10810984], edx */
  w32((uint32_t)(0x10810984), (EDX));
L_107eed72:;
  /* 107eed72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eed74 jmp 0x107eef4b */
  goto L_107eef4b;
L_107eed79:;
  /* 107eed79 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eed7d jg 0x107eedca */
  if ((!C.zf&&C.sf==C.of)) goto L_107eedca;
  /* 107eed7f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 107eed85 push eax */
  push32((uint32_t)(EAX));
  /* 107eed86 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107eed8c push ecx */
  push32((uint32_t)(ECX));
  /* 107eed8d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 107eed93 push edx */
  push32((uint32_t)(EDX));
  /* 107eed94 call 0x107e8830 */
  push32(0x107eed99u); f_107e8830();
  /* 107eed99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eed9c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 107eeda2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 107eedaa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 107eedb0 push ecx */
  push32((uint32_t)(ECX));
  /* 107eedb1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eedb4 push edx */
  push32((uint32_t)(EDX));
  /* 107eedb5 call 0x107eef50 */
  push32(0x107eedbau); f_107eef50();
  /* 107eedba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eedbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eedbf je 0x107eedca */
  if (C.zf) goto L_107eedca;
  /* 107eedc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eedc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eedc7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107eedca:;
  /* 107eedca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107eedd0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eedd6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 107eeddc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107eede2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107eede5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eede7 je 0x107eedf8 */
  if (C.zf) goto L_107eedf8;
  /* 107eede9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107eedef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eedf2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_107eedf8:;
  /* 107eedf8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 107eedfe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107eee01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eee03 jne 0x107eec41 */
  if (!C.zf) goto L_107eec41;
  /* 107eee09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eee0d je 0x107eee1c */
  if (C.zf) goto L_107eee1c;
  /* 107eee0f call 0x107ef0f0 */
  push32(0x107eee14u); f_107ef0f0();
  /* 107eee14 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 107eee1a jmp 0x107eee26 */
  goto L_107eee26;
L_107eee1c:;
  /* 107eee1c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_107eee26:;
  /* 107eee26 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 107eee2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107eee2f jmp 0x107eef21 */
  goto L_107eef21;
L_107eee34:;
  /* 107eee34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eee37 push edx */
  push32((uint32_t)(EDX));
  /* 107eee38 push 0 */
  push32((uint32_t)(0x0u));
  /* 107eee3a push 0 */
  push32((uint32_t)(0x0u));
  /* 107eee3c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 107eee42 push eax */
  push32((uint32_t)(EAX));
  /* 107eee43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eee46 push ecx */
  push32((uint32_t)(ECX));
  /* 107eee47 call 0x107ef1f0 */
  push32(0x107eee4cu); f_107ef1f0();
  /* 107eee4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eee4f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107eee52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eee56 je 0x107eef21 */
  if (C.zf) goto L_107eef21;
  /* 107eee5c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107eee63 jmp 0x107eee6e */
  goto L_107eee6e;
L_107eee65:;
  /* 107eee65 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eee68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eee6b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107eee6e:;
  /* 107eee6e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eee72 jg 0x107eeed0 */
  if ((!C.zf&&C.sf==C.of)) goto L_107eeed0;
  /* 107eee74 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eee78 je 0x107eeece */
  if (C.zf) goto L_107eeece;
  /* 107eee7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eee7d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eee80 mov ecx, dword ptr [eax + 0x1080f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1080f4dc)));
  /* 107eee86 push ecx */
  push32((uint32_t)(ECX));
  /* 107eee87 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 107eee8d push edx */
  push32((uint32_t)(EDX));
  /* 107eee8e call 0x107f0ca0 */
  push32(0x107eee93u); f_107f0ca0();
  /* 107eee93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eee96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eee98 je 0x107eeec5 */
  if (C.zf) goto L_107eeec5;
  /* 107eee9a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 107eeea0 push eax */
  push32((uint32_t)(EAX));
  /* 107eeea1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107eeea4 push ecx */
  push32((uint32_t)(ECX));
  /* 107eeea5 call 0x107eef50 */
  push32(0x107eeeaau); f_107eef50();
  /* 107eeeaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eeeaf je 0x107eeebc */
  if (C.zf) goto L_107eeebc;
  /* 107eeeb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eeeb4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeeb7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 107eeeba jmp 0x107eeec3 */
  goto L_107eeec3;
L_107eeebc:;
  /* 107eeebc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_107eeec3:;
  /* 107eeec3 jmp 0x107eeece */
  goto L_107eeece;
L_107eeec5:;
  /* 107eeec5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107eeec8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeecb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_107eeece:;
  /* 107eeece jmp 0x107eee65 */
  goto L_107eee65;
L_107eeed0:;
  /* 107eeed0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeed4 je 0x107eeefb */
  if (C.zf) goto L_107eeefb;
  /* 107eeed6 call 0x107ef0f0 */
  push32(0x107eeedbu); f_107ef0f0();
  /* 107eeedb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107eeede push 2 */
  push32((uint32_t)(0x2u));
  /* 107eeee0 mov ecx, dword ptr [0x1080f4dc] */
  ECX = (r32((uint32_t)(0x1080f4dc)));
  /* 107eeee6 push ecx */
  push32((uint32_t)(ECX));
  /* 107eeee7 call 0x107e5aa0 */
  push32(0x107eeeecu); f_107e5aa0();
  /* 107eeeec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeeef mov dword ptr [0x1080f4dc], 0 */
  w32((uint32_t)(0x1080f4dc), (0x0u));
  /* 107eeef9 jmp 0x107eef21 */
  goto L_107eef21;
L_107eeefb:;
  /* 107eeefb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eeeff je 0x107eef0e */
  if (C.zf) goto L_107eef0e;
  /* 107eef01 call 0x107ef0f0 */
  push32(0x107eef06u); f_107ef0f0();
  /* 107eef06 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 107eef0c jmp 0x107eef18 */
  goto L_107eef18;
L_107eef0e:;
  /* 107eef0e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_107eef18:;
  /* 107eef18 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 107eef1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_107eef21:;
  /* 107eef21 jmp 0x107eef2b */
  goto L_107eef2b;
L_107eef23:;
  /* 107eef23 call 0x107ef0f0 */
  push32(0x107eef28u); f_107ef0f0();
  /* 107eef28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107eef2b:;
  /* 107eef2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eef2f je 0x107eef48 */
  if (C.zf) goto L_107eef48;
  /* 107eef31 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 107eef33 call 0x107e8ab0 */
  push32(0x107eef38u); f_107e8ab0();
  /* 107eef38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eef3b mov eax, dword ptr [0x10810984] */
  EAX = (r32((uint32_t)(0x10810984)));
  /* 107eef40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eef43 mov dword ptr [0x10810984], eax */
  w32((uint32_t)(0x10810984), (EAX));
L_107eef48:;
  /* 107eef48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107eef4b:;
  /* 107eef4b mov esp, ebp */
  ESP = (EBP);
  /* 107eef4d pop ebp */
  EBP = (pop32());
  /* 107eef4e ret  */
  ESPCHK(0x107eeb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef50 @ 0x107eef50 (403 bytes, 117 insns) */
void f_107eef50(void) {
  FTRACE(0x107eef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107eef50 push ebp */
  push32((uint32_t)(EBP));
  /* 107eef51 mov ebp, esp */
  EBP = (ESP);
  /* 107eef53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107eef59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eef5c push eax */
  push32((uint32_t)(EAX));
  /* 107eef5d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 107eef63 push ecx */
  push32((uint32_t)(ECX));
  /* 107eef64 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 107eef6a push edx */
  push32((uint32_t)(EDX));
  /* 107eef6b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 107eef71 push eax */
  push32((uint32_t)(EAX));
  /* 107eef72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107eef75 push ecx */
  push32((uint32_t)(ECX));
  /* 107eef76 call 0x107ef1f0 */
  push32(0x107eef7bu); f_107ef1f0();
  /* 107eef7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eef7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107eef80 jne 0x107eef89 */
  if (!C.zf) goto L_107eef89;
  /* 107eef82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eef84 jmp 0x107ef0df */
  goto L_107ef0df;
L_107eef89:;
  /* 107eef89 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 107eef8e push 0x1080c310 */
  push32((uint32_t)(0x1080c310u));
  /* 107eef93 push 2 */
  push32((uint32_t)(0x2u));
  /* 107eef95 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 107eef9b push edx */
  push32((uint32_t)(EDX));
  /* 107eef9c call 0x107e7e40 */
  push32(0x107eefa1u); f_107e7e40();
  /* 107eefa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eefa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eefa7 push eax */
  push32((uint32_t)(EAX));
  /* 107eefa8 call 0x107e5010 */
  push32(0x107eefadu); f_107e5010();
  /* 107eefad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eefb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107eefb3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107eefb7 jne 0x107eefc0 */
  if (!C.zf) goto L_107eefc0;
  /* 107eefb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107eefbb jmp 0x107ef0df */
  goto L_107ef0df;
L_107eefc0:;
  /* 107eefc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eefc3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eefc6 mov ecx, dword ptr [eax + 0x1080f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1080f4dc)));
  /* 107eefcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107eefcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eefd2 mov eax, dword ptr [edx*4 + 0x10810800] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10810800)));
  /* 107eefd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107eefdc push 6 */
  push32((uint32_t)(0x6u));
  /* 107eefde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eefe1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107eefe4 add ecx, 0x10810850 */
  { uint32_t _a=(ECX),_b=(0x10810850u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107eefea push ecx */
  push32((uint32_t)(ECX));
  /* 107eefeb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 107eefee push edx */
  push32((uint32_t)(EDX));
  /* 107eefef call 0x107eb8f0 */
  push32(0x107eeff4u); f_107eb8f0();
  /* 107eeff4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eeff7 mov eax, dword ptr [0x10810818] */
  EAX = (r32((uint32_t)(0x10810818)));
  /* 107eeffc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107eefff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 107ef005 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef006 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef009 push edx */
  push32((uint32_t)(EDX));
  /* 107ef00a call 0x107e7fc0 */
  push32(0x107ef00fu); f_107e7fc0();
  /* 107ef00f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef012 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef015 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef018 mov dword ptr [ecx + 0x1080f4dc], eax */
  w32((uint32_t)(ECX + 0x1080f4dc), (EAX));
  /* 107ef01e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 107ef024 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107ef02a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef02d mov dword ptr [eax*4 + 0x10810800], edx */
  w32((uint32_t)(EAX*4 + 0x10810800), (EDX));
  /* 107ef034 push 6 */
  push32((uint32_t)(0x6u));
  /* 107ef036 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 107ef03c push ecx */
  push32((uint32_t)(ECX));
  /* 107ef03d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef040 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef043 add edx, 0x10810850 */
  { uint32_t _a=(EDX),_b=(0x10810850u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef049 push edx */
  push32((uint32_t)(EDX));
  /* 107ef04a call 0x107eb8f0 */
  push32(0x107ef04fu); f_107eb8f0();
  /* 107ef04f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef052 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef056 jne 0x107ef063 */
  if (!C.zf) goto L_107ef063;
  /* 107ef058 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107ef05e mov dword ptr [0x10810818], eax */
  w32((uint32_t)(0x10810818), (EAX));
L_107ef063:;
  /* 107ef063 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef067 jne 0x107ef075 */
  if (!C.zf) goto L_107ef075;
  /* 107ef069 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 107ef06f mov dword ptr [0x1081081c], ecx */
  w32((uint32_t)(0x1081081c), (ECX));
L_107ef075:;
  /* 107ef075 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef078 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef07b call dword ptr [edx + 0x1080f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1080f4e0))), 0x107ef081u);
  /* 107ef081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef083 je 0x107ef0bc */
  if (C.zf) goto L_107ef0bc;
  /* 107ef085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef088 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef08b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef08e mov dword ptr [eax + 0x1080f4dc], ecx */
  w32((uint32_t)(EAX + 0x1080f4dc), (ECX));
  /* 107ef094 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef096 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef099 push edx */
  push32((uint32_t)(EDX));
  /* 107ef09a call 0x107e5aa0 */
  push32(0x107ef09fu); f_107e5aa0();
  /* 107ef09f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef0a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef0a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef0a8 mov dword ptr [eax*4 + 0x10810800], ecx */
  w32((uint32_t)(EAX*4 + 0x10810800), (ECX));
  /* 107ef0af mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107ef0b2 mov dword ptr [0x10810818], edx */
  w32((uint32_t)(0x10810818), (EDX));
  /* 107ef0b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef0ba jmp 0x107ef0df */
  goto L_107ef0df;
L_107ef0bc:;
  /* 107ef0bc cmp dword ptr [ebp - 0xc], 0x1080f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1080f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef0c3 je 0x107ef0d3 */
  if (C.zf) goto L_107ef0d3;
  /* 107ef0c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef0c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef0ca push eax */
  push32((uint32_t)(EAX));
  /* 107ef0cb call 0x107e5aa0 */
  push32(0x107ef0d0u); f_107e5aa0();
  /* 107ef0d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ef0d3:;
  /* 107ef0d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef0d6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef0d9 mov eax, dword ptr [ecx + 0x1080f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1080f4dc)));
L_107ef0df:;
  /* 107ef0df mov esp, ebp */
  ESP = (EBP);
  /* 107ef0e1 pop ebp */
  EBP = (pop32());
  /* 107ef0e2 ret  */
  ESPCHK(0x107eef50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0f0 @ 0x107ef0f0 (256 bytes, 72 insns) */
void f_107ef0f0(void) {
  FTRACE(0x107ef0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef0f1 mov ebp, esp */
  EBP = (ESP);
  /* 107ef0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ef0f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107ef0fd cmp dword ptr [0x1080f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1080f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef104 jne 0x107ef124 */
  if (!C.zf) goto L_107ef124;
  /* 107ef106 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 107ef10b push 0x1080c310 */
  push32((uint32_t)(0x1080c310u));
  /* 107ef110 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef112 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 107ef117 call 0x107e5010 */
  push32(0x107ef11cu); f_107e5010();
  /* 107ef11c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef11f mov dword ptr [0x1080f4dc], eax */
  w32((uint32_t)(0x1080f4dc), (EAX));
L_107ef124:;
  /* 107ef124 mov eax, dword ptr [0x1080f4dc] */
  EAX = (r32((uint32_t)(0x1080f4dc)));
  /* 107ef129 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 107ef12c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 107ef133 jmp 0x107ef13e */
  goto L_107ef13e;
L_107ef135:;
  /* 107ef135 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef138 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef13b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_107ef13e:;
  /* 107ef13e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef141 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef144 mov eax, dword ptr [edx + 0x1080f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1080f4dc)));
  /* 107ef14a push eax */
  push32((uint32_t)(EAX));
  /* 107ef14b push 0x1080c31c */
  push32((uint32_t)(0x1080c31cu));
  /* 107ef150 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef153 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef156 mov edx, dword ptr [ecx + 0x1080f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1080f4d8)));
  /* 107ef15c push edx */
  push32((uint32_t)(EDX));
  /* 107ef15d push 3 */
  push32((uint32_t)(0x3u));
  /* 107ef15f mov eax, dword ptr [0x1080f4dc] */
  EAX = (r32((uint32_t)(0x1080f4dc)));
  /* 107ef164 push eax */
  push32((uint32_t)(EAX));
  /* 107ef165 call 0x107ef390 */
  push32(0x107ef16au); f_107ef390();
  /* 107ef16a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef16d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef171 jge 0x107ef1b9 */
  if ((C.sf==C.of)) goto L_107ef1b9;
  /* 107ef173 push 0x1080c308 */
  push32((uint32_t)(0x1080c308u));
  /* 107ef178 mov ecx, dword ptr [0x1080f4dc] */
  ECX = (r32((uint32_t)(0x1080f4dc)));
  /* 107ef17e push ecx */
  push32((uint32_t)(ECX));
  /* 107ef17f call 0x107e7fd0 */
  push32(0x107ef184u); f_107e7fd0();
  /* 107ef184 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef187 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef18a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef18d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef190 mov eax, dword ptr [edx + 0x1080f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1080f4dc)));
  /* 107ef196 push eax */
  push32((uint32_t)(EAX));
  /* 107ef197 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef19a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef19d mov edx, dword ptr [ecx + 0x1080f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1080f4dc)));
  /* 107ef1a3 push edx */
  push32((uint32_t)(EDX));
  /* 107ef1a4 call 0x107f0ca0 */
  push32(0x107ef1a9u); f_107f0ca0();
  /* 107ef1a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef1ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef1ae je 0x107ef1b7 */
  if (C.zf) goto L_107ef1b7;
  /* 107ef1b0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107ef1b7:;
  /* 107ef1b7 jmp 0x107ef1e7 */
  goto L_107ef1e7;
L_107ef1b9:;
  /* 107ef1b9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef1bd jne 0x107ef1c6 */
  if (!C.zf) goto L_107ef1c6;
  /* 107ef1bf mov eax, dword ptr [0x1080f4dc] */
  EAX = (r32((uint32_t)(0x1080f4dc)));
  /* 107ef1c4 jmp 0x107ef1ec */
  goto L_107ef1ec;
L_107ef1c6:;
  /* 107ef1c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef1c8 mov eax, dword ptr [0x1080f4dc] */
  EAX = (r32((uint32_t)(0x1080f4dc)));
  /* 107ef1cd push eax */
  push32((uint32_t)(EAX));
  /* 107ef1ce call 0x107e5aa0 */
  push32(0x107ef1d3u); f_107e5aa0();
  /* 107ef1d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef1d6 mov dword ptr [0x1080f4dc], 0 */
  w32((uint32_t)(0x1080f4dc), (0x0u));
  /* 107ef1e0 mov eax, dword ptr [0x1080f4f4] */
  EAX = (r32((uint32_t)(0x1080f4f4)));
  /* 107ef1e5 jmp 0x107ef1ec */
  goto L_107ef1ec;
L_107ef1e7:;
  /* 107ef1e7 jmp 0x107ef135 */
  goto L_107ef135;
L_107ef1ec:;
  /* 107ef1ec mov esp, ebp */
  ESP = (EBP);
  /* 107ef1ee pop ebp */
  EBP = (pop32());
  /* 107ef1ef ret  */
  ESPCHK(0x107ef0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1f0 @ 0x107ef1f0 (388 bytes, 115 insns) */
void f_107ef1f0(void) {
  FTRACE(0x107ef1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef1f1 mov ebp, esp */
  EBP = (ESP);
  /* 107ef1f3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ef1f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef1fd jne 0x107ef206 */
  if (!C.zf) goto L_107ef206;
  /* 107ef1ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef201 jmp 0x107ef370 */
  goto L_107ef370;
L_107ef206:;
  /* 107ef206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef209 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107ef20c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef20f jne 0x107ef260 */
  if (!C.zf) goto L_107ef260;
  /* 107ef211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef214 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107ef218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef21a jne 0x107ef260 */
  if (!C.zf) goto L_107ef260;
  /* 107ef21c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef21f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 107ef222 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef225 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 107ef229 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef22d je 0x107ef249 */
  if (C.zf) goto L_107ef249;
  /* 107ef22f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ef232 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 107ef237 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ef23a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 107ef240 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ef243 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_107ef249:;
  /* 107ef249 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef24d je 0x107ef258 */
  if (C.zf) goto L_107ef258;
  /* 107ef24f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ef252 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_107ef258:;
  /* 107ef258 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef25b jmp 0x107ef370 */
  goto L_107ef370;
L_107ef260:;
  /* 107ef260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef263 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef264 push 0x1080f450 */
  push32((uint32_t)(0x1080f450u));
  /* 107ef269 call 0x107f0ca0 */
  push32(0x107ef26eu); f_107f0ca0();
  /* 107ef26e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef271 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef273 je 0x107ef328 */
  if (C.zf) goto L_107ef328;
  /* 107ef279 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef27c push edx */
  push32((uint32_t)(EDX));
  /* 107ef27d push 0x1080f3cc */
  push32((uint32_t)(0x1080f3ccu));
  /* 107ef282 call 0x107f0ca0 */
  push32(0x107ef287u); f_107f0ca0();
  /* 107ef287 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef28a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef28c je 0x107ef328 */
  if (C.zf) goto L_107ef328;
  /* 107ef292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef295 push eax */
  push32((uint32_t)(EAX));
  /* 107ef296 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 107ef29c push ecx */
  push32((uint32_t)(ECX));
  /* 107ef29d call 0x107ef3e0 */
  push32(0x107ef2a2u); f_107ef3e0();
  /* 107ef2a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef2a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef2a7 je 0x107ef2b0 */
  if (C.zf) goto L_107ef2b0;
  /* 107ef2a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef2ab jmp 0x107ef370 */
  goto L_107ef370;
L_107ef2b0:;
  /* 107ef2b0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 107ef2b6 push edx */
  push32((uint32_t)(EDX));
  /* 107ef2b7 push 0x10810828 */
  push32((uint32_t)(0x10810828u));
  /* 107ef2bc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 107ef2c2 push eax */
  push32((uint32_t)(EAX));
  /* 107ef2c3 call 0x107f0df0 */
  push32(0x107ef2c8u); f_107f0df0();
  /* 107ef2c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef2cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef2cd jne 0x107ef2d6 */
  if (!C.zf) goto L_107ef2d6;
  /* 107ef2cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef2d1 jmp 0x107ef370 */
  goto L_107ef370;
L_107ef2d6:;
  /* 107ef2d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef2d8 mov cx, word ptr [0x1081082c] */
  CX = (r16((uint32_t)(0x1081082c)));
  /* 107ef2df mov dword ptr [0x10810830], ecx */
  w32((uint32_t)(0x10810830), (ECX));
  /* 107ef2e5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 107ef2eb push edx */
  push32((uint32_t)(EDX));
  /* 107ef2ec push 0x1080f450 */
  push32((uint32_t)(0x1080f450u));
  /* 107ef2f1 call 0x107ef540 */
  push32(0x107ef2f6u); f_107ef540();
  /* 107ef2f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef2f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef2fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107ef2ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ef301 je 0x107ef316 */
  if (C.zf) goto L_107ef316;
  /* 107ef303 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef306 push edx */
  push32((uint32_t)(EDX));
  /* 107ef307 push 0x1080f3cc */
  push32((uint32_t)(0x1080f3ccu));
  /* 107ef30c call 0x107e7fc0 */
  push32(0x107ef311u); f_107e7fc0();
  /* 107ef311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef314 jmp 0x107ef328 */
  goto L_107ef328;
L_107ef316:;
  /* 107ef316 push 0x1080f450 */
  push32((uint32_t)(0x1080f450u));
  /* 107ef31b push 0x1080f3cc */
  push32((uint32_t)(0x1080f3ccu));
  /* 107ef320 call 0x107e7fc0 */
  push32(0x107ef325u); f_107e7fc0();
  /* 107ef325 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ef328:;
  /* 107ef328 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef32c je 0x107ef341 */
  if (C.zf) goto L_107ef341;
  /* 107ef32e push 6 */
  push32((uint32_t)(0x6u));
  /* 107ef330 push 0x10810828 */
  push32((uint32_t)(0x10810828u));
  /* 107ef335 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107ef338 push eax */
  push32((uint32_t)(EAX));
  /* 107ef339 call 0x107eb8f0 */
  push32(0x107ef33eu); f_107eb8f0();
  /* 107ef33e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ef341:;
  /* 107ef341 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef345 je 0x107ef35a */
  if (C.zf) goto L_107ef35a;
  /* 107ef347 push 4 */
  push32((uint32_t)(0x4u));
  /* 107ef349 push 0x10810830 */
  push32((uint32_t)(0x10810830u));
  /* 107ef34e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107ef351 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef352 call 0x107eb8f0 */
  push32(0x107ef357u); f_107eb8f0();
  /* 107ef357 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ef35a:;
  /* 107ef35a push 0x1080f450 */
  push32((uint32_t)(0x1080f450u));
  /* 107ef35f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef362 push edx */
  push32((uint32_t)(EDX));
  /* 107ef363 call 0x107e7fc0 */
  push32(0x107ef368u); f_107e7fc0();
  /* 107ef368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef36b mov eax, 0x1080f450 */
  EAX = (0x1080f450u);
L_107ef370:;
  /* 107ef370 mov esp, ebp */
  ESP = (EBP);
  /* 107ef372 pop ebp */
  EBP = (pop32());
  /* 107ef373 ret  */
  ESPCHK(0x107ef1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f380 @ 0x107ef380 (7 bytes, 5 insns) */
void f_107ef380(void) {
  FTRACE(0x107ef380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef380 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef381 mov ebp, esp */
  EBP = (ESP);
  /* 107ef383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef385 pop ebp */
  EBP = (pop32());
  /* 107ef386 ret  */
  ESPCHK(0x107ef380u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x107ef390 (79 bytes, 28 insns) */
void f_107ef390(void) {
  FTRACE(0x107ef390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef390 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef391 mov ebp, esp */
  EBP = (ESP);
  /* 107ef393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ef396 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 107ef399 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ef39c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107ef3a3 jmp 0x107ef3ae */
  goto L_107ef3ae;
L_107ef3a5:;
  /* 107ef3a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef3a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef3ab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107ef3ae:;
  /* 107ef3ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef3b1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef3b4 jge 0x107ef3d4 */
  if ((C.sf==C.of)) goto L_107ef3d4;
  /* 107ef3b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef3b9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef3bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ef3bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef3c2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 107ef3c5 push edx */
  push32((uint32_t)(EDX));
  /* 107ef3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef3c9 push eax */
  push32((uint32_t)(EAX));
  /* 107ef3ca call 0x107e7fd0 */
  push32(0x107ef3cfu); f_107e7fd0();
  /* 107ef3cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef3d2 jmp 0x107ef3a5 */
  goto L_107ef3a5;
L_107ef3d4:;
  /* 107ef3d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ef3db mov esp, ebp */
  ESP = (EBP);
  /* 107ef3dd pop ebp */
  EBP = (pop32());
  /* 107ef3de ret  */
  ESPCHK(0x107ef390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3e0 @ 0x107ef3e0 (349 bytes, 122 insns) */
void f_107ef3e0(void) {
  FTRACE(0x107ef3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef3e1 mov ebp, esp */
  EBP = (ESP);
  /* 107ef3e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ef3e6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 107ef3eb push 0 */
  push32((uint32_t)(0x0u));
  /* 107ef3ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef3f0 push eax */
  push32((uint32_t)(EAX));
  /* 107ef3f1 call 0x107e8d80 */
  push32(0x107ef3f6u); f_107e8d80();
  /* 107ef3f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef3f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef3fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107ef3ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ef401 jne 0x107ef40a */
  if (!C.zf) goto L_107ef40a;
  /* 107ef403 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef405 jmp 0x107ef539 */
  goto L_107ef539;
L_107ef40a:;
  /* 107ef40a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef40d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107ef410 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef413 jne 0x107ef440 */
  if (!C.zf) goto L_107ef440;
  /* 107ef415 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef418 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 107ef41c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef41e je 0x107ef440 */
  if (C.zf) goto L_107ef440;
  /* 107ef420 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef423 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef426 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef42a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef430 push edx */
  push32((uint32_t)(EDX));
  /* 107ef431 call 0x107e7fc0 */
  push32(0x107ef436u); f_107e7fc0();
  /* 107ef436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef43b jmp 0x107ef539 */
  goto L_107ef539;
L_107ef440:;
  /* 107ef440 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107ef447 jmp 0x107ef452 */
  goto L_107ef452;
L_107ef449:;
  /* 107ef449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef44c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef44f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107ef452:;
  /* 107ef452 push 0x1080c320 */
  push32((uint32_t)(0x1080c320u));
  /* 107ef457 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef45a push ecx */
  push32((uint32_t)(ECX));
  /* 107ef45b call 0x107f0d30 */
  push32(0x107ef460u); f_107f0d30();
  /* 107ef460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef463 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107ef466 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef46a jne 0x107ef474 */
  if (!C.zf) goto L_107ef474;
  /* 107ef46c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ef46f jmp 0x107ef539 */
  goto L_107ef539;
L_107ef474:;
  /* 107ef474 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef477 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef47a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107ef47c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 107ef47f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef483 jne 0x107ef4aa */
  if (!C.zf) goto L_107ef4aa;
  /* 107ef485 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef489 jge 0x107ef4aa */
  if ((C.sf==C.of)) goto L_107ef4aa;
  /* 107ef48b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ef48f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef492 je 0x107ef4aa */
  if (C.zf) goto L_107ef4aa;
  /* 107ef494 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef497 push edx */
  push32((uint32_t)(EDX));
  /* 107ef498 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef49b push eax */
  push32((uint32_t)(EAX));
  /* 107ef49c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef49f push ecx */
  push32((uint32_t)(ECX));
  /* 107ef4a0 call 0x107e8830 */
  push32(0x107ef4a5u); f_107e8830();
  /* 107ef4a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef4a8 jmp 0x107ef510 */
  goto L_107ef510;
L_107ef4aa:;
  /* 107ef4aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef4ae jne 0x107ef4d8 */
  if (!C.zf) goto L_107ef4d8;
  /* 107ef4b0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef4b4 jge 0x107ef4d8 */
  if ((C.sf==C.of)) goto L_107ef4d8;
  /* 107ef4b6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ef4ba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef4bd je 0x107ef4d8 */
  if (C.zf) goto L_107ef4d8;
  /* 107ef4bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef4c2 push eax */
  push32((uint32_t)(EAX));
  /* 107ef4c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef4c6 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef4c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef4ca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef4cd push edx */
  push32((uint32_t)(EDX));
  /* 107ef4ce call 0x107e8830 */
  push32(0x107ef4d3u); f_107e8830();
  /* 107ef4d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef4d6 jmp 0x107ef510 */
  goto L_107ef510;
L_107ef4d8:;
  /* 107ef4d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef4dc jne 0x107ef50b */
  if (!C.zf) goto L_107ef50b;
  /* 107ef4de movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ef4e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef4e4 je 0x107ef4ef */
  if (C.zf) goto L_107ef4ef;
  /* 107ef4e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ef4ea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef4ed jne 0x107ef50b */
  if (!C.zf) goto L_107ef50b;
L_107ef4ef:;
  /* 107ef4ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef4f2 push edx */
  push32((uint32_t)(EDX));
  /* 107ef4f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef4f6 push eax */
  push32((uint32_t)(EAX));
  /* 107ef4f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef4fa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef500 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef501 call 0x107e8830 */
  push32(0x107ef506u); f_107e8830();
  /* 107ef506 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef509 jmp 0x107ef510 */
  goto L_107ef510;
L_107ef50b:;
  /* 107ef50b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ef50e jmp 0x107ef539 */
  goto L_107ef539;
L_107ef510:;
  /* 107ef510 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ef514 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef517 jne 0x107ef51b */
  if (!C.zf) goto L_107ef51b;
  /* 107ef519 jmp 0x107ef537 */
  goto L_107ef537;
L_107ef51b:;
  /* 107ef51b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107ef51f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef521 jne 0x107ef525 */
  if (!C.zf) goto L_107ef525;
  /* 107ef523 jmp 0x107ef537 */
  goto L_107ef537;
L_107ef525:;
  /* 107ef525 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef528 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef52b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 107ef52f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 107ef532 jmp 0x107ef449 */
  goto L_107ef449;
L_107ef537:;
  /* 107ef537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ef539:;
  /* 107ef539 mov esp, ebp */
  ESP = (EBP);
  /* 107ef53b pop ebp */
  EBP = (pop32());
  /* 107ef53c ret  */
  ESPCHK(0x107ef3e0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x107ef540 (101 bytes, 36 insns) */
void f_107ef540(void) {
  FTRACE(0x107ef540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef540 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef541 mov ebp, esp */
  EBP = (ESP);
  /* 107ef543 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef546 push eax */
  push32((uint32_t)(EAX));
  /* 107ef547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef54a push ecx */
  push32((uint32_t)(ECX));
  /* 107ef54b call 0x107e7fc0 */
  push32(0x107ef550u); f_107e7fc0();
  /* 107ef550 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef553 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef556 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 107ef55a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef55c je 0x107ef578 */
  if (C.zf) goto L_107ef578;
  /* 107ef55e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef561 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef564 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef565 push 0x1080c328 */
  push32((uint32_t)(0x1080c328u));
  /* 107ef56a push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef56c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef56f push edx */
  push32((uint32_t)(EDX));
  /* 107ef570 call 0x107ef390 */
  push32(0x107ef575u); f_107ef390();
  /* 107ef575 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ef578:;
  /* 107ef578 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef57b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 107ef582 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ef584 je 0x107ef5a3 */
  if (C.zf) goto L_107ef5a3;
  /* 107ef586 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107ef589 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef58f push edx */
  push32((uint32_t)(EDX));
  /* 107ef590 push 0x1080c324 */
  push32((uint32_t)(0x1080c324u));
  /* 107ef595 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef59a push eax */
  push32((uint32_t)(EAX));
  /* 107ef59b call 0x107ef390 */
  push32(0x107ef5a0u); f_107ef390();
  /* 107ef5a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ef5a3:;
  /* 107ef5a3 pop ebp */
  EBP = (pop32());
  /* 107ef5a4 ret  */
  ESPCHK(0x107ef540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5b0 @ 0x107ef5b0 (130 bytes, 50 insns) */
void f_107ef5b0(void) {
  FTRACE(0x107ef5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef5b1 mov ebp, esp */
  EBP = (ESP);
  /* 107ef5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef5b4 push ebx */
  push32((uint32_t)(EBX));
  /* 107ef5b5 push esi */
  push32((uint32_t)(ESI));
  /* 107ef5b6 push edi */
  push32((uint32_t)(EDI));
  /* 107ef5b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ef5be:;
  /* 107ef5be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef5c2 jne 0x107ef5e2 */
  if (!C.zf) goto L_107ef5e2;
  /* 107ef5c4 push 0x1080c338 */
  push32((uint32_t)(0x1080c338u));
  /* 107ef5c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ef5cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 107ef5cd push 0x1080c32c */
  push32((uint32_t)(0x1080c32cu));
  /* 107ef5d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef5d4 call 0x107e40d0 */
  push32(0x107ef5d9u); f_107e40d0();
  /* 107ef5d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef5dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef5df jne 0x107ef5e2 */
  if (!C.zf) goto L_107ef5e2;
  /* 107ef5e1 int3  */
  x86_unimpl("int3 @ 0x107ef5e1");
L_107ef5e2:;
  /* 107ef5e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef5e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef5e6 jne 0x107ef5be */
  if (!C.zf) goto L_107ef5be;
  /* 107ef5e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef5eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107ef5ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 107ef5f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107ef5f3 je 0x107ef601 */
  if (C.zf) goto L_107ef601;
  /* 107ef5f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef5f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 107ef5ff jmp 0x107ef628 */
  goto L_107ef628;
L_107ef601:;
  /* 107ef601 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef604 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef605 call 0x107ede20 */
  push32(0x107ef60au); f_107ede20();
  /* 107ef60a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef610 push edx */
  push32((uint32_t)(EDX));
  /* 107ef611 call 0x107ef640 */
  push32(0x107ef616u); f_107ef640();
  /* 107ef616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ef61c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef61f push eax */
  push32((uint32_t)(EAX));
  /* 107ef620 call 0x107ede90 */
  push32(0x107ef625u); f_107ede90();
  /* 107ef625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107ef628:;
  /* 107ef628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef62b pop edi */
  EDI = (pop32());
  /* 107ef62c pop esi */
  ESI = (pop32());
  /* 107ef62d pop ebx */
  EBX = (pop32());
  /* 107ef62e mov esp, ebp */
  ESP = (EBP);
  /* 107ef630 pop ebp */
  EBP = (pop32());
  /* 107ef631 ret  */
  ESPCHK(0x107ef5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f640 @ 0x107ef640 (190 bytes, 67 insns) */
void f_107ef640(void) {
  FTRACE(0x107ef640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef640 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef641 mov ebp, esp */
  EBP = (ESP);
  /* 107ef643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ef646 push ebx */
  push32((uint32_t)(EBX));
  /* 107ef647 push esi */
  push32((uint32_t)(ESI));
  /* 107ef648 push edi */
  push32((uint32_t)(EDI));
  /* 107ef649 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ef650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef653 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107ef656:;
  /* 107ef656 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef65a jne 0x107ef67a */
  if (!C.zf) goto L_107ef67a;
  /* 107ef65c push 0x1080c1dc */
  push32((uint32_t)(0x1080c1dcu));
  /* 107ef661 push 0 */
  push32((uint32_t)(0x0u));
  /* 107ef663 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 107ef665 push 0x1080c32c */
  push32((uint32_t)(0x1080c32cu));
  /* 107ef66a push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef66c call 0x107e40d0 */
  push32(0x107ef671u); f_107e40d0();
  /* 107ef671 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef674 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef677 jne 0x107ef67a */
  if (!C.zf) goto L_107ef67a;
  /* 107ef679 int3  */
  x86_unimpl("int3 @ 0x107ef679");
L_107ef67a:;
  /* 107ef67a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef67c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ef67e jne 0x107ef656 */
  if (!C.zf) goto L_107ef656;
  /* 107ef680 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef683 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 107ef686 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 107ef68b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef68d je 0x107ef6ea */
  if (C.zf) goto L_107ef6ea;
  /* 107ef68f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef692 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef693 call 0x107ee940 */
  push32(0x107ef698u); f_107ee940();
  /* 107ef698 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef69b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ef69e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef6a1 push edx */
  push32((uint32_t)(EDX));
  /* 107ef6a2 call 0x107f1cc0 */
  push32(0x107ef6a7u); f_107f1cc0();
  /* 107ef6a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef6aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef6ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107ef6b0 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef6b1 call 0x107f1b90 */
  push32(0x107ef6b6u); f_107f1b90();
  /* 107ef6b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef6b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef6bb jge 0x107ef6c6 */
  if ((C.sf==C.of)) goto L_107ef6c6;
  /* 107ef6bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 107ef6c4 jmp 0x107ef6ea */
  goto L_107ef6ea;
L_107ef6c6:;
  /* 107ef6c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef6c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef6cd je 0x107ef6ea */
  if (C.zf) goto L_107ef6ea;
  /* 107ef6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef6d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef6d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107ef6d7 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef6d8 call 0x107e5aa0 */
  push32(0x107ef6ddu); f_107e5aa0();
  /* 107ef6dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef6e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef6e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_107ef6ea:;
  /* 107ef6ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107ef6ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 107ef6f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef6f7 pop edi */
  EDI = (pop32());
  /* 107ef6f8 pop esi */
  ESI = (pop32());
  /* 107ef6f9 pop ebx */
  EBX = (pop32());
  /* 107ef6fa mov esp, ebp */
  ESP = (EBP);
  /* 107ef6fc pop ebp */
  EBP = (pop32());
  /* 107ef6fd ret  */
  ESPCHK(0x107ef640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f700 @ 0x107ef700 (210 bytes, 63 insns) */
void f_107ef700(void) {
  FTRACE(0x107ef700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef700 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef701 mov ebp, esp */
  EBP = (ESP);
  /* 107ef703 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef707 cmp eax, dword ptr [0x1081211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef70d jae 0x107ef731 */
  if (!C.cf) goto L_107ef731;
  /* 107ef70f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef712 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107ef715 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef718 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107ef71b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef71e mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107ef725 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107ef72a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107ef72d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107ef72f jne 0x107ef744 */
  if (!C.zf) goto L_107ef744;
L_107ef731:;
  /* 107ef731 call 0x107ecee0 */
  push32(0x107ef736u); f_107ecee0();
  /* 107ef736 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ef73c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ef73f jmp 0x107ef7ce */
  goto L_107ef7ce;
L_107ef744:;
  /* 107ef744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef747 push edx */
  push32((uint32_t)(EDX));
  /* 107ef748 call 0x107ee700 */
  push32(0x107ef74du); f_107ee700();
  /* 107ef74d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef750 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef753 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107ef756 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef759 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107ef75c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107ef75f mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107ef766 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 107ef76b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 107ef76e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef770 je 0x107ef7ad */
  if (C.zf) goto L_107ef7ad;
  /* 107ef772 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef775 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef776 call 0x107ee580 */
  push32(0x107ef77bu); f_107ee580();
  /* 107ef77b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef77e push eax */
  push32((uint32_t)(EAX));
  /* 107ef77f call dword ptr [0x108132d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132d0))), 0x107ef785u);
  /* 107ef785 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef787 jne 0x107ef794 */
  if (!C.zf) goto L_107ef794;
  /* 107ef789 call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107ef78fu);
  /* 107ef78f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ef792 jmp 0x107ef79b */
  goto L_107ef79b;
L_107ef794:;
  /* 107ef794 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107ef79b:;
  /* 107ef79b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef79f jne 0x107ef7a3 */
  if (!C.zf) goto L_107ef7a3;
  /* 107ef7a1 jmp 0x107ef7bf */
  goto L_107ef7bf;
L_107ef7a3:;
  /* 107ef7a3 call 0x107ecef0 */
  push32(0x107ef7a8u); f_107ecef0();
  /* 107ef7a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef7ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107ef7ad:;
  /* 107ef7ad call 0x107ecee0 */
  push32(0x107ef7b2u); f_107ecee0();
  /* 107ef7b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107ef7b8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_107ef7bf:;
  /* 107ef7bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef7c2 push eax */
  push32((uint32_t)(EAX));
  /* 107ef7c3 call 0x107ee790 */
  push32(0x107ef7c8u); f_107ee790();
  /* 107ef7c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef7cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107ef7ce:;
  /* 107ef7ce mov esp, ebp */
  ESP = (EBP);
  /* 107ef7d0 pop ebp */
  EBP = (pop32());
  /* 107ef7d1 ret  */
  ESPCHK(0x107ef700u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x107ef7e0 (219 bytes, 64 insns) */
void f_107ef7e0(void) {
  FTRACE(0x107ef7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef7e1 mov ebp, esp */
  EBP = (ESP);
  /* 107ef7e3 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef7e4 cmp dword ptr [0x10810814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef7eb je 0x107ef881 */
  if (C.zf) goto L_107ef881;
  /* 107ef7f1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 107ef7f3 push 0x1080c348 */
  push32((uint32_t)(0x1080c348u));
  /* 107ef7f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef7fa push 0xac */
  push32((uint32_t)(0xacu));
  /* 107ef7ff push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef801 call 0x107e5420 */
  push32(0x107ef806u); f_107e5420();
  /* 107ef806 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef809 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ef80c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef810 jne 0x107ef81c */
  if (!C.zf) goto L_107ef81c;
  /* 107ef812 mov eax, 1 */
  EAX = (0x1u);
  /* 107ef817 jmp 0x107ef8b7 */
  goto L_107ef8b7;
L_107ef81c:;
  /* 107ef81c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef81f push eax */
  push32((uint32_t)(EAX));
  /* 107ef820 call 0x107ef8c0 */
  push32(0x107ef825u); f_107ef8c0();
  /* 107ef825 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107ef82a je 0x107ef84d */
  if (C.zf) goto L_107ef84d;
  /* 107ef82c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef82f push ecx */
  push32((uint32_t)(ECX));
  /* 107ef830 call 0x107efe50 */
  push32(0x107ef835u); f_107efe50();
  /* 107ef835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef838 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef83a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef83d push edx */
  push32((uint32_t)(EDX));
  /* 107ef83e call 0x107e5aa0 */
  push32(0x107ef843u); f_107e5aa0();
  /* 107ef843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef846 mov eax, 1 */
  EAX = (0x1u);
  /* 107ef84b jmp 0x107ef8b7 */
  goto L_107ef8b7;
L_107ef84d:;
  /* 107ef84d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef850 mov dword ptr [0x1080fc98], eax */
  w32((uint32_t)(0x1080fc98), (EAX));
  /* 107ef855 mov ecx, dword ptr [0x10810834] */
  ECX = (r32((uint32_t)(0x10810834)));
  /* 107ef85b push ecx */
  push32((uint32_t)(ECX));
  /* 107ef85c call 0x107efe50 */
  push32(0x107ef861u); f_107efe50();
  /* 107ef861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef864 push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef866 mov edx, dword ptr [0x10810834] */
  EDX = (r32((uint32_t)(0x10810834)));
  /* 107ef86c push edx */
  push32((uint32_t)(EDX));
  /* 107ef86d call 0x107e5aa0 */
  push32(0x107ef872u); f_107e5aa0();
  /* 107ef872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef878 mov dword ptr [0x10810834], eax */
  w32((uint32_t)(0x10810834), (EAX));
  /* 107ef87d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef87f jmp 0x107ef8b7 */
  goto L_107ef8b7;
L_107ef881:;
  /* 107ef881 mov dword ptr [0x1080fc98], 0x1080fca0 */
  w32((uint32_t)(0x1080fc98), (0x1080fca0u));
  /* 107ef88b mov ecx, dword ptr [0x10810834] */
  ECX = (r32((uint32_t)(0x10810834)));
  /* 107ef891 push ecx */
  push32((uint32_t)(ECX));
  /* 107ef892 call 0x107efe50 */
  push32(0x107ef897u); f_107efe50();
  /* 107ef897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef89a push 2 */
  push32((uint32_t)(0x2u));
  /* 107ef89c mov edx, dword ptr [0x10810834] */
  EDX = (r32((uint32_t)(0x10810834)));
  /* 107ef8a2 push edx */
  push32((uint32_t)(EDX));
  /* 107ef8a3 call 0x107e5aa0 */
  push32(0x107ef8a8u); f_107e5aa0();
  /* 107ef8a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef8ab mov dword ptr [0x10810834], 0 */
  w32((uint32_t)(0x10810834), (0x0u));
  /* 107ef8b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107ef8b7:;
  /* 107ef8b7 mov esp, ebp */
  ESP = (EBP);
  /* 107ef8b9 pop ebp */
  EBP = (pop32());
  /* 107ef8ba ret  */
  ESPCHK(0x107ef7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8c0 @ 0x107ef8c0 (1423 bytes, 533 insns) */
void f_107ef8c0(void) {
  FTRACE(0x107ef8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107ef8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107ef8c1 mov ebp, esp */
  EBP = (ESP);
  /* 107ef8c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107ef8c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107ef8cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107ef8cf mov ax, word ptr [0x1081086e] */
  AX = (r16((uint32_t)(0x1081086e)));
  /* 107ef8d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107ef8d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef8da mov cx, word ptr [0x10810870] */
  CX = (r16((uint32_t)(0x10810870)));
  /* 107ef8e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107ef8e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107ef8e8 jne 0x107ef8f2 */
  if (!C.zf) goto L_107ef8f2;
  /* 107ef8ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107ef8ed jmp 0x107efe4b */
  goto L_107efe4b;
L_107ef8f2:;
  /* 107ef8f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef8f5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef8f8 push edx */
  push32((uint32_t)(EDX));
  /* 107ef8f9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 107ef8fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef8fe push eax */
  push32((uint32_t)(EAX));
  /* 107ef8ff push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef901 call 0x107f31d0 */
  push32(0x107ef906u); f_107f31d0();
  /* 107ef906 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef909 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef90c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef90e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ef911 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef914 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef917 push edx */
  push32((uint32_t)(EDX));
  /* 107ef918 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 107ef91a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef91d push eax */
  push32((uint32_t)(EAX));
  /* 107ef91e push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef920 call 0x107f31d0 */
  push32(0x107ef925u); f_107f31d0();
  /* 107ef925 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef928 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef92b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef92d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ef930 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef933 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef936 push edx */
  push32((uint32_t)(EDX));
  /* 107ef937 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 107ef939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef93c push eax */
  push32((uint32_t)(EAX));
  /* 107ef93d push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef93f call 0x107f31d0 */
  push32(0x107ef944u); f_107f31d0();
  /* 107ef944 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef947 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef94a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef94c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ef94f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef952 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef955 push edx */
  push32((uint32_t)(EDX));
  /* 107ef956 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 107ef958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef95b push eax */
  push32((uint32_t)(EAX));
  /* 107ef95c push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef95e call 0x107f31d0 */
  push32(0x107ef963u); f_107f31d0();
  /* 107ef963 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef966 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef969 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef96b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ef96e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef971 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef974 push edx */
  push32((uint32_t)(EDX));
  /* 107ef975 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 107ef977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef97a push eax */
  push32((uint32_t)(EAX));
  /* 107ef97b push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef97d call 0x107f31d0 */
  push32(0x107ef982u); f_107f31d0();
  /* 107ef982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef985 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef988 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef98a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ef98d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef990 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef993 push edx */
  push32((uint32_t)(EDX));
  /* 107ef994 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 107ef996 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef999 push eax */
  push32((uint32_t)(EAX));
  /* 107ef99a push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef99c call 0x107f31d0 */
  push32(0x107ef9a1u); f_107f31d0();
  /* 107ef9a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef9a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef9a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef9a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ef9ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef9af push edx */
  push32((uint32_t)(EDX));
  /* 107ef9b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 107ef9b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef9b5 push eax */
  push32((uint32_t)(EAX));
  /* 107ef9b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef9b8 call 0x107f31d0 */
  push32(0x107ef9bdu); f_107f31d0();
  /* 107ef9bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef9c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef9c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef9c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ef9c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef9cb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef9ce push edx */
  push32((uint32_t)(EDX));
  /* 107ef9cf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 107ef9d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef9d4 push eax */
  push32((uint32_t)(EAX));
  /* 107ef9d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef9d7 call 0x107f31d0 */
  push32(0x107ef9dcu); f_107f31d0();
  /* 107ef9dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef9df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107ef9e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107ef9e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107ef9e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107ef9ea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef9ed push edx */
  push32((uint32_t)(EDX));
  /* 107ef9ee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 107ef9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107ef9f3 push eax */
  push32((uint32_t)(EAX));
  /* 107ef9f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107ef9f6 call 0x107f31d0 */
  push32(0x107ef9fbu); f_107f31d0();
  /* 107ef9fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107ef9fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efa01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efa03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efa06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efa09 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa0c push edx */
  push32((uint32_t)(EDX));
  /* 107efa0d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 107efa0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efa12 push eax */
  push32((uint32_t)(EAX));
  /* 107efa13 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efa15 call 0x107f31d0 */
  push32(0x107efa1au); f_107f31d0();
  /* 107efa1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efa20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efa22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efa25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efa28 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa2b push edx */
  push32((uint32_t)(EDX));
  /* 107efa2c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 107efa2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efa31 push eax */
  push32((uint32_t)(EAX));
  /* 107efa32 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efa34 call 0x107f31d0 */
  push32(0x107efa39u); f_107f31d0();
  /* 107efa39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efa3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efa41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efa44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efa47 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa4a push edx */
  push32((uint32_t)(EDX));
  /* 107efa4b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 107efa4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efa50 push eax */
  push32((uint32_t)(EAX));
  /* 107efa51 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efa53 call 0x107f31d0 */
  push32(0x107efa58u); f_107f31d0();
  /* 107efa58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efa5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efa60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efa63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efa66 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa69 push edx */
  push32((uint32_t)(EDX));
  /* 107efa6a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 107efa6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efa6f push eax */
  push32((uint32_t)(EAX));
  /* 107efa70 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efa72 call 0x107f31d0 */
  push32(0x107efa77u); f_107f31d0();
  /* 107efa77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efa7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efa7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efa82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efa85 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa88 push edx */
  push32((uint32_t)(EDX));
  /* 107efa89 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 107efa8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efa8e push eax */
  push32((uint32_t)(EAX));
  /* 107efa8f push 1 */
  push32((uint32_t)(0x1u));
  /* 107efa91 call 0x107f31d0 */
  push32(0x107efa96u); f_107f31d0();
  /* 107efa96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efa99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efa9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efa9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efaa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efaa4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efaa7 push edx */
  push32((uint32_t)(EDX));
  /* 107efaa8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 107efaaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efaad push eax */
  push32((uint32_t)(EAX));
  /* 107efaae push 1 */
  push32((uint32_t)(0x1u));
  /* 107efab0 call 0x107f31d0 */
  push32(0x107efab5u); f_107f31d0();
  /* 107efab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efab8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efabb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efabd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efac3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efac6 push edx */
  push32((uint32_t)(EDX));
  /* 107efac7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 107efac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efacc push eax */
  push32((uint32_t)(EAX));
  /* 107efacd push 1 */
  push32((uint32_t)(0x1u));
  /* 107efacf call 0x107f31d0 */
  push32(0x107efad4u); f_107f31d0();
  /* 107efad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efad7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efada or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efadc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efadf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efae2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efae5 push edx */
  push32((uint32_t)(EDX));
  /* 107efae6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 107efae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efaeb push eax */
  push32((uint32_t)(EAX));
  /* 107efaec push 1 */
  push32((uint32_t)(0x1u));
  /* 107efaee call 0x107f31d0 */
  push32(0x107efaf3u); f_107f31d0();
  /* 107efaf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efaf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efaf9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efafb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efafe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efb01 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb04 push edx */
  push32((uint32_t)(EDX));
  /* 107efb05 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 107efb07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efb0a push eax */
  push32((uint32_t)(EAX));
  /* 107efb0b push 1 */
  push32((uint32_t)(0x1u));
  /* 107efb0d call 0x107f31d0 */
  push32(0x107efb12u); f_107f31d0();
  /* 107efb12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efb18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efb1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efb1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efb20 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb23 push edx */
  push32((uint32_t)(EDX));
  /* 107efb24 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 107efb26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efb29 push eax */
  push32((uint32_t)(EAX));
  /* 107efb2a push 1 */
  push32((uint32_t)(0x1u));
  /* 107efb2c call 0x107f31d0 */
  push32(0x107efb31u); f_107f31d0();
  /* 107efb31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efb37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efb39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efb3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efb3f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb42 push edx */
  push32((uint32_t)(EDX));
  /* 107efb43 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 107efb45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efb48 push eax */
  push32((uint32_t)(EAX));
  /* 107efb49 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efb4b call 0x107f31d0 */
  push32(0x107efb50u); f_107f31d0();
  /* 107efb50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efb56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efb58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efb5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efb5e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb61 push edx */
  push32((uint32_t)(EDX));
  /* 107efb62 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 107efb64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efb67 push eax */
  push32((uint32_t)(EAX));
  /* 107efb68 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efb6a call 0x107f31d0 */
  push32(0x107efb6fu); f_107f31d0();
  /* 107efb6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb72 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efb75 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efb77 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efb7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efb7d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb80 push edx */
  push32((uint32_t)(EDX));
  /* 107efb81 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 107efb83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efb86 push eax */
  push32((uint32_t)(EAX));
  /* 107efb87 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efb89 call 0x107f31d0 */
  push32(0x107efb8eu); f_107f31d0();
  /* 107efb8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efb94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efb96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efb99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efb9c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efb9f push edx */
  push32((uint32_t)(EDX));
  /* 107efba0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 107efba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efba5 push eax */
  push32((uint32_t)(EAX));
  /* 107efba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efba8 call 0x107f31d0 */
  push32(0x107efbadu); f_107f31d0();
  /* 107efbad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efbb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efbb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efbb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efbb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efbbb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efbbe push edx */
  push32((uint32_t)(EDX));
  /* 107efbbf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 107efbc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efbc4 push eax */
  push32((uint32_t)(EAX));
  /* 107efbc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efbc7 call 0x107f31d0 */
  push32(0x107efbccu); f_107f31d0();
  /* 107efbcc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efbcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efbd2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efbd4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efbd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efbda add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efbdd push edx */
  push32((uint32_t)(EDX));
  /* 107efbde push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 107efbe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efbe3 push eax */
  push32((uint32_t)(EAX));
  /* 107efbe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efbe6 call 0x107f31d0 */
  push32(0x107efbebu); f_107f31d0();
  /* 107efbeb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efbee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efbf1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efbf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efbf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efbf9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efbfc push edx */
  push32((uint32_t)(EDX));
  /* 107efbfd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 107efbff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efc02 push eax */
  push32((uint32_t)(EAX));
  /* 107efc03 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efc05 call 0x107f31d0 */
  push32(0x107efc0au); f_107f31d0();
  /* 107efc0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efc10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efc12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efc15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efc18 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc1b push edx */
  push32((uint32_t)(EDX));
  /* 107efc1c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 107efc1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efc21 push eax */
  push32((uint32_t)(EAX));
  /* 107efc22 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efc24 call 0x107f31d0 */
  push32(0x107efc29u); f_107f31d0();
  /* 107efc29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efc2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efc31 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efc34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efc37 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc3a push edx */
  push32((uint32_t)(EDX));
  /* 107efc3b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 107efc3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efc40 push eax */
  push32((uint32_t)(EAX));
  /* 107efc41 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efc43 call 0x107f31d0 */
  push32(0x107efc48u); f_107f31d0();
  /* 107efc48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efc4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efc50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efc53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efc56 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc59 push edx */
  push32((uint32_t)(EDX));
  /* 107efc5a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 107efc5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efc5f push eax */
  push32((uint32_t)(EAX));
  /* 107efc60 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efc62 call 0x107f31d0 */
  push32(0x107efc67u); f_107f31d0();
  /* 107efc67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efc6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efc6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efc72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efc75 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc78 push edx */
  push32((uint32_t)(EDX));
  /* 107efc79 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 107efc7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efc7e push eax */
  push32((uint32_t)(EAX));
  /* 107efc7f push 1 */
  push32((uint32_t)(0x1u));
  /* 107efc81 call 0x107f31d0 */
  push32(0x107efc86u); f_107f31d0();
  /* 107efc86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efc8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efc8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efc91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efc94 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efc97 push edx */
  push32((uint32_t)(EDX));
  /* 107efc98 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 107efc9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efc9d push eax */
  push32((uint32_t)(EAX));
  /* 107efc9e push 1 */
  push32((uint32_t)(0x1u));
  /* 107efca0 call 0x107f31d0 */
  push32(0x107efca5u); f_107f31d0();
  /* 107efca5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efca8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efcab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efcad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efcb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efcb3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efcb6 push edx */
  push32((uint32_t)(EDX));
  /* 107efcb7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 107efcb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efcbc push eax */
  push32((uint32_t)(EAX));
  /* 107efcbd push 1 */
  push32((uint32_t)(0x1u));
  /* 107efcbf call 0x107f31d0 */
  push32(0x107efcc4u); f_107f31d0();
  /* 107efcc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efcc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efcca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efccc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efccf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efcd2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efcd8 push edx */
  push32((uint32_t)(EDX));
  /* 107efcd9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 107efcdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efcde push eax */
  push32((uint32_t)(EAX));
  /* 107efcdf push 1 */
  push32((uint32_t)(0x1u));
  /* 107efce1 call 0x107f31d0 */
  push32(0x107efce6u); f_107f31d0();
  /* 107efce6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efce9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efcec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efcee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efcf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efcf4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efcfa push edx */
  push32((uint32_t)(EDX));
  /* 107efcfb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 107efcfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efd00 push eax */
  push32((uint32_t)(EAX));
  /* 107efd01 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efd03 call 0x107f31d0 */
  push32(0x107efd08u); f_107f31d0();
  /* 107efd08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efd0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efd0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efd10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efd13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efd16 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efd1c push edx */
  push32((uint32_t)(EDX));
  /* 107efd1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107efd1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efd22 push eax */
  push32((uint32_t)(EAX));
  /* 107efd23 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efd25 call 0x107f31d0 */
  push32(0x107efd2au); f_107f31d0();
  /* 107efd2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efd2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efd30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efd32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efd35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efd38 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efd3e push edx */
  push32((uint32_t)(EDX));
  /* 107efd3f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 107efd41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efd44 push eax */
  push32((uint32_t)(EAX));
  /* 107efd45 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efd47 call 0x107f31d0 */
  push32(0x107efd4cu); f_107f31d0();
  /* 107efd4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efd4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efd52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efd54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efd57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efd5a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efd60 push edx */
  push32((uint32_t)(EDX));
  /* 107efd61 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 107efd63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efd66 push eax */
  push32((uint32_t)(EAX));
  /* 107efd67 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efd69 call 0x107f31d0 */
  push32(0x107efd6eu); f_107f31d0();
  /* 107efd6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efd71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efd74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efd76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efd79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efd7c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efd82 push edx */
  push32((uint32_t)(EDX));
  /* 107efd83 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 107efd85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efd88 push eax */
  push32((uint32_t)(EAX));
  /* 107efd89 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efd8b call 0x107f31d0 */
  push32(0x107efd90u); f_107f31d0();
  /* 107efd90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efd93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efd96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efd98 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efd9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efd9e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efda4 push edx */
  push32((uint32_t)(EDX));
  /* 107efda5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 107efda7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efdaa push eax */
  push32((uint32_t)(EAX));
  /* 107efdab push 1 */
  push32((uint32_t)(0x1u));
  /* 107efdad call 0x107f31d0 */
  push32(0x107efdb2u); f_107f31d0();
  /* 107efdb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efdb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efdb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efdba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efdbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efdc0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efdc6 push edx */
  push32((uint32_t)(EDX));
  /* 107efdc7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 107efdc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107efdcc push eax */
  push32((uint32_t)(EAX));
  /* 107efdcd push 1 */
  push32((uint32_t)(0x1u));
  /* 107efdcf call 0x107f31d0 */
  push32(0x107efdd4u); f_107f31d0();
  /* 107efdd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efdd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efdda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efde2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efde8 push edx */
  push32((uint32_t)(EDX));
  /* 107efde9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 107efdeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107efdee push eax */
  push32((uint32_t)(EAX));
  /* 107efdef push 1 */
  push32((uint32_t)(0x1u));
  /* 107efdf1 call 0x107f31d0 */
  push32(0x107efdf6u); f_107f31d0();
  /* 107efdf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efdf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efdfc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efdfe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efe01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efe04 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efe0a push edx */
  push32((uint32_t)(EDX));
  /* 107efe0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 107efe0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107efe10 push eax */
  push32((uint32_t)(EAX));
  /* 107efe11 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efe13 call 0x107f31d0 */
  push32(0x107efe18u); f_107f31d0();
  /* 107efe18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efe1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efe1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efe20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efe23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efe26 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107efe2c push edx */
  push32((uint32_t)(EDX));
  /* 107efe2d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 107efe32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107efe35 push eax */
  push32((uint32_t)(EAX));
  /* 107efe36 push 1 */
  push32((uint32_t)(0x1u));
  /* 107efe38 call 0x107f31d0 */
  push32(0x107efe3du); f_107f31d0();
  /* 107efe3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efe40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107efe43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107efe45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 107efe48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_107efe4b:;
  /* 107efe4b mov esp, ebp */
  ESP = (EBP);
  /* 107efe4d pop ebp */
  EBP = (pop32());
  /* 107efe4e ret  */
  ESPCHK(0x107ef8c0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x107efe50 (779 bytes, 265 insns) */
void f_107efe50(void) {
  FTRACE(0x107efe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107efe50 push ebp */
  push32((uint32_t)(EBP));
  /* 107efe51 mov ebp, esp */
  EBP = (ESP);
  /* 107efe53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107efe57 jne 0x107efe5e */
  if (!C.zf) goto L_107efe5e;
  /* 107efe59 jmp 0x107f0159 */
  goto L_107f0159;
L_107efe5e:;
  /* 107efe5e push 2 */
  push32((uint32_t)(0x2u));
  /* 107efe60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efe63 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107efe66 push ecx */
  push32((uint32_t)(ECX));
  /* 107efe67 call 0x107e5aa0 */
  push32(0x107efe6cu); f_107e5aa0();
  /* 107efe6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efe6f push 2 */
  push32((uint32_t)(0x2u));
  /* 107efe71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efe74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107efe77 push eax */
  push32((uint32_t)(EAX));
  /* 107efe78 call 0x107e5aa0 */
  push32(0x107efe7du); f_107e5aa0();
  /* 107efe7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efe80 push 2 */
  push32((uint32_t)(0x2u));
  /* 107efe82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efe85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107efe88 push edx */
  push32((uint32_t)(EDX));
  /* 107efe89 call 0x107e5aa0 */
  push32(0x107efe8eu); f_107e5aa0();
  /* 107efe8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efe91 push 2 */
  push32((uint32_t)(0x2u));
  /* 107efe93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efe96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107efe99 push ecx */
  push32((uint32_t)(ECX));
  /* 107efe9a call 0x107e5aa0 */
  push32(0x107efe9fu); f_107e5aa0();
  /* 107efe9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efea2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107efea4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efea7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107efeaa push eax */
  push32((uint32_t)(EAX));
  /* 107efeab call 0x107e5aa0 */
  push32(0x107efeb0u); f_107e5aa0();
  /* 107efeb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efeb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107efeb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efeb8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107efebb push edx */
  push32((uint32_t)(EDX));
  /* 107efebc call 0x107e5aa0 */
  push32(0x107efec1u); f_107e5aa0();
  /* 107efec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efec4 push 2 */
  push32((uint32_t)(0x2u));
  /* 107efec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efec9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107efecb push ecx */
  push32((uint32_t)(ECX));
  /* 107efecc call 0x107e5aa0 */
  push32(0x107efed1u); f_107e5aa0();
  /* 107efed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efed4 push 2 */
  push32((uint32_t)(0x2u));
  /* 107efed6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efed9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 107efedc push eax */
  push32((uint32_t)(EAX));
  /* 107efedd call 0x107e5aa0 */
  push32(0x107efee2u); f_107e5aa0();
  /* 107efee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efee5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107efee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efeea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 107efeed push edx */
  push32((uint32_t)(EDX));
  /* 107efeee call 0x107e5aa0 */
  push32(0x107efef3u); f_107e5aa0();
  /* 107efef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efef6 push 2 */
  push32((uint32_t)(0x2u));
  /* 107efef8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efefb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 107efefe push ecx */
  push32((uint32_t)(ECX));
  /* 107efeff call 0x107e5aa0 */
  push32(0x107eff04u); f_107e5aa0();
  /* 107eff04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eff07 push 2 */
  push32((uint32_t)(0x2u));
  /* 107eff09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eff0c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 107eff0f push eax */
  push32((uint32_t)(EAX));
  /* 107eff10 call 0x107e5aa0 */
  push32(0x107eff15u); f_107e5aa0();
  /* 107eff15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eff18 push 2 */
  push32((uint32_t)(0x2u));
  /* 107eff1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eff1d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 107eff20 push edx */
  push32((uint32_t)(EDX));
  /* 107eff21 call 0x107e5aa0 */
  push32(0x107eff26u); f_107e5aa0();
  /* 107eff26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eff29 push 2 */
  push32((uint32_t)(0x2u));
  /* 107eff2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eff2e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 107eff31 push ecx */
  push32((uint32_t)(ECX));
  /* 107eff32 call 0x107e5aa0 */
  push32(0x107eff37u); f_107e5aa0();
  /* 107eff37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eff3a push 2 */
  push32((uint32_t)(0x2u));
  /* 107eff3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eff3f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107eff42 push eax */
  push32((uint32_t)(EAX));
  /* 107eff43 call 0x107e5aa0 */
  push32(0x107eff48u); f_107e5aa0();
  /* 107eff48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eff4b push 2 */
  push32((uint32_t)(0x2u));
  /* 107eff4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eff50 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 107eff53 push edx */
  push32((uint32_t)(EDX));
  /* 107eff54 call 0x107e5aa0 */
  push32(0x107eff59u); f_107e5aa0();
  /* 107eff59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eff5c push 2 */
  push32((uint32_t)(0x2u));
  /* 107eff5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eff61 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 107eff64 push ecx */
  push32((uint32_t)(ECX));
  /* 107eff65 call 0x107e5aa0 */
  push32(0x107eff6au); f_107e5aa0();
  /* 107eff6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eff6d push 2 */
  push32((uint32_t)(0x2u));
  /* 107eff6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eff72 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 107eff75 push eax */
  push32((uint32_t)(EAX));
  /* 107eff76 call 0x107e5aa0 */
  push32(0x107eff7bu); f_107e5aa0();
  /* 107eff7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eff7e push 2 */
  push32((uint32_t)(0x2u));
  /* 107eff80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eff83 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 107eff86 push edx */
  push32((uint32_t)(EDX));
  /* 107eff87 call 0x107e5aa0 */
  push32(0x107eff8cu); f_107e5aa0();
  /* 107eff8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107eff8f push 2 */
  push32((uint32_t)(0x2u));
  /* 107eff91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107eff94 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 107eff97 push ecx */
  push32((uint32_t)(ECX));
  /* 107eff98 call 0x107e5aa0 */
  push32(0x107eff9du); f_107e5aa0();
  /* 107eff9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107effa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 107effa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107effa5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 107effa8 push eax */
  push32((uint32_t)(EAX));
  /* 107effa9 call 0x107e5aa0 */
  push32(0x107effaeu); f_107e5aa0();
  /* 107effae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107effb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 107effb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107effb6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 107effb9 push edx */
  push32((uint32_t)(EDX));
  /* 107effba call 0x107e5aa0 */
  push32(0x107effbfu); f_107e5aa0();
  /* 107effbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107effc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107effc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107effc7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 107effca push ecx */
  push32((uint32_t)(ECX));
  /* 107effcb call 0x107e5aa0 */
  push32(0x107effd0u); f_107e5aa0();
  /* 107effd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107effd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107effd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107effd8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 107effdb push eax */
  push32((uint32_t)(EAX));
  /* 107effdc call 0x107e5aa0 */
  push32(0x107effe1u); f_107e5aa0();
  /* 107effe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107effe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 107effe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107effe9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 107effec push edx */
  push32((uint32_t)(EDX));
  /* 107effed call 0x107e5aa0 */
  push32(0x107efff2u); f_107e5aa0();
  /* 107efff2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107efff5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107efff7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107efffa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 107efffd push ecx */
  push32((uint32_t)(ECX));
  /* 107efffe call 0x107e5aa0 */
  push32(0x107f0003u); f_107e5aa0();
  /* 107f0003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0006 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0008 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f000b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 107f000e push eax */
  push32((uint32_t)(EAX));
  /* 107f000f call 0x107e5aa0 */
  push32(0x107f0014u); f_107e5aa0();
  /* 107f0014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0017 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0019 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f001c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 107f001f push edx */
  push32((uint32_t)(EDX));
  /* 107f0020 call 0x107e5aa0 */
  push32(0x107f0025u); f_107e5aa0();
  /* 107f0025 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0028 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f002a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f002d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 107f0030 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0031 call 0x107e5aa0 */
  push32(0x107f0036u); f_107e5aa0();
  /* 107f0036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0039 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f003b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f003e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 107f0041 push eax */
  push32((uint32_t)(EAX));
  /* 107f0042 call 0x107e5aa0 */
  push32(0x107f0047u); f_107e5aa0();
  /* 107f0047 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f004a push 2 */
  push32((uint32_t)(0x2u));
  /* 107f004c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f004f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 107f0052 push edx */
  push32((uint32_t)(EDX));
  /* 107f0053 call 0x107e5aa0 */
  push32(0x107f0058u); f_107e5aa0();
  /* 107f0058 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f005b push 2 */
  push32((uint32_t)(0x2u));
  /* 107f005d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0060 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 107f0063 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0064 call 0x107e5aa0 */
  push32(0x107f0069u); f_107e5aa0();
  /* 107f0069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f006c push 2 */
  push32((uint32_t)(0x2u));
  /* 107f006e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0071 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 107f0074 push eax */
  push32((uint32_t)(EAX));
  /* 107f0075 call 0x107e5aa0 */
  push32(0x107f007au); f_107e5aa0();
  /* 107f007a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f007d push 2 */
  push32((uint32_t)(0x2u));
  /* 107f007f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0082 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 107f0088 push edx */
  push32((uint32_t)(EDX));
  /* 107f0089 call 0x107e5aa0 */
  push32(0x107f008eu); f_107e5aa0();
  /* 107f008e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0091 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0093 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0096 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 107f009c push ecx */
  push32((uint32_t)(ECX));
  /* 107f009d call 0x107e5aa0 */
  push32(0x107f00a2u); f_107e5aa0();
  /* 107f00a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f00a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f00a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f00aa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 107f00b0 push eax */
  push32((uint32_t)(EAX));
  /* 107f00b1 call 0x107e5aa0 */
  push32(0x107f00b6u); f_107e5aa0();
  /* 107f00b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f00b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f00bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f00be mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 107f00c4 push edx */
  push32((uint32_t)(EDX));
  /* 107f00c5 call 0x107e5aa0 */
  push32(0x107f00cau); f_107e5aa0();
  /* 107f00ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f00cd push 2 */
  push32((uint32_t)(0x2u));
  /* 107f00cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f00d2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 107f00d8 push ecx */
  push32((uint32_t)(ECX));
  /* 107f00d9 call 0x107e5aa0 */
  push32(0x107f00deu); f_107e5aa0();
  /* 107f00de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f00e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f00e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f00e6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 107f00ec push eax */
  push32((uint32_t)(EAX));
  /* 107f00ed call 0x107e5aa0 */
  push32(0x107f00f2u); f_107e5aa0();
  /* 107f00f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f00f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f00f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f00fa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 107f0100 push edx */
  push32((uint32_t)(EDX));
  /* 107f0101 call 0x107e5aa0 */
  push32(0x107f0106u); f_107e5aa0();
  /* 107f0106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0109 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f010b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f010e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 107f0114 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0115 call 0x107e5aa0 */
  push32(0x107f011au); f_107e5aa0();
  /* 107f011a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f011d push 2 */
  push32((uint32_t)(0x2u));
  /* 107f011f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0122 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 107f0128 push eax */
  push32((uint32_t)(EAX));
  /* 107f0129 call 0x107e5aa0 */
  push32(0x107f012eu); f_107e5aa0();
  /* 107f012e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0131 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0133 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0136 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 107f013c push edx */
  push32((uint32_t)(EDX));
  /* 107f013d call 0x107e5aa0 */
  push32(0x107f0142u); f_107e5aa0();
  /* 107f0142 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0145 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0147 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f014a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 107f0150 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0151 call 0x107e5aa0 */
  push32(0x107f0156u); f_107e5aa0();
  /* 107f0156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f0159:;
  /* 107f0159 pop ebp */
  EBP = (pop32());
  /* 107f015a ret  */
  ESPCHK(0x107efe50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010160 @ 0x107f0160 (678 bytes, 180 insns) */
void f_107f0160(void) {
  FTRACE(0x107f0160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0160 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0161 mov ebp, esp */
  EBP = (ESP);
  /* 107f0163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f0166 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107f016d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f016f mov ax, word ptr [0x1081086a] */
  AX = (r16((uint32_t)(0x1081086a)));
  /* 107f0175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f0178 cmp dword ptr [0x10810810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f017f je 0x107f02da */
  if (C.zf) goto L_107f02da;
  /* 107f0185 push 0x10810838 */
  push32((uint32_t)(0x10810838u));
  /* 107f018a push 0xe */
  push32((uint32_t)(0xeu));
  /* 107f018c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f018f push ecx */
  push32((uint32_t)(ECX));
  /* 107f0190 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f0192 call 0x107f31d0 */
  push32(0x107f0197u); f_107f31d0();
  /* 107f0197 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f019a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f019d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107f019f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f01a2 push 0x1081083c */
  push32((uint32_t)(0x1081083cu));
  /* 107f01a7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 107f01a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f01ac push eax */
  push32((uint32_t)(EAX));
  /* 107f01ad push 1 */
  push32((uint32_t)(0x1u));
  /* 107f01af call 0x107f31d0 */
  push32(0x107f01b4u); f_107f31d0();
  /* 107f01b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f01b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f01ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f01bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f01bf push 0x10810840 */
  push32((uint32_t)(0x10810840u));
  /* 107f01c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 107f01c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f01c9 push edx */
  push32((uint32_t)(EDX));
  /* 107f01ca push 1 */
  push32((uint32_t)(0x1u));
  /* 107f01cc call 0x107f31d0 */
  push32(0x107f01d1u); f_107f31d0();
  /* 107f01d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f01d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f01d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f01d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f01dc mov edx, dword ptr [0x10810840] */
  EDX = (r32((uint32_t)(0x10810840)));
  /* 107f01e2 push edx */
  push32((uint32_t)(EDX));
  /* 107f01e3 call 0x107f0410 */
  push32(0x107f01e8u); f_107f0410();
  /* 107f01e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f01eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f01ef je 0x107f0249 */
  if (C.zf) goto L_107f0249;
  /* 107f01f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f01f3 mov eax, dword ptr [0x10810838] */
  EAX = (r32((uint32_t)(0x10810838)));
  /* 107f01f8 push eax */
  push32((uint32_t)(EAX));
  /* 107f01f9 call 0x107e5aa0 */
  push32(0x107f01feu); f_107e5aa0();
  /* 107f01fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0201 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0203 mov ecx, dword ptr [0x1081083c] */
  ECX = (r32((uint32_t)(0x1081083c)));
  /* 107f0209 push ecx */
  push32((uint32_t)(ECX));
  /* 107f020a call 0x107e5aa0 */
  push32(0x107f020fu); f_107e5aa0();
  /* 107f020f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0212 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0214 mov edx, dword ptr [0x10810840] */
  EDX = (r32((uint32_t)(0x10810840)));
  /* 107f021a push edx */
  push32((uint32_t)(EDX));
  /* 107f021b call 0x107e5aa0 */
  push32(0x107f0220u); f_107e5aa0();
  /* 107f0220 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0223 mov dword ptr [0x10810838], 0 */
  w32((uint32_t)(0x10810838), (0x0u));
  /* 107f022d mov dword ptr [0x1081083c], 0 */
  w32((uint32_t)(0x1081083c), (0x0u));
  /* 107f0237 mov dword ptr [0x10810840], 0 */
  w32((uint32_t)(0x10810840), (0x0u));
  /* 107f0241 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f0244 jmp 0x107f0402 */
  goto L_107f0402;
L_107f0249:;
  /* 107f0249 mov eax, dword ptr [0x1080fd88] */
  EAX = (r32((uint32_t)(0x1080fd88)));
  /* 107f024e cmp dword ptr [eax], 0x1080fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1080fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0254 je 0x107f0290 */
  if (C.zf) goto L_107f0290;
  /* 107f0256 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0258 mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f025e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f0260 push edx */
  push32((uint32_t)(EDX));
  /* 107f0261 call 0x107e5aa0 */
  push32(0x107f0266u); f_107e5aa0();
  /* 107f0266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0269 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f026b mov eax, dword ptr [0x1080fd88] */
  EAX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0270 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107f0273 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0274 call 0x107e5aa0 */
  push32(0x107f0279u); f_107e5aa0();
  /* 107f0279 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f027c push 2 */
  push32((uint32_t)(0x2u));
  /* 107f027e mov edx, dword ptr [0x1080fd88] */
  EDX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0284 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107f0287 push eax */
  push32((uint32_t)(EAX));
  /* 107f0288 call 0x107e5aa0 */
  push32(0x107f028du); f_107e5aa0();
  /* 107f028d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f0290:;
  /* 107f0290 mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0296 mov edx, dword ptr [0x10810838] */
  EDX = (r32((uint32_t)(0x10810838)));
  /* 107f029c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 107f029e mov eax, dword ptr [0x1080fd88] */
  EAX = (r32((uint32_t)(0x1080fd88)));
  /* 107f02a3 mov ecx, dword ptr [0x1081083c] */
  ECX = (r32((uint32_t)(0x1081083c)));
  /* 107f02a9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 107f02ac mov edx, dword ptr [0x1080fd88] */
  EDX = (r32((uint32_t)(0x1080fd88)));
  /* 107f02b2 mov eax, dword ptr [0x10810840] */
  EAX = (r32((uint32_t)(0x10810840)));
  /* 107f02b7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107f02ba mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f02c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f02c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f02c4 mov byte ptr [0x1080eea8], al */
  w8((uint32_t)(0x1080eea8), (AL));
  /* 107f02c9 mov dword ptr [0x1080eeac], 1 */
  w32((uint32_t)(0x1080eeac), (0x1u));
  /* 107f02d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f02d5 jmp 0x107f0402 */
  goto L_107f0402;
L_107f02da:;
  /* 107f02da push 2 */
  push32((uint32_t)(0x2u));
  /* 107f02dc mov ecx, dword ptr [0x10810838] */
  ECX = (r32((uint32_t)(0x10810838)));
  /* 107f02e2 push ecx */
  push32((uint32_t)(ECX));
  /* 107f02e3 call 0x107e5aa0 */
  push32(0x107f02e8u); f_107e5aa0();
  /* 107f02e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f02eb push 2 */
  push32((uint32_t)(0x2u));
  /* 107f02ed mov edx, dword ptr [0x1081083c] */
  EDX = (r32((uint32_t)(0x1081083c)));
  /* 107f02f3 push edx */
  push32((uint32_t)(EDX));
  /* 107f02f4 call 0x107e5aa0 */
  push32(0x107f02f9u); f_107e5aa0();
  /* 107f02f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f02fc push 2 */
  push32((uint32_t)(0x2u));
  /* 107f02fe mov eax, dword ptr [0x10810840] */
  EAX = (r32((uint32_t)(0x10810840)));
  /* 107f0303 push eax */
  push32((uint32_t)(EAX));
  /* 107f0304 call 0x107e5aa0 */
  push32(0x107f0309u); f_107e5aa0();
  /* 107f0309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f030c mov dword ptr [0x10810838], 0 */
  w32((uint32_t)(0x10810838), (0x0u));
  /* 107f0316 mov dword ptr [0x1081083c], 0 */
  w32((uint32_t)(0x1081083c), (0x0u));
  /* 107f0320 mov dword ptr [0x10810840], 0 */
  w32((uint32_t)(0x10810840), (0x0u));
  /* 107f032a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 107f032f push 0x1080c354 */
  push32((uint32_t)(0x1080c354u));
  /* 107f0334 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0336 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0338 call 0x107e5010 */
  push32(0x107f033du); f_107e5010();
  /* 107f033d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0340 mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0346 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 107f0348 mov edx, dword ptr [0x1080fd88] */
  EDX = (r32((uint32_t)(0x1080fd88)));
  /* 107f034e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0351 jne 0x107f035b */
  if (!C.zf) goto L_107f035b;
  /* 107f0353 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f0356 jmp 0x107f0402 */
  goto L_107f0402;
L_107f035b:;
  /* 107f035b push 0x1080c324 */
  push32((uint32_t)(0x1080c324u));
  /* 107f0360 mov eax, dword ptr [0x1080fd88] */
  EAX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0365 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107f0367 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0368 call 0x107e7fc0 */
  push32(0x107f036du); f_107e7fc0();
  /* 107f036d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0370 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 107f0375 push 0x1080c354 */
  push32((uint32_t)(0x1080c354u));
  /* 107f037a push 2 */
  push32((uint32_t)(0x2u));
  /* 107f037c push 2 */
  push32((uint32_t)(0x2u));
  /* 107f037e call 0x107e5010 */
  push32(0x107f0383u); f_107e5010();
  /* 107f0383 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0386 mov edx, dword ptr [0x1080fd88] */
  EDX = (r32((uint32_t)(0x1080fd88)));
  /* 107f038c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 107f038f mov eax, dword ptr [0x1080fd88] */
  EAX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0394 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0398 jne 0x107f039f */
  if (!C.zf) goto L_107f039f;
  /* 107f039a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f039d jmp 0x107f0402 */
  goto L_107f0402;
L_107f039f:;
  /* 107f039f mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f03a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107f03a8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107f03ab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 107f03b0 push 0x1080c354 */
  push32((uint32_t)(0x1080c354u));
  /* 107f03b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f03b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f03b9 call 0x107e5010 */
  push32(0x107f03beu); f_107e5010();
  /* 107f03be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f03c1 mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f03c7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 107f03ca mov edx, dword ptr [0x1080fd88] */
  EDX = (r32((uint32_t)(0x1080fd88)));
  /* 107f03d0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f03d4 jne 0x107f03db */
  if (!C.zf) goto L_107f03db;
  /* 107f03d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f03d9 jmp 0x107f0402 */
  goto L_107f0402;
L_107f03db:;
  /* 107f03db mov eax, dword ptr [0x1080fd88] */
  EAX = (r32((uint32_t)(0x1080fd88)));
  /* 107f03e0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107f03e3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 107f03e6 mov edx, dword ptr [0x1080fd88] */
  EDX = (r32((uint32_t)(0x1080fd88)));
  /* 107f03ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f03ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f03f0 mov byte ptr [0x1080eea8], cl */
  w8((uint32_t)(0x1080eea8), (CL));
  /* 107f03f6 mov dword ptr [0x1080eeac], 1 */
  w32((uint32_t)(0x1080eeac), (0x1u));
  /* 107f0400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f0402:;
  /* 107f0402 mov esp, ebp */
  ESP = (EBP);
  /* 107f0404 pop ebp */
  EBP = (pop32());
  /* 107f0405 ret  */
  ESPCHK(0x107f0160u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x107f0410 (125 bytes, 49 insns) */
void f_107f0410(void) {
  FTRACE(0x107f0410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0410 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0411 mov ebp, esp */
  EBP = (ESP);
  /* 107f0413 push ecx */
  push32((uint32_t)(ECX));
L_107f0414:;
  /* 107f0414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0417 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f041a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f041c je 0x107f0489 */
  if (C.zf) goto L_107f0489;
  /* 107f041e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0421 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f0424 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0427 jl 0x107f044d */
  if ((C.sf!=C.of)) goto L_107f044d;
  /* 107f0429 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f042c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f042f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0432 jg 0x107f044d */
  if ((!C.zf&&C.sf==C.of)) goto L_107f044d;
  /* 107f0434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0437 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f043a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f043d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0440 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107f0442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0445 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0448 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f044b jmp 0x107f0487 */
  goto L_107f0487;
L_107f044d:;
  /* 107f044d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0450 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f0453 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0456 jne 0x107f047e */
  if (!C.zf) goto L_107f047e;
  /* 107f0458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f045b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107f045e:;
  /* 107f045e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0461 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0464 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107f0467 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107f0469 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f046c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f046f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f0472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0475 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f0478 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f047a jne 0x107f045e */
  if (!C.zf) goto L_107f045e;
  /* 107f047c jmp 0x107f0487 */
  goto L_107f0487;
L_107f047e:;
  /* 107f047e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0481 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0484 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_107f0487:;
  /* 107f0487 jmp 0x107f0414 */
  goto L_107f0414;
L_107f0489:;
  /* 107f0489 mov esp, ebp */
  ESP = (EBP);
  /* 107f048b pop ebp */
  EBP = (pop32());
  /* 107f048c ret  */
  ESPCHK(0x107f0410u, _esp0);
  ESP += 4; return;
}

/* FUN_10010490 @ 0x107f0490 (304 bytes, 85 insns) */
void f_107f0490(void) {
  FTRACE(0x107f0490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0490 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0491 mov ebp, esp */
  EBP = (ESP);
  /* 107f0493 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0494 cmp dword ptr [0x1081080c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081080c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f049b je 0x107f055c */
  if (C.zf) goto L_107f055c;
  /* 107f04a1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 107f04a3 push 0x1080c360 */
  push32((uint32_t)(0x1080c360u));
  /* 107f04a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f04aa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 107f04ac push 1 */
  push32((uint32_t)(0x1u));
  /* 107f04ae call 0x107e5420 */
  push32(0x107f04b3u); f_107e5420();
  /* 107f04b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f04b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f04b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f04bd jne 0x107f04c9 */
  if (!C.zf) goto L_107f04c9;
  /* 107f04bf mov eax, 1 */
  EAX = (0x1u);
  /* 107f04c4 jmp 0x107f05bc */
  goto L_107f05bc;
L_107f04c9:;
  /* 107f04c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f04cc push eax */
  push32((uint32_t)(EAX));
  /* 107f04cd call 0x107f05c0 */
  push32(0x107f04d2u); f_107f05c0();
  /* 107f04d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f04d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f04d7 je 0x107f04fd */
  if (C.zf) goto L_107f04fd;
  /* 107f04d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f04dc push ecx */
  push32((uint32_t)(ECX));
  /* 107f04dd call 0x107f0850 */
  push32(0x107f04e2u); f_107f0850();
  /* 107f04e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f04e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f04e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f04ea push edx */
  push32((uint32_t)(EDX));
  /* 107f04eb call 0x107e5aa0 */
  push32(0x107f04f0u); f_107e5aa0();
  /* 107f04f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f04f3 mov eax, 1 */
  EAX = (0x1u);
  /* 107f04f8 jmp 0x107f05bc */
  goto L_107f05bc;
L_107f04fd:;
  /* 107f04fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0500 mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0506 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f0508 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f050a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f050d mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0513 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107f0516 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 107f0519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f051c mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0522 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107f0525 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 107f0528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f052b mov dword ptr [0x1080fd88], eax */
  w32((uint32_t)(0x1080fd88), (EAX));
  /* 107f0530 mov ecx, dword ptr [0x10810844] */
  ECX = (r32((uint32_t)(0x10810844)));
  /* 107f0536 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0537 call 0x107f0850 */
  push32(0x107f053cu); f_107f0850();
  /* 107f053c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f053f push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0541 mov edx, dword ptr [0x10810844] */
  EDX = (r32((uint32_t)(0x10810844)));
  /* 107f0547 push edx */
  push32((uint32_t)(EDX));
  /* 107f0548 call 0x107e5aa0 */
  push32(0x107f054du); f_107e5aa0();
  /* 107f054d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0553 mov dword ptr [0x10810844], eax */
  w32((uint32_t)(0x10810844), (EAX));
  /* 107f0558 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f055a jmp 0x107f05bc */
  goto L_107f05bc;
L_107f055c:;
  /* 107f055c mov ecx, dword ptr [0x1080fd88] */
  ECX = (r32((uint32_t)(0x1080fd88)));
  /* 107f0562 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f0564 mov dword ptr [0x1080fd58], edx */
  w32((uint32_t)(0x1080fd58), (EDX));
  /* 107f056a mov eax, dword ptr [0x1080fd88] */
  EAX = (r32((uint32_t)(0x1080fd88)));
  /* 107f056f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107f0572 mov dword ptr [0x1080fd5c], ecx */
  w32((uint32_t)(0x1080fd5c), (ECX));
  /* 107f0578 mov edx, dword ptr [0x1080fd88] */
  EDX = (r32((uint32_t)(0x1080fd88)));
  /* 107f057e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107f0581 mov dword ptr [0x1080fd60], eax */
  w32((uint32_t)(0x1080fd60), (EAX));
  /* 107f0586 mov dword ptr [0x1080fd88], 0x1080fd58 */
  w32((uint32_t)(0x1080fd88), (0x1080fd58u));
  /* 107f0590 mov ecx, dword ptr [0x10810844] */
  ECX = (r32((uint32_t)(0x10810844)));
  /* 107f0596 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0597 call 0x107f0850 */
  push32(0x107f059cu); f_107f0850();
  /* 107f059c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f059f push 2 */
  push32((uint32_t)(0x2u));
  /* 107f05a1 mov edx, dword ptr [0x10810844] */
  EDX = (r32((uint32_t)(0x10810844)));
  /* 107f05a7 push edx */
  push32((uint32_t)(EDX));
  /* 107f05a8 call 0x107e5aa0 */
  push32(0x107f05adu); f_107e5aa0();
  /* 107f05ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f05b0 mov dword ptr [0x10810844], 0 */
  w32((uint32_t)(0x10810844), (0x0u));
  /* 107f05ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f05bc:;
  /* 107f05bc mov esp, ebp */
  ESP = (EBP);
  /* 107f05be pop ebp */
  EBP = (pop32());
  /* 107f05bf ret  */
  ESPCHK(0x107f0490u, _esp0);
  ESP += 4; return;
}

/* FUN_100105c0 @ 0x107f05c0 (525 bytes, 200 insns) */
void f_107f05c0(void) {
  FTRACE(0x107f05c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f05c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f05c1 mov ebp, esp */
  EBP = (ESP);
  /* 107f05c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f05c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107f05cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f05cf mov ax, word ptr [0x10810864] */
  AX = (r16((uint32_t)(0x10810864)));
  /* 107f05d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f05d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f05dc jne 0x107f05e6 */
  if (!C.zf) goto L_107f05e6;
  /* 107f05de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f05e1 jmp 0x107f07c9 */
  goto L_107f07c9;
L_107f05e6:;
  /* 107f05e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f05e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f05ec push ecx */
  push32((uint32_t)(ECX));
  /* 107f05ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 107f05ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f05f2 push edx */
  push32((uint32_t)(EDX));
  /* 107f05f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f05f5 call 0x107f31d0 */
  push32(0x107f05fau); f_107f31d0();
  /* 107f05fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f05fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f0600 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0602 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f0605 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0608 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f060b push edx */
  push32((uint32_t)(EDX));
  /* 107f060c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 107f060e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0611 push eax */
  push32((uint32_t)(EAX));
  /* 107f0612 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f0614 call 0x107f31d0 */
  push32(0x107f0619u); f_107f31d0();
  /* 107f0619 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f061c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f061f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0621 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f0624 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0627 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f062a push edx */
  push32((uint32_t)(EDX));
  /* 107f062b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 107f062d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0630 push eax */
  push32((uint32_t)(EAX));
  /* 107f0631 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f0633 call 0x107f31d0 */
  push32(0x107f0638u); f_107f31d0();
  /* 107f0638 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f063b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f063e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0640 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f0643 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0646 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0649 push edx */
  push32((uint32_t)(EDX));
  /* 107f064a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 107f064c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f064f push eax */
  push32((uint32_t)(EAX));
  /* 107f0650 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f0652 call 0x107f31d0 */
  push32(0x107f0657u); f_107f31d0();
  /* 107f0657 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f065a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f065d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f065f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f0662 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0665 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0668 push edx */
  push32((uint32_t)(EDX));
  /* 107f0669 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 107f066b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f066e push eax */
  push32((uint32_t)(EAX));
  /* 107f066f push 1 */
  push32((uint32_t)(0x1u));
  /* 107f0671 call 0x107f31d0 */
  push32(0x107f0676u); f_107f31d0();
  /* 107f0676 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f067c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f067e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f0681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0684 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 107f0687 push eax */
  push32((uint32_t)(EAX));
  /* 107f0688 call 0x107f07d0 */
  push32(0x107f068du); f_107f07d0();
  /* 107f068d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0693 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0696 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0697 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 107f0699 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f069c push edx */
  push32((uint32_t)(EDX));
  /* 107f069d push 1 */
  push32((uint32_t)(0x1u));
  /* 107f069f call 0x107f31d0 */
  push32(0x107f06a4u); f_107f31d0();
  /* 107f06a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f06a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f06aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f06ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f06af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f06b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f06b5 push edx */
  push32((uint32_t)(EDX));
  /* 107f06b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 107f06b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f06bb push eax */
  push32((uint32_t)(EAX));
  /* 107f06bc push 1 */
  push32((uint32_t)(0x1u));
  /* 107f06be call 0x107f31d0 */
  push32(0x107f06c3u); f_107f31d0();
  /* 107f06c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f06c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f06c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f06cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f06ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f06d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f06d4 push edx */
  push32((uint32_t)(EDX));
  /* 107f06d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 107f06d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f06da push eax */
  push32((uint32_t)(EAX));
  /* 107f06db push 0 */
  push32((uint32_t)(0x0u));
  /* 107f06dd call 0x107f31d0 */
  push32(0x107f06e2u); f_107f31d0();
  /* 107f06e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f06e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f06e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f06ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f06ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f06f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f06f3 push edx */
  push32((uint32_t)(EDX));
  /* 107f06f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 107f06f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f06f9 push eax */
  push32((uint32_t)(EAX));
  /* 107f06fa push 0 */
  push32((uint32_t)(0x0u));
  /* 107f06fc call 0x107f31d0 */
  push32(0x107f0701u); f_107f31d0();
  /* 107f0701 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0704 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f0707 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0709 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f070c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f070f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0712 push edx */
  push32((uint32_t)(EDX));
  /* 107f0713 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 107f0715 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0718 push eax */
  push32((uint32_t)(EAX));
  /* 107f0719 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f071b call 0x107f31d0 */
  push32(0x107f0720u); f_107f31d0();
  /* 107f0720 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0723 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f0726 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0728 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f072b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f072e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0731 push edx */
  push32((uint32_t)(EDX));
  /* 107f0732 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 107f0734 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0737 push eax */
  push32((uint32_t)(EAX));
  /* 107f0738 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f073a call 0x107f31d0 */
  push32(0x107f073fu); f_107f31d0();
  /* 107f073f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0742 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f0745 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0747 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f074a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f074d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0750 push edx */
  push32((uint32_t)(EDX));
  /* 107f0751 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 107f0753 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0756 push eax */
  push32((uint32_t)(EAX));
  /* 107f0757 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f0759 call 0x107f31d0 */
  push32(0x107f075eu); f_107f31d0();
  /* 107f075e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0761 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f0764 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0766 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f0769 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f076c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f076f push edx */
  push32((uint32_t)(EDX));
  /* 107f0770 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 107f0772 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0775 push eax */
  push32((uint32_t)(EAX));
  /* 107f0776 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f0778 call 0x107f31d0 */
  push32(0x107f077du); f_107f31d0();
  /* 107f077d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0780 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f0783 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0785 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f0788 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f078b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f078e push edx */
  push32((uint32_t)(EDX));
  /* 107f078f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 107f0791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0794 push eax */
  push32((uint32_t)(EAX));
  /* 107f0795 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f0797 call 0x107f31d0 */
  push32(0x107f079cu); f_107f31d0();
  /* 107f079c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f079f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f07a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f07a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f07a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f07aa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f07ad push edx */
  push32((uint32_t)(EDX));
  /* 107f07ae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 107f07b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f07b3 push eax */
  push32((uint32_t)(EAX));
  /* 107f07b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f07b6 call 0x107f31d0 */
  push32(0x107f07bbu); f_107f31d0();
  /* 107f07bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f07be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f07c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107f07c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f07c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107f07c9:;
  /* 107f07c9 mov esp, ebp */
  ESP = (EBP);
  /* 107f07cb pop ebp */
  EBP = (pop32());
  /* 107f07cc ret  */
  ESPCHK(0x107f05c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x107f07d0 (125 bytes, 49 insns) */
void f_107f07d0(void) {
  FTRACE(0x107f07d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f07d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f07d1 mov ebp, esp */
  EBP = (ESP);
  /* 107f07d3 push ecx */
  push32((uint32_t)(ECX));
L_107f07d4:;
  /* 107f07d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f07d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f07da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f07dc je 0x107f0849 */
  if (C.zf) goto L_107f0849;
  /* 107f07de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f07e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f07e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f07e7 jl 0x107f080d */
  if ((C.sf!=C.of)) goto L_107f080d;
  /* 107f07e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f07ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f07ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f07f2 jg 0x107f080d */
  if ((!C.zf&&C.sf==C.of)) goto L_107f080d;
  /* 107f07f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f07f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f07fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f07fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0800 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 107f0802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0805 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0808 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f080b jmp 0x107f0847 */
  goto L_107f0847;
L_107f080d:;
  /* 107f080d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0810 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f0813 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0816 jne 0x107f083e */
  if (!C.zf) goto L_107f083e;
  /* 107f0818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f081b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107f081e:;
  /* 107f081e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0824 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107f0827 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 107f0829 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f082c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f082f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f0832 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0835 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f0838 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f083a jne 0x107f081e */
  if (!C.zf) goto L_107f081e;
  /* 107f083c jmp 0x107f0847 */
  goto L_107f0847;
L_107f083e:;
  /* 107f083e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0841 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0844 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_107f0847:;
  /* 107f0847 jmp 0x107f07d4 */
  goto L_107f07d4;
L_107f0849:;
  /* 107f0849 mov esp, ebp */
  ESP = (EBP);
  /* 107f084b pop ebp */
  EBP = (pop32());
  /* 107f084c ret  */
  ESPCHK(0x107f07d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010850 @ 0x107f0850 (147 bytes, 52 insns) */
void f_107f0850(void) {
  FTRACE(0x107f0850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0850 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0851 mov ebp, esp */
  EBP = (ESP);
  /* 107f0853 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0857 jne 0x107f085e */
  if (!C.zf) goto L_107f085e;
  /* 107f0859 jmp 0x107f08e1 */
  goto L_107f08e1;
L_107f085e:;
  /* 107f085e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0861 cmp dword ptr [eax + 0xc], 0x108108a0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x108108a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0868 je 0x107f08e1 */
  if (C.zf) goto L_107f08e1;
  /* 107f086a push 2 */
  push32((uint32_t)(0x2u));
  /* 107f086c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f086f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107f0872 push edx */
  push32((uint32_t)(EDX));
  /* 107f0873 call 0x107e5aa0 */
  push32(0x107f0878u); f_107e5aa0();
  /* 107f0878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f087b push 2 */
  push32((uint32_t)(0x2u));
  /* 107f087d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0880 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107f0883 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0884 call 0x107e5aa0 */
  push32(0x107f0889u); f_107e5aa0();
  /* 107f0889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f088c push 2 */
  push32((uint32_t)(0x2u));
  /* 107f088e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0891 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107f0894 push eax */
  push32((uint32_t)(EAX));
  /* 107f0895 call 0x107e5aa0 */
  push32(0x107f089au); f_107e5aa0();
  /* 107f089a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f089d push 2 */
  push32((uint32_t)(0x2u));
  /* 107f089f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f08a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107f08a5 push edx */
  push32((uint32_t)(EDX));
  /* 107f08a6 call 0x107e5aa0 */
  push32(0x107f08abu); f_107e5aa0();
  /* 107f08ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f08ae push 2 */
  push32((uint32_t)(0x2u));
  /* 107f08b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f08b3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107f08b6 push ecx */
  push32((uint32_t)(ECX));
  /* 107f08b7 call 0x107e5aa0 */
  push32(0x107f08bcu); f_107e5aa0();
  /* 107f08bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f08bf push 2 */
  push32((uint32_t)(0x2u));
  /* 107f08c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f08c4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 107f08c7 push eax */
  push32((uint32_t)(EAX));
  /* 107f08c8 call 0x107e5aa0 */
  push32(0x107f08cdu); f_107e5aa0();
  /* 107f08cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f08d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f08d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f08d5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 107f08d8 push edx */
  push32((uint32_t)(EDX));
  /* 107f08d9 call 0x107e5aa0 */
  push32(0x107f08deu); f_107e5aa0();
  /* 107f08de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f08e1:;
  /* 107f08e1 pop ebp */
  EBP = (pop32());
  /* 107f08e2 ret  */
  ESPCHK(0x107f0850u, _esp0);
  ESP += 4; return;
}

/* FUN_100108f0 @ 0x107f08f0 (928 bytes, 284 insns) */
void f_107f08f0(void) {
  FTRACE(0x107f08f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f08f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f08f1 mov ebp, esp */
  EBP = (ESP);
  /* 107f08f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f08f6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 107f08fd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 107f0904 cmp dword ptr [0x10810808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f090b je 0x107f0c41 */
  if (C.zf) goto L_107f0c41;
  /* 107f0911 cmp dword ptr [0x10810818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0918 jne 0x107f0940 */
  if (!C.zf) goto L_107f0940;
  /* 107f091a push 0x10810818 */
  push32((uint32_t)(0x10810818u));
  /* 107f091f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 107f0924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0926 mov ax, word ptr [0x1081085c] */
  AX = (r16((uint32_t)(0x1081085c)));
  /* 107f092c push eax */
  push32((uint32_t)(EAX));
  /* 107f092d push 0 */
  push32((uint32_t)(0x0u));
  /* 107f092f call 0x107f31d0 */
  push32(0x107f0934u); f_107f31d0();
  /* 107f0934 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0937 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0939 je 0x107f0940 */
  if (C.zf) goto L_107f0940;
  /* 107f093b jmp 0x107f0c02 */
  goto L_107f0c02;
L_107f0940:;
  /* 107f0940 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 107f0942 push 0x1080c36c */
  push32((uint32_t)(0x1080c36cu));
  /* 107f0947 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0949 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 107f094e call 0x107e5010 */
  push32(0x107f0953u); f_107e5010();
  /* 107f0953 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0956 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 107f0959 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 107f095b push 0x1080c36c */
  push32((uint32_t)(0x1080c36cu));
  /* 107f0960 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0962 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 107f0967 call 0x107e5010 */
  push32(0x107f096cu); f_107e5010();
  /* 107f096c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f096f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107f0972 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 107f0974 push 0x1080c36c */
  push32((uint32_t)(0x1080c36cu));
  /* 107f0979 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f097b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 107f0980 call 0x107e5010 */
  push32(0x107f0985u); f_107e5010();
  /* 107f0985 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0988 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 107f098b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 107f098d push 0x1080c36c */
  push32((uint32_t)(0x1080c36cu));
  /* 107f0992 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0994 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 107f0999 call 0x107e5010 */
  push32(0x107f099eu); f_107e5010();
  /* 107f099e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f09a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107f09a4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f09a8 je 0x107f09bc */
  if (C.zf) goto L_107f09bc;
  /* 107f09aa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f09ae je 0x107f09bc */
  if (C.zf) goto L_107f09bc;
  /* 107f09b0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f09b4 je 0x107f09bc */
  if (C.zf) goto L_107f09bc;
  /* 107f09b6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f09ba jne 0x107f09c1 */
  if (!C.zf) goto L_107f09c1;
L_107f09bc:;
  /* 107f09bc jmp 0x107f0c02 */
  goto L_107f0c02;
L_107f09c1:;
  /* 107f09c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107f09c4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107f09c7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107f09ce jmp 0x107f09d9 */
  goto L_107f09d9;
L_107f09d0:;
  /* 107f09d0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f09d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f09d6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_107f09d9:;
  /* 107f09d9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f09e0 jge 0x107f09f5 */
  if ((C.sf==C.of)) goto L_107f09f5;
  /* 107f09e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f09e5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 107f09e8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 107f09ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f09ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f09f0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107f09f3 jmp 0x107f09d0 */
  goto L_107f09d0;
L_107f09f5:;
  /* 107f09f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 107f09f8 push eax */
  push32((uint32_t)(EAX));
  /* 107f09f9 mov ecx, dword ptr [0x10810818] */
  ECX = (r32((uint32_t)(0x10810818)));
  /* 107f09ff push ecx */
  push32((uint32_t)(ECX));
  /* 107f0a00 call dword ptr [0x10813300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813300))), 0x107f0a06u);
  /* 107f0a06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0a08 jne 0x107f0a0f */
  if (!C.zf) goto L_107f0a0f;
  /* 107f0a0a jmp 0x107f0c02 */
  goto L_107f0c02;
L_107f0a0f:;
  /* 107f0a0f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0a13 jbe 0x107f0a1a */
  if ((C.cf||C.zf)) goto L_107f0a1a;
  /* 107f0a15 jmp 0x107f0c02 */
  goto L_107f0c02;
L_107f0a1a:;
  /* 107f0a1a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107f0a1d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107f0a23 mov dword ptr [0x1080eea4], edx */
  w32((uint32_t)(0x1080eea4), (EDX));
  /* 107f0a29 cmp dword ptr [0x1080eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1080eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0a30 jle 0x107f0a89 */
  if ((C.zf||C.sf!=C.of)) goto L_107f0a89;
  /* 107f0a32 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 107f0a35 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107f0a38 jmp 0x107f0a43 */
  goto L_107f0a43;
L_107f0a3a:;
  /* 107f0a3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0a3d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0a40 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_107f0a43:;
  /* 107f0a43 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0a48 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f0a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0a4c je 0x107f0a89 */
  if (C.zf) goto L_107f0a89;
  /* 107f0a4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0a51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f0a53 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 107f0a56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f0a58 je 0x107f0a89 */
  if (C.zf) goto L_107f0a89;
  /* 107f0a5a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0a5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0a5f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f0a61 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107f0a64 jmp 0x107f0a6f */
  goto L_107f0a6f;
L_107f0a66:;
  /* 107f0a66 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f0a69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0a6c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_107f0a6f:;
  /* 107f0a6f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0a72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0a74 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107f0a77 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0a7a jg 0x107f0a87 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f0a87;
  /* 107f0a7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107f0a7f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0a82 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107f0a85 jmp 0x107f0a66 */
  goto L_107f0a66;
L_107f0a87:;
  /* 107f0a87 jmp 0x107f0a3a */
  goto L_107f0a3a;
L_107f0a89:;
  /* 107f0a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f0a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 107f0a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 107f0a8f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107f0a92 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0a95 push eax */
  push32((uint32_t)(EAX));
  /* 107f0a96 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107f0a9b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107f0a9e push ecx */
  push32((uint32_t)(ECX));
  /* 107f0a9f push 1 */
  push32((uint32_t)(0x1u));
  /* 107f0aa1 call 0x107ed240 */
  push32(0x107f0aa6u); f_107ed240();
  /* 107f0aa6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0aa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0aab jne 0x107f0ab2 */
  if (!C.zf) goto L_107f0ab2;
  /* 107f0aad jmp 0x107f0c02 */
  goto L_107f0c02;
L_107f0ab2:;
  /* 107f0ab2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107f0ab5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 107f0aba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f0abd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107f0ac0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107f0ac7 jmp 0x107f0ad2 */
  goto L_107f0ad2;
L_107f0ac9:;
  /* 107f0ac9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f0acc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0acf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_107f0ad2:;
  /* 107f0ad2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0ad9 jge 0x107f0af0 */
  if ((C.sf==C.of)) goto L_107f0af0;
  /* 107f0adb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f0ade mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 107f0ae2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 107f0ae5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 107f0ae8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0aeb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 107f0aee jmp 0x107f0ac9 */
  goto L_107f0ac9;
L_107f0af0:;
  /* 107f0af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f0af2 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f0af4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f0af7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0afa push edx */
  push32((uint32_t)(EDX));
  /* 107f0afb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107f0b00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f0b03 push eax */
  push32((uint32_t)(EAX));
  /* 107f0b04 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f0b06 call 0x107f3470 */
  push32(0x107f0b0bu); f_107f3470();
  /* 107f0b0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0b0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0b10 jne 0x107f0b17 */
  if (!C.zf) goto L_107f0b17;
  /* 107f0b12 jmp 0x107f0c02 */
  goto L_107f0c02;
L_107f0b17:;
  /* 107f0b17 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f0b1a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 107f0b1f cmp dword ptr [0x1080eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1080eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0b26 jle 0x107f0b83 */
  if ((C.zf||C.sf!=C.of)) goto L_107f0b83;
  /* 107f0b28 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 107f0b2b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 107f0b2e jmp 0x107f0b39 */
  goto L_107f0b39;
L_107f0b30:;
  /* 107f0b30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0b33 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0b36 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_107f0b39:;
  /* 107f0b39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0b3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 107f0b3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 107f0b40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f0b42 je 0x107f0b83 */
  if (C.zf) goto L_107f0b83;
  /* 107f0b44 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0b47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0b49 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107f0b4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f0b4e je 0x107f0b83 */
  if (C.zf) goto L_107f0b83;
  /* 107f0b50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0b53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0b55 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f0b57 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107f0b5a jmp 0x107f0b65 */
  goto L_107f0b65;
L_107f0b5c:;
  /* 107f0b5c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f0b5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0b62 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_107f0b65:;
  /* 107f0b65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107f0b68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0b6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 107f0b6d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0b70 jg 0x107f0b81 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f0b81;
  /* 107f0b72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107f0b75 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107f0b78 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 107f0b7f jmp 0x107f0b5c */
  goto L_107f0b5c;
L_107f0b81:;
  /* 107f0b81 jmp 0x107f0b30 */
  goto L_107f0b30;
L_107f0b83:;
  /* 107f0b83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107f0b86 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0b89 mov dword ptr [0x1080ec98], eax */
  w32((uint32_t)(0x1080ec98), (EAX));
  /* 107f0b8e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f0b91 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0b94 mov dword ptr [0x1080ec9c], ecx */
  w32((uint32_t)(0x1080ec9c), (ECX));
  /* 107f0b9a cmp dword ptr [0x10810848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0ba1 je 0x107f0bb4 */
  if (C.zf) goto L_107f0bb4;
  /* 107f0ba3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0ba5 mov edx, dword ptr [0x10810848] */
  EDX = (r32((uint32_t)(0x10810848)));
  /* 107f0bab push edx */
  push32((uint32_t)(EDX));
  /* 107f0bac call 0x107e5aa0 */
  push32(0x107f0bb1u); f_107e5aa0();
  /* 107f0bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f0bb4:;
  /* 107f0bb4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107f0bb7 mov dword ptr [0x10810848], eax */
  w32((uint32_t)(0x10810848), (EAX));
  /* 107f0bbc cmp dword ptr [0x1081084c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081084c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0bc3 je 0x107f0bd6 */
  if (C.zf) goto L_107f0bd6;
  /* 107f0bc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0bc7 mov ecx, dword ptr [0x1081084c] */
  ECX = (r32((uint32_t)(0x1081084c)));
  /* 107f0bcd push ecx */
  push32((uint32_t)(ECX));
  /* 107f0bce call 0x107e5aa0 */
  push32(0x107f0bd3u); f_107e5aa0();
  /* 107f0bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f0bd6:;
  /* 107f0bd6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f0bd9 mov dword ptr [0x1081084c], edx */
  w32((uint32_t)(0x1081084c), (EDX));
  /* 107f0bdf push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0be1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107f0be4 push eax */
  push32((uint32_t)(EAX));
  /* 107f0be5 call 0x107e5aa0 */
  push32(0x107f0beau); f_107e5aa0();
  /* 107f0bea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0bed push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0bef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f0bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0bf3 call 0x107e5aa0 */
  push32(0x107f0bf8u); f_107e5aa0();
  /* 107f0bf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0bfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0bfd jmp 0x107f0c8c */
  goto L_107f0c8c;
L_107f0c02:;
  /* 107f0c02 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0c04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107f0c07 push edx */
  push32((uint32_t)(EDX));
  /* 107f0c08 call 0x107e5aa0 */
  push32(0x107f0c0du); f_107e5aa0();
  /* 107f0c0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0c10 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0c12 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107f0c15 push eax */
  push32((uint32_t)(EAX));
  /* 107f0c16 call 0x107e5aa0 */
  push32(0x107f0c1bu); f_107e5aa0();
  /* 107f0c1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0c1e push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0c20 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107f0c23 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0c24 call 0x107e5aa0 */
  push32(0x107f0c29u); f_107e5aa0();
  /* 107f0c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0c2c push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0c2e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107f0c31 push edx */
  push32((uint32_t)(EDX));
  /* 107f0c32 call 0x107e5aa0 */
  push32(0x107f0c37u); f_107e5aa0();
  /* 107f0c37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0c3a mov eax, 1 */
  EAX = (0x1u);
  /* 107f0c3f jmp 0x107f0c8c */
  goto L_107f0c8c;
L_107f0c41:;
  /* 107f0c41 mov dword ptr [0x1080ec98], 0x1080eca2 */
  w32((uint32_t)(0x1080ec98), (0x1080eca2u));
  /* 107f0c4b mov dword ptr [0x1080ec9c], 0x1080eca2 */
  w32((uint32_t)(0x1080ec9c), (0x1080eca2u));
  /* 107f0c55 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0c57 mov eax, dword ptr [0x10810848] */
  EAX = (r32((uint32_t)(0x10810848)));
  /* 107f0c5c push eax */
  push32((uint32_t)(EAX));
  /* 107f0c5d call 0x107e5aa0 */
  push32(0x107f0c62u); f_107e5aa0();
  /* 107f0c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0c65 push 2 */
  push32((uint32_t)(0x2u));
  /* 107f0c67 mov ecx, dword ptr [0x1081084c] */
  ECX = (r32((uint32_t)(0x1081084c)));
  /* 107f0c6d push ecx */
  push32((uint32_t)(ECX));
  /* 107f0c6e call 0x107e5aa0 */
  push32(0x107f0c73u); f_107e5aa0();
  /* 107f0c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0c76 mov dword ptr [0x10810848], 0 */
  w32((uint32_t)(0x10810848), (0x0u));
  /* 107f0c80 mov dword ptr [0x1081084c], 0 */
  w32((uint32_t)(0x1081084c), (0x0u));
  /* 107f0c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f0c8c:;
  /* 107f0c8c mov esp, ebp */
  ESP = (EBP);
  /* 107f0c8e pop ebp */
  EBP = (pop32());
  /* 107f0c8f ret  */
  ESPCHK(0x107f08f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c90 @ 0x107f0c90 (7 bytes, 5 insns) */
void f_107f0c90(void) {
  FTRACE(0x107f0c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0c90 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0c91 mov ebp, esp */
  EBP = (ESP);
  /* 107f0c93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0c95 pop ebp */
  EBP = (pop32());
  /* 107f0c96 ret  */
  ESPCHK(0x107f0c90u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x107f0ca0 (129 bytes, 56 insns) */
void f_107f0ca0(void) {
  FTRACE(0x107f0ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0ca0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 107f0ca4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 107f0ca8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 107f0cae jne 0x107f0cec */
  if (!C.zf) goto L_107f0cec;
L_107f0cb0:;
  /* 107f0cb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107f0cb2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f0cb4 jne 0x107f0ce4 */
  if (!C.zf) goto L_107f0ce4;
  /* 107f0cb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f0cb8 je 0x107f0ce0 */
  if (C.zf) goto L_107f0ce0;
  /* 107f0cba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f0cbd jne 0x107f0ce4 */
  if (!C.zf) goto L_107f0ce4;
  /* 107f0cbf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107f0cc1 je 0x107f0ce0 */
  if (C.zf) goto L_107f0ce0;
  /* 107f0cc3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107f0cc6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f0cc9 jne 0x107f0ce4 */
  if (!C.zf) goto L_107f0ce4;
  /* 107f0ccb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f0ccd je 0x107f0ce0 */
  if (C.zf) goto L_107f0ce0;
  /* 107f0ccf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f0cd2 jne 0x107f0ce4 */
  if (!C.zf) goto L_107f0ce4;
  /* 107f0cd4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0cd7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0cda or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107f0cdc jne 0x107f0cb0 */
  if (!C.zf) goto L_107f0cb0;
  /* 107f0cde mov edi, edi */
  EDI = (EDI);
L_107f0ce0:;
  /* 107f0ce0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0ce2 ret  */
  ESPCHK(0x107f0ca0u, _esp0);
  ESP += 4; return;
  /* 107f0ce3 nop  */
  /* nop */
L_107f0ce4:;
  /* 107f0ce4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f0ce6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107f0ce8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 107f0ce9 ret  */
  ESPCHK(0x107f0ca0u, _esp0);
  ESP += 4; return;
  /* 107f0cea mov edi, edi */
  EDI = (EDI);
L_107f0cec:;
  /* 107f0cec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 107f0cf2 je 0x107f0d08 */
  if (C.zf) goto L_107f0d08;
  /* 107f0cf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f0cf6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 107f0cf7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f0cf9 jne 0x107f0ce4 */
  if (!C.zf) goto L_107f0ce4;
  /* 107f0cfb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107f0cfc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f0cfe je 0x107f0ce0 */
  if (C.zf) goto L_107f0ce0;
  /* 107f0d00 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 107f0d06 je 0x107f0cb0 */
  if (C.zf) goto L_107f0cb0;
L_107f0d08:;
  /* 107f0d08 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 107f0d0b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0d0e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f0d10 jne 0x107f0ce4 */
  if (!C.zf) goto L_107f0ce4;
  /* 107f0d12 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f0d14 je 0x107f0ce0 */
  if (C.zf) goto L_107f0ce0;
  /* 107f0d16 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f0d19 jne 0x107f0ce4 */
  if (!C.zf) goto L_107f0ce4;
  /* 107f0d1b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107f0d1d je 0x107f0ce0 */
  if (C.zf) goto L_107f0ce0;
  /* 107f0d1f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0d22 jmp 0x107f0cb0 */
  goto L_107f0cb0;
}

/* FUN_10010d30 @ 0x107f0d30 (62 bytes, 35 insns) */
void f_107f0d30(void) {
  FTRACE(0x107f0d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0d30 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0d31 mov ebp, esp */
  EBP = (ESP);
  /* 107f0d33 push esi */
  push32((uint32_t)(ESI));
  /* 107f0d34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0d36 push eax */
  push32((uint32_t)(EAX));
  /* 107f0d37 push eax */
  push32((uint32_t)(EAX));
  /* 107f0d38 push eax */
  push32((uint32_t)(EAX));
  /* 107f0d39 push eax */
  push32((uint32_t)(EAX));
  /* 107f0d3a push eax */
  push32((uint32_t)(EAX));
  /* 107f0d3b push eax */
  push32((uint32_t)(EAX));
  /* 107f0d3c push eax */
  push32((uint32_t)(EAX));
  /* 107f0d3d push eax */
  push32((uint32_t)(EAX));
  /* 107f0d3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f0d41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107f0d44:;
  /* 107f0d44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f0d46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f0d48 je 0x107f0d51 */
  if (C.zf) goto L_107f0d51;
  /* 107f0d4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 107f0d4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x107f0d4b");
  /* 107f0d4f jmp 0x107f0d44 */
  goto L_107f0d44;
L_107f0d51:;
  /* 107f0d51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0d54 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 107f0d57 nop  */
  /* nop */
L_107f0d58:;
  /* 107f0d58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 107f0d59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107f0d5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f0d5d je 0x107f0d66 */
  if (C.zf) goto L_107f0d66;
  /* 107f0d5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107f0d60 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x107f0d60");
  /* 107f0d64 jae 0x107f0d58 */
  if (!C.cf) goto L_107f0d58;
L_107f0d66:;
  /* 107f0d66 mov eax, ecx */
  EAX = (ECX);
  /* 107f0d68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0d6b pop esi */
  ESI = (pop32());
  /* 107f0d6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107f0d6d ret  */
  ESPCHK(0x107f0d30u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x107f0d70 (56 bytes, 31 insns) */
void f_107f0d70(void) {
  FTRACE(0x107f0d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0d70 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0d71 mov ebp, esp */
  EBP = (ESP);
  /* 107f0d73 push edi */
  push32((uint32_t)(EDI));
  /* 107f0d74 push esi */
  push32((uint32_t)(ESI));
  /* 107f0d75 push ebx */
  push32((uint32_t)(EBX));
  /* 107f0d76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f0d79 jecxz 0x107f0da1 */
  x86_unimpl("jecxz @ 0x107f0d79");
  /* 107f0d7b mov ebx, ecx */
  EBX = (ECX);
  /* 107f0d7d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0d80 mov esi, edi */
  ESI = (EDI);
  /* 107f0d82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0d84 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 107f0d86 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f0d88 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0d8a mov edi, esi */
  EDI = (ESI);
  /* 107f0d8c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107f0d8f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 107f0d91 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 107f0d94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f0d96 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107f0d99 ja 0x107f0d9f */
  if ((!C.cf&&!C.zf)) goto L_107f0d9f;
  /* 107f0d9b je 0x107f0da1 */
  if (C.zf) goto L_107f0da1;
  /* 107f0d9d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107f0d9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_107f0d9f:;
  /* 107f0d9f not ecx */
  ECX = (~(ECX));
L_107f0da1:;
  /* 107f0da1 mov eax, ecx */
  EAX = (ECX);
  /* 107f0da3 pop ebx */
  EBX = (pop32());
  /* 107f0da4 pop esi */
  ESI = (pop32());
  /* 107f0da5 pop edi */
  EDI = (pop32());
  /* 107f0da6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107f0da7 ret  */
  ESPCHK(0x107f0d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010db0 @ 0x107f0db0 (58 bytes, 32 insns) */
void f_107f0db0(void) {
  FTRACE(0x107f0db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0db0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0db1 mov ebp, esp */
  EBP = (ESP);
  /* 107f0db3 push esi */
  push32((uint32_t)(ESI));
  /* 107f0db4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0db6 push eax */
  push32((uint32_t)(EAX));
  /* 107f0db7 push eax */
  push32((uint32_t)(EAX));
  /* 107f0db8 push eax */
  push32((uint32_t)(EAX));
  /* 107f0db9 push eax */
  push32((uint32_t)(EAX));
  /* 107f0dba push eax */
  push32((uint32_t)(EAX));
  /* 107f0dbb push eax */
  push32((uint32_t)(EAX));
  /* 107f0dbc push eax */
  push32((uint32_t)(EAX));
  /* 107f0dbd push eax */
  push32((uint32_t)(EAX));
  /* 107f0dbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f0dc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107f0dc4:;
  /* 107f0dc4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f0dc6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f0dc8 je 0x107f0dd1 */
  if (C.zf) goto L_107f0dd1;
  /* 107f0dca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 107f0dcb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x107f0dcb");
  /* 107f0dcf jmp 0x107f0dc4 */
  goto L_107f0dc4;
L_107f0dd1:;
  /* 107f0dd1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_107f0dd4:;
  /* 107f0dd4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 107f0dd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107f0dd8 je 0x107f0de4 */
  if (C.zf) goto L_107f0de4;
  /* 107f0dda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 107f0ddb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x107f0ddb");
  /* 107f0ddf jae 0x107f0dd4 */
  if (!C.cf) goto L_107f0dd4;
  /* 107f0de1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_107f0de4:;
  /* 107f0de4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0de7 pop esi */
  ESI = (pop32());
  /* 107f0de8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107f0de9 ret  */
  ESPCHK(0x107f0db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010df0 @ 0x107f0df0 (512 bytes, 147 insns) */
void f_107f0df0(void) {
  FTRACE(0x107f0df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0df0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0df1 mov ebp, esp */
  EBP = (ESP);
  /* 107f0df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f0df6 cmp dword ptr [0x10810894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0dfd jne 0x107f0e22 */
  if (!C.zf) goto L_107f0e22;
  /* 107f0dff call 0x107f18c0 */
  push32(0x107f0e04u); f_107f18c0();
  /* 107f0e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0e06 je 0x107f0e12 */
  if (C.zf) goto L_107f0e12;
  /* 107f0e08 mov eax, dword ptr [0x108132c4] */
  EAX = (r32((uint32_t)(0x108132c4)));
  /* 107f0e0d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f0e10 jmp 0x107f0e19 */
  goto L_107f0e19;
L_107f0e12:;
  /* 107f0e12 mov dword ptr [ebp - 8], 0x107f1910 */
  w32((uint32_t)(EBP + -0x8), (0x107f1910u));
L_107f0e19:;
  /* 107f0e19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f0e1c mov dword ptr [0x10810894], ecx */
  w32((uint32_t)(0x10810894), (ECX));
L_107f0e22:;
  /* 107f0e22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0e26 jne 0x107f0e32 */
  if (!C.zf) goto L_107f0e32;
  /* 107f0e28 call 0x107f1710 */
  push32(0x107f0e2du); f_107f1710();
  /* 107f0e2d jmp 0x107f0efe */
  goto L_107f0efe;
L_107f0e32:;
  /* 107f0e32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0e35 mov dword ptr [0x10810884], edx */
  w32((uint32_t)(0x10810884), (EDX));
  /* 107f0e3b cmp dword ptr [0x10810884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0e42 je 0x107f0e64 */
  if (C.zf) goto L_107f0e64;
  /* 107f0e44 mov eax, dword ptr [0x10810884] */
  EAX = (r32((uint32_t)(0x10810884)));
  /* 107f0e49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f0e4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f0e4e je 0x107f0e64 */
  if (C.zf) goto L_107f0e64;
  /* 107f0e50 push 0x10810884 */
  push32((uint32_t)(0x10810884u));
  /* 107f0e55 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107f0e57 push 0x1080fa90 */
  push32((uint32_t)(0x1080fa90u));
  /* 107f0e5c call 0x107f0ff0 */
  push32(0x107f0e61u); f_107f0ff0();
  /* 107f0e61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f0e64:;
  /* 107f0e64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0e67 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0e6a mov dword ptr [0x10810888], edx */
  w32((uint32_t)(0x10810888), (EDX));
  /* 107f0e70 cmp dword ptr [0x10810888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0e77 je 0x107f0e99 */
  if (C.zf) goto L_107f0e99;
  /* 107f0e79 mov eax, dword ptr [0x10810888] */
  EAX = (r32((uint32_t)(0x10810888)));
  /* 107f0e7e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f0e81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f0e83 je 0x107f0e99 */
  if (C.zf) goto L_107f0e99;
  /* 107f0e85 push 0x10810888 */
  push32((uint32_t)(0x10810888u));
  /* 107f0e8a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 107f0e8c push 0x1080f9d8 */
  push32((uint32_t)(0x1080f9d8u));
  /* 107f0e91 call 0x107f0ff0 */
  push32(0x107f0e96u); f_107f0ff0();
  /* 107f0e96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f0e99:;
  /* 107f0e99 mov dword ptr [0x1081088c], 0 */
  w32((uint32_t)(0x1081088c), (0x0u));
  /* 107f0ea3 cmp dword ptr [0x10810884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0eaa je 0x107f0edd */
  if (C.zf) goto L_107f0edd;
  /* 107f0eac mov edx, dword ptr [0x10810884] */
  EDX = (r32((uint32_t)(0x10810884)));
  /* 107f0eb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107f0eb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0eb7 je 0x107f0edd */
  if (C.zf) goto L_107f0edd;
  /* 107f0eb9 cmp dword ptr [0x10810888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0ec0 je 0x107f0ed6 */
  if (C.zf) goto L_107f0ed6;
  /* 107f0ec2 mov ecx, dword ptr [0x10810888] */
  ECX = (r32((uint32_t)(0x10810888)));
  /* 107f0ec8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107f0ecb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f0ecd je 0x107f0ed6 */
  if (C.zf) goto L_107f0ed6;
  /* 107f0ecf call 0x107f1080 */
  push32(0x107f0ed4u); f_107f1080();
  /* 107f0ed4 jmp 0x107f0edb */
  goto L_107f0edb;
L_107f0ed6:;
  /* 107f0ed6 call 0x107f1470 */
  push32(0x107f0edbu); f_107f1470();
L_107f0edb:;
  /* 107f0edb jmp 0x107f0efe */
  goto L_107f0efe;
L_107f0edd:;
  /* 107f0edd cmp dword ptr [0x10810888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0ee4 je 0x107f0ef9 */
  if (C.zf) goto L_107f0ef9;
  /* 107f0ee6 mov eax, dword ptr [0x10810888] */
  EAX = (r32((uint32_t)(0x10810888)));
  /* 107f0eeb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f0eee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f0ef0 je 0x107f0ef9 */
  if (C.zf) goto L_107f0ef9;
  /* 107f0ef2 call 0x107f1610 */
  push32(0x107f0ef7u); f_107f1610();
  /* 107f0ef7 jmp 0x107f0efe */
  goto L_107f0efe;
L_107f0ef9:;
  /* 107f0ef9 call 0x107f1710 */
  push32(0x107f0efeu); f_107f1710();
L_107f0efe:;
  /* 107f0efe cmp dword ptr [0x1081088c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081088c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0f05 jne 0x107f0f0e */
  if (!C.zf) goto L_107f0f0e;
  /* 107f0f07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0f09 jmp 0x107f0fec */
  goto L_107f0fec;
L_107f0f0e:;
  /* 107f0f0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f0f11 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0f17 push edx */
  push32((uint32_t)(EDX));
  /* 107f0f18 call 0x107f1740 */
  push32(0x107f0f1du); f_107f1740();
  /* 107f0f1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0f20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f0f23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0f27 je 0x107f0f3c */
  if (C.zf) goto L_107f0f3c;
  /* 107f0f29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0f2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f0f31 push eax */
  push32((uint32_t)(EAX));
  /* 107f0f32 call dword ptr [0x108132c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132c8))), 0x107f0f38u);
  /* 107f0f38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0f3a jne 0x107f0f43 */
  if (!C.zf) goto L_107f0f43;
L_107f0f3c:;
  /* 107f0f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0f3e jmp 0x107f0fec */
  goto L_107f0fec;
L_107f0f43:;
  /* 107f0f43 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f0f45 mov ecx, dword ptr [0x10810874] */
  ECX = (r32((uint32_t)(0x10810874)));
  /* 107f0f4b push ecx */
  push32((uint32_t)(ECX));
  /* 107f0f4c call dword ptr [0x108132d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132d8))), 0x107f0f52u);
  /* 107f0f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0f54 jne 0x107f0f5d */
  if (!C.zf) goto L_107f0f5d;
  /* 107f0f56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0f58 jmp 0x107f0fec */
  goto L_107f0fec;
L_107f0f5d:;
  /* 107f0f5d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0f61 je 0x107f0f88 */
  if (C.zf) goto L_107f0f88;
  /* 107f0f63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f0f66 mov ax, word ptr [0x10810874] */
  AX = (r16((uint32_t)(0x10810874)));
  /* 107f0f6c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 107f0f6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f0f72 mov dx, word ptr [0x10810890] */
  DX = (r16((uint32_t)(0x10810890)));
  /* 107f0f79 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 107f0f7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f0f80 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 107f0f84 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_107f0f88:;
  /* 107f0f88 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f0f8c je 0x107f0fe7 */
  if (C.zf) goto L_107f0fe7;
  /* 107f0f8e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107f0f90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f0f93 push edx */
  push32((uint32_t)(EDX));
  /* 107f0f94 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 107f0f99 mov eax, dword ptr [0x10810874] */
  EAX = (r32((uint32_t)(0x10810874)));
  /* 107f0f9e push eax */
  push32((uint32_t)(EAX));
  /* 107f0f9f call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f0fa5u);
  /* 107f0fa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0fa7 jne 0x107f0fad */
  if (!C.zf) goto L_107f0fad;
  /* 107f0fa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0fab jmp 0x107f0fec */
  goto L_107f0fec;
L_107f0fad:;
  /* 107f0fad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107f0faf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f0fb2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 107f0fb6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 107f0fbb mov edx, dword ptr [0x10810890] */
  EDX = (r32((uint32_t)(0x10810890)));
  /* 107f0fc1 push edx */
  push32((uint32_t)(EDX));
  /* 107f0fc2 call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f0fc8u);
  /* 107f0fc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f0fca jne 0x107f0fd0 */
  if (!C.zf) goto L_107f0fd0;
  /* 107f0fcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f0fce jmp 0x107f0fec */
  goto L_107f0fec;
L_107f0fd0:;
  /* 107f0fd0 push 0xa */
  push32((uint32_t)(0xau));
  /* 107f0fd2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f0fd5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f0fda push eax */
  push32((uint32_t)(EAX));
  /* 107f0fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f0fde push ecx */
  push32((uint32_t)(ECX));
  /* 107f0fdf call 0x107e7b50 */
  push32(0x107f0fe4u); f_107e7b50();
  /* 107f0fe4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f0fe7:;
  /* 107f0fe7 mov eax, 1 */
  EAX = (0x1u);
L_107f0fec:;
  /* 107f0fec mov esp, ebp */
  ESP = (EBP);
  /* 107f0fee pop ebp */
  EBP = (pop32());
  /* 107f0fef ret  */
  ESPCHK(0x107f0df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ff0 @ 0x107f0ff0 (130 bytes, 47 insns) */
void f_107f0ff0(void) {
  FTRACE(0x107f0ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f0ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f0ff1 mov ebp, esp */
  EBP = (ESP);
  /* 107f0ff3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f0ff6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 107f0ffd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_107f1004:;
  /* 107f1004 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1007 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f100a jg 0x107f106e */
  if ((!C.zf&&C.sf==C.of)) goto L_107f106e;
  /* 107f100c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1010 je 0x107f106e */
  if (C.zf) goto L_107f106e;
  /* 107f1012 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1015 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1018 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f1019 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f101b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107f101d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f1020 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1026 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 107f1029 push eax */
  push32((uint32_t)(EAX));
  /* 107f102a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f102d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107f102f push edx */
  push32((uint32_t)(EDX));
  /* 107f1030 call 0x107f36e0 */
  push32(0x107f1035u); f_107f36e0();
  /* 107f1035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1038 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f103b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f103f jne 0x107f1052 */
  if (!C.zf) goto L_107f1052;
  /* 107f1041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1044 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1047 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 107f104b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f104e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107f1050 jmp 0x107f106c */
  goto L_107f106c;
L_107f1052:;
  /* 107f1052 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1056 jge 0x107f1063 */
  if ((C.sf==C.of)) goto L_107f1063;
  /* 107f1058 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f105b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f105e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107f1061 jmp 0x107f106c */
  goto L_107f106c;
L_107f1063:;
  /* 107f1063 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1066 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1069 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_107f106c:;
  /* 107f106c jmp 0x107f1004 */
  goto L_107f1004;
L_107f106e:;
  /* 107f106e mov esp, ebp */
  ESP = (EBP);
  /* 107f1070 pop ebp */
  EBP = (pop32());
  /* 107f1071 ret  */
  ESPCHK(0x107f0ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011080 @ 0x107f1080 (186 bytes, 50 insns) */
void f_107f1080(void) {
  FTRACE(0x107f1080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1080 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1081 mov ebp, esp */
  EBP = (ESP);
  /* 107f1083 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1084 mov eax, dword ptr [0x10810884] */
  EAX = (r32((uint32_t)(0x10810884)));
  /* 107f1089 push eax */
  push32((uint32_t)(EAX));
  /* 107f108a call 0x107e7e40 */
  push32(0x107f108fu); f_107e7e40();
  /* 107f108f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1092 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f1094 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1097 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107f109a mov dword ptr [0x10810880], ecx */
  w32((uint32_t)(0x10810880), (ECX));
  /* 107f10a0 mov edx, dword ptr [0x10810888] */
  EDX = (r32((uint32_t)(0x10810888)));
  /* 107f10a6 push edx */
  push32((uint32_t)(EDX));
  /* 107f10a7 call 0x107e7e40 */
  push32(0x107f10acu); f_107e7e40();
  /* 107f10ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f10af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f10b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f10b4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107f10b7 mov dword ptr [0x10810878], ecx */
  w32((uint32_t)(0x10810878), (ECX));
  /* 107f10bd mov dword ptr [0x10810874], 0 */
  w32((uint32_t)(0x10810874), (0x0u));
  /* 107f10c7 cmp dword ptr [0x10810880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f10ce je 0x107f10d9 */
  if (C.zf) goto L_107f10d9;
  /* 107f10d0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 107f10d7 jmp 0x107f10eb */
  goto L_107f10eb;
L_107f10d9:;
  /* 107f10d9 mov edx, dword ptr [0x10810884] */
  EDX = (r32((uint32_t)(0x10810884)));
  /* 107f10df push edx */
  push32((uint32_t)(EDX));
  /* 107f10e0 call 0x107f1b20 */
  push32(0x107f10e5u); f_107f1b20();
  /* 107f10e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f10e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107f10eb:;
  /* 107f10eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f10ee mov dword ptr [0x1081087c], eax */
  w32((uint32_t)(0x1081087c), (EAX));
  /* 107f10f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f10f5 push 0x107f1140 */
  push32((uint32_t)(0x107f1140u));
  /* 107f10fa call dword ptr [0x108132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132cc))), 0x107f1100u);
  /* 107f1100 mov ecx, dword ptr [0x1081088c] */
  ECX = (r32((uint32_t)(0x1081088c)));
  /* 107f1106 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 107f110c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f110e je 0x107f112c */
  if (C.zf) goto L_107f112c;
  /* 107f1110 mov edx, dword ptr [0x1081088c] */
  EDX = (r32((uint32_t)(0x1081088c)));
  /* 107f1116 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 107f111c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f111e je 0x107f112c */
  if (C.zf) goto L_107f112c;
  /* 107f1120 mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f1125 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 107f1128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f112a jne 0x107f1136 */
  if (!C.zf) goto L_107f1136;
L_107f112c:;
  /* 107f112c mov dword ptr [0x1081088c], 0 */
  w32((uint32_t)(0x1081088c), (0x0u));
L_107f1136:;
  /* 107f1136 mov esp, ebp */
  ESP = (EBP);
  /* 107f1138 pop ebp */
  EBP = (pop32());
  /* 107f1139 ret  */
  ESPCHK(0x107f1080u, _esp0);
  ESP += 4; return;
}

/* FUN_10011140 @ 0x107f1140 (804 bytes, 220 insns) */
void f_107f1140(void) {
  FTRACE(0x107f1140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1140 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1141 mov ebp, esp */
  EBP = (ESP);
  /* 107f1143 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1149 push eax */
  push32((uint32_t)(EAX));
  /* 107f114a call 0x107f1aa0 */
  push32(0x107f114fu); f_107f1aa0();
  /* 107f114f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1152 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 107f1155 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107f1157 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107f115a push ecx */
  push32((uint32_t)(ECX));
  /* 107f115b mov edx, dword ptr [0x10810878] */
  EDX = (r32((uint32_t)(0x10810878)));
  /* 107f1161 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f1163 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1165 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 107f116b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1171 push edx */
  push32((uint32_t)(EDX));
  /* 107f1172 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1175 push eax */
  push32((uint32_t)(EAX));
  /* 107f1176 call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f117cu);
  /* 107f117c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f117e jne 0x107f1194 */
  if (!C.zf) goto L_107f1194;
  /* 107f1180 mov dword ptr [0x1081088c], 0 */
  w32((uint32_t)(0x1081088c), (0x0u));
  /* 107f118a mov eax, 1 */
  EAX = (0x1u);
  /* 107f118f jmp 0x107f145e */
  goto L_107f145e;
L_107f1194:;
  /* 107f1194 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107f1197 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1198 mov edx, dword ptr [0x10810888] */
  EDX = (r32((uint32_t)(0x10810888)));
  /* 107f119e push edx */
  push32((uint32_t)(EDX));
  /* 107f119f call 0x107f36e0 */
  push32(0x107f11a4u); f_107f36e0();
  /* 107f11a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f11a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f11a9 jne 0x107f12cf */
  if (!C.zf) goto L_107f12cf;
  /* 107f11af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107f11b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107f11b4 push eax */
  push32((uint32_t)(EAX));
  /* 107f11b5 mov ecx, dword ptr [0x10810880] */
  ECX = (r32((uint32_t)(0x10810880)));
  /* 107f11bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f11bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f11bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 107f11c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f11cb push ecx */
  push32((uint32_t)(ECX));
  /* 107f11cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f11cf push edx */
  push32((uint32_t)(EDX));
  /* 107f11d0 call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f11d6u);
  /* 107f11d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f11d8 jne 0x107f11ee */
  if (!C.zf) goto L_107f11ee;
  /* 107f11da mov dword ptr [0x1081088c], 0 */
  w32((uint32_t)(0x1081088c), (0x0u));
  /* 107f11e4 mov eax, 1 */
  EAX = (0x1u);
  /* 107f11e9 jmp 0x107f145e */
  goto L_107f145e;
L_107f11ee:;
  /* 107f11ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107f11f1 push eax */
  push32((uint32_t)(EAX));
  /* 107f11f2 mov ecx, dword ptr [0x10810884] */
  ECX = (r32((uint32_t)(0x10810884)));
  /* 107f11f8 push ecx */
  push32((uint32_t)(ECX));
  /* 107f11f9 call 0x107f36e0 */
  push32(0x107f11feu); f_107f36e0();
  /* 107f11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1203 jne 0x107f1230 */
  if (!C.zf) goto L_107f1230;
  /* 107f1205 mov edx, dword ptr [0x1081088c] */
  EDX = (r32((uint32_t)(0x1081088c)));
  /* 107f120b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 107f1211 mov dword ptr [0x1081088c], edx */
  w32((uint32_t)(0x1081088c), (EDX));
  /* 107f1217 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f121a mov dword ptr [0x10810890], eax */
  w32((uint32_t)(0x10810890), (EAX));
  /* 107f121f mov ecx, dword ptr [0x10810890] */
  ECX = (r32((uint32_t)(0x10810890)));
  /* 107f1225 mov dword ptr [0x10810874], ecx */
  w32((uint32_t)(0x10810874), (ECX));
  /* 107f122b jmp 0x107f12cf */
  goto L_107f12cf;
L_107f1230:;
  /* 107f1230 mov edx, dword ptr [0x1081088c] */
  EDX = (r32((uint32_t)(0x1081088c)));
  /* 107f1236 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 107f1239 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f123b jne 0x107f12cf */
  if (!C.zf) goto L_107f12cf;
  /* 107f1241 cmp dword ptr [0x1081087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1248 je 0x107f129d */
  if (C.zf) goto L_107f129d;
  /* 107f124a mov eax, dword ptr [0x1081087c] */
  EAX = (r32((uint32_t)(0x1081087c)));
  /* 107f124f push eax */
  push32((uint32_t)(EAX));
  /* 107f1250 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107f1253 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1254 mov edx, dword ptr [0x10810884] */
  EDX = (r32((uint32_t)(0x10810884)));
  /* 107f125a push edx */
  push32((uint32_t)(EDX));
  /* 107f125b call 0x107f37b0 */
  push32(0x107f1260u); f_107f37b0();
  /* 107f1260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1263 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1265 jne 0x107f129d */
  if (!C.zf) goto L_107f129d;
  /* 107f1267 mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f126c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 107f126e mov dword ptr [0x1081088c], eax */
  w32((uint32_t)(0x1081088c), (EAX));
  /* 107f1273 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1276 mov dword ptr [0x10810890], ecx */
  w32((uint32_t)(0x10810890), (ECX));
  /* 107f127c mov edx, dword ptr [0x10810884] */
  EDX = (r32((uint32_t)(0x10810884)));
  /* 107f1282 push edx */
  push32((uint32_t)(EDX));
  /* 107f1283 call 0x107e7e40 */
  push32(0x107f1288u); f_107e7e40();
  /* 107f1288 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f128b cmp eax, dword ptr [0x1081087c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081087c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1291 jne 0x107f129b */
  if (!C.zf) goto L_107f129b;
  /* 107f1293 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1296 mov dword ptr [0x10810874], eax */
  w32((uint32_t)(0x10810874), (EAX));
L_107f129b:;
  /* 107f129b jmp 0x107f12cf */
  goto L_107f12cf;
L_107f129d:;
  /* 107f129d mov ecx, dword ptr [0x1081088c] */
  ECX = (r32((uint32_t)(0x1081088c)));
  /* 107f12a3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107f12a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f12a8 jne 0x107f12cf */
  if (!C.zf) goto L_107f12cf;
  /* 107f12aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f12ad push edx */
  push32((uint32_t)(EDX));
  /* 107f12ae call 0x107f17e0 */
  push32(0x107f12b3u); f_107f17e0();
  /* 107f12b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f12b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f12b8 je 0x107f12cf */
  if (C.zf) goto L_107f12cf;
  /* 107f12ba mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f12bf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 107f12c1 mov dword ptr [0x1081088c], eax */
  w32((uint32_t)(0x1081088c), (EAX));
  /* 107f12c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f12c9 mov dword ptr [0x10810890], ecx */
  w32((uint32_t)(0x10810890), (ECX));
L_107f12cf:;
  /* 107f12cf mov edx, dword ptr [0x1081088c] */
  EDX = (r32((uint32_t)(0x1081088c)));
  /* 107f12d5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 107f12db cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f12e1 je 0x107f1451 */
  if (C.zf) goto L_107f1451;
  /* 107f12e7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107f12e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107f12ec push eax */
  push32((uint32_t)(EAX));
  /* 107f12ed mov ecx, dword ptr [0x10810880] */
  ECX = (r32((uint32_t)(0x10810880)));
  /* 107f12f3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f12f5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f12f7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 107f12fd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1303 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1304 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1307 push edx */
  push32((uint32_t)(EDX));
  /* 107f1308 call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f130eu);
  /* 107f130e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1310 jne 0x107f1326 */
  if (!C.zf) goto L_107f1326;
  /* 107f1312 mov dword ptr [0x1081088c], 0 */
  w32((uint32_t)(0x1081088c), (0x0u));
  /* 107f131c mov eax, 1 */
  EAX = (0x1u);
  /* 107f1321 jmp 0x107f145e */
  goto L_107f145e;
L_107f1326:;
  /* 107f1326 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107f1329 push eax */
  push32((uint32_t)(EAX));
  /* 107f132a mov ecx, dword ptr [0x10810884] */
  ECX = (r32((uint32_t)(0x10810884)));
  /* 107f1330 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1331 call 0x107f36e0 */
  push32(0x107f1336u); f_107f36e0();
  /* 107f1336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f133b jne 0x107f13f0 */
  if (!C.zf) goto L_107f13f0;
  /* 107f1341 mov edx, dword ptr [0x1081088c] */
  EDX = (r32((uint32_t)(0x1081088c)));
  /* 107f1347 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 107f134a mov dword ptr [0x1081088c], edx */
  w32((uint32_t)(0x1081088c), (EDX));
  /* 107f1350 cmp dword ptr [0x10810880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1357 je 0x107f137a */
  if (C.zf) goto L_107f137a;
  /* 107f1359 mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f135e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 107f1361 mov dword ptr [0x1081088c], eax */
  w32((uint32_t)(0x1081088c), (EAX));
  /* 107f1366 cmp dword ptr [0x10810874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f136d jne 0x107f1378 */
  if (!C.zf) goto L_107f1378;
  /* 107f136f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1372 mov dword ptr [0x10810874], ecx */
  w32((uint32_t)(0x10810874), (ECX));
L_107f1378:;
  /* 107f1378 jmp 0x107f13ee */
  goto L_107f13ee;
L_107f137a:;
  /* 107f137a cmp dword ptr [0x1081087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1381 je 0x107f13cf */
  if (C.zf) goto L_107f13cf;
  /* 107f1383 mov edx, dword ptr [0x10810884] */
  EDX = (r32((uint32_t)(0x10810884)));
  /* 107f1389 push edx */
  push32((uint32_t)(EDX));
  /* 107f138a call 0x107e7e40 */
  push32(0x107f138fu); f_107e7e40();
  /* 107f138f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1392 cmp eax, dword ptr [0x1081087c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081087c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1398 jne 0x107f13cf */
  if (!C.zf) goto L_107f13cf;
  /* 107f139a push 1 */
  push32((uint32_t)(0x1u));
  /* 107f139c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f139f push eax */
  push32((uint32_t)(EAX));
  /* 107f13a0 call 0x107f1830 */
  push32(0x107f13a5u); f_107f1830();
  /* 107f13a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f13a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f13aa je 0x107f13cd */
  if (C.zf) goto L_107f13cd;
  /* 107f13ac mov ecx, dword ptr [0x1081088c] */
  ECX = (r32((uint32_t)(0x1081088c)));
  /* 107f13b2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 107f13b5 mov dword ptr [0x1081088c], ecx */
  w32((uint32_t)(0x1081088c), (ECX));
  /* 107f13bb cmp dword ptr [0x10810874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f13c2 jne 0x107f13cd */
  if (!C.zf) goto L_107f13cd;
  /* 107f13c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f13c7 mov dword ptr [0x10810874], edx */
  w32((uint32_t)(0x10810874), (EDX));
L_107f13cd:;
  /* 107f13cd jmp 0x107f13ee */
  goto L_107f13ee;
L_107f13cf:;
  /* 107f13cf mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f13d4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 107f13d7 mov dword ptr [0x1081088c], eax */
  w32((uint32_t)(0x1081088c), (EAX));
  /* 107f13dc cmp dword ptr [0x10810874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f13e3 jne 0x107f13ee */
  if (!C.zf) goto L_107f13ee;
  /* 107f13e5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f13e8 mov dword ptr [0x10810874], ecx */
  w32((uint32_t)(0x10810874), (ECX));
L_107f13ee:;
  /* 107f13ee jmp 0x107f1451 */
  goto L_107f1451;
L_107f13f0:;
  /* 107f13f0 cmp dword ptr [0x10810880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f13f7 jne 0x107f1451 */
  if (!C.zf) goto L_107f1451;
  /* 107f13f9 cmp dword ptr [0x1081087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1400 je 0x107f1451 */
  if (C.zf) goto L_107f1451;
  /* 107f1402 mov edx, dword ptr [0x1081087c] */
  EDX = (r32((uint32_t)(0x1081087c)));
  /* 107f1408 push edx */
  push32((uint32_t)(EDX));
  /* 107f1409 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 107f140c push eax */
  push32((uint32_t)(EAX));
  /* 107f140d mov ecx, dword ptr [0x10810884] */
  ECX = (r32((uint32_t)(0x10810884)));
  /* 107f1413 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1414 call 0x107f37b0 */
  push32(0x107f1419u); f_107f37b0();
  /* 107f1419 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f141c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f141e jne 0x107f1451 */
  if (!C.zf) goto L_107f1451;
  /* 107f1420 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f1422 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1425 push edx */
  push32((uint32_t)(EDX));
  /* 107f1426 call 0x107f1830 */
  push32(0x107f142bu); f_107f1830();
  /* 107f142b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f142e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1430 je 0x107f1451 */
  if (C.zf) goto L_107f1451;
  /* 107f1432 mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f1437 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 107f143a mov dword ptr [0x1081088c], eax */
  w32((uint32_t)(0x1081088c), (EAX));
  /* 107f143f cmp dword ptr [0x10810874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1446 jne 0x107f1451 */
  if (!C.zf) goto L_107f1451;
  /* 107f1448 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f144b mov dword ptr [0x10810874], ecx */
  w32((uint32_t)(0x10810874), (ECX));
L_107f1451:;
  /* 107f1451 mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f1456 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107f1459 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f145b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f145d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_107f145e:;
  /* 107f145e mov esp, ebp */
  ESP = (EBP);
  /* 107f1460 pop ebp */
  EBP = (pop32());
  /* 107f1461 ret 4 */
  ESPCHK(0x107f1140u, _esp0);
  ESP += 8; return;
}

/* FUN_10011470 @ 0x107f1470 (116 bytes, 33 insns) */
void f_107f1470(void) {
  FTRACE(0x107f1470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1470 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1471 mov ebp, esp */
  EBP = (ESP);
  /* 107f1473 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1474 mov eax, dword ptr [0x10810884] */
  EAX = (r32((uint32_t)(0x10810884)));
  /* 107f1479 push eax */
  push32((uint32_t)(EAX));
  /* 107f147a call 0x107e7e40 */
  push32(0x107f147fu); f_107e7e40();
  /* 107f147f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1482 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f1484 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1487 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107f148a mov dword ptr [0x10810880], ecx */
  w32((uint32_t)(0x10810880), (ECX));
  /* 107f1490 cmp dword ptr [0x10810880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1497 je 0x107f14a2 */
  if (C.zf) goto L_107f14a2;
  /* 107f1499 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 107f14a0 jmp 0x107f14b4 */
  goto L_107f14b4;
L_107f14a2:;
  /* 107f14a2 mov edx, dword ptr [0x10810884] */
  EDX = (r32((uint32_t)(0x10810884)));
  /* 107f14a8 push edx */
  push32((uint32_t)(EDX));
  /* 107f14a9 call 0x107f1b20 */
  push32(0x107f14aeu); f_107f1b20();
  /* 107f14ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f14b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107f14b4:;
  /* 107f14b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f14b7 mov dword ptr [0x1081087c], eax */
  w32((uint32_t)(0x1081087c), (EAX));
  /* 107f14bc push 1 */
  push32((uint32_t)(0x1u));
  /* 107f14be push 0x107f14f0 */
  push32((uint32_t)(0x107f14f0u));
  /* 107f14c3 call dword ptr [0x108132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132cc))), 0x107f14c9u);
  /* 107f14c9 mov ecx, dword ptr [0x1081088c] */
  ECX = (r32((uint32_t)(0x1081088c)));
  /* 107f14cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107f14d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f14d4 jne 0x107f14e0 */
  if (!C.zf) goto L_107f14e0;
  /* 107f14d6 mov dword ptr [0x1081088c], 0 */
  w32((uint32_t)(0x1081088c), (0x0u));
L_107f14e0:;
  /* 107f14e0 mov esp, ebp */
  ESP = (EBP);
  /* 107f14e2 pop ebp */
  EBP = (pop32());
  /* 107f14e3 ret  */
  ESPCHK(0x107f1470u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x107f14f0 (287 bytes, 86 insns) */
void f_107f14f0(void) {
  FTRACE(0x107f14f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f14f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f14f1 mov ebp, esp */
  EBP = (ESP);
  /* 107f14f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f14f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f14f9 push eax */
  push32((uint32_t)(EAX));
  /* 107f14fa call 0x107f1aa0 */
  push32(0x107f14ffu); f_107f1aa0();
  /* 107f14ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1502 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 107f1505 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107f1507 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107f150a push ecx */
  push32((uint32_t)(ECX));
  /* 107f150b mov edx, dword ptr [0x10810880] */
  EDX = (r32((uint32_t)(0x10810880)));
  /* 107f1511 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f1513 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1515 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 107f151b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1521 push edx */
  push32((uint32_t)(EDX));
  /* 107f1522 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1525 push eax */
  push32((uint32_t)(EAX));
  /* 107f1526 call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f152cu);
  /* 107f152c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f152e jne 0x107f1544 */
  if (!C.zf) goto L_107f1544;
  /* 107f1530 mov dword ptr [0x1081088c], 0 */
  w32((uint32_t)(0x1081088c), (0x0u));
  /* 107f153a mov eax, 1 */
  EAX = (0x1u);
  /* 107f153f jmp 0x107f1609 */
  goto L_107f1609;
L_107f1544:;
  /* 107f1544 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107f1547 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1548 mov edx, dword ptr [0x10810884] */
  EDX = (r32((uint32_t)(0x10810884)));
  /* 107f154e push edx */
  push32((uint32_t)(EDX));
  /* 107f154f call 0x107f36e0 */
  push32(0x107f1554u); f_107f36e0();
  /* 107f1554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1557 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1559 jne 0x107f1599 */
  if (!C.zf) goto L_107f1599;
  /* 107f155b cmp dword ptr [0x10810880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1562 jne 0x107f1576 */
  if (!C.zf) goto L_107f1576;
  /* 107f1564 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f1566 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1569 push eax */
  push32((uint32_t)(EAX));
  /* 107f156a call 0x107f1830 */
  push32(0x107f156fu); f_107f1830();
  /* 107f156f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1572 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1574 je 0x107f1597 */
  if (C.zf) goto L_107f1597;
L_107f1576:;
  /* 107f1576 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1579 mov dword ptr [0x10810890], ecx */
  w32((uint32_t)(0x10810890), (ECX));
  /* 107f157f mov edx, dword ptr [0x10810890] */
  EDX = (r32((uint32_t)(0x10810890)));
  /* 107f1585 mov dword ptr [0x10810874], edx */
  w32((uint32_t)(0x10810874), (EDX));
  /* 107f158b mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f1590 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 107f1592 mov dword ptr [0x1081088c], eax */
  w32((uint32_t)(0x1081088c), (EAX));
L_107f1597:;
  /* 107f1597 jmp 0x107f15fc */
  goto L_107f15fc;
L_107f1599:;
  /* 107f1599 cmp dword ptr [0x10810880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10810880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f15a0 jne 0x107f15fc */
  if (!C.zf) goto L_107f15fc;
  /* 107f15a2 cmp dword ptr [0x1081087c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1081087c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f15a9 je 0x107f15fc */
  if (C.zf) goto L_107f15fc;
  /* 107f15ab mov ecx, dword ptr [0x1081087c] */
  ECX = (r32((uint32_t)(0x1081087c)));
  /* 107f15b1 push ecx */
  push32((uint32_t)(ECX));
  /* 107f15b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 107f15b5 push edx */
  push32((uint32_t)(EDX));
  /* 107f15b6 mov eax, dword ptr [0x10810884] */
  EAX = (r32((uint32_t)(0x10810884)));
  /* 107f15bb push eax */
  push32((uint32_t)(EAX));
  /* 107f15bc call 0x107f37b0 */
  push32(0x107f15c1u); f_107f37b0();
  /* 107f15c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f15c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f15c6 jne 0x107f15fc */
  if (!C.zf) goto L_107f15fc;
  /* 107f15c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f15ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f15cd push ecx */
  push32((uint32_t)(ECX));
  /* 107f15ce call 0x107f1830 */
  push32(0x107f15d3u); f_107f1830();
  /* 107f15d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f15d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f15d8 je 0x107f15fc */
  if (C.zf) goto L_107f15fc;
  /* 107f15da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f15dd mov dword ptr [0x10810890], edx */
  w32((uint32_t)(0x10810890), (EDX));
  /* 107f15e3 mov eax, dword ptr [0x10810890] */
  EAX = (r32((uint32_t)(0x10810890)));
  /* 107f15e8 mov dword ptr [0x10810874], eax */
  w32((uint32_t)(0x10810874), (EAX));
  /* 107f15ed mov ecx, dword ptr [0x1081088c] */
  ECX = (r32((uint32_t)(0x1081088c)));
  /* 107f15f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107f15f6 mov dword ptr [0x1081088c], ecx */
  w32((uint32_t)(0x1081088c), (ECX));
L_107f15fc:;
  /* 107f15fc mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f1601 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107f1604 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f1606 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1608 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_107f1609:;
  /* 107f1609 mov esp, ebp */
  ESP = (EBP);
  /* 107f160b pop ebp */
  EBP = (pop32());
  /* 107f160c ret 4 */
  ESPCHK(0x107f14f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011610 @ 0x107f1610 (69 bytes, 20 insns) */
void f_107f1610(void) {
  FTRACE(0x107f1610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1610 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1611 mov ebp, esp */
  EBP = (ESP);
  /* 107f1613 mov eax, dword ptr [0x10810888] */
  EAX = (r32((uint32_t)(0x10810888)));
  /* 107f1618 push eax */
  push32((uint32_t)(EAX));
  /* 107f1619 call 0x107e7e40 */
  push32(0x107f161eu); f_107e7e40();
  /* 107f161e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1621 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f1623 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1626 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107f1629 mov dword ptr [0x10810878], ecx */
  w32((uint32_t)(0x10810878), (ECX));
  /* 107f162f push 1 */
  push32((uint32_t)(0x1u));
  /* 107f1631 push 0x107f1660 */
  push32((uint32_t)(0x107f1660u));
  /* 107f1636 call dword ptr [0x108132cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132cc))), 0x107f163cu);
  /* 107f163c mov edx, dword ptr [0x1081088c] */
  EDX = (r32((uint32_t)(0x1081088c)));
  /* 107f1642 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 107f1645 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f1647 jne 0x107f1653 */
  if (!C.zf) goto L_107f1653;
  /* 107f1649 mov dword ptr [0x1081088c], 0 */
  w32((uint32_t)(0x1081088c), (0x0u));
L_107f1653:;
  /* 107f1653 pop ebp */
  EBP = (pop32());
  /* 107f1654 ret  */
  ESPCHK(0x107f1610u, _esp0);
  ESP += 4; return;
}

/* FUN_10011660 @ 0x107f1660 (172 bytes, 54 insns) */
void f_107f1660(void) {
  FTRACE(0x107f1660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1660 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1661 mov ebp, esp */
  EBP = (ESP);
  /* 107f1663 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1669 push eax */
  push32((uint32_t)(EAX));
  /* 107f166a call 0x107f1aa0 */
  push32(0x107f166fu); f_107f1aa0();
  /* 107f166f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1672 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 107f1675 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107f1677 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107f167a push ecx */
  push32((uint32_t)(ECX));
  /* 107f167b mov edx, dword ptr [0x10810878] */
  EDX = (r32((uint32_t)(0x10810878)));
  /* 107f1681 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f1683 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1685 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 107f168b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1691 push edx */
  push32((uint32_t)(EDX));
  /* 107f1692 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f1695 push eax */
  push32((uint32_t)(EAX));
  /* 107f1696 call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f169cu);
  /* 107f169c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f169e jne 0x107f16b1 */
  if (!C.zf) goto L_107f16b1;
  /* 107f16a0 mov dword ptr [0x1081088c], 0 */
  w32((uint32_t)(0x1081088c), (0x0u));
  /* 107f16aa mov eax, 1 */
  EAX = (0x1u);
  /* 107f16af jmp 0x107f1706 */
  goto L_107f1706;
L_107f16b1:;
  /* 107f16b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107f16b4 push ecx */
  push32((uint32_t)(ECX));
  /* 107f16b5 mov edx, dword ptr [0x10810888] */
  EDX = (r32((uint32_t)(0x10810888)));
  /* 107f16bb push edx */
  push32((uint32_t)(EDX));
  /* 107f16bc call 0x107f36e0 */
  push32(0x107f16c1u); f_107f36e0();
  /* 107f16c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f16c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f16c6 jne 0x107f16f9 */
  if (!C.zf) goto L_107f16f9;
  /* 107f16c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f16cb push eax */
  push32((uint32_t)(EAX));
  /* 107f16cc call 0x107f17e0 */
  push32(0x107f16d1u); f_107f17e0();
  /* 107f16d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f16d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f16d6 je 0x107f16f9 */
  if (C.zf) goto L_107f16f9;
  /* 107f16d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107f16db mov dword ptr [0x10810890], ecx */
  w32((uint32_t)(0x10810890), (ECX));
  /* 107f16e1 mov edx, dword ptr [0x10810890] */
  EDX = (r32((uint32_t)(0x10810890)));
  /* 107f16e7 mov dword ptr [0x10810874], edx */
  w32((uint32_t)(0x10810874), (EDX));
  /* 107f16ed mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f16f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 107f16f4 mov dword ptr [0x1081088c], eax */
  w32((uint32_t)(0x1081088c), (EAX));
L_107f16f9:;
  /* 107f16f9 mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f16fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107f1701 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107f1703 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1705 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_107f1706:;
  /* 107f1706 mov esp, ebp */
  ESP = (EBP);
  /* 107f1708 pop ebp */
  EBP = (pop32());
  /* 107f1709 ret 4 */
  ESPCHK(0x107f1660u, _esp0);
  ESP += 8; return;
}

/* FUN_10011710 @ 0x107f1710 (43 bytes, 11 insns) */
void f_107f1710(void) {
  FTRACE(0x107f1710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1710 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1711 mov ebp, esp */
  EBP = (ESP);
  /* 107f1713 mov eax, dword ptr [0x1081088c] */
  EAX = (r32((uint32_t)(0x1081088c)));
  /* 107f1718 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 107f171d mov dword ptr [0x1081088c], eax */
  w32((uint32_t)(0x1081088c), (EAX));
  /* 107f1722 call dword ptr [0x108132bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132bc))), 0x107f1728u);
  /* 107f1728 mov dword ptr [0x10810890], eax */
  w32((uint32_t)(0x10810890), (EAX));
  /* 107f172d mov ecx, dword ptr [0x10810890] */
  ECX = (r32((uint32_t)(0x10810890)));
  /* 107f1733 mov dword ptr [0x10810874], ecx */
  w32((uint32_t)(0x10810874), (ECX));
  /* 107f1739 pop ebp */
  EBP = (pop32());
  /* 107f173a ret  */
  ESPCHK(0x107f1710u, _esp0);
  ESP += 4; return;
}

/* FUN_10011740 @ 0x107f1740 (155 bytes, 57 insns) */
void f_107f1740(void) {
  FTRACE(0x107f1740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1740 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1741 mov ebp, esp */
  EBP = (ESP);
  /* 107f1743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1746 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f174a je 0x107f176b */
  if (C.zf) goto L_107f176b;
  /* 107f174c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f174f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107f1752 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f1754 je 0x107f176b */
  if (C.zf) goto L_107f176b;
  /* 107f1756 push 0x1080c9fc */
  push32((uint32_t)(0x1080c9fcu));
  /* 107f175b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f175e push edx */
  push32((uint32_t)(EDX));
  /* 107f175f call 0x107f0ca0 */
  push32(0x107f1764u); f_107f0ca0();
  /* 107f1764 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1767 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1769 jne 0x107f1793 */
  if (!C.zf) goto L_107f1793;
L_107f176b:;
  /* 107f176b push 8 */
  push32((uint32_t)(0x8u));
  /* 107f176d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107f1770 push eax */
  push32((uint32_t)(EAX));
  /* 107f1771 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 107f1776 mov ecx, dword ptr [0x10810890] */
  ECX = (r32((uint32_t)(0x10810890)));
  /* 107f177c push ecx */
  push32((uint32_t)(ECX));
  /* 107f177d call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f1783u);
  /* 107f1783 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1785 jne 0x107f178b */
  if (!C.zf) goto L_107f178b;
  /* 107f1787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f1789 jmp 0x107f17d7 */
  goto L_107f17d7;
L_107f178b:;
  /* 107f178b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 107f178e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107f1791 jmp 0x107f17cb */
  goto L_107f17cb;
L_107f1793:;
  /* 107f1793 push 0x1080c9f8 */
  push32((uint32_t)(0x1080c9f8u));
  /* 107f1798 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f179b push eax */
  push32((uint32_t)(EAX));
  /* 107f179c call 0x107f0ca0 */
  push32(0x107f17a1u); f_107f0ca0();
  /* 107f17a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f17a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f17a6 jne 0x107f17cb */
  if (!C.zf) goto L_107f17cb;
  /* 107f17a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 107f17aa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 107f17ad push ecx */
  push32((uint32_t)(ECX));
  /* 107f17ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 107f17b0 mov edx, dword ptr [0x10810890] */
  EDX = (r32((uint32_t)(0x10810890)));
  /* 107f17b6 push edx */
  push32((uint32_t)(EDX));
  /* 107f17b7 call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f17bdu);
  /* 107f17bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f17bf jne 0x107f17c5 */
  if (!C.zf) goto L_107f17c5;
  /* 107f17c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f17c3 jmp 0x107f17d7 */
  goto L_107f17d7;
L_107f17c5:;
  /* 107f17c5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107f17c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107f17cb:;
  /* 107f17cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f17ce push ecx */
  push32((uint32_t)(ECX));
  /* 107f17cf call 0x107f38c0 */
  push32(0x107f17d4u); f_107f38c0();
  /* 107f17d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107f17d7:;
  /* 107f17d7 mov esp, ebp */
  ESP = (EBP);
  /* 107f17d9 pop ebp */
  EBP = (pop32());
  /* 107f17da ret  */
  ESPCHK(0x107f1740u, _esp0);
  ESP += 4; return;
}

/* FUN_100117e0 @ 0x107f17e0 (79 bytes, 26 insns) */
void f_107f17e0(void) {
  FTRACE(0x107f17e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f17e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f17e1 mov ebp, esp */
  EBP = (ESP);
  /* 107f17e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f17e6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 107f17ea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 107f17ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107f17f5 jmp 0x107f1800 */
  goto L_107f1800;
L_107f17f7:;
  /* 107f17f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f17fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f17fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107f1800:;
  /* 107f1800 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1804 jae 0x107f1826 */
  if (!C.cf) goto L_107f1826;
  /* 107f1806 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1809 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107f180f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f1812 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107f1814 mov cx, word ptr [eax*2 + 0x1080f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1080f9c4)));
  /* 107f181c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f181e jne 0x107f1824 */
  if (!C.zf) goto L_107f1824;
  /* 107f1820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f1822 jmp 0x107f182b */
  goto L_107f182b;
L_107f1824:;
  /* 107f1824 jmp 0x107f17f7 */
  goto L_107f17f7;
L_107f1826:;
  /* 107f1826 mov eax, 1 */
  EAX = (0x1u);
L_107f182b:;
  /* 107f182b mov esp, ebp */
  ESP = (EBP);
  /* 107f182d pop ebp */
  EBP = (pop32());
  /* 107f182e ret  */
  ESPCHK(0x107f17e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011830 @ 0x107f1830 (135 bytes, 48 insns) */
void f_107f1830(void) {
  FTRACE(0x107f1830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1830 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1831 mov ebp, esp */
  EBP = (ESP);
  /* 107f1833 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1836 push esi */
  push32((uint32_t)(ESI));
  /* 107f1837 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f183a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f183f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f1844 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f1849 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 107f184c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f1851 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f1854 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 107f1856 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 107f1859 push ecx */
  push32((uint32_t)(ECX));
  /* 107f185a push 1 */
  push32((uint32_t)(0x1u));
  /* 107f185c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f185f push edx */
  push32((uint32_t)(EDX));
  /* 107f1860 call dword ptr [0x10810894] */
  call_ind((uint32_t)(r32((uint32_t)(0x10810894))), 0x107f1866u);
  /* 107f1866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1868 jne 0x107f186e */
  if (!C.zf) goto L_107f186e;
  /* 107f186a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f186c jmp 0x107f18b2 */
  goto L_107f18b2;
L_107f186e:;
  /* 107f186e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 107f1871 push eax */
  push32((uint32_t)(EAX));
  /* 107f1872 call 0x107f1aa0 */
  push32(0x107f1877u); f_107f1aa0();
  /* 107f1877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f187a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f187d je 0x107f18ad */
  if (C.zf) goto L_107f18ad;
  /* 107f187f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1883 je 0x107f18ad */
  if (C.zf) goto L_107f18ad;
  /* 107f1885 mov ecx, dword ptr [0x10810884] */
  ECX = (r32((uint32_t)(0x10810884)));
  /* 107f188b push ecx */
  push32((uint32_t)(ECX));
  /* 107f188c call 0x107f1b20 */
  push32(0x107f1891u); f_107f1b20();
  /* 107f1891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1894 mov esi, eax */
  ESI = (EAX);
  /* 107f1896 mov edx, dword ptr [0x10810884] */
  EDX = (r32((uint32_t)(0x10810884)));
  /* 107f189c push edx */
  push32((uint32_t)(EDX));
  /* 107f189d call 0x107e7e40 */
  push32(0x107f18a2u); f_107e7e40();
  /* 107f18a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f18a5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f18a7 jne 0x107f18ad */
  if (!C.zf) goto L_107f18ad;
  /* 107f18a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f18ab jmp 0x107f18b2 */
  goto L_107f18b2;
L_107f18ad:;
  /* 107f18ad mov eax, 1 */
  EAX = (0x1u);
L_107f18b2:;
  /* 107f18b2 pop esi */
  ESI = (pop32());
  /* 107f18b3 mov esp, ebp */
  ESP = (EBP);
  /* 107f18b5 pop ebp */
  EBP = (pop32());
  /* 107f18b6 ret  */
  ESPCHK(0x107f1830u, _esp0);
  ESP += 4; return;
}

/* FUN_100118c0 @ 0x107f18c0 (77 bytes, 18 insns) */
void f_107f18c0(void) {
  FTRACE(0x107f18c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f18c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f18c1 mov ebp, esp */
  EBP = (ESP);
  /* 107f18c3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f18c9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 107f18d3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 107f18d9 push eax */
  push32((uint32_t)(EAX));
  /* 107f18da call dword ptr [0x108132b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132b8))), 0x107f18e0u);
  /* 107f18e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f18e2 je 0x107f18f9 */
  if (C.zf) goto L_107f18f9;
  /* 107f18e4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f18eb jne 0x107f18f9 */
  if (!C.zf) goto L_107f18f9;
  /* 107f18ed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 107f18f7 jmp 0x107f1903 */
  goto L_107f1903;
L_107f18f9:;
  /* 107f18f9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_107f1903:;
  /* 107f1903 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 107f1909 mov esp, ebp */
  ESP = (EBP);
  /* 107f190b pop ebp */
  EBP = (pop32());
  /* 107f190c ret  */
  ESPCHK(0x107f18c0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x107f1910 (388 bytes, 118 insns) */
void f_107f1910(void) {
  FTRACE(0x107f1910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1910 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1911 mov ebp, esp */
  EBP = (ESP);
  /* 107f1913 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1916 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 107f191d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 107f1924 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_107f192b:;
  /* 107f192b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f192e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1931 jg 0x107f1a78 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f1a78;
  /* 107f1937 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107f193a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f193d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 107f193e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1940 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107f1942 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 107f1945 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1948 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f194b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f194e cmp edx, dword ptr [ecx + 0x1080f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1080f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1954 jne 0x107f1a4e */
  if (!C.zf) goto L_107f1a4e;
  /* 107f195a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f195d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 107f1960 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1964 ja 0x107f1987 */
  if ((!C.cf&&!C.zf)) goto L_107f1987;
  /* 107f1966 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f196a je 0x107f19f9 */
  if (C.zf) goto L_107f19f9;
  /* 107f1970 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1974 je 0x107f19a4 */
  if (C.zf) goto L_107f19a4;
  /* 107f1976 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f197a je 0x107f19c6 */
  if (C.zf) goto L_107f19c6;
  /* 107f197c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1980 je 0x107f19e8 */
  if (C.zf) goto L_107f19e8;
  /* 107f1982 jmp 0x107f1a18 */
  goto L_107f1a18;
L_107f1987:;
  /* 107f1987 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f198e je 0x107f19b5 */
  if (C.zf) goto L_107f19b5;
  /* 107f1990 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1997 je 0x107f19d7 */
  if (C.zf) goto L_107f19d7;
  /* 107f1999 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f19a0 je 0x107f1a0a */
  if (C.zf) goto L_107f1a0a;
  /* 107f19a2 jmp 0x107f1a18 */
  goto L_107f1a18;
L_107f19a4:;
  /* 107f19a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f19a7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f19aa add ecx, 0x1080f524 */
  { uint32_t _a=(ECX),_b=(0x1080f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f19b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f19b3 jmp 0x107f1a18 */
  goto L_107f1a18;
L_107f19b5:;
  /* 107f19b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f19b8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f19bb mov eax, dword ptr [edx + 0x1080f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1080f52c)));
  /* 107f19c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f19c4 jmp 0x107f1a18 */
  goto L_107f1a18;
L_107f19c6:;
  /* 107f19c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f19c9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f19cc add ecx, 0x1080f530 */
  { uint32_t _a=(ECX),_b=(0x1080f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f19d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f19d5 jmp 0x107f1a18 */
  goto L_107f1a18;
L_107f19d7:;
  /* 107f19d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f19da imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f19dd mov eax, dword ptr [edx + 0x1080f534] */
  EAX = (r32((uint32_t)(EDX + 0x1080f534)));
  /* 107f19e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107f19e6 jmp 0x107f1a18 */
  goto L_107f1a18;
L_107f19e8:;
  /* 107f19e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f19eb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f19ee add ecx, 0x1080f538 */
  { uint32_t _a=(ECX),_b=(0x1080f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f19f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f19f7 jmp 0x107f1a18 */
  goto L_107f1a18;
L_107f19f9:;
  /* 107f19f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f19fc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f19ff add edx, 0x1080f53c */
  { uint32_t _a=(EDX),_b=(0x1080f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1a05 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107f1a08 jmp 0x107f1a18 */
  goto L_107f1a18;
L_107f1a0a:;
  /* 107f1a0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1a0d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f1a10 add eax, 0x1080f544 */
  { uint32_t _a=(EAX),_b=(0x1080f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1a15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_107f1a18:;
  /* 107f1a18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1a1c je 0x107f1a24 */
  if (C.zf) goto L_107f1a24;
  /* 107f1a1e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1a22 jge 0x107f1a26 */
  if ((C.sf==C.of)) goto L_107f1a26;
L_107f1a24:;
  /* 107f1a24 jmp 0x107f1a78 */
  goto L_107f1a78;
L_107f1a26:;
  /* 107f1a26 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f1a29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1a2c push ecx */
  push32((uint32_t)(ECX));
  /* 107f1a2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f1a30 push edx */
  push32((uint32_t)(EDX));
  /* 107f1a31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f1a34 push eax */
  push32((uint32_t)(EAX));
  /* 107f1a35 call 0x107e8830 */
  push32(0x107f1a3au); f_107e8830();
  /* 107f1a3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1a3d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f1a40 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1a43 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 107f1a47 mov eax, 1 */
  EAX = (0x1u);
  /* 107f1a4c jmp 0x107f1a8e */
  goto L_107f1a8e;
L_107f1a4e:;
  /* 107f1a4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1a51 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f1a54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1a57 cmp eax, dword ptr [edx + 0x1080f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1080f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1a5d jae 0x107f1a6a */
  if (!C.cf) goto L_107f1a6a;
  /* 107f1a5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1a62 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1a65 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107f1a68 jmp 0x107f1a73 */
  goto L_107f1a73;
L_107f1a6a:;
  /* 107f1a6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107f1a6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1a70 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107f1a73:;
  /* 107f1a73 jmp 0x107f192b */
  goto L_107f192b;
L_107f1a78:;
  /* 107f1a78 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107f1a7b push eax */
  push32((uint32_t)(EAX));
  /* 107f1a7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107f1a7f push ecx */
  push32((uint32_t)(ECX));
  /* 107f1a80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107f1a83 push edx */
  push32((uint32_t)(EDX));
  /* 107f1a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1a87 push eax */
  push32((uint32_t)(EAX));
  /* 107f1a88 call dword ptr [0x108132c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132c4))), 0x107f1a8eu);
L_107f1a8e:;
  /* 107f1a8e mov esp, ebp */
  ESP = (EBP);
  /* 107f1a90 pop ebp */
  EBP = (pop32());
  /* 107f1a91 ret 0x10 */
  ESPCHK(0x107f1910u, _esp0);
  ESP += 20; return;
}

/* FUN_10011aa0 @ 0x107f1aa0 (118 bytes, 42 insns) */
void f_107f1aa0(void) {
  FTRACE(0x107f1aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1aa1 mov ebp, esp */
  EBP = (ESP);
  /* 107f1aa3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1aa6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107f1aad:;
  /* 107f1aad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1ab0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f1ab2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 107f1ab5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107f1ab9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1abc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1abf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107f1ac2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f1ac4 je 0x107f1b0f */
  if (C.zf) goto L_107f1b0f;
  /* 107f1ac6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107f1aca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1acd jl 0x107f1ae2 */
  if ((C.sf!=C.of)) goto L_107f1ae2;
  /* 107f1acf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107f1ad3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1ad6 jg 0x107f1ae2 */
  if ((!C.zf&&C.sf==C.of)) goto L_107f1ae2;
  /* 107f1ad8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 107f1adb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107f1add mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 107f1ae0 jmp 0x107f1afc */
  goto L_107f1afc;
L_107f1ae2:;
  /* 107f1ae2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107f1ae6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1ae9 jl 0x107f1afc */
  if ((C.sf!=C.of)) goto L_107f1afc;
  /* 107f1aeb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107f1aef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1af2 jg 0x107f1afc */
  if ((!C.zf&&C.sf==C.of)) goto L_107f1afc;
  /* 107f1af4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 107f1af7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107f1af9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_107f1afc:;
  /* 107f1afc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1aff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 107f1b02 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107f1b06 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 107f1b0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f1b0d jmp 0x107f1aad */
  goto L_107f1aad;
L_107f1b0f:;
  /* 107f1b0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1b12 mov esp, ebp */
  ESP = (EBP);
  /* 107f1b14 pop ebp */
  EBP = (pop32());
  /* 107f1b15 ret  */
  ESPCHK(0x107f1aa0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x107f1b20 (101 bytes, 36 insns) */
void f_107f1b20(void) {
  FTRACE(0x107f1b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1b20 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1b21 mov ebp, esp */
  EBP = (ESP);
  /* 107f1b23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107f1b26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107f1b2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1b30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107f1b32 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 107f1b35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1b38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1b3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_107f1b3e:;
  /* 107f1b3e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 107f1b42 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1b45 jl 0x107f1b50 */
  if ((C.sf!=C.of)) goto L_107f1b50;
  /* 107f1b47 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 107f1b4b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1b4e jle 0x107f1b62 */
  if ((C.zf||C.sf!=C.of)) goto L_107f1b62;
L_107f1b50:;
  /* 107f1b50 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 107f1b54 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1b57 jl 0x107f1b7e */
  if ((C.sf!=C.of)) goto L_107f1b7e;
  /* 107f1b59 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 107f1b5d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1b60 jg 0x107f1b7e */
  if ((!C.zf&&C.sf==C.of)) goto L_107f1b7e;
L_107f1b62:;
  /* 107f1b62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f1b65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1b68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107f1b6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1b6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107f1b70 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 107f1b73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1b76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1b79 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107f1b7c jmp 0x107f1b3e */
  goto L_107f1b3e;
L_107f1b7e:;
  /* 107f1b7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107f1b81 mov esp, ebp */
  ESP = (EBP);
  /* 107f1b83 pop ebp */
  EBP = (pop32());
  /* 107f1b84 ret  */
  ESPCHK(0x107f1b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x107f1b90 (122 bytes, 39 insns) */
void f_107f1b90(void) {
  FTRACE(0x107f1b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1b90 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1b91 mov ebp, esp */
  EBP = (ESP);
  /* 107f1b93 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1b97 cmp eax, dword ptr [0x1081211c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1081211c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1b9d jae 0x107f1bc1 */
  if (!C.cf) goto L_107f1bc1;
  /* 107f1b9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1ba2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107f1ba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1ba8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107f1bab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f1bae mov eax, dword ptr [ecx*4 + 0x10811fe0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10811fe0)));
  /* 107f1bb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107f1bba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107f1bbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f1bbf jne 0x107f1bdc */
  if (!C.zf) goto L_107f1bdc;
L_107f1bc1:;
  /* 107f1bc1 call 0x107ecee0 */
  push32(0x107f1bc6u); f_107ecee0();
  /* 107f1bc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107f1bcc call 0x107ecef0 */
  push32(0x107f1bd1u); f_107ecef0();
  /* 107f1bd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107f1bd7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f1bda jmp 0x107f1c06 */
  goto L_107f1c06;
L_107f1bdc:;
  /* 107f1bdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1bdf push edx */
  push32((uint32_t)(EDX));
  /* 107f1be0 call 0x107ee700 */
  push32(0x107f1be5u); f_107ee700();
  /* 107f1be5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1be8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1beb push eax */
  push32((uint32_t)(EAX));
  /* 107f1bec call 0x107f1c10 */
  push32(0x107f1bf1u); f_107f1c10();
  /* 107f1bf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1bf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107f1bf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1bfa push ecx */
  push32((uint32_t)(ECX));
  /* 107f1bfb call 0x107ee790 */
  push32(0x107f1c00u); f_107ee790();
  /* 107f1c00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1c03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107f1c06:;
  /* 107f1c06 mov esp, ebp */
  ESP = (EBP);
  /* 107f1c08 pop ebp */
  EBP = (pop32());
  /* 107f1c09 ret  */
  ESPCHK(0x107f1b90u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x107f1c10 (170 bytes, 59 insns) */
void f_107f1c10(void) {
  FTRACE(0x107f1c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1c10 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1c11 mov ebp, esp */
  EBP = (ESP);
  /* 107f1c13 push ecx */
  push32((uint32_t)(ECX));
  /* 107f1c14 push esi */
  push32((uint32_t)(ESI));
  /* 107f1c15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1c18 push eax */
  push32((uint32_t)(EAX));
  /* 107f1c19 call 0x107ee580 */
  push32(0x107f1c1eu); f_107ee580();
  /* 107f1c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1c21 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1c24 je 0x107f1c63 */
  if (C.zf) goto L_107f1c63;
  /* 107f1c26 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1c2a je 0x107f1c32 */
  if (C.zf) goto L_107f1c32;
  /* 107f1c2c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1c30 jne 0x107f1c4c */
  if (!C.zf) goto L_107f1c4c;
L_107f1c32:;
  /* 107f1c32 push 1 */
  push32((uint32_t)(0x1u));
  /* 107f1c34 call 0x107ee580 */
  push32(0x107f1c39u); f_107ee580();
  /* 107f1c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1c3c mov esi, eax */
  ESI = (EAX);
  /* 107f1c3e push 2 */
  push32((uint32_t)(0x2u));
  /* 107f1c40 call 0x107ee580 */
  push32(0x107f1c45u); f_107ee580();
  /* 107f1c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1c48 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1c4a je 0x107f1c63 */
  if (C.zf) goto L_107f1c63;
L_107f1c4c:;
  /* 107f1c4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1c4f push ecx */
  push32((uint32_t)(ECX));
  /* 107f1c50 call 0x107ee580 */
  push32(0x107f1c55u); f_107ee580();
  /* 107f1c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1c58 push eax */
  push32((uint32_t)(EAX));
  /* 107f1c59 call dword ptr [0x108132c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108132c0))), 0x107f1c5fu);
  /* 107f1c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1c61 je 0x107f1c6c */
  if (C.zf) goto L_107f1c6c;
L_107f1c63:;
  /* 107f1c63 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 107f1c6a jmp 0x107f1c75 */
  goto L_107f1c75;
L_107f1c6c:;
  /* 107f1c6c call dword ptr [0x10813380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10813380))), 0x107f1c72u);
  /* 107f1c72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107f1c75:;
  /* 107f1c75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1c78 push edx */
  push32((uint32_t)(EDX));
  /* 107f1c79 call 0x107ee4a0 */
  push32(0x107f1c7eu); f_107ee4a0();
  /* 107f1c7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1c81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1c84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107f1c87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1c8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107f1c8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107f1c90 mov edx, dword ptr [eax*4 + 0x10811fe0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10811fe0)));
  /* 107f1c97 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 107f1c9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1ca0 je 0x107f1cb3 */
  if (C.zf) goto L_107f1cb3;
  /* 107f1ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107f1ca5 push eax */
  push32((uint32_t)(EAX));
  /* 107f1ca6 call 0x107ece40 */
  push32(0x107f1cabu); f_107ece40();
  /* 107f1cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1cae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107f1cb1 jmp 0x107f1cb5 */
  goto L_107f1cb5;
L_107f1cb3:;
  /* 107f1cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107f1cb5:;
  /* 107f1cb5 pop esi */
  ESI = (pop32());
  /* 107f1cb6 mov esp, ebp */
  ESP = (EBP);
  /* 107f1cb8 pop ebp */
  EBP = (pop32());
  /* 107f1cb9 ret  */
  ESPCHK(0x107f1c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cc0 @ 0x107f1cc0 (146 bytes, 52 insns) */
void f_107f1cc0(void) {
  FTRACE(0x107f1cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107f1cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 107f1cc1 mov ebp, esp */
  EBP = (ESP);
  /* 107f1cc3 push ebx */
  push32((uint32_t)(EBX));
  /* 107f1cc4 push esi */
  push32((uint32_t)(ESI));
  /* 107f1cc5 push edi */
  push32((uint32_t)(EDI));
L_107f1cc6:;
  /* 107f1cc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1cca jne 0x107f1cea */
  if (!C.zf) goto L_107f1cea;
  /* 107f1ccc push 0x1080c338 */
  push32((uint32_t)(0x1080c338u));
  /* 107f1cd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107f1cd3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 107f1cd5 push 0x1080ca00 */
  push32((uint32_t)(0x1080ca00u));
  /* 107f1cda push 2 */
  push32((uint32_t)(0x2u));
  /* 107f1cdc call 0x107e40d0 */
  push32(0x107f1ce1u); f_107e40d0();
  /* 107f1ce1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1ce4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107f1ce7 jne 0x107f1cea */
  if (!C.zf) goto L_107f1cea;
  /* 107f1ce9 int3  */
  x86_unimpl("int3 @ 0x107f1ce9");
L_107f1cea:;
  /* 107f1cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107f1cec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107f1cee jne 0x107f1cc6 */
  if (!C.zf) goto L_107f1cc6;
  /* 107f1cf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1cf3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107f1cf6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 107f1cfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107f1cfe je 0x107f1d4d */
  if (C.zf) goto L_107f1d4d;
  /* 107f1d00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1d03 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107f1d06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 107f1d09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107f1d0b je 0x107f1d4d */
  if (C.zf) goto L_107f1d4d;
  /* 107f1d0d push 2 */
  push32((uint32_t)(0x2u));
  /* 107f1d0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1d12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107f1d15 push eax */
  push32((uint32_t)(EAX));
  /* 107f1d16 call 0x107e5aa0 */
  push32(0x107f1d1bu); f_107e5aa0();
  /* 107f1d1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107f1d1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1d21 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107f1d24 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 107f1d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1d2d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 107f1d30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1d33 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 107f1d39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1d3c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 107f1d43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107f1d46 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_107f1d4d:;
  /* 107f1d4d pop edi */
  EDI = (pop32());
  /* 107f1d4e pop esi */
  ESI = (pop32());
  /* 107f1d4f pop ebx */
  EBX = (pop32());
  /* 107f1d50 pop ebp */
  EBP = (pop32());
  /* 107f1d51 ret  */
  ESPCHK(0x107f1cc0u, _esp0);
  ESP += 4; return;
}

