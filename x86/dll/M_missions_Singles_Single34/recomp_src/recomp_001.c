#include "recomp.h"

/* FUN_10006df0 @ 0x11566df0 (19 bytes, 9 insns) */
void f_11566df0(void) {
  FTRACE(0x11566df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11566df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11566df1 mov ebp, esp */
  EBP = (ESP);
  /* 11566df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11566df5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11566df8 push eax */
  push32((uint32_t)(EAX));
  /* 11566df9 call 0x11566e10 */
  push32(0x11566dfeu); f_11566e10();
  /* 11566dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11566e01 pop ebp */
  EBP = (pop32());
  /* 11566e02 ret  */
  ESPCHK(0x11566df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e10 @ 0x11566e10 (342 bytes, 119 insns) */
void f_11566e10(void) {
  FTRACE(0x11566e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11566e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11566e11 mov ebp, esp */
  EBP = (ESP);
  /* 11566e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11566e16 push ebx */
  push32((uint32_t)(EBX));
  /* 11566e17 push esi */
  push32((uint32_t)(ESI));
  /* 11566e18 push edi */
  push32((uint32_t)(EDI));
  /* 11566e19 mov eax, dword ptr [0x1158fa84] */
  EAX = (r32((uint32_t)(0x1158fa84)));
  /* 11566e1e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11566e21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11566e23 je 0x11566e55 */
  if (C.zf) goto L_11566e55;
L_11566e25:;
  /* 11566e25 call 0x115670e0 */
  push32(0x11566e2au); f_115670e0();
  /* 11566e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11566e2c jne 0x11566e4f */
  if (!C.zf) goto L_11566e4f;
  /* 11566e2e push 0x1158c604 */
  push32((uint32_t)(0x1158c604u));
  /* 11566e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11566e35 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11566e3a push 0x1158c5f8 */
  push32((uint32_t)(0x1158c5f8u));
  /* 11566e3f push 2 */
  push32((uint32_t)(0x2u));
  /* 11566e41 call 0x11565000 */
  push32(0x11566e46u); f_11565000();
  /* 11566e46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11566e49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566e4c jne 0x11566e4f */
  if (!C.zf) goto L_11566e4f;
  /* 11566e4e int3  */
  x86_unimpl("int3 @ 0x11566e4e");
L_11566e4f:;
  /* 11566e4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11566e51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11566e53 jne 0x11566e25 */
  if (!C.zf) goto L_11566e25;
L_11566e55:;
  /* 11566e55 push 9 */
  push32((uint32_t)(0x9u));
  /* 11566e57 call 0x11569940 */
  push32(0x11566e5cu); f_11569940();
  /* 11566e5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11566e5f:;
  /* 11566e5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11566e62 push edx */
  push32((uint32_t)(EDX));
  /* 11566e63 call 0x11567540 */
  push32(0x11566e68u); f_11567540();
  /* 11566e68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11566e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11566e6d jne 0x11566e90 */
  if (!C.zf) goto L_11566e90;
  /* 11566e6f push 0x1158c708 */
  push32((uint32_t)(0x1158c708u));
  /* 11566e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11566e76 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11566e7b push 0x1158c5f8 */
  push32((uint32_t)(0x1158c5f8u));
  /* 11566e80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11566e82 call 0x11565000 */
  push32(0x11566e87u); f_11565000();
  /* 11566e87 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11566e8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566e8d jne 0x11566e90 */
  if (!C.zf) goto L_11566e90;
  /* 11566e8f int3  */
  x86_unimpl("int3 @ 0x11566e8f");
L_11566e90:;
  /* 11566e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11566e92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11566e94 jne 0x11566e5f */
  if (!C.zf) goto L_11566e5f;
  /* 11566e96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11566e99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11566e9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11566e9f:;
  /* 11566e9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11566ea2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11566ea5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11566eaa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566ead je 0x11566ef2 */
  if (C.zf) goto L_11566ef2;
  /* 11566eaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11566eb2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566eb6 je 0x11566ef2 */
  if (C.zf) goto L_11566ef2;
  /* 11566eb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11566ebb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11566ebe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11566ec3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566ec6 je 0x11566ef2 */
  if (C.zf) goto L_11566ef2;
  /* 11566ec8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11566ecb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566ecf je 0x11566ef2 */
  if (C.zf) goto L_11566ef2;
  /* 11566ed1 push 0x1158c8a0 */
  push32((uint32_t)(0x1158c8a0u));
  /* 11566ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11566ed8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11566edd push 0x1158c5f8 */
  push32((uint32_t)(0x1158c5f8u));
  /* 11566ee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11566ee4 call 0x11565000 */
  push32(0x11566ee9u); f_11565000();
  /* 11566ee9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11566eec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566eef jne 0x11566ef2 */
  if (!C.zf) goto L_11566ef2;
  /* 11566ef1 int3  */
  x86_unimpl("int3 @ 0x11566ef1");
L_11566ef2:;
  /* 11566ef2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11566ef4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11566ef6 jne 0x11566e9f */
  if (!C.zf) goto L_11566e9f;
  /* 11566ef8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11566efb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566eff jne 0x11566f0e */
  if (!C.zf) goto L_11566f0e;
  /* 11566f01 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566f05 jne 0x11566f0e */
  if (!C.zf) goto L_11566f0e;
  /* 11566f07 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11566f0e:;
  /* 11566f0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11566f11 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566f15 je 0x11566f49 */
  if (C.zf) goto L_11566f49;
L_11566f17:;
  /* 11566f17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11566f1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11566f1d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566f20 je 0x11566f43 */
  if (C.zf) goto L_11566f43;
  /* 11566f22 push 0x1158c7e8 */
  push32((uint32_t)(0x1158c7e8u));
  /* 11566f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11566f29 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11566f2e push 0x1158c5f8 */
  push32((uint32_t)(0x1158c5f8u));
  /* 11566f33 push 2 */
  push32((uint32_t)(0x2u));
  /* 11566f35 call 0x11565000 */
  push32(0x11566f3au); f_11565000();
  /* 11566f3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11566f3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566f40 jne 0x11566f43 */
  if (!C.zf) goto L_11566f43;
  /* 11566f42 int3  */
  x86_unimpl("int3 @ 0x11566f42");
L_11566f43:;
  /* 11566f43 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11566f45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11566f47 jne 0x11566f17 */
  if (!C.zf) goto L_11566f17;
L_11566f49:;
  /* 11566f49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11566f4c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11566f4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11566f52 push 9 */
  push32((uint32_t)(0x9u));
  /* 11566f54 call 0x115699e0 */
  push32(0x11566f59u); f_115699e0();
  /* 11566f59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11566f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11566f5f pop edi */
  EDI = (pop32());
  /* 11566f60 pop esi */
  ESI = (pop32());
  /* 11566f61 pop ebx */
  EBX = (pop32());
  /* 11566f62 mov esp, ebp */
  ESP = (EBP);
  /* 11566f64 pop ebp */
  EBP = (pop32());
  /* 11566f65 ret  */
  ESPCHK(0x11566e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f70 @ 0x11566f70 (28 bytes, 11 insns) */
void f_11566f70(void) {
  FTRACE(0x11566f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11566f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11566f71 mov ebp, esp */
  EBP = (ESP);
  /* 11566f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11566f74 mov eax, dword ptr [0x1158fa8c] */
  EAX = (r32((uint32_t)(0x1158fa8c)));
  /* 11566f79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11566f7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11566f7f mov dword ptr [0x1158fa8c], ecx */
  w32((uint32_t)(0x1158fa8c), (ECX));
  /* 11566f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11566f88 mov esp, ebp */
  ESP = (EBP);
  /* 11566f8a pop ebp */
  EBP = (pop32());
  /* 11566f8b ret  */
  ESPCHK(0x11566f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x11566f90 (157 bytes, 59 insns) */
void f_11566f90(void) {
  FTRACE(0x11566f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11566f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11566f91 mov ebp, esp */
  EBP = (ESP);
  /* 11566f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11566f94 push ebx */
  push32((uint32_t)(EBX));
  /* 11566f95 push esi */
  push32((uint32_t)(ESI));
  /* 11566f96 push edi */
  push32((uint32_t)(EDI));
  /* 11566f97 push 9 */
  push32((uint32_t)(0x9u));
  /* 11566f99 call 0x11569940 */
  push32(0x11566f9eu); f_11569940();
  /* 11566f9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11566fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11566fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11566fa5 call 0x11567540 */
  push32(0x11566faau); f_11567540();
  /* 11566faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11566fad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11566faf je 0x1156701c */
  if (C.zf) goto L_1156701c;
  /* 11566fb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11566fb4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11566fb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11566fba:;
  /* 11566fba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11566fbd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11566fc0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11566fc5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566fc8 je 0x1156700d */
  if (C.zf) goto L_1156700d;
  /* 11566fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11566fcd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566fd1 je 0x1156700d */
  if (C.zf) goto L_1156700d;
  /* 11566fd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11566fd6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11566fd9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11566fde cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566fe1 je 0x1156700d */
  if (C.zf) goto L_1156700d;
  /* 11566fe3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11566fe6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11566fea je 0x1156700d */
  if (C.zf) goto L_1156700d;
  /* 11566fec push 0x1158c8a0 */
  push32((uint32_t)(0x1158c8a0u));
  /* 11566ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11566ff3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11566ff8 push 0x1158c5f8 */
  push32((uint32_t)(0x1158c5f8u));
  /* 11566ffd push 2 */
  push32((uint32_t)(0x2u));
  /* 11566fff call 0x11565000 */
  push32(0x11567004u); f_11565000();
  /* 11567004 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567007 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156700a jne 0x1156700d */
  if (!C.zf) goto L_1156700d;
  /* 1156700c int3  */
  x86_unimpl("int3 @ 0x1156700c");
L_1156700d:;
  /* 1156700d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156700f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11567011 jne 0x11566fba */
  if (!C.zf) goto L_11566fba;
  /* 11567013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567016 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11567019 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1156701c:;
  /* 1156701c push 9 */
  push32((uint32_t)(0x9u));
  /* 1156701e call 0x115699e0 */
  push32(0x11567023u); f_115699e0();
  /* 11567023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567026 pop edi */
  EDI = (pop32());
  /* 11567027 pop esi */
  ESI = (pop32());
  /* 11567028 pop ebx */
  EBX = (pop32());
  /* 11567029 mov esp, ebp */
  ESP = (EBP);
  /* 1156702b pop ebp */
  EBP = (pop32());
  /* 1156702c ret  */
  ESPCHK(0x11566f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007030 @ 0x11567030 (28 bytes, 11 insns) */
void f_11567030(void) {
  FTRACE(0x11567030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567030 push ebp */
  push32((uint32_t)(EBP));
  /* 11567031 mov ebp, esp */
  EBP = (ESP);
  /* 11567033 push ecx */
  push32((uint32_t)(ECX));
  /* 11567034 mov eax, dword ptr [0x1158fc90] */
  EAX = (r32((uint32_t)(0x1158fc90)));
  /* 11567039 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156703c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156703f mov dword ptr [0x1158fc90], ecx */
  w32((uint32_t)(0x1158fc90), (ECX));
  /* 11567045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567048 mov esp, ebp */
  ESP = (EBP);
  /* 1156704a pop ebp */
  EBP = (pop32());
  /* 1156704b ret  */
  ESPCHK(0x11567030u, _esp0);
  ESP += 4; return;
}

/* FUN_10007050 @ 0x11567050 (136 bytes, 55 insns) */
void f_11567050(void) {
  FTRACE(0x11567050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567050 push ebp */
  push32((uint32_t)(EBP));
  /* 11567051 mov ebp, esp */
  EBP = (ESP);
  /* 11567053 push ecx */
  push32((uint32_t)(ECX));
  /* 11567054 push ebx */
  push32((uint32_t)(EBX));
  /* 11567055 push esi */
  push32((uint32_t)(ESI));
  /* 11567056 push edi */
  push32((uint32_t)(EDI));
  /* 11567057 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1156705e:;
  /* 1156705e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11567061 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11567064 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11567067 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1156706a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156706c je 0x115670ce */
  if (C.zf) goto L_115670ce;
  /* 1156706e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567071 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567073 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11567075 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11567078 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156707e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567081 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567084 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11567087 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567089 je 0x115670cc */
  if (C.zf) goto L_115670cc;
L_1156708b:;
  /* 1156708b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156708e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11567093 push eax */
  push32((uint32_t)(EAX));
  /* 11567094 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567097 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11567099 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1156709c push edx */
  push32((uint32_t)(EDX));
  /* 1156709d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115670a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115670a3 push eax */
  push32((uint32_t)(EAX));
  /* 115670a4 push 0x1158c8e4 */
  push32((uint32_t)(0x1158c8e4u));
  /* 115670a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115670ab push 0 */
  push32((uint32_t)(0x0u));
  /* 115670ad push 0 */
  push32((uint32_t)(0x0u));
  /* 115670af push 0 */
  push32((uint32_t)(0x0u));
  /* 115670b1 call 0x11565000 */
  push32(0x115670b6u); f_11565000();
  /* 115670b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115670b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115670bc jne 0x115670bf */
  if (!C.zf) goto L_115670bf;
  /* 115670be int3  */
  x86_unimpl("int3 @ 0x115670be");
L_115670bf:;
  /* 115670bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115670c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115670c3 jne 0x1156708b */
  if (!C.zf) goto L_1156708b;
  /* 115670c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_115670cc:;
  /* 115670cc jmp 0x1156705e */
  goto L_1156705e;
L_115670ce:;
  /* 115670ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115670d1 pop edi */
  EDI = (pop32());
  /* 115670d2 pop esi */
  ESI = (pop32());
  /* 115670d3 pop ebx */
  EBX = (pop32());
  /* 115670d4 mov esp, ebp */
  ESP = (EBP);
  /* 115670d6 pop ebp */
  EBP = (pop32());
  /* 115670d7 ret  */
  ESPCHK(0x11567050u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e0 @ 0x115670e0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_115670e0(void) {
  FTRACE(0x115670e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115670e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115670e1 mov ebp, esp */
  EBP = (ESP);
  /* 115670e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115670e6 push ebx */
  push32((uint32_t)(EBX));
  /* 115670e7 push esi */
  push32((uint32_t)(ESI));
  /* 115670e8 push edi */
  push32((uint32_t)(EDI));
  /* 115670e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 115670f0 mov eax, dword ptr [0x1158fa84] */
  EAX = (r32((uint32_t)(0x1158fa84)));
  /* 115670f5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 115670f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115670fa jne 0x11567106 */
  if (!C.zf) goto L_11567106;
  /* 115670fc mov eax, 1 */
  EAX = (0x1u);
  /* 11567101 jmp 0x11567438 */
  goto L_11567438;
L_11567106:;
  /* 11567106 push 9 */
  push32((uint32_t)(0x9u));
  /* 11567108 call 0x11569940 */
  push32(0x1156710du); f_11569940();
  /* 1156710d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567110 call 0x1156a120 */
  push32(0x11567115u); f_1156a120();
  /* 11567115 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11567118 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156711c je 0x11567229 */
  if (C.zf) goto L_11567229;
  /* 11567122 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567126 je 0x11567229 */
  if (C.zf) goto L_11567229;
  /* 1156712c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156712f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11567132 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11567135 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567138 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1156713b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156713f ja 0x115671f2 */
  if ((!C.cf&&!C.zf)) goto L_115671f2;
  /* 11567145 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11567148 jmp dword ptr [eax*4 + 0x1156743f] */
  switch (EAX) {
    case 0: goto L_115671ca;
    case 1: goto L_115671a2;
    case 2: goto L_1156717a;
    case 3: goto L_1156714f;
    default: x86_unimpl("switch@0x11567148 out of table"); return;
  }
L_1156714f:;
  /* 1156714f push 0x1158ca38 */
  push32((uint32_t)(0x1158ca38u));
  /* 11567154 push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 11567159 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156715b push 0 */
  push32((uint32_t)(0x0u));
  /* 1156715d push 0 */
  push32((uint32_t)(0x0u));
  /* 1156715f push 0 */
  push32((uint32_t)(0x0u));
  /* 11567161 call 0x11565000 */
  push32(0x11567166u); f_11565000();
  /* 11567166 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567169 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156716c jne 0x1156716f */
  if (!C.zf) goto L_1156716f;
  /* 1156716e int3  */
  x86_unimpl("int3 @ 0x1156716e");
L_1156716f:;
  /* 1156716f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11567171 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11567173 jne 0x1156714f */
  if (!C.zf) goto L_1156714f;
  /* 11567175 jmp 0x11567218 */
  goto L_11567218;
L_1156717a:;
  /* 1156717a push 0x1158ca14 */
  push32((uint32_t)(0x1158ca14u));
  /* 1156717f push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 11567184 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567186 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156718a push 0 */
  push32((uint32_t)(0x0u));
  /* 1156718c call 0x11565000 */
  push32(0x11567191u); f_11565000();
  /* 11567191 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567194 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567197 jne 0x1156719a */
  if (!C.zf) goto L_1156719a;
  /* 11567199 int3  */
  x86_unimpl("int3 @ 0x11567199");
L_1156719a:;
  /* 1156719a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156719c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156719e jne 0x1156717a */
  if (!C.zf) goto L_1156717a;
  /* 115671a0 jmp 0x11567218 */
  goto L_11567218;
L_115671a2:;
  /* 115671a2 push 0x1158c9f0 */
  push32((uint32_t)(0x1158c9f0u));
  /* 115671a7 push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 115671ac push 0 */
  push32((uint32_t)(0x0u));
  /* 115671ae push 0 */
  push32((uint32_t)(0x0u));
  /* 115671b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115671b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115671b4 call 0x11565000 */
  push32(0x115671b9u); f_11565000();
  /* 115671b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115671bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115671bf jne 0x115671c2 */
  if (!C.zf) goto L_115671c2;
  /* 115671c1 int3  */
  x86_unimpl("int3 @ 0x115671c1");
L_115671c2:;
  /* 115671c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115671c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115671c6 jne 0x115671a2 */
  if (!C.zf) goto L_115671a2;
  /* 115671c8 jmp 0x11567218 */
  goto L_11567218;
L_115671ca:;
  /* 115671ca push 0x1158c9cc */
  push32((uint32_t)(0x1158c9ccu));
  /* 115671cf push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 115671d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115671d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115671d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115671da push 0 */
  push32((uint32_t)(0x0u));
  /* 115671dc call 0x11565000 */
  push32(0x115671e1u); f_11565000();
  /* 115671e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115671e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115671e7 jne 0x115671ea */
  if (!C.zf) goto L_115671ea;
  /* 115671e9 int3  */
  x86_unimpl("int3 @ 0x115671e9");
L_115671ea:;
  /* 115671ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115671ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115671ee jne 0x115671ca */
  if (!C.zf) goto L_115671ca;
  /* 115671f0 jmp 0x11567218 */
  goto L_11567218;
L_115671f2:;
  /* 115671f2 push 0x1158c9a0 */
  push32((uint32_t)(0x1158c9a0u));
  /* 115671f7 push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 115671fc push 0 */
  push32((uint32_t)(0x0u));
  /* 115671fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11567200 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567202 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567204 call 0x11565000 */
  push32(0x11567209u); f_11565000();
  /* 11567209 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156720c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156720f jne 0x11567212 */
  if (!C.zf) goto L_11567212;
  /* 11567211 int3  */
  x86_unimpl("int3 @ 0x11567211");
L_11567212:;
  /* 11567212 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11567214 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11567216 jne 0x115671f2 */
  if (!C.zf) goto L_115671f2;
L_11567218:;
  /* 11567218 push 9 */
  push32((uint32_t)(0x9u));
  /* 1156721a call 0x115699e0 */
  push32(0x1156721fu); f_115699e0();
  /* 1156721f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567224 jmp 0x11567438 */
  goto L_11567438;
L_11567229:;
  /* 11567229 mov eax, dword ptr [0x11591fdc] */
  EAX = (r32((uint32_t)(0x11591fdc)));
  /* 1156722e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11567231 jmp 0x1156723b */
  goto L_1156723b;
L_11567233:;
  /* 11567233 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567236 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11567238 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1156723b:;
  /* 1156723b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156723f je 0x1156742b */
  if (C.zf) goto L_1156742b;
  /* 11567245 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1156724c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156724f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11567252 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11567258 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156725b je 0x11567280 */
  if (C.zf) goto L_11567280;
  /* 1156725d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567260 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567264 je 0x11567280 */
  if (C.zf) goto L_11567280;
  /* 11567266 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567269 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1156726c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11567272 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567275 je 0x11567280 */
  if (C.zf) goto L_11567280;
  /* 11567277 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156727a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156727e jne 0x11567298 */
  if (!C.zf) goto L_11567298;
L_11567280:;
  /* 11567280 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567283 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11567286 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156728c mov edx, dword ptr [ecx*4 + 0x1158fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1158fa94)));
  /* 11567293 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11567296 jmp 0x1156729f */
  goto L_1156729f;
L_11567298:;
  /* 11567298 mov dword ptr [ebp - 0x14], 0x1158c998 */
  w32((uint32_t)(EBP + -0x14), (0x1158c998u));
L_1156729f:;
  /* 1156729f push 4 */
  push32((uint32_t)(0x4u));
  /* 115672a1 mov al, byte ptr [0x1158fa90] */
  AL = (r8((uint32_t)(0x1158fa90)));
  /* 115672a6 push eax */
  push32((uint32_t)(EAX));
  /* 115672a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115672aa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115672ad push ecx */
  push32((uint32_t)(ECX));
  /* 115672ae call 0x11567050 */
  push32(0x115672b3u); f_11567050();
  /* 115672b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115672b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115672b8 jne 0x115672f4 */
  if (!C.zf) goto L_115672f4;
L_115672ba:;
  /* 115672ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115672bd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115672c0 push edx */
  push32((uint32_t)(EDX));
  /* 115672c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115672c4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 115672c7 push ecx */
  push32((uint32_t)(ECX));
  /* 115672c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115672cb push edx */
  push32((uint32_t)(EDX));
  /* 115672cc push 0x1158c874 */
  push32((uint32_t)(0x1158c874u));
  /* 115672d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 115672d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115672d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115672d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115672d9 call 0x11565000 */
  push32(0x115672deu); f_11565000();
  /* 115672de add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115672e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115672e4 jne 0x115672e7 */
  if (!C.zf) goto L_115672e7;
  /* 115672e6 int3  */
  x86_unimpl("int3 @ 0x115672e6");
L_115672e7:;
  /* 115672e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115672e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115672eb jne 0x115672ba */
  if (!C.zf) goto L_115672ba;
  /* 115672ed mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_115672f4:;
  /* 115672f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 115672f6 mov cl, byte ptr [0x1158fa90] */
  CL = (r8((uint32_t)(0x1158fa90)));
  /* 115672fc push ecx */
  push32((uint32_t)(ECX));
  /* 115672fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567300 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11567303 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567306 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1156730a push edx */
  push32((uint32_t)(EDX));
  /* 1156730b call 0x11567050 */
  push32(0x11567310u); f_11567050();
  /* 11567310 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567315 jne 0x11567351 */
  if (!C.zf) goto L_11567351;
L_11567317:;
  /* 11567317 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156731a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156731d push eax */
  push32((uint32_t)(EAX));
  /* 1156731e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567321 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11567324 push edx */
  push32((uint32_t)(EDX));
  /* 11567325 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11567328 push eax */
  push32((uint32_t)(EAX));
  /* 11567329 push 0x1158c848 */
  push32((uint32_t)(0x1158c848u));
  /* 1156732e push 0 */
  push32((uint32_t)(0x0u));
  /* 11567330 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567332 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567334 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567336 call 0x11565000 */
  push32(0x1156733bu); f_11565000();
  /* 1156733b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156733e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567341 jne 0x11567344 */
  if (!C.zf) goto L_11567344;
  /* 11567343 int3  */
  x86_unimpl("int3 @ 0x11567343");
L_11567344:;
  /* 11567344 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11567346 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11567348 jne 0x11567317 */
  if (!C.zf) goto L_11567317;
  /* 1156734a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11567351:;
  /* 11567351 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567354 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567358 jne 0x115673aa */
  if (!C.zf) goto L_115673aa;
  /* 1156735a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156735d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11567360 push ecx */
  push32((uint32_t)(ECX));
  /* 11567361 mov dl, byte ptr [0x1158fa91] */
  DL = (r8((uint32_t)(0x1158fa91)));
  /* 11567367 push edx */
  push32((uint32_t)(EDX));
  /* 11567368 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156736b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156736e push eax */
  push32((uint32_t)(EAX));
  /* 1156736f call 0x11567050 */
  push32(0x11567374u); f_11567050();
  /* 11567374 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567377 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567379 jne 0x115673aa */
  if (!C.zf) goto L_115673aa;
L_1156737b:;
  /* 1156737b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156737e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567381 push ecx */
  push32((uint32_t)(ECX));
  /* 11567382 push 0x1158c96c */
  push32((uint32_t)(0x1158c96cu));
  /* 11567387 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156738b push 0 */
  push32((uint32_t)(0x0u));
  /* 1156738d push 0 */
  push32((uint32_t)(0x0u));
  /* 1156738f call 0x11565000 */
  push32(0x11567394u); f_11565000();
  /* 11567394 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567397 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156739a jne 0x1156739d */
  if (!C.zf) goto L_1156739d;
  /* 1156739c int3  */
  x86_unimpl("int3 @ 0x1156739c");
L_1156739d:;
  /* 1156739d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156739f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115673a1 jne 0x1156737b */
  if (!C.zf) goto L_1156737b;
  /* 115673a3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_115673aa:;
  /* 115673aa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115673ae jne 0x11567426 */
  if (!C.zf) goto L_11567426;
  /* 115673b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115673b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115673b7 je 0x115673ec */
  if (C.zf) goto L_115673ec;
L_115673b9:;
  /* 115673b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115673bc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 115673bf push edx */
  push32((uint32_t)(EDX));
  /* 115673c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115673c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 115673c6 push ecx */
  push32((uint32_t)(ECX));
  /* 115673c7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115673ca push edx */
  push32((uint32_t)(EDX));
  /* 115673cb push 0x1158c94c */
  push32((uint32_t)(0x1158c94cu));
  /* 115673d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115673d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115673d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115673d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115673d8 call 0x11565000 */
  push32(0x115673ddu); f_11565000();
  /* 115673dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115673e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115673e3 jne 0x115673e6 */
  if (!C.zf) goto L_115673e6;
  /* 115673e5 int3  */
  x86_unimpl("int3 @ 0x115673e5");
L_115673e6:;
  /* 115673e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115673e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115673ea jne 0x115673b9 */
  if (!C.zf) goto L_115673b9;
L_115673ec:;
  /* 115673ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115673ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115673f2 push edx */
  push32((uint32_t)(EDX));
  /* 115673f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115673f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115673f9 push eax */
  push32((uint32_t)(EAX));
  /* 115673fa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 115673fd push ecx */
  push32((uint32_t)(ECX));
  /* 115673fe push 0x1158c920 */
  push32((uint32_t)(0x1158c920u));
  /* 11567403 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567405 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567407 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567409 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156740b call 0x11565000 */
  push32(0x11567410u); f_11565000();
  /* 11567410 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567413 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567416 jne 0x11567419 */
  if (!C.zf) goto L_11567419;
  /* 11567418 int3  */
  x86_unimpl("int3 @ 0x11567418");
L_11567419:;
  /* 11567419 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156741b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156741d jne 0x115673ec */
  if (!C.zf) goto L_115673ec;
  /* 1156741f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11567426:;
  /* 11567426 jmp 0x11567233 */
  goto L_11567233;
L_1156742b:;
  /* 1156742b push 9 */
  push32((uint32_t)(0x9u));
  /* 1156742d call 0x115699e0 */
  push32(0x11567432u); f_115699e0();
  /* 11567432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11567438:;
  /* 11567438 pop edi */
  EDI = (pop32());
  /* 11567439 pop esi */
  ESI = (pop32());
  /* 1156743a pop ebx */
  EBX = (pop32());
  /* 1156743b mov esp, ebp */
  ESP = (EBP);
  /* 1156743d pop ebp */
  EBP = (pop32());
  /* 1156743e ret  */
  ESPCHK(0x115670e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007450 @ 0x11567450 (34 bytes, 13 insns) */
void f_11567450(void) {
  FTRACE(0x11567450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567450 push ebp */
  push32((uint32_t)(EBP));
  /* 11567451 mov ebp, esp */
  EBP = (ESP);
  /* 11567453 push ecx */
  push32((uint32_t)(ECX));
  /* 11567454 mov eax, dword ptr [0x1158fa84] */
  EAX = (r32((uint32_t)(0x1158fa84)));
  /* 11567459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156745c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567460 je 0x1156746b */
  if (C.zf) goto L_1156746b;
  /* 11567462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567465 mov dword ptr [0x1158fa84], ecx */
  w32((uint32_t)(0x1158fa84), (ECX));
L_1156746b:;
  /* 1156746b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156746e mov esp, ebp */
  ESP = (EBP);
  /* 11567470 pop ebp */
  EBP = (pop32());
  /* 11567471 ret  */
  ESPCHK(0x11567450u, _esp0);
  ESP += 4; return;
}

/* FUN_10007480 @ 0x11567480 (103 bytes, 38 insns) */
void f_11567480(void) {
  FTRACE(0x11567480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567480 push ebp */
  push32((uint32_t)(EBP));
  /* 11567481 mov ebp, esp */
  EBP = (ESP);
  /* 11567483 push ecx */
  push32((uint32_t)(ECX));
  /* 11567484 mov eax, dword ptr [0x1158fa84] */
  EAX = (r32((uint32_t)(0x1158fa84)));
  /* 11567489 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1156748c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156748e jne 0x11567492 */
  if (!C.zf) goto L_11567492;
  /* 11567490 jmp 0x115674e3 */
  goto L_115674e3;
L_11567492:;
  /* 11567492 push 9 */
  push32((uint32_t)(0x9u));
  /* 11567494 call 0x11569940 */
  push32(0x11567499u); f_11569940();
  /* 11567499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156749c mov ecx, dword ptr [0x11591fdc] */
  ECX = (r32((uint32_t)(0x11591fdc)));
  /* 115674a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115674a5 jmp 0x115674af */
  goto L_115674af;
L_115674a7:;
  /* 115674a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115674aa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115674ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115674af:;
  /* 115674af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115674b3 je 0x115674d9 */
  if (C.zf) goto L_115674d9;
  /* 115674b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115674b8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115674bb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115674c1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115674c4 jne 0x115674d7 */
  if (!C.zf) goto L_115674d7;
  /* 115674c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115674c9 push eax */
  push32((uint32_t)(EAX));
  /* 115674ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115674cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115674d0 push ecx */
  push32((uint32_t)(ECX));
  /* 115674d1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x115674d4u);
  /* 115674d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115674d7:;
  /* 115674d7 jmp 0x115674a7 */
  goto L_115674a7;
L_115674d9:;
  /* 115674d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 115674db call 0x115699e0 */
  push32(0x115674e0u); f_115699e0();
  /* 115674e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115674e3:;
  /* 115674e3 mov esp, ebp */
  ESP = (EBP);
  /* 115674e5 pop ebp */
  EBP = (pop32());
  /* 115674e6 ret  */
  ESPCHK(0x11567480u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x115674f0 (75 bytes, 28 insns) */
void f_115674f0(void) {
  FTRACE(0x115674f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115674f0 push ebp */
  push32((uint32_t)(EBP));
  /* 115674f1 mov ebp, esp */
  EBP = (ESP);
  /* 115674f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115674f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115674f8 je 0x1156752d */
  if (C.zf) goto L_1156752d;
  /* 115674fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115674fd push eax */
  push32((uint32_t)(EAX));
  /* 115674fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567501 push ecx */
  push32((uint32_t)(ECX));
  /* 11567502 call dword ptr [0x11594388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594388))), 0x11567508u);
  /* 11567508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156750a jne 0x1156752d */
  if (!C.zf) goto L_1156752d;
  /* 1156750c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567510 je 0x11567524 */
  if (C.zf) goto L_11567524;
  /* 11567512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11567515 push edx */
  push32((uint32_t)(EDX));
  /* 11567516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567519 push eax */
  push32((uint32_t)(EAX));
  /* 1156751a call dword ptr [0x1159438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159438c))), 0x11567520u);
  /* 11567520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567522 jne 0x1156752d */
  if (!C.zf) goto L_1156752d;
L_11567524:;
  /* 11567524 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1156752b jmp 0x11567534 */
  goto L_11567534;
L_1156752d:;
  /* 1156752d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11567534:;
  /* 11567534 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567537 mov esp, ebp */
  ESP = (EBP);
  /* 11567539 pop ebp */
  EBP = (pop32());
  /* 1156753a ret  */
  ESPCHK(0x115674f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007540 @ 0x11567540 (134 bytes, 50 insns) */
void f_11567540(void) {
  FTRACE(0x11567540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567540 push ebp */
  push32((uint32_t)(EBP));
  /* 11567541 mov ebp, esp */
  EBP = (ESP);
  /* 11567543 push ecx */
  push32((uint32_t)(ECX));
  /* 11567544 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567548 jne 0x1156754e */
  if (!C.zf) goto L_1156754e;
  /* 1156754a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156754c jmp 0x115675c2 */
  goto L_115675c2;
L_1156754e:;
  /* 1156754e push 1 */
  push32((uint32_t)(0x1u));
  /* 11567550 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11567552 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567555 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11567558 push eax */
  push32((uint32_t)(EAX));
  /* 11567559 call 0x115674f0 */
  push32(0x1156755eu); f_115674f0();
  /* 1156755e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567561 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567563 jne 0x11567569 */
  if (!C.zf) goto L_11567569;
  /* 11567565 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567567 jmp 0x115675c2 */
  goto L_115675c2;
L_11567569:;
  /* 11567569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156756c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156756f push ecx */
  push32((uint32_t)(ECX));
  /* 11567570 call 0x1156a240 */
  push32(0x11567575u); f_1156a240();
  /* 11567575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567578 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156757b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156757f je 0x11567596 */
  if (C.zf) goto L_11567596;
  /* 11567581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567584 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11567587 push edx */
  push32((uint32_t)(EDX));
  /* 11567588 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156758b push eax */
  push32((uint32_t)(EAX));
  /* 1156758c call 0x1156a2a0 */
  push32(0x11567591u); f_1156a2a0();
  /* 11567591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567594 jmp 0x115675c2 */
  goto L_115675c2;
L_11567596:;
  /* 11567596 mov ecx, dword ptr [0x11591f90] */
  ECX = (r32((uint32_t)(0x11591f90)));
  /* 1156759c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 115675a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115675a4 je 0x115675ad */
  if (C.zf) goto L_115675ad;
  /* 115675a6 mov eax, 1 */
  EAX = (0x1u);
  /* 115675ab jmp 0x115675c2 */
  goto L_115675c2;
L_115675ad:;
  /* 115675ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115675b0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115675b3 push edx */
  push32((uint32_t)(EDX));
  /* 115675b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115675b6 mov eax, dword ptr [0x1159392c] */
  EAX = (r32((uint32_t)(0x1159392c)));
  /* 115675bb push eax */
  push32((uint32_t)(EAX));
  /* 115675bc call dword ptr [0x11594384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594384))), 0x115675c2u);
L_115675c2:;
  /* 115675c2 mov esp, ebp */
  ESP = (EBP);
  /* 115675c4 pop ebp */
  EBP = (pop32());
  /* 115675c5 ret  */
  ESPCHK(0x11567540u, _esp0);
  ESP += 4; return;
}

/* FUN_100075d0 @ 0x115675d0 (227 bytes, 80 insns) */
void f_115675d0(void) {
  FTRACE(0x115675d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115675d0 push ebp */
  push32((uint32_t)(EBP));
  /* 115675d1 mov ebp, esp */
  EBP = (ESP);
  /* 115675d3 push ecx */
  push32((uint32_t)(ECX));
  /* 115675d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115675d7 push eax */
  push32((uint32_t)(EAX));
  /* 115675d8 call 0x11567540 */
  push32(0x115675ddu); f_11567540();
  /* 115675dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115675e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115675e2 jne 0x115675eb */
  if (!C.zf) goto L_115675eb;
  /* 115675e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115675e6 jmp 0x115676af */
  goto L_115676af;
L_115675eb:;
  /* 115675eb push 9 */
  push32((uint32_t)(0x9u));
  /* 115675ed call 0x11569940 */
  push32(0x115675f2u); f_11569940();
  /* 115675f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115675f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115675f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115675fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115675fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567601 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11567604 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11567609 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156760c je 0x11567630 */
  if (C.zf) goto L_11567630;
  /* 1156760e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567611 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567615 je 0x11567630 */
  if (C.zf) goto L_11567630;
  /* 11567617 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156761a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1156761d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11567622 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567625 je 0x11567630 */
  if (C.zf) goto L_11567630;
  /* 11567627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156762a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156762e jne 0x115676a3 */
  if (!C.zf) goto L_115676a3;
L_11567630:;
  /* 11567630 push 1 */
  push32((uint32_t)(0x1u));
  /* 11567632 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11567635 push edx */
  push32((uint32_t)(EDX));
  /* 11567636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567639 push eax */
  push32((uint32_t)(EAX));
  /* 1156763a call 0x115674f0 */
  push32(0x1156763fu); f_115674f0();
  /* 1156763f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567642 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567644 je 0x115676a3 */
  if (C.zf) goto L_115676a3;
  /* 11567646 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567649 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1156764c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156764f jne 0x115676a3 */
  if (!C.zf) goto L_115676a3;
  /* 11567651 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567654 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11567657 cmp ecx, dword ptr [0x1158fa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1158fa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156765d jg 0x115676a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_115676a3;
  /* 1156765f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567663 je 0x11567670 */
  if (C.zf) goto L_11567670;
  /* 11567665 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11567668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156766b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1156766e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11567670:;
  /* 11567670 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567674 je 0x11567681 */
  if (C.zf) goto L_11567681;
  /* 11567676 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11567679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156767c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156767f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11567681:;
  /* 11567681 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567685 je 0x11567692 */
  if (C.zf) goto L_11567692;
  /* 11567687 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156768a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156768d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11567690 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11567692:;
  /* 11567692 push 9 */
  push32((uint32_t)(0x9u));
  /* 11567694 call 0x115699e0 */
  push32(0x11567699u); f_115699e0();
  /* 11567699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156769c mov eax, 1 */
  EAX = (0x1u);
  /* 115676a1 jmp 0x115676af */
  goto L_115676af;
L_115676a3:;
  /* 115676a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 115676a5 call 0x115699e0 */
  push32(0x115676aau); f_115699e0();
  /* 115676aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115676ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115676af:;
  /* 115676af mov esp, ebp */
  ESP = (EBP);
  /* 115676b1 pop ebp */
  EBP = (pop32());
  /* 115676b2 ret  */
  ESPCHK(0x115675d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076c0 @ 0x115676c0 (28 bytes, 11 insns) */
void f_115676c0(void) {
  FTRACE(0x115676c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115676c0 push ebp */
  push32((uint32_t)(EBP));
  /* 115676c1 mov ebp, esp */
  EBP = (ESP);
  /* 115676c3 push ecx */
  push32((uint32_t)(ECX));
  /* 115676c4 mov eax, dword ptr [0x11593938] */
  EAX = (r32((uint32_t)(0x11593938)));
  /* 115676c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115676cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115676cf mov dword ptr [0x11593938], ecx */
  w32((uint32_t)(0x11593938), (ECX));
  /* 115676d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115676d8 mov esp, ebp */
  ESP = (EBP);
  /* 115676da pop ebp */
  EBP = (pop32());
  /* 115676db ret  */
  ESPCHK(0x115676c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076e0 @ 0x115676e0 (362 bytes, 116 insns) */
void f_115676e0(void) {
  FTRACE(0x115676e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115676e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115676e1 mov ebp, esp */
  EBP = (ESP);
  /* 115676e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115676e6 push ebx */
  push32((uint32_t)(EBX));
  /* 115676e7 push esi */
  push32((uint32_t)(ESI));
  /* 115676e8 push edi */
  push32((uint32_t)(EDI));
  /* 115676e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115676ed jne 0x1156771a */
  if (!C.zf) goto L_1156771a;
L_115676ef:;
  /* 115676ef push 0x1158ca80 */
  push32((uint32_t)(0x1158ca80u));
  /* 115676f4 push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 115676f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115676fb push 0 */
  push32((uint32_t)(0x0u));
  /* 115676fd push 0 */
  push32((uint32_t)(0x0u));
  /* 115676ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11567701 call 0x11565000 */
  push32(0x11567706u); f_11565000();
  /* 11567706 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567709 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156770c jne 0x1156770f */
  if (!C.zf) goto L_1156770f;
  /* 1156770e int3  */
  x86_unimpl("int3 @ 0x1156770e");
L_1156770f:;
  /* 1156770f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567713 jne 0x115676ef */
  if (!C.zf) goto L_115676ef;
  /* 11567715 jmp 0x11567843 */
  goto L_11567843;
L_1156771a:;
  /* 1156771a push 9 */
  push32((uint32_t)(0x9u));
  /* 1156771c call 0x11569940 */
  push32(0x11567721u); f_11569940();
  /* 11567721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567724 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567727 mov edx, dword ptr [0x11591fdc] */
  EDX = (r32((uint32_t)(0x11591fdc)));
  /* 1156772d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1156772f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11567736 jmp 0x11567741 */
  goto L_11567741;
L_11567738:;
  /* 11567738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156773b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156773e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11567741:;
  /* 11567741 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567745 jge 0x11567765 */
  if ((C.sf==C.of)) goto L_11567765;
  /* 11567747 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156774a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156774d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11567755 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567758 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156775b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11567763 jmp 0x11567738 */
  goto L_11567738;
L_11567765:;
  /* 11567765 mov edx, dword ptr [0x11591fdc] */
  EDX = (r32((uint32_t)(0x11591fdc)));
  /* 1156776b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1156776e jmp 0x11567778 */
  goto L_11567778;
L_11567770:;
  /* 11567770 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567773 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11567775 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11567778:;
  /* 11567778 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156777c je 0x11567821 */
  if (C.zf) goto L_11567821;
  /* 11567782 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567785 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11567788 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156778d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156778f jl 0x115677f7 */
  if ((C.sf!=C.of)) goto L_115677f7;
  /* 11567791 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567794 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11567797 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1156779d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115677a0 jge 0x115677f7 */
  if ((C.sf==C.of)) goto L_115677f7;
  /* 115677a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115677a5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 115677a8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 115677ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115677b1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 115677b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115677b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115677bb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115677be and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 115677c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115677c7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 115677cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115677ce mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 115677d1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115677d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115677d9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 115677dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115677e0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115677e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115677e6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 115677e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115677ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115677f1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 115677f5 jmp 0x1156781c */
  goto L_1156781c;
L_115677f7:;
  /* 115677f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115677fa push edx */
  push32((uint32_t)(EDX));
  /* 115677fb push 0x1158ca5c */
  push32((uint32_t)(0x1158ca5cu));
  /* 11567800 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567802 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567804 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567806 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567808 call 0x11565000 */
  push32(0x1156780du); f_11565000();
  /* 1156780d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567810 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567813 jne 0x11567816 */
  if (!C.zf) goto L_11567816;
  /* 11567815 int3  */
  x86_unimpl("int3 @ 0x11567815");
L_11567816:;
  /* 11567816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156781a jne 0x115677f7 */
  if (!C.zf) goto L_115677f7;
L_1156781c:;
  /* 1156781c jmp 0x11567770 */
  goto L_11567770;
L_11567821:;
  /* 11567821 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567824 mov edx, dword ptr [0x11591fe4] */
  EDX = (r32((uint32_t)(0x11591fe4)));
  /* 1156782a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1156782d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567830 mov ecx, dword ptr [0x11591fd8] */
  ECX = (r32((uint32_t)(0x11591fd8)));
  /* 11567836 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11567839 push 9 */
  push32((uint32_t)(0x9u));
  /* 1156783b call 0x115699e0 */
  push32(0x11567840u); f_115699e0();
  /* 11567840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11567843:;
  /* 11567843 pop edi */
  EDI = (pop32());
  /* 11567844 pop esi */
  ESI = (pop32());
  /* 11567845 pop ebx */
  EBX = (pop32());
  /* 11567846 mov esp, ebp */
  ESP = (EBP);
  /* 11567848 pop ebp */
  EBP = (pop32());
  /* 11567849 ret  */
  ESPCHK(0x115676e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007850 @ 0x11567850 (291 bytes, 95 insns) */
void f_11567850(void) {
  FTRACE(0x11567850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567850 push ebp */
  push32((uint32_t)(EBP));
  /* 11567851 mov ebp, esp */
  EBP = (ESP);
  /* 11567853 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11567856 push ebx */
  push32((uint32_t)(EBX));
  /* 11567857 push esi */
  push32((uint32_t)(ESI));
  /* 11567858 push edi */
  push32((uint32_t)(EDI));
  /* 11567859 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11567860 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567864 je 0x11567872 */
  if (C.zf) goto L_11567872;
  /* 11567866 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156786a je 0x11567872 */
  if (C.zf) goto L_11567872;
  /* 1156786c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567870 jne 0x115678a0 */
  if (!C.zf) goto L_115678a0;
L_11567872:;
  /* 11567872 push 0x1158caa8 */
  push32((uint32_t)(0x1158caa8u));
  /* 11567877 push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 1156787c push 0 */
  push32((uint32_t)(0x0u));
  /* 1156787e push 0 */
  push32((uint32_t)(0x0u));
  /* 11567880 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567882 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567884 call 0x11565000 */
  push32(0x11567889u); f_11565000();
  /* 11567889 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156788c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156788f jne 0x11567892 */
  if (!C.zf) goto L_11567892;
  /* 11567891 int3  */
  x86_unimpl("int3 @ 0x11567891");
L_11567892:;
  /* 11567892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567896 jne 0x11567872 */
  if (!C.zf) goto L_11567872;
  /* 11567898 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156789b jmp 0x1156796c */
  goto L_1156796c;
L_115678a0:;
  /* 115678a0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115678a7 jmp 0x115678b2 */
  goto L_115678b2;
L_115678a9:;
  /* 115678a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115678ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115678af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115678b2:;
  /* 115678b2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115678b6 jge 0x1156793c */
  if ((C.sf==C.of)) goto L_1156793c;
  /* 115678bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115678bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115678c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115678c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115678c8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 115678cc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115678d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115678d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115678d6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 115678da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115678dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115678e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115678e3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 115678e6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 115678ea sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115678ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115678f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115678f4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 115678f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115678fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115678fe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567903 jne 0x11567912 */
  if (!C.zf) goto L_11567912;
  /* 11567905 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567908 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156790b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567910 je 0x11567937 */
  if (C.zf) goto L_11567937;
L_11567912:;
  /* 11567912 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567916 je 0x11567937 */
  if (C.zf) goto L_11567937;
  /* 11567918 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156791c jne 0x11567930 */
  if (!C.zf) goto L_11567930;
  /* 1156791e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567922 jne 0x11567937 */
  if (!C.zf) goto L_11567937;
  /* 11567924 mov eax, dword ptr [0x1158fa84] */
  EAX = (r32((uint32_t)(0x1158fa84)));
  /* 11567929 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1156792c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156792e je 0x11567937 */
  if (C.zf) goto L_11567937;
L_11567930:;
  /* 11567930 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11567937:;
  /* 11567937 jmp 0x115678a9 */
  goto L_115678a9;
L_1156793c:;
  /* 1156793c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156793f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11567942 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11567945 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11567948 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156794b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1156794e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11567951 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11567954 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11567957 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156795a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156795d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11567960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567963 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11567969 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1156796c:;
  /* 1156796c pop edi */
  EDI = (pop32());
  /* 1156796d pop esi */
  ESI = (pop32());
  /* 1156796e pop ebx */
  EBX = (pop32());
  /* 1156796f mov esp, ebp */
  ESP = (EBP);
  /* 11567971 pop ebp */
  EBP = (pop32());
  /* 11567972 ret  */
  ESPCHK(0x11567850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007980 @ 0x11567980 (697 bytes, 253 insns) */
void f_11567980(void) {
  FTRACE(0x11567980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567980 push ebp */
  push32((uint32_t)(EBP));
  /* 11567981 mov ebp, esp */
  EBP = (ESP);
  /* 11567983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11567986 push ebx */
  push32((uint32_t)(EBX));
  /* 11567987 push esi */
  push32((uint32_t)(ESI));
  /* 11567988 push edi */
  push32((uint32_t)(EDI));
  /* 11567989 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11567990 push 9 */
  push32((uint32_t)(0x9u));
  /* 11567992 call 0x11569940 */
  push32(0x11567997u); f_11569940();
  /* 11567997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156799a:;
  /* 1156799a push 0x1158cba0 */
  push32((uint32_t)(0x1158cba0u));
  /* 1156799f push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 115679a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 115679a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 115679a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 115679aa push 0 */
  push32((uint32_t)(0x0u));
  /* 115679ac call 0x11565000 */
  push32(0x115679b1u); f_11565000();
  /* 115679b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115679b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115679b7 jne 0x115679ba */
  if (!C.zf) goto L_115679ba;
  /* 115679b9 int3  */
  x86_unimpl("int3 @ 0x115679b9");
L_115679ba:;
  /* 115679ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115679bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115679be jne 0x1156799a */
  if (!C.zf) goto L_1156799a;
  /* 115679c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115679c4 je 0x115679ce */
  if (C.zf) goto L_115679ce;
  /* 115679c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115679c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115679cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_115679ce:;
  /* 115679ce mov eax, dword ptr [0x11591fdc] */
  EAX = (r32((uint32_t)(0x11591fdc)));
  /* 115679d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115679d6 jmp 0x115679e0 */
  goto L_115679e0;
L_115679d8:;
  /* 115679d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115679db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115679dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115679e0:;
  /* 115679e0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115679e4 je 0x11567c02 */
  if (C.zf) goto L_11567c02;
  /* 115679ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115679ed cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115679f0 je 0x11567c02 */
  if (C.zf) goto L_11567c02;
  /* 115679f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115679f9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 115679fc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11567a02 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567a05 je 0x11567a34 */
  if (C.zf) goto L_11567a34;
  /* 11567a07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567a0a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11567a0d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11567a13 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11567a15 je 0x11567a34 */
  if (C.zf) goto L_11567a34;
  /* 11567a17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567a1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11567a1d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11567a22 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567a25 jne 0x11567a39 */
  if (!C.zf) goto L_11567a39;
  /* 11567a27 mov ecx, dword ptr [0x1158fa84] */
  ECX = (r32((uint32_t)(0x1158fa84)));
  /* 11567a2d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11567a30 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11567a32 jne 0x11567a39 */
  if (!C.zf) goto L_11567a39;
L_11567a34:;
  /* 11567a34 jmp 0x11567bfd */
  goto L_11567bfd;
L_11567a39:;
  /* 11567a39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567a3c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567a40 je 0x11567ab2 */
  if (C.zf) goto L_11567ab2;
  /* 11567a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567a44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11567a46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567a49 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11567a4c push ecx */
  push32((uint32_t)(ECX));
  /* 11567a4d call 0x115674f0 */
  push32(0x11567a52u); f_115674f0();
  /* 11567a52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567a55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567a57 jne 0x11567a83 */
  if (!C.zf) goto L_11567a83;
L_11567a59:;
  /* 11567a59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567a5c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11567a5f push eax */
  push32((uint32_t)(EAX));
  /* 11567a60 push 0x1158cb8c */
  push32((uint32_t)(0x1158cb8cu));
  /* 11567a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11567a6d call 0x11565000 */
  push32(0x11567a72u); f_11565000();
  /* 11567a72 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567a75 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567a78 jne 0x11567a7b */
  if (!C.zf) goto L_11567a7b;
  /* 11567a7a int3  */
  x86_unimpl("int3 @ 0x11567a7a");
L_11567a7b:;
  /* 11567a7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11567a7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11567a7f jne 0x11567a59 */
  if (!C.zf) goto L_11567a59;
  /* 11567a81 jmp 0x11567ab2 */
  goto L_11567ab2;
L_11567a83:;
  /* 11567a83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567a86 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11567a89 push eax */
  push32((uint32_t)(EAX));
  /* 11567a8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567a8d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11567a90 push edx */
  push32((uint32_t)(EDX));
  /* 11567a91 push 0x1158cb80 */
  push32((uint32_t)(0x1158cb80u));
  /* 11567a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11567a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11567a9e call 0x11565000 */
  push32(0x11567aa3u); f_11565000();
  /* 11567aa3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567aa6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567aa9 jne 0x11567aac */
  if (!C.zf) goto L_11567aac;
  /* 11567aab int3  */
  x86_unimpl("int3 @ 0x11567aab");
L_11567aac:;
  /* 11567aac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567aae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567ab0 jne 0x11567a83 */
  if (!C.zf) goto L_11567a83;
L_11567ab2:;
  /* 11567ab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567ab5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11567ab8 push edx */
  push32((uint32_t)(EDX));
  /* 11567ab9 push 0x1158cb78 */
  push32((uint32_t)(0x1158cb78u));
  /* 11567abe push 0 */
  push32((uint32_t)(0x0u));
  /* 11567ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567ac6 call 0x11565000 */
  push32(0x11567acbu); f_11565000();
  /* 11567acb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567ace cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567ad1 jne 0x11567ad4 */
  if (!C.zf) goto L_11567ad4;
  /* 11567ad3 int3  */
  x86_unimpl("int3 @ 0x11567ad3");
L_11567ad4:;
  /* 11567ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567ad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567ad8 jne 0x11567ab2 */
  if (!C.zf) goto L_11567ab2;
  /* 11567ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567add mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11567ae0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11567ae6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567ae9 jne 0x11567b5c */
  if (!C.zf) goto L_11567b5c;
L_11567aeb:;
  /* 11567aeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567aee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11567af1 push ecx */
  push32((uint32_t)(ECX));
  /* 11567af2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567af5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11567af8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11567afb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11567b00 push eax */
  push32((uint32_t)(EAX));
  /* 11567b01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567b04 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567b07 push ecx */
  push32((uint32_t)(ECX));
  /* 11567b08 push 0x1158cb44 */
  push32((uint32_t)(0x1158cb44u));
  /* 11567b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11567b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11567b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567b15 call 0x11565000 */
  push32(0x11567b1au); f_11565000();
  /* 11567b1a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567b1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567b20 jne 0x11567b23 */
  if (!C.zf) goto L_11567b23;
  /* 11567b22 int3  */
  x86_unimpl("int3 @ 0x11567b22");
L_11567b23:;
  /* 11567b23 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11567b25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11567b27 jne 0x11567aeb */
  if (!C.zf) goto L_11567aeb;
  /* 11567b29 cmp dword ptr [0x11593938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11593938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567b30 je 0x11567b4b */
  if (C.zf) goto L_11567b4b;
  /* 11567b32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567b35 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11567b38 push ecx */
  push32((uint32_t)(ECX));
  /* 11567b39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567b3c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567b3f push edx */
  push32((uint32_t)(EDX));
  /* 11567b40 call dword ptr [0x11593938] */
  call_ind((uint32_t)(r32((uint32_t)(0x11593938))), 0x11567b46u);
  /* 11567b46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567b49 jmp 0x11567b57 */
  goto L_11567b57;
L_11567b4b:;
  /* 11567b4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567b4e push eax */
  push32((uint32_t)(EAX));
  /* 11567b4f call 0x11567c40 */
  push32(0x11567b54u); f_11567c40();
  /* 11567b54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11567b57:;
  /* 11567b57 jmp 0x11567bfd */
  goto L_11567bfd;
L_11567b5c:;
  /* 11567b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567b5f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567b63 jne 0x11567ba2 */
  if (!C.zf) goto L_11567ba2;
L_11567b65:;
  /* 11567b65 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567b68 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11567b6b push eax */
  push32((uint32_t)(EAX));
  /* 11567b6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567b6f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567b72 push ecx */
  push32((uint32_t)(ECX));
  /* 11567b73 push 0x1158cb1c */
  push32((uint32_t)(0x1158cb1cu));
  /* 11567b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11567b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11567b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11567b80 call 0x11565000 */
  push32(0x11567b85u); f_11565000();
  /* 11567b85 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567b88 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567b8b jne 0x11567b8e */
  if (!C.zf) goto L_11567b8e;
  /* 11567b8d int3  */
  x86_unimpl("int3 @ 0x11567b8d");
L_11567b8e:;
  /* 11567b8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11567b90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11567b92 jne 0x11567b65 */
  if (!C.zf) goto L_11567b65;
  /* 11567b94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567b97 push eax */
  push32((uint32_t)(EAX));
  /* 11567b98 call 0x11567c40 */
  push32(0x11567b9du); f_11567c40();
  /* 11567b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567ba0 jmp 0x11567bfd */
  goto L_11567bfd;
L_11567ba2:;
  /* 11567ba2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567ba5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11567ba8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11567bae cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567bb1 jne 0x11567bfd */
  if (!C.zf) goto L_11567bfd;
L_11567bb3:;
  /* 11567bb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567bb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11567bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11567bba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567bbd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11567bc0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11567bc3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11567bc8 push eax */
  push32((uint32_t)(EAX));
  /* 11567bc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567bcc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567bcf push ecx */
  push32((uint32_t)(ECX));
  /* 11567bd0 push 0x1158cae8 */
  push32((uint32_t)(0x1158cae8u));
  /* 11567bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567bdb push 0 */
  push32((uint32_t)(0x0u));
  /* 11567bdd call 0x11565000 */
  push32(0x11567be2u); f_11565000();
  /* 11567be2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567be5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567be8 jne 0x11567beb */
  if (!C.zf) goto L_11567beb;
  /* 11567bea int3  */
  x86_unimpl("int3 @ 0x11567bea");
L_11567beb:;
  /* 11567beb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11567bed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11567bef jne 0x11567bb3 */
  if (!C.zf) goto L_11567bb3;
  /* 11567bf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567bf4 push eax */
  push32((uint32_t)(EAX));
  /* 11567bf5 call 0x11567c40 */
  push32(0x11567bfau); f_11567c40();
  /* 11567bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11567bfd:;
  /* 11567bfd jmp 0x115679d8 */
  goto L_115679d8;
L_11567c02:;
  /* 11567c02 push 9 */
  push32((uint32_t)(0x9u));
  /* 11567c04 call 0x115699e0 */
  push32(0x11567c09u); f_115699e0();
  /* 11567c09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11567c0c:;
  /* 11567c0c push 0x1158cad0 */
  push32((uint32_t)(0x1158cad0u));
  /* 11567c11 push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 11567c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11567c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11567c1e call 0x11565000 */
  push32(0x11567c23u); f_11565000();
  /* 11567c23 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567c26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567c29 jne 0x11567c2c */
  if (!C.zf) goto L_11567c2c;
  /* 11567c2b int3  */
  x86_unimpl("int3 @ 0x11567c2b");
L_11567c2c:;
  /* 11567c2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11567c2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11567c30 jne 0x11567c0c */
  if (!C.zf) goto L_11567c0c;
  /* 11567c32 pop edi */
  EDI = (pop32());
  /* 11567c33 pop esi */
  ESI = (pop32());
  /* 11567c34 pop ebx */
  EBX = (pop32());
  /* 11567c35 mov esp, ebp */
  ESP = (EBP);
  /* 11567c37 pop ebp */
  EBP = (pop32());
  /* 11567c38 ret  */
  ESPCHK(0x11567980u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c40 @ 0x11567c40 (276 bytes, 89 insns) */
void f_11567c40(void) {
  FTRACE(0x11567c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11567c41 mov ebp, esp */
  EBP = (ESP);
  /* 11567c43 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11567c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11567c47 push esi */
  push32((uint32_t)(ESI));
  /* 11567c48 push edi */
  push32((uint32_t)(EDI));
  /* 11567c49 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11567c50 jmp 0x11567c5b */
  goto L_11567c5b;
L_11567c52:;
  /* 11567c52 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11567c55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567c58 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11567c5b:;
  /* 11567c5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567c5e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567c62 jge 0x11567c6f */
  if ((C.sf==C.of)) goto L_11567c6f;
  /* 11567c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567c67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11567c6a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11567c6d jmp 0x11567c76 */
  goto L_11567c76;
L_11567c6f:;
  /* 11567c6f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11567c76:;
  /* 11567c76 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11567c79 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567c7c jge 0x11567d1c */
  if ((C.sf==C.of)) goto L_11567d1c;
  /* 11567c82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567c85 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567c88 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11567c8b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11567c8e cmp dword ptr [0x1158fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1158fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567c95 jle 0x11567cb3 */
  if ((C.zf||C.sf!=C.of)) goto L_11567cb3;
  /* 11567c97 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11567c9c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11567c9f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11567ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 11567ca6 call 0x1156bf50 */
  push32(0x11567cabu); f_1156bf50();
  /* 11567cab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567cae mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11567cb1 jmp 0x11567cd0 */
  goto L_11567cd0;
L_11567cb3:;
  /* 11567cb3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11567cb6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11567cbc mov eax, dword ptr [0x1158fc98] */
  EAX = (r32((uint32_t)(0x1158fc98)));
  /* 11567cc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11567cc3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11567cc7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11567ccd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11567cd0:;
  /* 11567cd0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567cd4 je 0x11567ce4 */
  if (C.zf) goto L_11567ce4;
  /* 11567cd6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11567cd9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11567cdf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11567ce2 jmp 0x11567ceb */
  goto L_11567ceb;
L_11567ce4:;
  /* 11567ce4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11567ceb:;
  /* 11567ceb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11567cee mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11567cf1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11567cf5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11567cf8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11567cfe push edx */
  push32((uint32_t)(EDX));
  /* 11567cff push 0x1158cbc4 */
  push32((uint32_t)(0x1158cbc4u));
  /* 11567d04 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11567d07 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11567d0a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11567d0e push ecx */
  push32((uint32_t)(ECX));
  /* 11567d0f call 0x1156be50 */
  push32(0x11567d14u); f_1156be50();
  /* 11567d14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567d17 jmp 0x11567c52 */
  goto L_11567c52;
L_11567d1c:;
  /* 11567d1c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11567d1f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11567d24:;
  /* 11567d24 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11567d27 push eax */
  push32((uint32_t)(EAX));
  /* 11567d28 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11567d2b push ecx */
  push32((uint32_t)(ECX));
  /* 11567d2c push 0x1158cbb4 */
  push32((uint32_t)(0x1158cbb4u));
  /* 11567d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567d39 call 0x11565000 */
  push32(0x11567d3eu); f_11565000();
  /* 11567d3e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567d41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567d44 jne 0x11567d47 */
  if (!C.zf) goto L_11567d47;
  /* 11567d46 int3  */
  x86_unimpl("int3 @ 0x11567d46");
L_11567d47:;
  /* 11567d47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11567d49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11567d4b jne 0x11567d24 */
  if (!C.zf) goto L_11567d24;
  /* 11567d4d pop edi */
  EDI = (pop32());
  /* 11567d4e pop esi */
  ESI = (pop32());
  /* 11567d4f pop ebx */
  EBX = (pop32());
  /* 11567d50 mov esp, ebp */
  ESP = (EBP);
  /* 11567d52 pop ebp */
  EBP = (pop32());
  /* 11567d53 ret  */
  ESPCHK(0x11567c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d60 @ 0x11567d60 (116 bytes, 46 insns) */
void f_11567d60(void) {
  FTRACE(0x11567d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11567d61 mov ebp, esp */
  EBP = (ESP);
  /* 11567d63 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11567d66 push ebx */
  push32((uint32_t)(EBX));
  /* 11567d67 push esi */
  push32((uint32_t)(ESI));
  /* 11567d68 push edi */
  push32((uint32_t)(EDI));
  /* 11567d69 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11567d6c push eax */
  push32((uint32_t)(EAX));
  /* 11567d6d call 0x115676e0 */
  push32(0x11567d72u); f_115676e0();
  /* 11567d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567d75 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567d79 jne 0x11567d94 */
  if (!C.zf) goto L_11567d94;
  /* 11567d7b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567d7f jne 0x11567d94 */
  if (!C.zf) goto L_11567d94;
  /* 11567d81 mov ecx, dword ptr [0x1158fa84] */
  ECX = (r32((uint32_t)(0x1158fa84)));
  /* 11567d87 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11567d8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11567d8c je 0x11567dcb */
  if (C.zf) goto L_11567dcb;
  /* 11567d8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567d92 je 0x11567dcb */
  if (C.zf) goto L_11567dcb;
L_11567d94:;
  /* 11567d94 push 0x1158cbcc */
  push32((uint32_t)(0x1158cbccu));
  /* 11567d99 push 0x1158c598 */
  push32((uint32_t)(0x1158c598u));
  /* 11567d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11567da0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567da6 call 0x11565000 */
  push32(0x11567dabu); f_11565000();
  /* 11567dab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567dae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567db1 jne 0x11567db4 */
  if (!C.zf) goto L_11567db4;
  /* 11567db3 int3  */
  x86_unimpl("int3 @ 0x11567db3");
L_11567db4:;
  /* 11567db4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11567db6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11567db8 jne 0x11567d94 */
  if (!C.zf) goto L_11567d94;
  /* 11567dba push 0 */
  push32((uint32_t)(0x0u));
  /* 11567dbc call 0x11567980 */
  push32(0x11567dc1u); f_11567980();
  /* 11567dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567dc4 mov eax, 1 */
  EAX = (0x1u);
  /* 11567dc9 jmp 0x11567dcd */
  goto L_11567dcd;
L_11567dcb:;
  /* 11567dcb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11567dcd:;
  /* 11567dcd pop edi */
  EDI = (pop32());
  /* 11567dce pop esi */
  ESI = (pop32());
  /* 11567dcf pop ebx */
  EBX = (pop32());
  /* 11567dd0 mov esp, ebp */
  ESP = (EBP);
  /* 11567dd2 pop ebp */
  EBP = (pop32());
  /* 11567dd3 ret  */
  ESPCHK(0x11567d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007de0 @ 0x11567de0 (197 bytes, 79 insns) */
void f_11567de0(void) {
  FTRACE(0x11567de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11567de1 mov ebp, esp */
  EBP = (ESP);
  /* 11567de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11567de4 push ebx */
  push32((uint32_t)(EBX));
  /* 11567de5 push esi */
  push32((uint32_t)(ESI));
  /* 11567de6 push edi */
  push32((uint32_t)(EDI));
  /* 11567de7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567deb jne 0x11567df2 */
  if (!C.zf) goto L_11567df2;
  /* 11567ded jmp 0x11567e9e */
  goto L_11567e9e;
L_11567df2:;
  /* 11567df2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11567df9 jmp 0x11567e04 */
  goto L_11567e04;
L_11567dfb:;
  /* 11567dfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567dfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567e01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11567e04:;
  /* 11567e04 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567e08 jge 0x11567e4e */
  if ((C.sf==C.of)) goto L_11567e4e;
L_11567e0a:;
  /* 11567e0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567e0d mov edx, dword ptr [ecx*4 + 0x1158fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1158fa94)));
  /* 11567e14 push edx */
  push32((uint32_t)(EDX));
  /* 11567e15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567e18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567e1b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11567e1f push edx */
  push32((uint32_t)(EDX));
  /* 11567e20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567e23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567e26 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11567e2a push edx */
  push32((uint32_t)(EDX));
  /* 11567e2b push 0x1158cc28 */
  push32((uint32_t)(0x1158cc28u));
  /* 11567e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e38 call 0x11565000 */
  push32(0x11567e3du); f_11565000();
  /* 11567e3d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567e40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567e43 jne 0x11567e46 */
  if (!C.zf) goto L_11567e46;
  /* 11567e45 int3  */
  x86_unimpl("int3 @ 0x11567e45");
L_11567e46:;
  /* 11567e46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567e48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567e4a jne 0x11567e0a */
  if (!C.zf) goto L_11567e0a;
  /* 11567e4c jmp 0x11567dfb */
  goto L_11567dfb;
L_11567e4e:;
  /* 11567e4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567e51 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11567e54 push edx */
  push32((uint32_t)(EDX));
  /* 11567e55 push 0x1158cc04 */
  push32((uint32_t)(0x1158cc04u));
  /* 11567e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e62 call 0x11565000 */
  push32(0x11567e67u); f_11565000();
  /* 11567e67 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567e6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567e6d jne 0x11567e70 */
  if (!C.zf) goto L_11567e70;
  /* 11567e6f int3  */
  x86_unimpl("int3 @ 0x11567e6f");
L_11567e70:;
  /* 11567e70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567e74 jne 0x11567e4e */
  if (!C.zf) goto L_11567e4e;
L_11567e76:;
  /* 11567e76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11567e79 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11567e7c push edx */
  push32((uint32_t)(EDX));
  /* 11567e7d push 0x1158cbe4 */
  push32((uint32_t)(0x1158cbe4u));
  /* 11567e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11567e8a call 0x11565000 */
  push32(0x11567e8fu); f_11565000();
  /* 11567e8f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567e92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567e95 jne 0x11567e98 */
  if (!C.zf) goto L_11567e98;
  /* 11567e97 int3  */
  x86_unimpl("int3 @ 0x11567e97");
L_11567e98:;
  /* 11567e98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11567e9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567e9c jne 0x11567e76 */
  if (!C.zf) goto L_11567e76;
L_11567e9e:;
  /* 11567e9e pop edi */
  EDI = (pop32());
  /* 11567e9f pop esi */
  ESI = (pop32());
  /* 11567ea0 pop ebx */
  EBX = (pop32());
  /* 11567ea1 mov esp, ebp */
  ESP = (EBP);
  /* 11567ea3 pop ebp */
  EBP = (pop32());
  /* 11567ea4 ret  */
  ESPCHK(0x11567de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007eb0 @ 0x11567eb0 (329 bytes, 102 insns) */
void f_11567eb0(void) {
  FTRACE(0x11567eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11567eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11567eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11567eb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11567eb6 cmp dword ptr [0x11593ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11593ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567ebd jne 0x11567ec4 */
  if (!C.zf) goto L_11567ec4;
  /* 11567ebf call 0x1156c7f0 */
  push32(0x11567ec4u); f_1156c7f0();
L_11567ec4:;
  /* 11567ec4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11567ecb mov eax, dword ptr [0x11591f78] */
  EAX = (r32((uint32_t)(0x11591f78)));
  /* 11567ed0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11567ed3:;
  /* 11567ed3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567ed6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11567ed9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11567edb je 0x11567f09 */
  if (C.zf) goto L_11567f09;
  /* 11567edd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567ee0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11567ee3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567ee6 je 0x11567ef1 */
  if (C.zf) goto L_11567ef1;
  /* 11567ee8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567eeb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567eee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11567ef1:;
  /* 11567ef1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567ef4 push eax */
  push32((uint32_t)(EAX));
  /* 11567ef5 call 0x11568d70 */
  push32(0x11567efau); f_11568d70();
  /* 11567efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567efd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567f00 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11567f04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11567f07 jmp 0x11567ed3 */
  goto L_11567ed3;
L_11567f09:;
  /* 11567f09 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11567f0b push 0x1158cc48 */
  push32((uint32_t)(0x1158cc48u));
  /* 11567f10 push 2 */
  push32((uint32_t)(0x2u));
  /* 11567f12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11567f15 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11567f1c push ecx */
  push32((uint32_t)(ECX));
  /* 11567f1d call 0x11565f40 */
  push32(0x11567f22u); f_11565f40();
  /* 11567f22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567f25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11567f28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11567f2b mov dword ptr [0x11591fac], edx */
  w32((uint32_t)(0x11591fac), (EDX));
  /* 11567f31 cmp dword ptr [0x11591fac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591fac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567f38 jne 0x11567f44 */
  if (!C.zf) goto L_11567f44;
  /* 11567f3a push 9 */
  push32((uint32_t)(0x9u));
  /* 11567f3c call 0x11564eb0 */
  push32(0x11567f41u); f_11564eb0();
  /* 11567f41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11567f44:;
  /* 11567f44 mov eax, dword ptr [0x11591f78] */
  EAX = (r32((uint32_t)(0x11591f78)));
  /* 11567f49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11567f4c jmp 0x11567f57 */
  goto L_11567f57;
L_11567f4e:;
  /* 11567f4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567f51 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567f54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11567f57:;
  /* 11567f57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567f5a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11567f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11567f5f je 0x11567fc7 */
  if (C.zf) goto L_11567fc7;
  /* 11567f61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567f64 push ecx */
  push32((uint32_t)(ECX));
  /* 11567f65 call 0x11568d70 */
  push32(0x11567f6au); f_11568d70();
  /* 11567f6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567f6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567f70 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11567f73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567f76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11567f79 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567f7c je 0x11567fc5 */
  if (C.zf) goto L_11567fc5;
  /* 11567f7e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11567f80 push 0x1158cc48 */
  push32((uint32_t)(0x1158cc48u));
  /* 11567f85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11567f87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11567f8a push ecx */
  push32((uint32_t)(ECX));
  /* 11567f8b call 0x11565f40 */
  push32(0x11567f90u); f_11565f40();
  /* 11567f90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567f93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11567f96 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11567f98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11567f9b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11567f9e jne 0x11567faa */
  if (!C.zf) goto L_11567faa;
  /* 11567fa0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11567fa2 call 0x11564eb0 */
  push32(0x11567fa7u); f_11564eb0();
  /* 11567fa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11567faa:;
  /* 11567faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11567fad push ecx */
  push32((uint32_t)(ECX));
  /* 11567fae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11567fb1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11567fb3 push eax */
  push32((uint32_t)(EAX));
  /* 11567fb4 call 0x11568ef0 */
  push32(0x11567fb9u); f_11568ef0();
  /* 11567fb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567fbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11567fbf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11567fc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11567fc5:;
  /* 11567fc5 jmp 0x11567f4e */
  goto L_11567f4e;
L_11567fc7:;
  /* 11567fc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11567fc9 mov edx, dword ptr [0x11591f78] */
  EDX = (r32((uint32_t)(0x11591f78)));
  /* 11567fcf push edx */
  push32((uint32_t)(EDX));
  /* 11567fd0 call 0x115669d0 */
  push32(0x11567fd5u); f_115669d0();
  /* 11567fd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11567fd8 mov dword ptr [0x11591f78], 0 */
  w32((uint32_t)(0x11591f78), (0x0u));
  /* 11567fe2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11567fe5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11567feb mov dword ptr [0x11593aa0], 1 */
  w32((uint32_t)(0x11593aa0), (0x1u));
  /* 11567ff5 mov esp, ebp */
  ESP = (EBP);
  /* 11567ff7 pop ebp */
  EBP = (pop32());
  /* 11567ff8 ret  */
  ESPCHK(0x11567eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x11568000 (216 bytes, 69 insns) */
void f_11568000(void) {
  FTRACE(0x11568000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568000 push ebp */
  push32((uint32_t)(EBP));
  /* 11568001 mov ebp, esp */
  EBP = (ESP);
  /* 11568003 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568006 cmp dword ptr [0x11593ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11593ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156800d jne 0x11568014 */
  if (!C.zf) goto L_11568014;
  /* 1156800f call 0x1156c7f0 */
  push32(0x11568014u); f_1156c7f0();
L_11568014:;
  /* 11568014 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11568019 push 0x11591fe8 */
  push32((uint32_t)(0x11591fe8u));
  /* 1156801e push 0 */
  push32((uint32_t)(0x0u));
  /* 11568020 call dword ptr [0x115943b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943b8))), 0x11568026u);
  /* 11568026 mov dword ptr [0x11591fbc], 0x11591fe8 */
  w32((uint32_t)(0x11591fbc), (0x11591fe8u));
  /* 11568030 mov eax, dword ptr [0x11593acc] */
  EAX = (r32((uint32_t)(0x11593acc)));
  /* 11568035 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11568038 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156803a jne 0x11568047 */
  if (!C.zf) goto L_11568047;
  /* 1156803c mov edx, dword ptr [0x11591fbc] */
  EDX = (r32((uint32_t)(0x11591fbc)));
  /* 11568042 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11568045 jmp 0x1156804f */
  goto L_1156804f;
L_11568047:;
  /* 11568047 mov eax, dword ptr [0x11593acc] */
  EAX = (r32((uint32_t)(0x11593acc)));
  /* 1156804c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1156804f:;
  /* 1156804f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11568052 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11568055 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11568058 push edx */
  push32((uint32_t)(EDX));
  /* 11568059 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1156805c push eax */
  push32((uint32_t)(EAX));
  /* 1156805d push 0 */
  push32((uint32_t)(0x0u));
  /* 1156805f push 0 */
  push32((uint32_t)(0x0u));
  /* 11568061 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11568064 push ecx */
  push32((uint32_t)(ECX));
  /* 11568065 call 0x115680e0 */
  push32(0x1156806au); f_115680e0();
  /* 1156806a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156806d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11568072 push 0x1158cc54 */
  push32((uint32_t)(0x1158cc54u));
  /* 11568077 push 2 */
  push32((uint32_t)(0x2u));
  /* 11568079 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156807c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156807f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11568082 push ecx */
  push32((uint32_t)(ECX));
  /* 11568083 call 0x11565f40 */
  push32(0x11568088u); f_11565f40();
  /* 11568088 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156808b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156808e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568092 jne 0x1156809e */
  if (!C.zf) goto L_1156809e;
  /* 11568094 push 8 */
  push32((uint32_t)(0x8u));
  /* 11568096 call 0x11564eb0 */
  push32(0x1156809bu); f_11564eb0();
  /* 1156809b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156809e:;
  /* 1156809e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 115680a1 push edx */
  push32((uint32_t)(EDX));
  /* 115680a2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 115680a5 push eax */
  push32((uint32_t)(EAX));
  /* 115680a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115680a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115680ac lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 115680af push eax */
  push32((uint32_t)(EAX));
  /* 115680b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115680b3 push ecx */
  push32((uint32_t)(ECX));
  /* 115680b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115680b7 push edx */
  push32((uint32_t)(EDX));
  /* 115680b8 call 0x115680e0 */
  push32(0x115680bdu); f_115680e0();
  /* 115680bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115680c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115680c3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115680c6 mov dword ptr [0x11591fa0], eax */
  w32((uint32_t)(0x11591fa0), (EAX));
  /* 115680cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115680ce mov dword ptr [0x11591fa4], ecx */
  w32((uint32_t)(0x11591fa4), (ECX));
  /* 115680d4 mov esp, ebp */
  ESP = (EBP);
  /* 115680d6 pop ebp */
  EBP = (pop32());
  /* 115680d7 ret  */
  ESPCHK(0x11568000u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x115680e0 (1060 bytes, 360 insns) */
void f_115680e0(void) {
  FTRACE(0x115680e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115680e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115680e1 mov ebp, esp */
  EBP = (ESP);
  /* 115680e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115680e6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115680e9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115680ef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115680f2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 115680f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 115680fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115680fe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568102 je 0x11568115 */
  if (C.zf) goto L_11568115;
  /* 11568104 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568107 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156810a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1156810c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156810f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568112 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11568115:;
  /* 11568115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568118 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1156811b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156811e jne 0x115681ed */
  if (!C.zf) goto L_115681ed;
L_11568124:;
  /* 11568124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568127 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156812a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156812d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568130 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11568133 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568136 je 0x115681b2 */
  if (C.zf) goto L_115681b2;
  /* 11568138 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156813b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1156813e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11568140 je 0x115681b2 */
  if (C.zf) goto L_115681b2;
  /* 11568142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568145 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11568147 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11568149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156814b mov al, byte ptr [edx + 0x11593801] */
  AL = (r8((uint32_t)(EDX + 0x11593801)));
  /* 11568151 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11568154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11568156 je 0x11568187 */
  if (C.zf) goto L_11568187;
  /* 11568158 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156815b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156815d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568160 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11568163 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11568165 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568169 je 0x11568187 */
  if (C.zf) goto L_11568187;
  /* 1156816b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156816e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568171 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11568173 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11568175 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568178 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156817b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1156817e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568181 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568184 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11568187:;
  /* 11568187 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156818a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156818c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156818f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11568192 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11568194 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568198 je 0x115681ad */
  if (C.zf) goto L_115681ad;
  /* 1156819a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156819d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115681a0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 115681a2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 115681a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115681a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115681aa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_115681ad:;
  /* 115681ad jmp 0x11568124 */
  goto L_11568124;
L_115681b2:;
  /* 115681b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115681b5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115681b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115681ba mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115681bd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 115681bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115681c3 je 0x115681d4 */
  if (C.zf) goto L_115681d4;
  /* 115681c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115681c8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 115681cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115681ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115681d1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_115681d4:;
  /* 115681d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115681d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115681da cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115681dd jne 0x115681e8 */
  if (!C.zf) goto L_115681e8;
  /* 115681df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115681e2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115681e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_115681e8:;
  /* 115681e8 jmp 0x115682bc */
  goto L_115682bc;
L_115681ed:;
  /* 115681ed mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115681f0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115681f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115681f5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115681f8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115681fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115681fe je 0x11568213 */
  if (C.zf) goto L_11568213;
  /* 11568200 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568206 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11568208 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1156820a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156820d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568210 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11568213:;
  /* 11568213 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568216 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11568218 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1156821b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156821e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568221 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11568224 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11568227 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156822d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156822f mov dl, byte ptr [ecx + 0x11593801] */
  DL = (r8((uint32_t)(ECX + 0x11593801)));
  /* 11568235 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11568238 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156823a je 0x1156826b */
  if (C.zf) goto L_1156826b;
  /* 1156823c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156823f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11568241 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568244 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11568247 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11568249 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156824d je 0x11568262 */
  if (C.zf) goto L_11568262;
  /* 1156824f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568255 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11568257 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11568259 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156825c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156825f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11568262:;
  /* 11568262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568265 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568268 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1156826b:;
  /* 1156826b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156826e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11568274 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568277 je 0x11568297 */
  if (C.zf) goto L_11568297;
  /* 11568279 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156827c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11568281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11568283 je 0x11568297 */
  if (C.zf) goto L_11568297;
  /* 11568285 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11568288 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156828e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568291 jne 0x115681ed */
  if (!C.zf) goto L_115681ed;
L_11568297:;
  /* 11568297 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156829a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 115682a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115682a2 jne 0x115682af */
  if (!C.zf) goto L_115682af;
  /* 115682a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115682a7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115682aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115682ad jmp 0x115682bc */
  goto L_115682bc;
L_115682af:;
  /* 115682af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115682b3 je 0x115682bc */
  if (C.zf) goto L_115682bc;
  /* 115682b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115682b8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_115682bc:;
  /* 115682bc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_115682c3:;
  /* 115682c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115682c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115682c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115682cb je 0x115682ee */
  if (C.zf) goto L_115682ee;
L_115682cd:;
  /* 115682cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115682d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115682d3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115682d6 je 0x115682e3 */
  if (C.zf) goto L_115682e3;
  /* 115682d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115682db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115682de cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115682e1 jne 0x115682ee */
  if (!C.zf) goto L_115682ee;
L_115682e3:;
  /* 115682e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115682e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115682e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 115682ec jmp 0x115682cd */
  goto L_115682cd;
L_115682ee:;
  /* 115682ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115682f1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115682f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115682f6 jne 0x115682fd */
  if (!C.zf) goto L_115682fd;
  /* 115682f8 jmp 0x115684db */
  goto L_115684db;
L_115682fd:;
  /* 115682fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568301 je 0x11568314 */
  if (C.zf) goto L_11568314;
  /* 11568303 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568306 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568309 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1156830b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156830e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568311 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11568314:;
  /* 11568314 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11568317 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11568319 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156831c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156831f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11568321:;
  /* 11568321 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11568328 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1156832f:;
  /* 1156832f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568332 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11568335 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568338 jne 0x1156834e */
  if (!C.zf) goto L_1156834e;
  /* 1156833a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156833d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568340 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11568343 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11568346 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568349 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1156834c jmp 0x1156832f */
  goto L_1156832f;
L_1156834e:;
  /* 1156834e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568351 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11568354 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568357 jne 0x115683aa */
  if (!C.zf) goto L_115683aa;
  /* 11568359 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156835c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156835e mov ecx, 2 */
  ECX = (0x2u);
  /* 11568363 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11568365 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11568367 jne 0x115683a2 */
  if (!C.zf) goto L_115683a2;
  /* 11568369 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156836d je 0x1156838f */
  if (C.zf) goto L_1156838f;
  /* 1156836f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568372 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11568376 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568379 jne 0x11568386 */
  if (!C.zf) goto L_11568386;
  /* 1156837b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156837e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568381 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11568384 jmp 0x1156838d */
  goto L_1156838d;
L_11568386:;
  /* 11568386 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1156838d:;
  /* 1156838d jmp 0x11568396 */
  goto L_11568396;
L_1156838f:;
  /* 1156838f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11568396:;
  /* 11568396 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11568398 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156839c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1156839f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_115683a2:;
  /* 115683a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115683a5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 115683a7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_115683aa:;
  /* 115683aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115683ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115683b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115683b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 115683b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 115683b8 je 0x115683de */
  if (C.zf) goto L_115683de;
  /* 115683ba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115683be je 0x115683cf */
  if (C.zf) goto L_115683cf;
  /* 115683c0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 115683c3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 115683c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115683c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115683cc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_115683cf:;
  /* 115683cf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115683d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115683d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115683d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 115683da mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115683dc jmp 0x115683aa */
  goto L_115683aa;
L_115683de:;
  /* 115683de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115683e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 115683e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 115683e6 je 0x11568404 */
  if (C.zf) goto L_11568404;
  /* 115683e8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115683ec jne 0x11568409 */
  if (!C.zf) goto L_11568409;
  /* 115683ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115683f1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115683f4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115683f7 je 0x11568404 */
  if (C.zf) goto L_11568404;
  /* 115683f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115683fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 115683ff cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568402 jne 0x11568409 */
  if (!C.zf) goto L_11568409;
L_11568404:;
  /* 11568404 jmp 0x115684b4 */
  goto L_115684b4;
L_11568409:;
  /* 11568409 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156840d je 0x115684a6 */
  if (C.zf) goto L_115684a6;
  /* 11568413 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568417 je 0x1156846d */
  if (C.zf) goto L_1156846d;
  /* 11568419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156841c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156841e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11568420 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11568422 mov cl, byte ptr [eax + 0x11593801] */
  CL = (r8((uint32_t)(EAX + 0x11593801)));
  /* 11568428 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1156842b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156842d je 0x11568458 */
  if (C.zf) goto L_11568458;
  /* 1156842f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568432 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568435 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11568437 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11568439 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156843c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156843f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11568442 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568445 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568448 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156844b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156844e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11568450 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568453 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11568456 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11568458:;
  /* 11568458 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156845b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156845e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11568460 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11568462 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568465 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568468 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1156846b jmp 0x11568499 */
  goto L_11568499;
L_1156846d:;
  /* 1156846d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568470 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11568472 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11568474 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11568476 mov cl, byte ptr [eax + 0x11593801] */
  CL = (r8((uint32_t)(EAX + 0x11593801)));
  /* 1156847c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1156847f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11568481 je 0x11568499 */
  if (C.zf) goto L_11568499;
  /* 11568483 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568486 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568489 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156848c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156848f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11568491 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568494 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11568497 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11568499:;
  /* 11568499 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156849c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156849e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115684a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115684a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_115684a6:;
  /* 115684a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115684a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115684ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 115684af jmp 0x11568321 */
  goto L_11568321;
L_115684b4:;
  /* 115684b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115684b8 je 0x115684c9 */
  if (C.zf) goto L_115684c9;
  /* 115684ba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 115684bd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 115684c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 115684c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115684c6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_115684c9:;
  /* 115684c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 115684cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 115684ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115684d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 115684d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 115684d6 jmp 0x115682c3 */
  goto L_115682c3;
L_115684db:;
  /* 115684db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115684df je 0x115684f3 */
  if (C.zf) goto L_115684f3;
  /* 115684e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115684e4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 115684ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115684ed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115684f0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_115684f3:;
  /* 115684f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 115684f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115684f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115684fb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 115684fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11568500 mov esp, ebp */
  ESP = (EBP);
  /* 11568502 pop ebp */
  EBP = (pop32());
  /* 11568503 ret  */
  ESPCHK(0x115680e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008510 @ 0x11568510 (537 bytes, 173 insns) */
void f_11568510(void) {
  FTRACE(0x11568510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568510 push ebp */
  push32((uint32_t)(EBP));
  /* 11568511 mov ebp, esp */
  EBP = (ESP);
  /* 11568513 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568516 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1156851d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11568524 cmp dword ptr [0x115920ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115920ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156852b jne 0x1156856a */
  if (!C.zf) goto L_1156856a;
  /* 1156852d call dword ptr [0x11594370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594370))), 0x11568533u);
  /* 11568533 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11568536 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156853a je 0x11568548 */
  if (C.zf) goto L_11568548;
  /* 1156853c mov dword ptr [0x115920ec], 1 */
  w32((uint32_t)(0x115920ec), (0x1u));
  /* 11568546 jmp 0x1156856a */
  goto L_1156856a;
L_11568548:;
  /* 11568548 call dword ptr [0x11594374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594374))), 0x1156854eu);
  /* 1156854e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11568551 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568555 je 0x11568563 */
  if (C.zf) goto L_11568563;
  /* 11568557 mov dword ptr [0x115920ec], 2 */
  w32((uint32_t)(0x115920ec), (0x2u));
  /* 11568561 jmp 0x1156856a */
  goto L_1156856a;
L_11568563:;
  /* 11568563 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11568565 jmp 0x11568725 */
  goto L_11568725;
L_1156856a:;
  /* 1156856a cmp dword ptr [0x115920ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115920ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568571 jne 0x1156866e */
  if (!C.zf) goto L_1156866e;
  /* 11568577 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156857b jne 0x11568593 */
  if (!C.zf) goto L_11568593;
  /* 1156857d call dword ptr [0x11594370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594370))), 0x11568583u);
  /* 11568583 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11568586 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156858a jne 0x11568593 */
  if (!C.zf) goto L_11568593;
  /* 1156858c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156858e jmp 0x11568725 */
  goto L_11568725;
L_11568593:;
  /* 11568593 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11568596 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11568599:;
  /* 11568599 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156859c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156859e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 115685a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115685a3 je 0x115685c5 */
  if (C.zf) goto L_115685c5;
  /* 115685a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115685a8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115685ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115685ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115685b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115685b3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 115685b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115685b8 jne 0x115685c3 */
  if (!C.zf) goto L_115685c3;
  /* 115685ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115685bd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115685c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_115685c3:;
  /* 115685c3 jmp 0x11568599 */
  goto L_11568599;
L_115685c5:;
  /* 115685c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115685c8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115685cb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 115685cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115685d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 115685d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115685d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115685d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115685d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 115685db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115685de push edx */
  push32((uint32_t)(EDX));
  /* 115685df mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 115685e2 push eax */
  push32((uint32_t)(EAX));
  /* 115685e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 115685e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 115685e7 call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x115685edu);
  /* 115685ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115685f0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115685f4 je 0x11568614 */
  if (C.zf) goto L_11568614;
  /* 115685f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 115685f8 push 0x1158cc60 */
  push32((uint32_t)(0x1158cc60u));
  /* 115685fd push 2 */
  push32((uint32_t)(0x2u));
  /* 115685ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11568602 push ecx */
  push32((uint32_t)(ECX));
  /* 11568603 call 0x11565f40 */
  push32(0x11568608u); f_11565f40();
  /* 11568608 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156860b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156860e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568612 jne 0x11568625 */
  if (!C.zf) goto L_11568625;
L_11568614:;
  /* 11568614 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11568617 push edx */
  push32((uint32_t)(EDX));
  /* 11568618 call dword ptr [0x1159437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159437c))), 0x1156861eu);
  /* 1156861e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11568620 jmp 0x11568725 */
  goto L_11568725;
L_11568625:;
  /* 11568625 push 0 */
  push32((uint32_t)(0x0u));
  /* 11568627 push 0 */
  push32((uint32_t)(0x0u));
  /* 11568629 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156862c push eax */
  push32((uint32_t)(EAX));
  /* 1156862d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11568630 push ecx */
  push32((uint32_t)(ECX));
  /* 11568631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568634 push edx */
  push32((uint32_t)(EDX));
  /* 11568635 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11568638 push eax */
  push32((uint32_t)(EAX));
  /* 11568639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156863b push 0 */
  push32((uint32_t)(0x0u));
  /* 1156863d call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x11568643u);
  /* 11568643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11568645 jne 0x1156865c */
  if (!C.zf) goto L_1156865c;
  /* 11568647 push 2 */
  push32((uint32_t)(0x2u));
  /* 11568649 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156864c push ecx */
  push32((uint32_t)(ECX));
  /* 1156864d call 0x115669d0 */
  push32(0x11568652u); f_115669d0();
  /* 11568652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568655 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1156865c:;
  /* 1156865c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156865f push edx */
  push32((uint32_t)(EDX));
  /* 11568660 call dword ptr [0x1159437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159437c))), 0x11568666u);
  /* 11568666 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11568669 jmp 0x11568725 */
  goto L_11568725;
L_1156866e:;
  /* 1156866e cmp dword ptr [0x115920ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115920ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568675 jne 0x11568723 */
  if (!C.zf) goto L_11568723;
  /* 1156867b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156867f jne 0x11568697 */
  if (!C.zf) goto L_11568697;
  /* 11568681 call dword ptr [0x11594374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594374))), 0x11568687u);
  /* 11568687 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156868a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156868e jne 0x11568697 */
  if (!C.zf) goto L_11568697;
  /* 11568690 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11568692 jmp 0x11568725 */
  goto L_11568725;
L_11568697:;
  /* 11568697 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156869a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1156869d:;
  /* 1156869d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115686a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115686a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115686a5 je 0x115686c5 */
  if (C.zf) goto L_115686c5;
  /* 115686a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115686aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115686ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115686b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115686b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 115686b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 115686b8 jne 0x115686c3 */
  if (!C.zf) goto L_115686c3;
  /* 115686ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115686bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115686c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_115686c3:;
  /* 115686c3 jmp 0x1156869d */
  goto L_1156869d;
L_115686c5:;
  /* 115686c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115686c8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115686cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115686ce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115686d1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 115686d6 push 0x1158cc60 */
  push32((uint32_t)(0x1158cc60u));
  /* 115686db push 2 */
  push32((uint32_t)(0x2u));
  /* 115686dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 115686e0 push edx */
  push32((uint32_t)(EDX));
  /* 115686e1 call 0x11565f40 */
  push32(0x115686e6u); f_11565f40();
  /* 115686e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115686e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115686ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115686f0 jne 0x11568700 */
  if (!C.zf) goto L_11568700;
  /* 115686f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 115686f5 push eax */
  push32((uint32_t)(EAX));
  /* 115686f6 call dword ptr [0x11594380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594380))), 0x115686fcu);
  /* 115686fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115686fe jmp 0x11568725 */
  goto L_11568725;
L_11568700:;
  /* 11568700 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11568703 push ecx */
  push32((uint32_t)(ECX));
  /* 11568704 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11568707 push edx */
  push32((uint32_t)(EDX));
  /* 11568708 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156870b push eax */
  push32((uint32_t)(EAX));
  /* 1156870c call 0x1156c820 */
  push32(0x11568711u); f_1156c820();
  /* 11568711 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568714 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11568717 push ecx */
  push32((uint32_t)(ECX));
  /* 11568718 call dword ptr [0x11594380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594380))), 0x1156871eu);
  /* 1156871e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11568721 jmp 0x11568725 */
  goto L_11568725;
L_11568723:;
  /* 11568723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11568725:;
  /* 11568725 mov esp, ebp */
  ESP = (EBP);
  /* 11568727 pop ebp */
  EBP = (pop32());
  /* 11568728 ret  */
  ESPCHK(0x11568510u, _esp0);
  ESP += 4; return;
}

/* FUN_10008730 @ 0x11568730 (77 bytes, 25 insns) */
void f_11568730(void) {
  FTRACE(0x11568730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568730 push ebp */
  push32((uint32_t)(EBP));
  /* 11568731 mov ebp, esp */
  EBP = (ESP);
  /* 11568733 push 0 */
  push32((uint32_t)(0x0u));
  /* 11568735 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1156873a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156873c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568740 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11568743 push eax */
  push32((uint32_t)(EAX));
  /* 11568744 call dword ptr [0x11594368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594368))), 0x1156874au);
  /* 1156874a mov dword ptr [0x1159392c], eax */
  w32((uint32_t)(0x1159392c), (EAX));
  /* 1156874f cmp dword ptr [0x1159392c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159392c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568756 jne 0x1156875c */
  if (!C.zf) goto L_1156875c;
  /* 11568758 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156875a jmp 0x1156877b */
  goto L_1156877b;
L_1156875c:;
  /* 1156875c call 0x1156a1e0 */
  push32(0x11568761u); f_1156a1e0();
  /* 11568761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11568763 jne 0x11568776 */
  if (!C.zf) goto L_11568776;
  /* 11568765 mov ecx, dword ptr [0x1159392c] */
  ECX = (r32((uint32_t)(0x1159392c)));
  /* 1156876b push ecx */
  push32((uint32_t)(ECX));
  /* 1156876c call dword ptr [0x1159436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159436c))), 0x11568772u);
  /* 11568772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11568774 jmp 0x1156877b */
  goto L_1156877b;
L_11568776:;
  /* 11568776 mov eax, 1 */
  EAX = (0x1u);
L_1156877b:;
  /* 1156877b pop ebp */
  EBP = (pop32());
  /* 1156877c ret  */
  ESPCHK(0x11568730u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x11568780 (156 bytes, 48 insns) */
void f_11568780(void) {
  FTRACE(0x11568780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568780 push ebp */
  push32((uint32_t)(EBP));
  /* 11568781 mov ebp, esp */
  EBP = (ESP);
  /* 11568783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568786 mov eax, dword ptr [0x11593928] */
  EAX = (r32((uint32_t)(0x11593928)));
  /* 1156878b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156878e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11568795 jmp 0x115687a0 */
  goto L_115687a0;
L_11568797:;
  /* 11568797 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156879a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156879d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_115687a0:;
  /* 115687a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115687a3 cmp edx, dword ptr [0x11593924] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11593924))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115687a9 jge 0x115687f6 */
  if ((C.sf==C.of)) goto L_115687f6;
  /* 115687ab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 115687b0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 115687b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115687b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 115687bb push ecx */
  push32((uint32_t)(ECX));
  /* 115687bc call dword ptr [0x11594360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594360))), 0x115687c2u);
  /* 115687c2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 115687c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 115687c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115687cc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 115687cf push eax */
  push32((uint32_t)(EAX));
  /* 115687d0 call dword ptr [0x11594360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594360))), 0x115687d6u);
  /* 115687d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115687d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 115687dc push edx */
  push32((uint32_t)(EDX));
  /* 115687dd push 0 */
  push32((uint32_t)(0x0u));
  /* 115687df mov eax, dword ptr [0x1159392c] */
  EAX = (r32((uint32_t)(0x1159392c)));
  /* 115687e4 push eax */
  push32((uint32_t)(EAX));
  /* 115687e5 call dword ptr [0x11594364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594364))), 0x115687ebu);
  /* 115687eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115687ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115687f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115687f4 jmp 0x11568797 */
  goto L_11568797;
L_115687f6:;
  /* 115687f6 mov edx, dword ptr [0x11593928] */
  EDX = (r32((uint32_t)(0x11593928)));
  /* 115687fc push edx */
  push32((uint32_t)(EDX));
  /* 115687fd push 0 */
  push32((uint32_t)(0x0u));
  /* 115687ff mov eax, dword ptr [0x1159392c] */
  EAX = (r32((uint32_t)(0x1159392c)));
  /* 11568804 push eax */
  push32((uint32_t)(EAX));
  /* 11568805 call dword ptr [0x11594364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594364))), 0x1156880bu);
  /* 1156880b mov ecx, dword ptr [0x1159392c] */
  ECX = (r32((uint32_t)(0x1159392c)));
  /* 11568811 push ecx */
  push32((uint32_t)(ECX));
  /* 11568812 call dword ptr [0x1159436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159436c))), 0x11568818u);
  /* 11568818 mov esp, ebp */
  ESP = (EBP);
  /* 1156881a pop ebp */
  EBP = (pop32());
  /* 1156881b ret  */
  ESPCHK(0x11568780u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11568820 (73 bytes, 19 insns) */
void f_11568820(void) {
  FTRACE(0x11568820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568820 push ebp */
  push32((uint32_t)(EBP));
  /* 11568821 mov ebp, esp */
  EBP = (ESP);
  /* 11568823 cmp dword ptr [0x11591f80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11591f80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156882a je 0x1156883e */
  if (C.zf) goto L_1156883e;
  /* 1156882c cmp dword ptr [0x11591f80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568833 jne 0x11568867 */
  if (!C.zf) goto L_11568867;
  /* 11568835 cmp dword ptr [0x11591f84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11591f84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156883c jne 0x11568867 */
  if (!C.zf) goto L_11568867;
L_1156883e:;
  /* 1156883e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11568843 call 0x11568870 */
  push32(0x11568848u); f_11568870();
  /* 11568848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156884b cmp dword ptr [0x115920f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115920f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568852 je 0x1156885a */
  if (C.zf) goto L_1156885a;
  /* 11568854 call dword ptr [0x115920f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115920f0))), 0x1156885au);
L_1156885a:;
  /* 1156885a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1156885f call 0x11568870 */
  push32(0x11568864u); f_11568870();
  /* 11568864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11568867:;
  /* 11568867 pop ebp */
  EBP = (pop32());
  /* 11568868 ret  */
  ESPCHK(0x11568820u, _esp0);
  ESP += 4; return;
}

/* FUN_10008870 @ 0x11568870 (447 bytes, 131 insns) */
void f_11568870(void) {
  FTRACE(0x11568870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568870 push ebp */
  push32((uint32_t)(EBP));
  /* 11568871 mov ebp, esp */
  EBP = (ESP);
  /* 11568873 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568879 push ebx */
  push32((uint32_t)(EBX));
  /* 1156887a push esi */
  push32((uint32_t)(ESI));
  /* 1156887b push edi */
  push32((uint32_t)(EDI));
  /* 1156887c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11568883 jmp 0x1156888e */
  goto L_1156888e;
L_11568885:;
  /* 11568885 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568888 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156888b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1156888e:;
  /* 1156888e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568892 jae 0x115688a7 */
  if (!C.cf) goto L_115688a7;
  /* 11568894 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568897 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156889a cmp edx, dword ptr [ecx*8 + 0x1158fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1158fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115688a1 jne 0x115688a5 */
  if (!C.zf) goto L_115688a5;
  /* 115688a3 jmp 0x115688a7 */
  goto L_115688a7;
L_115688a5:;
  /* 115688a5 jmp 0x11568885 */
  goto L_11568885;
L_115688a7:;
  /* 115688a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115688aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 115688ad cmp ecx, dword ptr [eax*8 + 0x1158fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1158fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115688b4 jne 0x11568a28 */
  if (!C.zf) goto L_11568a28;
  /* 115688ba cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115688c1 je 0x115688e4 */
  if (C.zf) goto L_115688e4;
  /* 115688c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115688c6 mov eax, dword ptr [edx*8 + 0x1158fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1158fab4)));
  /* 115688cd push eax */
  push32((uint32_t)(EAX));
  /* 115688ce push 0 */
  push32((uint32_t)(0x0u));
  /* 115688d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 115688d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 115688d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 115688d6 call 0x11565000 */
  push32(0x115688dbu); f_11565000();
  /* 115688db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115688de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115688e1 jne 0x115688e4 */
  if (!C.zf) goto L_115688e4;
  /* 115688e3 int3  */
  x86_unimpl("int3 @ 0x115688e3");
L_115688e4:;
  /* 115688e4 cmp dword ptr [0x11591f80], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11591f80))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115688eb je 0x115688ff */
  if (C.zf) goto L_115688ff;
  /* 115688ed cmp dword ptr [0x11591f80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11591f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115688f4 jne 0x11568938 */
  if (!C.zf) goto L_11568938;
  /* 115688f6 cmp dword ptr [0x11591f84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11591f84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115688fd jne 0x11568938 */
  if (!C.zf) goto L_11568938;
L_115688ff:;
  /* 115688ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11568901 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11568904 push ecx */
  push32((uint32_t)(ECX));
  /* 11568905 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568908 mov eax, dword ptr [edx*8 + 0x1158fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1158fab4)));
  /* 1156890f push eax */
  push32((uint32_t)(EAX));
  /* 11568910 call 0x11568d70 */
  push32(0x11568915u); f_11568d70();
  /* 11568915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568918 push eax */
  push32((uint32_t)(EAX));
  /* 11568919 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156891c mov edx, dword ptr [ecx*8 + 0x1158fab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1158fab4)));
  /* 11568923 push edx */
  push32((uint32_t)(EDX));
  /* 11568924 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11568926 call dword ptr [0x1159439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159439c))), 0x1156892cu);
  /* 1156892c push eax */
  push32((uint32_t)(EAX));
  /* 1156892d call dword ptr [0x115943a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943a0))), 0x11568933u);
  /* 11568933 jmp 0x11568a28 */
  goto L_11568a28;
L_11568938:;
  /* 11568938 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156893f je 0x11568a28 */
  if (C.zf) goto L_11568a28;
  /* 11568945 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1156894a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11568950 push eax */
  push32((uint32_t)(EAX));
  /* 11568951 push 0 */
  push32((uint32_t)(0x0u));
  /* 11568953 call dword ptr [0x115943b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943b8))), 0x11568959u);
  /* 11568959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156895b jne 0x11568971 */
  if (!C.zf) goto L_11568971;
  /* 1156895d push 0x1158c4c8 */
  push32((uint32_t)(0x1158c4c8u));
  /* 11568962 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11568968 push ecx */
  push32((uint32_t)(ECX));
  /* 11568969 call 0x11568ef0 */
  push32(0x1156896eu); f_11568ef0();
  /* 1156896e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11568971:;
  /* 11568971 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11568977 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1156897a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156897d push eax */
  push32((uint32_t)(EAX));
  /* 1156897e call 0x11568d70 */
  push32(0x11568983u); f_11568d70();
  /* 11568983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568986 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568989 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156898c jbe 0x115689ba */
  if ((C.cf||C.zf)) goto L_115689ba;
  /* 1156898e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11568994 push ecx */
  push32((uint32_t)(ECX));
  /* 11568995 call 0x11568d70 */
  push32(0x1156899au); f_11568d70();
  /* 1156899a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156899d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 115689a0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 115689a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115689a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 115689a9 push 0x1158c4c4 */
  push32((uint32_t)(0x1158c4c4u));
  /* 115689ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 115689b1 push ecx */
  push32((uint32_t)(ECX));
  /* 115689b2 call 0x11569760 */
  push32(0x115689b7u); f_11569760();
  /* 115689b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115689ba:;
  /* 115689ba push 0x1158cf1c */
  push32((uint32_t)(0x1158cf1cu));
  /* 115689bf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 115689c5 push edx */
  push32((uint32_t)(EDX));
  /* 115689c6 call 0x11568ef0 */
  push32(0x115689cbu); f_11568ef0();
  /* 115689cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115689ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115689d1 push eax */
  push32((uint32_t)(EAX));
  /* 115689d2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 115689d8 push ecx */
  push32((uint32_t)(ECX));
  /* 115689d9 call 0x11568f00 */
  push32(0x115689deu); f_11568f00();
  /* 115689de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115689e1 push 0x1158c43c */
  push32((uint32_t)(0x1158c43cu));
  /* 115689e6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 115689ec push edx */
  push32((uint32_t)(EDX));
  /* 115689ed call 0x11568f00 */
  push32(0x115689f2u); f_11568f00();
  /* 115689f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115689f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115689f8 mov ecx, dword ptr [eax*8 + 0x1158fab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1158fab4)));
  /* 115689ff push ecx */
  push32((uint32_t)(ECX));
  /* 11568a00 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11568a06 push edx */
  push32((uint32_t)(EDX));
  /* 11568a07 call 0x11568f00 */
  push32(0x11568a0cu); f_11568f00();
  /* 11568a0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568a0f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11568a14 push 0x1158cef4 */
  push32((uint32_t)(0x1158cef4u));
  /* 11568a19 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11568a1f push eax */
  push32((uint32_t)(EAX));
  /* 11568a20 call 0x115696a0 */
  push32(0x11568a25u); f_115696a0();
  /* 11568a25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11568a28:;
  /* 11568a28 pop edi */
  EDI = (pop32());
  /* 11568a29 pop esi */
  ESI = (pop32());
  /* 11568a2a pop ebx */
  EBX = (pop32());
  /* 11568a2b mov esp, ebp */
  ESP = (EBP);
  /* 11568a2d pop ebp */
  EBP = (pop32());
  /* 11568a2e ret  */
  ESPCHK(0x11568870u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11568a30 (80 bytes, 27 insns) */
void f_11568a30(void) {
  FTRACE(0x11568a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11568a31 mov ebp, esp */
  EBP = (ESP);
  /* 11568a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11568a34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11568a3b jmp 0x11568a46 */
  goto L_11568a46;
L_11568a3d:;
  /* 11568a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568a40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11568a46:;
  /* 11568a46 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568a4a jae 0x11568a5f */
  if (!C.cf) goto L_11568a5f;
  /* 11568a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568a4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568a52 cmp edx, dword ptr [ecx*8 + 0x1158fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1158fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568a59 jne 0x11568a5d */
  if (!C.zf) goto L_11568a5d;
  /* 11568a5b jmp 0x11568a5f */
  goto L_11568a5f;
L_11568a5d:;
  /* 11568a5d jmp 0x11568a3d */
  goto L_11568a3d;
L_11568a5f:;
  /* 11568a5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568a62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568a65 cmp ecx, dword ptr [eax*8 + 0x1158fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1158fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568a6c jne 0x11568a7a */
  if (!C.zf) goto L_11568a7a;
  /* 11568a6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568a71 mov eax, dword ptr [edx*8 + 0x1158fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1158fab4)));
  /* 11568a78 jmp 0x11568a7c */
  goto L_11568a7c;
L_11568a7a:;
  /* 11568a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11568a7c:;
  /* 11568a7c mov esp, ebp */
  ESP = (EBP);
  /* 11568a7e pop ebp */
  EBP = (pop32());
  /* 11568a7f ret  */
  ESPCHK(0x11568a30u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11568a80 (66 bytes, 28 insns) */
void f_11568a80(void) {
  FTRACE(0x11568a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11568a81 mov ebp, esp */
  EBP = (ESP);
  /* 11568a83 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568a87 jne 0x11568aa7 */
  if (!C.zf) goto L_11568aa7;
  /* 11568a89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568a8d jge 0x11568aa7 */
  if ((C.sf==C.of)) goto L_11568aa7;
  /* 11568a8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11568a91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568a94 push eax */
  push32((uint32_t)(EAX));
  /* 11568a95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568a98 push ecx */
  push32((uint32_t)(ECX));
  /* 11568a99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568a9c push edx */
  push32((uint32_t)(EDX));
  /* 11568a9d call 0x11568ad0 */
  push32(0x11568aa2u); f_11568ad0();
  /* 11568aa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568aa5 jmp 0x11568abd */
  goto L_11568abd;
L_11568aa7:;
  /* 11568aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11568aa9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568aac push eax */
  push32((uint32_t)(EAX));
  /* 11568aad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568ab0 push ecx */
  push32((uint32_t)(ECX));
  /* 11568ab1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568ab4 push edx */
  push32((uint32_t)(EDX));
  /* 11568ab5 call 0x11568ad0 */
  push32(0x11568abau); f_11568ad0();
  /* 11568aba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11568abd:;
  /* 11568abd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568ac0 pop ebp */
  EBP = (pop32());
  /* 11568ac1 ret  */
  ESPCHK(0x11568a80u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11568ad0 (194 bytes, 71 insns) */
void f_11568ad0(void) {
  FTRACE(0x11568ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11568ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11568ad3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568ad6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568ad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11568adc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568ae0 je 0x11568af9 */
  if (C.zf) goto L_11568af9;
  /* 11568ae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568ae5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11568ae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568aeb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568aee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11568af1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568af4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11568af6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11568af9:;
  /* 11568af9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568afc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11568aff:;
  /* 11568aff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568b02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11568b04 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11568b07 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11568b0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568b0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11568b0f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11568b12 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11568b15 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568b19 jbe 0x11568b31 */
  if ((C.cf||C.zf)) goto L_11568b31;
  /* 11568b1b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11568b1e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568b21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568b24 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11568b26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568b29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568b2c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11568b2f jmp 0x11568b45 */
  goto L_11568b45;
L_11568b31:;
  /* 11568b31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11568b34 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568b37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568b3a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11568b3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568b3f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568b42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11568b45:;
  /* 11568b45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568b49 ja 0x11568aff */
  if ((!C.cf&&!C.zf)) goto L_11568aff;
  /* 11568b4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568b4e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11568b51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568b54 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568b57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11568b5a:;
  /* 11568b5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568b5d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11568b5f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11568b62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568b65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568b68 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11568b6a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11568b6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568b6f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11568b72 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11568b74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568b77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568b7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11568b7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568b80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568b83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11568b86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568b89 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568b8c jb 0x11568b5a */
  if (C.cf) goto L_11568b5a;
  /* 11568b8e mov esp, ebp */
  ESP = (EBP);
  /* 11568b90 pop ebp */
  EBP = (pop32());
  /* 11568b91 ret  */
  ESPCHK(0x11568ad0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11568ba0 (63 bytes, 24 insns) */
void f_11568ba0(void) {
  FTRACE(0x11568ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11568ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11568ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11568ba4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568ba8 jne 0x11568bb9 */
  if (!C.zf) goto L_11568bb9;
  /* 11568baa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568bae jge 0x11568bb9 */
  if ((C.sf==C.of)) goto L_11568bb9;
  /* 11568bb0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11568bb7 jmp 0x11568bc0 */
  goto L_11568bc0;
L_11568bb9:;
  /* 11568bb9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11568bc0:;
  /* 11568bc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568bc3 push eax */
  push32((uint32_t)(EAX));
  /* 11568bc4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11568bc8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568bcb push edx */
  push32((uint32_t)(EDX));
  /* 11568bcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568bcf push eax */
  push32((uint32_t)(EAX));
  /* 11568bd0 call 0x11568ad0 */
  push32(0x11568bd5u); f_11568ad0();
  /* 11568bd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568bd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568bdb mov esp, ebp */
  ESP = (EBP);
  /* 11568bdd pop ebp */
  EBP = (pop32());
  /* 11568bde ret  */
  ESPCHK(0x11568ba0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11568be0 (30 bytes, 14 insns) */
void f_11568be0(void) {
  FTRACE(0x11568be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11568be1 mov ebp, esp */
  EBP = (ESP);
  /* 11568be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11568be5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568be8 push eax */
  push32((uint32_t)(EAX));
  /* 11568be9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568bec push ecx */
  push32((uint32_t)(ECX));
  /* 11568bed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568bf0 push edx */
  push32((uint32_t)(EDX));
  /* 11568bf1 call 0x11568ad0 */
  push32(0x11568bf6u); f_11568ad0();
  /* 11568bf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568bf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568bfc pop ebp */
  EBP = (pop32());
  /* 11568bfd ret  */
  ESPCHK(0x11568be0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11568c00 (72 bytes, 28 insns) */
void f_11568c00(void) {
  FTRACE(0x11568c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11568c01 mov ebp, esp */
  EBP = (ESP);
  /* 11568c03 push ecx */
  push32((uint32_t)(ECX));
  /* 11568c04 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568c08 jne 0x11568c21 */
  if (!C.zf) goto L_11568c21;
  /* 11568c0a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568c0e jg 0x11568c21 */
  if ((!C.zf&&C.sf==C.of)) goto L_11568c21;
  /* 11568c10 jl 0x11568c18 */
  if ((C.sf!=C.of)) goto L_11568c18;
  /* 11568c12 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568c16 jae 0x11568c21 */
  if (!C.cf) goto L_11568c21;
L_11568c18:;
  /* 11568c18 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11568c1f jmp 0x11568c28 */
  goto L_11568c28;
L_11568c21:;
  /* 11568c21 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11568c28:;
  /* 11568c28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568c2b push eax */
  push32((uint32_t)(EAX));
  /* 11568c2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11568c2f push ecx */
  push32((uint32_t)(ECX));
  /* 11568c30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568c33 push edx */
  push32((uint32_t)(EDX));
  /* 11568c34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568c37 push eax */
  push32((uint32_t)(EAX));
  /* 11568c38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568c3b push ecx */
  push32((uint32_t)(ECX));
  /* 11568c3c call 0x11568c50 */
  push32(0x11568c41u); f_11568c50();
  /* 11568c41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568c44 mov esp, ebp */
  ESP = (EBP);
  /* 11568c46 pop ebp */
  EBP = (pop32());
  /* 11568c47 ret  */
  ESPCHK(0x11568c00u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11568c50 (242 bytes, 91 insns) */
void f_11568c50(void) {
  FTRACE(0x11568c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11568c51 mov ebp, esp */
  EBP = (ESP);
  /* 11568c53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568c56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568c59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11568c5c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568c60 je 0x11568c84 */
  if (C.zf) goto L_11568c84;
  /* 11568c62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568c65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11568c68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568c6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568c6e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11568c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568c74 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11568c76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568c79 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568c7c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11568c7e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11568c81 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11568c84:;
  /* 11568c84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568c87 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11568c8a:;
  /* 11568c8a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11568c8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11568c8f push ecx */
  push32((uint32_t)(ECX));
  /* 11568c90 push eax */
  push32((uint32_t)(EAX));
  /* 11568c91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568c94 push edx */
  push32((uint32_t)(EDX));
  /* 11568c95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568c98 push eax */
  push32((uint32_t)(EAX));
  /* 11568c99 call 0x1156cbd0 */
  push32(0x11568c9eu); f_1156cbd0();
  /* 11568c9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11568ca1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11568ca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11568ca6 push edx */
  push32((uint32_t)(EDX));
  /* 11568ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 11568ca8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568cab push eax */
  push32((uint32_t)(EAX));
  /* 11568cac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568caf push ecx */
  push32((uint32_t)(ECX));
  /* 11568cb0 call 0x1156cb60 */
  push32(0x11568cb5u); f_1156cb60();
  /* 11568cb5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11568cb8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11568cbb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568cbf jbe 0x11568cd7 */
  if ((C.cf||C.zf)) goto L_11568cd7;
  /* 11568cc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11568cc4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568cca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11568ccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568ccf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568cd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11568cd5 jmp 0x11568ceb */
  goto L_11568ceb;
L_11568cd7:;
  /* 11568cd7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11568cda add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568cdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568ce0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11568ce2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568ce5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568ce8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11568ceb:;
  /* 11568ceb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568cef ja 0x11568c8a */
  if ((!C.cf&&!C.zf)) goto L_11568c8a;
  /* 11568cf1 jb 0x11568cf9 */
  if (C.cf) goto L_11568cf9;
  /* 11568cf3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568cf7 ja 0x11568c8a */
  if ((!C.cf&&!C.zf)) goto L_11568c8a;
L_11568cf9:;
  /* 11568cf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568cfc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11568cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568d02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568d05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11568d08:;
  /* 11568d08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568d0b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11568d0d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11568d10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568d13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568d16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11568d18 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11568d1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568d1d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11568d20 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11568d22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11568d25 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568d28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11568d2b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568d2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568d31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11568d34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11568d37 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568d3a jb 0x11568d08 */
  if (C.cf) goto L_11568d08;
  /* 11568d3c mov esp, ebp */
  ESP = (EBP);
  /* 11568d3e pop ebp */
  EBP = (pop32());
  /* 11568d3f ret 0x14 */
  ESPCHK(0x11568c50u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11568d50 (31 bytes, 15 insns) */
void f_11568d50(void) {
  FTRACE(0x11568d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11568d51 mov ebp, esp */
  EBP = (ESP);
  /* 11568d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11568d55 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11568d58 push eax */
  push32((uint32_t)(EAX));
  /* 11568d59 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568d5c push ecx */
  push32((uint32_t)(ECX));
  /* 11568d5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568d60 push edx */
  push32((uint32_t)(EDX));
  /* 11568d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568d64 push eax */
  push32((uint32_t)(EAX));
  /* 11568d65 call 0x11568c50 */
  push32(0x11568d6au); f_11568c50();
  /* 11568d6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568d6d pop ebp */
  EBP = (pop32());
  /* 11568d6e ret  */
  ESPCHK(0x11568d50u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11568d70 (123 bytes, 44 insns) */
void f_11568d70(void) {
  FTRACE(0x11568d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568d70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11568d74 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11568d7a je 0x11568d90 */
  if (C.zf) goto L_11568d90;
L_11568d7c:;
  /* 11568d7c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11568d7e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11568d7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11568d81 je 0x11568dc3 */
  if (C.zf) goto L_11568dc3;
  /* 11568d83 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11568d89 jne 0x11568d7c */
  if (!C.zf) goto L_11568d7c;
  /* 11568d8b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11568d90:;
  /* 11568d90 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11568d92 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11568d97 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568d99 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11568d9c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11568d9e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568da1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11568da6 je 0x11568d90 */
  if (C.zf) goto L_11568d90;
  /* 11568da8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11568dab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11568dad je 0x11568de1 */
  if (C.zf) goto L_11568de1;
  /* 11568daf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11568db1 je 0x11568dd7 */
  if (C.zf) goto L_11568dd7;
  /* 11568db3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11568db8 je 0x11568dcd */
  if (C.zf) goto L_11568dcd;
  /* 11568dba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11568dbf je 0x11568dc3 */
  if (C.zf) goto L_11568dc3;
  /* 11568dc1 jmp 0x11568d90 */
  goto L_11568d90;
L_11568dc3:;
  /* 11568dc3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11568dc6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11568dca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568dcc ret  */
  ESPCHK(0x11568d70u, _esp0);
  ESP += 4; return;
L_11568dcd:;
  /* 11568dcd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11568dd0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11568dd4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568dd6 ret  */
  ESPCHK(0x11568d70u, _esp0);
  ESP += 4; return;
L_11568dd7:;
  /* 11568dd7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11568dda mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11568dde sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568de0 ret  */
  ESPCHK(0x11568d70u, _esp0);
  ESP += 4; return;
L_11568de1:;
  /* 11568de1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11568de4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11568de8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568dea ret  */
  ESPCHK(0x11568d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008df0 @ 0x11568df0 (249 bytes, 93 insns) */
void f_11568df0(void) {
  FTRACE(0x11568df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11568df1 mov ebp, esp */
  EBP = (ESP);
  /* 11568df3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568df6 push ebx */
  push32((uint32_t)(EBX));
  /* 11568df7 push esi */
  push32((uint32_t)(ESI));
  /* 11568df8 push edi */
  push32((uint32_t)(EDI));
  /* 11568df9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11568dfc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11568dff lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11568e02 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11568e05:;
  /* 11568e05 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568e09 jne 0x11568e29 */
  if (!C.zf) goto L_11568e29;
  /* 11568e0b push 0x1158cf54 */
  push32((uint32_t)(0x1158cf54u));
  /* 11568e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11568e12 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11568e14 push 0x1158cf48 */
  push32((uint32_t)(0x1158cf48u));
  /* 11568e19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11568e1b call 0x11565000 */
  push32(0x11568e20u); f_11565000();
  /* 11568e20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568e23 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568e26 jne 0x11568e29 */
  if (!C.zf) goto L_11568e29;
  /* 11568e28 int3  */
  x86_unimpl("int3 @ 0x11568e28");
L_11568e29:;
  /* 11568e29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11568e2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11568e2d jne 0x11568e05 */
  if (!C.zf) goto L_11568e05;
L_11568e2f:;
  /* 11568e2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568e33 jne 0x11568e53 */
  if (!C.zf) goto L_11568e53;
  /* 11568e35 push 0x1158cf38 */
  push32((uint32_t)(0x1158cf38u));
  /* 11568e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11568e3c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11568e3e push 0x1158cf48 */
  push32((uint32_t)(0x1158cf48u));
  /* 11568e43 push 2 */
  push32((uint32_t)(0x2u));
  /* 11568e45 call 0x11565000 */
  push32(0x11568e4au); f_11565000();
  /* 11568e4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568e4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568e50 jne 0x11568e53 */
  if (!C.zf) goto L_11568e53;
  /* 11568e52 int3  */
  x86_unimpl("int3 @ 0x11568e52");
L_11568e53:;
  /* 11568e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11568e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11568e57 jne 0x11568e2f */
  if (!C.zf) goto L_11568e2f;
  /* 11568e59 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568e5c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11568e63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568e69 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11568e6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568e6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11568e72 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11568e74 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568e77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11568e7a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11568e7d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11568e80 push edx */
  push32((uint32_t)(EDX));
  /* 11568e81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11568e84 push eax */
  push32((uint32_t)(EAX));
  /* 11568e85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568e88 push ecx */
  push32((uint32_t)(ECX));
  /* 11568e89 call 0x1156ced0 */
  push32(0x11568e8eu); f_1156ced0();
  /* 11568e8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568e91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11568e94 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568e97 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11568e9a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568e9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568ea0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11568ea3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568ea6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568eaa jl 0x11568ece */
  if ((C.sf!=C.of)) goto L_11568ece;
  /* 11568eac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568eaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11568eb1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11568eb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11568eb6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11568ebc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11568ebf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568ec2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11568ec4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568ec7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568eca mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11568ecc jmp 0x11568edf */
  goto L_11568edf;
L_11568ece:;
  /* 11568ece mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11568ed1 push eax */
  push32((uint32_t)(EAX));
  /* 11568ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11568ed4 call 0x1156cc50 */
  push32(0x11568ed9u); f_1156cc50();
  /* 11568ed9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11568edc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11568edf:;
  /* 11568edf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11568ee2 pop edi */
  EDI = (pop32());
  /* 11568ee3 pop esi */
  ESI = (pop32());
  /* 11568ee4 pop ebx */
  EBX = (pop32());
  /* 11568ee5 mov esp, ebp */
  ESP = (EBP);
  /* 11568ee7 pop ebp */
  EBP = (pop32());
  /* 11568ee8 ret  */
  ESPCHK(0x11568df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x11568ef0 (7 bytes, 3 insns) */
void f_11568ef0(void) {
  FTRACE(0x11568ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568ef0 push edi */
  push32((uint32_t)(EDI));
  /* 11568ef1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11568ef5 jmp 0x11568f61 */
  jmp_ind(0x11568f61u); return;
}

/* FUN_10008f00 @ 0x11568f00 (224 bytes, 84 insns) */
void f_11568f00(void) {
  FTRACE(0x11568f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568f00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11568f04 push edi */
  push32((uint32_t)(EDI));
  /* 11568f05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11568f0b je 0x11568f1c */
  if (C.zf) goto L_11568f1c;
L_11568f0d:;
  /* 11568f0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11568f0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11568f10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11568f12 je 0x11568f4f */
  if (C.zf) goto L_11568f4f;
  /* 11568f14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11568f1a jne 0x11568f0d */
  if (!C.zf) goto L_11568f0d;
L_11568f1c:;
  /* 11568f1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11568f1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11568f23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568f25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11568f28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11568f2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568f2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11568f32 je 0x11568f1c */
  if (C.zf) goto L_11568f1c;
  /* 11568f34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11568f37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11568f39 je 0x11568f5e */
  if (C.zf) goto L_11568f5e;
  /* 11568f3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11568f3d je 0x11568f59 */
  if (C.zf) goto L_11568f59;
  /* 11568f3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11568f44 je 0x11568f54 */
  if (C.zf) goto L_11568f54;
  /* 11568f46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11568f4b je 0x11568f4f */
  if (C.zf) goto L_11568f4f;
  /* 11568f4d jmp 0x11568f1c */
  goto L_11568f1c;
L_11568f4f:;
  /* 11568f4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11568f52 jmp 0x11568f61 */
  goto L_11568f61;
L_11568f54:;
  /* 11568f54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11568f57 jmp 0x11568f61 */
  goto L_11568f61;
L_11568f59:;
  /* 11568f59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11568f5c jmp 0x11568f61 */
  goto L_11568f61;
L_11568f5e:;
  /* 11568f5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11568f61:;
  /* 11568f61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11568f65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11568f6b je 0x11568f86 */
  if (C.zf) goto L_11568f86;
L_11568f6d:;
  /* 11568f6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11568f6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11568f70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11568f72 je 0x11568fd8 */
  if (C.zf) goto L_11568fd8;
  /* 11568f74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11568f76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11568f77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11568f7d jne 0x11568f6d */
  if (!C.zf) goto L_11568f6d;
  /* 11568f7f jmp 0x11568f86 */
  goto L_11568f86;
L_11568f81:;
  /* 11568f81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11568f83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11568f86:;
  /* 11568f86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11568f8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11568f8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568f8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11568f92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11568f94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11568f96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11568f99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11568f9e je 0x11568f81 */
  if (C.zf) goto L_11568f81;
  /* 11568fa0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11568fa2 je 0x11568fd8 */
  if (C.zf) goto L_11568fd8;
  /* 11568fa4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11568fa6 je 0x11568fcf */
  if (C.zf) goto L_11568fcf;
  /* 11568fa8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11568fae je 0x11568fc2 */
  if (C.zf) goto L_11568fc2;
  /* 11568fb0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11568fb6 je 0x11568fba */
  if (C.zf) goto L_11568fba;
  /* 11568fb8 jmp 0x11568f81 */
  goto L_11568f81;
L_11568fba:;
  /* 11568fba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11568fbc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11568fc0 pop edi */
  EDI = (pop32());
  /* 11568fc1 ret  */
  ESPCHK(0x11568f00u, _esp0);
  ESP += 4; return;
L_11568fc2:;
  /* 11568fc2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11568fc5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11568fc9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11568fcd pop edi */
  EDI = (pop32());
  /* 11568fce ret  */
  ESPCHK(0x11568f00u, _esp0);
  ESP += 4; return;
L_11568fcf:;
  /* 11568fcf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11568fd2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11568fd6 pop edi */
  EDI = (pop32());
  /* 11568fd7 ret  */
  ESPCHK(0x11568f00u, _esp0);
  ESP += 4; return;
L_11568fd8:;
  /* 11568fd8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11568fda mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11568fde pop edi */
  EDI = (pop32());
  /* 11568fdf ret  */
  ESPCHK(0x11568f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x11568fe0 (243 bytes, 91 insns) */
void f_11568fe0(void) {
  FTRACE(0x11568fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11568fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11568fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11568fe3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11568fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 11568fe7 push esi */
  push32((uint32_t)(ESI));
  /* 11568fe8 push edi */
  push32((uint32_t)(EDI));
  /* 11568fe9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11568fec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11568fef:;
  /* 11568fef cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11568ff3 jne 0x11569013 */
  if (!C.zf) goto L_11569013;
  /* 11568ff5 push 0x1158cf54 */
  push32((uint32_t)(0x1158cf54u));
  /* 11568ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 11568ffc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11568ffe push 0x1158cf64 */
  push32((uint32_t)(0x1158cf64u));
  /* 11569003 push 2 */
  push32((uint32_t)(0x2u));
  /* 11569005 call 0x11565000 */
  push32(0x1156900au); f_11565000();
  /* 1156900a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156900d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569010 jne 0x11569013 */
  if (!C.zf) goto L_11569013;
  /* 11569012 int3  */
  x86_unimpl("int3 @ 0x11569012");
L_11569013:;
  /* 11569013 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11569015 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11569017 jne 0x11568fef */
  if (!C.zf) goto L_11568fef;
L_11569019:;
  /* 11569019 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156901d jne 0x1156903d */
  if (!C.zf) goto L_1156903d;
  /* 1156901f push 0x1158cf38 */
  push32((uint32_t)(0x1158cf38u));
  /* 11569024 push 0 */
  push32((uint32_t)(0x0u));
  /* 11569026 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11569028 push 0x1158cf64 */
  push32((uint32_t)(0x1158cf64u));
  /* 1156902d push 2 */
  push32((uint32_t)(0x2u));
  /* 1156902f call 0x11565000 */
  push32(0x11569034u); f_11565000();
  /* 11569034 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569037 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156903a jne 0x1156903d */
  if (!C.zf) goto L_1156903d;
  /* 1156903c int3  */
  x86_unimpl("int3 @ 0x1156903c");
L_1156903d:;
  /* 1156903d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156903f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11569041 jne 0x11569019 */
  if (!C.zf) goto L_11569019;
  /* 11569043 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11569046 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1156904d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11569050 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569053 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11569056 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11569059 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156905c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1156905e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11569061 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569064 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11569067 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156906a push ecx */
  push32((uint32_t)(ECX));
  /* 1156906b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156906e push edx */
  push32((uint32_t)(EDX));
  /* 1156906f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11569072 push eax */
  push32((uint32_t)(EAX));
  /* 11569073 call 0x1156ced0 */
  push32(0x11569078u); f_1156ced0();
  /* 11569078 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156907b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1156907e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11569081 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11569084 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11569087 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156908a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1156908d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11569090 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569094 jl 0x115690b8 */
  if ((C.sf!=C.of)) goto L_115690b8;
  /* 11569096 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11569099 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156909b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1156909e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 115690a0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 115690a6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 115690a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115690ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 115690ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115690b1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 115690b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 115690b6 jmp 0x115690c9 */
  goto L_115690c9;
L_115690b8:;
  /* 115690b8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 115690bb push edx */
  push32((uint32_t)(EDX));
  /* 115690bc push 0 */
  push32((uint32_t)(0x0u));
  /* 115690be call 0x1156cc50 */
  push32(0x115690c3u); f_1156cc50();
  /* 115690c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115690c6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_115690c9:;
  /* 115690c9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 115690cc pop edi */
  EDI = (pop32());
  /* 115690cd pop esi */
  ESI = (pop32());
  /* 115690ce pop ebx */
  EBX = (pop32());
  /* 115690cf mov esp, ebp */
  ESP = (EBP);
  /* 115690d1 pop ebp */
  EBP = (pop32());
  /* 115690d2 ret  */
  ESPCHK(0x11568fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090e0 @ 0x115690e0 (47 bytes, 17 insns) */
void f_115690e0(void) {
  FTRACE(0x115690e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115690e0 push ecx */
  push32((uint32_t)(ECX));
  /* 115690e1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115690e6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 115690ea jb 0x11569100 */
  if (C.cf) goto L_11569100;
L_115690ec:;
  /* 115690ec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115690f2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115690f7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 115690f9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115690fe jae 0x115690ec */
  if (!C.cf) goto L_115690ec;
L_11569100:;
  /* 11569100 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11569102 mov eax, esp */
  EAX = (ESP);
  /* 11569104 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11569106 mov esp, ecx */
  ESP = (ECX);
  /* 11569108 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156910a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156910d push eax */
  push32((uint32_t)(EAX));
  /* 1156910e ret  */
  ESPCHK(0x115690e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009110 @ 0x11569110 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11569110(void) {
  FTRACE(0x11569110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569110 push ebp */
  push32((uint32_t)(EBP));
  /* 11569111 mov ebp, esp */
  EBP = (ESP);
  /* 11569113 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11569116 push esi */
  push32((uint32_t)(ESI));
  /* 11569117 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156911b je 0x11569123 */
  if (C.zf) goto L_11569123;
  /* 1156911d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569121 jne 0x11569128 */
  if (!C.zf) goto L_11569128;
L_11569123:;
  /* 11569123 jmp 0x115692f8 */
  goto L_115692f8;
L_11569128:;
  /* 11569128 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156912c je 0x11569144 */
  if (C.zf) goto L_11569144;
  /* 1156912e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569132 je 0x11569144 */
  if (C.zf) goto L_11569144;
  /* 11569134 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569138 je 0x11569144 */
  if (C.zf) goto L_11569144;
  /* 1156913a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156913e jne 0x11569221 */
  if (!C.zf) goto L_11569221;
L_11569144:;
  /* 11569144 push 1 */
  push32((uint32_t)(0x1u));
  /* 11569146 call 0x11569940 */
  push32(0x1156914bu); f_11569940();
  /* 1156914b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156914e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569152 je 0x1156915a */
  if (C.zf) goto L_1156915a;
  /* 11569154 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569158 jne 0x1156919f */
  if (!C.zf) goto L_1156919f;
L_1156915a:;
  /* 1156915a cmp dword ptr [0x11592104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569161 jne 0x1156919f */
  if (!C.zf) goto L_1156919f;
  /* 11569163 push 1 */
  push32((uint32_t)(0x1u));
  /* 11569165 push 0x11569340 */
  push32((uint32_t)(0x11569340u));
  /* 1156916a call dword ptr [0x1159435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159435c))), 0x11569170u);
  /* 11569170 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569173 jne 0x11569181 */
  if (!C.zf) goto L_11569181;
  /* 11569175 mov dword ptr [0x11592104], 1 */
  w32((uint32_t)(0x11592104), (0x1u));
  /* 1156917f jmp 0x1156919f */
  goto L_1156919f;
L_11569181:;
  /* 11569181 call dword ptr [0x115943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d4))), 0x11569187u);
  /* 11569187 mov esi, eax */
  ESI = (EAX);
  /* 11569189 call 0x1156de20 */
  push32(0x1156918eu); f_1156de20();
  /* 1156918e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11569190 push 1 */
  push32((uint32_t)(0x1u));
  /* 11569192 call 0x115699e0 */
  push32(0x11569197u); f_115699e0();
  /* 11569197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156919a jmp 0x115692f8 */
  goto L_115692f8;
L_1156919f:;
  /* 1156919f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115691a2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 115691a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 115691a8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115691ab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 115691ae cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115691b2 ja 0x11569212 */
  if ((!C.cf&&!C.zf)) goto L_11569212;
  /* 115691b4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 115691b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 115691b9 mov dl, byte ptr [eax + 0x1156931f] */
  DL = (r8((uint32_t)(EAX + 0x1156931f)));
  /* 115691bf jmp dword ptr [edx*4 + 0x1156930b] */
  switch (EDX) {
    case 0: goto L_115691c6;
    case 1: goto L_11569200;
    case 2: goto L_115691da;
    case 3: goto L_115691ed;
    case 4: goto L_11569212;
    default: x86_unimpl("switch@0x115691bf out of table"); return;
  }
L_115691c6:;
  /* 115691c6 mov ecx, dword ptr [0x115920f4] */
  ECX = (r32((uint32_t)(0x115920f4)));
  /* 115691cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 115691cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 115691d2 mov dword ptr [0x115920f4], edx */
  w32((uint32_t)(0x115920f4), (EDX));
  /* 115691d8 jmp 0x11569212 */
  goto L_11569212;
L_115691da:;
  /* 115691da mov eax, dword ptr [0x115920f8] */
  EAX = (r32((uint32_t)(0x115920f8)));
  /* 115691df mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 115691e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 115691e5 mov dword ptr [0x115920f8], ecx */
  w32((uint32_t)(0x115920f8), (ECX));
  /* 115691eb jmp 0x11569212 */
  goto L_11569212;
L_115691ed:;
  /* 115691ed mov edx, dword ptr [0x115920fc] */
  EDX = (r32((uint32_t)(0x115920fc)));
  /* 115691f3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 115691f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115691f9 mov dword ptr [0x115920fc], eax */
  w32((uint32_t)(0x115920fc), (EAX));
  /* 115691fe jmp 0x11569212 */
  goto L_11569212;
L_11569200:;
  /* 11569200 mov ecx, dword ptr [0x11592100] */
  ECX = (r32((uint32_t)(0x11592100)));
  /* 11569206 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11569209 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156920c mov dword ptr [0x11592100], edx */
  w32((uint32_t)(0x11592100), (EDX));
L_11569212:;
  /* 11569212 push 1 */
  push32((uint32_t)(0x1u));
  /* 11569214 call 0x115699e0 */
  push32(0x11569219u); f_115699e0();
  /* 11569219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156921c jmp 0x115692f3 */
  goto L_115692f3;
L_11569221:;
  /* 11569221 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569225 je 0x11569238 */
  if (C.zf) goto L_11569238;
  /* 11569227 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156922b je 0x11569238 */
  if (C.zf) goto L_11569238;
  /* 1156922d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569231 je 0x11569238 */
  if (C.zf) goto L_11569238;
  /* 11569233 jmp 0x115692f8 */
  goto L_115692f8;
L_11569238:;
  /* 11569238 call 0x11565780 */
  push32(0x1156923du); f_11565780();
  /* 1156923d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11569240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569243 cmp dword ptr [eax + 0x50], 0x1158fc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1158fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156924a jne 0x11569295 */
  if (!C.zf) goto L_11569295;
  /* 1156924c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11569251 push 0x1158cf70 */
  push32((uint32_t)(0x1158cf70u));
  /* 11569256 push 2 */
  push32((uint32_t)(0x2u));
  /* 11569258 mov ecx, dword ptr [0x1158fc80] */
  ECX = (r32((uint32_t)(0x1158fc80)));
  /* 1156925e push ecx */
  push32((uint32_t)(ECX));
  /* 1156925f call 0x11565f40 */
  push32(0x11569264u); f_11565f40();
  /* 11569264 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569267 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156926a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1156926d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569270 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569274 je 0x11569293 */
  if (C.zf) goto L_11569293;
  /* 11569276 mov ecx, dword ptr [0x1158fc80] */
  ECX = (r32((uint32_t)(0x1158fc80)));
  /* 1156927c push ecx */
  push32((uint32_t)(ECX));
  /* 1156927d push 0x1158fc00 */
  push32((uint32_t)(0x1158fc00u));
  /* 11569282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569285 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11569288 push eax */
  push32((uint32_t)(EAX));
  /* 11569289 call 0x1156c820 */
  push32(0x1156928eu); f_1156c820();
  /* 1156928e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569291 jmp 0x11569295 */
  goto L_11569295;
L_11569293:;
  /* 11569293 jmp 0x115692f8 */
  goto L_115692f8;
L_11569295:;
  /* 11569295 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569298 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1156929b push edx */
  push32((uint32_t)(EDX));
  /* 1156929c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156929f push eax */
  push32((uint32_t)(EAX));
  /* 115692a0 call 0x11569620 */
  push32(0x115692a5u); f_11569620();
  /* 115692a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115692a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115692ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115692af jne 0x115692b3 */
  if (!C.zf) goto L_115692b3;
  /* 115692b1 jmp 0x115692f8 */
  goto L_115692f8;
L_115692b3:;
  /* 115692b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115692b6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 115692b9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_115692bc:;
  /* 115692bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115692bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 115692c2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115692c5 jne 0x115692f3 */
  if (!C.zf) goto L_115692f3;
  /* 115692c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 115692ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 115692cd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 115692d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115692d3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115692d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 115692d9 mov edx, dword ptr [0x1158fc84] */
  EDX = (r32((uint32_t)(0x1158fc84)));
  /* 115692df imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 115692e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115692e5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 115692e8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 115692ea cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115692ed jb 0x115692f1 */
  if (C.cf) goto L_115692f1;
  /* 115692ef jmp 0x115692f3 */
  goto L_115692f3;
L_115692f1:;
  /* 115692f1 jmp 0x115692bc */
  goto L_115692bc;
L_115692f3:;
  /* 115692f3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 115692f6 jmp 0x11569306 */
  goto L_11569306;
L_115692f8:;
  /* 115692f8 call 0x1156de10 */
  push32(0x115692fdu); f_1156de10();
  /* 115692fd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11569303 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11569306:;
  /* 11569306 pop esi */
  ESI = (pop32());
  /* 11569307 mov esp, ebp */
  ESP = (EBP);
  /* 11569309 pop ebp */
  EBP = (pop32());
  /* 1156930a ret  */
  ESPCHK(0x11569110u, _esp0);
  ESP += 4; return;
}

/* FUN_10009340 @ 0x11569340 (146 bytes, 45 insns) */
void f_11569340(void) {
  FTRACE(0x11569340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569340 push ebp */
  push32((uint32_t)(EBP));
  /* 11569341 mov ebp, esp */
  EBP = (ESP);
  /* 11569343 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11569346 push 1 */
  push32((uint32_t)(0x1u));
  /* 11569348 call 0x11569940 */
  push32(0x1156934du); f_11569940();
  /* 1156934d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569350 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569354 jne 0x1156936e */
  if (!C.zf) goto L_1156936e;
  /* 11569356 mov dword ptr [ebp - 8], 0x115920f4 */
  w32((uint32_t)(EBP + -0x8), (0x115920f4u));
  /* 1156935d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569360 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11569362 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11569365 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1156936c jmp 0x11569384 */
  goto L_11569384;
L_1156936e:;
  /* 1156936e mov dword ptr [ebp - 8], 0x115920f8 */
  w32((uint32_t)(EBP + -0x8), (0x115920f8u));
  /* 11569375 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569378 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156937a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1156937d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11569384:;
  /* 11569384 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569388 jne 0x11569398 */
  if (!C.zf) goto L_11569398;
  /* 1156938a push 1 */
  push32((uint32_t)(0x1u));
  /* 1156938c call 0x115699e0 */
  push32(0x11569391u); f_115699e0();
  /* 11569391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11569396 jmp 0x115693cc */
  goto L_115693cc;
L_11569398:;
  /* 11569398 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156939c je 0x115693bd */
  if (C.zf) goto L_115693bd;
  /* 1156939e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115693a1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 115693a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 115693a9 call 0x115699e0 */
  push32(0x115693aeu); f_115699e0();
  /* 115693ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115693b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115693b4 push edx */
  push32((uint32_t)(EDX));
  /* 115693b5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x115693b8u);
  /* 115693b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115693bb jmp 0x115693c7 */
  goto L_115693c7;
L_115693bd:;
  /* 115693bd push 1 */
  push32((uint32_t)(0x1u));
  /* 115693bf call 0x115699e0 */
  push32(0x115693c4u); f_115699e0();
  /* 115693c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115693c7:;
  /* 115693c7 mov eax, 1 */
  EAX = (0x1u);
L_115693cc:;
  /* 115693cc mov esp, ebp */
  ESP = (EBP);
  /* 115693ce pop ebp */
  EBP = (pop32());
  /* 115693cf ret 4 */
  ESPCHK(0x11569340u, _esp0);
  ESP += 8; return;
}

/* FUN_100093e0 @ 0x115693e0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_115693e0(void) {
  FTRACE(0x115693e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115693e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115693e1 mov ebp, esp */
  EBP = (ESP);
  /* 115693e3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115693e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 115693ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115693f0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 115693f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 115693f6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 115693f9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 115693fc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569400 ja 0x115694ae */
  if ((!C.cf&&!C.zf)) goto L_115694ae;
  /* 11569406 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11569409 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156940b mov dl, byte ptr [eax + 0x11569602] */
  DL = (r8((uint32_t)(EAX + 0x11569602)));
  /* 11569411 jmp dword ptr [edx*4 + 0x115695ea] */
  switch (EDX) {
    case 0: goto L_11569418;
    case 1: goto L_11569483;
    case 2: goto L_11569469;
    case 3: goto L_11569435;
    case 4: goto L_1156944f;
    case 5: goto L_115694ae;
    default: x86_unimpl("switch@0x11569411 out of table"); return;
  }
L_11569418:;
  /* 11569418 mov dword ptr [ebp - 0x18], 0x115920f4 */
  w32((uint32_t)(EBP + -0x18), (0x115920f4u));
  /* 1156941f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11569422 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11569424 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11569427 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156942a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156942d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11569430 jmp 0x115694b6 */
  goto L_115694b6;
L_11569435:;
  /* 11569435 mov dword ptr [ebp - 0x18], 0x115920f8 */
  w32((uint32_t)(EBP + -0x18), (0x115920f8u));
  /* 1156943c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156943f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11569441 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11569444 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11569447 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156944a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1156944d jmp 0x115694b6 */
  goto L_115694b6;
L_1156944f:;
  /* 1156944f mov dword ptr [ebp - 0x18], 0x115920fc */
  w32((uint32_t)(EBP + -0x18), (0x115920fcu));
  /* 11569456 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11569459 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156945b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1156945e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11569461 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569464 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11569467 jmp 0x115694b6 */
  goto L_115694b6;
L_11569469:;
  /* 11569469 mov dword ptr [ebp - 0x18], 0x11592100 */
  w32((uint32_t)(EBP + -0x18), (0x11592100u));
  /* 11569470 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11569473 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11569475 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11569478 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156947b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156947e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11569481 jmp 0x115694b6 */
  goto L_115694b6;
L_11569483:;
  /* 11569483 call 0x11565780 */
  push32(0x11569488u); f_11565780();
  /* 11569488 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156948b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156948e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11569491 push edx */
  push32((uint32_t)(EDX));
  /* 11569492 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569495 push eax */
  push32((uint32_t)(EAX));
  /* 11569496 call 0x11569620 */
  push32(0x1156949bu); f_11569620();
  /* 1156949b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156949e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115694a1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 115694a4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 115694a7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 115694a9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 115694ac jmp 0x115694b6 */
  goto L_115694b6;
L_115694ae:;
  /* 115694ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115694b1 jmp 0x115695e6 */
  goto L_115695e6;
L_115694b6:;
  /* 115694b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115694ba je 0x115694c6 */
  if (C.zf) goto L_115694c6;
  /* 115694bc push 1 */
  push32((uint32_t)(0x1u));
  /* 115694be call 0x11569940 */
  push32(0x115694c3u); f_11569940();
  /* 115694c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115694c6:;
  /* 115694c6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115694ca jne 0x115694e3 */
  if (!C.zf) goto L_115694e3;
  /* 115694cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115694d0 je 0x115694dc */
  if (C.zf) goto L_115694dc;
  /* 115694d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 115694d4 call 0x115699e0 */
  push32(0x115694d9u); f_115699e0();
  /* 115694d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115694dc:;
  /* 115694dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115694de jmp 0x115695e6 */
  goto L_115695e6;
L_115694e3:;
  /* 115694e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115694e7 jne 0x11569500 */
  if (!C.zf) goto L_11569500;
  /* 115694e9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115694ed je 0x115694f9 */
  if (C.zf) goto L_115694f9;
  /* 115694ef push 1 */
  push32((uint32_t)(0x1u));
  /* 115694f1 call 0x115699e0 */
  push32(0x115694f6u); f_115699e0();
  /* 115694f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115694f9:;
  /* 115694f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 115694fb call 0x115659b0 */
  push32(0x11569500u); f_115659b0();
L_11569500:;
  /* 11569500 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569504 je 0x11569512 */
  if (C.zf) goto L_11569512;
  /* 11569506 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156950a je 0x11569512 */
  if (C.zf) goto L_11569512;
  /* 1156950c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569510 jne 0x1156953e */
  if (!C.zf) goto L_1156953e;
L_11569512:;
  /* 11569512 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569515 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11569518 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1156951b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156951e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11569525 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569529 jne 0x1156953e */
  if (!C.zf) goto L_1156953e;
  /* 1156952b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156952e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11569531 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11569534 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569537 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1156953e:;
  /* 1156953e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569542 jne 0x11569580 */
  if (!C.zf) goto L_11569580;
  /* 11569544 mov eax, dword ptr [0x1158fc78] */
  EAX = (r32((uint32_t)(0x1158fc78)));
  /* 11569549 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1156954c jmp 0x11569557 */
  goto L_11569557;
L_1156954e:;
  /* 1156954e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569554 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11569557:;
  /* 11569557 mov edx, dword ptr [0x1158fc78] */
  EDX = (r32((uint32_t)(0x1158fc78)));
  /* 1156955d add edx, dword ptr [0x1158fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1158fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569563 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569566 jge 0x1156957e */
  if ((C.sf==C.of)) goto L_1156957e;
  /* 11569568 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156956b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156956e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569571 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11569574 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1156957c jmp 0x1156954e */
  goto L_1156954e;
L_1156957e:;
  /* 1156957e jmp 0x11569589 */
  goto L_11569589;
L_11569580:;
  /* 11569580 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11569583 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11569589:;
  /* 11569589 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156958d je 0x11569599 */
  if (C.zf) goto L_11569599;
  /* 1156958f push 1 */
  push32((uint32_t)(0x1u));
  /* 11569591 call 0x115699e0 */
  push32(0x11569596u); f_115699e0();
  /* 11569596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11569599:;
  /* 11569599 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156959d jne 0x115695b0 */
  if (!C.zf) goto L_115695b0;
  /* 1156959f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115695a2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 115695a5 push edx */
  push32((uint32_t)(EDX));
  /* 115695a6 push 8 */
  push32((uint32_t)(0x8u));
  /* 115695a8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x115695abu);
  /* 115695ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 115695ae jmp 0x115695ba */
  goto L_115695ba;
L_115695b0:;
  /* 115695b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115695b3 push eax */
  push32((uint32_t)(EAX));
  /* 115695b4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x115695b7u);
  /* 115695b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115695ba:;
  /* 115695ba cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115695be je 0x115695cc */
  if (C.zf) goto L_115695cc;
  /* 115695c0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115695c4 je 0x115695cc */
  if (C.zf) goto L_115695cc;
  /* 115695c6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115695ca jne 0x115695e4 */
  if (!C.zf) goto L_115695e4;
L_115695cc:;
  /* 115695cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115695cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 115695d2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 115695d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115695d9 jne 0x115695e4 */
  if (!C.zf) goto L_115695e4;
  /* 115695db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115695de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115695e1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_115695e4:;
  /* 115695e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_115695e6:;
  /* 115695e6 mov esp, ebp */
  ESP = (EBP);
  /* 115695e8 pop ebp */
  EBP = (pop32());
  /* 115695e9 ret  */
  ESPCHK(0x115693e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009620 @ 0x11569620 (91 bytes, 35 insns) */
void f_11569620(void) {
  FTRACE(0x11569620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569620 push ebp */
  push32((uint32_t)(EBP));
  /* 11569621 mov ebp, esp */
  EBP = (ESP);
  /* 11569623 push ecx */
  push32((uint32_t)(ECX));
  /* 11569624 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569627 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1156962a:;
  /* 1156962a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156962d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11569630 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569633 je 0x11569653 */
  if (C.zf) goto L_11569653;
  /* 11569635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569638 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156963b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156963e mov ecx, dword ptr [0x1158fc84] */
  ECX = (r32((uint32_t)(0x1158fc84)));
  /* 11569644 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11569647 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156964a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156964c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156964f jae 0x11569653 */
  if (!C.cf) goto L_11569653;
  /* 11569651 jmp 0x1156962a */
  goto L_1156962a;
L_11569653:;
  /* 11569653 mov eax, dword ptr [0x1158fc84] */
  EAX = (r32((uint32_t)(0x1158fc84)));
  /* 11569658 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156965b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156965e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569660 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569663 jae 0x11569675 */
  if (!C.cf) goto L_11569675;
  /* 11569665 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569668 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156966b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156966e jne 0x11569675 */
  if (!C.zf) goto L_11569675;
  /* 11569670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569673 jmp 0x11569677 */
  goto L_11569677;
L_11569675:;
  /* 11569675 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11569677:;
  /* 11569677 mov esp, ebp */
  ESP = (EBP);
  /* 11569679 pop ebp */
  EBP = (pop32());
  /* 1156967a ret  */
  ESPCHK(0x11569620u, _esp0);
  ESP += 4; return;
}

/* FUN_10009680 @ 0x11569680 (13 bytes, 6 insns) */
void f_11569680(void) {
  FTRACE(0x11569680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569680 push ebp */
  push32((uint32_t)(EBP));
  /* 11569681 mov ebp, esp */
  EBP = (ESP);
  /* 11569683 call 0x11565780 */
  push32(0x11569688u); f_11565780();
  /* 11569688 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156968b pop ebp */
  EBP = (pop32());
  /* 1156968c ret  */
  ESPCHK(0x11569680u, _esp0);
  ESP += 4; return;
}

/* FUN_10009690 @ 0x11569690 (13 bytes, 6 insns) */
void f_11569690(void) {
  FTRACE(0x11569690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569690 push ebp */
  push32((uint32_t)(EBP));
  /* 11569691 mov ebp, esp */
  EBP = (ESP);
  /* 11569693 call 0x11565780 */
  push32(0x11569698u); f_11565780();
  /* 11569698 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156969b pop ebp */
  EBP = (pop32());
  /* 1156969c ret  */
  ESPCHK(0x11569690u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a0 @ 0x115696a0 (187 bytes, 54 insns) */
void f_115696a0(void) {
  FTRACE(0x115696a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115696a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115696a1 mov ebp, esp */
  EBP = (ESP);
  /* 115696a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 115696a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115696ad cmp dword ptr [0x11592108], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592108))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115696b4 jne 0x11569713 */
  if (!C.zf) goto L_11569713;
  /* 115696b6 push 0x1158c39c */
  push32((uint32_t)(0x1158c39cu));
  /* 115696bb call dword ptr [0x115943b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943b0))), 0x115696c1u);
  /* 115696c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 115696c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115696c8 je 0x115696e7 */
  if (C.zf) goto L_115696e7;
  /* 115696ca push 0x1158cfa0 */
  push32((uint32_t)(0x1158cfa0u));
  /* 115696cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 115696d2 push eax */
  push32((uint32_t)(EAX));
  /* 115696d3 call dword ptr [0x115943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943ac))), 0x115696d9u);
  /* 115696d9 mov dword ptr [0x11592108], eax */
  w32((uint32_t)(0x11592108), (EAX));
  /* 115696de cmp dword ptr [0x11592108], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592108))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115696e5 jne 0x115696eb */
  if (!C.zf) goto L_115696eb;
L_115696e7:;
  /* 115696e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 115696e9 jmp 0x11569757 */
  goto L_11569757;
L_115696eb:;
  /* 115696eb push 0x1158cf90 */
  push32((uint32_t)(0x1158cf90u));
  /* 115696f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 115696f3 push ecx */
  push32((uint32_t)(ECX));
  /* 115696f4 call dword ptr [0x115943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943ac))), 0x115696fau);
  /* 115696fa mov dword ptr [0x1159210c], eax */
  w32((uint32_t)(0x1159210c), (EAX));
  /* 115696ff push 0x1158cf7c */
  push32((uint32_t)(0x1158cf7cu));
  /* 11569704 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569707 push edx */
  push32((uint32_t)(EDX));
  /* 11569708 call dword ptr [0x115943ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943ac))), 0x1156970eu);
  /* 1156970e mov dword ptr [0x11592110], eax */
  w32((uint32_t)(0x11592110), (EAX));
L_11569713:;
  /* 11569713 cmp dword ptr [0x1159210c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1159210c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156971a je 0x11569725 */
  if (C.zf) goto L_11569725;
  /* 1156971c call dword ptr [0x1159210c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159210c))), 0x11569722u);
  /* 11569722 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11569725:;
  /* 11569725 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569729 je 0x11569741 */
  if (C.zf) goto L_11569741;
  /* 1156972b cmp dword ptr [0x11592110], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569732 je 0x11569741 */
  if (C.zf) goto L_11569741;
  /* 11569734 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569737 push eax */
  push32((uint32_t)(EAX));
  /* 11569738 call dword ptr [0x11592110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11592110))), 0x1156973eu);
  /* 1156973e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11569741:;
  /* 11569741 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11569744 push ecx */
  push32((uint32_t)(ECX));
  /* 11569745 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569748 push edx */
  push32((uint32_t)(EDX));
  /* 11569749 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156974c push eax */
  push32((uint32_t)(EAX));
  /* 1156974d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569750 push ecx */
  push32((uint32_t)(ECX));
  /* 11569751 call dword ptr [0x11592108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11592108))), 0x11569757u);
L_11569757:;
  /* 11569757 mov esp, ebp */
  ESP = (EBP);
  /* 11569759 pop ebp */
  EBP = (pop32());
  /* 1156975a ret  */
  ESPCHK(0x115696a0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11569760 (254 bytes, 109 insns) */
void f_11569760(void) {
  FTRACE(0x11569760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569760 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11569764 push edi */
  push32((uint32_t)(EDI));
  /* 11569765 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11569767 je 0x115697e3 */
  if (C.zf) goto L_115697e3;
  /* 11569769 push esi */
  push32((uint32_t)(ESI));
  /* 1156976a push ebx */
  push32((uint32_t)(EBX));
  /* 1156976b mov ebx, ecx */
  EBX = (ECX);
  /* 1156976d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11569771 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11569777 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1156977b jne 0x11569784 */
  if (!C.zf) goto L_11569784;
  /* 1156977d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11569780 jne 0x115697f1 */
  if (!C.zf) goto L_115697f1;
  /* 11569782 jmp 0x115697a5 */
  goto L_115697a5;
L_11569784:;
  /* 11569784 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11569786 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11569787 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11569789 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1156978a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1156978b je 0x115697b2 */
  if (C.zf) goto L_115697b2;
  /* 1156978d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1156978f je 0x115697ba */
  if (C.zf) goto L_115697ba;
  /* 11569791 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11569797 jne 0x11569784 */
  if (!C.zf) goto L_11569784;
  /* 11569799 mov ebx, ecx */
  EBX = (ECX);
  /* 1156979b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156979e jne 0x115697f1 */
  if (!C.zf) goto L_115697f1;
L_115697a0:;
  /* 115697a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 115697a3 je 0x115697b2 */
  if (C.zf) goto L_115697b2;
L_115697a5:;
  /* 115697a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 115697a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 115697a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115697aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115697ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 115697ad je 0x115697de */
  if (C.zf) goto L_115697de;
  /* 115697af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115697b0 jne 0x115697a5 */
  if (!C.zf) goto L_115697a5;
L_115697b2:;
  /* 115697b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 115697b6 pop ebx */
  EBX = (pop32());
  /* 115697b7 pop esi */
  ESI = (pop32());
  /* 115697b8 pop edi */
  EDI = (pop32());
  /* 115697b9 ret  */
  ESPCHK(0x11569760u, _esp0);
  ESP += 4; return;
L_115697ba:;
  /* 115697ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115697c0 je 0x115697d4 */
  if (C.zf) goto L_115697d4;
L_115697c2:;
  /* 115697c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115697c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 115697c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115697c6 je 0x11569856 */
  if (C.zf) goto L_11569856;
  /* 115697cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 115697d2 jne 0x115697c2 */
  if (!C.zf) goto L_115697c2;
L_115697d4:;
  /* 115697d4 mov ebx, ecx */
  EBX = (ECX);
  /* 115697d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 115697d9 jne 0x11569847 */
  if (!C.zf) goto L_11569847;
L_115697db:;
  /* 115697db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 115697dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_115697de:;
  /* 115697de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 115697df jne 0x115697db */
  if (!C.zf) goto L_115697db;
  /* 115697e1 pop ebx */
  EBX = (pop32());
  /* 115697e2 pop esi */
  ESI = (pop32());
L_115697e3:;
  /* 115697e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 115697e7 pop edi */
  EDI = (pop32());
  /* 115697e8 ret  */
  ESPCHK(0x11569760u, _esp0);
  ESP += 4; return;
L_115697e9:;
  /* 115697e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 115697eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 115697ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 115697ef je 0x115697a0 */
  if (C.zf) goto L_115697a0;
L_115697f1:;
  /* 115697f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 115697f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 115697f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 115697fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 115697fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 115697ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11569801 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11569804 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11569809 je 0x115697e9 */
  if (C.zf) goto L_115697e9;
  /* 1156980b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1156980d je 0x1156983b */
  if (C.zf) goto L_1156983b;
  /* 1156980f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11569811 je 0x11569831 */
  if (C.zf) goto L_11569831;
  /* 11569813 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11569819 je 0x11569827 */
  if (C.zf) goto L_11569827;
  /* 1156981b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11569821 jne 0x115697e9 */
  if (!C.zf) goto L_115697e9;
  /* 11569823 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11569825 jmp 0x1156983f */
  goto L_1156983f;
L_11569827:;
  /* 11569827 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1156982d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1156982f jmp 0x1156983f */
  goto L_1156983f;
L_11569831:;
  /* 11569831 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11569837 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11569839 jmp 0x1156983f */
  goto L_1156983f;
L_1156983b:;
  /* 1156983b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156983d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1156983f:;
  /* 1156983f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11569842 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11569844 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11569845 je 0x11569851 */
  if (C.zf) goto L_11569851;
L_11569847:;
  /* 11569847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11569849:;
  /* 11569849 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1156984b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156984e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1156984f jne 0x11569849 */
  if (!C.zf) goto L_11569849;
L_11569851:;
  /* 11569851 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11569854 jne 0x115697db */
  if (!C.zf) goto L_115697db;
L_11569856:;
  /* 11569856 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1156985a pop ebx */
  EBX = (pop32());
  /* 1156985b pop esi */
  ESI = (pop32());
  /* 1156985c pop edi */
  EDI = (pop32());
  /* 1156985d ret  */
  ESPCHK(0x11569760u, _esp0);
  ESP += 4; return;
}

/* FUN_10009860 @ 0x11569860 (55 bytes, 16 insns) */
void f_11569860(void) {
  FTRACE(0x11569860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569860 push ebp */
  push32((uint32_t)(EBP));
  /* 11569861 mov ebp, esp */
  EBP = (ESP);
  /* 11569863 mov eax, dword ptr [0x1158fb84] */
  EAX = (r32((uint32_t)(0x1158fb84)));
  /* 11569868 push eax */
  push32((uint32_t)(EAX));
  /* 11569869 call dword ptr [0x11594358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594358))), 0x1156986fu);
  /* 1156986f mov ecx, dword ptr [0x1158fb74] */
  ECX = (r32((uint32_t)(0x1158fb74)));
  /* 11569875 push ecx */
  push32((uint32_t)(ECX));
  /* 11569876 call dword ptr [0x11594358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594358))), 0x1156987cu);
  /* 1156987c mov edx, dword ptr [0x1158fb64] */
  EDX = (r32((uint32_t)(0x1158fb64)));
  /* 11569882 push edx */
  push32((uint32_t)(EDX));
  /* 11569883 call dword ptr [0x11594358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594358))), 0x11569889u);
  /* 11569889 mov eax, dword ptr [0x1158fb44] */
  EAX = (r32((uint32_t)(0x1158fb44)));
  /* 1156988e push eax */
  push32((uint32_t)(EAX));
  /* 1156988f call dword ptr [0x11594358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594358))), 0x11569895u);
  /* 11569895 pop ebp */
  EBP = (pop32());
  /* 11569896 ret  */
  ESPCHK(0x11569860u, _esp0);
  ESP += 4; return;
}

/* FUN_100098a0 @ 0x115698a0 (159 bytes, 47 insns) */
void f_115698a0(void) {
  FTRACE(0x115698a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115698a0 push ebp */
  push32((uint32_t)(EBP));
  /* 115698a1 mov ebp, esp */
  EBP = (ESP);
  /* 115698a3 push ecx */
  push32((uint32_t)(ECX));
  /* 115698a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 115698ab jmp 0x115698b6 */
  goto L_115698b6;
L_115698ad:;
  /* 115698ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 115698b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 115698b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_115698b6:;
  /* 115698b6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115698ba jge 0x11569909 */
  if ((C.sf==C.of)) goto L_11569909;
  /* 115698bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115698bf cmp dword ptr [ecx*4 + 0x1158fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1158fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115698c7 je 0x11569907 */
  if (C.zf) goto L_11569907;
  /* 115698c9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115698cd je 0x11569907 */
  if (C.zf) goto L_11569907;
  /* 115698cf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115698d3 je 0x11569907 */
  if (C.zf) goto L_11569907;
  /* 115698d5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115698d9 je 0x11569907 */
  if (C.zf) goto L_11569907;
  /* 115698db cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 115698df je 0x11569907 */
  if (C.zf) goto L_11569907;
  /* 115698e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115698e4 mov eax, dword ptr [edx*4 + 0x1158fb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1158fb40)));
  /* 115698eb push eax */
  push32((uint32_t)(EAX));
  /* 115698ec call dword ptr [0x115943bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943bc))), 0x115698f2u);
  /* 115698f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 115698f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115698f7 mov edx, dword ptr [ecx*4 + 0x1158fb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1158fb40)));
  /* 115698fe push edx */
  push32((uint32_t)(EDX));
  /* 115698ff call 0x115669d0 */
  push32(0x11569904u); f_115669d0();
  /* 11569904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11569907:;
  /* 11569907 jmp 0x115698ad */
  goto L_115698ad;
L_11569909:;
  /* 11569909 mov eax, dword ptr [0x1158fb64] */
  EAX = (r32((uint32_t)(0x1158fb64)));
  /* 1156990e push eax */
  push32((uint32_t)(EAX));
  /* 1156990f call dword ptr [0x115943bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943bc))), 0x11569915u);
  /* 11569915 mov ecx, dword ptr [0x1158fb74] */
  ECX = (r32((uint32_t)(0x1158fb74)));
  /* 1156991b push ecx */
  push32((uint32_t)(ECX));
  /* 1156991c call dword ptr [0x115943bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943bc))), 0x11569922u);
  /* 11569922 mov edx, dword ptr [0x1158fb84] */
  EDX = (r32((uint32_t)(0x1158fb84)));
  /* 11569928 push edx */
  push32((uint32_t)(EDX));
  /* 11569929 call dword ptr [0x115943bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943bc))), 0x1156992fu);
  /* 1156992f mov eax, dword ptr [0x1158fb44] */
  EAX = (r32((uint32_t)(0x1158fb44)));
  /* 11569934 push eax */
  push32((uint32_t)(EAX));
  /* 11569935 call dword ptr [0x115943bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943bc))), 0x1156993bu);
  /* 1156993b mov esp, ebp */
  ESP = (EBP);
  /* 1156993d pop ebp */
  EBP = (pop32());
  /* 1156993e ret  */
  ESPCHK(0x115698a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009940 @ 0x11569940 (151 bytes, 46 insns) */
void f_11569940(void) {
  FTRACE(0x11569940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569940 push ebp */
  push32((uint32_t)(EBP));
  /* 11569941 mov ebp, esp */
  EBP = (ESP);
  /* 11569943 push ecx */
  push32((uint32_t)(ECX));
  /* 11569944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569947 cmp dword ptr [eax*4 + 0x1158fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1158fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156994f jne 0x115699c2 */
  if (!C.zf) goto L_115699c2;
  /* 11569951 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11569956 push 0x1158cfac */
  push32((uint32_t)(0x1158cfacu));
  /* 1156995b push 2 */
  push32((uint32_t)(0x2u));
  /* 1156995d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1156995f call 0x11565f40 */
  push32(0x11569964u); f_11565f40();
  /* 11569964 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569967 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156996a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156996e jne 0x1156997a */
  if (!C.zf) goto L_1156997a;
  /* 11569970 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11569972 call 0x11564eb0 */
  push32(0x11569977u); f_11564eb0();
  /* 11569977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156997a:;
  /* 1156997a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1156997c call 0x11569940 */
  push32(0x11569981u); f_11569940();
  /* 11569981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569984 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569987 cmp dword ptr [ecx*4 + 0x1158fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1158fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156998f jne 0x115699aa */
  if (!C.zf) goto L_115699aa;
  /* 11569991 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569994 push edx */
  push32((uint32_t)(EDX));
  /* 11569995 call dword ptr [0x11594358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594358))), 0x1156999bu);
  /* 1156999b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156999e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 115699a1 mov dword ptr [eax*4 + 0x1158fb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1158fb40), (ECX));
  /* 115699a8 jmp 0x115699b8 */
  goto L_115699b8;
L_115699aa:;
  /* 115699aa push 2 */
  push32((uint32_t)(0x2u));
  /* 115699ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 115699af push edx */
  push32((uint32_t)(EDX));
  /* 115699b0 call 0x115669d0 */
  push32(0x115699b5u); f_115669d0();
  /* 115699b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115699b8:;
  /* 115699b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 115699ba call 0x115699e0 */
  push32(0x115699bfu); f_115699e0();
  /* 115699bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_115699c2:;
  /* 115699c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115699c5 mov ecx, dword ptr [eax*4 + 0x1158fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1158fb40)));
  /* 115699cc push ecx */
  push32((uint32_t)(ECX));
  /* 115699cd call dword ptr [0x11594354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594354))), 0x115699d3u);
  /* 115699d3 mov esp, ebp */
  ESP = (EBP);
  /* 115699d5 pop ebp */
  EBP = (pop32());
  /* 115699d6 ret  */
  ESPCHK(0x11569940u, _esp0);
  ESP += 4; return;
}

/* FUN_100099e0 @ 0x115699e0 (22 bytes, 8 insns) */
void f_115699e0(void) {
  FTRACE(0x115699e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 115699e0 push ebp */
  push32((uint32_t)(EBP));
  /* 115699e1 mov ebp, esp */
  EBP = (ESP);
  /* 115699e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 115699e6 mov ecx, dword ptr [eax*4 + 0x1158fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1158fb40)));
  /* 115699ed push ecx */
  push32((uint32_t)(ECX));
  /* 115699ee call dword ptr [0x11594350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594350))), 0x115699f4u);
  /* 115699f4 pop ebp */
  EBP = (pop32());
  /* 115699f5 ret  */
  ESPCHK(0x115699e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a00 @ 0x11569a00 (26 bytes, 10 insns) */
void f_11569a00(void) {
  FTRACE(0x11569a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569a00 push ebp */
  push32((uint32_t)(EBP));
  /* 11569a01 mov ebp, esp */
  EBP = (ESP);
  /* 11569a03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569a06 push eax */
  push32((uint32_t)(EAX));
  /* 11569a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11569a09 call dword ptr [0x1159434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159434c))), 0x11569a0fu);
  /* 11569a0f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11569a14 call dword ptr [0x115943d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d8))), 0x11569a1au);
  /* 11569a1a pop ebp */
  EBP = (pop32());
  /* 11569a1b ret  */
  ESPCHK(0x11569a00u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11569a20 (446 bytes, 130 insns) */
void f_11569a20(void) {
  FTRACE(0x11569a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11569a21 mov ebp, esp */
  EBP = (ESP);
  /* 11569a23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11569a26 call 0x11565780 */
  push32(0x11569a2bu); f_11565780();
  /* 11569a2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11569a2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569a31 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11569a34 push ecx */
  push32((uint32_t)(ECX));
  /* 11569a35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569a38 push edx */
  push32((uint32_t)(EDX));
  /* 11569a39 call 0x11569be0 */
  push32(0x11569a3eu); f_11569be0();
  /* 11569a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569a41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11569a44 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569a48 je 0x11569a53 */
  if (C.zf) goto L_11569a53;
  /* 11569a4a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569a4d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569a51 jne 0x11569a62 */
  if (!C.zf) goto L_11569a62;
L_11569a53:;
  /* 11569a53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569a56 push ecx */
  push32((uint32_t)(ECX));
  /* 11569a57 call dword ptr [0x11594348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594348))), 0x11569a5du);
  /* 11569a5d jmp 0x11569bda */
  goto L_11569bda;
L_11569a62:;
  /* 11569a62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569a65 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569a69 jne 0x11569a7f */
  if (!C.zf) goto L_11569a7f;
  /* 11569a6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569a6e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11569a75 mov eax, 1 */
  EAX = (0x1u);
  /* 11569a7a jmp 0x11569bda */
  goto L_11569bda;
L_11569a7f:;
  /* 11569a7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569a82 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569a86 jne 0x11569a90 */
  if (!C.zf) goto L_11569a90;
  /* 11569a88 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11569a8b jmp 0x11569bda */
  goto L_11569bda;
L_11569a90:;
  /* 11569a90 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569a93 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11569a96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11569a99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569a9c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11569a9f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11569aa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569aa5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569aa8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11569aab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569aae cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569ab2 jne 0x11569bb7 */
  if (!C.zf) goto L_11569bb7;
  /* 11569ab8 mov eax, dword ptr [0x1158fc78] */
  EAX = (r32((uint32_t)(0x1158fc78)));
  /* 11569abd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11569ac0 jmp 0x11569acb */
  goto L_11569acb;
L_11569ac2:;
  /* 11569ac2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11569ac5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569ac8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11569acb:;
  /* 11569acb mov edx, dword ptr [0x1158fc78] */
  EDX = (r32((uint32_t)(0x1158fc78)));
  /* 11569ad1 add edx, dword ptr [0x1158fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1158fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569ad7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569ada jge 0x11569af2 */
  if ((C.sf==C.of)) goto L_11569af2;
  /* 11569adc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11569adf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11569ae2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569ae5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11569ae8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11569af0 jmp 0x11569ac2 */
  goto L_11569ac2;
L_11569af2:;
  /* 11569af2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569af5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11569af8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11569afb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569afe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569b04 jne 0x11569b15 */
  if (!C.zf) goto L_11569b15;
  /* 11569b06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569b09 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11569b10 jmp 0x11569b9d */
  goto L_11569b9d;
L_11569b15:;
  /* 11569b15 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569b18 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569b1e jne 0x11569b2c */
  if (!C.zf) goto L_11569b2c;
  /* 11569b20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569b23 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11569b2a jmp 0x11569b9d */
  goto L_11569b9d;
L_11569b2c:;
  /* 11569b2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569b2f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569b35 jne 0x11569b43 */
  if (!C.zf) goto L_11569b43;
  /* 11569b37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569b3a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11569b41 jmp 0x11569b9d */
  goto L_11569b9d;
L_11569b43:;
  /* 11569b43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569b46 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569b4c jne 0x11569b5a */
  if (!C.zf) goto L_11569b5a;
  /* 11569b4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569b51 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11569b58 jmp 0x11569b9d */
  goto L_11569b9d;
L_11569b5a:;
  /* 11569b5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569b5d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569b63 jne 0x11569b71 */
  if (!C.zf) goto L_11569b71;
  /* 11569b65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569b68 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11569b6f jmp 0x11569b9d */
  goto L_11569b9d;
L_11569b71:;
  /* 11569b71 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569b74 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569b7a jne 0x11569b88 */
  if (!C.zf) goto L_11569b88;
  /* 11569b7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569b7f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11569b86 jmp 0x11569b9d */
  goto L_11569b9d;
L_11569b88:;
  /* 11569b88 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569b8b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569b91 jne 0x11569b9d */
  if (!C.zf) goto L_11569b9d;
  /* 11569b93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569b96 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11569b9d:;
  /* 11569b9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569ba0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11569ba3 push edx */
  push32((uint32_t)(EDX));
  /* 11569ba4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11569ba6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11569ba9u);
  /* 11569ba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569bac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569baf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11569bb2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11569bb5 jmp 0x11569bce */
  goto L_11569bce;
L_11569bb7:;
  /* 11569bb7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569bba mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11569bc1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569bc4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11569bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11569bc8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11569bcbu);
  /* 11569bcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11569bce:;
  /* 11569bce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569bd1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11569bd4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11569bd7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11569bda:;
  /* 11569bda mov esp, ebp */
  ESP = (EBP);
  /* 11569bdc pop ebp */
  EBP = (pop32());
  /* 11569bdd ret  */
  ESPCHK(0x11569a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009be0 @ 0x11569be0 (89 bytes, 35 insns) */
void f_11569be0(void) {
  FTRACE(0x11569be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11569be1 mov ebp, esp */
  EBP = (ESP);
  /* 11569be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11569be4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569be7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11569bea:;
  /* 11569bea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569bed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11569bef cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569bf2 je 0x11569c12 */
  if (C.zf) goto L_11569c12;
  /* 11569bf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569bf7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569bfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11569bfd mov ecx, dword ptr [0x1158fc84] */
  ECX = (r32((uint32_t)(0x1158fc84)));
  /* 11569c03 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11569c06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569c09 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569c0b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569c0e jae 0x11569c12 */
  if (!C.cf) goto L_11569c12;
  /* 11569c10 jmp 0x11569bea */
  goto L_11569bea;
L_11569c12:;
  /* 11569c12 mov eax, dword ptr [0x1158fc84] */
  EAX = (r32((uint32_t)(0x1158fc84)));
  /* 11569c17 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11569c1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569c1d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569c1f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569c22 jae 0x11569c2e */
  if (!C.cf) goto L_11569c2e;
  /* 11569c24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569c27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11569c29 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569c2c je 0x11569c32 */
  if (C.zf) goto L_11569c32;
L_11569c2e:;
  /* 11569c2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11569c30 jmp 0x11569c35 */
  goto L_11569c35;
L_11569c32:;
  /* 11569c32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11569c35:;
  /* 11569c35 mov esp, ebp */
  ESP = (EBP);
  /* 11569c37 pop ebp */
  EBP = (pop32());
  /* 11569c38 ret  */
  ESPCHK(0x11569be0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11569c40 (48 bytes, 17 insns) */
void f_11569c40(void) {
  FTRACE(0x11569c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11569c41 mov ebp, esp */
  EBP = (ESP);
  /* 11569c43 push ecx */
  push32((uint32_t)(ECX));
  /* 11569c44 push 9 */
  push32((uint32_t)(0x9u));
  /* 11569c46 call 0x11569940 */
  push32(0x11569c4bu); f_11569940();
  /* 11569c4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569c4e mov eax, dword ptr [0x1159217c] */
  EAX = (r32((uint32_t)(0x1159217c)));
  /* 11569c53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11569c56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569c59 mov dword ptr [0x1159217c], ecx */
  w32((uint32_t)(0x1159217c), (ECX));
  /* 11569c5f push 9 */
  push32((uint32_t)(0x9u));
  /* 11569c61 call 0x115699e0 */
  push32(0x11569c66u); f_115699e0();
  /* 11569c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569c69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569c6c mov esp, ebp */
  ESP = (EBP);
  /* 11569c6e pop ebp */
  EBP = (pop32());
  /* 11569c6f ret  */
  ESPCHK(0x11569c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c70 @ 0x11569c70 (10 bytes, 5 insns) */
void f_11569c70(void) {
  FTRACE(0x11569c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11569c71 mov ebp, esp */
  EBP = (ESP);
  /* 11569c73 mov eax, dword ptr [0x1159217c] */
  EAX = (r32((uint32_t)(0x1159217c)));
  /* 11569c78 pop ebp */
  EBP = (pop32());
  /* 11569c79 ret  */
  ESPCHK(0x11569c70u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11569c80 (45 bytes, 19 insns) */
void f_11569c80(void) {
  FTRACE(0x11569c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11569c81 mov ebp, esp */
  EBP = (ESP);
  /* 11569c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11569c84 mov eax, dword ptr [0x1159217c] */
  EAX = (r32((uint32_t)(0x1159217c)));
  /* 11569c89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11569c8c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569c90 je 0x11569ca0 */
  if (C.zf) goto L_11569ca0;
  /* 11569c92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569c95 push ecx */
  push32((uint32_t)(ECX));
  /* 11569c96 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11569c99u);
  /* 11569c99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569c9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11569c9e jne 0x11569ca4 */
  if (!C.zf) goto L_11569ca4;
L_11569ca0:;
  /* 11569ca0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11569ca2 jmp 0x11569ca9 */
  goto L_11569ca9;
L_11569ca4:;
  /* 11569ca4 mov eax, 1 */
  EAX = (0x1u);
L_11569ca9:;
  /* 11569ca9 mov esp, ebp */
  ESP = (EBP);
  /* 11569cab pop ebp */
  EBP = (pop32());
  /* 11569cac ret  */
  ESPCHK(0x11569c80u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11569cb0 (88 bytes, 40 insns) */
void f_11569cb0(void) {
  FTRACE(0x11569cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569cb0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11569cb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11569cb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11569cba je 0x11569d03 */
  if (C.zf) goto L_11569d03;
  /* 11569cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11569cbe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11569cc2 push edi */
  push32((uint32_t)(EDI));
  /* 11569cc3 mov edi, ecx */
  EDI = (ECX);
  /* 11569cc5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569cc8 jb 0x11569cf7 */
  if (C.cf) goto L_11569cf7;
  /* 11569cca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11569ccc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11569ccf je 0x11569cd9 */
  if (C.zf) goto L_11569cd9;
  /* 11569cd1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11569cd3:;
  /* 11569cd3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11569cd5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11569cd6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11569cd7 jne 0x11569cd3 */
  if (!C.zf) goto L_11569cd3;
L_11569cd9:;
  /* 11569cd9 mov ecx, eax */
  ECX = (EAX);
  /* 11569cdb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11569cde add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569ce0 mov ecx, eax */
  ECX = (EAX);
  /* 11569ce2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11569ce5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569ce7 mov ecx, edx */
  ECX = (EDX);
  /* 11569ce9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11569cec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11569cef je 0x11569cf7 */
  if (C.zf) goto L_11569cf7;
  /* 11569cf1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11569cf3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11569cf5 je 0x11569cfd */
  if (C.zf) goto L_11569cfd;
L_11569cf7:;
  /* 11569cf7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11569cf9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11569cfa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11569cfb jne 0x11569cf7 */
  if (!C.zf) goto L_11569cf7;
L_11569cfd:;
  /* 11569cfd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11569d01 pop edi */
  EDI = (pop32());
  /* 11569d02 ret  */
  ESPCHK(0x11569cb0u, _esp0);
  ESP += 4; return;
L_11569d03:;
  /* 11569d03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11569d07 ret  */
  ESPCHK(0x11569cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d10 @ 0x11569d10 (23 bytes, 10 insns) */
void f_11569d10(void) {
  FTRACE(0x11569d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11569d11 mov ebp, esp */
  EBP = (ESP);
  /* 11569d13 mov eax, dword ptr [0x11592178] */
  EAX = (r32((uint32_t)(0x11592178)));
  /* 11569d18 push eax */
  push32((uint32_t)(EAX));
  /* 11569d19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569d1c push ecx */
  push32((uint32_t)(ECX));
  /* 11569d1d call 0x11569d30 */
  push32(0x11569d22u); f_11569d30();
  /* 11569d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569d25 pop ebp */
  EBP = (pop32());
  /* 11569d26 ret  */
  ESPCHK(0x11569d10u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11569d30 (87 bytes, 34 insns) */
void f_11569d30(void) {
  FTRACE(0x11569d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11569d31 mov ebp, esp */
  EBP = (ESP);
  /* 11569d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11569d34 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569d38 jbe 0x11569d3e */
  if ((C.cf||C.zf)) goto L_11569d3e;
  /* 11569d3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11569d3c jmp 0x11569d83 */
  goto L_11569d83;
L_11569d3e:;
  /* 11569d3e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569d42 ja 0x11569d55 */
  if ((!C.cf&&!C.zf)) goto L_11569d55;
  /* 11569d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569d47 push eax */
  push32((uint32_t)(EAX));
  /* 11569d48 call 0x11569d90 */
  push32(0x11569d4du); f_11569d90();
  /* 11569d4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569d50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11569d53 jmp 0x11569d5c */
  goto L_11569d5c;
L_11569d55:;
  /* 11569d55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11569d5c:;
  /* 11569d5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569d60 jne 0x11569d68 */
  if (!C.zf) goto L_11569d68;
  /* 11569d62 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569d66 jne 0x11569d6d */
  if (!C.zf) goto L_11569d6d;
L_11569d68:;
  /* 11569d68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569d6b jmp 0x11569d83 */
  goto L_11569d83;
L_11569d6d:;
  /* 11569d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569d70 push ecx */
  push32((uint32_t)(ECX));
  /* 11569d71 call 0x11569c80 */
  push32(0x11569d76u); f_11569c80();
  /* 11569d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11569d7b jne 0x11569d81 */
  if (!C.zf) goto L_11569d81;
  /* 11569d7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11569d7f jmp 0x11569d83 */
  goto L_11569d83;
L_11569d81:;
  /* 11569d81 jmp 0x11569d3e */
  goto L_11569d3e;
L_11569d83:;
  /* 11569d83 mov esp, ebp */
  ESP = (EBP);
  /* 11569d85 pop ebp */
  EBP = (pop32());
  /* 11569d86 ret  */
  ESPCHK(0x11569d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d90 @ 0x11569d90 (109 bytes, 37 insns) */
void f_11569d90(void) {
  FTRACE(0x11569d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11569d91 mov ebp, esp */
  EBP = (ESP);
  /* 11569d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11569d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569d97 cmp eax, dword ptr [0x1158fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1158fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569d9d ja 0x11569dcd */
  if ((!C.cf&&!C.zf)) goto L_11569dcd;
  /* 11569d9f push 9 */
  push32((uint32_t)(0x9u));
  /* 11569da1 call 0x11569940 */
  push32(0x11569da6u); f_11569940();
  /* 11569da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569da9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569dac push ecx */
  push32((uint32_t)(ECX));
  /* 11569dad call 0x1156a8d0 */
  push32(0x11569db2u); f_1156a8d0();
  /* 11569db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569db5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11569db8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11569dba call 0x115699e0 */
  push32(0x11569dbfu); f_115699e0();
  /* 11569dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569dc2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569dc6 je 0x11569dcd */
  if (C.zf) goto L_11569dcd;
  /* 11569dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569dcb jmp 0x11569df9 */
  goto L_11569df9;
L_11569dcd:;
  /* 11569dcd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569dd1 jne 0x11569dda */
  if (!C.zf) goto L_11569dda;
  /* 11569dd3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11569dda:;
  /* 11569dda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569ddd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569de0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11569de3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11569de6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569de9 push eax */
  push32((uint32_t)(EAX));
  /* 11569dea push 0 */
  push32((uint32_t)(0x0u));
  /* 11569dec mov ecx, dword ptr [0x1159392c] */
  ECX = (r32((uint32_t)(0x1159392c)));
  /* 11569df2 push ecx */
  push32((uint32_t)(ECX));
  /* 11569df3 call dword ptr [0x11594344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594344))), 0x11569df9u);
L_11569df9:;
  /* 11569df9 mov esp, ebp */
  ESP = (EBP);
  /* 11569dfb pop ebp */
  EBP = (pop32());
  /* 11569dfc ret  */
  ESPCHK(0x11569d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e00 @ 0x11569e00 (10 bytes, 5 insns) */
void f_11569e00(void) {
  FTRACE(0x11569e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11569e01 mov ebp, esp */
  EBP = (ESP);
  /* 11569e03 mov eax, 1 */
  EAX = (0x1u);
  /* 11569e08 pop ebp */
  EBP = (pop32());
  /* 11569e09 ret  */
  ESPCHK(0x11569e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e10 @ 0x11569e10 (173 bytes, 59 insns) */
void f_11569e10(void) {
  FTRACE(0x11569e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11569e11 mov ebp, esp */
  EBP = (ESP);
  /* 11569e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11569e16 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569e1a jbe 0x11569e23 */
  if ((C.cf||C.zf)) goto L_11569e23;
  /* 11569e1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11569e1e jmp 0x11569eb9 */
  goto L_11569eb9;
L_11569e23:;
  /* 11569e23 push 9 */
  push32((uint32_t)(0x9u));
  /* 11569e25 call 0x11569940 */
  push32(0x11569e2au); f_11569940();
  /* 11569e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569e30 push eax */
  push32((uint32_t)(EAX));
  /* 11569e31 call 0x1156a240 */
  push32(0x11569e36u); f_1156a240();
  /* 11569e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569e39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11569e3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569e40 je 0x11569e81 */
  if (C.zf) goto L_11569e81;
  /* 11569e42 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11569e49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569e4c cmp ecx, dword ptr [0x1158fc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1158fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569e52 ja 0x11569e72 */
  if ((!C.cf&&!C.zf)) goto L_11569e72;
  /* 11569e54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569e57 push edx */
  push32((uint32_t)(EDX));
  /* 11569e58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569e5b push eax */
  push32((uint32_t)(EAX));
  /* 11569e5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569e5f push ecx */
  push32((uint32_t)(ECX));
  /* 11569e60 call 0x1156b110 */
  push32(0x11569e65u); f_1156b110();
  /* 11569e65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569e68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11569e6a je 0x11569e72 */
  if (C.zf) goto L_11569e72;
  /* 11569e6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569e6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11569e72:;
  /* 11569e72 push 9 */
  push32((uint32_t)(0x9u));
  /* 11569e74 call 0x115699e0 */
  push32(0x11569e79u); f_115699e0();
  /* 11569e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569e7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569e7f jmp 0x11569eb9 */
  goto L_11569eb9;
L_11569e81:;
  /* 11569e81 push 9 */
  push32((uint32_t)(0x9u));
  /* 11569e83 call 0x115699e0 */
  push32(0x11569e88u); f_115699e0();
  /* 11569e88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569e8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569e8f jne 0x11569e98 */
  if (!C.zf) goto L_11569e98;
  /* 11569e91 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11569e98:;
  /* 11569e98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569e9b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569e9e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11569ea0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11569ea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 11569ea7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569eaa push edx */
  push32((uint32_t)(EDX));
  /* 11569eab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11569ead mov eax, dword ptr [0x1159392c] */
  EAX = (r32((uint32_t)(0x1159392c)));
  /* 11569eb2 push eax */
  push32((uint32_t)(EAX));
  /* 11569eb3 call dword ptr [0x11594340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594340))), 0x11569eb9u);
L_11569eb9:;
  /* 11569eb9 mov esp, ebp */
  ESP = (EBP);
  /* 11569ebb pop ebp */
  EBP = (pop32());
  /* 11569ebc ret  */
  ESPCHK(0x11569e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ec0 @ 0x11569ec0 (490 bytes, 165 insns) */
void f_11569ec0(void) {
  FTRACE(0x11569ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11569ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11569ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11569ec3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11569ec6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569eca jne 0x11569edd */
  if (!C.zf) goto L_11569edd;
  /* 11569ecc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569ecf push eax */
  push32((uint32_t)(EAX));
  /* 11569ed0 call 0x11569d10 */
  push32(0x11569ed5u); f_11569d10();
  /* 11569ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569ed8 jmp 0x1156a0a6 */
  goto L_1156a0a6;
L_11569edd:;
  /* 11569edd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569ee1 jne 0x11569ef6 */
  if (!C.zf) goto L_11569ef6;
  /* 11569ee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 11569ee7 call 0x1156a0b0 */
  push32(0x11569eecu); f_1156a0b0();
  /* 11569eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569eef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11569ef1 jmp 0x1156a0a6 */
  goto L_1156a0a6;
L_11569ef6:;
  /* 11569ef6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11569efd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569f01 ja 0x1156a079 */
  if ((!C.cf&&!C.zf)) goto L_1156a079;
  /* 11569f07 push 9 */
  push32((uint32_t)(0x9u));
  /* 11569f09 call 0x11569940 */
  push32(0x11569f0eu); f_11569940();
  /* 11569f0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569f11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569f14 push edx */
  push32((uint32_t)(EDX));
  /* 11569f15 call 0x1156a240 */
  push32(0x11569f1au); f_1156a240();
  /* 11569f1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569f1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11569f20 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569f24 je 0x1156a03c */
  if (C.zf) goto L_1156a03c;
  /* 11569f2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569f2d cmp eax, dword ptr [0x1158fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1158fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569f33 ja 0x11569fb0 */
  if ((!C.cf&&!C.zf)) goto L_11569fb0;
  /* 11569f35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569f38 push ecx */
  push32((uint32_t)(ECX));
  /* 11569f39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569f3c push edx */
  push32((uint32_t)(EDX));
  /* 11569f3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11569f40 push eax */
  push32((uint32_t)(EAX));
  /* 11569f41 call 0x1156b110 */
  push32(0x11569f46u); f_1156b110();
  /* 11569f46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569f49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11569f4b je 0x11569f55 */
  if (C.zf) goto L_11569f55;
  /* 11569f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569f50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11569f53 jmp 0x11569fb0 */
  goto L_11569fb0;
L_11569f55:;
  /* 11569f55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569f58 push edx */
  push32((uint32_t)(EDX));
  /* 11569f59 call 0x1156a8d0 */
  push32(0x11569f5eu); f_1156a8d0();
  /* 11569f5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569f61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11569f64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569f68 je 0x11569fb0 */
  if (C.zf) goto L_11569fb0;
  /* 11569f6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569f6d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11569f70 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11569f73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11569f76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569f79 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569f7c jae 0x11569f86 */
  if (!C.cf) goto L_11569f86;
  /* 11569f7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569f81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11569f84 jmp 0x11569f8c */
  goto L_11569f8c;
L_11569f86:;
  /* 11569f86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569f89 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11569f8c:;
  /* 11569f8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11569f8f push edx */
  push32((uint32_t)(EDX));
  /* 11569f90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569f93 push eax */
  push32((uint32_t)(EAX));
  /* 11569f94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11569f97 push ecx */
  push32((uint32_t)(ECX));
  /* 11569f98 call 0x1156c820 */
  push32(0x11569f9du); f_1156c820();
  /* 11569f9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11569fa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569fa3 push edx */
  push32((uint32_t)(EDX));
  /* 11569fa4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11569fa7 push eax */
  push32((uint32_t)(EAX));
  /* 11569fa8 call 0x1156a300 */
  push32(0x11569fadu); f_1156a300();
  /* 11569fad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11569fb0:;
  /* 11569fb0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569fb4 jne 0x1156a030 */
  if (!C.zf) goto L_1156a030;
  /* 11569fb6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569fba jne 0x11569fc3 */
  if (!C.zf) goto L_11569fc3;
  /* 11569fbc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11569fc3:;
  /* 11569fc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569fc6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11569fc9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11569fcc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11569fcf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11569fd2 push edx */
  push32((uint32_t)(EDX));
  /* 11569fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11569fd5 mov eax, dword ptr [0x1159392c] */
  EAX = (r32((uint32_t)(0x1159392c)));
  /* 11569fda push eax */
  push32((uint32_t)(EAX));
  /* 11569fdb call dword ptr [0x11594344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594344))), 0x11569fe1u);
  /* 11569fe1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11569fe4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569fe8 je 0x1156a030 */
  if (C.zf) goto L_1156a030;
  /* 11569fea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11569fed mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11569ff0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11569ff3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11569ff6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11569ff9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11569ffc jae 0x1156a006 */
  if (!C.cf) goto L_1156a006;
  /* 11569ffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a001 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1156a004 jmp 0x1156a00c */
  goto L_1156a00c;
L_1156a006:;
  /* 1156a006 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156a009 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1156a00c:;
  /* 1156a00c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156a00f push eax */
  push32((uint32_t)(EAX));
  /* 1156a010 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a013 push ecx */
  push32((uint32_t)(ECX));
  /* 1156a014 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a017 push edx */
  push32((uint32_t)(EDX));
  /* 1156a018 call 0x1156c820 */
  push32(0x1156a01du); f_1156c820();
  /* 1156a01d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a023 push eax */
  push32((uint32_t)(EAX));
  /* 1156a024 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156a027 push ecx */
  push32((uint32_t)(ECX));
  /* 1156a028 call 0x1156a300 */
  push32(0x1156a02du); f_1156a300();
  /* 1156a02d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156a030:;
  /* 1156a030 push 9 */
  push32((uint32_t)(0x9u));
  /* 1156a032 call 0x115699e0 */
  push32(0x1156a037u); f_115699e0();
  /* 1156a037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a03a jmp 0x1156a079 */
  goto L_1156a079;
L_1156a03c:;
  /* 1156a03c push 9 */
  push32((uint32_t)(0x9u));
  /* 1156a03e call 0x115699e0 */
  push32(0x1156a043u); f_115699e0();
  /* 1156a043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a046 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a04a jne 0x1156a053 */
  if (!C.zf) goto L_1156a053;
  /* 1156a04c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1156a053:;
  /* 1156a053 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156a056 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a059 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1156a05c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1156a05f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156a062 push eax */
  push32((uint32_t)(EAX));
  /* 1156a063 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a066 push ecx */
  push32((uint32_t)(ECX));
  /* 1156a067 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156a069 mov edx, dword ptr [0x1159392c] */
  EDX = (r32((uint32_t)(0x1159392c)));
  /* 1156a06f push edx */
  push32((uint32_t)(EDX));
  /* 1156a070 call dword ptr [0x11594340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594340))), 0x1156a076u);
  /* 1156a076 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1156a079:;
  /* 1156a079 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a07d jne 0x1156a088 */
  if (!C.zf) goto L_1156a088;
  /* 1156a07f cmp dword ptr [0x11592178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a086 jne 0x1156a08d */
  if (!C.zf) goto L_1156a08d;
L_1156a088:;
  /* 1156a088 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a08b jmp 0x1156a0a6 */
  goto L_1156a0a6;
L_1156a08d:;
  /* 1156a08d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156a090 push eax */
  push32((uint32_t)(EAX));
  /* 1156a091 call 0x11569c80 */
  push32(0x1156a096u); f_11569c80();
  /* 1156a096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156a09b jne 0x1156a0a1 */
  if (!C.zf) goto L_1156a0a1;
  /* 1156a09d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156a09f jmp 0x1156a0a6 */
  goto L_1156a0a6;
L_1156a0a1:;
  /* 1156a0a1 jmp 0x11569ef6 */
  goto L_11569ef6;
L_1156a0a6:;
  /* 1156a0a6 mov esp, ebp */
  ESP = (EBP);
  /* 1156a0a8 pop ebp */
  EBP = (pop32());
  /* 1156a0a9 ret  */
  ESPCHK(0x11569ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b0 @ 0x1156a0b0 (104 bytes, 38 insns) */
void f_1156a0b0(void) {
  FTRACE(0x1156a0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1156a0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156a0b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a0b8 jne 0x1156a0bc */
  if (!C.zf) goto L_1156a0bc;
  /* 1156a0ba jmp 0x1156a114 */
  goto L_1156a114;
L_1156a0bc:;
  /* 1156a0bc push 9 */
  push32((uint32_t)(0x9u));
  /* 1156a0be call 0x11569940 */
  push32(0x1156a0c3u); f_11569940();
  /* 1156a0c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a0c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a0c9 push eax */
  push32((uint32_t)(EAX));
  /* 1156a0ca call 0x1156a240 */
  push32(0x1156a0cfu); f_1156a240();
  /* 1156a0cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a0d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156a0d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a0d9 je 0x1156a0f7 */
  if (C.zf) goto L_1156a0f7;
  /* 1156a0db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a0de push ecx */
  push32((uint32_t)(ECX));
  /* 1156a0df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a0e2 push edx */
  push32((uint32_t)(EDX));
  /* 1156a0e3 call 0x1156a300 */
  push32(0x1156a0e8u); f_1156a300();
  /* 1156a0e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a0eb push 9 */
  push32((uint32_t)(0x9u));
  /* 1156a0ed call 0x115699e0 */
  push32(0x1156a0f2u); f_115699e0();
  /* 1156a0f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a0f5 jmp 0x1156a114 */
  goto L_1156a114;
L_1156a0f7:;
  /* 1156a0f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1156a0f9 call 0x115699e0 */
  push32(0x1156a0feu); f_115699e0();
  /* 1156a0fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a101 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a104 push eax */
  push32((uint32_t)(EAX));
  /* 1156a105 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156a107 mov ecx, dword ptr [0x1159392c] */
  ECX = (r32((uint32_t)(0x1159392c)));
  /* 1156a10d push ecx */
  push32((uint32_t)(ECX));
  /* 1156a10e call dword ptr [0x11594364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594364))), 0x1156a114u);
L_1156a114:;
  /* 1156a114 mov esp, ebp */
  ESP = (EBP);
  /* 1156a116 pop ebp */
  EBP = (pop32());
  /* 1156a117 ret  */
  ESPCHK(0x1156a0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a120 @ 0x1156a120 (116 bytes, 34 insns) */
void f_1156a120(void) {
  FTRACE(0x1156a120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a120 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a121 mov ebp, esp */
  EBP = (ESP);
  /* 1156a123 push ecx */
  push32((uint32_t)(ECX));
  /* 1156a124 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1156a12b push 9 */
  push32((uint32_t)(0x9u));
  /* 1156a12d call 0x11569940 */
  push32(0x1156a132u); f_11569940();
  /* 1156a132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a135 call 0x1156b830 */
  push32(0x1156a13au); f_1156b830();
  /* 1156a13a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156a13c jge 0x1156a145 */
  if ((C.sf==C.of)) goto L_1156a145;
  /* 1156a13e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1156a145:;
  /* 1156a145 push 9 */
  push32((uint32_t)(0x9u));
  /* 1156a147 call 0x115699e0 */
  push32(0x1156a14cu); f_115699e0();
  /* 1156a14c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a14f push 0 */
  push32((uint32_t)(0x0u));
  /* 1156a151 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156a153 mov eax, dword ptr [0x1159392c] */
  EAX = (r32((uint32_t)(0x1159392c)));
  /* 1156a158 push eax */
  push32((uint32_t)(EAX));
  /* 1156a159 call dword ptr [0x11594384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594384))), 0x1156a15fu);
  /* 1156a15f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156a161 jne 0x1156a18d */
  if (!C.zf) goto L_1156a18d;
  /* 1156a163 call dword ptr [0x115943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d4))), 0x1156a169u);
  /* 1156a169 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a16c jne 0x1156a186 */
  if (!C.zf) goto L_1156a186;
  /* 1156a16e call 0x1156de20 */
  push32(0x1156a173u); f_1156de20();
  /* 1156a173 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1156a179 call 0x1156de10 */
  push32(0x1156a17eu); f_1156de10();
  /* 1156a17e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1156a184 jmp 0x1156a18d */
  goto L_1156a18d;
L_1156a186:;
  /* 1156a186 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1156a18d:;
  /* 1156a18d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a190 mov esp, ebp */
  ESP = (EBP);
  /* 1156a192 pop ebp */
  EBP = (pop32());
  /* 1156a193 ret  */
  ESPCHK(0x1156a120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a0 @ 0x1156a1a0 (10 bytes, 5 insns) */
void f_1156a1a0(void) {
  FTRACE(0x1156a1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1156a1a3 call 0x1156a120 */
  push32(0x1156a1a8u); f_1156a120();
  /* 1156a1a8 pop ebp */
  EBP = (pop32());
  /* 1156a1a9 ret  */
  ESPCHK(0x1156a1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1b0 @ 0x1156a1b0 (10 bytes, 5 insns) */
void f_1156a1b0(void) {
  FTRACE(0x1156a1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1156a1b3 mov eax, dword ptr [0x1158fc94] */
  EAX = (r32((uint32_t)(0x1158fc94)));
  /* 1156a1b8 pop ebp */
  EBP = (pop32());
  /* 1156a1b9 ret  */
  ESPCHK(0x1156a1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c0 @ 0x1156a1c0 (31 bytes, 11 insns) */
void f_1156a1c0(void) {
  FTRACE(0x1156a1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1156a1c3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a1ca jbe 0x1156a1d0 */
  if ((C.cf||C.zf)) goto L_1156a1d0;
  /* 1156a1cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156a1ce jmp 0x1156a1dd */
  goto L_1156a1dd;
L_1156a1d0:;
  /* 1156a1d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a1d3 mov dword ptr [0x1158fc94], eax */
  w32((uint32_t)(0x1158fc94), (EAX));
  /* 1156a1d8 mov eax, 1 */
  EAX = (0x1u);
L_1156a1dd:;
  /* 1156a1dd pop ebp */
  EBP = (pop32());
  /* 1156a1de ret  */
  ESPCHK(0x1156a1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1e0 @ 0x1156a1e0 (89 bytes, 20 insns) */
void f_1156a1e0(void) {
  FTRACE(0x1156a1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1156a1e3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1156a1e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156a1ea mov eax, dword ptr [0x1159392c] */
  EAX = (r32((uint32_t)(0x1159392c)));
  /* 1156a1ef push eax */
  push32((uint32_t)(EAX));
  /* 1156a1f0 call dword ptr [0x11594344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594344))), 0x1156a1f6u);
  /* 1156a1f6 mov dword ptr [0x11593928], eax */
  w32((uint32_t)(0x11593928), (EAX));
  /* 1156a1fb cmp dword ptr [0x11593928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11593928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a202 jne 0x1156a208 */
  if (!C.zf) goto L_1156a208;
  /* 1156a204 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156a206 jmp 0x1156a237 */
  goto L_1156a237;
L_1156a208:;
  /* 1156a208 mov ecx, dword ptr [0x11593928] */
  ECX = (r32((uint32_t)(0x11593928)));
  /* 1156a20e mov dword ptr [0x1159391c], ecx */
  w32((uint32_t)(0x1159391c), (ECX));
  /* 1156a214 mov dword ptr [0x11593920], 0 */
  w32((uint32_t)(0x11593920), (0x0u));
  /* 1156a21e mov dword ptr [0x11593924], 0 */
  w32((uint32_t)(0x11593924), (0x0u));
  /* 1156a228 mov dword ptr [0x11593908], 0x10 */
  w32((uint32_t)(0x11593908), (0x10u));
  /* 1156a232 mov eax, 1 */
  EAX = (0x1u);
L_1156a237:;
  /* 1156a237 pop ebp */
  EBP = (pop32());
  /* 1156a238 ret  */
  ESPCHK(0x1156a1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a240 @ 0x1156a240 (85 bytes, 29 insns) */
void f_1156a240(void) {
  FTRACE(0x1156a240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a240 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a241 mov ebp, esp */
  EBP = (ESP);
  /* 1156a243 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a246 mov eax, dword ptr [0x11593924] */
  EAX = (r32((uint32_t)(0x11593924)));
  /* 1156a24b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156a24e mov ecx, dword ptr [0x11593928] */
  ECX = (r32((uint32_t)(0x11593928)));
  /* 1156a254 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a256 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1156a259 mov edx, dword ptr [0x11593928] */
  EDX = (r32((uint32_t)(0x11593928)));
  /* 1156a25f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1156a262:;
  /* 1156a262 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a265 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a268 jae 0x1156a28f */
  if (!C.cf) goto L_1156a28f;
  /* 1156a26a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a26d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a270 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a273 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156a276 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a27d jae 0x1156a284 */
  if (!C.cf) goto L_1156a284;
  /* 1156a27f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a282 jmp 0x1156a291 */
  goto L_1156a291;
L_1156a284:;
  /* 1156a284 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a287 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a28a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156a28d jmp 0x1156a262 */
  goto L_1156a262;
L_1156a28f:;
  /* 1156a28f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1156a291:;
  /* 1156a291 mov esp, ebp */
  ESP = (EBP);
  /* 1156a293 pop ebp */
  EBP = (pop32());
  /* 1156a294 ret  */
  ESPCHK(0x1156a240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2a0 @ 0x1156a2a0 (95 bytes, 33 insns) */
void f_1156a2a0(void) {
  FTRACE(0x1156a2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1156a2a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a2a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156a2ac sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a2af mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1156a2b2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a2b5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1156a2b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156a2bb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156a2c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a2c3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156a2c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a2c8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156a2cb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156a2cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156a2cf jne 0x1156a2f1 */
  if (!C.zf) goto L_1156a2f1;
  /* 1156a2d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a2d4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1156a2d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156a2d9 jne 0x1156a2f1 */
  if (!C.zf) goto L_1156a2f1;
  /* 1156a2db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a2de and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156a2e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156a2e6 je 0x1156a2f1 */
  if (C.zf) goto L_1156a2f1;
  /* 1156a2e8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1156a2ef jmp 0x1156a2f8 */
  goto L_1156a2f8;
L_1156a2f1:;
  /* 1156a2f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1156a2f8:;
  /* 1156a2f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156a2fb mov esp, ebp */
  ESP = (EBP);
  /* 1156a2fd pop ebp */
  EBP = (pop32());
  /* 1156a2fe ret  */
  ESPCHK(0x1156a2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a300 @ 0x1156a300 (1485 bytes, 453 insns) */
void f_1156a300(void) {
  FTRACE(0x1156a300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a300 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a301 mov ebp, esp */
  EBP = (ESP);
  /* 1156a303 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a309 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156a30c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1156a30f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a312 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156a315 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a318 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1156a31b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156a31e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1156a321 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156a324 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a327 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156a32d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a330 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1156a337 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1156a33a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156a33d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a340 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1156a343 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a346 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156a348 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a34b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1156a34e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a351 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a354 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1156a357 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156a35a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156a35c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1156a35f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a362 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1156a365 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1156a368 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156a36b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1156a36e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156a370 jne 0x1156a498 */
  if (!C.zf) goto L_1156a498;
  /* 1156a376 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156a379 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1156a37c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a37f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1156a382 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a386 jbe 0x1156a38f */
  if ((C.cf||C.zf)) goto L_1156a38f;
  /* 1156a388 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1156a38f:;
  /* 1156a38f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156a392 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156a395 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156a398 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a39b jne 0x1156a471 */
  if (!C.zf) goto L_1156a471;
  /* 1156a3a1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a3a5 jae 0x1156a406 */
  if (!C.cf) goto L_1156a406;
  /* 1156a3a7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156a3ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156a3af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156a3b1 not eax */
  EAX = (~(EAX));
  /* 1156a3b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a3b6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a3b9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1156a3bd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a3bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a3c2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a3c5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1156a3c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a3cc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a3cf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1156a3d2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156a3d5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a3d8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a3db mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1156a3de mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a3e1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a3e4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156a3e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156a3ea jne 0x1156a404 */
  if (!C.zf) goto L_1156a404;
  /* 1156a3ec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156a3f1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156a3f4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156a3f6 not eax */
  EAX = (~(EAX));
  /* 1156a3f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a3fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156a3fd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156a3ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a402 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1156a404:;
  /* 1156a404 jmp 0x1156a471 */
  goto L_1156a471;
L_1156a406:;
  /* 1156a406 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156a409 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a40c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156a411 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156a413 not edx */
  EDX = (~(EDX));
  /* 1156a415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a418 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a41b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1156a422 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156a424 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a427 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a42a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1156a431 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a434 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a437 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1156a43a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156a43d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a440 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a443 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1156a446 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a449 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a44c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1156a450 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156a452 jne 0x1156a471 */
  if (!C.zf) goto L_1156a471;
  /* 1156a454 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156a457 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a45a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156a45f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156a461 not edx */
  EDX = (~(EDX));
  /* 1156a463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a466 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156a469 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a46b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a46e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1156a471:;
  /* 1156a471 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156a474 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156a477 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156a47a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156a47d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1156a480 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156a483 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156a486 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156a489 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156a48c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1156a48f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156a492 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a495 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1156a498:;
  /* 1156a498 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156a49b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1156a49e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a4a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1156a4a4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a4a8 jbe 0x1156a4b1 */
  if ((C.cf||C.zf)) goto L_1156a4b1;
  /* 1156a4aa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1156a4b1:;
  /* 1156a4b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156a4b4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1156a4b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156a4b9 jne 0x1156a615 */
  if (!C.zf) goto L_1156a615;
  /* 1156a4bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a4c2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a4c5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1156a4c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156a4cb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1156a4ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a4d1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1156a4d4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a4d8 jbe 0x1156a4e1 */
  if ((C.cf||C.zf)) goto L_1156a4e1;
  /* 1156a4da mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1156a4e1:;
  /* 1156a4e1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156a4e4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a4e7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1156a4ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156a4ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1156a4f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a4f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1156a4f6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a4fa jbe 0x1156a503 */
  if ((C.cf||C.zf)) goto L_1156a503;
  /* 1156a4fc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1156a503:;
  /* 1156a503 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156a506 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a509 je 0x1156a60f */
  if (C.zf) goto L_1156a60f;
  /* 1156a50f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156a512 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156a515 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156a518 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a51b jne 0x1156a5f1 */
  if (!C.zf) goto L_1156a5f1;
  /* 1156a521 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a525 jae 0x1156a586 */
  if (!C.cf) goto L_1156a586;
  /* 1156a527 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156a52c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156a52f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156a531 not edx */
  EDX = (~(EDX));
  /* 1156a533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a536 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a539 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1156a53d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156a53f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a542 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a545 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1156a549 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a54c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a54f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1156a552 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156a555 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a558 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a55b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1156a55e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a561 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a564 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1156a568 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156a56a jne 0x1156a584 */
  if (!C.zf) goto L_1156a584;
  /* 1156a56c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156a571 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156a574 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156a576 not edx */
  EDX = (~(EDX));
  /* 1156a578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a57b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156a57d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a57f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a582 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1156a584:;
  /* 1156a584 jmp 0x1156a5f1 */
  goto L_1156a5f1;
L_1156a586:;
  /* 1156a586 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156a589 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a58c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156a591 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156a593 not eax */
  EAX = (~(EAX));
  /* 1156a595 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a598 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a59b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1156a5a2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a5a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a5a7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a5aa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1156a5b1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a5b4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a5b7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1156a5ba sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156a5bd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a5c0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a5c3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1156a5c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a5c9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a5cc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156a5d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156a5d2 jne 0x1156a5f1 */
  if (!C.zf) goto L_1156a5f1;
  /* 1156a5d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156a5d7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a5da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156a5df shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156a5e1 not eax */
  EAX = (~(EAX));
  /* 1156a5e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a5e6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156a5e9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156a5eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a5ee mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1156a5f1:;
  /* 1156a5f1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156a5f4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156a5f7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156a5fa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156a5fd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1156a600 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156a603 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156a606 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156a609 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156a60c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1156a60f:;
  /* 1156a60f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156a612 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1156a615:;
  /* 1156a615 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156a618 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1156a61b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156a61d jne 0x1156a62b */
  if (!C.zf) goto L_1156a62b;
  /* 1156a61f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156a622 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a625 je 0x1156a73b */
  if (C.zf) goto L_1156a73b;
L_1156a62b:;
  /* 1156a62b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156a62e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a631 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1156a634 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1156a637 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a63a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156a63d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156a640 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1156a643 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a646 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156a649 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1156a64c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156a64f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a652 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1156a655 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a658 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156a65b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a65e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1156a661 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a664 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a667 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156a66a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a66d jne 0x1156a73b */
  if (!C.zf) goto L_1156a73b;
  /* 1156a673 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a677 jae 0x1156a6d4 */
  if (!C.cf) goto L_1156a6d4;
  /* 1156a679 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a67c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a67f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156a683 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a686 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a689 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1156a68c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156a68f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a692 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a695 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1156a698 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156a69a jne 0x1156a6b2 */
  if (!C.zf) goto L_1156a6b2;
  /* 1156a69c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156a6a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156a6a4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156a6a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a6a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156a6ab or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a6ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a6b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1156a6b2:;
  /* 1156a6b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156a6b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156a6ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156a6bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a6bf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a6c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1156a6c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a6c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a6cb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a6ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1156a6d2 jmp 0x1156a73b */
  goto L_1156a73b;
L_1156a6d4:;
  /* 1156a6d4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a6d7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a6da movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156a6de mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a6e1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a6e4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1156a6e7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156a6ea mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a6ed add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a6f0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1156a6f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156a6f5 jne 0x1156a712 */
  if (!C.zf) goto L_1156a712;
  /* 1156a6f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156a6fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a6fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156a702 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156a704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a707 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156a70a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a70f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1156a712:;
  /* 1156a712 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156a715 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a718 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156a71d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156a71f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a722 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a725 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1156a72c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a72e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a731 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1156a734 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1156a73b:;
  /* 1156a73b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a73e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156a741 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1156a743 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156a746 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a749 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156a74c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1156a74f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a752 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156a754 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a757 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a75a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1156a75c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156a75f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a762 jne 0x1156a8c9 */
  if (!C.zf) goto L_1156a8c9;
  /* 1156a768 cmp dword ptr [0x11593920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11593920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a76f je 0x1156a8b8 */
  if (C.zf) goto L_1156a8b8;
  /* 1156a775 mov eax, dword ptr [0x11593918] */
  EAX = (r32((uint32_t)(0x11593918)));
  /* 1156a77a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1156a77d mov ecx, dword ptr [0x11593920] */
  ECX = (r32((uint32_t)(0x11593920)));
  /* 1156a783 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156a786 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a788 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1156a78b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1156a790 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1156a795 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a798 push eax */
  push32((uint32_t)(EAX));
  /* 1156a799 call dword ptr [0x11594360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594360))), 0x1156a79fu);
  /* 1156a79f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156a7a4 mov ecx, dword ptr [0x11593918] */
  ECX = (r32((uint32_t)(0x11593918)));
  /* 1156a7aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156a7ac mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156a7b1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156a7b4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a7b6 mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156a7bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1156a7bf mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156a7c4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156a7c7 mov edx, dword ptr [0x11593918] */
  EDX = (r32((uint32_t)(0x11593918)));
  /* 1156a7cd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1156a7d8 mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156a7dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156a7e0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1156a7e3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156a7e6 mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156a7eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156a7ee mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1156a7f1 mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156a7f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1156a7fa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1156a7fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156a800 jne 0x1156a816 */
  if (!C.zf) goto L_1156a816;
  /* 1156a802 mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156a808 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156a80b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1156a80d mov ecx, dword ptr [0x11593920] */
  ECX = (r32((uint32_t)(0x11593920)));
  /* 1156a813 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1156a816:;
  /* 1156a816 mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156a81c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a820 jne 0x1156a8b8 */
  if (!C.zf) goto L_1156a8b8;
  /* 1156a826 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1156a82b push 0 */
  push32((uint32_t)(0x0u));
  /* 1156a82d mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156a832 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156a835 push ecx */
  push32((uint32_t)(ECX));
  /* 1156a836 call dword ptr [0x11594360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594360))), 0x1156a83cu);
  /* 1156a83c mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156a842 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1156a845 push eax */
  push32((uint32_t)(EAX));
  /* 1156a846 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156a848 mov ecx, dword ptr [0x1159392c] */
  ECX = (r32((uint32_t)(0x1159392c)));
  /* 1156a84e push ecx */
  push32((uint32_t)(ECX));
  /* 1156a84f call dword ptr [0x11594364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594364))), 0x1156a855u);
  /* 1156a855 mov edx, dword ptr [0x11593924] */
  EDX = (r32((uint32_t)(0x11593924)));
  /* 1156a85b imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156a85e mov eax, dword ptr [0x11593928] */
  EAX = (r32((uint32_t)(0x11593928)));
  /* 1156a863 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a865 mov ecx, dword ptr [0x11593920] */
  ECX = (r32((uint32_t)(0x11593920)));
  /* 1156a86b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a86e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a870 push eax */
  push32((uint32_t)(EAX));
  /* 1156a871 mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156a877 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a87a push edx */
  push32((uint32_t)(EDX));
  /* 1156a87b mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156a880 push eax */
  push32((uint32_t)(EAX));
  /* 1156a881 call 0x1156de30 */
  push32(0x1156a886u); f_1156de30();
  /* 1156a886 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a889 mov ecx, dword ptr [0x11593924] */
  ECX = (r32((uint32_t)(0x11593924)));
  /* 1156a88f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a892 mov dword ptr [0x11593924], ecx */
  w32((uint32_t)(0x11593924), (ECX));
  /* 1156a898 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a89b cmp edx, dword ptr [0x11593920] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11593920))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a8a1 jbe 0x1156a8ac */
  if ((C.cf||C.zf)) goto L_1156a8ac;
  /* 1156a8a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a8a6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a8a9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1156a8ac:;
  /* 1156a8ac mov ecx, dword ptr [0x11593928] */
  ECX = (r32((uint32_t)(0x11593928)));
  /* 1156a8b2 mov dword ptr [0x1159391c], ecx */
  w32((uint32_t)(0x1159391c), (ECX));
L_1156a8b8:;
  /* 1156a8b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a8bb mov dword ptr [0x11593920], edx */
  w32((uint32_t)(0x11593920), (EDX));
  /* 1156a8c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156a8c4 mov dword ptr [0x11593918], eax */
  w32((uint32_t)(0x11593918), (EAX));
L_1156a8c9:;
  /* 1156a8c9 mov esp, ebp */
  ESP = (EBP);
  /* 1156a8cb pop ebp */
  EBP = (pop32());
  /* 1156a8cc ret  */
  ESPCHK(0x1156a300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8d0 @ 0x1156a8d0 (1334 bytes, 427 insns) */
void f_1156a8d0(void) {
  FTRACE(0x1156a8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156a8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156a8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1156a8d3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a8d6 push esi */
  push32((uint32_t)(ESI));
  /* 1156a8d7 mov eax, dword ptr [0x11593924] */
  EAX = (r32((uint32_t)(0x11593924)));
  /* 1156a8dc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156a8df mov ecx, dword ptr [0x11593928] */
  ECX = (r32((uint32_t)(0x11593928)));
  /* 1156a8e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a8e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1156a8ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156a8ed add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a8f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1156a8f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1156a8f6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156a8f9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1156a8fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a8ff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1156a902 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a906 jge 0x1156a91c */
  if ((C.sf==C.of)) goto L_1156a91c;
  /* 1156a908 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1156a90b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156a90e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156a910 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1156a913 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1156a91a jmp 0x1156a931 */
  goto L_1156a931;
L_1156a91c:;
  /* 1156a91c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1156a923 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156a926 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156a929 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156a92c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156a92e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1156a931:;
  /* 1156a931 mov ecx, dword ptr [0x1159391c] */
  ECX = (r32((uint32_t)(0x1159391c)));
  /* 1156a937 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1156a93a:;
  /* 1156a93a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a93d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a940 jae 0x1156a966 */
  if (!C.cf) goto L_1156a966;
  /* 1156a942 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a945 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156a948 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1156a94a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a94d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156a950 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1156a953 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156a955 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156a957 je 0x1156a95b */
  if (C.zf) goto L_1156a95b;
  /* 1156a959 jmp 0x1156a966 */
  goto L_1156a966;
L_1156a95b:;
  /* 1156a95b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a95e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a961 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1156a964 jmp 0x1156a93a */
  goto L_1156a93a;
L_1156a966:;
  /* 1156a966 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a969 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a96c jne 0x1156aa4d */
  if (!C.zf) goto L_1156aa4d;
  /* 1156a972 mov eax, dword ptr [0x11593928] */
  EAX = (r32((uint32_t)(0x11593928)));
  /* 1156a977 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1156a97a:;
  /* 1156a97a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a97d cmp ecx, dword ptr [0x1159391c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1159391c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a983 jae 0x1156a9a9 */
  if (!C.cf) goto L_1156a9a9;
  /* 1156a985 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a988 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156a98b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1156a98d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a990 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156a993 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1156a996 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156a998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156a99a je 0x1156a99e */
  if (C.zf) goto L_1156a99e;
  /* 1156a99c jmp 0x1156a9a9 */
  goto L_1156a9a9;
L_1156a99e:;
  /* 1156a99e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a9a1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a9a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156a9a7 jmp 0x1156a97a */
  goto L_1156a97a;
L_1156a9a9:;
  /* 1156a9a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a9ac cmp ecx, dword ptr [0x1159391c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1159391c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a9b2 jne 0x1156aa4d */
  if (!C.zf) goto L_1156aa4d;
L_1156a9b8:;
  /* 1156a9b8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a9bb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a9be jae 0x1156a9d6 */
  if (!C.cf) goto L_1156a9d6;
  /* 1156a9c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a9c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a9c7 je 0x1156a9cb */
  if (C.zf) goto L_1156a9cb;
  /* 1156a9c9 jmp 0x1156a9d6 */
  goto L_1156a9d6;
L_1156a9cb:;
  /* 1156a9cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a9ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156a9d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1156a9d4 jmp 0x1156a9b8 */
  goto L_1156a9b8;
L_1156a9d6:;
  /* 1156a9d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a9d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a9dc jne 0x1156aa27 */
  if (!C.zf) goto L_1156aa27;
  /* 1156a9de mov eax, dword ptr [0x11593928] */
  EAX = (r32((uint32_t)(0x11593928)));
  /* 1156a9e3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1156a9e6:;
  /* 1156a9e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a9e9 cmp ecx, dword ptr [0x1159391c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1159391c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a9ef jae 0x1156aa07 */
  if (!C.cf) goto L_1156aa07;
  /* 1156a9f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a9f4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156a9f8 je 0x1156a9fc */
  if (C.zf) goto L_1156a9fc;
  /* 1156a9fa jmp 0x1156aa07 */
  goto L_1156aa07;
L_1156a9fc:;
  /* 1156a9fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156a9ff add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156aa02 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156aa05 jmp 0x1156a9e6 */
  goto L_1156a9e6;
L_1156aa07:;
  /* 1156aa07 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156aa0a cmp ecx, dword ptr [0x1159391c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1159391c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156aa10 jne 0x1156aa27 */
  if (!C.zf) goto L_1156aa27;
  /* 1156aa12 call 0x1156ae10 */
  push32(0x1156aa17u); f_1156ae10();
  /* 1156aa17 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156aa1a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156aa1e jne 0x1156aa27 */
  if (!C.zf) goto L_1156aa27;
  /* 1156aa20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156aa22 jmp 0x1156ae01 */
  goto L_1156ae01;
L_1156aa27:;
  /* 1156aa27 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156aa2a push edx */
  push32((uint32_t)(EDX));
  /* 1156aa2b call 0x1156af20 */
  push32(0x1156aa30u); f_1156af20();
  /* 1156aa30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156aa33 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156aa36 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1156aa39 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1156aa3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156aa3e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156aa41 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156aa44 jne 0x1156aa4d */
  if (!C.zf) goto L_1156aa4d;
  /* 1156aa46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156aa48 jmp 0x1156ae01 */
  goto L_1156ae01;
L_1156aa4d:;
  /* 1156aa4d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156aa50 mov dword ptr [0x1159391c], edx */
  w32((uint32_t)(0x1159391c), (EDX));
  /* 1156aa56 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156aa59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156aa5c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1156aa5f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156aa62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156aa64 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1156aa67 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156aa6b je 0x1156aa90 */
  if (C.zf) goto L_1156aa90;
  /* 1156aa6d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156aa70 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156aa73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156aa76 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1156aa7a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156aa7d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156aa80 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1156aa83 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1156aa8a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1156aa8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156aa8e jne 0x1156aac5 */
  if (!C.zf) goto L_1156aac5;
L_1156aa90:;
  /* 1156aa90 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1156aa97:;
  /* 1156aa97 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156aa9a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156aa9d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156aaa0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1156aaa4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156aaa7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156aaaa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1156aaad and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1156aab4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1156aab6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156aab8 jne 0x1156aac5 */
  if (!C.zf) goto L_1156aac5;
  /* 1156aaba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156aabd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156aac0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1156aac3 jmp 0x1156aa97 */
  goto L_1156aa97;
L_1156aac5:;
  /* 1156aac5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156aac8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156aace mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156aad1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1156aad8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156aadb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1156aae2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156aae5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156aae8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156aaeb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1156aaef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1156aaf2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156aaf6 jne 0x1156ab12 */
  if (!C.zf) goto L_1156ab12;
  /* 1156aaf8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1156aaff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156ab02 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ab05 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156ab08 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1156ab0f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1156ab12:;
  /* 1156ab12 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ab16 jl 0x1156ab2b */
  if ((C.sf!=C.of)) goto L_1156ab2b;
  /* 1156ab18 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156ab1b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1156ab1d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1156ab20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156ab23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ab26 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1156ab29 jmp 0x1156ab12 */
  goto L_1156ab12;
L_1156ab2b:;
  /* 1156ab2b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156ab2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ab31 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1156ab35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1156ab38 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ab3b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156ab3d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ab40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156ab43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ab46 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1156ab49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ab4c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1156ab4f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ab53 jle 0x1156ab5c */
  if ((C.zf||C.sf!=C.of)) goto L_1156ab5c;
  /* 1156ab55 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1156ab5c:;
  /* 1156ab5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156ab5f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ab62 je 0x1156ad80 */
  if (C.zf) goto L_1156ad80;
  /* 1156ab68 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ab6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ab6e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156ab71 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ab74 jne 0x1156ac4a */
  if (!C.zf) goto L_1156ac4a;
  /* 1156ab7a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ab7e jge 0x1156abdf */
  if ((C.sf==C.of)) goto L_1156abdf;
  /* 1156ab80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156ab85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156ab88 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156ab8a not eax */
  EAX = (~(EAX));
  /* 1156ab8c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156ab8f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ab92 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1156ab96 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156ab98 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156ab9b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ab9e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1156aba2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156aba5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156aba8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1156abab sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156abae mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156abb1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156abb4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1156abb7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156abba add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156abbd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156abc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156abc3 jne 0x1156abdd */
  if (!C.zf) goto L_1156abdd;
  /* 1156abc5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156abca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156abcd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156abcf not eax */
  EAX = (~(EAX));
  /* 1156abd1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156abd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156abd6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156abd8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156abdb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1156abdd:;
  /* 1156abdd jmp 0x1156ac4a */
  goto L_1156ac4a;
L_1156abdf:;
  /* 1156abdf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156abe2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156abe5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156abea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156abec not edx */
  EDX = (~(EDX));
  /* 1156abee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156abf1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156abf4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1156abfb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156abfd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156ac00 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ac03 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1156ac0a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ac0d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ac10 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1156ac13 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156ac16 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ac19 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ac1c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1156ac1f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ac22 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ac25 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1156ac29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156ac2b jne 0x1156ac4a */
  if (!C.zf) goto L_1156ac4a;
  /* 1156ac2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156ac30 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ac33 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156ac38 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156ac3a not edx */
  EDX = (~(EDX));
  /* 1156ac3c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156ac3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156ac42 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156ac44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156ac47 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1156ac4a:;
  /* 1156ac4a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ac4d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156ac50 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ac53 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156ac56 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1156ac59 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ac5c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156ac5f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ac62 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156ac65 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1156ac68 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ac6c je 0x1156ad80 */
  if (C.zf) goto L_1156ad80;
  /* 1156ac72 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156ac75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ac78 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1156ac7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1156ac7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ac81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156ac84 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156ac87 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1156ac8a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ac8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156ac90 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1156ac93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156ac96 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ac99 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1156ac9c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ac9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156aca2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156aca5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1156aca8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156acab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156acae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156acb1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156acb4 jne 0x1156ad80 */
  if (!C.zf) goto L_1156ad80;
  /* 1156acba cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156acbe jge 0x1156ad1a */
  if ((C.sf==C.of)) goto L_1156ad1a;
  /* 1156acc0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156acc3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156acc6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1156acca mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156accd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156acd0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1156acd3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156acd5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156acd8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156acdb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1156acde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156ace0 jne 0x1156acf8 */
  if (!C.zf) goto L_1156acf8;
  /* 1156ace2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156ace7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156acea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156acec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156acef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156acf1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156acf3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156acf6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1156acf8:;
  /* 1156acf8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156acfd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156ad00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156ad02 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156ad05 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ad08 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1156ad0c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156ad0e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156ad11 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ad14 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1156ad18 jmp 0x1156ad80 */
  goto L_1156ad80;
L_1156ad1a:;
  /* 1156ad1a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ad1d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ad20 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1156ad24 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ad27 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ad2a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1156ad2d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156ad2f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ad32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ad35 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1156ad38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156ad3a jne 0x1156ad57 */
  if (!C.zf) goto L_1156ad57;
  /* 1156ad3c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156ad3f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ad42 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156ad47 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156ad49 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156ad4c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156ad4f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156ad51 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156ad54 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1156ad57:;
  /* 1156ad57 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156ad5a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ad5d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156ad62 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156ad64 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156ad67 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ad6a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1156ad71 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156ad73 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156ad76 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156ad79 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1156ad80:;
  /* 1156ad80 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ad84 je 0x1156ad9a */
  if (C.zf) goto L_1156ad9a;
  /* 1156ad86 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ad89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ad8c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1156ad8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ad91 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ad94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ad97 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1156ad9a:;
  /* 1156ad9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ad9d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ada0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1156ada3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156ada6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ada9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156adac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1156adae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156adb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156adb4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156adb7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156adba mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1156adbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156adc0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156adc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156adc5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156adc7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156adca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156adcd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1156adcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156add1 jne 0x1156adf3 */
  if (!C.zf) goto L_1156adf3;
  /* 1156add3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156add6 cmp eax, dword ptr [0x11593920] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593920))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156addc jne 0x1156adf3 */
  if (!C.zf) goto L_1156adf3;
  /* 1156adde mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156ade1 cmp ecx, dword ptr [0x11593918] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11593918))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ade7 jne 0x1156adf3 */
  if (!C.zf) goto L_1156adf3;
  /* 1156ade9 mov dword ptr [0x11593920], 0 */
  w32((uint32_t)(0x11593920), (0x0u));
L_1156adf3:;
  /* 1156adf3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1156adf6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156adf9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1156adfb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156adfe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1156ae01:;
  /* 1156ae01 pop esi */
  ESI = (pop32());
  /* 1156ae02 mov esp, ebp */
  ESP = (EBP);
  /* 1156ae04 pop ebp */
  EBP = (pop32());
  /* 1156ae05 ret  */
  ESPCHK(0x1156a8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae10 @ 0x1156ae10 (271 bytes, 78 insns) */
void f_1156ae10(void) {
  FTRACE(0x1156ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ae10 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ae11 mov ebp, esp */
  EBP = (ESP);
  /* 1156ae13 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ae14 mov eax, dword ptr [0x11593924] */
  EAX = (r32((uint32_t)(0x11593924)));
  /* 1156ae19 cmp eax, dword ptr [0x11593908] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593908))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ae1f jne 0x1156ae6b */
  if (!C.zf) goto L_1156ae6b;
  /* 1156ae21 mov ecx, dword ptr [0x11593908] */
  ECX = (r32((uint32_t)(0x11593908)));
  /* 1156ae27 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ae2a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ae2d push ecx */
  push32((uint32_t)(ECX));
  /* 1156ae2e mov edx, dword ptr [0x11593928] */
  EDX = (r32((uint32_t)(0x11593928)));
  /* 1156ae34 push edx */
  push32((uint32_t)(EDX));
  /* 1156ae35 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156ae37 mov eax, dword ptr [0x1159392c] */
  EAX = (r32((uint32_t)(0x1159392c)));
  /* 1156ae3c push eax */
  push32((uint32_t)(EAX));
  /* 1156ae3d call dword ptr [0x11594340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594340))), 0x1156ae43u);
  /* 1156ae43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156ae46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ae4a jne 0x1156ae53 */
  if (!C.zf) goto L_1156ae53;
  /* 1156ae4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156ae4e jmp 0x1156af1b */
  goto L_1156af1b;
L_1156ae53:;
  /* 1156ae53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ae56 mov dword ptr [0x11593928], ecx */
  w32((uint32_t)(0x11593928), (ECX));
  /* 1156ae5c mov edx, dword ptr [0x11593908] */
  EDX = (r32((uint32_t)(0x11593908)));
  /* 1156ae62 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ae65 mov dword ptr [0x11593908], edx */
  w32((uint32_t)(0x11593908), (EDX));
L_1156ae6b:;
  /* 1156ae6b mov eax, dword ptr [0x11593924] */
  EAX = (r32((uint32_t)(0x11593924)));
  /* 1156ae70 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ae73 mov ecx, dword ptr [0x11593928] */
  ECX = (r32((uint32_t)(0x11593928)));
  /* 1156ae79 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ae7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156ae7e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1156ae83 push 8 */
  push32((uint32_t)(0x8u));
  /* 1156ae85 mov edx, dword ptr [0x1159392c] */
  EDX = (r32((uint32_t)(0x1159392c)));
  /* 1156ae8b push edx */
  push32((uint32_t)(EDX));
  /* 1156ae8c call dword ptr [0x11594344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594344))), 0x1156ae92u);
  /* 1156ae92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ae95 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1156ae98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ae9b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ae9f jne 0x1156aea5 */
  if (!C.zf) goto L_1156aea5;
  /* 1156aea1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156aea3 jmp 0x1156af1b */
  goto L_1156af1b;
L_1156aea5:;
  /* 1156aea5 push 4 */
  push32((uint32_t)(0x4u));
  /* 1156aea7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1156aeac push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1156aeb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156aeb3 call dword ptr [0x1159433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159433c))), 0x1156aeb9u);
  /* 1156aeb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156aebc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1156aebf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156aec2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156aec6 jne 0x1156aee2 */
  if (!C.zf) goto L_1156aee2;
  /* 1156aec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156aecb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156aece push ecx */
  push32((uint32_t)(ECX));
  /* 1156aecf push 0 */
  push32((uint32_t)(0x0u));
  /* 1156aed1 mov edx, dword ptr [0x1159392c] */
  EDX = (r32((uint32_t)(0x1159392c)));
  /* 1156aed7 push edx */
  push32((uint32_t)(EDX));
  /* 1156aed8 call dword ptr [0x11594364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594364))), 0x1156aedeu);
  /* 1156aede xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156aee0 jmp 0x1156af1b */
  goto L_1156af1b;
L_1156aee2:;
  /* 1156aee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156aee5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1156aeeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156aeee mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1156aef5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156aef8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1156aeff mov eax, dword ptr [0x11593924] */
  EAX = (r32((uint32_t)(0x11593924)));
  /* 1156af04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156af07 mov dword ptr [0x11593924], eax */
  w32((uint32_t)(0x11593924), (EAX));
  /* 1156af0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156af0f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1156af12 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1156af18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1156af1b:;
  /* 1156af1b mov esp, ebp */
  ESP = (EBP);
  /* 1156af1d pop ebp */
  EBP = (pop32());
  /* 1156af1e ret  */
  ESPCHK(0x1156ae10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af20 @ 0x1156af20 (494 bytes, 149 insns) */
void f_1156af20(void) {
  FTRACE(0x1156af20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156af20 push ebp */
  push32((uint32_t)(EBP));
  /* 1156af21 mov ebp, esp */
  EBP = (ESP);
  /* 1156af23 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156af26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156af29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156af2c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1156af2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156af32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1156af35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156af38 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1156af3f:;
  /* 1156af3f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156af43 jl 0x1156af58 */
  if ((C.sf!=C.of)) goto L_1156af58;
  /* 1156af45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156af48 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1156af4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1156af4d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156af50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156af53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1156af56 jmp 0x1156af3f */
  goto L_1156af3f;
L_1156af58:;
  /* 1156af58 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156af5b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156af61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156af64 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1156af6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1156af6e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1156af75 jmp 0x1156af80 */
  goto L_1156af80;
L_1156af77:;
  /* 1156af77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156af7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156af7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1156af80:;
  /* 1156af80 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156af84 jge 0x1156afa6 */
  if ((C.sf==C.of)) goto L_1156afa6;
  /* 1156af86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156af89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156af8c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1156af8f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156af92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156af95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156af98 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1156af9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156af9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156afa1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1156afa4 jmp 0x1156af77 */
  goto L_1156af77;
L_1156afa6:;
  /* 1156afa6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156afa9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1156afac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156afaf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156afb2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156afb4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1156afb7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1156afb9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1156afbe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1156afc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156afc6 push edx */
  push32((uint32_t)(EDX));
  /* 1156afc7 call dword ptr [0x1159433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159433c))), 0x1156afcdu);
  /* 1156afcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156afcf jne 0x1156afd9 */
  if (!C.zf) goto L_1156afd9;
  /* 1156afd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156afd4 jmp 0x1156b10a */
  goto L_1156b10a;
L_1156afd9:;
  /* 1156afd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156afdc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156afe1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1156afe4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156afe7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156afea jmp 0x1156aff8 */
  goto L_1156aff8;
L_1156afec:;
  /* 1156afec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156afef add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156aff5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1156aff8:;
  /* 1156aff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156affb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156affe ja 0x1156b05d */
  if ((!C.cf&&!C.zf)) goto L_1156b05d;
  /* 1156b000 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b003 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1156b00a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b00d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1156b017 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b01a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b01d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156b020 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b023 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1156b029 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b02c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b032 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b035 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1156b038 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b03b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b041 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b044 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1156b047 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b04a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b04f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1156b052 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156b055 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1156b05b jmp 0x1156afec */
  goto L_1156afec;
L_1156b05d:;
  /* 1156b05d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156b060 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b066 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1156b069 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156b06c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b06f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b072 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1156b075 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b078 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156b07b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156b07e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b081 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b084 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1156b087 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156b08a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b08d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b090 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1156b093 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b096 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1156b099 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156b09c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b09f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b0a2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1156b0a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b0a8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b0ab mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1156b0b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b0b6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b0b9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1156b0c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b0c7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1156b0cb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b0ce mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1156b0d1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156b0d4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b0d7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1156b0da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156b0dc jne 0x1156b0ed */
  if (!C.zf) goto L_1156b0ed;
  /* 1156b0de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b0e1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156b0e4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1156b0e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b0ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1156b0ed:;
  /* 1156b0ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b0f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b0f5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b0f7 not edx */
  EDX = (~(EDX));
  /* 1156b0f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b0fc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156b0ff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b104 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1156b107 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1156b10a:;
  /* 1156b10a mov esp, ebp */
  ESP = (EBP);
  /* 1156b10c pop ebp */
  EBP = (pop32());
  /* 1156b10d ret  */
  ESPCHK(0x1156af20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b110 @ 0x1156b110 (1515 bytes, 489 insns) */
void f_1156b110(void) {
  FTRACE(0x1156b110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156b110 push ebp */
  push32((uint32_t)(EBP));
  /* 1156b111 mov ebp, esp */
  EBP = (ESP);
  /* 1156b113 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b116 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156b119 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b11c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1156b11e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1156b121 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b124 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1156b127 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1156b12a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b12d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156b130 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b133 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1156b136 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156b139 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1156b13c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156b13f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b142 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156b148 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b14b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1156b152 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1156b155 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156b158 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b15b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1156b15e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b161 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156b163 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b166 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1156b169 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b16c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b16f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1156b172 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b175 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156b177 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1156b17a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156b17d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b180 jle 0x1156b436 */
  if ((C.zf||C.sf!=C.of)) goto L_1156b436;
  /* 1156b186 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156b189 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1156b18c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156b18e jne 0x1156b19b */
  if (!C.zf) goto L_1156b19b;
  /* 1156b190 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b193 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b196 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b199 jle 0x1156b1a2 */
  if ((C.zf||C.sf!=C.of)) goto L_1156b1a2;
L_1156b19b:;
  /* 1156b19b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156b19d jmp 0x1156b6f7 */
  goto L_1156b6f7;
L_1156b1a2:;
  /* 1156b1a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156b1a5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1156b1a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b1ab mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1156b1ae cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b1b2 jbe 0x1156b1bb */
  if ((C.cf||C.zf)) goto L_1156b1bb;
  /* 1156b1b4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1156b1bb:;
  /* 1156b1bb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b1be mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b1c1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156b1c4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b1c7 jne 0x1156b29d */
  if (!C.zf) goto L_1156b29d;
  /* 1156b1cd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b1d1 jae 0x1156b232 */
  if (!C.cf) goto L_1156b232;
  /* 1156b1d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b1d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b1db shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b1dd not edx */
  EDX = (~(EDX));
  /* 1156b1df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b1e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b1e5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1156b1e9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156b1eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b1ee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b1f1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1156b1f5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b1f8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b1fb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1156b1fe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156b201 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b204 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b207 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1156b20a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b20d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b210 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1156b214 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156b216 jne 0x1156b230 */
  if (!C.zf) goto L_1156b230;
  /* 1156b218 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b21d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b220 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b222 not edx */
  EDX = (~(EDX));
  /* 1156b224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b227 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156b229 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b22b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b22e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1156b230:;
  /* 1156b230 jmp 0x1156b29d */
  goto L_1156b29d;
L_1156b232:;
  /* 1156b232 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b235 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b238 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156b23d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156b23f not eax */
  EAX = (~(EAX));
  /* 1156b241 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b244 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b247 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1156b24e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b250 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b253 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b256 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1156b25d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b260 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b263 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1156b266 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156b269 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b26c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b26f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1156b272 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b275 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b278 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156b27c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156b27e jne 0x1156b29d */
  if (!C.zf) goto L_1156b29d;
  /* 1156b280 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b283 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b286 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156b28b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156b28d not eax */
  EAX = (~(EAX));
  /* 1156b28f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b292 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156b295 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156b297 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b29a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1156b29d:;
  /* 1156b29d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b2a0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156b2a3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b2a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156b2a9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1156b2ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b2af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156b2b2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b2b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156b2b8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1156b2bb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b2be add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b2c1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b2c4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1156b2c7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b2cb jle 0x1156b417 */
  if ((C.zf||C.sf!=C.of)) goto L_1156b417;
  /* 1156b2d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b2d4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b2d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1156b2da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156b2dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1156b2e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b2e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1156b2e6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b2ea jbe 0x1156b2f3 */
  if ((C.cf||C.zf)) goto L_1156b2f3;
  /* 1156b2ec mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1156b2f3:;
  /* 1156b2f3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b2f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156b2f9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1156b2fc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1156b2ff mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b302 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b305 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156b308 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1156b30b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b30e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b311 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1156b314 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b317 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b31a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1156b31d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b320 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156b323 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b326 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1156b329 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b32c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b32f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156b332 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b335 jne 0x1156b403 */
  if (!C.zf) goto L_1156b403;
  /* 1156b33b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b33f jae 0x1156b39c */
  if (!C.cf) goto L_1156b39c;
  /* 1156b341 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b344 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b347 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156b34b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b34e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b351 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1156b354 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156b357 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b35a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b35d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1156b360 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156b362 jne 0x1156b37a */
  if (!C.zf) goto L_1156b37a;
  /* 1156b364 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b369 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b36c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b36e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b371 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156b373 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b378 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1156b37a:;
  /* 1156b37a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156b37f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b382 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156b384 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b387 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b38a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1156b38e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b390 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b393 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b396 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1156b39a jmp 0x1156b403 */
  goto L_1156b403;
L_1156b39c:;
  /* 1156b39c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b39f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b3a2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156b3a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b3a9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b3ac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1156b3af add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156b3b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b3b5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b3b8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1156b3bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156b3bd jne 0x1156b3da */
  if (!C.zf) goto L_1156b3da;
  /* 1156b3bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b3c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b3c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b3ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b3cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b3cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156b3d2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b3d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b3d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1156b3da:;
  /* 1156b3da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b3dd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b3e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156b3e5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156b3e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b3ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b3ed mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1156b3f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b3f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b3f9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b3fc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1156b403:;
  /* 1156b403 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b406 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156b409 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1156b40b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b40e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b411 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156b414 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1156b417:;
  /* 1156b417 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156b41a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b41d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b420 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1156b422 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156b425 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b428 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b42b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b42e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1156b431 jmp 0x1156b6f2 */
  goto L_1156b6f2;
L_1156b436:;
  /* 1156b436 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156b439 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b43c jge 0x1156b6f2 */
  if ((C.sf==C.of)) goto L_1156b6f2;
  /* 1156b442 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156b445 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b448 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b44b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1156b44d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156b450 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b453 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b456 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b459 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1156b45c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b45f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b462 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1156b465 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b468 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b46b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1156b46e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b471 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1156b474 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b477 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1156b47a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b47e jbe 0x1156b487 */
  if ((C.cf||C.zf)) goto L_1156b487;
  /* 1156b480 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1156b487:;
  /* 1156b487 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156b48a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1156b48d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156b48f jne 0x1156b5d0 */
  if (!C.zf) goto L_1156b5d0;
  /* 1156b495 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156b498 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1156b49b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b49e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1156b4a1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b4a5 jbe 0x1156b4ae */
  if ((C.cf||C.zf)) goto L_1156b4ae;
  /* 1156b4a7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1156b4ae:;
  /* 1156b4ae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b4b1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b4b4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156b4b7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b4ba jne 0x1156b590 */
  if (!C.zf) goto L_1156b590;
  /* 1156b4c0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b4c4 jae 0x1156b525 */
  if (!C.cf) goto L_1156b525;
  /* 1156b4c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b4cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b4ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b4d0 not edx */
  EDX = (~(EDX));
  /* 1156b4d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b4d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b4d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1156b4dc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156b4de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b4e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b4e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1156b4e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b4eb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b4ee mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1156b4f1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156b4f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b4f7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b4fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1156b4fd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b500 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b503 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1156b507 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156b509 jne 0x1156b523 */
  if (!C.zf) goto L_1156b523;
  /* 1156b50b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b510 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b513 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b515 not edx */
  EDX = (~(EDX));
  /* 1156b517 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b51a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156b51c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b51e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b521 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1156b523:;
  /* 1156b523 jmp 0x1156b590 */
  goto L_1156b590;
L_1156b525:;
  /* 1156b525 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b528 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b52b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156b530 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156b532 not eax */
  EAX = (~(EAX));
  /* 1156b534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b537 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b53a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1156b541 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b543 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b546 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b549 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1156b550 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b553 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b556 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1156b559 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156b55c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b55f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b562 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1156b565 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b568 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b56b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1156b56f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156b571 jne 0x1156b590 */
  if (!C.zf) goto L_1156b590;
  /* 1156b573 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156b576 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b579 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156b57e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156b580 not eax */
  EAX = (~(EAX));
  /* 1156b582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b585 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156b588 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156b58a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b58d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1156b590:;
  /* 1156b590 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b593 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156b596 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b599 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156b59c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1156b59f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b5a2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156b5a5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156b5a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156b5ab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1156b5ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b5b1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b5b4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1156b5b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b5ba sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1156b5bd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b5c0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1156b5c3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b5c7 jbe 0x1156b5d0 */
  if ((C.cf||C.zf)) goto L_1156b5d0;
  /* 1156b5c9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1156b5d0:;
  /* 1156b5d0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156b5d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156b5d6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1156b5d9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1156b5dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b5df mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b5e2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156b5e5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1156b5e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b5eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b5ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1156b5f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156b5f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b5f7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1156b5fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b5fd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156b600 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b603 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1156b606 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b609 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b60c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156b60f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b612 jne 0x1156b6de */
  if (!C.zf) goto L_1156b6de;
  /* 1156b618 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b61c jae 0x1156b678 */
  if (!C.cf) goto L_1156b678;
  /* 1156b61e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b621 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b624 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1156b628 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b62b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b62e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1156b631 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156b633 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b636 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b639 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1156b63c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156b63e jne 0x1156b656 */
  if (!C.zf) goto L_1156b656;
  /* 1156b640 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156b645 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156b648 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156b64a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b64d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156b64f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156b651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b654 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1156b656:;
  /* 1156b656 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b65b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156b65e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b660 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b663 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b666 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1156b66a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156b66c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b66f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b672 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1156b676 jmp 0x1156b6de */
  goto L_1156b6de;
L_1156b678:;
  /* 1156b678 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b67b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b67e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1156b682 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b685 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b688 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1156b68b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156b68d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b690 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b693 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1156b696 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156b698 jne 0x1156b6b5 */
  if (!C.zf) goto L_1156b6b5;
  /* 1156b69a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156b69d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b6a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1156b6a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1156b6a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b6aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156b6ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1156b6af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156b6b2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1156b6b5:;
  /* 1156b6b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156b6b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b6bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b6c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b6c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b6c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b6c8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1156b6cf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156b6d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b6d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156b6d7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1156b6de:;
  /* 1156b6de mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b6e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b6e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1156b6e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156b6e9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b6ec mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156b6ef mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1156b6f2:;
  /* 1156b6f2 mov eax, 1 */
  EAX = (0x1u);
L_1156b6f7:;
  /* 1156b6f7 mov esp, ebp */
  ESP = (EBP);
  /* 1156b6f9 pop ebp */
  EBP = (pop32());
  /* 1156b6fa ret  */
  ESPCHK(0x1156b110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b700 @ 0x1156b700 (304 bytes, 79 insns) */
void f_1156b700(void) {
  FTRACE(0x1156b700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156b700 push ebp */
  push32((uint32_t)(EBP));
  /* 1156b701 mov ebp, esp */
  EBP = (ESP);
  /* 1156b703 push ecx */
  push32((uint32_t)(ECX));
  /* 1156b704 cmp dword ptr [0x11593920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11593920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b70b je 0x1156b82c */
  if (C.zf) goto L_1156b82c;
  /* 1156b711 mov eax, dword ptr [0x11593918] */
  EAX = (r32((uint32_t)(0x11593918)));
  /* 1156b716 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1156b719 mov ecx, dword ptr [0x11593920] */
  ECX = (r32((uint32_t)(0x11593920)));
  /* 1156b71f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156b722 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b724 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156b727 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1156b72c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1156b731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156b734 push eax */
  push32((uint32_t)(EAX));
  /* 1156b735 call dword ptr [0x11594360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594360))), 0x1156b73bu);
  /* 1156b73b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156b740 mov ecx, dword ptr [0x11593918] */
  ECX = (r32((uint32_t)(0x11593918)));
  /* 1156b746 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156b748 mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156b74d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1156b750 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1156b752 mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156b758 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1156b75b mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156b760 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156b763 mov edx, dword ptr [0x11593918] */
  EDX = (r32((uint32_t)(0x11593918)));
  /* 1156b769 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1156b774 mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156b779 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156b77c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1156b77f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1156b782 mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156b787 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156b78a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1156b78d mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156b793 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1156b796 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1156b79a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156b79c jne 0x1156b7b2 */
  if (!C.zf) goto L_1156b7b2;
  /* 1156b79e mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156b7a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156b7a7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1156b7a9 mov ecx, dword ptr [0x11593920] */
  ECX = (r32((uint32_t)(0x11593920)));
  /* 1156b7af mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1156b7b2:;
  /* 1156b7b2 mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156b7b8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b7bc jne 0x1156b822 */
  if (!C.zf) goto L_1156b822;
  /* 1156b7be cmp dword ptr [0x11593924], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11593924))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b7c5 jle 0x1156b822 */
  if ((C.zf||C.sf!=C.of)) goto L_1156b822;
  /* 1156b7c7 mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156b7cc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1156b7cf push ecx */
  push32((uint32_t)(ECX));
  /* 1156b7d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156b7d2 mov edx, dword ptr [0x1159392c] */
  EDX = (r32((uint32_t)(0x1159392c)));
  /* 1156b7d8 push edx */
  push32((uint32_t)(EDX));
  /* 1156b7d9 call dword ptr [0x11594364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594364))), 0x1156b7dfu);
  /* 1156b7df mov eax, dword ptr [0x11593924] */
  EAX = (r32((uint32_t)(0x11593924)));
  /* 1156b7e4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156b7e7 mov ecx, dword ptr [0x11593928] */
  ECX = (r32((uint32_t)(0x11593928)));
  /* 1156b7ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b7ef mov edx, dword ptr [0x11593920] */
  EDX = (r32((uint32_t)(0x11593920)));
  /* 1156b7f5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b7f8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b7fa push ecx */
  push32((uint32_t)(ECX));
  /* 1156b7fb mov eax, dword ptr [0x11593920] */
  EAX = (r32((uint32_t)(0x11593920)));
  /* 1156b800 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b803 push eax */
  push32((uint32_t)(EAX));
  /* 1156b804 mov ecx, dword ptr [0x11593920] */
  ECX = (r32((uint32_t)(0x11593920)));
  /* 1156b80a push ecx */
  push32((uint32_t)(ECX));
  /* 1156b80b call 0x1156de30 */
  push32(0x1156b810u); f_1156de30();
  /* 1156b810 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b813 mov edx, dword ptr [0x11593924] */
  EDX = (r32((uint32_t)(0x11593924)));
  /* 1156b819 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b81c mov dword ptr [0x11593924], edx */
  w32((uint32_t)(0x11593924), (EDX));
L_1156b822:;
  /* 1156b822 mov dword ptr [0x11593920], 0 */
  w32((uint32_t)(0x11593920), (0x0u));
L_1156b82c:;
  /* 1156b82c mov esp, ebp */
  ESP = (EBP);
  /* 1156b82e pop ebp */
  EBP = (pop32());
  /* 1156b82f ret  */
  ESPCHK(0x1156b700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b830 @ 0x1156b830 (1565 bytes, 343 insns) */
void f_1156b830(void) {
  FTRACE(0x1156b830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156b830 push ebp */
  push32((uint32_t)(EBP));
  /* 1156b831 mov ebp, esp */
  EBP = (ESP);
  /* 1156b833 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156b839 mov eax, dword ptr [0x11593924] */
  EAX = (r32((uint32_t)(0x11593924)));
  /* 1156b83e imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156b841 push eax */
  push32((uint32_t)(EAX));
  /* 1156b842 mov ecx, dword ptr [0x11593928] */
  ECX = (r32((uint32_t)(0x11593928)));
  /* 1156b848 push ecx */
  push32((uint32_t)(ECX));
  /* 1156b849 call dword ptr [0x1159438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159438c))), 0x1156b84fu);
  /* 1156b84f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156b851 je 0x1156b85b */
  if (C.zf) goto L_1156b85b;
  /* 1156b853 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156b856 jmp 0x1156be49 */
  goto L_1156be49;
L_1156b85b:;
  /* 1156b85b mov edx, dword ptr [0x11593928] */
  EDX = (r32((uint32_t)(0x11593928)));
  /* 1156b861 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1156b867 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1156b871 jmp 0x1156b882 */
  goto L_1156b882;
L_1156b873:;
  /* 1156b873 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1156b879 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b87c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1156b882:;
  /* 1156b882 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1156b888 cmp ecx, dword ptr [0x11593924] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11593924))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b88e jge 0x1156be47 */
  if ((C.sf==C.of)) goto L_1156be47;
  /* 1156b894 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1156b89a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1156b89d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1156b8a3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1156b8a8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1156b8ae push ecx */
  push32((uint32_t)(ECX));
  /* 1156b8af call dword ptr [0x1159438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159438c))), 0x1156b8b5u);
  /* 1156b8b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156b8b7 je 0x1156b8c3 */
  if (C.zf) goto L_1156b8c3;
  /* 1156b8b9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1156b8be jmp 0x1156be49 */
  goto L_1156be49;
L_1156b8c3:;
  /* 1156b8c3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1156b8c9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1156b8cc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1156b8d2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1156b8d8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b8de mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1156b8e1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1156b8e7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1156b8ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156b8ed mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1156b8f7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1156b901 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1156b908 jmp 0x1156b913 */
  goto L_1156b913;
L_1156b90a:;
  /* 1156b90a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156b90d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b910 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1156b913:;
  /* 1156b913 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b917 jge 0x1156be0b */
  if ((C.sf==C.of)) goto L_1156be0b;
  /* 1156b91d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1156b927 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1156b931 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1156b93b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1156b945 jmp 0x1156b956 */
  goto L_1156b956;
L_1156b947:;
  /* 1156b947 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1156b94d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b950 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1156b956:;
  /* 1156b956 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b95d jge 0x1156b972 */
  if ((C.sf==C.of)) goto L_1156b972;
  /* 1156b95f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1156b965 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1156b970 jmp 0x1156b947 */
  goto L_1156b947;
L_1156b972:;
  /* 1156b972 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b976 jl 0x1156bdad */
  if ((C.sf!=C.of)) goto L_1156bdad;
  /* 1156b97c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1156b981 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1156b987 push ecx */
  push32((uint32_t)(ECX));
  /* 1156b988 call dword ptr [0x1159438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159438c))), 0x1156b98eu);
  /* 1156b98e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156b990 je 0x1156b99c */
  if (C.zf) goto L_1156b99c;
  /* 1156b992 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1156b997 jmp 0x1156be49 */
  goto L_1156be49;
L_1156b99c:;
  /* 1156b99c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1156b9a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1156b9a5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1156b9af jmp 0x1156b9c0 */
  goto L_1156b9c0;
L_1156b9b1:;
  /* 1156b9b1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1156b9b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b9ba mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1156b9c0:;
  /* 1156b9c0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b9c7 jge 0x1156bb44 */
  if ((C.sf==C.of)) goto L_1156bb44;
  /* 1156b9cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156b9d0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b9d3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1156b9d9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1156b9df add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156b9e5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1156b9eb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1156b9f1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156b9f5 jne 0x1156ba02 */
  if (!C.zf) goto L_1156ba02;
  /* 1156b9f7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1156b9fd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ba00 je 0x1156ba0c */
  if (C.zf) goto L_1156ba0c;
L_1156ba02:;
  /* 1156ba02 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1156ba07 jmp 0x1156be49 */
  goto L_1156be49;
L_1156ba0c:;
  /* 1156ba0c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1156ba12 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156ba14 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1156ba1a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1156ba20 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1156ba26 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1156ba2c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1156ba2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156ba31 je 0x1156ba69 */
  if (C.zf) goto L_1156ba69;
  /* 1156ba33 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1156ba39 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ba3c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1156ba42 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ba4c jle 0x1156ba58 */
  if ((C.zf||C.sf!=C.of)) goto L_1156ba58;
  /* 1156ba4e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1156ba53 jmp 0x1156be49 */
  goto L_1156be49;
L_1156ba58:;
  /* 1156ba58 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1156ba5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ba61 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1156ba67 jmp 0x1156baab */
  goto L_1156baab;
L_1156ba69:;
  /* 1156ba69 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1156ba6f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1156ba72 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ba75 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1156ba7b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ba82 jle 0x1156ba8e */
  if ((C.zf||C.sf!=C.of)) goto L_1156ba8e;
  /* 1156ba84 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1156ba8e:;
  /* 1156ba8e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1156ba94 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1156ba9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ba9e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1156baa4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1156baab:;
  /* 1156baab cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bab2 jl 0x1156bacd */
  if ((C.sf!=C.of)) goto L_1156bacd;
  /* 1156bab4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1156baba and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1156babd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156babf jne 0x1156bacd */
  if (!C.zf) goto L_1156bacd;
  /* 1156bac1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bacb jle 0x1156bad7 */
  if ((C.zf||C.sf!=C.of)) goto L_1156bad7;
L_1156bacd:;
  /* 1156bacd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1156bad2 jmp 0x1156be49 */
  goto L_1156be49;
L_1156bad7:;
  /* 1156bad7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1156badd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bae3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1156bae6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156baec je 0x1156baf8 */
  if (C.zf) goto L_1156baf8;
  /* 1156baee mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1156baf3 jmp 0x1156be49 */
  goto L_1156be49;
L_1156baf8:;
  /* 1156baf8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1156bafe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bb04 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1156bb0a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1156bb10 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bb16 jb 0x1156ba0c */
  if (C.cf) goto L_1156ba0c;
  /* 1156bb1c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1156bb22 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bb28 je 0x1156bb34 */
  if (C.zf) goto L_1156bb34;
  /* 1156bb2a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1156bb2f jmp 0x1156be49 */
  goto L_1156be49;
L_1156bb34:;
  /* 1156bb34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156bb37 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bb3c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156bb3f jmp 0x1156b9b1 */
  goto L_1156b9b1;
L_1156bb44:;
  /* 1156bb44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156bb47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156bb49 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bb4f je 0x1156bb5b */
  if (C.zf) goto L_1156bb5b;
  /* 1156bb51 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1156bb56 jmp 0x1156be49 */
  goto L_1156be49;
L_1156bb5b:;
  /* 1156bb5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156bb5e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1156bb64 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1156bb6b jmp 0x1156bb76 */
  goto L_1156bb76;
L_1156bb6d:;
  /* 1156bb6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156bb70 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bb73 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1156bb76:;
  /* 1156bb76 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bb7a jge 0x1156bdad */
  if ((C.sf==C.of)) goto L_1156bdad;
  /* 1156bb80 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1156bb8a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1156bb90 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1156bb96:;
  /* 1156bb96 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1156bb9c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156bb9f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1156bba5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1156bbab cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bbb1 je 0x1156bcda */
  if (C.zf) goto L_1156bcda;
  /* 1156bbb7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156bbba mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1156bbc0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bbc7 je 0x1156bcda */
  if (C.zf) goto L_1156bcda;
  /* 1156bbcd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1156bbd3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bbd9 jb 0x1156bbee */
  if (C.cf) goto L_1156bbee;
  /* 1156bbdb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1156bbe1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bbe6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bbec jb 0x1156bbf8 */
  if (C.cf) goto L_1156bbf8;
L_1156bbee:;
  /* 1156bbee mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1156bbf3 jmp 0x1156be49 */
  goto L_1156be49;
L_1156bbf8:;
  /* 1156bbf8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1156bbfe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1156bc04 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1156bc0a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1156bc10 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bc13 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1156bc16 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156bc19 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bc1e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1156bc24:;
  /* 1156bc24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156bc27 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bc2d je 0x1156bc4e */
  if (C.zf) goto L_1156bc4e;
  /* 1156bc2f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156bc32 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bc38 jne 0x1156bc3c */
  if (!C.zf) goto L_1156bc3c;
  /* 1156bc3a jmp 0x1156bc4e */
  goto L_1156bc4e;
L_1156bc3c:;
  /* 1156bc3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156bc3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156bc41 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1156bc44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156bc47 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bc49 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1156bc4c jmp 0x1156bc24 */
  goto L_1156bc24;
L_1156bc4e:;
  /* 1156bc4e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156bc51 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bc57 jne 0x1156bc63 */
  if (!C.zf) goto L_1156bc63;
  /* 1156bc59 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1156bc5e jmp 0x1156be49 */
  goto L_1156be49;
L_1156bc63:;
  /* 1156bc63 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1156bc69 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156bc6b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1156bc6e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156bc71 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1156bc77 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bc7e jle 0x1156bc8a */
  if ((C.zf||C.sf!=C.of)) goto L_1156bc8a;
  /* 1156bc80 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1156bc8a:;
  /* 1156bc8a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1156bc90 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bc93 je 0x1156bc9f */
  if (C.zf) goto L_1156bc9f;
  /* 1156bc95 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1156bc9a jmp 0x1156be49 */
  goto L_1156be49;
L_1156bc9f:;
  /* 1156bc9f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1156bca5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156bca8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bcae je 0x1156bcba */
  if (C.zf) goto L_1156bcba;
  /* 1156bcb0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1156bcb5 jmp 0x1156be49 */
  goto L_1156be49;
L_1156bcba:;
  /* 1156bcba mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1156bcc0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1156bcc6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1156bccc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bccf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1156bcd5 jmp 0x1156bb96 */
  goto L_1156bb96;
L_1156bcda:;
  /* 1156bcda cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bce1 je 0x1156bd51 */
  if (C.zf) goto L_1156bd51;
  /* 1156bce3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bce7 jge 0x1156bd1b */
  if ((C.sf==C.of)) goto L_1156bd1b;
  /* 1156bce9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156bcee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156bcf1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156bcf3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1156bcf9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156bcfb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1156bd01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156bd06 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156bd09 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156bd0b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1156bd11 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156bd13 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1156bd19 jmp 0x1156bd51 */
  goto L_1156bd51;
L_1156bd1b:;
  /* 1156bd1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156bd1e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156bd21 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156bd26 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156bd28 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1156bd2e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156bd30 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1156bd36 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156bd39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156bd3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1156bd41 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1156bd43 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1156bd49 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1156bd4b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1156bd51:;
  /* 1156bd51 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1156bd57 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156bd5a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bd60 jne 0x1156bd74 */
  if (!C.zf) goto L_1156bd74;
  /* 1156bd62 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156bd65 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1156bd6b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bd72 je 0x1156bd7e */
  if (C.zf) goto L_1156bd7e;
L_1156bd74:;
  /* 1156bd74 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1156bd79 jmp 0x1156be49 */
  goto L_1156be49;
L_1156bd7e:;
  /* 1156bd7e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1156bd84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1156bd87 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bd8d je 0x1156bd99 */
  if (C.zf) goto L_1156bd99;
  /* 1156bd8f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1156bd94 jmp 0x1156be49 */
  goto L_1156be49;
L_1156bd99:;
  /* 1156bd99 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1156bd9f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bda2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1156bda8 jmp 0x1156bb6d */
  goto L_1156bb6d;
L_1156bdad:;
  /* 1156bdad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156bdb0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1156bdb6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1156bdbc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bdc0 jne 0x1156bdda */
  if (!C.zf) goto L_1156bdda;
  /* 1156bdc2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156bdc5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1156bdcb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1156bdd1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bdd8 je 0x1156bde1 */
  if (C.zf) goto L_1156bde1;
L_1156bdda:;
  /* 1156bdda mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1156bddf jmp 0x1156be49 */
  goto L_1156be49;
L_1156bde1:;
  /* 1156bde1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1156bde7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bded mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1156bdf3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156bdf6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bdfb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1156bdfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156be01 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1156be03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156be06 jmp 0x1156b90a */
  goto L_1156b90a;
L_1156be0b:;
  /* 1156be0b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1156be11 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1156be17 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156be19 jne 0x1156be2c */
  if (!C.zf) goto L_1156be2c;
  /* 1156be1b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1156be21 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1156be27 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156be2a je 0x1156be33 */
  if (C.zf) goto L_1156be33;
L_1156be2c:;
  /* 1156be2c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1156be31 jmp 0x1156be49 */
  goto L_1156be49;
L_1156be33:;
  /* 1156be33 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1156be39 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156be3c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1156be42 jmp 0x1156b873 */
  goto L_1156b873;
L_1156be47:;
  /* 1156be47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1156be49:;
  /* 1156be49 mov esp, ebp */
  ESP = (EBP);
  /* 1156be4b pop ebp */
  EBP = (pop32());
  /* 1156be4c ret  */
  ESPCHK(0x1156b830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be50 @ 0x1156be50 (250 bytes, 92 insns) */
void f_1156be50(void) {
  FTRACE(0x1156be50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156be50 push ebp */
  push32((uint32_t)(EBP));
  /* 1156be51 mov ebp, esp */
  EBP = (ESP);
  /* 1156be53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156be56 push ebx */
  push32((uint32_t)(EBX));
  /* 1156be57 push esi */
  push32((uint32_t)(ESI));
  /* 1156be58 push edi */
  push32((uint32_t)(EDI));
  /* 1156be59 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1156be5c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1156be5f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1156be62 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1156be65:;
  /* 1156be65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156be69 jne 0x1156be89 */
  if (!C.zf) goto L_1156be89;
  /* 1156be6b push 0x1158cf54 */
  push32((uint32_t)(0x1158cf54u));
  /* 1156be70 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156be72 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1156be74 push 0x1158cf48 */
  push32((uint32_t)(0x1158cf48u));
  /* 1156be79 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156be7b call 0x11565000 */
  push32(0x1156be80u); f_11565000();
  /* 1156be80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156be83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156be86 jne 0x1156be89 */
  if (!C.zf) goto L_1156be89;
  /* 1156be88 int3  */
  x86_unimpl("int3 @ 0x1156be88");
L_1156be89:;
  /* 1156be89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156be8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156be8d jne 0x1156be65 */
  if (!C.zf) goto L_1156be65;
L_1156be8f:;
  /* 1156be8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156be93 jne 0x1156beb3 */
  if (!C.zf) goto L_1156beb3;
  /* 1156be95 push 0x1158cf38 */
  push32((uint32_t)(0x1158cf38u));
  /* 1156be9a push 0 */
  push32((uint32_t)(0x0u));
  /* 1156be9c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1156be9e push 0x1158cf48 */
  push32((uint32_t)(0x1158cf48u));
  /* 1156bea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156bea5 call 0x11565000 */
  push32(0x1156beaau); f_11565000();
  /* 1156beaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bead cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156beb0 jne 0x1156beb3 */
  if (!C.zf) goto L_1156beb3;
  /* 1156beb2 int3  */
  x86_unimpl("int3 @ 0x1156beb2");
L_1156beb3:;
  /* 1156beb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156beb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156beb7 jne 0x1156be8f */
  if (!C.zf) goto L_1156be8f;
  /* 1156beb9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bebc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1156bec3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156bec9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1156becc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156becf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156bed2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1156bed4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bed7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1156bede mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156bee1 push ecx */
  push32((uint32_t)(ECX));
  /* 1156bee2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156bee5 push edx */
  push32((uint32_t)(EDX));
  /* 1156bee6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bee9 push eax */
  push32((uint32_t)(EAX));
  /* 1156beea call 0x1156ced0 */
  push32(0x1156beefu); f_1156ced0();
  /* 1156beef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bef2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1156bef5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bef8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156befb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156befe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bf01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1156bf04 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bf07 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bf0b jl 0x1156bf2f */
  if ((C.sf!=C.of)) goto L_1156bf2f;
  /* 1156bf0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bf10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156bf12 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1156bf15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156bf17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156bf1d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1156bf20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bf23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156bf25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bf28 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bf2b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1156bf2d jmp 0x1156bf40 */
  goto L_1156bf40;
L_1156bf2f:;
  /* 1156bf2f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156bf32 push edx */
  push32((uint32_t)(EDX));
  /* 1156bf33 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156bf35 call 0x1156cc50 */
  push32(0x1156bf3au); f_1156cc50();
  /* 1156bf3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bf3d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1156bf40:;
  /* 1156bf40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156bf43 pop edi */
  EDI = (pop32());
  /* 1156bf44 pop esi */
  ESI = (pop32());
  /* 1156bf45 pop ebx */
  EBX = (pop32());
  /* 1156bf46 mov esp, ebp */
  ESP = (EBP);
  /* 1156bf48 pop ebp */
  EBP = (pop32());
  /* 1156bf49 ret  */
  ESPCHK(0x1156be50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf50 @ 0x1156bf50 (183 bytes, 58 insns) */
void f_1156bf50(void) {
  FTRACE(0x1156bf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156bf50 push ebp */
  push32((uint32_t)(EBP));
  /* 1156bf51 mov ebp, esp */
  EBP = (ESP);
  /* 1156bf53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156bf56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156bf59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bf5c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156bf61 ja 0x1156bf7a */
  if ((!C.cf&&!C.zf)) goto L_1156bf7a;
  /* 1156bf63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156bf66 mov edx, dword ptr [0x1158fc98] */
  EDX = (r32((uint32_t)(0x1158fc98)));
  /* 1156bf6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156bf6e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1156bf72 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1156bf75 jmp 0x1156c003 */
  goto L_1156c003;
L_1156bf7a:;
  /* 1156bf7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156bf7d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1156bf80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156bf86 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156bf8c mov edx, dword ptr [0x1158fc98] */
  EDX = (r32((uint32_t)(0x1158fc98)));
  /* 1156bf92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156bf94 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1156bf98 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1156bf9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156bf9f je 0x1156bfc3 */
  if (C.zf) goto L_1156bfc3;
  /* 1156bfa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156bfa4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1156bfa7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156bfad mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1156bfb0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1156bfb3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1156bfb6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1156bfba mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1156bfc1 jmp 0x1156bfd4 */
  goto L_1156bfd4;
L_1156bfc3:;
  /* 1156bfc3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1156bfc6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1156bfc9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1156bfcd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1156bfd4:;
  /* 1156bfd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1156bfd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156bfd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156bfda lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1156bfdd push ecx */
  push32((uint32_t)(ECX));
  /* 1156bfde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156bfe1 push edx */
  push32((uint32_t)(EDX));
  /* 1156bfe2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1156bfe5 push eax */
  push32((uint32_t)(EAX));
  /* 1156bfe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1156bfe8 call 0x1156e170 */
  push32(0x1156bfedu); f_1156e170();
  /* 1156bfed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156bff0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156bff2 jne 0x1156bff8 */
  if (!C.zf) goto L_1156bff8;
  /* 1156bff4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156bff6 jmp 0x1156c003 */
  goto L_1156c003;
L_1156bff8:;
  /* 1156bff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156bffb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156c000 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1156c003:;
  /* 1156c003 mov esp, ebp */
  ESP = (EBP);
  /* 1156c005 pop ebp */
  EBP = (pop32());
  /* 1156c006 ret  */
  ESPCHK(0x1156bf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c010 @ 0x1156c010 (836 bytes, 238 insns) */
void f_1156c010(void) {
  FTRACE(0x1156c010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156c010 push ebp */
  push32((uint32_t)(EBP));
  /* 1156c011 mov ebp, esp */
  EBP = (ESP);
  /* 1156c013 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156c016 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1156c018 call 0x11569940 */
  push32(0x1156c01du); f_11569940();
  /* 1156c01d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c023 push eax */
  push32((uint32_t)(EAX));
  /* 1156c024 call 0x1156c360 */
  push32(0x1156c029u); f_1156c360();
  /* 1156c029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c02c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1156c02f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c032 cmp ecx, dword ptr [0x11593664] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11593664))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c038 jne 0x1156c04b */
  if (!C.zf) goto L_1156c04b;
  /* 1156c03a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1156c03c call 0x115699e0 */
  push32(0x1156c041u); f_115699e0();
  /* 1156c041 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156c046 jmp 0x1156c350 */
  goto L_1156c350;
L_1156c04b:;
  /* 1156c04b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c04f jne 0x1156c06c */
  if (!C.zf) goto L_1156c06c;
  /* 1156c051 call 0x1156c440 */
  push32(0x1156c056u); f_1156c440();
  /* 1156c056 call 0x1156c4c0 */
  push32(0x1156c05bu); f_1156c4c0();
  /* 1156c05b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1156c05d call 0x115699e0 */
  push32(0x1156c062u); f_115699e0();
  /* 1156c062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c065 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156c067 jmp 0x1156c350 */
  goto L_1156c350;
L_1156c06c:;
  /* 1156c06c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156c073 jmp 0x1156c07e */
  goto L_1156c07e;
L_1156c075:;
  /* 1156c075 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c078 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c07b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1156c07e:;
  /* 1156c07e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c082 jae 0x1156c1cf */
  if (!C.cf) goto L_1156c1cf;
  /* 1156c088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c08b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156c08e mov ecx, dword ptr [eax + 0x1158feb8] */
  ECX = (r32((uint32_t)(EAX + 0x1158feb8)));
  /* 1156c094 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c097 jne 0x1156c1ca */
  if (!C.zf) goto L_1156c1ca;
  /* 1156c09d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1156c0a4 jmp 0x1156c0af */
  goto L_1156c0af;
L_1156c0a6:;
  /* 1156c0a6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c0a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c0ac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1156c0af:;
  /* 1156c0af cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c0b6 jae 0x1156c0c4 */
  if (!C.cf) goto L_1156c0c4;
  /* 1156c0b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c0bb mov byte ptr [eax + 0x11593800], 0 */
  w8((uint32_t)(EAX + 0x11593800), (0x0u));
  /* 1156c0c2 jmp 0x1156c0a6 */
  goto L_1156c0a6;
L_1156c0c4:;
  /* 1156c0c4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1156c0cb jmp 0x1156c0d6 */
  goto L_1156c0d6;
L_1156c0cd:;
  /* 1156c0cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156c0d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c0d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1156c0d6:;
  /* 1156c0d6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c0da jae 0x1156c157 */
  if (!C.cf) goto L_1156c157;
  /* 1156c0dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c0df imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156c0e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156c0e5 lea ecx, [edx + eax*8 + 0x1158fec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1158fec8));
  /* 1156c0ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1156c0ef jmp 0x1156c0fa */
  goto L_1156c0fa;
L_1156c0f1:;
  /* 1156c0f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156c0f4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c0f7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1156c0fa:;
  /* 1156c0fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156c0fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156c0ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1156c101 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156c103 je 0x1156c152 */
  if (C.zf) goto L_1156c152;
  /* 1156c105 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156c108 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156c10a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1156c10d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156c10f je 0x1156c152 */
  if (C.zf) goto L_1156c152;
  /* 1156c111 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156c114 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c116 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1156c118 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1156c11b jmp 0x1156c126 */
  goto L_1156c126;
L_1156c11d:;
  /* 1156c11d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c120 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c123 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1156c126:;
  /* 1156c126 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156c129 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c12b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1156c12e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c131 ja 0x1156c150 */
  if ((!C.cf&&!C.zf)) goto L_1156c150;
  /* 1156c133 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156c139 mov dl, byte ptr [eax + 0x11593801] */
  DL = (r8((uint32_t)(EAX + 0x11593801)));
  /* 1156c13f or dl, byte ptr [ecx + 0x1158feb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1158feb0))); DL = (_r); fl_logic(_r,8); }
  /* 1156c145 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c148 mov byte ptr [eax + 0x11593801], dl */
  w8((uint32_t)(EAX + 0x11593801), (DL));
  /* 1156c14e jmp 0x1156c11d */
  goto L_1156c11d;
L_1156c150:;
  /* 1156c150 jmp 0x1156c0f1 */
  goto L_1156c0f1;
L_1156c152:;
  /* 1156c152 jmp 0x1156c0cd */
  goto L_1156c0cd;
L_1156c157:;
  /* 1156c157 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c15a mov dword ptr [0x11593664], ecx */
  w32((uint32_t)(0x11593664), (ECX));
  /* 1156c160 mov dword ptr [0x115936ec], 1 */
  w32((uint32_t)(0x115936ec), (0x1u));
  /* 1156c16a mov edx, dword ptr [0x11593664] */
  EDX = (r32((uint32_t)(0x11593664)));
  /* 1156c170 push edx */
  push32((uint32_t)(EDX));
  /* 1156c171 call 0x1156c3c0 */
  push32(0x1156c176u); f_1156c3c0();
  /* 1156c176 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c179 mov dword ptr [0x11593904], eax */
  w32((uint32_t)(0x11593904), (EAX));
  /* 1156c17e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1156c185 jmp 0x1156c190 */
  goto L_1156c190;
L_1156c187:;
  /* 1156c187 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156c18a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c18d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1156c190:;
  /* 1156c190 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c194 jae 0x1156c1b4 */
  if (!C.cf) goto L_1156c1b4;
  /* 1156c196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c199 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156c19c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156c19f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156c1a2 mov cx, word ptr [ecx + eax*2 + 0x1158febc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1158febc)));
  /* 1156c1aa mov word ptr [edx*2 + 0x115936e0], cx */
  w16((uint32_t)(EDX*2 + 0x115936e0), (CX));
  /* 1156c1b2 jmp 0x1156c187 */
  goto L_1156c187;
L_1156c1b4:;
  /* 1156c1b4 call 0x1156c4c0 */
  push32(0x1156c1b9u); f_1156c4c0();
  /* 1156c1b9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1156c1bb call 0x115699e0 */
  push32(0x1156c1c0u); f_115699e0();
  /* 1156c1c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c1c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156c1c5 jmp 0x1156c350 */
  goto L_1156c350;
L_1156c1ca:;
  /* 1156c1ca jmp 0x1156c075 */
  goto L_1156c075;
L_1156c1cf:;
  /* 1156c1cf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1156c1d2 push edx */
  push32((uint32_t)(EDX));
  /* 1156c1d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c1d6 push eax */
  push32((uint32_t)(EAX));
  /* 1156c1d7 call dword ptr [0x11594338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594338))), 0x1156c1ddu);
  /* 1156c1dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c1e0 jne 0x1156c322 */
  if (!C.zf) goto L_1156c322;
  /* 1156c1e6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1156c1ed jmp 0x1156c1f8 */
  goto L_1156c1f8;
L_1156c1ef:;
  /* 1156c1ef mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c1f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c1f5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1156c1f8:;
  /* 1156c1f8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c1ff jae 0x1156c20d */
  if (!C.cf) goto L_1156c20d;
  /* 1156c201 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c204 mov byte ptr [edx + 0x11593800], 0 */
  w8((uint32_t)(EDX + 0x11593800), (0x0u));
  /* 1156c20b jmp 0x1156c1ef */
  goto L_1156c1ef;
L_1156c20d:;
  /* 1156c20d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c210 mov dword ptr [0x11593664], eax */
  w32((uint32_t)(0x11593664), (EAX));
  /* 1156c215 mov dword ptr [0x11593904], 0 */
  w32((uint32_t)(0x11593904), (0x0u));
  /* 1156c21f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c223 jbe 0x1156c2de */
  if ((C.cf||C.zf)) goto L_1156c2de;
  /* 1156c229 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1156c22c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1156c22f jmp 0x1156c23a */
  goto L_1156c23a;
L_1156c231:;
  /* 1156c231 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156c234 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c237 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1156c23a:;
  /* 1156c23a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156c23d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156c23f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1156c241 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156c243 je 0x1156c28c */
  if (C.zf) goto L_1156c28c;
  /* 1156c245 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156c248 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156c24a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1156c24d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156c24f je 0x1156c28c */
  if (C.zf) goto L_1156c28c;
  /* 1156c251 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156c254 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c256 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1156c258 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1156c25b jmp 0x1156c266 */
  goto L_1156c266;
L_1156c25d:;
  /* 1156c25d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c260 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c263 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1156c266:;
  /* 1156c266 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156c269 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c26b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1156c26e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c271 ja 0x1156c28a */
  if ((!C.cf&&!C.zf)) goto L_1156c28a;
  /* 1156c273 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c276 mov cl, byte ptr [eax + 0x11593801] */
  CL = (r8((uint32_t)(EAX + 0x11593801)));
  /* 1156c27c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1156c27f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c282 mov byte ptr [edx + 0x11593801], cl */
  w8((uint32_t)(EDX + 0x11593801), (CL));
  /* 1156c288 jmp 0x1156c25d */
  goto L_1156c25d;
L_1156c28a:;
  /* 1156c28a jmp 0x1156c231 */
  goto L_1156c231;
L_1156c28c:;
  /* 1156c28c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1156c293 jmp 0x1156c29e */
  goto L_1156c29e;
L_1156c295:;
  /* 1156c295 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c298 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c29b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1156c29e:;
  /* 1156c29e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c2a5 jae 0x1156c2be */
  if (!C.cf) goto L_1156c2be;
  /* 1156c2a7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c2aa mov dl, byte ptr [ecx + 0x11593801] */
  DL = (r8((uint32_t)(ECX + 0x11593801)));
  /* 1156c2b0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1156c2b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156c2b6 mov byte ptr [eax + 0x11593801], dl */
  w8((uint32_t)(EAX + 0x11593801), (DL));
  /* 1156c2bc jmp 0x1156c295 */
  goto L_1156c295;
L_1156c2be:;
  /* 1156c2be mov ecx, dword ptr [0x11593664] */
  ECX = (r32((uint32_t)(0x11593664)));
  /* 1156c2c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1156c2c5 call 0x1156c3c0 */
  push32(0x1156c2cau); f_1156c3c0();
  /* 1156c2ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c2cd mov dword ptr [0x11593904], eax */
  w32((uint32_t)(0x11593904), (EAX));
  /* 1156c2d2 mov dword ptr [0x115936ec], 1 */
  w32((uint32_t)(0x115936ec), (0x1u));
  /* 1156c2dc jmp 0x1156c2e8 */
  goto L_1156c2e8;
L_1156c2de:;
  /* 1156c2de mov dword ptr [0x115936ec], 0 */
  w32((uint32_t)(0x115936ec), (0x0u));
L_1156c2e8:;
  /* 1156c2e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1156c2ef jmp 0x1156c2fa */
  goto L_1156c2fa;
L_1156c2f1:;
  /* 1156c2f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156c2f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c2f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1156c2fa:;
  /* 1156c2fa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c2fe jae 0x1156c30f */
  if (!C.cf) goto L_1156c30f;
  /* 1156c300 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156c303 mov word ptr [eax*2 + 0x115936e0], 0 */
  w16((uint32_t)(EAX*2 + 0x115936e0), (0x0u));
  /* 1156c30d jmp 0x1156c2f1 */
  goto L_1156c2f1;
L_1156c30f:;
  /* 1156c30f call 0x1156c4c0 */
  push32(0x1156c314u); f_1156c4c0();
  /* 1156c314 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1156c316 call 0x115699e0 */
  push32(0x1156c31bu); f_115699e0();
  /* 1156c31b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c31e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156c320 jmp 0x1156c350 */
  goto L_1156c350;
L_1156c322:;
  /* 1156c322 cmp dword ptr [0x11592180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c329 je 0x1156c343 */
  if (C.zf) goto L_1156c343;
  /* 1156c32b call 0x1156c440 */
  push32(0x1156c330u); f_1156c440();
  /* 1156c330 call 0x1156c4c0 */
  push32(0x1156c335u); f_1156c4c0();
  /* 1156c335 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1156c337 call 0x115699e0 */
  push32(0x1156c33cu); f_115699e0();
  /* 1156c33c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c33f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156c341 jmp 0x1156c350 */
  goto L_1156c350;
L_1156c343:;
  /* 1156c343 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1156c345 call 0x115699e0 */
  push32(0x1156c34au); f_115699e0();
  /* 1156c34a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c34d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1156c350:;
  /* 1156c350 mov esp, ebp */
  ESP = (EBP);
  /* 1156c352 pop ebp */
  EBP = (pop32());
  /* 1156c353 ret  */
  ESPCHK(0x1156c010u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1156c360 (89 bytes, 21 insns) */
void f_1156c360(void) {
  FTRACE(0x1156c360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156c360 push ebp */
  push32((uint32_t)(EBP));
  /* 1156c361 mov ebp, esp */
  EBP = (ESP);
  /* 1156c363 mov dword ptr [0x11592180], 0 */
  w32((uint32_t)(0x11592180), (0x0u));
  /* 1156c36d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c371 jne 0x1156c385 */
  if (!C.zf) goto L_1156c385;
  /* 1156c373 mov dword ptr [0x11592180], 1 */
  w32((uint32_t)(0x11592180), (0x1u));
  /* 1156c37d call dword ptr [0x11594330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594330))), 0x1156c383u);
  /* 1156c383 jmp 0x1156c3b7 */
  goto L_1156c3b7;
L_1156c385:;
  /* 1156c385 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c389 jne 0x1156c39d */
  if (!C.zf) goto L_1156c39d;
  /* 1156c38b mov dword ptr [0x11592180], 1 */
  w32((uint32_t)(0x11592180), (0x1u));
  /* 1156c395 call dword ptr [0x11594334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594334))), 0x1156c39bu);
  /* 1156c39b jmp 0x1156c3b7 */
  goto L_1156c3b7;
L_1156c39d:;
  /* 1156c39d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c3a1 jne 0x1156c3b4 */
  if (!C.zf) goto L_1156c3b4;
  /* 1156c3a3 mov dword ptr [0x11592180], 1 */
  w32((uint32_t)(0x11592180), (0x1u));
  /* 1156c3ad mov eax, dword ptr [0x115921a0] */
  EAX = (r32((uint32_t)(0x115921a0)));
  /* 1156c3b2 jmp 0x1156c3b7 */
  goto L_1156c3b7;
L_1156c3b4:;
  /* 1156c3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1156c3b7:;
  /* 1156c3b7 pop ebp */
  EBP = (pop32());
  /* 1156c3b8 ret  */
  ESPCHK(0x1156c360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3c0 @ 0x1156c3c0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1156c3c0(void) {
  FTRACE(0x1156c3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156c3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156c3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1156c3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156c3c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c3c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156c3ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c3cd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156c3d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156c3d6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c3da ja 0x1156c40a */
  if ((!C.cf&&!C.zf)) goto L_1156c40a;
  /* 1156c3dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c3df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c3e1 mov dl, byte ptr [eax + 0x1156c424] */
  DL = (r8((uint32_t)(EAX + 0x1156c424)));
  /* 1156c3e7 jmp dword ptr [edx*4 + 0x1156c410] */
  switch (EDX) {
    case 0: goto L_1156c3ee;
    case 1: goto L_1156c3f5;
    case 2: goto L_1156c3fc;
    case 3: goto L_1156c403;
    case 4: goto L_1156c40a;
    default: x86_unimpl("switch@0x1156c3e7 out of table"); return;
  }
L_1156c3ee:;
  /* 1156c3ee mov eax, 0x411 */
  EAX = (0x411u);
  /* 1156c3f3 jmp 0x1156c40c */
  goto L_1156c40c;
L_1156c3f5:;
  /* 1156c3f5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1156c3fa jmp 0x1156c40c */
  goto L_1156c40c;
L_1156c3fc:;
  /* 1156c3fc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1156c401 jmp 0x1156c40c */
  goto L_1156c40c;
L_1156c403:;
  /* 1156c403 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1156c408 jmp 0x1156c40c */
  goto L_1156c40c;
L_1156c40a:;
  /* 1156c40a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1156c40c:;
  /* 1156c40c mov esp, ebp */
  ESP = (EBP);
  /* 1156c40e pop ebp */
  EBP = (pop32());
  /* 1156c40f ret  */
  ESPCHK(0x1156c3c0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1156c440 (116 bytes, 29 insns) */
void f_1156c440(void) {
  FTRACE(0x1156c440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156c440 push ebp */
  push32((uint32_t)(EBP));
  /* 1156c441 mov ebp, esp */
  EBP = (ESP);
  /* 1156c443 push ecx */
  push32((uint32_t)(ECX));
  /* 1156c444 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156c44b jmp 0x1156c456 */
  goto L_1156c456;
L_1156c44d:;
  /* 1156c44d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c450 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c453 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1156c456:;
  /* 1156c456 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c45d jge 0x1156c46b */
  if ((C.sf==C.of)) goto L_1156c46b;
  /* 1156c45f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c462 mov byte ptr [ecx + 0x11593800], 0 */
  w8((uint32_t)(ECX + 0x11593800), (0x0u));
  /* 1156c469 jmp 0x1156c44d */
  goto L_1156c44d;
L_1156c46b:;
  /* 1156c46b mov dword ptr [0x11593664], 0 */
  w32((uint32_t)(0x11593664), (0x0u));
  /* 1156c475 mov dword ptr [0x115936ec], 0 */
  w32((uint32_t)(0x115936ec), (0x0u));
  /* 1156c47f mov dword ptr [0x11593904], 0 */
  w32((uint32_t)(0x11593904), (0x0u));
  /* 1156c489 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156c490 jmp 0x1156c49b */
  goto L_1156c49b;
L_1156c492:;
  /* 1156c492 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c495 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c498 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1156c49b:;
  /* 1156c49b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c49f jge 0x1156c4b0 */
  if ((C.sf==C.of)) goto L_1156c4b0;
  /* 1156c4a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c4a4 mov word ptr [eax*2 + 0x115936e0], 0 */
  w16((uint32_t)(EAX*2 + 0x115936e0), (0x0u));
  /* 1156c4ae jmp 0x1156c492 */
  goto L_1156c492;
L_1156c4b0:;
  /* 1156c4b0 mov esp, ebp */
  ESP = (EBP);
  /* 1156c4b2 pop ebp */
  EBP = (pop32());
  /* 1156c4b3 ret  */
  ESPCHK(0x1156c440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4c0 @ 0x1156c4c0 (770 bytes, 175 insns) */
void f_1156c4c0(void) {
  FTRACE(0x1156c4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156c4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156c4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1156c4c3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156c4c9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1156c4cf push eax */
  push32((uint32_t)(EAX));
  /* 1156c4d0 mov ecx, dword ptr [0x11593664] */
  ECX = (r32((uint32_t)(0x11593664)));
  /* 1156c4d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1156c4d7 call dword ptr [0x11594338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594338))), 0x1156c4ddu);
  /* 1156c4dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c4e0 jne 0x1156c6f9 */
  if (!C.zf) goto L_1156c6f9;
  /* 1156c4e6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1156c4f0 jmp 0x1156c501 */
  goto L_1156c501;
L_1156c4f2:;
  /* 1156c4f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c4f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c4fb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1156c501:;
  /* 1156c501 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c50b jae 0x1156c522 */
  if (!C.cf) goto L_1156c522;
  /* 1156c50d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c513 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1156c519 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1156c520 jmp 0x1156c4f2 */
  goto L_1156c4f2;
L_1156c522:;
  /* 1156c522 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1156c529 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1156c52f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156c532 jmp 0x1156c53d */
  goto L_1156c53d;
L_1156c534:;
  /* 1156c534 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c537 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c53a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1156c53d:;
  /* 1156c53d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c540 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c542 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1156c544 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156c546 je 0x1156c588 */
  if (C.zf) goto L_1156c588;
  /* 1156c548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c54b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156c54d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1156c54f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1156c555 jmp 0x1156c566 */
  goto L_1156c566;
L_1156c557:;
  /* 1156c557 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c55d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c560 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1156c566:;
  /* 1156c566 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156c569 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156c56b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1156c56e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c574 ja 0x1156c586 */
  if ((!C.cf&&!C.zf)) goto L_1156c586;
  /* 1156c576 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c57c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1156c584 jmp 0x1156c557 */
  goto L_1156c557;
L_1156c586:;
  /* 1156c586 jmp 0x1156c534 */
  goto L_1156c534;
L_1156c588:;
  /* 1156c588 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156c58a mov eax, dword ptr [0x11593904] */
  EAX = (r32((uint32_t)(0x11593904)));
  /* 1156c58f push eax */
  push32((uint32_t)(EAX));
  /* 1156c590 mov ecx, dword ptr [0x11593664] */
  ECX = (r32((uint32_t)(0x11593664)));
  /* 1156c596 push ecx */
  push32((uint32_t)(ECX));
  /* 1156c597 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1156c59d push edx */
  push32((uint32_t)(EDX));
  /* 1156c59e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1156c5a3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1156c5a9 push eax */
  push32((uint32_t)(EAX));
  /* 1156c5aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1156c5ac call 0x1156e170 */
  push32(0x1156c5b1u); f_1156e170();
  /* 1156c5b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c5b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156c5b6 mov ecx, dword ptr [0x11593664] */
  ECX = (r32((uint32_t)(0x11593664)));
  /* 1156c5bc push ecx */
  push32((uint32_t)(ECX));
  /* 1156c5bd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1156c5c2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1156c5c8 push edx */
  push32((uint32_t)(EDX));
  /* 1156c5c9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1156c5ce lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1156c5d4 push eax */
  push32((uint32_t)(EAX));
  /* 1156c5d5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1156c5da mov ecx, dword ptr [0x11593904] */
  ECX = (r32((uint32_t)(0x11593904)));
  /* 1156c5e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1156c5e1 call 0x1156e330 */
  push32(0x1156c5e6u); f_1156e330();
  /* 1156c5e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c5e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156c5eb mov edx, dword ptr [0x11593664] */
  EDX = (r32((uint32_t)(0x11593664)));
  /* 1156c5f1 push edx */
  push32((uint32_t)(EDX));
  /* 1156c5f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1156c5f7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1156c5fd push eax */
  push32((uint32_t)(EAX));
  /* 1156c5fe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1156c603 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1156c609 push ecx */
  push32((uint32_t)(ECX));
  /* 1156c60a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1156c60f mov edx, dword ptr [0x11593904] */
  EDX = (r32((uint32_t)(0x11593904)));
  /* 1156c615 push edx */
  push32((uint32_t)(EDX));
  /* 1156c616 call 0x1156e330 */
  push32(0x1156c61bu); f_1156e330();
  /* 1156c61b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c61e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1156c628 jmp 0x1156c639 */
  goto L_1156c639;
L_1156c62a:;
  /* 1156c62a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c630 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c633 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1156c639:;
  /* 1156c639 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c643 jae 0x1156c6f4 */
  if (!C.cf) goto L_1156c6f4;
  /* 1156c649 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c64f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c651 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1156c659 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1156c65c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156c65e je 0x1156c696 */
  if (C.zf) goto L_1156c696;
  /* 1156c660 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c666 mov cl, byte ptr [eax + 0x11593801] */
  CL = (r8((uint32_t)(EAX + 0x11593801)));
  /* 1156c66c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1156c66f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c675 mov byte ptr [edx + 0x11593801], cl */
  w8((uint32_t)(EDX + 0x11593801), (CL));
  /* 1156c67b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c681 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c687 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1156c68e mov byte ptr [eax + 0x11593700], dl */
  w8((uint32_t)(EAX + 0x11593700), (DL));
  /* 1156c694 jmp 0x1156c6ef */
  goto L_1156c6ef;
L_1156c696:;
  /* 1156c696 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c69c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156c69e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1156c6a6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1156c6a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156c6ab je 0x1156c6e2 */
  if (C.zf) goto L_1156c6e2;
  /* 1156c6ad mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c6b3 mov al, byte ptr [edx + 0x11593801] */
  AL = (r8((uint32_t)(EDX + 0x11593801)));
  /* 1156c6b9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1156c6bb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c6c1 mov byte ptr [ecx + 0x11593801], al */
  w8((uint32_t)(ECX + 0x11593801), (AL));
  /* 1156c6c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c6cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c6d3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1156c6da mov byte ptr [edx + 0x11593700], cl */
  w8((uint32_t)(EDX + 0x11593700), (CL));
  /* 1156c6e0 jmp 0x1156c6ef */
  goto L_1156c6ef;
L_1156c6e2:;
  /* 1156c6e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c6e8 mov byte ptr [edx + 0x11593700], 0 */
  w8((uint32_t)(EDX + 0x11593700), (0x0u));
L_1156c6ef:;
  /* 1156c6ef jmp 0x1156c62a */
  goto L_1156c62a;
L_1156c6f4:;
  /* 1156c6f4 jmp 0x1156c7be */
  goto L_1156c7be;
L_1156c6f9:;
  /* 1156c6f9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1156c703 jmp 0x1156c714 */
  goto L_1156c714;
L_1156c705:;
  /* 1156c705 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c70b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c70e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1156c714:;
  /* 1156c714 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c71e jae 0x1156c7be */
  if (!C.cf) goto L_1156c7be;
  /* 1156c724 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c72b jb 0x1156c768 */
  if (C.cf) goto L_1156c768;
  /* 1156c72d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c734 ja 0x1156c768 */
  if ((!C.cf&&!C.zf)) goto L_1156c768;
  /* 1156c736 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c73c mov dl, byte ptr [ecx + 0x11593801] */
  DL = (r8((uint32_t)(ECX + 0x11593801)));
  /* 1156c742 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1156c745 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c74b mov byte ptr [eax + 0x11593801], dl */
  w8((uint32_t)(EAX + 0x11593801), (DL));
  /* 1156c751 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c757 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c75a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c760 mov byte ptr [edx + 0x11593700], cl */
  w8((uint32_t)(EDX + 0x11593700), (CL));
  /* 1156c766 jmp 0x1156c7b9 */
  goto L_1156c7b9;
L_1156c768:;
  /* 1156c768 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c76f jb 0x1156c7ac */
  if (C.cf) goto L_1156c7ac;
  /* 1156c771 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c778 ja 0x1156c7ac */
  if ((!C.cf&&!C.zf)) goto L_1156c7ac;
  /* 1156c77a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c780 mov cl, byte ptr [eax + 0x11593801] */
  CL = (r8((uint32_t)(EAX + 0x11593801)));
  /* 1156c786 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1156c789 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c78f mov byte ptr [edx + 0x11593801], cl */
  w8((uint32_t)(EDX + 0x11593801), (CL));
  /* 1156c795 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c79b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156c79e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c7a4 mov byte ptr [ecx + 0x11593700], al */
  w8((uint32_t)(ECX + 0x11593700), (AL));
  /* 1156c7aa jmp 0x1156c7b9 */
  goto L_1156c7b9;
L_1156c7ac:;
  /* 1156c7ac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1156c7b2 mov byte ptr [edx + 0x11593700], 0 */
  w8((uint32_t)(EDX + 0x11593700), (0x0u));
L_1156c7b9:;
  /* 1156c7b9 jmp 0x1156c705 */
  goto L_1156c705;
L_1156c7be:;
  /* 1156c7be mov esp, ebp */
  ESP = (EBP);
  /* 1156c7c0 pop ebp */
  EBP = (pop32());
  /* 1156c7c1 ret  */
  ESPCHK(0x1156c4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7d0 @ 0x1156c7d0 (23 bytes, 9 insns) */
void f_1156c7d0(void) {
  FTRACE(0x1156c7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156c7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156c7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1156c7d3 cmp dword ptr [0x115936ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115936ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c7da je 0x1156c7e3 */
  if (C.zf) goto L_1156c7e3;
  /* 1156c7dc mov eax, dword ptr [0x11593664] */
  EAX = (r32((uint32_t)(0x11593664)));
  /* 1156c7e1 jmp 0x1156c7e5 */
  goto L_1156c7e5;
L_1156c7e3:;
  /* 1156c7e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1156c7e5:;
  /* 1156c7e5 pop ebp */
  EBP = (pop32());
  /* 1156c7e6 ret  */
  ESPCHK(0x1156c7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7f0 @ 0x1156c7f0 (34 bytes, 10 insns) */
void f_1156c7f0(void) {
  FTRACE(0x1156c7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156c7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156c7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1156c7f3 cmp dword ptr [0x11593ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11593ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c7fa jne 0x1156c810 */
  if (!C.zf) goto L_1156c810;
  /* 1156c7fc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1156c7fe call 0x1156c010 */
  push32(0x1156c803u); f_1156c010();
  /* 1156c803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c806 mov dword ptr [0x11593ab0], 1 */
  w32((uint32_t)(0x11593ab0), (0x1u));
L_1156c810:;
  /* 1156c810 pop ebp */
  EBP = (pop32());
  /* 1156c811 ret  */
  ESPCHK(0x1156c7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x1156c820 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1156c820(void) {
  FTRACE(0x1156c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156c820 push ebp */
  push32((uint32_t)(EBP));
  /* 1156c821 mov ebp, esp */
  EBP = (ESP);
  /* 1156c823 push edi */
  push32((uint32_t)(EDI));
  /* 1156c824 push esi */
  push32((uint32_t)(ESI));
  /* 1156c825 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1156c828 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156c82b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c82e mov eax, ecx */
  EAX = (ECX);
  /* 1156c830 mov edx, ecx */
  EDX = (ECX);
  /* 1156c832 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c834 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c836 jbe 0x1156c840 */
  if ((C.cf||C.zf)) goto L_1156c840;
  /* 1156c838 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c83a jb 0x1156c9b8 */
  if (C.cf) goto L_1156c9b8;
L_1156c840:;
  /* 1156c840 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1156c846 jne 0x1156c85c */
  if (!C.zf) goto L_1156c85c;
  /* 1156c848 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156c84b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1156c84e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c851 jb 0x1156c87c */
  if (C.cf) goto L_1156c87c;
  /* 1156c853 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156c855 jmp dword ptr [edx*4 + 0x1156c968] */
  switch (EDX) {
    case 0: goto L_1156c978;
    case 1: goto L_1156c980;
    case 2: goto L_1156c98c;
    case 3: goto L_1156c9a0;
    default: x86_unimpl("switch@0x1156c855 out of table"); return;
  }
L_1156c85c:;
  /* 1156c85c mov eax, edi */
  EAX = (EDI);
  /* 1156c85e mov edx, 3 */
  EDX = (0x3u);
  /* 1156c863 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156c866 jb 0x1156c874 */
  if (C.cf) goto L_1156c874;
  /* 1156c868 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1156c86b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c86d jmp dword ptr [eax*4 + 0x1156c880] */
  switch (EAX) {
    case 1: goto L_1156c890;
    case 2: goto L_1156c8bc;
    case 3: goto L_1156c8e0;
    default: x86_unimpl("switch@0x1156c86d out of table"); return;
  }
L_1156c874:;
  /* 1156c874 jmp dword ptr [ecx*4 + 0x1156c978] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1156c978)))); return;
  /* 1156c87b nop  */
  /* nop */
L_1156c87c:;
  /* 1156c87c jmp dword ptr [ecx*4 + 0x1156c8fc] */
  switch (ECX) {
    case 0: goto L_1156c95f;
    case 1: goto L_1156c94c;
    case 2: goto L_1156c944;
    case 3: goto L_1156c93c;
    case 4: goto L_1156c934;
    case 5: goto L_1156c92c;
    case 6: goto L_1156c924;
    case 7: goto L_1156c91c;
    default: x86_unimpl("switch@0x1156c87c out of table"); return;
  }
  /* 1156c883 nop  */
  /* nop */
L_1156c890:;
  /* 1156c890 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c892 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156c894 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156c896 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156c899 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156c89c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156c89f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156c8a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156c8a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c8a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c8ae jb 0x1156c87c */
  if (C.cf) goto L_1156c87c;
  /* 1156c8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156c8b2 jmp dword ptr [edx*4 + 0x1156c968] */
  switch (EDX) {
    case 0: goto L_1156c978;
    case 1: goto L_1156c980;
    case 2: goto L_1156c98c;
    case 3: goto L_1156c9a0;
    default: x86_unimpl("switch@0x1156c8b2 out of table"); return;
  }
  /* 1156c8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156c8bc:;
  /* 1156c8bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c8be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156c8c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156c8c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156c8c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156c8c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156c8cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c8ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c8d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c8d4 jb 0x1156c87c */
  if (C.cf) goto L_1156c87c;
  /* 1156c8d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156c8d8 jmp dword ptr [edx*4 + 0x1156c968] */
  switch (EDX) {
    case 0: goto L_1156c978;
    case 1: goto L_1156c980;
    case 2: goto L_1156c98c;
    case 3: goto L_1156c9a0;
    default: x86_unimpl("switch@0x1156c8d8 out of table"); return;
  }
  /* 1156c8df nop  */
  /* nop */
L_1156c8e0:;
  /* 1156c8e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156c8e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156c8e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156c8e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1156c8e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156c8ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1156c8eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c8ee jb 0x1156c87c */
  if (C.cf) goto L_1156c87c;
  /* 1156c8f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156c8f2 jmp dword ptr [edx*4 + 0x1156c968] */
  switch (EDX) {
    case 0: goto L_1156c978;
    case 1: goto L_1156c980;
    case 2: goto L_1156c98c;
    case 3: goto L_1156c9a0;
    default: x86_unimpl("switch@0x1156c8f2 out of table"); return;
  }
  /* 1156c8f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156c91c:;
  /* 1156c91c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1156c920 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1156c924:;
  /* 1156c924 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1156c928 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1156c92c:;
  /* 1156c92c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1156c930 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1156c934:;
  /* 1156c934 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1156c938 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1156c93c:;
  /* 1156c93c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1156c940 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1156c944:;
  /* 1156c944 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1156c948 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1156c94c:;
  /* 1156c94c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1156c950 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1156c954 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1156c95b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156c95d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1156c95f:;
  /* 1156c95f jmp dword ptr [edx*4 + 0x1156c968] */
  switch (EDX) {
    case 0: goto L_1156c978;
    case 1: goto L_1156c980;
    case 2: goto L_1156c98c;
    case 3: goto L_1156c9a0;
    default: x86_unimpl("switch@0x1156c95f out of table"); return;
  }
  /* 1156c966 mov edi, edi */
  EDI = (EDI);
L_1156c978:;
  /* 1156c978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c97b pop esi */
  ESI = (pop32());
  /* 1156c97c pop edi */
  EDI = (pop32());
  /* 1156c97d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156c97e ret  */
  ESPCHK(0x1156c820u, _esp0);
  ESP += 4; return;
  /* 1156c97f nop  */
  /* nop */
L_1156c980:;
  /* 1156c980 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156c982 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156c984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c987 pop esi */
  ESI = (pop32());
  /* 1156c988 pop edi */
  EDI = (pop32());
  /* 1156c989 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156c98a ret  */
  ESPCHK(0x1156c820u, _esp0);
  ESP += 4; return;
  /* 1156c98b nop  */
  /* nop */
L_1156c98c:;
  /* 1156c98c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156c98e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156c990 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156c993 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156c996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c999 pop esi */
  ESI = (pop32());
  /* 1156c99a pop edi */
  EDI = (pop32());
  /* 1156c99b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156c99c ret  */
  ESPCHK(0x1156c820u, _esp0);
  ESP += 4; return;
  /* 1156c99d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156c9a0:;
  /* 1156c9a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156c9a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156c9a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156c9a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156c9aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156c9ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156c9b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156c9b3 pop esi */
  ESI = (pop32());
  /* 1156c9b4 pop edi */
  EDI = (pop32());
  /* 1156c9b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156c9b6 ret  */
  ESPCHK(0x1156c820u, _esp0);
  ESP += 4; return;
  /* 1156c9b7 nop  */
  /* nop */
L_1156c9b8:;
  /* 1156c9b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1156c9bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1156c9c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1156c9c6 jne 0x1156c9ec */
  if (!C.zf) goto L_1156c9ec;
  /* 1156c9c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156c9cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1156c9ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c9d1 jb 0x1156c9e0 */
  if (C.cf) goto L_1156c9e0;
  /* 1156c9d3 std  */
  C.df=1;
  /* 1156c9d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156c9d6 cld  */
  C.df=0;
  /* 1156c9d7 jmp dword ptr [edx*4 + 0x1156cb00] */
  switch (EDX) {
    case 0: goto L_1156cb10;
    case 1: goto L_1156cb18;
    case 2: goto L_1156cb28;
    case 3: goto L_1156cb3c;
    default: x86_unimpl("switch@0x1156c9d7 out of table"); return;
  }
  /* 1156c9de mov edi, edi */
  EDI = (EDI);
L_1156c9e0:;
  /* 1156c9e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156c9e2 jmp dword ptr [ecx*4 + 0x1156cab0] */
  switch (ECX) {
    case 0: goto L_1156caf7;
    default: x86_unimpl("switch@0x1156c9e2 out of table"); return;
  }
  /* 1156c9e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156c9ec:;
  /* 1156c9ec mov eax, edi */
  EAX = (EDI);
  /* 1156c9ee mov edx, 3 */
  EDX = (0x3u);
  /* 1156c9f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156c9f6 jb 0x1156ca04 */
  if (C.cf) goto L_1156ca04;
  /* 1156c9f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1156c9fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156c9fd jmp dword ptr [eax*4 + 0x1156ca08] */
  switch (EAX) {
    case 1: goto L_1156ca18;
    case 2: goto L_1156ca38;
    case 3: goto L_1156ca60;
    default: x86_unimpl("switch@0x1156c9fd out of table"); return;
  }
L_1156ca04:;
  /* 1156ca04 jmp dword ptr [ecx*4 + 0x1156cb00] */
  switch (ECX) {
    case 0: goto L_1156cb10;
    case 1: goto L_1156cb18;
    case 2: goto L_1156cb28;
    case 3: goto L_1156cb3c;
    default: x86_unimpl("switch@0x1156ca04 out of table"); return;
  }
  /* 1156ca0b nop  */
  /* nop */
L_1156ca18:;
  /* 1156ca18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156ca1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156ca1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156ca20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1156ca21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156ca24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1156ca25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ca28 jb 0x1156c9e0 */
  if (C.cf) goto L_1156c9e0;
  /* 1156ca2a std  */
  C.df=1;
  /* 1156ca2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156ca2d cld  */
  C.df=0;
  /* 1156ca2e jmp dword ptr [edx*4 + 0x1156cb00] */
  switch (EDX) {
    case 0: goto L_1156cb10;
    case 1: goto L_1156cb18;
    case 2: goto L_1156cb28;
    case 3: goto L_1156cb3c;
    default: x86_unimpl("switch@0x1156ca2e out of table"); return;
  }
  /* 1156ca35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156ca38:;
  /* 1156ca38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156ca3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156ca3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156ca40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156ca43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156ca46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156ca49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ca4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ca4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ca52 jb 0x1156c9e0 */
  if (C.cf) goto L_1156c9e0;
  /* 1156ca54 std  */
  C.df=1;
  /* 1156ca55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156ca57 cld  */
  C.df=0;
  /* 1156ca58 jmp dword ptr [edx*4 + 0x1156cb00] */
  switch (EDX) {
    case 0: goto L_1156cb10;
    case 1: goto L_1156cb18;
    case 2: goto L_1156cb28;
    case 3: goto L_1156cb3c;
    default: x86_unimpl("switch@0x1156ca58 out of table"); return;
  }
  /* 1156ca5f nop  */
  /* nop */
L_1156ca60:;
  /* 1156ca60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156ca63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156ca65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156ca68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156ca6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156ca6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156ca71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156ca74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156ca77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ca7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ca7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ca80 jb 0x1156c9e0 */
  if (C.cf) goto L_1156c9e0;
  /* 1156ca86 std  */
  C.df=1;
  /* 1156ca87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156ca89 cld  */
  C.df=0;
  /* 1156ca8a jmp dword ptr [edx*4 + 0x1156cb00] */
  switch (EDX) {
    case 0: goto L_1156cb10;
    case 1: goto L_1156cb18;
    case 2: goto L_1156cb28;
    case 3: goto L_1156cb3c;
    default: x86_unimpl("switch@0x1156ca8a out of table"); return;
  }
  /* 1156ca91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1156ca94 mov ah, 0xca */
  AH = (0xcau);
  /* 1156ca96 push esi */
  push32((uint32_t)(ESI));
  /* 1156ca97 adc dword ptr [edx + ecx*8 - 0x353beeaa], edi */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + -0x353beeaa))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*8 + -0x353beeaa), (_r)); fl_add(_a,_b,_r,32); }
  /* 1156ca9e push esi */
  push32((uint32_t)(ESI));
  /* 1156ca9f adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156caa1 retf 0x1156 */
  x86_unimpl("retf @ 0x1156caa1");
  /* 1156caa4 aam 0xca */
  x86_unimpl("aam @ 0x1156caa4");
  /* 1156caa6 push esi */
  push32((uint32_t)(ESI));
  /* 1156caa7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156caa9 retf 0x1156 */
  x86_unimpl("retf @ 0x1156caa9");
  /* 1156caac in al, 0xca */
  x86_unimpl("in @ 0x1156caac");
  /* 1156caae push esi */
  push32((uint32_t)(ESI));
  /* 1156cab4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1156cab8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1156cabc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1156cac0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1156cac4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1156cac8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1156cacc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1156cad0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1156cad4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1156cad8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1156cadc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1156cae0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1156cae4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1156cae8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1156caec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1156caf3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156caf5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1156caf7:;
  /* 1156caf7 jmp dword ptr [edx*4 + 0x1156cb00] */
  switch (EDX) {
    case 0: goto L_1156cb10;
    case 1: goto L_1156cb18;
    case 2: goto L_1156cb28;
    case 3: goto L_1156cb3c;
    default: x86_unimpl("switch@0x1156caf7 out of table"); return;
  }
  /* 1156cafe mov edi, edi */
  EDI = (EDI);
L_1156cb10:;
  /* 1156cb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156cb13 pop esi */
  ESI = (pop32());
  /* 1156cb14 pop edi */
  EDI = (pop32());
  /* 1156cb15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156cb16 ret  */
  ESPCHK(0x1156c820u, _esp0);
  ESP += 4; return;
  /* 1156cb17 nop  */
  /* nop */
L_1156cb18:;
  /* 1156cb18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156cb1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156cb1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156cb21 pop esi */
  ESI = (pop32());
  /* 1156cb22 pop edi */
  EDI = (pop32());
  /* 1156cb23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156cb24 ret  */
  ESPCHK(0x1156c820u, _esp0);
  ESP += 4; return;
  /* 1156cb25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156cb28:;
  /* 1156cb28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156cb2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156cb2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156cb31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156cb34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156cb37 pop esi */
  ESI = (pop32());
  /* 1156cb38 pop edi */
  EDI = (pop32());
  /* 1156cb39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156cb3a ret  */
  ESPCHK(0x1156c820u, _esp0);
  ESP += 4; return;
  /* 1156cb3b nop  */
  /* nop */
L_1156cb3c:;
  /* 1156cb3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156cb3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156cb42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156cb45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156cb48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156cb4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156cb4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156cb51 pop esi */
  ESI = (pop32());
  /* 1156cb52 pop edi */
  EDI = (pop32());
  /* 1156cb53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156cb54 ret  */
  ESPCHK(0x1156c820u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1156cb60 (104 bytes, 43 insns) */
void f_1156cb60(void) {
  FTRACE(0x1156cb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156cb60 push ebx */
  push32((uint32_t)(EBX));
  /* 1156cb61 push esi */
  push32((uint32_t)(ESI));
  /* 1156cb62 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1156cb66 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156cb68 jne 0x1156cb82 */
  if (!C.zf) goto L_1156cb82;
  /* 1156cb6a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1156cb6e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1156cb72 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156cb74 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1156cb76 mov ebx, eax */
  EBX = (EAX);
  /* 1156cb78 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1156cb7c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1156cb7e mov edx, ebx */
  EDX = (EBX);
  /* 1156cb80 jmp 0x1156cbc3 */
  goto L_1156cbc3;
L_1156cb82:;
  /* 1156cb82 mov ecx, eax */
  ECX = (EAX);
  /* 1156cb84 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1156cb88 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1156cb8c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1156cb90:;
  /* 1156cb90 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1156cb92 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1156cb94 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1156cb96 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1156cb98 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156cb9a jne 0x1156cb90 */
  if (!C.zf) goto L_1156cb90;
  /* 1156cb9c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1156cb9e mov esi, eax */
  ESI = (EAX);
  /* 1156cba0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1156cba4 mov ecx, eax */
  ECX = (EAX);
  /* 1156cba6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1156cbaa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1156cbac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156cbae jb 0x1156cbbe */
  if (C.cf) goto L_1156cbbe;
  /* 1156cbb0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cbb4 ja 0x1156cbbe */
  if ((!C.cf&&!C.zf)) goto L_1156cbbe;
  /* 1156cbb6 jb 0x1156cbbf */
  if (C.cf) goto L_1156cbbf;
  /* 1156cbb8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cbbc jbe 0x1156cbbf */
  if ((C.cf||C.zf)) goto L_1156cbbf;
L_1156cbbe:;
  /* 1156cbbe dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1156cbbf:;
  /* 1156cbbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156cbc1 mov eax, esi */
  EAX = (ESI);
L_1156cbc3:;
  /* 1156cbc3 pop esi */
  ESI = (pop32());
  /* 1156cbc4 pop ebx */
  EBX = (pop32());
  /* 1156cbc5 ret 0x10 */
  ESPCHK(0x1156cb60u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1156cbd0 (117 bytes, 44 insns) */
void f_1156cbd0(void) {
  FTRACE(0x1156cbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156cbd0 push ebx */
  push32((uint32_t)(EBX));
  /* 1156cbd1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1156cbd5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156cbd7 jne 0x1156cbf1 */
  if (!C.zf) goto L_1156cbf1;
  /* 1156cbd9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1156cbdd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1156cbe1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156cbe3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1156cbe5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1156cbe9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1156cbeb mov eax, edx */
  EAX = (EDX);
  /* 1156cbed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1156cbef jmp 0x1156cc41 */
  goto L_1156cc41;
L_1156cbf1:;
  /* 1156cbf1 mov ecx, eax */
  ECX = (EAX);
  /* 1156cbf3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1156cbf7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1156cbfb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1156cbff:;
  /* 1156cbff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1156cc01 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1156cc03 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1156cc05 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1156cc07 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156cc09 jne 0x1156cbff */
  if (!C.zf) goto L_1156cbff;
  /* 1156cc0b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1156cc0d mov ecx, eax */
  ECX = (EAX);
  /* 1156cc0f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1156cc13 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1156cc14 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1156cc18 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156cc1a jb 0x1156cc2a */
  if (C.cf) goto L_1156cc2a;
  /* 1156cc1c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cc20 ja 0x1156cc2a */
  if ((!C.cf&&!C.zf)) goto L_1156cc2a;
  /* 1156cc22 jb 0x1156cc32 */
  if (C.cf) goto L_1156cc32;
  /* 1156cc24 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cc28 jbe 0x1156cc32 */
  if ((C.cf||C.zf)) goto L_1156cc32;
L_1156cc2a:;
  /* 1156cc2a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156cc2e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1156cc32:;
  /* 1156cc32 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156cc36 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156cc3a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156cc3c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156cc3e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1156cc41:;
  /* 1156cc41 pop ebx */
  EBX = (pop32());
  /* 1156cc42 ret 0x10 */
  ESPCHK(0x1156cbd0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000cc50 @ 0x1156cc50 (628 bytes, 214 insns) */
void f_1156cc50(void) {
  FTRACE(0x1156cc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156cc50 push ebp */
  push32((uint32_t)(EBP));
  /* 1156cc51 mov ebp, esp */
  EBP = (ESP);
  /* 1156cc53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156cc56 push ebx */
  push32((uint32_t)(EBX));
  /* 1156cc57 push esi */
  push32((uint32_t)(ESI));
  /* 1156cc58 push edi */
  push32((uint32_t)(EDI));
L_1156cc59:;
  /* 1156cc59 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cc5d jne 0x1156cc7d */
  if (!C.zf) goto L_1156cc7d;
  /* 1156cc5f push 0x1158d000 */
  push32((uint32_t)(0x1158d000u));
  /* 1156cc64 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156cc66 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1156cc68 push 0x1158cff4 */
  push32((uint32_t)(0x1158cff4u));
  /* 1156cc6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1156cc6f call 0x11565000 */
  push32(0x1156cc74u); f_11565000();
  /* 1156cc74 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156cc77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cc7a jne 0x1156cc7d */
  if (!C.zf) goto L_1156cc7d;
  /* 1156cc7c int3  */
  x86_unimpl("int3 @ 0x1156cc7c");
L_1156cc7d:;
  /* 1156cc7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156cc7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156cc81 jne 0x1156cc59 */
  if (!C.zf) goto L_1156cc59;
  /* 1156cc83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156cc86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1156cc89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cc8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1156cc8f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1156cc92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cc95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156cc98 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1156cc9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156cca0 je 0x1156ccaf */
  if (C.zf) goto L_1156ccaf;
  /* 1156cca2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cca5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156cca8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1156ccab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156ccad je 0x1156ccc5 */
  if (C.zf) goto L_1156ccc5;
L_1156ccaf:;
  /* 1156ccaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ccb2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1156ccb5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1156ccb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ccba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1156ccbd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156ccc0 jmp 0x1156cebd */
  goto L_1156cebd;
L_1156ccc5:;
  /* 1156ccc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ccc8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1156cccb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1156ccce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156ccd0 je 0x1156cd1c */
  if (C.zf) goto L_1156cd1c;
  /* 1156ccd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ccd5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1156ccdc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ccdf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1156cce2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1156cce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156cce7 je 0x1156cd05 */
  if (C.zf) goto L_1156cd05;
  /* 1156cce9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ccec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ccef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1156ccf2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1156ccf4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ccf7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156ccfa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1156ccfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd00 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1156cd03 jmp 0x1156cd1c */
  goto L_1156cd1c;
L_1156cd05:;
  /* 1156cd05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd08 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156cd0b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1156cd0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd11 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1156cd14 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156cd17 jmp 0x1156cebd */
  goto L_1156cebd;
L_1156cd1c:;
  /* 1156cd1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd1f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156cd22 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1156cd25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd28 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1156cd2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd2e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156cd31 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1156cd34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd37 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1156cd3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd3d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1156cd44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156cd4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156cd4e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1156cd51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd54 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156cd57 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1156cd5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156cd5f jne 0x1156cd8f */
  if (!C.zf) goto L_1156cd8f;
  /* 1156cd61 cmp dword ptr [ebp - 8], 0x11590140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11590140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cd68 je 0x1156cd73 */
  if (C.zf) goto L_1156cd73;
  /* 1156cd6a cmp dword ptr [ebp - 8], 0x11590160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11590160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cd71 jne 0x1156cd83 */
  if (!C.zf) goto L_1156cd83;
L_1156cd73:;
  /* 1156cd73 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156cd76 push edx */
  push32((uint32_t)(EDX));
  /* 1156cd77 call 0x1156ebc0 */
  push32(0x1156cd7cu); f_1156ebc0();
  /* 1156cd7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156cd7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156cd81 jne 0x1156cd8f */
  if (!C.zf) goto L_1156cd8f;
L_1156cd83:;
  /* 1156cd83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd86 push eax */
  push32((uint32_t)(EAX));
  /* 1156cd87 call 0x1156eaf0 */
  push32(0x1156cd8cu); f_1156eaf0();
  /* 1156cd8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156cd8f:;
  /* 1156cd8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cd92 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156cd95 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1156cd9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156cd9d je 0x1156ce7b */
  if (C.zf) goto L_1156ce7b;
L_1156cda3:;
  /* 1156cda3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cda6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cda9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1156cdab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156cdae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156cdb0 jge 0x1156cdd3 */
  if ((C.sf==C.of)) goto L_1156cdd3;
  /* 1156cdb2 push 0x1158cfb4 */
  push32((uint32_t)(0x1158cfb4u));
  /* 1156cdb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156cdb9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1156cdbe push 0x1158cff4 */
  push32((uint32_t)(0x1158cff4u));
  /* 1156cdc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156cdc5 call 0x11565000 */
  push32(0x1156cdcau); f_11565000();
  /* 1156cdca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156cdcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cdd0 jne 0x1156cdd3 */
  if (!C.zf) goto L_1156cdd3;
  /* 1156cdd2 int3  */
  x86_unimpl("int3 @ 0x1156cdd2");
L_1156cdd3:;
  /* 1156cdd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156cdd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156cdd7 jne 0x1156cda3 */
  if (!C.zf) goto L_1156cda3;
  /* 1156cdd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cddc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cddf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1156cde1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156cde4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156cde7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cdea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1156cded add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156cdf0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cdf3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1156cdf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cdf8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1156cdfb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156cdfe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ce01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1156ce04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ce08 jle 0x1156ce26 */
  if ((C.zf||C.sf!=C.of)) goto L_1156ce26;
  /* 1156ce0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ce0d push ecx */
  push32((uint32_t)(ECX));
  /* 1156ce0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ce11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1156ce14 push eax */
  push32((uint32_t)(EAX));
  /* 1156ce15 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ce18 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ce19 call 0x1156e7e0 */
  push32(0x1156ce1eu); f_1156e7e0();
  /* 1156ce1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ce21 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1156ce24 jmp 0x1156ce6e */
  goto L_1156ce6e;
L_1156ce26:;
  /* 1156ce26 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ce2a je 0x1156ce49 */
  if (C.zf) goto L_1156ce49;
  /* 1156ce2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ce2f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1156ce32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ce35 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1156ce38 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ce3b mov ecx, dword ptr [edx*4 + 0x11593960] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11593960)));
  /* 1156ce42 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ce44 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1156ce47 jmp 0x1156ce50 */
  goto L_1156ce50;
L_1156ce49:;
  /* 1156ce49 mov dword ptr [ebp - 0x14], 0x1158fa60 */
  w32((uint32_t)(EBP + -0x14), (0x1158fa60u));
L_1156ce50:;
  /* 1156ce50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1156ce53 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1156ce57 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1156ce5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156ce5c je 0x1156ce6e */
  if (C.zf) goto L_1156ce6e;
  /* 1156ce5e push 2 */
  push32((uint32_t)(0x2u));
  /* 1156ce60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156ce62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ce65 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ce66 call 0x1156e690 */
  push32(0x1156ce6bu); f_1156e690();
  /* 1156ce6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156ce6e:;
  /* 1156ce6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156ce71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1156ce74 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1156ce77 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1156ce79 jmp 0x1156ce99 */
  goto L_1156ce99;
L_1156ce7b:;
  /* 1156ce7b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1156ce82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ce85 push edx */
  push32((uint32_t)(EDX));
  /* 1156ce86 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1156ce89 push eax */
  push32((uint32_t)(EAX));
  /* 1156ce8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ce8d push ecx */
  push32((uint32_t)(ECX));
  /* 1156ce8e call 0x1156e7e0 */
  push32(0x1156ce93u); f_1156e7e0();
  /* 1156ce93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ce96 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1156ce99:;
  /* 1156ce99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156ce9c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ce9f je 0x1156ceb5 */
  if (C.zf) goto L_1156ceb5;
  /* 1156cea1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cea4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156cea7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1156ceaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156cead mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1156ceb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156ceb3 jmp 0x1156cebd */
  goto L_1156cebd;
L_1156ceb5:;
  /* 1156ceb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ceb8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1156cebd:;
  /* 1156cebd pop edi */
  EDI = (pop32());
  /* 1156cebe pop esi */
  ESI = (pop32());
  /* 1156cebf pop ebx */
  EBX = (pop32());
  /* 1156cec0 mov esp, ebp */
  ESP = (EBP);
  /* 1156cec2 pop ebp */
  EBP = (pop32());
  /* 1156cec3 ret  */
  ESPCHK(0x1156cc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ced0 @ 0x1156ced0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1156ced0(void) {
  FTRACE(0x1156ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ced1 mov ebp, esp */
  EBP = (ESP);
  /* 1156ced3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ced9 push ebx */
  push32((uint32_t)(EBX));
  /* 1156ceda push esi */
  push32((uint32_t)(ESI));
  /* 1156cedb push edi */
  push32((uint32_t)(EDI));
  /* 1156cedc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1156cee3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1156ceed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1156cef4:;
  /* 1156cef4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156cef7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1156cef9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1156cefc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156cf00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156cf03 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156cf06 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1156cf09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156cf0b je 0x1156dae7 */
  if (C.zf) goto L_1156dae7;
  /* 1156cf11 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cf18 jl 0x1156dae7 */
  if ((C.sf!=C.of)) goto L_1156dae7;
  /* 1156cf1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156cf22 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cf25 jl 0x1156cf46 */
  if ((C.sf!=C.of)) goto L_1156cf46;
  /* 1156cf27 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156cf2b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cf2e jg 0x1156cf46 */
  if ((!C.zf&&C.sf==C.of)) goto L_1156cf46;
  /* 1156cf30 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156cf34 movsx ecx, byte ptr [eax + 0x1158cfec] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1158cfec))));
  /* 1156cf3b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1156cf3e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1156cf44 jmp 0x1156cf50 */
  goto L_1156cf50;
L_1156cf46:;
  /* 1156cf46 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1156cf50:;
  /* 1156cf50 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1156cf56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1156cf59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156cf5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156cf5f movsx edx, byte ptr [ecx + eax*8 + 0x1158d00c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1158d00c))));
  /* 1156cf67 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1156cf6a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1156cf6d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1156cf70 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1156cf76 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156cf7d ja 0x1156dae2 */
  if ((!C.cf&&!C.zf)) goto L_1156dae2;
  /* 1156cf83 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1156cf89 jmp dword ptr [ecx*4 + 0x1156daf4] */
  switch (ECX) {
    case 0: goto L_1156cf90;
    case 1: goto L_1156d02a;
    case 2: goto L_1156d06c;
    case 3: goto L_1156d0db;
    case 4: goto L_1156d133;
    case 5: goto L_1156d142;
    case 6: goto L_1156d18e;
    case 7: goto L_1156d221;
    case 8: goto L_1156d0b8;
    case 9: goto L_1156d0c3;
    case 10: goto L_1156d0ae;
    case 11: goto L_1156d0a3;
    case 12: goto L_1156d0ce;
    case 13: goto L_1156d0d6;
    default: x86_unimpl("switch@0x1156cf89 out of table"); return;
  }
L_1156cf90:;
  /* 1156cf90 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1156cf97 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156cf9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1156cfa0 mov eax, dword ptr [0x1158fc98] */
  EAX = (r32((uint32_t)(0x1158fc98)));
  /* 1156cfa5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156cfa7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1156cfab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1156cfb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156cfb3 je 0x1156d00d */
  if (C.zf) goto L_1156d00d;
  /* 1156cfb5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1156cfbb push edx */
  push32((uint32_t)(EDX));
  /* 1156cfbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156cfbf push eax */
  push32((uint32_t)(EAX));
  /* 1156cfc0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156cfc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1156cfc5 call 0x1156dc00 */
  push32(0x1156cfcau); f_1156dc00();
  /* 1156cfca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156cfcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156cfd0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1156cfd2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1156cfd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156cfd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156cfdb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1156cfde:;
  /* 1156cfde movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156cfe2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156cfe4 jne 0x1156d007 */
  if (!C.zf) goto L_1156d007;
  /* 1156cfe6 push 0x1158d08c */
  push32((uint32_t)(0x1158d08cu));
  /* 1156cfeb push 0 */
  push32((uint32_t)(0x0u));
  /* 1156cfed push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1156cff2 push 0x1158d080 */
  push32((uint32_t)(0x1158d080u));
  /* 1156cff7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156cff9 call 0x11565000 */
  push32(0x1156cffeu); f_11565000();
  /* 1156cffe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d001 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d004 jne 0x1156d007 */
  if (!C.zf) goto L_1156d007;
  /* 1156d006 int3  */
  x86_unimpl("int3 @ 0x1156d006");
L_1156d007:;
  /* 1156d007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156d009 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d00b jne 0x1156cfde */
  if (!C.zf) goto L_1156cfde;
L_1156d00d:;
  /* 1156d00d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1156d013 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156d017 push edx */
  push32((uint32_t)(EDX));
  /* 1156d018 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d01c push eax */
  push32((uint32_t)(EAX));
  /* 1156d01d call 0x1156dc00 */
  push32(0x1156d022u); f_1156dc00();
  /* 1156d022 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d025 jmp 0x1156dae2 */
  goto L_1156dae2;
L_1156d02a:;
  /* 1156d02a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1156d031 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156d034 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1156d03a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1156d040 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1156d046 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1156d04c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1156d04f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156d056 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1156d060 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1156d067 jmp 0x1156dae2 */
  goto L_1156dae2;
L_1156d06c:;
  /* 1156d06c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d070 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1156d076 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1156d07c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d07f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1156d085 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d08c ja 0x1156d0d6 */
  if ((!C.cf&&!C.zf)) goto L_1156d0d6;
  /* 1156d08e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1156d094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156d096 mov al, byte ptr [ecx + 0x1156db2c] */
  AL = (r8((uint32_t)(ECX + 0x1156db2c)));
  /* 1156d09c jmp dword ptr [eax*4 + 0x1156db14] */
  switch (EAX) {
    case 0: goto L_1156d0b8;
    case 1: goto L_1156d0c3;
    case 2: goto L_1156d0ae;
    case 3: goto L_1156d0a3;
    case 4: goto L_1156d0ce;
    case 5: goto L_1156d0d6;
    default: x86_unimpl("switch@0x1156d09c out of table"); return;
  }
L_1156d0a3:;
  /* 1156d0a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d0a6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d0a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156d0ac jmp 0x1156d0d6 */
  goto L_1156d0d6;
L_1156d0ae:;
  /* 1156d0ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d0b1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1156d0b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156d0b6 jmp 0x1156d0d6 */
  goto L_1156d0d6;
L_1156d0b8:;
  /* 1156d0b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d0bb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1156d0be mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156d0c1 jmp 0x1156d0d6 */
  goto L_1156d0d6;
L_1156d0c3:;
  /* 1156d0c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d0c6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1156d0c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156d0cc jmp 0x1156d0d6 */
  goto L_1156d0d6;
L_1156d0ce:;
  /* 1156d0ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d0d1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1156d0d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1156d0d6:;
  /* 1156d0d6 jmp 0x1156dae2 */
  goto L_1156dae2;
L_1156d0db:;
  /* 1156d0db movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d0df cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d0e2 jne 0x1156d117 */
  if (!C.zf) goto L_1156d117;
  /* 1156d0e4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1156d0e7 push edx */
  push32((uint32_t)(EDX));
  /* 1156d0e8 call 0x1156dd10 */
  push32(0x1156d0edu); f_1156dd10();
  /* 1156d0ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d0f0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1156d0f6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d0fd jge 0x1156d115 */
  if ((C.sf==C.of)) goto L_1156d115;
  /* 1156d0ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d102 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1156d104 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156d107 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1156d10d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156d10f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1156d115:;
  /* 1156d115 jmp 0x1156d12e */
  goto L_1156d12e;
L_1156d117:;
  /* 1156d117 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1156d11d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156d120 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d124 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1156d128 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1156d12e:;
  /* 1156d12e jmp 0x1156dae2 */
  goto L_1156dae2;
L_1156d133:;
  /* 1156d133 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1156d13d jmp 0x1156dae2 */
  goto L_1156dae2;
L_1156d142:;
  /* 1156d142 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d146 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d149 jne 0x1156d172 */
  if (!C.zf) goto L_1156d172;
  /* 1156d14b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1156d14e push eax */
  push32((uint32_t)(EAX));
  /* 1156d14f call 0x1156dd10 */
  push32(0x1156d154u); f_1156dd10();
  /* 1156d154 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d157 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1156d15d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d164 jge 0x1156d170 */
  if ((C.sf==C.of)) goto L_1156d170;
  /* 1156d166 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1156d170:;
  /* 1156d170 jmp 0x1156d189 */
  goto L_1156d189;
L_1156d172:;
  /* 1156d172 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1156d178 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156d17b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d17f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1156d183 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1156d189:;
  /* 1156d189 jmp 0x1156dae2 */
  goto L_1156dae2;
L_1156d18e:;
  /* 1156d18e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d192 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1156d198 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1156d19e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d1a1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1156d1a7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d1ae ja 0x1156d21c */
  if ((!C.cf&&!C.zf)) goto L_1156d21c;
  /* 1156d1b0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1156d1b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156d1b8 mov al, byte ptr [ecx + 0x1156db51] */
  AL = (r8((uint32_t)(ECX + 0x1156db51)));
  /* 1156d1be jmp dword ptr [eax*4 + 0x1156db3d] */
  switch (EAX) {
    case 0: goto L_1156d1d0;
    case 1: goto L_1156d209;
    case 2: goto L_1156d1c5;
    case 3: goto L_1156d213;
    case 4: goto L_1156d21c;
    default: x86_unimpl("switch@0x1156d1be out of table"); return;
  }
L_1156d1c5:;
  /* 1156d1c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d1c8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d1cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156d1ce jmp 0x1156d21c */
  goto L_1156d21c;
L_1156d1d0:;
  /* 1156d1d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156d1d3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1156d1d6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d1d9 jne 0x1156d1fb */
  if (!C.zf) goto L_1156d1fb;
  /* 1156d1db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156d1de movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1156d1e2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d1e5 jne 0x1156d1fb */
  if (!C.zf) goto L_1156d1fb;
  /* 1156d1e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156d1ea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d1ed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1156d1f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d1f3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1156d1f6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156d1f9 jmp 0x1156d207 */
  goto L_1156d207;
L_1156d1fb:;
  /* 1156d1fb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1156d202 jmp 0x1156cf90 */
  goto L_1156cf90;
L_1156d207:;
  /* 1156d207 jmp 0x1156d21c */
  goto L_1156d21c;
L_1156d209:;
  /* 1156d209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d20c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1156d20e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156d211 jmp 0x1156d21c */
  goto L_1156d21c;
L_1156d213:;
  /* 1156d213 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d216 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1156d219 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1156d21c:;
  /* 1156d21c jmp 0x1156dae2 */
  goto L_1156dae2;
L_1156d221:;
  /* 1156d221 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d225 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1156d22b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1156d231 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d234 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1156d23a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d241 ja 0x1156d907 */
  if ((!C.cf&&!C.zf)) goto L_1156d907;
  /* 1156d247 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1156d24d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156d24f mov cl, byte ptr [edx + 0x1156dbbc] */
  CL = (r8((uint32_t)(EDX + 0x1156dbbc)));
  /* 1156d255 jmp dword ptr [ecx*4 + 0x1156db80] */
  switch (ECX) {
    case 0: goto L_1156d25c;
    case 1: goto L_1156d4f0;
    case 2: goto L_1156d380;
    case 3: goto L_1156d629;
    case 4: goto L_1156d2eb;
    case 5: goto L_1156d271;
    case 6: goto L_1156d5fb;
    case 7: goto L_1156d500;
    case 8: goto L_1156d4a5;
    case 9: goto L_1156d675;
    case 10: goto L_1156d61f;
    case 11: goto L_1156d396;
    case 12: goto L_1156d613;
    case 13: goto L_1156d635;
    case 14: goto L_1156d907;
    default: x86_unimpl("switch@0x1156d255 out of table"); return;
  }
L_1156d25c:;
  /* 1156d25c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d25f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d266 jne 0x1156d271 */
  if (!C.zf) goto L_1156d271;
  /* 1156d268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d26b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1156d26e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1156d271:;
  /* 1156d271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d274 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d27a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d27c je 0x1156d2b7 */
  if (C.zf) goto L_1156d2b7;
  /* 1156d27e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1156d281 push eax */
  push32((uint32_t)(EAX));
  /* 1156d282 call 0x1156dd50 */
  push32(0x1156d287u); f_1156dd50();
  /* 1156d287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d28a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1156d28e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1156d292 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d293 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1156d299 push edx */
  push32((uint32_t)(EDX));
  /* 1156d29a call 0x1156ee30 */
  push32(0x1156d29fu); f_1156ee30();
  /* 1156d29f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d2a2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1156d2a5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d2a9 jge 0x1156d2b5 */
  if ((C.sf==C.of)) goto L_1156d2b5;
  /* 1156d2ab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1156d2b5:;
  /* 1156d2b5 jmp 0x1156d2dd */
  goto L_1156d2dd;
L_1156d2b7:;
  /* 1156d2b7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1156d2ba push eax */
  push32((uint32_t)(EAX));
  /* 1156d2bb call 0x1156dd10 */
  push32(0x1156d2c0u); f_1156dd10();
  /* 1156d2c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d2c3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1156d2ca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1156d2d0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1156d2d6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1156d2dd:;
  /* 1156d2dd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1156d2e3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1156d2e6 jmp 0x1156d907 */
  goto L_1156d907;
L_1156d2eb:;
  /* 1156d2eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1156d2ee push eax */
  push32((uint32_t)(EAX));
  /* 1156d2ef call 0x1156dd10 */
  push32(0x1156d2f4u); f_1156dd10();
  /* 1156d2f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d2f7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1156d2fd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d304 je 0x1156d312 */
  if (C.zf) goto L_1156d312;
  /* 1156d306 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1156d30c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d310 jne 0x1156d32c */
  if (!C.zf) goto L_1156d32c;
L_1156d312:;
  /* 1156d312 mov edx, dword ptr [0x1158ffb0] */
  EDX = (r32((uint32_t)(0x1158ffb0)));
  /* 1156d318 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1156d31b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d31e push eax */
  push32((uint32_t)(EAX));
  /* 1156d31f call 0x11568d70 */
  push32(0x1156d324u); f_11568d70();
  /* 1156d324 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d327 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1156d32a jmp 0x1156d37b */
  goto L_1156d37b;
L_1156d32c:;
  /* 1156d32c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d32f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1156d335 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156d337 je 0x1156d35c */
  if (C.zf) goto L_1156d35c;
  /* 1156d339 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1156d33f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1156d342 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1156d345 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1156d34b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1156d34e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1156d350 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1156d353 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1156d35a jmp 0x1156d37b */
  goto L_1156d37b;
L_1156d35c:;
  /* 1156d35c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1156d363 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1156d369 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156d36c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1156d36f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1156d375 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1156d378 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1156d37b:;
  /* 1156d37b jmp 0x1156d907 */
  goto L_1156d907;
L_1156d380:;
  /* 1156d380 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d383 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1156d389 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156d38b jne 0x1156d396 */
  if (!C.zf) goto L_1156d396;
  /* 1156d38d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d390 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1156d393 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1156d396:;
  /* 1156d396 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d39d jne 0x1156d3ab */
  if (!C.zf) goto L_1156d3ab;
  /* 1156d39f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1156d3a9 jmp 0x1156d3b7 */
  goto L_1156d3b7;
L_1156d3ab:;
  /* 1156d3ab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1156d3b1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1156d3b7:;
  /* 1156d3b7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1156d3bd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1156d3c3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1156d3c6 push edx */
  push32((uint32_t)(EDX));
  /* 1156d3c7 call 0x1156dd10 */
  push32(0x1156d3ccu); f_1156dd10();
  /* 1156d3cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d3cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1156d3d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d3d5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d3da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d3dc je 0x1156d446 */
  if (C.zf) goto L_1156d446;
  /* 1156d3de cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d3e2 jne 0x1156d3ed */
  if (!C.zf) goto L_1156d3ed;
  /* 1156d3e4 mov ecx, dword ptr [0x1158ffb4] */
  ECX = (r32((uint32_t)(0x1158ffb4)));
  /* 1156d3ea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1156d3ed:;
  /* 1156d3ed mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1156d3f4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d3f7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1156d3fd:;
  /* 1156d3fd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1156d403 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1156d409 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d40c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1156d412 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d414 je 0x1156d436 */
  if (C.zf) goto L_1156d436;
  /* 1156d416 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1156d41c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156d41e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1156d421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d423 je 0x1156d436 */
  if (C.zf) goto L_1156d436;
  /* 1156d425 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1156d42b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d42e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1156d434 jmp 0x1156d3fd */
  goto L_1156d3fd;
L_1156d436:;
  /* 1156d436 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1156d43c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d43f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1156d441 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1156d444 jmp 0x1156d4a0 */
  goto L_1156d4a0;
L_1156d446:;
  /* 1156d446 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d44a jne 0x1156d454 */
  if (!C.zf) goto L_1156d454;
  /* 1156d44c mov eax, dword ptr [0x1158ffb0] */
  EAX = (r32((uint32_t)(0x1158ffb0)));
  /* 1156d451 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1156d454:;
  /* 1156d454 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d457 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1156d45d:;
  /* 1156d45d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1156d463 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1156d469 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d46c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1156d472 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d474 je 0x1156d494 */
  if (C.zf) goto L_1156d494;
  /* 1156d476 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1156d47c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1156d47f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d481 je 0x1156d494 */
  if (C.zf) goto L_1156d494;
  /* 1156d483 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1156d489 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d48c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1156d492 jmp 0x1156d45d */
  goto L_1156d45d;
L_1156d494:;
  /* 1156d494 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1156d49a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d49d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1156d4a0:;
  /* 1156d4a0 jmp 0x1156d907 */
  goto L_1156d907;
L_1156d4a5:;
  /* 1156d4a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1156d4a8 push edx */
  push32((uint32_t)(EDX));
  /* 1156d4a9 call 0x1156dd10 */
  push32(0x1156d4aeu); f_1156dd10();
  /* 1156d4ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d4b1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1156d4b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d4ba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d4bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d4bf je 0x1156d4d3 */
  if (C.zf) goto L_1156d4d3;
  /* 1156d4c1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1156d4c7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1156d4ce mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1156d4d1 jmp 0x1156d4e1 */
  goto L_1156d4e1;
L_1156d4d3:;
  /* 1156d4d3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1156d4d9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1156d4df mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1156d4e1:;
  /* 1156d4e1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1156d4eb jmp 0x1156d907 */
  goto L_1156d907;
L_1156d4f0:;
  /* 1156d4f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1156d4f7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1156d4fa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1156d4fd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1156d500:;
  /* 1156d500 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d503 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1156d505 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156d508 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1156d50e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1156d511 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d518 jge 0x1156d526 */
  if ((C.sf==C.of)) goto L_1156d526;
  /* 1156d51a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1156d524 jmp 0x1156d542 */
  goto L_1156d542;
L_1156d526:;
  /* 1156d526 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d52d jne 0x1156d542 */
  if (!C.zf) goto L_1156d542;
  /* 1156d52f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d533 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d536 jne 0x1156d542 */
  if (!C.zf) goto L_1156d542;
  /* 1156d538 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1156d542:;
  /* 1156d542 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156d545 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d548 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1156d54b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156d54e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d551 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156d553 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156d556 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1156d55c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1156d562 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156d565 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d566 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1156d56c push edx */
  push32((uint32_t)(EDX));
  /* 1156d56d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d571 push eax */
  push32((uint32_t)(EAX));
  /* 1156d572 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d575 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d576 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1156d57c push edx */
  push32((uint32_t)(EDX));
  /* 1156d57d call dword ptr [0x115903a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115903a0))), 0x1156d583u);
  /* 1156d583 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d589 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d58e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d590 je 0x1156d5a8 */
  if (C.zf) goto L_1156d5a8;
  /* 1156d592 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d599 jne 0x1156d5a8 */
  if (!C.zf) goto L_1156d5a8;
  /* 1156d59b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d59e push ecx */
  push32((uint32_t)(ECX));
  /* 1156d59f call dword ptr [0x115903ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x115903ac))), 0x1156d5a5u);
  /* 1156d5a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156d5a8:;
  /* 1156d5a8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1156d5ac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d5af jne 0x1156d5ca */
  if (!C.zf) goto L_1156d5ca;
  /* 1156d5b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d5b4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d5b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d5bb jne 0x1156d5ca */
  if (!C.zf) goto L_1156d5ca;
  /* 1156d5bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d5c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d5c1 call dword ptr [0x115903a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115903a4))), 0x1156d5c7u);
  /* 1156d5c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156d5ca:;
  /* 1156d5ca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d5cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1156d5d0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d5d3 jne 0x1156d5e7 */
  if (!C.zf) goto L_1156d5e7;
  /* 1156d5d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d5d8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1156d5db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156d5de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d5e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d5e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1156d5e7:;
  /* 1156d5e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d5ea push eax */
  push32((uint32_t)(EAX));
  /* 1156d5eb call 0x11568d70 */
  push32(0x1156d5f0u); f_11568d70();
  /* 1156d5f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d5f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1156d5f6 jmp 0x1156d907 */
  goto L_1156d907;
L_1156d5fb:;
  /* 1156d5fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d5fe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1156d601 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156d604 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1156d60e jmp 0x1156d695 */
  goto L_1156d695;
L_1156d613:;
  /* 1156d613 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1156d61d jmp 0x1156d695 */
  goto L_1156d695;
L_1156d61f:;
  /* 1156d61f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1156d629:;
  /* 1156d629 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1156d633 jmp 0x1156d63f */
  goto L_1156d63f;
L_1156d635:;
  /* 1156d635 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1156d63f:;
  /* 1156d63f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1156d649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d64c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d652 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d654 je 0x1156d673 */
  if (C.zf) goto L_1156d673;
  /* 1156d656 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1156d65d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1156d663 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d666 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1156d66c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1156d673:;
  /* 1156d673 jmp 0x1156d695 */
  goto L_1156d695;
L_1156d675:;
  /* 1156d675 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1156d67f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d682 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1156d688 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156d68a je 0x1156d695 */
  if (C.zf) goto L_1156d695;
  /* 1156d68c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d68f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1156d692 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1156d695:;
  /* 1156d695 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d698 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d69d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d69f je 0x1156d6be */
  if (C.zf) goto L_1156d6be;
  /* 1156d6a1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1156d6a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d6a5 call 0x1156dd30 */
  push32(0x1156d6aau); f_1156dd30();
  /* 1156d6aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d6ad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1156d6b3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1156d6b9 jmp 0x1156d74f */
  goto L_1156d74f;
L_1156d6be:;
  /* 1156d6be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d6c1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d6c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d6c6 je 0x1156d710 */
  if (C.zf) goto L_1156d710;
  /* 1156d6c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d6cb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d6ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d6d0 je 0x1156d6f0 */
  if (C.zf) goto L_1156d6f0;
  /* 1156d6d2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1156d6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d6d6 call 0x1156dd10 */
  push32(0x1156d6dbu); f_1156dd10();
  /* 1156d6db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d6de movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1156d6e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1156d6e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1156d6e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1156d6ee jmp 0x1156d70e */
  goto L_1156d70e;
L_1156d6f0:;
  /* 1156d6f0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1156d6f3 push edx */
  push32((uint32_t)(EDX));
  /* 1156d6f4 call 0x1156dd10 */
  push32(0x1156d6f9u); f_1156dd10();
  /* 1156d6f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d6fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156d701 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1156d702 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1156d708 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1156d70e:;
  /* 1156d70e jmp 0x1156d74f */
  goto L_1156d74f;
L_1156d710:;
  /* 1156d710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d713 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d718 je 0x1156d735 */
  if (C.zf) goto L_1156d735;
  /* 1156d71a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1156d71d push ecx */
  push32((uint32_t)(ECX));
  /* 1156d71e call 0x1156dd10 */
  push32(0x1156d723u); f_1156dd10();
  /* 1156d723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d726 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1156d727 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1156d72d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1156d733 jmp 0x1156d74f */
  goto L_1156d74f;
L_1156d735:;
  /* 1156d735 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1156d738 push edx */
  push32((uint32_t)(EDX));
  /* 1156d739 call 0x1156dd10 */
  push32(0x1156d73eu); f_1156dd10();
  /* 1156d73e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d741 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1156d743 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1156d749 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1156d74f:;
  /* 1156d74f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d752 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d755 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d757 je 0x1156d797 */
  if (C.zf) goto L_1156d797;
  /* 1156d759 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d760 jg 0x1156d797 */
  if ((!C.zf&&C.sf==C.of)) goto L_1156d797;
  /* 1156d762 jl 0x1156d76d */
  if ((C.sf!=C.of)) goto L_1156d76d;
  /* 1156d764 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d76b jae 0x1156d797 */
  if (!C.cf) goto L_1156d797;
L_1156d76d:;
  /* 1156d76d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1156d773 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156d775 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1156d77b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d77e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156d780 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1156d786 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1156d78c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d78f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1156d792 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156d795 jmp 0x1156d7af */
  goto L_1156d7af;
L_1156d797:;
  /* 1156d797 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1156d79d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1156d7a3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1156d7a9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1156d7af:;
  /* 1156d7af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d7b2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d7b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d7ba jne 0x1156d7d7 */
  if (!C.zf) goto L_1156d7d7;
  /* 1156d7bc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1156d7c2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1156d7c8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1156d7cb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1156d7d1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1156d7d7:;
  /* 1156d7d7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d7de jge 0x1156d7ec */
  if ((C.sf==C.of)) goto L_1156d7ec;
  /* 1156d7e0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1156d7ea jmp 0x1156d7f5 */
  goto L_1156d7f5;
L_1156d7ec:;
  /* 1156d7ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d7ef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d7f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1156d7f5:;
  /* 1156d7f5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1156d7fb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1156d801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d803 jne 0x1156d80c */
  if (!C.zf) goto L_1156d80c;
  /* 1156d805 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1156d80c:;
  /* 1156d80c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1156d80f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1156d812:;
  /* 1156d812 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1156d818 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1156d81e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d821 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1156d827 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d829 jg 0x1156d83f */
  if ((!C.zf&&C.sf==C.of)) goto L_1156d83f;
  /* 1156d82b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1156d831 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1156d837 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156d839 je 0x1156d8c0 */
  if (C.zf) goto L_1156d8c0;
L_1156d83f:;
  /* 1156d83f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1156d845 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1156d846 push edx */
  push32((uint32_t)(EDX));
  /* 1156d847 push eax */
  push32((uint32_t)(EAX));
  /* 1156d848 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1156d84e push edx */
  push32((uint32_t)(EDX));
  /* 1156d84f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1156d855 push eax */
  push32((uint32_t)(EAX));
  /* 1156d856 call 0x1156cbd0 */
  push32(0x1156d85bu); f_1156cbd0();
  /* 1156d85b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d85e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1156d864 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1156d86a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1156d86b push edx */
  push32((uint32_t)(EDX));
  /* 1156d86c push eax */
  push32((uint32_t)(EAX));
  /* 1156d86d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1156d873 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d874 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1156d87a push edx */
  push32((uint32_t)(EDX));
  /* 1156d87b call 0x1156cb60 */
  push32(0x1156d880u); f_1156cb60();
  /* 1156d880 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1156d886 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1156d88c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d893 jle 0x1156d8a7 */
  if ((C.zf||C.sf!=C.of)) goto L_1156d8a7;
  /* 1156d895 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1156d89b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d8a1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1156d8a7:;
  /* 1156d8a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d8aa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1156d8b0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1156d8b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d8b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d8b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1156d8bb jmp 0x1156d812 */
  goto L_1156d812;
L_1156d8c0:;
  /* 1156d8c0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1156d8c3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d8c6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1156d8c9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d8cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d8cf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1156d8d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d8d5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d8da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d8dc je 0x1156d907 */
  if (C.zf) goto L_1156d907;
  /* 1156d8de mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d8e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1156d8e4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d8e7 jne 0x1156d8ef */
  if (!C.zf) goto L_1156d8ef;
  /* 1156d8e9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d8ed jne 0x1156d907 */
  if (!C.zf) goto L_1156d907;
L_1156d8ef:;
  /* 1156d8ef mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d8f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d8f5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1156d8f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156d8fb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1156d8fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156d901 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d904 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1156d907:;
  /* 1156d907 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d90e jne 0x1156dae2 */
  if (!C.zf) goto L_1156dae2;
  /* 1156d914 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d917 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d91a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d91c je 0x1156d96d */
  if (C.zf) goto L_1156d96d;
  /* 1156d91e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d921 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1156d927 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156d929 je 0x1156d93b */
  if (C.zf) goto L_1156d93b;
  /* 1156d92b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1156d932 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1156d939 jmp 0x1156d96d */
  goto L_1156d96d;
L_1156d93b:;
  /* 1156d93b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d93e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d941 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d943 je 0x1156d955 */
  if (C.zf) goto L_1156d955;
  /* 1156d945 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1156d94c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1156d953 jmp 0x1156d96d */
  goto L_1156d96d;
L_1156d955:;
  /* 1156d955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d958 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1156d95b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156d95d je 0x1156d96d */
  if (C.zf) goto L_1156d96d;
  /* 1156d95f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1156d966 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1156d96d:;
  /* 1156d96d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1156d973 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d976 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156d979 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1156d97f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d982 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1156d985 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d987 jne 0x1156d9a5 */
  if (!C.zf) goto L_1156d9a5;
  /* 1156d989 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1156d98f push eax */
  push32((uint32_t)(EAX));
  /* 1156d990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156d993 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d994 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1156d99a push edx */
  push32((uint32_t)(EDX));
  /* 1156d99b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1156d99d call 0x1156dc80 */
  push32(0x1156d9a2u); f_1156dc80();
  /* 1156d9a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156d9a5:;
  /* 1156d9a5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1156d9ab push eax */
  push32((uint32_t)(EAX));
  /* 1156d9ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156d9af push ecx */
  push32((uint32_t)(ECX));
  /* 1156d9b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156d9b3 push edx */
  push32((uint32_t)(EDX));
  /* 1156d9b4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1156d9ba push eax */
  push32((uint32_t)(EAX));
  /* 1156d9bb call 0x1156dcc0 */
  push32(0x1156d9c0u); f_1156dcc0();
  /* 1156d9c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156d9c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d9c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1156d9c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156d9cb je 0x1156d9f3 */
  if (C.zf) goto L_1156d9f3;
  /* 1156d9cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156d9d0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1156d9d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156d9d5 jne 0x1156d9f3 */
  if (!C.zf) goto L_1156d9f3;
  /* 1156d9d7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1156d9dd push eax */
  push32((uint32_t)(EAX));
  /* 1156d9de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156d9e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1156d9e2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1156d9e8 push edx */
  push32((uint32_t)(EDX));
  /* 1156d9e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1156d9eb call 0x1156dc80 */
  push32(0x1156d9f0u); f_1156dc80();
  /* 1156d9f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156d9f3:;
  /* 1156d9f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156d9f7 je 0x1156daa1 */
  if (C.zf) goto L_1156daa1;
  /* 1156d9fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156da01 jle 0x1156daa1 */
  if ((C.zf||C.sf!=C.of)) goto L_1156daa1;
  /* 1156da07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156da0a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1156da10 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156da13 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1156da19:;
  /* 1156da19 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1156da1f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1156da25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156da28 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1156da2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156da30 je 0x1156da9f */
  if (C.zf) goto L_1156da9f;
  /* 1156da32 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1156da38 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1156da3b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1156da42 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1156da49 push eax */
  push32((uint32_t)(EAX));
  /* 1156da4a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1156da50 push ecx */
  push32((uint32_t)(ECX));
  /* 1156da51 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1156da57 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156da5a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1156da60 call 0x1156ee30 */
  push32(0x1156da65u); f_1156ee30();
  /* 1156da65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156da68 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1156da6e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156da75 jg 0x1156da79 */
  if ((!C.zf&&C.sf==C.of)) goto L_1156da79;
  /* 1156da77 jmp 0x1156da9f */
  goto L_1156da9f;
L_1156da79:;
  /* 1156da79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1156da7f push eax */
  push32((uint32_t)(EAX));
  /* 1156da80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156da83 push ecx */
  push32((uint32_t)(ECX));
  /* 1156da84 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1156da8a push edx */
  push32((uint32_t)(EDX));
  /* 1156da8b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1156da91 push eax */
  push32((uint32_t)(EAX));
  /* 1156da92 call 0x1156dcc0 */
  push32(0x1156da97u); f_1156dcc0();
  /* 1156da97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156da9a jmp 0x1156da19 */
  goto L_1156da19;
L_1156da9f:;
  /* 1156da9f jmp 0x1156dabc */
  goto L_1156dabc;
L_1156daa1:;
  /* 1156daa1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1156daa7 push ecx */
  push32((uint32_t)(ECX));
  /* 1156daa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156daab push edx */
  push32((uint32_t)(EDX));
  /* 1156daac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156daaf push eax */
  push32((uint32_t)(EAX));
  /* 1156dab0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156dab3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156dab4 call 0x1156dcc0 */
  push32(0x1156dab9u); f_1156dcc0();
  /* 1156dab9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156dabc:;
  /* 1156dabc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156dabf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1156dac2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156dac4 je 0x1156dae2 */
  if (C.zf) goto L_1156dae2;
  /* 1156dac6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1156dacc push eax */
  push32((uint32_t)(EAX));
  /* 1156dacd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dad0 push ecx */
  push32((uint32_t)(ECX));
  /* 1156dad1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1156dad7 push edx */
  push32((uint32_t)(EDX));
  /* 1156dad8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1156dada call 0x1156dc80 */
  push32(0x1156dadfu); f_1156dc80();
  /* 1156dadf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156dae2:;
  /* 1156dae2 jmp 0x1156cef4 */
  goto L_1156cef4;
L_1156dae7:;
  /* 1156dae7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1156daed pop edi */
  EDI = (pop32());
  /* 1156daee pop esi */
  ESI = (pop32());
  /* 1156daef pop ebx */
  EBX = (pop32());
  /* 1156daf0 mov esp, ebp */
  ESP = (EBP);
  /* 1156daf2 pop ebp */
  EBP = (pop32());
  /* 1156daf3 ret  */
  ESPCHK(0x1156ced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc00 @ 0x1156dc00 (119 bytes, 44 insns) */
void f_1156dc00(void) {
  FTRACE(0x1156dc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156dc00 push ebp */
  push32((uint32_t)(EBP));
  /* 1156dc01 mov ebp, esp */
  EBP = (ESP);
  /* 1156dc03 push ecx */
  push32((uint32_t)(ECX));
  /* 1156dc04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dc07 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1156dc0a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156dc0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dc10 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1156dc13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dc16 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156dc1a jl 0x1156dc42 */
  if ((C.sf!=C.of)) goto L_1156dc42;
  /* 1156dc1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dc1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1156dc21 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1156dc24 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1156dc26 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1156dc2a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1156dc30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156dc33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dc36 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156dc38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dc3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dc3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1156dc40 jmp 0x1156dc55 */
  goto L_1156dc55;
L_1156dc42:;
  /* 1156dc42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dc45 push edx */
  push32((uint32_t)(EDX));
  /* 1156dc46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dc49 push eax */
  push32((uint32_t)(EAX));
  /* 1156dc4a call 0x1156cc50 */
  push32(0x1156dc4fu); f_1156cc50();
  /* 1156dc4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dc52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1156dc55:;
  /* 1156dc55 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156dc59 jne 0x1156dc66 */
  if (!C.zf) goto L_1156dc66;
  /* 1156dc5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156dc5e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1156dc64 jmp 0x1156dc73 */
  goto L_1156dc73;
L_1156dc66:;
  /* 1156dc66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156dc69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1156dc6b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dc6e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156dc71 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1156dc73:;
  /* 1156dc73 mov esp, ebp */
  ESP = (EBP);
  /* 1156dc75 pop ebp */
  EBP = (pop32());
  /* 1156dc76 ret  */
  ESPCHK(0x1156dc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc80 @ 0x1156dc80 (53 bytes, 23 insns) */
void f_1156dc80(void) {
  FTRACE(0x1156dc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156dc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1156dc81 mov ebp, esp */
  EBP = (ESP);
L_1156dc83:;
  /* 1156dc83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dc86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dc89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156dc8c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1156dc8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156dc91 jle 0x1156dcb3 */
  if ((C.zf||C.sf!=C.of)) goto L_1156dcb3;
  /* 1156dc93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156dc96 push edx */
  push32((uint32_t)(EDX));
  /* 1156dc97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156dc9a push eax */
  push32((uint32_t)(EAX));
  /* 1156dc9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dc9e push ecx */
  push32((uint32_t)(ECX));
  /* 1156dc9f call 0x1156dc00 */
  push32(0x1156dca4u); f_1156dc00();
  /* 1156dca4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dca7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156dcaa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156dcad jne 0x1156dcb1 */
  if (!C.zf) goto L_1156dcb1;
  /* 1156dcaf jmp 0x1156dcb3 */
  goto L_1156dcb3;
L_1156dcb1:;
  /* 1156dcb1 jmp 0x1156dc83 */
  goto L_1156dc83;
L_1156dcb3:;
  /* 1156dcb3 pop ebp */
  EBP = (pop32());
  /* 1156dcb4 ret  */
  ESPCHK(0x1156dc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcc0 @ 0x1156dcc0 (74 bytes, 31 insns) */
void f_1156dcc0(void) {
  FTRACE(0x1156dcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156dcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156dcc1 mov ebp, esp */
  EBP = (ESP);
  /* 1156dcc3 push ecx */
  push32((uint32_t)(ECX));
L_1156dcc4:;
  /* 1156dcc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dcc7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156dcca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156dccd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1156dcd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156dcd2 jle 0x1156dd06 */
  if ((C.zf||C.sf!=C.of)) goto L_1156dd06;
  /* 1156dcd4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156dcd7 push edx */
  push32((uint32_t)(EDX));
  /* 1156dcd8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156dcdb push eax */
  push32((uint32_t)(EAX));
  /* 1156dcdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dcdf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1156dce2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156dce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156dce8 push eax */
  push32((uint32_t)(EAX));
  /* 1156dce9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dcec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dcef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1156dcf2 call 0x1156dc00 */
  push32(0x1156dcf7u); f_1156dc00();
  /* 1156dcf7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dcfa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156dcfd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156dd00 jne 0x1156dd04 */
  if (!C.zf) goto L_1156dd04;
  /* 1156dd02 jmp 0x1156dd06 */
  goto L_1156dd06;
L_1156dd04:;
  /* 1156dd04 jmp 0x1156dcc4 */
  goto L_1156dcc4;
L_1156dd06:;
  /* 1156dd06 mov esp, ebp */
  ESP = (EBP);
  /* 1156dd08 pop ebp */
  EBP = (pop32());
  /* 1156dd09 ret  */
  ESPCHK(0x1156dcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd10 @ 0x1156dd10 (26 bytes, 12 insns) */
void f_1156dd10(void) {
  FTRACE(0x1156dd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156dd10 push ebp */
  push32((uint32_t)(EBP));
  /* 1156dd11 mov ebp, esp */
  EBP = (ESP);
  /* 1156dd13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156dd18 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dd1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1156dd20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156dd25 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1156dd28 pop ebp */
  EBP = (pop32());
  /* 1156dd29 ret  */
  ESPCHK(0x1156dd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd30 @ 0x1156dd30 (31 bytes, 14 insns) */
void f_1156dd30(void) {
  FTRACE(0x1156dd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156dd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1156dd31 mov ebp, esp */
  EBP = (ESP);
  /* 1156dd33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156dd38 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dd3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1156dd40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156dd45 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156dd48 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1156dd4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1156dd4d pop ebp */
  EBP = (pop32());
  /* 1156dd4e ret  */
  ESPCHK(0x1156dd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd50 @ 0x1156dd50 (27 bytes, 12 insns) */
void f_1156dd50(void) {
  FTRACE(0x1156dd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156dd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1156dd51 mov ebp, esp */
  EBP = (ESP);
  /* 1156dd53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd56 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156dd58 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dd5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1156dd60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd63 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1156dd65 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1156dd69 pop ebp */
  EBP = (pop32());
  /* 1156dd6a ret  */
  ESPCHK(0x1156dd50u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1156dd70 (145 bytes, 42 insns) */
void f_1156dd70(void) {
  FTRACE(0x1156dd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156dd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1156dd71 mov ebp, esp */
  EBP = (ESP);
  /* 1156dd73 push ecx */
  push32((uint32_t)(ECX));
  /* 1156dd74 call 0x1156de20 */
  push32(0x1156dd79u); f_1156de20();
  /* 1156dd79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1156dd7e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156dd85 jmp 0x1156dd90 */
  goto L_1156dd90;
L_1156dd87:;
  /* 1156dd87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156dd8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dd8d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1156dd90:;
  /* 1156dd90 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156dd94 jae 0x1156ddba */
  if (!C.cf) goto L_1156ddba;
  /* 1156dd96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156dd99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dd9c cmp ecx, dword ptr [eax*8 + 0x1158ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1158ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156dda3 jne 0x1156ddb8 */
  if (!C.zf) goto L_1156ddb8;
  /* 1156dda5 call 0x1156de10 */
  push32(0x1156ddaau); f_1156de10();
  /* 1156ddaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ddad mov ecx, dword ptr [edx*8 + 0x1158ffbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1158ffbc)));
  /* 1156ddb4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1156ddb6 jmp 0x1156ddfd */
  goto L_1156ddfd;
L_1156ddb8:;
  /* 1156ddb8 jmp 0x1156dd87 */
  goto L_1156dd87;
L_1156ddba:;
  /* 1156ddba cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ddbe jb 0x1156ddd3 */
  if (C.cf) goto L_1156ddd3;
  /* 1156ddc0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ddc4 ja 0x1156ddd3 */
  if ((!C.cf&&!C.zf)) goto L_1156ddd3;
  /* 1156ddc6 call 0x1156de10 */
  push32(0x1156ddcbu); f_1156de10();
  /* 1156ddcb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1156ddd1 jmp 0x1156ddfd */
  goto L_1156ddfd;
L_1156ddd3:;
  /* 1156ddd3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ddda jb 0x1156ddf2 */
  if (C.cf) goto L_1156ddf2;
  /* 1156dddc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156dde3 ja 0x1156ddf2 */
  if ((!C.cf&&!C.zf)) goto L_1156ddf2;
  /* 1156dde5 call 0x1156de10 */
  push32(0x1156ddeau); f_1156de10();
  /* 1156ddea mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1156ddf0 jmp 0x1156ddfd */
  goto L_1156ddfd;
L_1156ddf2:;
  /* 1156ddf2 call 0x1156de10 */
  push32(0x1156ddf7u); f_1156de10();
  /* 1156ddf7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1156ddfd:;
  /* 1156ddfd mov esp, ebp */
  ESP = (EBP);
  /* 1156ddff pop ebp */
  EBP = (pop32());
  /* 1156de00 ret  */
  ESPCHK(0x1156dd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de10 @ 0x1156de10 (13 bytes, 6 insns) */
void f_1156de10(void) {
  FTRACE(0x1156de10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156de10 push ebp */
  push32((uint32_t)(EBP));
  /* 1156de11 mov ebp, esp */
  EBP = (ESP);
  /* 1156de13 call 0x11565780 */
  push32(0x1156de18u); f_11565780();
  /* 1156de18 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156de1b pop ebp */
  EBP = (pop32());
  /* 1156de1c ret  */
  ESPCHK(0x1156de10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de20 @ 0x1156de20 (13 bytes, 6 insns) */
void f_1156de20(void) {
  FTRACE(0x1156de20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156de20 push ebp */
  push32((uint32_t)(EBP));
  /* 1156de21 mov ebp, esp */
  EBP = (ESP);
  /* 1156de23 call 0x11565780 */
  push32(0x1156de28u); f_11565780();
  /* 1156de28 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156de2b pop ebp */
  EBP = (pop32());
  /* 1156de2c ret  */
  ESPCHK(0x1156de20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de30 @ 0x1156de30 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1156de30(void) {
  FTRACE(0x1156de30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156de30 push ebp */
  push32((uint32_t)(EBP));
  /* 1156de31 mov ebp, esp */
  EBP = (ESP);
  /* 1156de33 push edi */
  push32((uint32_t)(EDI));
  /* 1156de34 push esi */
  push32((uint32_t)(ESI));
  /* 1156de35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1156de38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156de3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1156de3e mov eax, ecx */
  EAX = (ECX);
  /* 1156de40 mov edx, ecx */
  EDX = (ECX);
  /* 1156de42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156de44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156de46 jbe 0x1156de50 */
  if ((C.cf||C.zf)) goto L_1156de50;
  /* 1156de48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156de4a jb 0x1156dfc8 */
  if (C.cf) goto L_1156dfc8;
L_1156de50:;
  /* 1156de50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1156de56 jne 0x1156de6c */
  if (!C.zf) goto L_1156de6c;
  /* 1156de58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156de5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1156de5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156de61 jb 0x1156de8c */
  if (C.cf) goto L_1156de8c;
  /* 1156de63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156de65 jmp dword ptr [edx*4 + 0x1156df78] */
  switch (EDX) {
    case 0: goto L_1156df88;
    case 1: goto L_1156df90;
    case 2: goto L_1156df9c;
    case 3: goto L_1156dfb0;
    default: x86_unimpl("switch@0x1156de65 out of table"); return;
  }
L_1156de6c:;
  /* 1156de6c mov eax, edi */
  EAX = (EDI);
  /* 1156de6e mov edx, 3 */
  EDX = (0x3u);
  /* 1156de73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156de76 jb 0x1156de84 */
  if (C.cf) goto L_1156de84;
  /* 1156de78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1156de7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156de7d jmp dword ptr [eax*4 + 0x1156de90] */
  switch (EAX) {
    case 1: goto L_1156dea0;
    case 2: goto L_1156decc;
    case 3: goto L_1156def0;
    default: x86_unimpl("switch@0x1156de7d out of table"); return;
  }
L_1156de84:;
  /* 1156de84 jmp dword ptr [ecx*4 + 0x1156df88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1156df88)))); return;
  /* 1156de8b nop  */
  /* nop */
L_1156de8c:;
  /* 1156de8c jmp dword ptr [ecx*4 + 0x1156df0c] */
  switch (ECX) {
    case 0: goto L_1156df6f;
    case 1: goto L_1156df5c;
    case 2: goto L_1156df54;
    case 3: goto L_1156df4c;
    case 4: goto L_1156df44;
    case 5: goto L_1156df3c;
    case 6: goto L_1156df34;
    case 7: goto L_1156df2c;
    default: x86_unimpl("switch@0x1156de8c out of table"); return;
  }
  /* 1156de93 nop  */
  /* nop */
L_1156dea0:;
  /* 1156dea0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156dea2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156dea4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156dea6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156dea9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156deac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156deaf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156deb2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156deb5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156deb8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156debb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156debe jb 0x1156de8c */
  if (C.cf) goto L_1156de8c;
  /* 1156dec0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156dec2 jmp dword ptr [edx*4 + 0x1156df78] */
  switch (EDX) {
    case 0: goto L_1156df88;
    case 1: goto L_1156df90;
    case 2: goto L_1156df9c;
    case 3: goto L_1156dfb0;
    default: x86_unimpl("switch@0x1156dec2 out of table"); return;
  }
  /* 1156dec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156decc:;
  /* 1156decc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156dece mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156ded0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156ded2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156ded5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156ded8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156dedb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dede add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156dee1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156dee4 jb 0x1156de8c */
  if (C.cf) goto L_1156de8c;
  /* 1156dee6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156dee8 jmp dword ptr [edx*4 + 0x1156df78] */
  switch (EDX) {
    case 0: goto L_1156df88;
    case 1: goto L_1156df90;
    case 2: goto L_1156df9c;
    case 3: goto L_1156dfb0;
    default: x86_unimpl("switch@0x1156dee8 out of table"); return;
  }
  /* 1156deef nop  */
  /* nop */
L_1156def0:;
  /* 1156def0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156def2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156def4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156def6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1156def7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156defa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1156defb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156defe jb 0x1156de8c */
  if (C.cf) goto L_1156de8c;
  /* 1156df00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156df02 jmp dword ptr [edx*4 + 0x1156df78] */
  switch (EDX) {
    case 0: goto L_1156df88;
    case 1: goto L_1156df90;
    case 2: goto L_1156df9c;
    case 3: goto L_1156dfb0;
    default: x86_unimpl("switch@0x1156df02 out of table"); return;
  }
  /* 1156df09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156df2c:;
  /* 1156df2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1156df30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1156df34:;
  /* 1156df34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1156df38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1156df3c:;
  /* 1156df3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1156df40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1156df44:;
  /* 1156df44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1156df48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1156df4c:;
  /* 1156df4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1156df50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1156df54:;
  /* 1156df54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1156df58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1156df5c:;
  /* 1156df5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1156df60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1156df64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1156df6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156df6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1156df6f:;
  /* 1156df6f jmp dword ptr [edx*4 + 0x1156df78] */
  switch (EDX) {
    case 0: goto L_1156df88;
    case 1: goto L_1156df90;
    case 2: goto L_1156df9c;
    case 3: goto L_1156dfb0;
    default: x86_unimpl("switch@0x1156df6f out of table"); return;
  }
  /* 1156df76 mov edi, edi */
  EDI = (EDI);
L_1156df88:;
  /* 1156df88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156df8b pop esi */
  ESI = (pop32());
  /* 1156df8c pop edi */
  EDI = (pop32());
  /* 1156df8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156df8e ret  */
  ESPCHK(0x1156de30u, _esp0);
  ESP += 4; return;
  /* 1156df8f nop  */
  /* nop */
L_1156df90:;
  /* 1156df90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156df92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156df94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156df97 pop esi */
  ESI = (pop32());
  /* 1156df98 pop edi */
  EDI = (pop32());
  /* 1156df99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156df9a ret  */
  ESPCHK(0x1156de30u, _esp0);
  ESP += 4; return;
  /* 1156df9b nop  */
  /* nop */
L_1156df9c:;
  /* 1156df9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156df9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156dfa0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156dfa3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156dfa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dfa9 pop esi */
  ESI = (pop32());
  /* 1156dfaa pop edi */
  EDI = (pop32());
  /* 1156dfab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156dfac ret  */
  ESPCHK(0x1156de30u, _esp0);
  ESP += 4; return;
  /* 1156dfad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156dfb0:;
  /* 1156dfb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1156dfb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1156dfb4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156dfb7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156dfba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156dfbd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156dfc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156dfc3 pop esi */
  ESI = (pop32());
  /* 1156dfc4 pop edi */
  EDI = (pop32());
  /* 1156dfc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156dfc6 ret  */
  ESPCHK(0x1156de30u, _esp0);
  ESP += 4; return;
  /* 1156dfc7 nop  */
  /* nop */
L_1156dfc8:;
  /* 1156dfc8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1156dfcc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1156dfd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1156dfd6 jne 0x1156dffc */
  if (!C.zf) goto L_1156dffc;
  /* 1156dfd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156dfdb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1156dfde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156dfe1 jb 0x1156dff0 */
  if (C.cf) goto L_1156dff0;
  /* 1156dfe3 std  */
  C.df=1;
  /* 1156dfe4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156dfe6 cld  */
  C.df=0;
  /* 1156dfe7 jmp dword ptr [edx*4 + 0x1156e110] */
  switch (EDX) {
    case 0: goto L_1156e120;
    case 1: goto L_1156e128;
    case 2: goto L_1156e138;
    case 3: goto L_1156e14c;
    default: x86_unimpl("switch@0x1156dfe7 out of table"); return;
  }
  /* 1156dfee mov edi, edi */
  EDI = (EDI);
L_1156dff0:;
  /* 1156dff0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156dff2 jmp dword ptr [ecx*4 + 0x1156e0c0] */
  switch (ECX) {
    case 0: goto L_1156e107;
    default: x86_unimpl("switch@0x1156dff2 out of table"); return;
  }
  /* 1156dff9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156dffc:;
  /* 1156dffc mov eax, edi */
  EAX = (EDI);
  /* 1156dffe mov edx, 3 */
  EDX = (0x3u);
  /* 1156e003 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e006 jb 0x1156e014 */
  if (C.cf) goto L_1156e014;
  /* 1156e008 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1156e00b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e00d jmp dword ptr [eax*4 + 0x1156e018] */
  switch (EAX) {
    case 1: goto L_1156e028;
    case 2: goto L_1156e048;
    case 3: goto L_1156e070;
    default: x86_unimpl("switch@0x1156e00d out of table"); return;
  }
L_1156e014:;
  /* 1156e014 jmp dword ptr [ecx*4 + 0x1156e110] */
  switch (ECX) {
    case 0: goto L_1156e120;
    case 1: goto L_1156e128;
    case 2: goto L_1156e138;
    case 3: goto L_1156e14c;
    default: x86_unimpl("switch@0x1156e014 out of table"); return;
  }
  /* 1156e01b nop  */
  /* nop */
L_1156e028:;
  /* 1156e028 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156e02b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156e02d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156e030 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1156e031 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156e034 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1156e035 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e038 jb 0x1156dff0 */
  if (C.cf) goto L_1156dff0;
  /* 1156e03a std  */
  C.df=1;
  /* 1156e03b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156e03d cld  */
  C.df=0;
  /* 1156e03e jmp dword ptr [edx*4 + 0x1156e110] */
  switch (EDX) {
    case 0: goto L_1156e120;
    case 1: goto L_1156e128;
    case 2: goto L_1156e138;
    case 3: goto L_1156e14c;
    default: x86_unimpl("switch@0x1156e03e out of table"); return;
  }
  /* 1156e045 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156e048:;
  /* 1156e048 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156e04b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156e04d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156e050 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156e053 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156e056 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156e059 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e05c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e05f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e062 jb 0x1156dff0 */
  if (C.cf) goto L_1156dff0;
  /* 1156e064 std  */
  C.df=1;
  /* 1156e065 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156e067 cld  */
  C.df=0;
  /* 1156e068 jmp dword ptr [edx*4 + 0x1156e110] */
  switch (EDX) {
    case 0: goto L_1156e120;
    case 1: goto L_1156e128;
    case 2: goto L_1156e138;
    case 3: goto L_1156e14c;
    default: x86_unimpl("switch@0x1156e068 out of table"); return;
  }
  /* 1156e06f nop  */
  /* nop */
L_1156e070:;
  /* 1156e070 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156e073 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1156e075 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156e078 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156e07b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156e07e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156e081 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1156e084 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156e087 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e08a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e08d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e090 jb 0x1156dff0 */
  if (C.cf) goto L_1156dff0;
  /* 1156e096 std  */
  C.df=1;
  /* 1156e097 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1156e099 cld  */
  C.df=0;
  /* 1156e09a jmp dword ptr [edx*4 + 0x1156e110] */
  switch (EDX) {
    case 0: goto L_1156e120;
    case 1: goto L_1156e128;
    case 2: goto L_1156e138;
    case 3: goto L_1156e14c;
    default: x86_unimpl("switch@0x1156e09a out of table"); return;
  }
  /* 1156e0a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1156e0a5 loopne 0x1156e0fd */
  x86_unimpl("loopne @ 0x1156e0a5");
  /* 1156e0a7 adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e0a9 loopne 0x1156e101 */
  x86_unimpl("loopne @ 0x1156e0a9");
  /* 1156e0ab adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e0ad loopne 0x1156e105 */
  x86_unimpl("loopne @ 0x1156e0ad");
  /* 1156e0af adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e0b1 loopne 0x1156e109 */
  x86_unimpl("loopne @ 0x1156e0b1");
  /* 1156e0b3 adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e0b5 loopne 0x1156e10d */
  x86_unimpl("loopne @ 0x1156e0b5");
  /* 1156e0b7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e0b9 loopne 0x1156e111 */
  x86_unimpl("loopne @ 0x1156e0b9");
  /* 1156e0bb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e0bd loopne 0x1156e115 */
  x86_unimpl("loopne @ 0x1156e0bd");
  /* 1156e0c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1156e0c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1156e0cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1156e0d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1156e0d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1156e0d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1156e0dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1156e0e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1156e0e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1156e0e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1156e0ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1156e0f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1156e0f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1156e0f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1156e0fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1156e103 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e105 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1156e107:;
  /* 1156e107 jmp dword ptr [edx*4 + 0x1156e110] */
  switch (EDX) {
    case 0: goto L_1156e120;
    case 1: goto L_1156e128;
    case 2: goto L_1156e138;
    case 3: goto L_1156e14c;
    default: x86_unimpl("switch@0x1156e107 out of table"); return;
  }
  /* 1156e10e mov edi, edi */
  EDI = (EDI);
L_1156e120:;
  /* 1156e120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e123 pop esi */
  ESI = (pop32());
  /* 1156e124 pop edi */
  EDI = (pop32());
  /* 1156e125 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156e126 ret  */
  ESPCHK(0x1156de30u, _esp0);
  ESP += 4; return;
  /* 1156e127 nop  */
  /* nop */
L_1156e128:;
  /* 1156e128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156e12b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156e12e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e131 pop esi */
  ESI = (pop32());
  /* 1156e132 pop edi */
  EDI = (pop32());
  /* 1156e133 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156e134 ret  */
  ESPCHK(0x1156de30u, _esp0);
  ESP += 4; return;
  /* 1156e135 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1156e138:;
  /* 1156e138 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156e13b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156e13e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156e141 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156e144 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e147 pop esi */
  ESI = (pop32());
  /* 1156e148 pop edi */
  EDI = (pop32());
  /* 1156e149 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156e14a ret  */
  ESPCHK(0x1156de30u, _esp0);
  ESP += 4; return;
  /* 1156e14b nop  */
  /* nop */
L_1156e14c:;
  /* 1156e14c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1156e14f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1156e152 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1156e155 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1156e158 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1156e15b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1156e15e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e161 pop esi */
  ESI = (pop32());
  /* 1156e162 pop edi */
  EDI = (pop32());
  /* 1156e163 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1156e164 ret  */
  ESPCHK(0x1156de30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x1156e170 (421 bytes, 148 insns) */
void f_1156e170(void) {
  FTRACE(0x1156e170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156e170 push ebp */
  push32((uint32_t)(EBP));
  /* 1156e171 mov ebp, esp */
  EBP = (ESP);
  /* 1156e173 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1156e175 push 0x1158d0a8 */
  push32((uint32_t)(0x1158d0a8u));
  /* 1156e17a push 0x1156f048 */
  push32((uint32_t)(0x1156f048u));
  /* 1156e17f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1156e185 push eax */
  push32((uint32_t)(EAX));
  /* 1156e186 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1156e18d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e190 push ebx */
  push32((uint32_t)(EBX));
  /* 1156e191 push esi */
  push32((uint32_t)(ESI));
  /* 1156e192 push edi */
  push32((uint32_t)(EDI));
  /* 1156e193 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1156e196 cmp dword ptr [0x11592184], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592184))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e19d jne 0x1156e1ee */
  if (!C.zf) goto L_1156e1ee;
  /* 1156e19f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1156e1a2 push eax */
  push32((uint32_t)(EAX));
  /* 1156e1a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1156e1a5 push 0x1158d0a0 */
  push32((uint32_t)(0x1158d0a0u));
  /* 1156e1aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1156e1ac call dword ptr [0x11594324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594324))), 0x1156e1b2u);
  /* 1156e1b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156e1b4 je 0x1156e1c2 */
  if (C.zf) goto L_1156e1c2;
  /* 1156e1b6 mov dword ptr [0x11592184], 1 */
  w32((uint32_t)(0x11592184), (0x1u));
  /* 1156e1c0 jmp 0x1156e1ee */
  goto L_1156e1ee;
L_1156e1c2:;
  /* 1156e1c2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1156e1c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e1c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1156e1c8 push 0x1158d09c */
  push32((uint32_t)(0x1158d09cu));
  /* 1156e1cd push 1 */
  push32((uint32_t)(0x1u));
  /* 1156e1cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e1d1 call dword ptr [0x11594328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594328))), 0x1156e1d7u);
  /* 1156e1d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156e1d9 je 0x1156e1e7 */
  if (C.zf) goto L_1156e1e7;
  /* 1156e1db mov dword ptr [0x11592184], 2 */
  w32((uint32_t)(0x11592184), (0x2u));
  /* 1156e1e5 jmp 0x1156e1ee */
  goto L_1156e1ee;
L_1156e1e7:;
  /* 1156e1e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e1e9 jmp 0x1156e318 */
  goto L_1156e318;
L_1156e1ee:;
  /* 1156e1ee cmp dword ptr [0x11592184], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11592184))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e1f5 jne 0x1156e225 */
  if (!C.zf) goto L_1156e225;
  /* 1156e1f7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e1fb jne 0x1156e206 */
  if (!C.zf) goto L_1156e206;
  /* 1156e1fd mov edx, dword ptr [0x11592190] */
  EDX = (r32((uint32_t)(0x11592190)));
  /* 1156e203 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1156e206:;
  /* 1156e206 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156e209 push eax */
  push32((uint32_t)(EAX));
  /* 1156e20a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e20d push ecx */
  push32((uint32_t)(ECX));
  /* 1156e20e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e211 push edx */
  push32((uint32_t)(EDX));
  /* 1156e212 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e215 push eax */
  push32((uint32_t)(EAX));
  /* 1156e216 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1156e219 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e21a call dword ptr [0x11594328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594328))), 0x1156e220u);
  /* 1156e220 jmp 0x1156e318 */
  goto L_1156e318;
L_1156e225:;
  /* 1156e225 cmp dword ptr [0x11592184], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11592184))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e22c jne 0x1156e316 */
  if (!C.zf) goto L_1156e316;
  /* 1156e232 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e236 jne 0x1156e241 */
  if (!C.zf) goto L_1156e241;
  /* 1156e238 mov edx, dword ptr [0x115921a0] */
  EDX = (r32((uint32_t)(0x115921a0)));
  /* 1156e23e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1156e241:;
  /* 1156e241 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e243 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e245 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e248 push eax */
  push32((uint32_t)(EAX));
  /* 1156e249 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e24c push ecx */
  push32((uint32_t)(ECX));
  /* 1156e24d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1156e250 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156e252 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e254 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1156e257 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e25a push edx */
  push32((uint32_t)(EDX));
  /* 1156e25b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156e25e push eax */
  push32((uint32_t)(EAX));
  /* 1156e25f call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x1156e265u);
  /* 1156e265 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1156e268 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e26c jne 0x1156e275 */
  if (!C.zf) goto L_1156e275;
  /* 1156e26e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e270 jmp 0x1156e318 */
  goto L_1156e318;
L_1156e275:;
  /* 1156e275 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156e27c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156e27f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1156e281 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e284 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1156e286 call 0x115690e0 */
  push32(0x1156e28bu); f_115690e0();
  /* 1156e28b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1156e28e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1156e291 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156e294 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1156e297 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156e29a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1156e29c push edx */
  push32((uint32_t)(EDX));
  /* 1156e29d push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e29f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156e2a2 push eax */
  push32((uint32_t)(EAX));
  /* 1156e2a3 call 0x11569cb0 */
  push32(0x1156e2a8u); f_11569cb0();
  /* 1156e2a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e2ab mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1156e2b2 jmp 0x1156e2cb */
  goto L_1156e2cb;
  /* 1156e2b4 mov eax, 1 */
  EAX = (0x1u);
  /* 1156e2b9 ret  */
  ESPCHK(0x1156e170u, _esp0);
  ESP += 4; return;
  /* 1156e2ba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1156e2bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1156e2c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1156e2cb:;
  /* 1156e2cb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e2cf jne 0x1156e2d5 */
  if (!C.zf) goto L_1156e2d5;
  /* 1156e2d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e2d3 jmp 0x1156e318 */
  goto L_1156e318;
L_1156e2d5:;
  /* 1156e2d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156e2d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e2d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156e2dc push edx */
  push32((uint32_t)(EDX));
  /* 1156e2dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e2e0 push eax */
  push32((uint32_t)(EAX));
  /* 1156e2e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e2e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1156e2e7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156e2ea push edx */
  push32((uint32_t)(EDX));
  /* 1156e2eb call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x1156e2f1u);
  /* 1156e2f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1156e2f4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e2f8 jne 0x1156e2fe */
  if (!C.zf) goto L_1156e2fe;
  /* 1156e2fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e2fc jmp 0x1156e318 */
  goto L_1156e318;
L_1156e2fe:;
  /* 1156e2fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156e301 push eax */
  push32((uint32_t)(EAX));
  /* 1156e302 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156e305 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e306 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156e309 push edx */
  push32((uint32_t)(EDX));
  /* 1156e30a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e30d push eax */
  push32((uint32_t)(EAX));
  /* 1156e30e call dword ptr [0x11594324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594324))), 0x1156e314u);
  /* 1156e314 jmp 0x1156e318 */
  goto L_1156e318;
L_1156e316:;
  /* 1156e316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1156e318:;
  /* 1156e318 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1156e31b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156e31e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1156e325 pop edi */
  EDI = (pop32());
  /* 1156e326 pop esi */
  ESI = (pop32());
  /* 1156e327 pop ebx */
  EBX = (pop32());
  /* 1156e328 mov esp, ebp */
  ESP = (EBP);
  /* 1156e32a pop ebp */
  EBP = (pop32());
  /* 1156e32b ret  */
  ESPCHK(0x1156e170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e330 @ 0x1156e330 (727 bytes, 263 insns) */
void f_1156e330(void) {
  FTRACE(0x1156e330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156e330 push ebp */
  push32((uint32_t)(EBP));
  /* 1156e331 mov ebp, esp */
  EBP = (ESP);
  /* 1156e333 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1156e335 push 0x1158d0b8 */
  push32((uint32_t)(0x1158d0b8u));
  /* 1156e33a push 0x1156f048 */
  push32((uint32_t)(0x1156f048u));
  /* 1156e33f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1156e345 push eax */
  push32((uint32_t)(EAX));
  /* 1156e346 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1156e34d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e350 push ebx */
  push32((uint32_t)(EBX));
  /* 1156e351 push esi */
  push32((uint32_t)(ESI));
  /* 1156e352 push edi */
  push32((uint32_t)(EDI));
  /* 1156e353 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1156e356 cmp dword ptr [0x115921a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x115921a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e35d jne 0x1156e3b6 */
  if (!C.zf) goto L_1156e3b6;
  /* 1156e35f push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e361 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e363 push 1 */
  push32((uint32_t)(0x1u));
  /* 1156e365 push 0x1158d0a0 */
  push32((uint32_t)(0x1158d0a0u));
  /* 1156e36a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1156e36f push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e371 call dword ptr [0x1159431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159431c))), 0x1156e377u);
  /* 1156e377 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156e379 je 0x1156e387 */
  if (C.zf) goto L_1156e387;
  /* 1156e37b mov dword ptr [0x115921a8], 1 */
  w32((uint32_t)(0x115921a8), (0x1u));
  /* 1156e385 jmp 0x1156e3b6 */
  goto L_1156e3b6;
L_1156e387:;
  /* 1156e387 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e38b push 1 */
  push32((uint32_t)(0x1u));
  /* 1156e38d push 0x1158d09c */
  push32((uint32_t)(0x1158d09cu));
  /* 1156e392 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1156e397 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e399 call dword ptr [0x11594320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594320))), 0x1156e39fu);
  /* 1156e39f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156e3a1 je 0x1156e3af */
  if (C.zf) goto L_1156e3af;
  /* 1156e3a3 mov dword ptr [0x115921a8], 2 */
  w32((uint32_t)(0x115921a8), (0x2u));
  /* 1156e3ad jmp 0x1156e3b6 */
  goto L_1156e3b6;
L_1156e3af:;
  /* 1156e3af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e3b1 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e3b6:;
  /* 1156e3b6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e3ba jle 0x1156e3cf */
  if ((C.zf||C.sf!=C.of)) goto L_1156e3cf;
  /* 1156e3bc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156e3bf push eax */
  push32((uint32_t)(EAX));
  /* 1156e3c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e3c4 call 0x1156e640 */
  push32(0x1156e3c9u); f_1156e640();
  /* 1156e3c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e3cc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1156e3cf:;
  /* 1156e3cf cmp dword ptr [0x115921a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x115921a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e3d6 jne 0x1156e3fb */
  if (!C.zf) goto L_1156e3fb;
  /* 1156e3d8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1156e3db push edx */
  push32((uint32_t)(EDX));
  /* 1156e3dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156e3df push eax */
  push32((uint32_t)(EAX));
  /* 1156e3e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156e3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e3e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e3e7 push edx */
  push32((uint32_t)(EDX));
  /* 1156e3e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e3eb push eax */
  push32((uint32_t)(EAX));
  /* 1156e3ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e3ef push ecx */
  push32((uint32_t)(ECX));
  /* 1156e3f0 call dword ptr [0x11594320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594320))), 0x1156e3f6u);
  /* 1156e3f6 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e3fb:;
  /* 1156e3fb cmp dword ptr [0x115921a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x115921a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e402 jne 0x1156e61f */
  if (!C.zf) goto L_1156e61f;
  /* 1156e408 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e40c jne 0x1156e417 */
  if (!C.zf) goto L_1156e417;
  /* 1156e40e mov edx, dword ptr [0x115921a0] */
  EDX = (r32((uint32_t)(0x115921a0)));
  /* 1156e414 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1156e417:;
  /* 1156e417 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e419 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e41b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156e41e push eax */
  push32((uint32_t)(EAX));
  /* 1156e41f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e422 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e423 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1156e426 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1156e428 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e42a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1156e42d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e430 push edx */
  push32((uint32_t)(EDX));
  /* 1156e431 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1156e434 push eax */
  push32((uint32_t)(EAX));
  /* 1156e435 call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x1156e43bu);
  /* 1156e43b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1156e43e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e442 jne 0x1156e44b */
  if (!C.zf) goto L_1156e44b;
  /* 1156e444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e446 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e44b:;
  /* 1156e44b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156e452 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156e455 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1156e457 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e45a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1156e45c call 0x115690e0 */
  push32(0x1156e461u); f_115690e0();
  /* 1156e461 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1156e464 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1156e467 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1156e46a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1156e46d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1156e474 jmp 0x1156e48d */
  goto L_1156e48d;
  /* 1156e476 mov eax, 1 */
  EAX = (0x1u);
  /* 1156e47b ret  */
  ESPCHK(0x1156e330u, _esp0);
  ESP += 4; return;
  /* 1156e47c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1156e47f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1156e486 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1156e48d:;
  /* 1156e48d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e491 jne 0x1156e49a */
  if (!C.zf) goto L_1156e49a;
  /* 1156e493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e495 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e49a:;
  /* 1156e49a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156e49d push edx */
  push32((uint32_t)(EDX));
  /* 1156e49e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156e4a1 push eax */
  push32((uint32_t)(EAX));
  /* 1156e4a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1156e4a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e4a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e4a9 push edx */
  push32((uint32_t)(EDX));
  /* 1156e4aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1156e4ac mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1156e4af push eax */
  push32((uint32_t)(EAX));
  /* 1156e4b0 call dword ptr [0x1159432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159432c))), 0x1156e4b6u);
  /* 1156e4b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156e4b8 jne 0x1156e4c1 */
  if (!C.zf) goto L_1156e4c1;
  /* 1156e4ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e4bc jmp 0x1156e621 */
  goto L_1156e621;
L_1156e4c1:;
  /* 1156e4c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e4c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e4c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156e4c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e4c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156e4cc push edx */
  push32((uint32_t)(EDX));
  /* 1156e4cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e4d0 push eax */
  push32((uint32_t)(EAX));
  /* 1156e4d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e4d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e4d5 call dword ptr [0x1159431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159431c))), 0x1156e4dbu);
  /* 1156e4db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1156e4de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e4e2 jne 0x1156e4eb */
  if (!C.zf) goto L_1156e4eb;
  /* 1156e4e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e4e6 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e4eb:;
  /* 1156e4eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e4ee and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1156e4f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156e4f6 je 0x1156e53b */
  if (C.zf) goto L_1156e53b;
  /* 1156e4f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e4fc je 0x1156e536 */
  if (C.zf) goto L_1156e536;
  /* 1156e4fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156e501 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e504 jle 0x1156e50d */
  if ((C.zf||C.sf!=C.of)) goto L_1156e50d;
  /* 1156e506 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e508 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e50d:;
  /* 1156e50d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1156e510 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e511 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156e514 push edx */
  push32((uint32_t)(EDX));
  /* 1156e515 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156e518 push eax */
  push32((uint32_t)(EAX));
  /* 1156e519 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156e51c push ecx */
  push32((uint32_t)(ECX));
  /* 1156e51d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e520 push edx */
  push32((uint32_t)(EDX));
  /* 1156e521 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e524 push eax */
  push32((uint32_t)(EAX));
  /* 1156e525 call dword ptr [0x1159431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159431c))), 0x1156e52bu);
  /* 1156e52b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156e52d jne 0x1156e536 */
  if (!C.zf) goto L_1156e536;
  /* 1156e52f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e531 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e536:;
  /* 1156e536 jmp 0x1156e61a */
  goto L_1156e61a;
L_1156e53b:;
  /* 1156e53b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156e53e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1156e541 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1156e548 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156e54b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1156e54d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e550 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1156e552 call 0x115690e0 */
  push32(0x1156e557u); f_115690e0();
  /* 1156e557 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1156e55a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1156e55d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1156e560 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1156e563 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1156e56a jmp 0x1156e583 */
  goto L_1156e583;
  /* 1156e56c mov eax, 1 */
  EAX = (0x1u);
  /* 1156e571 ret  */
  ESPCHK(0x1156e330u, _esp0);
  ESP += 4; return;
  /* 1156e572 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1156e575 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1156e57c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1156e583:;
  /* 1156e583 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e587 jne 0x1156e590 */
  if (!C.zf) goto L_1156e590;
  /* 1156e589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e58b jmp 0x1156e621 */
  goto L_1156e621;
L_1156e590:;
  /* 1156e590 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156e593 push eax */
  push32((uint32_t)(EAX));
  /* 1156e594 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156e597 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e598 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1156e59b push edx */
  push32((uint32_t)(EDX));
  /* 1156e59c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1156e59f push eax */
  push32((uint32_t)(EAX));
  /* 1156e5a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e5a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e5a7 push edx */
  push32((uint32_t)(EDX));
  /* 1156e5a8 call dword ptr [0x1159431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1159431c))), 0x1156e5aeu);
  /* 1156e5ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156e5b0 jne 0x1156e5b6 */
  if (!C.zf) goto L_1156e5b6;
  /* 1156e5b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e5b4 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e5b6:;
  /* 1156e5b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e5ba jne 0x1156e5ea */
  if (!C.zf) goto L_1156e5ea;
  /* 1156e5bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e5be push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e5c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e5c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e5c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156e5c7 push eax */
  push32((uint32_t)(EAX));
  /* 1156e5c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156e5cb push ecx */
  push32((uint32_t)(ECX));
  /* 1156e5cc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1156e5d1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1156e5d4 push edx */
  push32((uint32_t)(EDX));
  /* 1156e5d5 call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x1156e5dbu);
  /* 1156e5db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1156e5de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e5e2 jne 0x1156e5e8 */
  if (!C.zf) goto L_1156e5e8;
  /* 1156e5e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e5e6 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e5e8:;
  /* 1156e5e8 jmp 0x1156e61a */
  goto L_1156e61a;
L_1156e5ea:;
  /* 1156e5ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e5ec push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e5ee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1156e5f1 push eax */
  push32((uint32_t)(EAX));
  /* 1156e5f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1156e5f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e5f6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1156e5f9 push edx */
  push32((uint32_t)(EDX));
  /* 1156e5fa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1156e5fd push eax */
  push32((uint32_t)(EAX));
  /* 1156e5fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1156e603 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1156e606 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e607 call dword ptr [0x11594378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594378))), 0x1156e60du);
  /* 1156e60d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1156e610 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e614 jne 0x1156e61a */
  if (!C.zf) goto L_1156e61a;
  /* 1156e616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e618 jmp 0x1156e621 */
  goto L_1156e621;
L_1156e61a:;
  /* 1156e61a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1156e61d jmp 0x1156e621 */
  goto L_1156e621;
L_1156e61f:;
  /* 1156e61f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1156e621:;
  /* 1156e621 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1156e624 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156e627 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1156e62e pop edi */
  EDI = (pop32());
  /* 1156e62f pop esi */
  ESI = (pop32());
  /* 1156e630 pop ebx */
  EBX = (pop32());
  /* 1156e631 mov esp, ebp */
  ESP = (EBP);
  /* 1156e633 pop ebp */
  EBP = (pop32());
  /* 1156e634 ret  */
  ESPCHK(0x1156e330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e640 @ 0x1156e640 (80 bytes, 32 insns) */
void f_1156e640(void) {
  FTRACE(0x1156e640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156e640 push ebp */
  push32((uint32_t)(EBP));
  /* 1156e641 mov ebp, esp */
  EBP = (ESP);
  /* 1156e643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e646 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e649 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156e64c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e64f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1156e652:;
  /* 1156e652 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156e655 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156e658 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e65b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156e65e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156e660 je 0x1156e677 */
  if (C.zf) goto L_1156e677;
  /* 1156e662 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156e665 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1156e668 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156e66a je 0x1156e677 */
  if (C.zf) goto L_1156e677;
  /* 1156e66c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156e66f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e672 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156e675 jmp 0x1156e652 */
  goto L_1156e652;
L_1156e677:;
  /* 1156e677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156e67a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1156e67d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1156e67f jne 0x1156e689 */
  if (!C.zf) goto L_1156e689;
  /* 1156e681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156e684 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e687 jmp 0x1156e68c */
  goto L_1156e68c;
L_1156e689:;
  /* 1156e689 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1156e68c:;
  /* 1156e68c mov esp, ebp */
  ESP = (EBP);
  /* 1156e68e pop ebp */
  EBP = (pop32());
  /* 1156e68f ret  */
  ESPCHK(0x1156e640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e690 @ 0x1156e690 (130 bytes, 43 insns) */
void f_1156e690(void) {
  FTRACE(0x1156e690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156e690 push ebp */
  push32((uint32_t)(EBP));
  /* 1156e691 mov ebp, esp */
  EBP = (ESP);
  /* 1156e693 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e697 cmp eax, dword ptr [0x11593a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e69d jae 0x1156e6c1 */
  if (!C.cf) goto L_1156e6c1;
  /* 1156e69f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e6a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156e6a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e6a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156e6ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156e6ae mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156e6b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1156e6ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1156e6bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156e6bf jne 0x1156e6dc */
  if (!C.zf) goto L_1156e6dc;
L_1156e6c1:;
  /* 1156e6c1 call 0x1156de10 */
  push32(0x1156e6c6u); f_1156de10();
  /* 1156e6c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1156e6cc call 0x1156de20 */
  push32(0x1156e6d1u); f_1156de20();
  /* 1156e6d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1156e6d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156e6da jmp 0x1156e70e */
  goto L_1156e70e;
L_1156e6dc:;
  /* 1156e6dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e6df push edx */
  push32((uint32_t)(EDX));
  /* 1156e6e0 call 0x1156f630 */
  push32(0x1156e6e5u); f_1156f630();
  /* 1156e6e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e6e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e6eb push eax */
  push32((uint32_t)(EAX));
  /* 1156e6ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e6ef push ecx */
  push32((uint32_t)(ECX));
  /* 1156e6f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e6f3 push edx */
  push32((uint32_t)(EDX));
  /* 1156e6f4 call 0x1156e720 */
  push32(0x1156e6f9u); f_1156e720();
  /* 1156e6f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e6fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156e6ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e702 push eax */
  push32((uint32_t)(EAX));
  /* 1156e703 call 0x1156f6c0 */
  push32(0x1156e708u); f_1156f6c0();
  /* 1156e708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e70b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1156e70e:;
  /* 1156e70e mov esp, ebp */
  ESP = (EBP);
  /* 1156e710 pop ebp */
  EBP = (pop32());
  /* 1156e711 ret  */
  ESPCHK(0x1156e690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e720 @ 0x1156e720 (178 bytes, 56 insns) */
void f_1156e720(void) {
  FTRACE(0x1156e720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156e720 push ebp */
  push32((uint32_t)(EBP));
  /* 1156e721 mov ebp, esp */
  EBP = (ESP);
  /* 1156e723 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e729 push eax */
  push32((uint32_t)(EAX));
  /* 1156e72a call 0x1156f4b0 */
  push32(0x1156e72fu); f_1156f4b0();
  /* 1156e72f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e732 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1156e735 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e739 jne 0x1156e74e */
  if (!C.zf) goto L_1156e74e;
  /* 1156e73b call 0x1156de10 */
  push32(0x1156e740u); f_1156de10();
  /* 1156e740 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1156e746 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156e749 jmp 0x1156e7ce */
  goto L_1156e7ce;
L_1156e74e:;
  /* 1156e74e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e751 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e752 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e754 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e757 push edx */
  push32((uint32_t)(EDX));
  /* 1156e758 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156e75b push eax */
  push32((uint32_t)(EAX));
  /* 1156e75c call dword ptr [0x11594318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594318))), 0x1156e762u);
  /* 1156e762 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1156e765 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e769 jne 0x1156e776 */
  if (!C.zf) goto L_1156e776;
  /* 1156e76b call dword ptr [0x115943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d4))), 0x1156e771u);
  /* 1156e771 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156e774 jmp 0x1156e77d */
  goto L_1156e77d;
L_1156e776:;
  /* 1156e776 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1156e77d:;
  /* 1156e77d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e781 je 0x1156e794 */
  if (C.zf) goto L_1156e794;
  /* 1156e783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156e786 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e787 call 0x1156dd70 */
  push32(0x1156e78cu); f_1156dd70();
  /* 1156e78c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e78f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156e792 jmp 0x1156e7ce */
  goto L_1156e7ce;
L_1156e794:;
  /* 1156e794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e797 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1156e79a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e79d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1156e7a0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156e7a3 mov ecx, dword ptr [edx*4 + 0x11593960] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11593960)));
  /* 1156e7aa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1156e7ae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1156e7b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e7b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156e7b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e7ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1156e7bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156e7c0 mov eax, dword ptr [eax*4 + 0x11593960] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 1156e7c7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1156e7cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1156e7ce:;
  /* 1156e7ce mov esp, ebp */
  ESP = (EBP);
  /* 1156e7d0 pop ebp */
  EBP = (pop32());
  /* 1156e7d1 ret  */
  ESPCHK(0x1156e720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7e0 @ 0x1156e7e0 (130 bytes, 43 insns) */
void f_1156e7e0(void) {
  FTRACE(0x1156e7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156e7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156e7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1156e7e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156e7e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e7e7 cmp eax, dword ptr [0x11593a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e7ed jae 0x1156e811 */
  if (!C.cf) goto L_1156e811;
  /* 1156e7ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e7f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156e7f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e7f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156e7fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156e7fe mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156e805 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1156e80a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1156e80d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156e80f jne 0x1156e82c */
  if (!C.zf) goto L_1156e82c;
L_1156e811:;
  /* 1156e811 call 0x1156de10 */
  push32(0x1156e816u); f_1156de10();
  /* 1156e816 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1156e81c call 0x1156de20 */
  push32(0x1156e821u); f_1156de20();
  /* 1156e821 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1156e827 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156e82a jmp 0x1156e85e */
  goto L_1156e85e;
L_1156e82c:;
  /* 1156e82c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e82f push edx */
  push32((uint32_t)(EDX));
  /* 1156e830 call 0x1156f630 */
  push32(0x1156e835u); f_1156f630();
  /* 1156e835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e838 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156e83b push eax */
  push32((uint32_t)(EAX));
  /* 1156e83c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e83f push ecx */
  push32((uint32_t)(ECX));
  /* 1156e840 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e843 push edx */
  push32((uint32_t)(EDX));
  /* 1156e844 call 0x1156e870 */
  push32(0x1156e849u); f_1156e870();
  /* 1156e849 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e84c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156e84f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e852 push eax */
  push32((uint32_t)(EAX));
  /* 1156e853 call 0x1156f6c0 */
  push32(0x1156e858u); f_1156f6c0();
  /* 1156e858 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e85b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1156e85e:;
  /* 1156e85e mov esp, ebp */
  ESP = (EBP);
  /* 1156e860 pop ebp */
  EBP = (pop32());
  /* 1156e861 ret  */
  ESPCHK(0x1156e7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e870 @ 0x1156e870 (627 bytes, 182 insns) */
void f_1156e870(void) {
  FTRACE(0x1156e870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156e870 push ebp */
  push32((uint32_t)(EBP));
  /* 1156e871 mov ebp, esp */
  EBP = (ESP);
  /* 1156e873 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e879 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1156e880 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156e883 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1156e889 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e88d jne 0x1156e896 */
  if (!C.zf) goto L_1156e896;
  /* 1156e88f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156e891 jmp 0x1156eadf */
  goto L_1156eadf;
L_1156e896:;
  /* 1156e896 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e899 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156e89c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e89f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156e8a2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156e8a5 mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156e8ac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1156e8b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1156e8b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1156e8b6 je 0x1156e8c8 */
  if (C.zf) goto L_1156e8c8;
  /* 1156e8b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156e8ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e8bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e8bf push edx */
  push32((uint32_t)(EDX));
  /* 1156e8c0 call 0x1156e720 */
  push32(0x1156e8c5u); f_1156e720();
  /* 1156e8c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156e8c8:;
  /* 1156e8c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e8cb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156e8ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e8d1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1156e8d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156e8d7 mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 1156e8de movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1156e8e3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1156e8e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156e8ea je 0x1156e9fc */
  if (C.zf) goto L_1156e9fc;
  /* 1156e8f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156e8f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1156e8f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1156e8fd:;
  /* 1156e8fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156e900 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e903 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e906 jae 0x1156e9fa */
  if (!C.cf) goto L_1156e9fa;
  /* 1156e90c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1156e912 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1156e915:;
  /* 1156e915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156e918 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1156e91e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e920 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e926 jge 0x1156e987 */
  if ((C.sf==C.of)) goto L_1156e987;
  /* 1156e928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156e92b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e92e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e931 jae 0x1156e987 */
  if (!C.cf) goto L_1156e987;
  /* 1156e933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156e936 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1156e938 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1156e93e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156e941 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e944 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1156e947 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1156e94e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e951 jne 0x1156e971 */
  if (!C.zf) goto L_1156e971;
  /* 1156e953 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1156e959 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e95c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1156e962 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156e965 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1156e968 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156e96b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e96e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1156e971:;
  /* 1156e971 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156e974 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1156e97a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1156e97c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156e97f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e982 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1156e985 jmp 0x1156e915 */
  goto L_1156e915;
L_1156e987:;
  /* 1156e987 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e989 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1156e98f push edx */
  push32((uint32_t)(EDX));
  /* 1156e990 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156e993 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1156e999 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e99b push eax */
  push32((uint32_t)(EAX));
  /* 1156e99c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1156e9a2 push edx */
  push32((uint32_t)(EDX));
  /* 1156e9a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e9a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156e9a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156e9ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1156e9af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156e9b2 mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 1156e9b9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1156e9bc push eax */
  push32((uint32_t)(EAX));
  /* 1156e9bd call dword ptr [0x115943a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943a0))), 0x1156e9c3u);
  /* 1156e9c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156e9c5 je 0x1156e9ea */
  if (C.zf) goto L_1156e9ea;
  /* 1156e9c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156e9ca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156e9d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1156e9d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1156e9d6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1156e9dc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156e9de cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156e9e4 jge 0x1156e9e8 */
  if ((C.sf==C.of)) goto L_1156e9e8;
  /* 1156e9e6 jmp 0x1156e9fa */
  goto L_1156e9fa;
L_1156e9e8:;
  /* 1156e9e8 jmp 0x1156e9f5 */
  goto L_1156e9f5;
L_1156e9ea:;
  /* 1156e9ea call dword ptr [0x115943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d4))), 0x1156e9f0u);
  /* 1156e9f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1156e9f3 jmp 0x1156e9fa */
  goto L_1156e9fa;
L_1156e9f5:;
  /* 1156e9f5 jmp 0x1156e8fd */
  goto L_1156e8fd;
L_1156e9fa:;
  /* 1156e9fa jmp 0x1156ea4c */
  goto L_1156ea4c;
L_1156e9fc:;
  /* 1156e9fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1156e9fe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1156ea04 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ea05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1156ea08 push edx */
  push32((uint32_t)(EDX));
  /* 1156ea09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156ea0c push eax */
  push32((uint32_t)(EAX));
  /* 1156ea0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ea10 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156ea13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ea16 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156ea19 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ea1c mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156ea23 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1156ea26 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ea27 call dword ptr [0x115943a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943a0))), 0x1156ea2du);
  /* 1156ea2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156ea2f je 0x1156ea43 */
  if (C.zf) goto L_1156ea43;
  /* 1156ea31 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1156ea38 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1156ea3e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1156ea41 jmp 0x1156ea4c */
  goto L_1156ea4c;
L_1156ea43:;
  /* 1156ea43 call dword ptr [0x115943d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x115943d4))), 0x1156ea49u);
  /* 1156ea49 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1156ea4c:;
  /* 1156ea4c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ea50 jne 0x1156ead6 */
  if (!C.zf) goto L_1156ead6;
  /* 1156ea56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ea5a je 0x1156ea8a */
  if (C.zf) goto L_1156ea8a;
  /* 1156ea5c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ea60 jne 0x1156ea79 */
  if (!C.zf) goto L_1156ea79;
  /* 1156ea62 call 0x1156de10 */
  push32(0x1156ea67u); f_1156de10();
  /* 1156ea67 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1156ea6d call 0x1156de20 */
  push32(0x1156ea72u); f_1156de20();
  /* 1156ea72 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156ea75 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1156ea77 jmp 0x1156ea85 */
  goto L_1156ea85;
L_1156ea79:;
  /* 1156ea79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1156ea7c push edx */
  push32((uint32_t)(EDX));
  /* 1156ea7d call 0x1156dd70 */
  push32(0x1156ea82u); f_1156dd70();
  /* 1156ea82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156ea85:;
  /* 1156ea85 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156ea88 jmp 0x1156eadf */
  goto L_1156eadf;
L_1156ea8a:;
  /* 1156ea8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ea8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156ea90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ea93 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1156ea96 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ea99 mov edx, dword ptr [eax*4 + 0x11593960] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11593960)));
  /* 1156eaa0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1156eaa5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1156eaa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156eaaa je 0x1156eabb */
  if (C.zf) goto L_1156eabb;
  /* 1156eaac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156eaaf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1156eab2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156eab5 jne 0x1156eabb */
  if (!C.zf) goto L_1156eabb;
  /* 1156eab7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156eab9 jmp 0x1156eadf */
  goto L_1156eadf;
L_1156eabb:;
  /* 1156eabb call 0x1156de10 */
  push32(0x1156eac0u); f_1156de10();
  /* 1156eac0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1156eac6 call 0x1156de20 */
  push32(0x1156eacbu); f_1156de20();
  /* 1156eacb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1156ead1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1156ead4 jmp 0x1156eadf */
  goto L_1156eadf;
L_1156ead6:;
  /* 1156ead6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1156ead9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1156eadf:;
  /* 1156eadf mov esp, ebp */
  ESP = (EBP);
  /* 1156eae1 pop ebp */
  EBP = (pop32());
  /* 1156eae2 ret  */
  ESPCHK(0x1156e870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaf0 @ 0x1156eaf0 (199 bytes, 68 insns) */
void f_1156eaf0(void) {
  FTRACE(0x1156eaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156eaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156eaf1 mov ebp, esp */
  EBP = (ESP);
  /* 1156eaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1156eaf4 push ebx */
  push32((uint32_t)(EBX));
  /* 1156eaf5 push esi */
  push32((uint32_t)(ESI));
  /* 1156eaf6 push edi */
  push32((uint32_t)(EDI));
L_1156eaf7:;
  /* 1156eaf7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156eafb jne 0x1156eb1b */
  if (!C.zf) goto L_1156eb1b;
  /* 1156eafd push 0x1158d000 */
  push32((uint32_t)(0x1158d000u));
  /* 1156eb02 push 0 */
  push32((uint32_t)(0x0u));
  /* 1156eb04 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1156eb06 push 0x1158d0d0 */
  push32((uint32_t)(0x1158d0d0u));
  /* 1156eb0b push 2 */
  push32((uint32_t)(0x2u));
  /* 1156eb0d call 0x11565000 */
  push32(0x1156eb12u); f_11565000();
  /* 1156eb12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156eb15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156eb18 jne 0x1156eb1b */
  if (!C.zf) goto L_1156eb1b;
  /* 1156eb1a int3  */
  x86_unimpl("int3 @ 0x1156eb1a");
L_1156eb1b:;
  /* 1156eb1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156eb1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156eb1f jne 0x1156eaf7 */
  if (!C.zf) goto L_1156eaf7;
  /* 1156eb21 mov ecx, dword ptr [0x115921ac] */
  ECX = (r32((uint32_t)(0x115921ac)));
  /* 1156eb27 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156eb2a mov dword ptr [0x115921ac], ecx */
  w32((uint32_t)(0x115921ac), (ECX));
  /* 1156eb30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156eb33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1156eb36 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1156eb38 push 0x1158d0d0 */
  push32((uint32_t)(0x1158d0d0u));
  /* 1156eb3d push 2 */
  push32((uint32_t)(0x2u));
  /* 1156eb3f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1156eb44 call 0x11565f40 */
  push32(0x1156eb49u); f_11565f40();
  /* 1156eb49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156eb4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb4f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1156eb52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb55 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156eb59 je 0x1156eb76 */
  if (C.zf) goto L_1156eb76;
  /* 1156eb5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb5e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1156eb61 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1156eb64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb67 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1156eb6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb6d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1156eb74 jmp 0x1156eb9b */
  goto L_1156eb9b;
L_1156eb76:;
  /* 1156eb76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb79 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1156eb7c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1156eb7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb82 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1156eb85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb88 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156eb8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb8e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1156eb91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb94 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1156eb9b:;
  /* 1156eb9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eb9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eba1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1156eba4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1156eba6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eba9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1156ebb0 pop edi */
  EDI = (pop32());
  /* 1156ebb1 pop esi */
  ESI = (pop32());
  /* 1156ebb2 pop ebx */
  EBX = (pop32());
  /* 1156ebb3 mov esp, ebp */
  ESP = (EBP);
  /* 1156ebb5 pop ebp */
  EBP = (pop32());
  /* 1156ebb6 ret  */
  ESPCHK(0x1156eaf0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1156ebc0 (50 bytes, 17 insns) */
void f_1156ebc0(void) {
  FTRACE(0x1156ebc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ebc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ebc1 mov ebp, esp */
  EBP = (ESP);
  /* 1156ebc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ebc6 cmp eax, dword ptr [0x11593a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11593a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ebcc jb 0x1156ebd2 */
  if (C.cf) goto L_1156ebd2;
  /* 1156ebce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1156ebd0 jmp 0x1156ebf0 */
  goto L_1156ebf0;
L_1156ebd2:;
  /* 1156ebd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ebd5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156ebd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ebdb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156ebde imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ebe1 mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156ebe8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1156ebed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1156ebf0:;
  /* 1156ebf0 pop ebp */
  EBP = (pop32());
  /* 1156ebf1 ret  */
  ESPCHK(0x1156ebc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec00 @ 0x1156ec00 (300 bytes, 80 insns) */
void f_1156ec00(void) {
  FTRACE(0x1156ec00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ec00 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ec01 mov ebp, esp */
  EBP = (ESP);
  /* 1156ec03 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ec04 cmp dword ptr [0x11593660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11593660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ec0b jne 0x1156ec19 */
  if (!C.zf) goto L_1156ec19;
  /* 1156ec0d mov dword ptr [0x11593660], 0x200 */
  w32((uint32_t)(0x11593660), (0x200u));
  /* 1156ec17 jmp 0x1156ec2c */
  goto L_1156ec2c;
L_1156ec19:;
  /* 1156ec19 cmp dword ptr [0x11593660], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11593660))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ec20 jge 0x1156ec2c */
  if ((C.sf==C.of)) goto L_1156ec2c;
  /* 1156ec22 mov dword ptr [0x11593660], 0x14 */
  w32((uint32_t)(0x11593660), (0x14u));
L_1156ec2c:;
  /* 1156ec2c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1156ec31 push 0x1158d0dc */
  push32((uint32_t)(0x1158d0dcu));
  /* 1156ec36 push 2 */
  push32((uint32_t)(0x2u));
  /* 1156ec38 push 4 */
  push32((uint32_t)(0x4u));
  /* 1156ec3a mov eax, dword ptr [0x11593660] */
  EAX = (r32((uint32_t)(0x11593660)));
  /* 1156ec3f push eax */
  push32((uint32_t)(EAX));
  /* 1156ec40 call 0x11566350 */
  push32(0x1156ec45u); f_11566350();
  /* 1156ec45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ec48 mov dword ptr [0x11592320], eax */
  w32((uint32_t)(0x11592320), (EAX));
  /* 1156ec4d cmp dword ptr [0x11592320], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ec54 jne 0x1156ec95 */
  if (!C.zf) goto L_1156ec95;
  /* 1156ec56 mov dword ptr [0x11593660], 0x14 */
  w32((uint32_t)(0x11593660), (0x14u));
  /* 1156ec60 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1156ec65 push 0x1158d0dc */
  push32((uint32_t)(0x1158d0dcu));
  /* 1156ec6a push 2 */
  push32((uint32_t)(0x2u));
  /* 1156ec6c push 4 */
  push32((uint32_t)(0x4u));
  /* 1156ec6e mov ecx, dword ptr [0x11593660] */
  ECX = (r32((uint32_t)(0x11593660)));
  /* 1156ec74 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ec75 call 0x11566350 */
  push32(0x1156ec7au); f_11566350();
  /* 1156ec7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ec7d mov dword ptr [0x11592320], eax */
  w32((uint32_t)(0x11592320), (EAX));
  /* 1156ec82 cmp dword ptr [0x11592320], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11592320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ec89 jne 0x1156ec95 */
  if (!C.zf) goto L_1156ec95;
  /* 1156ec8b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1156ec8d call 0x11564eb0 */
  push32(0x1156ec92u); f_11564eb0();
  /* 1156ec92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1156ec95:;
  /* 1156ec95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156ec9c jmp 0x1156eca7 */
  goto L_1156eca7;
L_1156ec9e:;
  /* 1156ec9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156eca1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156eca4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1156eca7:;
  /* 1156eca7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ecab jge 0x1156ecc6 */
  if ((C.sf==C.of)) goto L_1156ecc6;
  /* 1156ecad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ecb0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156ecb3 add eax, 0x11590120 */
  { uint32_t _a=(EAX),_b=(0x11590120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ecb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ecbb mov edx, dword ptr [0x11592320] */
  EDX = (r32((uint32_t)(0x11592320)));
  /* 1156ecc1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1156ecc4 jmp 0x1156ec9e */
  goto L_1156ec9e;
L_1156ecc6:;
  /* 1156ecc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1156eccd jmp 0x1156ecd8 */
  goto L_1156ecd8;
L_1156eccf:;
  /* 1156eccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ecd2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ecd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1156ecd8:;
  /* 1156ecd8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ecdc jge 0x1156ed28 */
  if ((C.sf==C.of)) goto L_1156ed28;
  /* 1156ecde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ece1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156ece4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ece7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156ecea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156eced mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156ecf4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ecf8 je 0x1156ed16 */
  if (C.zf) goto L_1156ed16;
  /* 1156ecfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ecfd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156ed00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ed03 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1156ed06 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1156ed09 mov eax, dword ptr [ecx*4 + 0x11593960] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11593960)));
  /* 1156ed10 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ed14 jne 0x1156ed26 */
  if (!C.zf) goto L_1156ed26;
L_1156ed16:;
  /* 1156ed16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1156ed19 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1156ed1c mov dword ptr [ecx + 0x11590130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11590130), (0xffffffffu));
L_1156ed26:;
  /* 1156ed26 jmp 0x1156eccf */
  goto L_1156eccf;
L_1156ed28:;
  /* 1156ed28 mov esp, ebp */
  ESP = (EBP);
  /* 1156ed2a pop ebp */
  EBP = (pop32());
  /* 1156ed2b ret  */
  ESPCHK(0x1156ec00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed30 @ 0x1156ed30 (26 bytes, 9 insns) */
void f_1156ed30(void) {
  FTRACE(0x1156ed30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ed30 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ed31 mov ebp, esp */
  EBP = (ESP);
  /* 1156ed33 call 0x1156f930 */
  push32(0x1156ed38u); f_1156f930();
  /* 1156ed38 movsx eax, byte ptr [0x11591fc4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11591fc4))));
  /* 1156ed3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1156ed41 je 0x1156ed48 */
  if (C.zf) goto L_1156ed48;
  /* 1156ed43 call 0x1156f6f0 */
  push32(0x1156ed48u); f_1156f6f0();
L_1156ed48:;
  /* 1156ed48 pop ebp */
  EBP = (pop32());
  /* 1156ed49 ret  */
  ESPCHK(0x1156ed30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed50 @ 0x1156ed50 (61 bytes, 20 insns) */
void f_1156ed50(void) {
  FTRACE(0x1156ed50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ed50 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ed51 mov ebp, esp */
  EBP = (ESP);
  /* 1156ed53 cmp dword ptr [ebp + 8], 0x11590120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11590120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ed5a jb 0x1156ed7e */
  if (C.cf) goto L_1156ed7e;
  /* 1156ed5c cmp dword ptr [ebp + 8], 0x11590380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11590380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ed63 ja 0x1156ed7e */
  if ((!C.cf&&!C.zf)) goto L_1156ed7e;
  /* 1156ed65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ed68 sub eax, 0x11590120 */
  { uint32_t _a=(EAX),_b=(0x11590120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156ed6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156ed70 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ed73 push eax */
  push32((uint32_t)(EAX));
  /* 1156ed74 call 0x11569940 */
  push32(0x1156ed79u); f_11569940();
  /* 1156ed79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ed7c jmp 0x1156ed8b */
  goto L_1156ed8b;
L_1156ed7e:;
  /* 1156ed7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ed81 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ed84 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ed85 call dword ptr [0x11594354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594354))), 0x1156ed8bu);
L_1156ed8b:;
  /* 1156ed8b pop ebp */
  EBP = (pop32());
  /* 1156ed8c ret  */
  ESPCHK(0x1156ed50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed90 @ 0x1156ed90 (41 bytes, 16 insns) */
void f_1156ed90(void) {
  FTRACE(0x1156ed90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ed90 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ed91 mov ebp, esp */
  EBP = (ESP);
  /* 1156ed93 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ed97 jge 0x1156edaa */
  if ((C.sf==C.of)) goto L_1156edaa;
  /* 1156ed99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ed9c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ed9f push eax */
  push32((uint32_t)(EAX));
  /* 1156eda0 call 0x11569940 */
  push32(0x1156eda5u); f_11569940();
  /* 1156eda5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156eda8 jmp 0x1156edb7 */
  goto L_1156edb7;
L_1156edaa:;
  /* 1156edaa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156edad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156edb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1156edb1 call dword ptr [0x11594354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594354))), 0x1156edb7u);
L_1156edb7:;
  /* 1156edb7 pop ebp */
  EBP = (pop32());
  /* 1156edb8 ret  */
  ESPCHK(0x1156ed90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edc0 @ 0x1156edc0 (61 bytes, 20 insns) */
void f_1156edc0(void) {
  FTRACE(0x1156edc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156edc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1156edc1 mov ebp, esp */
  EBP = (ESP);
  /* 1156edc3 cmp dword ptr [ebp + 8], 0x11590120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11590120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156edca jb 0x1156edee */
  if (C.cf) goto L_1156edee;
  /* 1156edcc cmp dword ptr [ebp + 8], 0x11590380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11590380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156edd3 ja 0x1156edee */
  if ((!C.cf&&!C.zf)) goto L_1156edee;
  /* 1156edd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156edd8 sub eax, 0x11590120 */
  { uint32_t _a=(EAX),_b=(0x11590120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1156eddd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1156ede0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ede3 push eax */
  push32((uint32_t)(EAX));
  /* 1156ede4 call 0x115699e0 */
  push32(0x1156ede9u); f_115699e0();
  /* 1156ede9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156edec jmp 0x1156edfb */
  goto L_1156edfb;
L_1156edee:;
  /* 1156edee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156edf1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156edf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1156edf5 call dword ptr [0x11594350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594350))), 0x1156edfbu);
L_1156edfb:;
  /* 1156edfb pop ebp */
  EBP = (pop32());
  /* 1156edfc ret  */
  ESPCHK(0x1156edc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee00 @ 0x1156ee00 (41 bytes, 16 insns) */
void f_1156ee00(void) {
  FTRACE(0x1156ee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1156ee00 push ebp */
  push32((uint32_t)(EBP));
  /* 1156ee01 mov ebp, esp */
  EBP = (ESP);
  /* 1156ee03 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1156ee07 jge 0x1156ee1a */
  if ((C.sf==C.of)) goto L_1156ee1a;
  /* 1156ee09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1156ee0c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ee0f push eax */
  push32((uint32_t)(EAX));
  /* 1156ee10 call 0x115699e0 */
  push32(0x1156ee15u); f_115699e0();
  /* 1156ee15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ee18 jmp 0x1156ee27 */
  goto L_1156ee27;
L_1156ee1a:;
  /* 1156ee1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1156ee1d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1156ee20 push ecx */
  push32((uint32_t)(ECX));
  /* 1156ee21 call dword ptr [0x11594350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11594350))), 0x1156ee27u);
L_1156ee27:;
  /* 1156ee27 pop ebp */
  EBP = (pop32());
  /* 1156ee28 ret  */
  ESPCHK(0x1156ee00u, _esp0);
  ESP += 4; return;
}

