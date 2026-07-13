#include "recomp.h"

/* FUN_10013a00 @ 0x119c3a00 (210 bytes, 63 insns) */
void f_119c3a00(void) {
  FTRACE(0x119c3a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c3a00 push ebp */
  push32((uint32_t)(EBP));
  /* 119c3a01 mov ebp, esp */
  EBP = (ESP);
  /* 119c3a03 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3a07 cmp eax, dword ptr [0x119e8c1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e8c1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3a0d jae 0x119c3a31 */
  if (!C.cf) goto L_119c3a31;
  /* 119c3a0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3a12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119c3a15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3a18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119c3a1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c3a1e mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119c3a25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119c3a2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119c3a2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c3a2f jne 0x119c3a44 */
  if (!C.zf) goto L_119c3a44;
L_119c3a31:;
  /* 119c3a31 call 0x119c0c20 */
  push32(0x119c3a36u); f_119c0c20();
  /* 119c3a36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119c3a3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c3a3f jmp 0x119c3ace */
  goto L_119c3ace;
L_119c3a44:;
  /* 119c3a44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3a47 push edx */
  push32((uint32_t)(EDX));
  /* 119c3a48 call 0x119c1150 */
  push32(0x119c3a4du); f_119c1150();
  /* 119c3a4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3a53 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119c3a56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3a59 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119c3a5c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c3a5f mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119c3a66 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 119c3a6b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 119c3a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c3a70 je 0x119c3aad */
  if (C.zf) goto L_119c3aad;
  /* 119c3a72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3a75 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3a76 call 0x119c0fd0 */
  push32(0x119c3a7bu); f_119c0fd0();
  /* 119c3a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3a7e push eax */
  push32((uint32_t)(EAX));
  /* 119c3a7f call dword ptr [0x119e9320] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9320))), 0x119c3a85u);
  /* 119c3a85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c3a87 jne 0x119c3a94 */
  if (!C.zf) goto L_119c3a94;
  /* 119c3a89 call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119c3a8fu);
  /* 119c3a8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c3a92 jmp 0x119c3a9b */
  goto L_119c3a9b;
L_119c3a94:;
  /* 119c3a94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119c3a9b:;
  /* 119c3a9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3a9f jne 0x119c3aa3 */
  if (!C.zf) goto L_119c3aa3;
  /* 119c3aa1 jmp 0x119c3abf */
  goto L_119c3abf;
L_119c3aa3:;
  /* 119c3aa3 call 0x119c0c30 */
  push32(0x119c3aa8u); f_119c0c30();
  /* 119c3aa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3aab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119c3aad:;
  /* 119c3aad call 0x119c0c20 */
  push32(0x119c3ab2u); f_119c0c20();
  /* 119c3ab2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119c3ab8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c3abf:;
  /* 119c3abf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3ac2 push eax */
  push32((uint32_t)(EAX));
  /* 119c3ac3 call 0x119c11e0 */
  push32(0x119c3ac8u); f_119c11e0();
  /* 119c3ac8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3acb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119c3ace:;
  /* 119c3ace mov esp, ebp */
  ESP = (EBP);
  /* 119c3ad0 pop ebp */
  EBP = (pop32());
  /* 119c3ad1 ret  */
  ESPCHK(0x119c3a00u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x119c3ae0 (219 bytes, 64 insns) */
void f_119c3ae0(void) {
  FTRACE(0x119c3ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c3ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c3ae1 mov ebp, esp */
  EBP = (ESP);
  /* 119c3ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3ae4 cmp dword ptr [0x119e7324], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7324))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3aeb je 0x119c3b81 */
  if (C.zf) goto L_119c3b81;
  /* 119c3af1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 119c3af3 push 0x119e22d4 */
  push32((uint32_t)(0x119e22d4u));
  /* 119c3af8 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c3afa push 0xac */
  push32((uint32_t)(0xacu));
  /* 119c3aff push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3b01 call 0x119b8620 */
  push32(0x119c3b06u); f_119b8620();
  /* 119c3b06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c3b0c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3b10 jne 0x119c3b1c */
  if (!C.zf) goto L_119c3b1c;
  /* 119c3b12 mov eax, 1 */
  EAX = (0x1u);
  /* 119c3b17 jmp 0x119c3bb7 */
  goto L_119c3bb7;
L_119c3b1c:;
  /* 119c3b1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3b1f push eax */
  push32((uint32_t)(EAX));
  /* 119c3b20 call 0x119c3bc0 */
  push32(0x119c3b25u); f_119c3bc0();
  /* 119c3b25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3b28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c3b2a je 0x119c3b4d */
  if (C.zf) goto L_119c3b4d;
  /* 119c3b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3b2f push ecx */
  push32((uint32_t)(ECX));
  /* 119c3b30 call 0x119c4150 */
  push32(0x119c3b35u); f_119c4150();
  /* 119c3b35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3b38 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c3b3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3b3d push edx */
  push32((uint32_t)(EDX));
  /* 119c3b3e call 0x119b8ca0 */
  push32(0x119c3b43u); f_119b8ca0();
  /* 119c3b43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3b46 mov eax, 1 */
  EAX = (0x1u);
  /* 119c3b4b jmp 0x119c3bb7 */
  goto L_119c3bb7;
L_119c3b4d:;
  /* 119c3b4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3b50 mov dword ptr [0x119e5ce8], eax */
  w32((uint32_t)(0x119e5ce8), (EAX));
  /* 119c3b55 mov ecx, dword ptr [0x119e7338] */
  ECX = (r32((uint32_t)(0x119e7338)));
  /* 119c3b5b push ecx */
  push32((uint32_t)(ECX));
  /* 119c3b5c call 0x119c4150 */
  push32(0x119c3b61u); f_119c4150();
  /* 119c3b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3b64 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c3b66 mov edx, dword ptr [0x119e7338] */
  EDX = (r32((uint32_t)(0x119e7338)));
  /* 119c3b6c push edx */
  push32((uint32_t)(EDX));
  /* 119c3b6d call 0x119b8ca0 */
  push32(0x119c3b72u); f_119b8ca0();
  /* 119c3b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3b75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3b78 mov dword ptr [0x119e7338], eax */
  w32((uint32_t)(0x119e7338), (EAX));
  /* 119c3b7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c3b7f jmp 0x119c3bb7 */
  goto L_119c3bb7;
L_119c3b81:;
  /* 119c3b81 mov dword ptr [0x119e5ce8], 0x119e5cf0 */
  w32((uint32_t)(0x119e5ce8), (0x119e5cf0u));
  /* 119c3b8b mov ecx, dword ptr [0x119e7338] */
  ECX = (r32((uint32_t)(0x119e7338)));
  /* 119c3b91 push ecx */
  push32((uint32_t)(ECX));
  /* 119c3b92 call 0x119c4150 */
  push32(0x119c3b97u); f_119c4150();
  /* 119c3b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3b9a push 2 */
  push32((uint32_t)(0x2u));
  /* 119c3b9c mov edx, dword ptr [0x119e7338] */
  EDX = (r32((uint32_t)(0x119e7338)));
  /* 119c3ba2 push edx */
  push32((uint32_t)(EDX));
  /* 119c3ba3 call 0x119b8ca0 */
  push32(0x119c3ba8u); f_119b8ca0();
  /* 119c3ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3bab mov dword ptr [0x119e7338], 0 */
  w32((uint32_t)(0x119e7338), (0x0u));
  /* 119c3bb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c3bb7:;
  /* 119c3bb7 mov esp, ebp */
  ESP = (EBP);
  /* 119c3bb9 pop ebp */
  EBP = (pop32());
  /* 119c3bba ret  */
  ESPCHK(0x119c3ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bc0 @ 0x119c3bc0 (1423 bytes, 533 insns) */
void f_119c3bc0(void) {
  FTRACE(0x119c3bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c3bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c3bc1 mov ebp, esp */
  EBP = (ESP);
  /* 119c3bc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c3bc6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c3bcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c3bcf mov ax, word ptr [0x119e7372] */
  AX = (r16((uint32_t)(0x119e7372)));
  /* 119c3bd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c3bd8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3bda mov cx, word ptr [0x119e7374] */
  CX = (r16((uint32_t)(0x119e7374)));
  /* 119c3be1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c3be4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c3be8 jne 0x119c3bf2 */
  if (!C.zf) goto L_119c3bf2;
  /* 119c3bea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c3bed jmp 0x119c414b */
  goto L_119c414b;
L_119c3bf2:;
  /* 119c3bf2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3bf5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3bf8 push edx */
  push32((uint32_t)(EDX));
  /* 119c3bf9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 119c3bfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3bfe push eax */
  push32((uint32_t)(EAX));
  /* 119c3bff push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3c01 call 0x119c7bb0 */
  push32(0x119c3c06u); f_119c7bb0();
  /* 119c3c06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3c0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3c0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3c11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3c14 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c17 push edx */
  push32((uint32_t)(EDX));
  /* 119c3c18 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 119c3c1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3c1d push eax */
  push32((uint32_t)(EAX));
  /* 119c3c1e push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3c20 call 0x119c7bb0 */
  push32(0x119c3c25u); f_119c7bb0();
  /* 119c3c25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3c2b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3c2d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3c30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3c33 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c36 push edx */
  push32((uint32_t)(EDX));
  /* 119c3c37 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 119c3c39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3c3c push eax */
  push32((uint32_t)(EAX));
  /* 119c3c3d push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3c3f call 0x119c7bb0 */
  push32(0x119c3c44u); f_119c7bb0();
  /* 119c3c44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3c4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3c4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3c4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3c52 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c55 push edx */
  push32((uint32_t)(EDX));
  /* 119c3c56 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 119c3c58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3c5b push eax */
  push32((uint32_t)(EAX));
  /* 119c3c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3c5e call 0x119c7bb0 */
  push32(0x119c3c63u); f_119c7bb0();
  /* 119c3c63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3c69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3c6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3c71 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c74 push edx */
  push32((uint32_t)(EDX));
  /* 119c3c75 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 119c3c77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3c7a push eax */
  push32((uint32_t)(EAX));
  /* 119c3c7b push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3c7d call 0x119c7bb0 */
  push32(0x119c3c82u); f_119c7bb0();
  /* 119c3c82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3c88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3c8a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3c8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3c90 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3c93 push edx */
  push32((uint32_t)(EDX));
  /* 119c3c94 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 119c3c96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3c99 push eax */
  push32((uint32_t)(EAX));
  /* 119c3c9a push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3c9c call 0x119c7bb0 */
  push32(0x119c3ca1u); f_119c7bb0();
  /* 119c3ca1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3ca4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3ca7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3ca9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3cac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3caf push edx */
  push32((uint32_t)(EDX));
  /* 119c3cb0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 119c3cb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3cb5 push eax */
  push32((uint32_t)(EAX));
  /* 119c3cb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3cb8 call 0x119c7bb0 */
  push32(0x119c3cbdu); f_119c7bb0();
  /* 119c3cbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3cc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3cc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3cc5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3cc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3ccb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3cce push edx */
  push32((uint32_t)(EDX));
  /* 119c3ccf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 119c3cd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3cd4 push eax */
  push32((uint32_t)(EAX));
  /* 119c3cd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3cd7 call 0x119c7bb0 */
  push32(0x119c3cdcu); f_119c7bb0();
  /* 119c3cdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3cdf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3ce2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3ce4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3ce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3cea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3ced push edx */
  push32((uint32_t)(EDX));
  /* 119c3cee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 119c3cf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3cf3 push eax */
  push32((uint32_t)(EAX));
  /* 119c3cf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3cf6 call 0x119c7bb0 */
  push32(0x119c3cfbu); f_119c7bb0();
  /* 119c3cfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3cfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3d01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3d03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3d06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3d09 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d0c push edx */
  push32((uint32_t)(EDX));
  /* 119c3d0d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 119c3d0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3d12 push eax */
  push32((uint32_t)(EAX));
  /* 119c3d13 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3d15 call 0x119c7bb0 */
  push32(0x119c3d1au); f_119c7bb0();
  /* 119c3d1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3d20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3d22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3d25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3d28 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d2b push edx */
  push32((uint32_t)(EDX));
  /* 119c3d2c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 119c3d2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3d31 push eax */
  push32((uint32_t)(EAX));
  /* 119c3d32 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3d34 call 0x119c7bb0 */
  push32(0x119c3d39u); f_119c7bb0();
  /* 119c3d39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3d3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3d41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3d44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3d47 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d4a push edx */
  push32((uint32_t)(EDX));
  /* 119c3d4b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 119c3d4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3d50 push eax */
  push32((uint32_t)(EAX));
  /* 119c3d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3d53 call 0x119c7bb0 */
  push32(0x119c3d58u); f_119c7bb0();
  /* 119c3d58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3d5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3d60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3d63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3d66 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d69 push edx */
  push32((uint32_t)(EDX));
  /* 119c3d6a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 119c3d6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3d6f push eax */
  push32((uint32_t)(EAX));
  /* 119c3d70 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3d72 call 0x119c7bb0 */
  push32(0x119c3d77u); f_119c7bb0();
  /* 119c3d77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3d7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3d7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3d82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3d85 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d88 push edx */
  push32((uint32_t)(EDX));
  /* 119c3d89 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 119c3d8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3d8e push eax */
  push32((uint32_t)(EAX));
  /* 119c3d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3d91 call 0x119c7bb0 */
  push32(0x119c3d96u); f_119c7bb0();
  /* 119c3d96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3d99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3d9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3d9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3da1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3da4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3da7 push edx */
  push32((uint32_t)(EDX));
  /* 119c3da8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 119c3daa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3dad push eax */
  push32((uint32_t)(EAX));
  /* 119c3dae push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3db0 call 0x119c7bb0 */
  push32(0x119c3db5u); f_119c7bb0();
  /* 119c3db5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3db8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3dbb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3dbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3dc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3dc3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3dc6 push edx */
  push32((uint32_t)(EDX));
  /* 119c3dc7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 119c3dc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3dcc push eax */
  push32((uint32_t)(EAX));
  /* 119c3dcd push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3dcf call 0x119c7bb0 */
  push32(0x119c3dd4u); f_119c7bb0();
  /* 119c3dd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3dd7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3dda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3ddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3ddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3de2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3de5 push edx */
  push32((uint32_t)(EDX));
  /* 119c3de6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 119c3de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3deb push eax */
  push32((uint32_t)(EAX));
  /* 119c3dec push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3dee call 0x119c7bb0 */
  push32(0x119c3df3u); f_119c7bb0();
  /* 119c3df3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3df6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3df9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3dfb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3dfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3e01 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e04 push edx */
  push32((uint32_t)(EDX));
  /* 119c3e05 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 119c3e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3e0a push eax */
  push32((uint32_t)(EAX));
  /* 119c3e0b push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3e0d call 0x119c7bb0 */
  push32(0x119c3e12u); f_119c7bb0();
  /* 119c3e12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3e18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3e1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3e1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3e20 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e23 push edx */
  push32((uint32_t)(EDX));
  /* 119c3e24 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 119c3e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3e29 push eax */
  push32((uint32_t)(EAX));
  /* 119c3e2a push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3e2c call 0x119c7bb0 */
  push32(0x119c3e31u); f_119c7bb0();
  /* 119c3e31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3e37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3e39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3e3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3e3f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e42 push edx */
  push32((uint32_t)(EDX));
  /* 119c3e43 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 119c3e45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3e48 push eax */
  push32((uint32_t)(EAX));
  /* 119c3e49 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3e4b call 0x119c7bb0 */
  push32(0x119c3e50u); f_119c7bb0();
  /* 119c3e50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3e56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3e58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3e5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3e5e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e61 push edx */
  push32((uint32_t)(EDX));
  /* 119c3e62 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 119c3e64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3e67 push eax */
  push32((uint32_t)(EAX));
  /* 119c3e68 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3e6a call 0x119c7bb0 */
  push32(0x119c3e6fu); f_119c7bb0();
  /* 119c3e6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e72 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3e75 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3e77 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3e7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3e7d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e80 push edx */
  push32((uint32_t)(EDX));
  /* 119c3e81 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 119c3e83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3e86 push eax */
  push32((uint32_t)(EAX));
  /* 119c3e87 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3e89 call 0x119c7bb0 */
  push32(0x119c3e8eu); f_119c7bb0();
  /* 119c3e8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3e94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3e96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3e99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3e9c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3e9f push edx */
  push32((uint32_t)(EDX));
  /* 119c3ea0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 119c3ea2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3ea5 push eax */
  push32((uint32_t)(EAX));
  /* 119c3ea6 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3ea8 call 0x119c7bb0 */
  push32(0x119c3eadu); f_119c7bb0();
  /* 119c3ead add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3eb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3eb3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3eb5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3eb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3ebb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3ebe push edx */
  push32((uint32_t)(EDX));
  /* 119c3ebf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 119c3ec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3ec4 push eax */
  push32((uint32_t)(EAX));
  /* 119c3ec5 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3ec7 call 0x119c7bb0 */
  push32(0x119c3eccu); f_119c7bb0();
  /* 119c3ecc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3ecf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3ed2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3ed4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3ed7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3eda add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3edd push edx */
  push32((uint32_t)(EDX));
  /* 119c3ede push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 119c3ee0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3ee3 push eax */
  push32((uint32_t)(EAX));
  /* 119c3ee4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3ee6 call 0x119c7bb0 */
  push32(0x119c3eebu); f_119c7bb0();
  /* 119c3eeb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3eee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3ef1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3ef3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3ef6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3ef9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3efc push edx */
  push32((uint32_t)(EDX));
  /* 119c3efd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 119c3eff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3f02 push eax */
  push32((uint32_t)(EAX));
  /* 119c3f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3f05 call 0x119c7bb0 */
  push32(0x119c3f0au); f_119c7bb0();
  /* 119c3f0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3f10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3f12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3f15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3f18 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f1b push edx */
  push32((uint32_t)(EDX));
  /* 119c3f1c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 119c3f1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3f21 push eax */
  push32((uint32_t)(EAX));
  /* 119c3f22 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3f24 call 0x119c7bb0 */
  push32(0x119c3f29u); f_119c7bb0();
  /* 119c3f29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3f2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3f31 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3f34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3f37 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f3a push edx */
  push32((uint32_t)(EDX));
  /* 119c3f3b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 119c3f3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3f40 push eax */
  push32((uint32_t)(EAX));
  /* 119c3f41 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3f43 call 0x119c7bb0 */
  push32(0x119c3f48u); f_119c7bb0();
  /* 119c3f48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3f4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3f50 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3f53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3f56 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f59 push edx */
  push32((uint32_t)(EDX));
  /* 119c3f5a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 119c3f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3f5f push eax */
  push32((uint32_t)(EAX));
  /* 119c3f60 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3f62 call 0x119c7bb0 */
  push32(0x119c3f67u); f_119c7bb0();
  /* 119c3f67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3f6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3f6f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3f72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3f75 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f78 push edx */
  push32((uint32_t)(EDX));
  /* 119c3f79 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 119c3f7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3f7e push eax */
  push32((uint32_t)(EAX));
  /* 119c3f7f push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3f81 call 0x119c7bb0 */
  push32(0x119c3f86u); f_119c7bb0();
  /* 119c3f86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3f8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3f8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3f91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3f94 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3f97 push edx */
  push32((uint32_t)(EDX));
  /* 119c3f98 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 119c3f9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3f9d push eax */
  push32((uint32_t)(EAX));
  /* 119c3f9e push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3fa0 call 0x119c7bb0 */
  push32(0x119c3fa5u); f_119c7bb0();
  /* 119c3fa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3fa8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3fab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3fad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3fb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3fb3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3fb6 push edx */
  push32((uint32_t)(EDX));
  /* 119c3fb7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 119c3fb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3fbc push eax */
  push32((uint32_t)(EAX));
  /* 119c3fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3fbf call 0x119c7bb0 */
  push32(0x119c3fc4u); f_119c7bb0();
  /* 119c3fc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3fc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3fca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3fcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3fcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3fd2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3fd8 push edx */
  push32((uint32_t)(EDX));
  /* 119c3fd9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 119c3fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c3fde push eax */
  push32((uint32_t)(EAX));
  /* 119c3fdf push 1 */
  push32((uint32_t)(0x1u));
  /* 119c3fe1 call 0x119c7bb0 */
  push32(0x119c3fe6u); f_119c7bb0();
  /* 119c3fe6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3fe9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c3fec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c3fee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c3ff1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c3ff4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c3ffa push edx */
  push32((uint32_t)(EDX));
  /* 119c3ffb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119c3ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4000 push eax */
  push32((uint32_t)(EAX));
  /* 119c4001 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4003 call 0x119c7bb0 */
  push32(0x119c4008u); f_119c7bb0();
  /* 119c4008 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c400b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c400e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4010 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c4013 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4016 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c401c push edx */
  push32((uint32_t)(EDX));
  /* 119c401d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119c401f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4022 push eax */
  push32((uint32_t)(EAX));
  /* 119c4023 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4025 call 0x119c7bb0 */
  push32(0x119c402au); f_119c7bb0();
  /* 119c402a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c402d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c4030 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4032 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c4035 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4038 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c403e push edx */
  push32((uint32_t)(EDX));
  /* 119c403f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 119c4041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4044 push eax */
  push32((uint32_t)(EAX));
  /* 119c4045 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4047 call 0x119c7bb0 */
  push32(0x119c404cu); f_119c7bb0();
  /* 119c404c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c404f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c4052 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4054 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c4057 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c405a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4060 push edx */
  push32((uint32_t)(EDX));
  /* 119c4061 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 119c4063 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4066 push eax */
  push32((uint32_t)(EAX));
  /* 119c4067 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4069 call 0x119c7bb0 */
  push32(0x119c406eu); f_119c7bb0();
  /* 119c406e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4071 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c4074 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4076 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c4079 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c407c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4082 push edx */
  push32((uint32_t)(EDX));
  /* 119c4083 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 119c4085 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4088 push eax */
  push32((uint32_t)(EAX));
  /* 119c4089 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c408b call 0x119c7bb0 */
  push32(0x119c4090u); f_119c7bb0();
  /* 119c4090 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4093 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c4096 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4098 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c409b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c409e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c40a4 push edx */
  push32((uint32_t)(EDX));
  /* 119c40a5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 119c40a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c40aa push eax */
  push32((uint32_t)(EAX));
  /* 119c40ab push 1 */
  push32((uint32_t)(0x1u));
  /* 119c40ad call 0x119c7bb0 */
  push32(0x119c40b2u); f_119c7bb0();
  /* 119c40b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c40b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c40b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c40ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c40bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c40c0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c40c6 push edx */
  push32((uint32_t)(EDX));
  /* 119c40c7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 119c40c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c40cc push eax */
  push32((uint32_t)(EAX));
  /* 119c40cd push 1 */
  push32((uint32_t)(0x1u));
  /* 119c40cf call 0x119c7bb0 */
  push32(0x119c40d4u); f_119c7bb0();
  /* 119c40d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c40d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c40da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c40dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c40df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c40e2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c40e8 push edx */
  push32((uint32_t)(EDX));
  /* 119c40e9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 119c40eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c40ee push eax */
  push32((uint32_t)(EAX));
  /* 119c40ef push 1 */
  push32((uint32_t)(0x1u));
  /* 119c40f1 call 0x119c7bb0 */
  push32(0x119c40f6u); f_119c7bb0();
  /* 119c40f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c40f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c40fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c40fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c4101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4104 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c410a push edx */
  push32((uint32_t)(EDX));
  /* 119c410b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 119c410d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4110 push eax */
  push32((uint32_t)(EAX));
  /* 119c4111 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4113 call 0x119c7bb0 */
  push32(0x119c4118u); f_119c7bb0();
  /* 119c4118 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c411b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c411e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4120 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c4123 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4126 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c412c push edx */
  push32((uint32_t)(EDX));
  /* 119c412d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 119c4132 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4135 push eax */
  push32((uint32_t)(EAX));
  /* 119c4136 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4138 call 0x119c7bb0 */
  push32(0x119c413du); f_119c7bb0();
  /* 119c413d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4140 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c4143 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4145 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c4148 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_119c414b:;
  /* 119c414b mov esp, ebp */
  ESP = (EBP);
  /* 119c414d pop ebp */
  EBP = (pop32());
  /* 119c414e ret  */
  ESPCHK(0x119c3bc0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x119c4150 (779 bytes, 265 insns) */
void f_119c4150(void) {
  FTRACE(0x119c4150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c4150 push ebp */
  push32((uint32_t)(EBP));
  /* 119c4151 mov ebp, esp */
  EBP = (ESP);
  /* 119c4153 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4157 jne 0x119c415e */
  if (!C.zf) goto L_119c415e;
  /* 119c4159 jmp 0x119c4459 */
  goto L_119c4459;
L_119c415e:;
  /* 119c415e push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4163 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119c4166 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4167 call 0x119b8ca0 */
  push32(0x119c416cu); f_119b8ca0();
  /* 119c416c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c416f push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4174 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c4177 push eax */
  push32((uint32_t)(EAX));
  /* 119c4178 call 0x119b8ca0 */
  push32(0x119c417du); f_119b8ca0();
  /* 119c417d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4180 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4182 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4185 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c4188 push edx */
  push32((uint32_t)(EDX));
  /* 119c4189 call 0x119b8ca0 */
  push32(0x119c418eu); f_119b8ca0();
  /* 119c418e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4191 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4196 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119c4199 push ecx */
  push32((uint32_t)(ECX));
  /* 119c419a call 0x119b8ca0 */
  push32(0x119c419fu); f_119b8ca0();
  /* 119c419f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c41a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c41a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c41a7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119c41aa push eax */
  push32((uint32_t)(EAX));
  /* 119c41ab call 0x119b8ca0 */
  push32(0x119c41b0u); f_119b8ca0();
  /* 119c41b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c41b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c41b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c41b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 119c41bb push edx */
  push32((uint32_t)(EDX));
  /* 119c41bc call 0x119b8ca0 */
  push32(0x119c41c1u); f_119b8ca0();
  /* 119c41c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c41c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c41c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c41c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c41cb push ecx */
  push32((uint32_t)(ECX));
  /* 119c41cc call 0x119b8ca0 */
  push32(0x119c41d1u); f_119b8ca0();
  /* 119c41d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c41d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c41d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c41d9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 119c41dc push eax */
  push32((uint32_t)(EAX));
  /* 119c41dd call 0x119b8ca0 */
  push32(0x119c41e2u); f_119b8ca0();
  /* 119c41e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c41e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c41e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c41ea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 119c41ed push edx */
  push32((uint32_t)(EDX));
  /* 119c41ee call 0x119b8ca0 */
  push32(0x119c41f3u); f_119b8ca0();
  /* 119c41f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c41f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c41f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c41fb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 119c41fe push ecx */
  push32((uint32_t)(ECX));
  /* 119c41ff call 0x119b8ca0 */
  push32(0x119c4204u); f_119b8ca0();
  /* 119c4204 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4207 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c420c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 119c420f push eax */
  push32((uint32_t)(EAX));
  /* 119c4210 call 0x119b8ca0 */
  push32(0x119c4215u); f_119b8ca0();
  /* 119c4215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4218 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c421a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c421d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 119c4220 push edx */
  push32((uint32_t)(EDX));
  /* 119c4221 call 0x119b8ca0 */
  push32(0x119c4226u); f_119b8ca0();
  /* 119c4226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4229 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c422b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c422e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 119c4231 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4232 call 0x119b8ca0 */
  push32(0x119c4237u); f_119b8ca0();
  /* 119c4237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c423a push 2 */
  push32((uint32_t)(0x2u));
  /* 119c423c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c423f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 119c4242 push eax */
  push32((uint32_t)(EAX));
  /* 119c4243 call 0x119b8ca0 */
  push32(0x119c4248u); f_119b8ca0();
  /* 119c4248 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c424b push 2 */
  push32((uint32_t)(0x2u));
  /* 119c424d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4250 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 119c4253 push edx */
  push32((uint32_t)(EDX));
  /* 119c4254 call 0x119b8ca0 */
  push32(0x119c4259u); f_119b8ca0();
  /* 119c4259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c425c push 2 */
  push32((uint32_t)(0x2u));
  /* 119c425e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4261 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 119c4264 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4265 call 0x119b8ca0 */
  push32(0x119c426au); f_119b8ca0();
  /* 119c426a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c426d push 2 */
  push32((uint32_t)(0x2u));
  /* 119c426f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4272 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 119c4275 push eax */
  push32((uint32_t)(EAX));
  /* 119c4276 call 0x119b8ca0 */
  push32(0x119c427bu); f_119b8ca0();
  /* 119c427b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c427e push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4283 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 119c4286 push edx */
  push32((uint32_t)(EDX));
  /* 119c4287 call 0x119b8ca0 */
  push32(0x119c428cu); f_119b8ca0();
  /* 119c428c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c428f push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4294 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 119c4297 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4298 call 0x119b8ca0 */
  push32(0x119c429du); f_119b8ca0();
  /* 119c429d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c42a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c42a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c42a5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 119c42a8 push eax */
  push32((uint32_t)(EAX));
  /* 119c42a9 call 0x119b8ca0 */
  push32(0x119c42aeu); f_119b8ca0();
  /* 119c42ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c42b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c42b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c42b6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 119c42b9 push edx */
  push32((uint32_t)(EDX));
  /* 119c42ba call 0x119b8ca0 */
  push32(0x119c42bfu); f_119b8ca0();
  /* 119c42bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c42c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c42c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c42c7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 119c42ca push ecx */
  push32((uint32_t)(ECX));
  /* 119c42cb call 0x119b8ca0 */
  push32(0x119c42d0u); f_119b8ca0();
  /* 119c42d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c42d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c42d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c42d8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 119c42db push eax */
  push32((uint32_t)(EAX));
  /* 119c42dc call 0x119b8ca0 */
  push32(0x119c42e1u); f_119b8ca0();
  /* 119c42e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c42e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c42e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c42e9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 119c42ec push edx */
  push32((uint32_t)(EDX));
  /* 119c42ed call 0x119b8ca0 */
  push32(0x119c42f2u); f_119b8ca0();
  /* 119c42f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c42f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c42f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c42fa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 119c42fd push ecx */
  push32((uint32_t)(ECX));
  /* 119c42fe call 0x119b8ca0 */
  push32(0x119c4303u); f_119b8ca0();
  /* 119c4303 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4306 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4308 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c430b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 119c430e push eax */
  push32((uint32_t)(EAX));
  /* 119c430f call 0x119b8ca0 */
  push32(0x119c4314u); f_119b8ca0();
  /* 119c4314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4317 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c431c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 119c431f push edx */
  push32((uint32_t)(EDX));
  /* 119c4320 call 0x119b8ca0 */
  push32(0x119c4325u); f_119b8ca0();
  /* 119c4325 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4328 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c432a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c432d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 119c4330 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4331 call 0x119b8ca0 */
  push32(0x119c4336u); f_119b8ca0();
  /* 119c4336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4339 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c433b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c433e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 119c4341 push eax */
  push32((uint32_t)(EAX));
  /* 119c4342 call 0x119b8ca0 */
  push32(0x119c4347u); f_119b8ca0();
  /* 119c4347 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c434a push 2 */
  push32((uint32_t)(0x2u));
  /* 119c434c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c434f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 119c4352 push edx */
  push32((uint32_t)(EDX));
  /* 119c4353 call 0x119b8ca0 */
  push32(0x119c4358u); f_119b8ca0();
  /* 119c4358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c435b push 2 */
  push32((uint32_t)(0x2u));
  /* 119c435d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4360 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 119c4363 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4364 call 0x119b8ca0 */
  push32(0x119c4369u); f_119b8ca0();
  /* 119c4369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c436c push 2 */
  push32((uint32_t)(0x2u));
  /* 119c436e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4371 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 119c4374 push eax */
  push32((uint32_t)(EAX));
  /* 119c4375 call 0x119b8ca0 */
  push32(0x119c437au); f_119b8ca0();
  /* 119c437a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c437d push 2 */
  push32((uint32_t)(0x2u));
  /* 119c437f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4382 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 119c4388 push edx */
  push32((uint32_t)(EDX));
  /* 119c4389 call 0x119b8ca0 */
  push32(0x119c438eu); f_119b8ca0();
  /* 119c438e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4391 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4396 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 119c439c push ecx */
  push32((uint32_t)(ECX));
  /* 119c439d call 0x119b8ca0 */
  push32(0x119c43a2u); f_119b8ca0();
  /* 119c43a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c43a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c43a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c43aa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 119c43b0 push eax */
  push32((uint32_t)(EAX));
  /* 119c43b1 call 0x119b8ca0 */
  push32(0x119c43b6u); f_119b8ca0();
  /* 119c43b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c43b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c43bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c43be mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 119c43c4 push edx */
  push32((uint32_t)(EDX));
  /* 119c43c5 call 0x119b8ca0 */
  push32(0x119c43cau); f_119b8ca0();
  /* 119c43ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c43cd push 2 */
  push32((uint32_t)(0x2u));
  /* 119c43cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c43d2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 119c43d8 push ecx */
  push32((uint32_t)(ECX));
  /* 119c43d9 call 0x119b8ca0 */
  push32(0x119c43deu); f_119b8ca0();
  /* 119c43de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c43e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c43e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c43e6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 119c43ec push eax */
  push32((uint32_t)(EAX));
  /* 119c43ed call 0x119b8ca0 */
  push32(0x119c43f2u); f_119b8ca0();
  /* 119c43f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c43f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c43f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c43fa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 119c4400 push edx */
  push32((uint32_t)(EDX));
  /* 119c4401 call 0x119b8ca0 */
  push32(0x119c4406u); f_119b8ca0();
  /* 119c4406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4409 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c440b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c440e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 119c4414 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4415 call 0x119b8ca0 */
  push32(0x119c441au); f_119b8ca0();
  /* 119c441a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c441d push 2 */
  push32((uint32_t)(0x2u));
  /* 119c441f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4422 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 119c4428 push eax */
  push32((uint32_t)(EAX));
  /* 119c4429 call 0x119b8ca0 */
  push32(0x119c442eu); f_119b8ca0();
  /* 119c442e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4431 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4433 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4436 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 119c443c push edx */
  push32((uint32_t)(EDX));
  /* 119c443d call 0x119b8ca0 */
  push32(0x119c4442u); f_119b8ca0();
  /* 119c4442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4445 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4447 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c444a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 119c4450 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4451 call 0x119b8ca0 */
  push32(0x119c4456u); f_119b8ca0();
  /* 119c4456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c4459:;
  /* 119c4459 pop ebp */
  EBP = (pop32());
  /* 119c445a ret  */
  ESPCHK(0x119c4150u, _esp0);
  ESP += 4; return;
}

/* FUN_10014460 @ 0x119c4460 (678 bytes, 180 insns) */
void f_119c4460(void) {
  FTRACE(0x119c4460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c4460 push ebp */
  push32((uint32_t)(EBP));
  /* 119c4461 mov ebp, esp */
  EBP = (ESP);
  /* 119c4463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c4466 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c446d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c446f mov ax, word ptr [0x119e736e] */
  AX = (r16((uint32_t)(0x119e736e)));
  /* 119c4475 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c4478 cmp dword ptr [0x119e7320], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c447f je 0x119c45da */
  if (C.zf) goto L_119c45da;
  /* 119c4485 push 0x119e733c */
  push32((uint32_t)(0x119e733cu));
  /* 119c448a push 0xe */
  push32((uint32_t)(0xeu));
  /* 119c448c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c448f push ecx */
  push32((uint32_t)(ECX));
  /* 119c4490 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4492 call 0x119c7bb0 */
  push32(0x119c4497u); f_119c7bb0();
  /* 119c4497 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c449a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c449d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 119c449f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c44a2 push 0x119e7340 */
  push32((uint32_t)(0x119e7340u));
  /* 119c44a7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 119c44a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c44ac push eax */
  push32((uint32_t)(EAX));
  /* 119c44ad push 1 */
  push32((uint32_t)(0x1u));
  /* 119c44af call 0x119c7bb0 */
  push32(0x119c44b4u); f_119c7bb0();
  /* 119c44b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c44b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c44ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c44bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c44bf push 0x119e7344 */
  push32((uint32_t)(0x119e7344u));
  /* 119c44c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 119c44c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c44c9 push edx */
  push32((uint32_t)(EDX));
  /* 119c44ca push 1 */
  push32((uint32_t)(0x1u));
  /* 119c44cc call 0x119c7bb0 */
  push32(0x119c44d1u); f_119c7bb0();
  /* 119c44d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c44d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c44d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c44d9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c44dc mov edx, dword ptr [0x119e7344] */
  EDX = (r32((uint32_t)(0x119e7344)));
  /* 119c44e2 push edx */
  push32((uint32_t)(EDX));
  /* 119c44e3 call 0x119c4710 */
  push32(0x119c44e8u); f_119c4710();
  /* 119c44e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c44eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c44ef je 0x119c4549 */
  if (C.zf) goto L_119c4549;
  /* 119c44f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c44f3 mov eax, dword ptr [0x119e733c] */
  EAX = (r32((uint32_t)(0x119e733c)));
  /* 119c44f8 push eax */
  push32((uint32_t)(EAX));
  /* 119c44f9 call 0x119b8ca0 */
  push32(0x119c44feu); f_119b8ca0();
  /* 119c44fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4501 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4503 mov ecx, dword ptr [0x119e7340] */
  ECX = (r32((uint32_t)(0x119e7340)));
  /* 119c4509 push ecx */
  push32((uint32_t)(ECX));
  /* 119c450a call 0x119b8ca0 */
  push32(0x119c450fu); f_119b8ca0();
  /* 119c450f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4512 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4514 mov edx, dword ptr [0x119e7344] */
  EDX = (r32((uint32_t)(0x119e7344)));
  /* 119c451a push edx */
  push32((uint32_t)(EDX));
  /* 119c451b call 0x119b8ca0 */
  push32(0x119c4520u); f_119b8ca0();
  /* 119c4520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4523 mov dword ptr [0x119e733c], 0 */
  w32((uint32_t)(0x119e733c), (0x0u));
  /* 119c452d mov dword ptr [0x119e7340], 0 */
  w32((uint32_t)(0x119e7340), (0x0u));
  /* 119c4537 mov dword ptr [0x119e7344], 0 */
  w32((uint32_t)(0x119e7344), (0x0u));
  /* 119c4541 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c4544 jmp 0x119c4702 */
  goto L_119c4702;
L_119c4549:;
  /* 119c4549 mov eax, dword ptr [0x119e5dd8] */
  EAX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c454e cmp dword ptr [eax], 0x119e5da0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x119e5da0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4554 je 0x119c4590 */
  if (C.zf) goto L_119c4590;
  /* 119c4556 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4558 mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c455e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c4560 push edx */
  push32((uint32_t)(EDX));
  /* 119c4561 call 0x119b8ca0 */
  push32(0x119c4566u); f_119b8ca0();
  /* 119c4566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4569 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c456b mov eax, dword ptr [0x119e5dd8] */
  EAX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4570 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119c4573 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4574 call 0x119b8ca0 */
  push32(0x119c4579u); f_119b8ca0();
  /* 119c4579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c457c push 2 */
  push32((uint32_t)(0x2u));
  /* 119c457e mov edx, dword ptr [0x119e5dd8] */
  EDX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4584 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c4587 push eax */
  push32((uint32_t)(EAX));
  /* 119c4588 call 0x119b8ca0 */
  push32(0x119c458du); f_119b8ca0();
  /* 119c458d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c4590:;
  /* 119c4590 mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4596 mov edx, dword ptr [0x119e733c] */
  EDX = (r32((uint32_t)(0x119e733c)));
  /* 119c459c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 119c459e mov eax, dword ptr [0x119e5dd8] */
  EAX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c45a3 mov ecx, dword ptr [0x119e7340] */
  ECX = (r32((uint32_t)(0x119e7340)));
  /* 119c45a9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119c45ac mov edx, dword ptr [0x119e5dd8] */
  EDX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c45b2 mov eax, dword ptr [0x119e7344] */
  EAX = (r32((uint32_t)(0x119e7344)));
  /* 119c45b7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 119c45ba mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c45c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c45c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c45c4 mov byte ptr [0x119e5014], al */
  w8((uint32_t)(0x119e5014), (AL));
  /* 119c45c9 mov dword ptr [0x119e5018], 1 */
  w32((uint32_t)(0x119e5018), (0x1u));
  /* 119c45d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c45d5 jmp 0x119c4702 */
  goto L_119c4702;
L_119c45da:;
  /* 119c45da push 2 */
  push32((uint32_t)(0x2u));
  /* 119c45dc mov ecx, dword ptr [0x119e733c] */
  ECX = (r32((uint32_t)(0x119e733c)));
  /* 119c45e2 push ecx */
  push32((uint32_t)(ECX));
  /* 119c45e3 call 0x119b8ca0 */
  push32(0x119c45e8u); f_119b8ca0();
  /* 119c45e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c45eb push 2 */
  push32((uint32_t)(0x2u));
  /* 119c45ed mov edx, dword ptr [0x119e7340] */
  EDX = (r32((uint32_t)(0x119e7340)));
  /* 119c45f3 push edx */
  push32((uint32_t)(EDX));
  /* 119c45f4 call 0x119b8ca0 */
  push32(0x119c45f9u); f_119b8ca0();
  /* 119c45f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c45fc push 2 */
  push32((uint32_t)(0x2u));
  /* 119c45fe mov eax, dword ptr [0x119e7344] */
  EAX = (r32((uint32_t)(0x119e7344)));
  /* 119c4603 push eax */
  push32((uint32_t)(EAX));
  /* 119c4604 call 0x119b8ca0 */
  push32(0x119c4609u); f_119b8ca0();
  /* 119c4609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c460c mov dword ptr [0x119e733c], 0 */
  w32((uint32_t)(0x119e733c), (0x0u));
  /* 119c4616 mov dword ptr [0x119e7340], 0 */
  w32((uint32_t)(0x119e7340), (0x0u));
  /* 119c4620 mov dword ptr [0x119e7344], 0 */
  w32((uint32_t)(0x119e7344), (0x0u));
  /* 119c462a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 119c462f push 0x119e22e0 */
  push32((uint32_t)(0x119e22e0u));
  /* 119c4634 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4636 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4638 call 0x119b8210 */
  push32(0x119c463du); f_119b8210();
  /* 119c463d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4640 mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4646 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119c4648 mov edx, dword ptr [0x119e5dd8] */
  EDX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c464e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4651 jne 0x119c465b */
  if (!C.zf) goto L_119c465b;
  /* 119c4653 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c4656 jmp 0x119c4702 */
  goto L_119c4702;
L_119c465b:;
  /* 119c465b push 0x119e2260 */
  push32((uint32_t)(0x119e2260u));
  /* 119c4660 mov eax, dword ptr [0x119e5dd8] */
  EAX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4665 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c4667 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4668 call 0x119bb1c0 */
  push32(0x119c466du); f_119bb1c0();
  /* 119c466d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4670 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 119c4675 push 0x119e22e0 */
  push32((uint32_t)(0x119e22e0u));
  /* 119c467a push 2 */
  push32((uint32_t)(0x2u));
  /* 119c467c push 2 */
  push32((uint32_t)(0x2u));
  /* 119c467e call 0x119b8210 */
  push32(0x119c4683u); f_119b8210();
  /* 119c4683 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4686 mov edx, dword ptr [0x119e5dd8] */
  EDX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c468c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 119c468f mov eax, dword ptr [0x119e5dd8] */
  EAX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4694 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4698 jne 0x119c469f */
  if (!C.zf) goto L_119c469f;
  /* 119c469a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c469d jmp 0x119c4702 */
  goto L_119c4702;
L_119c469f:;
  /* 119c469f mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c46a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119c46a8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 119c46ab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 119c46b0 push 0x119e22e0 */
  push32((uint32_t)(0x119e22e0u));
  /* 119c46b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c46b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c46b9 call 0x119b8210 */
  push32(0x119c46beu); f_119b8210();
  /* 119c46be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c46c1 mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c46c7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 119c46ca mov edx, dword ptr [0x119e5dd8] */
  EDX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c46d0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c46d4 jne 0x119c46db */
  if (!C.zf) goto L_119c46db;
  /* 119c46d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c46d9 jmp 0x119c4702 */
  goto L_119c4702;
L_119c46db:;
  /* 119c46db mov eax, dword ptr [0x119e5dd8] */
  EAX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c46e0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119c46e3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 119c46e6 mov edx, dword ptr [0x119e5dd8] */
  EDX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c46ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c46ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c46f0 mov byte ptr [0x119e5014], cl */
  w8((uint32_t)(0x119e5014), (CL));
  /* 119c46f6 mov dword ptr [0x119e5018], 1 */
  w32((uint32_t)(0x119e5018), (0x1u));
  /* 119c4700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c4702:;
  /* 119c4702 mov esp, ebp */
  ESP = (EBP);
  /* 119c4704 pop ebp */
  EBP = (pop32());
  /* 119c4705 ret  */
  ESPCHK(0x119c4460u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x119c4710 (125 bytes, 49 insns) */
void f_119c4710(void) {
  FTRACE(0x119c4710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c4710 push ebp */
  push32((uint32_t)(EBP));
  /* 119c4711 mov ebp, esp */
  EBP = (ESP);
  /* 119c4713 push ecx */
  push32((uint32_t)(ECX));
L_119c4714:;
  /* 119c4714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4717 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c471a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c471c je 0x119c4789 */
  if (C.zf) goto L_119c4789;
  /* 119c471e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4721 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c4724 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4727 jl 0x119c474d */
  if ((C.sf!=C.of)) goto L_119c474d;
  /* 119c4729 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c472c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c472f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4732 jg 0x119c474d */
  if ((!C.zf&&C.sf==C.of)) goto L_119c474d;
  /* 119c4734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4737 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c473a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c473d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4740 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119c4742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4745 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4748 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c474b jmp 0x119c4787 */
  goto L_119c4787;
L_119c474d:;
  /* 119c474d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4750 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c4753 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4756 jne 0x119c477e */
  if (!C.zf) goto L_119c477e;
  /* 119c4758 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c475b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c475e:;
  /* 119c475e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4761 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4764 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 119c4767 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119c4769 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c476c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c476f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c4772 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4775 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c4778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c477a jne 0x119c475e */
  if (!C.zf) goto L_119c475e;
  /* 119c477c jmp 0x119c4787 */
  goto L_119c4787;
L_119c477e:;
  /* 119c477e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4781 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4784 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_119c4787:;
  /* 119c4787 jmp 0x119c4714 */
  goto L_119c4714;
L_119c4789:;
  /* 119c4789 mov esp, ebp */
  ESP = (EBP);
  /* 119c478b pop ebp */
  EBP = (pop32());
  /* 119c478c ret  */
  ESPCHK(0x119c4710u, _esp0);
  ESP += 4; return;
}

/* FUN_10014790 @ 0x119c4790 (304 bytes, 85 insns) */
void f_119c4790(void) {
  FTRACE(0x119c4790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c4790 push ebp */
  push32((uint32_t)(EBP));
  /* 119c4791 mov ebp, esp */
  EBP = (ESP);
  /* 119c4793 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4794 cmp dword ptr [0x119e731c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e731c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c479b je 0x119c485c */
  if (C.zf) goto L_119c485c;
  /* 119c47a1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 119c47a3 push 0x119e22ec */
  push32((uint32_t)(0x119e22ecu));
  /* 119c47a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c47aa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 119c47ac push 1 */
  push32((uint32_t)(0x1u));
  /* 119c47ae call 0x119b8620 */
  push32(0x119c47b3u); f_119b8620();
  /* 119c47b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c47b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c47b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c47bd jne 0x119c47c9 */
  if (!C.zf) goto L_119c47c9;
  /* 119c47bf mov eax, 1 */
  EAX = (0x1u);
  /* 119c47c4 jmp 0x119c48bc */
  goto L_119c48bc;
L_119c47c9:;
  /* 119c47c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c47cc push eax */
  push32((uint32_t)(EAX));
  /* 119c47cd call 0x119c48c0 */
  push32(0x119c47d2u); f_119c48c0();
  /* 119c47d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c47d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c47d7 je 0x119c47fd */
  if (C.zf) goto L_119c47fd;
  /* 119c47d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c47dc push ecx */
  push32((uint32_t)(ECX));
  /* 119c47dd call 0x119c4b50 */
  push32(0x119c47e2u); f_119c4b50();
  /* 119c47e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c47e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c47e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c47ea push edx */
  push32((uint32_t)(EDX));
  /* 119c47eb call 0x119b8ca0 */
  push32(0x119c47f0u); f_119b8ca0();
  /* 119c47f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c47f3 mov eax, 1 */
  EAX = (0x1u);
  /* 119c47f8 jmp 0x119c48bc */
  goto L_119c48bc;
L_119c47fd:;
  /* 119c47fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4800 mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4806 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c4808 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c480a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c480d mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4813 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119c4816 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 119c4819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c481c mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4822 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119c4825 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 119c4828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c482b mov dword ptr [0x119e5dd8], eax */
  w32((uint32_t)(0x119e5dd8), (EAX));
  /* 119c4830 mov ecx, dword ptr [0x119e7348] */
  ECX = (r32((uint32_t)(0x119e7348)));
  /* 119c4836 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4837 call 0x119c4b50 */
  push32(0x119c483cu); f_119c4b50();
  /* 119c483c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c483f push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4841 mov edx, dword ptr [0x119e7348] */
  EDX = (r32((uint32_t)(0x119e7348)));
  /* 119c4847 push edx */
  push32((uint32_t)(EDX));
  /* 119c4848 call 0x119b8ca0 */
  push32(0x119c484du); f_119b8ca0();
  /* 119c484d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4850 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4853 mov dword ptr [0x119e7348], eax */
  w32((uint32_t)(0x119e7348), (EAX));
  /* 119c4858 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c485a jmp 0x119c48bc */
  goto L_119c48bc;
L_119c485c:;
  /* 119c485c mov ecx, dword ptr [0x119e5dd8] */
  ECX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c4862 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c4864 mov dword ptr [0x119e5da8], edx */
  w32((uint32_t)(0x119e5da8), (EDX));
  /* 119c486a mov eax, dword ptr [0x119e5dd8] */
  EAX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c486f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119c4872 mov dword ptr [0x119e5dac], ecx */
  w32((uint32_t)(0x119e5dac), (ECX));
  /* 119c4878 mov edx, dword ptr [0x119e5dd8] */
  EDX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c487e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c4881 mov dword ptr [0x119e5db0], eax */
  w32((uint32_t)(0x119e5db0), (EAX));
  /* 119c4886 mov dword ptr [0x119e5dd8], 0x119e5da8 */
  w32((uint32_t)(0x119e5dd8), (0x119e5da8u));
  /* 119c4890 mov ecx, dword ptr [0x119e7348] */
  ECX = (r32((uint32_t)(0x119e7348)));
  /* 119c4896 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4897 call 0x119c4b50 */
  push32(0x119c489cu); f_119c4b50();
  /* 119c489c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c489f push 2 */
  push32((uint32_t)(0x2u));
  /* 119c48a1 mov edx, dword ptr [0x119e7348] */
  EDX = (r32((uint32_t)(0x119e7348)));
  /* 119c48a7 push edx */
  push32((uint32_t)(EDX));
  /* 119c48a8 call 0x119b8ca0 */
  push32(0x119c48adu); f_119b8ca0();
  /* 119c48ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c48b0 mov dword ptr [0x119e7348], 0 */
  w32((uint32_t)(0x119e7348), (0x0u));
  /* 119c48ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c48bc:;
  /* 119c48bc mov esp, ebp */
  ESP = (EBP);
  /* 119c48be pop ebp */
  EBP = (pop32());
  /* 119c48bf ret  */
  ESPCHK(0x119c4790u, _esp0);
  ESP += 4; return;
}

/* FUN_100148c0 @ 0x119c48c0 (525 bytes, 200 insns) */
void f_119c48c0(void) {
  FTRACE(0x119c48c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c48c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c48c1 mov ebp, esp */
  EBP = (ESP);
  /* 119c48c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c48c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c48cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c48cf mov ax, word ptr [0x119e7368] */
  AX = (r16((uint32_t)(0x119e7368)));
  /* 119c48d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c48d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c48dc jne 0x119c48e6 */
  if (!C.zf) goto L_119c48e6;
  /* 119c48de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c48e1 jmp 0x119c4ac9 */
  goto L_119c4ac9;
L_119c48e6:;
  /* 119c48e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c48e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c48ec push ecx */
  push32((uint32_t)(ECX));
  /* 119c48ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 119c48ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c48f2 push edx */
  push32((uint32_t)(EDX));
  /* 119c48f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c48f5 call 0x119c7bb0 */
  push32(0x119c48fau); f_119c7bb0();
  /* 119c48fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c48fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4900 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4902 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4908 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c490b push edx */
  push32((uint32_t)(EDX));
  /* 119c490c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 119c490e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4911 push eax */
  push32((uint32_t)(EAX));
  /* 119c4912 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4914 call 0x119c7bb0 */
  push32(0x119c4919u); f_119c7bb0();
  /* 119c4919 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c491c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c491f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4921 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4927 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c492a push edx */
  push32((uint32_t)(EDX));
  /* 119c492b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 119c492d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4930 push eax */
  push32((uint32_t)(EAX));
  /* 119c4931 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4933 call 0x119c7bb0 */
  push32(0x119c4938u); f_119c7bb0();
  /* 119c4938 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c493b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c493e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4940 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4943 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4946 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4949 push edx */
  push32((uint32_t)(EDX));
  /* 119c494a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 119c494c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c494f push eax */
  push32((uint32_t)(EAX));
  /* 119c4950 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4952 call 0x119c7bb0 */
  push32(0x119c4957u); f_119c7bb0();
  /* 119c4957 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c495a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c495d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c495f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4962 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4965 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4968 push edx */
  push32((uint32_t)(EDX));
  /* 119c4969 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 119c496b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c496e push eax */
  push32((uint32_t)(EAX));
  /* 119c496f push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4971 call 0x119c7bb0 */
  push32(0x119c4976u); f_119c7bb0();
  /* 119c4976 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c497c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c497e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4984 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 119c4987 push eax */
  push32((uint32_t)(EAX));
  /* 119c4988 call 0x119c4ad0 */
  push32(0x119c498du); f_119c4ad0();
  /* 119c498d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4993 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4996 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4997 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 119c4999 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c499c push edx */
  push32((uint32_t)(EDX));
  /* 119c499d push 1 */
  push32((uint32_t)(0x1u));
  /* 119c499f call 0x119c7bb0 */
  push32(0x119c49a4u); f_119c7bb0();
  /* 119c49a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c49a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c49aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c49ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c49af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c49b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c49b5 push edx */
  push32((uint32_t)(EDX));
  /* 119c49b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 119c49b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c49bb push eax */
  push32((uint32_t)(EAX));
  /* 119c49bc push 1 */
  push32((uint32_t)(0x1u));
  /* 119c49be call 0x119c7bb0 */
  push32(0x119c49c3u); f_119c7bb0();
  /* 119c49c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c49c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c49c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c49cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c49ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c49d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c49d4 push edx */
  push32((uint32_t)(EDX));
  /* 119c49d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 119c49d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c49da push eax */
  push32((uint32_t)(EAX));
  /* 119c49db push 0 */
  push32((uint32_t)(0x0u));
  /* 119c49dd call 0x119c7bb0 */
  push32(0x119c49e2u); f_119c7bb0();
  /* 119c49e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c49e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c49e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c49ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c49ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c49f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c49f3 push edx */
  push32((uint32_t)(EDX));
  /* 119c49f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c49f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c49f9 push eax */
  push32((uint32_t)(EAX));
  /* 119c49fa push 0 */
  push32((uint32_t)(0x0u));
  /* 119c49fc call 0x119c7bb0 */
  push32(0x119c4a01u); f_119c7bb0();
  /* 119c4a01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4a07 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4a09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4a0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4a0f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a12 push edx */
  push32((uint32_t)(EDX));
  /* 119c4a13 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 119c4a15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4a18 push eax */
  push32((uint32_t)(EAX));
  /* 119c4a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4a1b call 0x119c7bb0 */
  push32(0x119c4a20u); f_119c7bb0();
  /* 119c4a20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4a26 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4a28 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4a2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4a2e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a31 push edx */
  push32((uint32_t)(EDX));
  /* 119c4a32 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 119c4a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4a37 push eax */
  push32((uint32_t)(EAX));
  /* 119c4a38 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4a3a call 0x119c7bb0 */
  push32(0x119c4a3fu); f_119c7bb0();
  /* 119c4a3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4a45 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4a47 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4a4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4a4d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a50 push edx */
  push32((uint32_t)(EDX));
  /* 119c4a51 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 119c4a53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4a56 push eax */
  push32((uint32_t)(EAX));
  /* 119c4a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4a59 call 0x119c7bb0 */
  push32(0x119c4a5eu); f_119c7bb0();
  /* 119c4a5e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4a64 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4a66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4a69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4a6c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a6f push edx */
  push32((uint32_t)(EDX));
  /* 119c4a70 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 119c4a72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4a75 push eax */
  push32((uint32_t)(EAX));
  /* 119c4a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4a78 call 0x119c7bb0 */
  push32(0x119c4a7du); f_119c7bb0();
  /* 119c4a7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4a83 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4a85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4a88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4a8b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a8e push edx */
  push32((uint32_t)(EDX));
  /* 119c4a8f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 119c4a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4a94 push eax */
  push32((uint32_t)(EAX));
  /* 119c4a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4a97 call 0x119c7bb0 */
  push32(0x119c4a9cu); f_119c7bb0();
  /* 119c4a9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4a9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4aa2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4aa4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4aa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4aaa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4aad push edx */
  push32((uint32_t)(EDX));
  /* 119c4aae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 119c4ab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4ab3 push eax */
  push32((uint32_t)(EAX));
  /* 119c4ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4ab6 call 0x119c7bb0 */
  push32(0x119c4abbu); f_119c7bb0();
  /* 119c4abb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4abe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c4ac1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4ac3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c4ac6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119c4ac9:;
  /* 119c4ac9 mov esp, ebp */
  ESP = (EBP);
  /* 119c4acb pop ebp */
  EBP = (pop32());
  /* 119c4acc ret  */
  ESPCHK(0x119c48c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x119c4ad0 (125 bytes, 49 insns) */
void f_119c4ad0(void) {
  FTRACE(0x119c4ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c4ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c4ad1 mov ebp, esp */
  EBP = (ESP);
  /* 119c4ad3 push ecx */
  push32((uint32_t)(ECX));
L_119c4ad4:;
  /* 119c4ad4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4ad7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c4ada test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c4adc je 0x119c4b49 */
  if (C.zf) goto L_119c4b49;
  /* 119c4ade mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4ae1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c4ae4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4ae7 jl 0x119c4b0d */
  if ((C.sf!=C.of)) goto L_119c4b0d;
  /* 119c4ae9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4aec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c4aef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4af2 jg 0x119c4b0d */
  if ((!C.zf&&C.sf==C.of)) goto L_119c4b0d;
  /* 119c4af4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4af7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c4afa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c4afd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4b00 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119c4b02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4b05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4b08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c4b0b jmp 0x119c4b47 */
  goto L_119c4b47;
L_119c4b0d:;
  /* 119c4b0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4b10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c4b13 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4b16 jne 0x119c4b3e */
  if (!C.zf) goto L_119c4b3e;
  /* 119c4b18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4b1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c4b1e:;
  /* 119c4b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4b24 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 119c4b27 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119c4b29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4b2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4b2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c4b32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c4b35 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c4b38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c4b3a jne 0x119c4b1e */
  if (!C.zf) goto L_119c4b1e;
  /* 119c4b3c jmp 0x119c4b47 */
  goto L_119c4b47;
L_119c4b3e:;
  /* 119c4b3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4b41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4b44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_119c4b47:;
  /* 119c4b47 jmp 0x119c4ad4 */
  goto L_119c4ad4;
L_119c4b49:;
  /* 119c4b49 mov esp, ebp */
  ESP = (EBP);
  /* 119c4b4b pop ebp */
  EBP = (pop32());
  /* 119c4b4c ret  */
  ESPCHK(0x119c4ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014b50 @ 0x119c4b50 (147 bytes, 52 insns) */
void f_119c4b50(void) {
  FTRACE(0x119c4b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c4b50 push ebp */
  push32((uint32_t)(EBP));
  /* 119c4b51 mov ebp, esp */
  EBP = (ESP);
  /* 119c4b53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4b57 jne 0x119c4b5e */
  if (!C.zf) goto L_119c4b5e;
  /* 119c4b59 jmp 0x119c4be1 */
  goto L_119c4be1;
L_119c4b5e:;
  /* 119c4b5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4b61 cmp dword ptr [eax + 0xc], 0x119e73a4 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x119e73a4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4b68 je 0x119c4be1 */
  if (C.zf) goto L_119c4be1;
  /* 119c4b6a push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4b6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4b6f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c4b72 push edx */
  push32((uint32_t)(EDX));
  /* 119c4b73 call 0x119b8ca0 */
  push32(0x119c4b78u); f_119b8ca0();
  /* 119c4b78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4b7b push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4b80 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119c4b83 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4b84 call 0x119b8ca0 */
  push32(0x119c4b89u); f_119b8ca0();
  /* 119c4b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4b8c push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4b8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4b91 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119c4b94 push eax */
  push32((uint32_t)(EAX));
  /* 119c4b95 call 0x119b8ca0 */
  push32(0x119c4b9au); f_119b8ca0();
  /* 119c4b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4b9d push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4b9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4ba2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 119c4ba5 push edx */
  push32((uint32_t)(EDX));
  /* 119c4ba6 call 0x119b8ca0 */
  push32(0x119c4babu); f_119b8ca0();
  /* 119c4bab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4bae push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4bb3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 119c4bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4bb7 call 0x119b8ca0 */
  push32(0x119c4bbcu); f_119b8ca0();
  /* 119c4bbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4bbf push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4bc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4bc4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 119c4bc7 push eax */
  push32((uint32_t)(EAX));
  /* 119c4bc8 call 0x119b8ca0 */
  push32(0x119c4bcdu); f_119b8ca0();
  /* 119c4bcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4bd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4bd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c4bd5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 119c4bd8 push edx */
  push32((uint32_t)(EDX));
  /* 119c4bd9 call 0x119b8ca0 */
  push32(0x119c4bdeu); f_119b8ca0();
  /* 119c4bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c4be1:;
  /* 119c4be1 pop ebp */
  EBP = (pop32());
  /* 119c4be2 ret  */
  ESPCHK(0x119c4b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bf0 @ 0x119c4bf0 (928 bytes, 284 insns) */
void f_119c4bf0(void) {
  FTRACE(0x119c4bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c4bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c4bf1 mov ebp, esp */
  EBP = (ESP);
  /* 119c4bf3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c4bf6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 119c4bfd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 119c4c04 cmp dword ptr [0x119e7318], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4c0b je 0x119c4f41 */
  if (C.zf) goto L_119c4f41;
  /* 119c4c11 cmp dword ptr [0x119e7328], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7328))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4c18 jne 0x119c4c40 */
  if (!C.zf) goto L_119c4c40;
  /* 119c4c1a push 0x119e7328 */
  push32((uint32_t)(0x119e7328u));
  /* 119c4c1f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 119c4c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c4c26 mov ax, word ptr [0x119e7360] */
  AX = (r16((uint32_t)(0x119e7360)));
  /* 119c4c2c push eax */
  push32((uint32_t)(EAX));
  /* 119c4c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4c2f call 0x119c7bb0 */
  push32(0x119c4c34u); f_119c7bb0();
  /* 119c4c34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4c37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c4c39 je 0x119c4c40 */
  if (C.zf) goto L_119c4c40;
  /* 119c4c3b jmp 0x119c4f02 */
  goto L_119c4f02;
L_119c4c40:;
  /* 119c4c40 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 119c4c42 push 0x119e22f8 */
  push32((uint32_t)(0x119e22f8u));
  /* 119c4c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4c49 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 119c4c4e call 0x119b8210 */
  push32(0x119c4c53u); f_119b8210();
  /* 119c4c53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4c56 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 119c4c59 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 119c4c5b push 0x119e22f8 */
  push32((uint32_t)(0x119e22f8u));
  /* 119c4c60 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4c62 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 119c4c67 call 0x119b8210 */
  push32(0x119c4c6cu); f_119b8210();
  /* 119c4c6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4c6f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119c4c72 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 119c4c74 push 0x119e22f8 */
  push32((uint32_t)(0x119e22f8u));
  /* 119c4c79 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4c7b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 119c4c80 call 0x119b8210 */
  push32(0x119c4c85u); f_119b8210();
  /* 119c4c85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4c88 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 119c4c8b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 119c4c8d push 0x119e22f8 */
  push32((uint32_t)(0x119e22f8u));
  /* 119c4c92 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4c94 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 119c4c99 call 0x119b8210 */
  push32(0x119c4c9eu); f_119b8210();
  /* 119c4c9e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4ca1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119c4ca4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4ca8 je 0x119c4cbc */
  if (C.zf) goto L_119c4cbc;
  /* 119c4caa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4cae je 0x119c4cbc */
  if (C.zf) goto L_119c4cbc;
  /* 119c4cb0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4cb4 je 0x119c4cbc */
  if (C.zf) goto L_119c4cbc;
  /* 119c4cb6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4cba jne 0x119c4cc1 */
  if (!C.zf) goto L_119c4cc1;
L_119c4cbc:;
  /* 119c4cbc jmp 0x119c4f02 */
  goto L_119c4f02;
L_119c4cc1:;
  /* 119c4cc1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c4cc4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 119c4cc7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 119c4cce jmp 0x119c4cd9 */
  goto L_119c4cd9;
L_119c4cd0:;
  /* 119c4cd0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c4cd3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4cd6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_119c4cd9:;
  /* 119c4cd9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4ce0 jge 0x119c4cf5 */
  if ((C.sf==C.of)) goto L_119c4cf5;
  /* 119c4ce2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4ce5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 119c4ce8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 119c4cea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4ced add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4cf0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119c4cf3 jmp 0x119c4cd0 */
  goto L_119c4cd0;
L_119c4cf5:;
  /* 119c4cf5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 119c4cf8 push eax */
  push32((uint32_t)(EAX));
  /* 119c4cf9 mov ecx, dword ptr [0x119e7328] */
  ECX = (r32((uint32_t)(0x119e7328)));
  /* 119c4cff push ecx */
  push32((uint32_t)(ECX));
  /* 119c4d00 call dword ptr [0x119e9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9348))), 0x119c4d06u);
  /* 119c4d06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c4d08 jne 0x119c4d0f */
  if (!C.zf) goto L_119c4d0f;
  /* 119c4d0a jmp 0x119c4f02 */
  goto L_119c4f02;
L_119c4d0f:;
  /* 119c4d0f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4d13 jbe 0x119c4d1a */
  if ((C.cf||C.zf)) goto L_119c4d1a;
  /* 119c4d15 jmp 0x119c4f02 */
  goto L_119c4f02;
L_119c4d1a:;
  /* 119c4d1a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c4d1d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c4d23 mov dword ptr [0x119e5010], edx */
  w32((uint32_t)(0x119e5010), (EDX));
  /* 119c4d29 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4d30 jle 0x119c4d89 */
  if ((C.zf||C.sf!=C.of)) goto L_119c4d89;
  /* 119c4d32 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 119c4d35 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119c4d38 jmp 0x119c4d43 */
  goto L_119c4d43;
L_119c4d3a:;
  /* 119c4d3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4d3d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4d40 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_119c4d43:;
  /* 119c4d43 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4d46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c4d48 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c4d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c4d4c je 0x119c4d89 */
  if (C.zf) goto L_119c4d89;
  /* 119c4d4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4d51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c4d53 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 119c4d56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c4d58 je 0x119c4d89 */
  if (C.zf) goto L_119c4d89;
  /* 119c4d5a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4d5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4d5f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c4d61 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119c4d64 jmp 0x119c4d6f */
  goto L_119c4d6f;
L_119c4d66:;
  /* 119c4d66 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c4d69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4d6c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_119c4d6f:;
  /* 119c4d6f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4d72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4d74 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 119c4d77 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4d7a jg 0x119c4d87 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c4d87;
  /* 119c4d7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c4d7f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4d82 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 119c4d85 jmp 0x119c4d66 */
  goto L_119c4d66;
L_119c4d87:;
  /* 119c4d87 jmp 0x119c4d3a */
  goto L_119c4d3a;
L_119c4d89:;
  /* 119c4d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4d8d push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4d8f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c4d92 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4d95 push eax */
  push32((uint32_t)(EAX));
  /* 119c4d96 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c4d9b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c4d9e push ecx */
  push32((uint32_t)(ECX));
  /* 119c4d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4da1 call 0x119c1ff0 */
  push32(0x119c4da6u); f_119c1ff0();
  /* 119c4da6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c4dab jne 0x119c4db2 */
  if (!C.zf) goto L_119c4db2;
  /* 119c4dad jmp 0x119c4f02 */
  goto L_119c4f02;
L_119c4db2:;
  /* 119c4db2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c4db5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 119c4dba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c4dbd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119c4dc0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 119c4dc7 jmp 0x119c4dd2 */
  goto L_119c4dd2;
L_119c4dc9:;
  /* 119c4dc9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c4dcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4dcf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_119c4dd2:;
  /* 119c4dd2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4dd9 jge 0x119c4df0 */
  if ((C.sf==C.of)) goto L_119c4df0;
  /* 119c4ddb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c4dde mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 119c4de2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 119c4de5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c4de8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4deb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119c4dee jmp 0x119c4dc9 */
  goto L_119c4dc9;
L_119c4df0:;
  /* 119c4df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4df2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c4df4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c4df7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4dfa push edx */
  push32((uint32_t)(EDX));
  /* 119c4dfb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 119c4e00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c4e03 push eax */
  push32((uint32_t)(EAX));
  /* 119c4e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c4e06 call 0x119c7e50 */
  push32(0x119c4e0bu); f_119c7e50();
  /* 119c4e0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c4e10 jne 0x119c4e17 */
  if (!C.zf) goto L_119c4e17;
  /* 119c4e12 jmp 0x119c4f02 */
  goto L_119c4f02;
L_119c4e17:;
  /* 119c4e17 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c4e1a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 119c4e1f cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4e26 jle 0x119c4e83 */
  if ((C.zf||C.sf!=C.of)) goto L_119c4e83;
  /* 119c4e28 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 119c4e2b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119c4e2e jmp 0x119c4e39 */
  goto L_119c4e39;
L_119c4e30:;
  /* 119c4e30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4e33 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4e36 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_119c4e39:;
  /* 119c4e39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4e3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c4e3e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c4e40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c4e42 je 0x119c4e83 */
  if (C.zf) goto L_119c4e83;
  /* 119c4e44 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4e47 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c4e49 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 119c4e4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c4e4e je 0x119c4e83 */
  if (C.zf) goto L_119c4e83;
  /* 119c4e50 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c4e55 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c4e57 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119c4e5a jmp 0x119c4e65 */
  goto L_119c4e65;
L_119c4e5c:;
  /* 119c4e5c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c4e5f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4e62 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_119c4e65:;
  /* 119c4e65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c4e68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c4e6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 119c4e6d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4e70 jg 0x119c4e81 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c4e81;
  /* 119c4e72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c4e75 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c4e78 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 119c4e7f jmp 0x119c4e5c */
  goto L_119c4e5c;
L_119c4e81:;
  /* 119c4e81 jmp 0x119c4e30 */
  goto L_119c4e30;
L_119c4e83:;
  /* 119c4e83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c4e86 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4e89 mov dword ptr [0x119e4e00], eax */
  w32((uint32_t)(0x119e4e00), (EAX));
  /* 119c4e8e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c4e91 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4e94 mov dword ptr [0x119e4e04], ecx */
  w32((uint32_t)(0x119e4e04), (ECX));
  /* 119c4e9a cmp dword ptr [0x119e734c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e734c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4ea1 je 0x119c4eb4 */
  if (C.zf) goto L_119c4eb4;
  /* 119c4ea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4ea5 mov edx, dword ptr [0x119e734c] */
  EDX = (r32((uint32_t)(0x119e734c)));
  /* 119c4eab push edx */
  push32((uint32_t)(EDX));
  /* 119c4eac call 0x119b8ca0 */
  push32(0x119c4eb1u); f_119b8ca0();
  /* 119c4eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c4eb4:;
  /* 119c4eb4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c4eb7 mov dword ptr [0x119e734c], eax */
  w32((uint32_t)(0x119e734c), (EAX));
  /* 119c4ebc cmp dword ptr [0x119e7350], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7350))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c4ec3 je 0x119c4ed6 */
  if (C.zf) goto L_119c4ed6;
  /* 119c4ec5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4ec7 mov ecx, dword ptr [0x119e7350] */
  ECX = (r32((uint32_t)(0x119e7350)));
  /* 119c4ecd push ecx */
  push32((uint32_t)(ECX));
  /* 119c4ece call 0x119b8ca0 */
  push32(0x119c4ed3u); f_119b8ca0();
  /* 119c4ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c4ed6:;
  /* 119c4ed6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c4ed9 mov dword ptr [0x119e7350], edx */
  w32((uint32_t)(0x119e7350), (EDX));
  /* 119c4edf push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4ee1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c4ee4 push eax */
  push32((uint32_t)(EAX));
  /* 119c4ee5 call 0x119b8ca0 */
  push32(0x119c4eeau); f_119b8ca0();
  /* 119c4eea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4eed push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4eef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c4ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4ef3 call 0x119b8ca0 */
  push32(0x119c4ef8u); f_119b8ca0();
  /* 119c4ef8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4efb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c4efd jmp 0x119c4f8c */
  goto L_119c4f8c;
L_119c4f02:;
  /* 119c4f02 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4f04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c4f07 push edx */
  push32((uint32_t)(EDX));
  /* 119c4f08 call 0x119b8ca0 */
  push32(0x119c4f0du); f_119b8ca0();
  /* 119c4f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4f10 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4f12 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c4f15 push eax */
  push32((uint32_t)(EAX));
  /* 119c4f16 call 0x119b8ca0 */
  push32(0x119c4f1bu); f_119b8ca0();
  /* 119c4f1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4f1e push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4f20 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c4f23 push ecx */
  push32((uint32_t)(ECX));
  /* 119c4f24 call 0x119b8ca0 */
  push32(0x119c4f29u); f_119b8ca0();
  /* 119c4f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4f2c push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4f2e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c4f31 push edx */
  push32((uint32_t)(EDX));
  /* 119c4f32 call 0x119b8ca0 */
  push32(0x119c4f37u); f_119b8ca0();
  /* 119c4f37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4f3a mov eax, 1 */
  EAX = (0x1u);
  /* 119c4f3f jmp 0x119c4f8c */
  goto L_119c4f8c;
L_119c4f41:;
  /* 119c4f41 mov dword ptr [0x119e4e00], 0x119e4e0a */
  w32((uint32_t)(0x119e4e00), (0x119e4e0au));
  /* 119c4f4b mov dword ptr [0x119e4e04], 0x119e4e0a */
  w32((uint32_t)(0x119e4e04), (0x119e4e0au));
  /* 119c4f55 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4f57 mov eax, dword ptr [0x119e734c] */
  EAX = (r32((uint32_t)(0x119e734c)));
  /* 119c4f5c push eax */
  push32((uint32_t)(EAX));
  /* 119c4f5d call 0x119b8ca0 */
  push32(0x119c4f62u); f_119b8ca0();
  /* 119c4f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4f65 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c4f67 mov ecx, dword ptr [0x119e7350] */
  ECX = (r32((uint32_t)(0x119e7350)));
  /* 119c4f6d push ecx */
  push32((uint32_t)(ECX));
  /* 119c4f6e call 0x119b8ca0 */
  push32(0x119c4f73u); f_119b8ca0();
  /* 119c4f73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4f76 mov dword ptr [0x119e734c], 0 */
  w32((uint32_t)(0x119e734c), (0x0u));
  /* 119c4f80 mov dword ptr [0x119e7350], 0 */
  w32((uint32_t)(0x119e7350), (0x0u));
  /* 119c4f8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c4f8c:;
  /* 119c4f8c mov esp, ebp */
  ESP = (EBP);
  /* 119c4f8e pop ebp */
  EBP = (pop32());
  /* 119c4f8f ret  */
  ESPCHK(0x119c4bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f90 @ 0x119c4f90 (7 bytes, 5 insns) */
void f_119c4f90(void) {
  FTRACE(0x119c4f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c4f90 push ebp */
  push32((uint32_t)(EBP));
  /* 119c4f91 mov ebp, esp */
  EBP = (ESP);
  /* 119c4f93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c4f95 pop ebp */
  EBP = (pop32());
  /* 119c4f96 ret  */
  ESPCHK(0x119c4f90u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x119c4fa0 (129 bytes, 56 insns) */
void f_119c4fa0(void) {
  FTRACE(0x119c4fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c4fa0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 119c4fa4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 119c4fa8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 119c4fae jne 0x119c4fec */
  if (!C.zf) goto L_119c4fec;
L_119c4fb0:;
  /* 119c4fb0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c4fb2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c4fb4 jne 0x119c4fe4 */
  if (!C.zf) goto L_119c4fe4;
  /* 119c4fb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c4fb8 je 0x119c4fe0 */
  if (C.zf) goto L_119c4fe0;
  /* 119c4fba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c4fbd jne 0x119c4fe4 */
  if (!C.zf) goto L_119c4fe4;
  /* 119c4fbf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 119c4fc1 je 0x119c4fe0 */
  if (C.zf) goto L_119c4fe0;
  /* 119c4fc3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119c4fc6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c4fc9 jne 0x119c4fe4 */
  if (!C.zf) goto L_119c4fe4;
  /* 119c4fcb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c4fcd je 0x119c4fe0 */
  if (C.zf) goto L_119c4fe0;
  /* 119c4fcf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c4fd2 jne 0x119c4fe4 */
  if (!C.zf) goto L_119c4fe4;
  /* 119c4fd4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4fd7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c4fda or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 119c4fdc jne 0x119c4fb0 */
  if (!C.zf) goto L_119c4fb0;
  /* 119c4fde mov edi, edi */
  EDI = (EDI);
L_119c4fe0:;
  /* 119c4fe0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c4fe2 ret  */
  ESPCHK(0x119c4fa0u, _esp0);
  ESP += 4; return;
  /* 119c4fe3 nop  */
  /* nop */
L_119c4fe4:;
  /* 119c4fe4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c4fe6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c4fe8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119c4fe9 ret  */
  ESPCHK(0x119c4fa0u, _esp0);
  ESP += 4; return;
  /* 119c4fea mov edi, edi */
  EDI = (EDI);
L_119c4fec:;
  /* 119c4fec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 119c4ff2 je 0x119c5008 */
  if (C.zf) goto L_119c5008;
  /* 119c4ff4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c4ff6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119c4ff7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c4ff9 jne 0x119c4fe4 */
  if (!C.zf) goto L_119c4fe4;
  /* 119c4ffb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119c4ffc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c4ffe je 0x119c4fe0 */
  if (C.zf) goto L_119c4fe0;
  /* 119c5000 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 119c5006 je 0x119c4fb0 */
  if (C.zf) goto L_119c4fb0;
L_119c5008:;
  /* 119c5008 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 119c500b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c500e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c5010 jne 0x119c4fe4 */
  if (!C.zf) goto L_119c4fe4;
  /* 119c5012 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c5014 je 0x119c4fe0 */
  if (C.zf) goto L_119c4fe0;
  /* 119c5016 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c5019 jne 0x119c4fe4 */
  if (!C.zf) goto L_119c4fe4;
  /* 119c501b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 119c501d je 0x119c4fe0 */
  if (C.zf) goto L_119c4fe0;
  /* 119c501f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5022 jmp 0x119c4fb0 */
  goto L_119c4fb0;
}

/* FUN_10015030 @ 0x119c5030 (62 bytes, 35 insns) */
void f_119c5030(void) {
  FTRACE(0x119c5030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5030 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5031 mov ebp, esp */
  EBP = (ESP);
  /* 119c5033 push esi */
  push32((uint32_t)(ESI));
  /* 119c5034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c5036 push eax */
  push32((uint32_t)(EAX));
  /* 119c5037 push eax */
  push32((uint32_t)(EAX));
  /* 119c5038 push eax */
  push32((uint32_t)(EAX));
  /* 119c5039 push eax */
  push32((uint32_t)(EAX));
  /* 119c503a push eax */
  push32((uint32_t)(EAX));
  /* 119c503b push eax */
  push32((uint32_t)(EAX));
  /* 119c503c push eax */
  push32((uint32_t)(EAX));
  /* 119c503d push eax */
  push32((uint32_t)(EAX));
  /* 119c503e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c5041 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119c5044:;
  /* 119c5044 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c5046 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c5048 je 0x119c5051 */
  if (C.zf) goto L_119c5051;
  /* 119c504a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119c504b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x119c504b");
  /* 119c504f jmp 0x119c5044 */
  goto L_119c5044;
L_119c5051:;
  /* 119c5051 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5054 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c5057 nop  */
  /* nop */
L_119c5058:;
  /* 119c5058 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119c5059 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c505b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c505d je 0x119c5066 */
  if (C.zf) goto L_119c5066;
  /* 119c505f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119c5060 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x119c5060");
  /* 119c5064 jae 0x119c5058 */
  if (!C.cf) goto L_119c5058;
L_119c5066:;
  /* 119c5066 mov eax, ecx */
  EAX = (ECX);
  /* 119c5068 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c506b pop esi */
  ESI = (pop32());
  /* 119c506c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c506d ret  */
  ESPCHK(0x119c5030u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x119c5070 (56 bytes, 31 insns) */
void f_119c5070(void) {
  FTRACE(0x119c5070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5070 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5071 mov ebp, esp */
  EBP = (ESP);
  /* 119c5073 push edi */
  push32((uint32_t)(EDI));
  /* 119c5074 push esi */
  push32((uint32_t)(ESI));
  /* 119c5075 push ebx */
  push32((uint32_t)(EBX));
  /* 119c5076 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c5079 jecxz 0x119c50a1 */
  x86_unimpl("jecxz @ 0x119c5079");
  /* 119c507b mov ebx, ecx */
  EBX = (ECX);
  /* 119c507d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5080 mov esi, edi */
  ESI = (EDI);
  /* 119c5082 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c5084 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 119c5086 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c5088 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c508a mov edi, esi */
  EDI = (ESI);
  /* 119c508c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119c508f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 119c5091 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 119c5094 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c5096 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c5099 ja 0x119c509f */
  if ((!C.cf&&!C.zf)) goto L_119c509f;
  /* 119c509b je 0x119c50a1 */
  if (C.zf) goto L_119c50a1;
  /* 119c509d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119c509e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_119c509f:;
  /* 119c509f not ecx */
  ECX = (~(ECX));
L_119c50a1:;
  /* 119c50a1 mov eax, ecx */
  EAX = (ECX);
  /* 119c50a3 pop ebx */
  EBX = (pop32());
  /* 119c50a4 pop esi */
  ESI = (pop32());
  /* 119c50a5 pop edi */
  EDI = (pop32());
  /* 119c50a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c50a7 ret  */
  ESPCHK(0x119c5070u, _esp0);
  ESP += 4; return;
}

/* FUN_100150b0 @ 0x119c50b0 (58 bytes, 32 insns) */
void f_119c50b0(void) {
  FTRACE(0x119c50b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c50b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c50b1 mov ebp, esp */
  EBP = (ESP);
  /* 119c50b3 push esi */
  push32((uint32_t)(ESI));
  /* 119c50b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c50b6 push eax */
  push32((uint32_t)(EAX));
  /* 119c50b7 push eax */
  push32((uint32_t)(EAX));
  /* 119c50b8 push eax */
  push32((uint32_t)(EAX));
  /* 119c50b9 push eax */
  push32((uint32_t)(EAX));
  /* 119c50ba push eax */
  push32((uint32_t)(EAX));
  /* 119c50bb push eax */
  push32((uint32_t)(EAX));
  /* 119c50bc push eax */
  push32((uint32_t)(EAX));
  /* 119c50bd push eax */
  push32((uint32_t)(EAX));
  /* 119c50be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c50c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119c50c4:;
  /* 119c50c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c50c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c50c8 je 0x119c50d1 */
  if (C.zf) goto L_119c50d1;
  /* 119c50ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119c50cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x119c50cb");
  /* 119c50cf jmp 0x119c50c4 */
  goto L_119c50c4;
L_119c50d1:;
  /* 119c50d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_119c50d4:;
  /* 119c50d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c50d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c50d8 je 0x119c50e4 */
  if (C.zf) goto L_119c50e4;
  /* 119c50da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119c50db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x119c50db");
  /* 119c50df jae 0x119c50d4 */
  if (!C.cf) goto L_119c50d4;
  /* 119c50e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_119c50e4:;
  /* 119c50e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c50e7 pop esi */
  ESI = (pop32());
  /* 119c50e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c50e9 ret  */
  ESPCHK(0x119c50b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100150f0 @ 0x119c50f0 (512 bytes, 147 insns) */
void f_119c50f0(void) {
  FTRACE(0x119c50f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c50f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c50f1 mov ebp, esp */
  EBP = (ESP);
  /* 119c50f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c50f6 cmp dword ptr [0x119e7398], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7398))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c50fd jne 0x119c5122 */
  if (!C.zf) goto L_119c5122;
  /* 119c50ff call 0x119c5bc0 */
  push32(0x119c5104u); f_119c5bc0();
  /* 119c5104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5106 je 0x119c5112 */
  if (C.zf) goto L_119c5112;
  /* 119c5108 mov eax, dword ptr [0x119e9314] */
  EAX = (r32((uint32_t)(0x119e9314)));
  /* 119c510d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c5110 jmp 0x119c5119 */
  goto L_119c5119;
L_119c5112:;
  /* 119c5112 mov dword ptr [ebp - 8], 0x119c5c10 */
  w32((uint32_t)(EBP + -0x8), (0x119c5c10u));
L_119c5119:;
  /* 119c5119 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c511c mov dword ptr [0x119e7398], ecx */
  w32((uint32_t)(0x119e7398), (ECX));
L_119c5122:;
  /* 119c5122 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5126 jne 0x119c5132 */
  if (!C.zf) goto L_119c5132;
  /* 119c5128 call 0x119c5a10 */
  push32(0x119c512du); f_119c5a10();
  /* 119c512d jmp 0x119c51fe */
  goto L_119c51fe;
L_119c5132:;
  /* 119c5132 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5135 mov dword ptr [0x119e7388], edx */
  w32((uint32_t)(0x119e7388), (EDX));
  /* 119c513b cmp dword ptr [0x119e7388], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7388))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5142 je 0x119c5164 */
  if (C.zf) goto L_119c5164;
  /* 119c5144 mov eax, dword ptr [0x119e7388] */
  EAX = (r32((uint32_t)(0x119e7388)));
  /* 119c5149 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c514c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c514e je 0x119c5164 */
  if (C.zf) goto L_119c5164;
  /* 119c5150 push 0x119e7388 */
  push32((uint32_t)(0x119e7388u));
  /* 119c5155 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119c5157 push 0x119e5ad0 */
  push32((uint32_t)(0x119e5ad0u));
  /* 119c515c call 0x119c52f0 */
  push32(0x119c5161u); f_119c52f0();
  /* 119c5161 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c5164:;
  /* 119c5164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5167 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c516a mov dword ptr [0x119e738c], edx */
  w32((uint32_t)(0x119e738c), (EDX));
  /* 119c5170 cmp dword ptr [0x119e738c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e738c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5177 je 0x119c5199 */
  if (C.zf) goto L_119c5199;
  /* 119c5179 mov eax, dword ptr [0x119e738c] */
  EAX = (r32((uint32_t)(0x119e738c)));
  /* 119c517e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c5181 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c5183 je 0x119c5199 */
  if (C.zf) goto L_119c5199;
  /* 119c5185 push 0x119e738c */
  push32((uint32_t)(0x119e738cu));
  /* 119c518a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 119c518c push 0x119e5a18 */
  push32((uint32_t)(0x119e5a18u));
  /* 119c5191 call 0x119c52f0 */
  push32(0x119c5196u); f_119c52f0();
  /* 119c5196 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c5199:;
  /* 119c5199 mov dword ptr [0x119e7390], 0 */
  w32((uint32_t)(0x119e7390), (0x0u));
  /* 119c51a3 cmp dword ptr [0x119e7388], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7388))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c51aa je 0x119c51dd */
  if (C.zf) goto L_119c51dd;
  /* 119c51ac mov edx, dword ptr [0x119e7388] */
  EDX = (r32((uint32_t)(0x119e7388)));
  /* 119c51b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c51b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c51b7 je 0x119c51dd */
  if (C.zf) goto L_119c51dd;
  /* 119c51b9 cmp dword ptr [0x119e738c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e738c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c51c0 je 0x119c51d6 */
  if (C.zf) goto L_119c51d6;
  /* 119c51c2 mov ecx, dword ptr [0x119e738c] */
  ECX = (r32((uint32_t)(0x119e738c)));
  /* 119c51c8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c51cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c51cd je 0x119c51d6 */
  if (C.zf) goto L_119c51d6;
  /* 119c51cf call 0x119c5380 */
  push32(0x119c51d4u); f_119c5380();
  /* 119c51d4 jmp 0x119c51db */
  goto L_119c51db;
L_119c51d6:;
  /* 119c51d6 call 0x119c5770 */
  push32(0x119c51dbu); f_119c5770();
L_119c51db:;
  /* 119c51db jmp 0x119c51fe */
  goto L_119c51fe;
L_119c51dd:;
  /* 119c51dd cmp dword ptr [0x119e738c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e738c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c51e4 je 0x119c51f9 */
  if (C.zf) goto L_119c51f9;
  /* 119c51e6 mov eax, dword ptr [0x119e738c] */
  EAX = (r32((uint32_t)(0x119e738c)));
  /* 119c51eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c51ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c51f0 je 0x119c51f9 */
  if (C.zf) goto L_119c51f9;
  /* 119c51f2 call 0x119c5910 */
  push32(0x119c51f7u); f_119c5910();
  /* 119c51f7 jmp 0x119c51fe */
  goto L_119c51fe;
L_119c51f9:;
  /* 119c51f9 call 0x119c5a10 */
  push32(0x119c51feu); f_119c5a10();
L_119c51fe:;
  /* 119c51fe cmp dword ptr [0x119e7390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5205 jne 0x119c520e */
  if (!C.zf) goto L_119c520e;
  /* 119c5207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c5209 jmp 0x119c52ec */
  goto L_119c52ec;
L_119c520e:;
  /* 119c520e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5211 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5217 push edx */
  push32((uint32_t)(EDX));
  /* 119c5218 call 0x119c5a40 */
  push32(0x119c521du); f_119c5a40();
  /* 119c521d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5220 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c5223 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5227 je 0x119c523c */
  if (C.zf) goto L_119c523c;
  /* 119c5229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c522c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c5231 push eax */
  push32((uint32_t)(EAX));
  /* 119c5232 call dword ptr [0x119e9318] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9318))), 0x119c5238u);
  /* 119c5238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c523a jne 0x119c5243 */
  if (!C.zf) goto L_119c5243;
L_119c523c:;
  /* 119c523c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c523e jmp 0x119c52ec */
  goto L_119c52ec;
L_119c5243:;
  /* 119c5243 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c5245 mov ecx, dword ptr [0x119e7378] */
  ECX = (r32((uint32_t)(0x119e7378)));
  /* 119c524b push ecx */
  push32((uint32_t)(ECX));
  /* 119c524c call dword ptr [0x119e931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e931c))), 0x119c5252u);
  /* 119c5252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5254 jne 0x119c525d */
  if (!C.zf) goto L_119c525d;
  /* 119c5256 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c5258 jmp 0x119c52ec */
  goto L_119c52ec;
L_119c525d:;
  /* 119c525d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5261 je 0x119c5288 */
  if (C.zf) goto L_119c5288;
  /* 119c5263 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c5266 mov ax, word ptr [0x119e7378] */
  AX = (r16((uint32_t)(0x119e7378)));
  /* 119c526c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 119c526f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c5272 mov dx, word ptr [0x119e7394] */
  DX = (r16((uint32_t)(0x119e7394)));
  /* 119c5279 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 119c527d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c5280 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 119c5284 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_119c5288:;
  /* 119c5288 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c528c je 0x119c52e7 */
  if (C.zf) goto L_119c52e7;
  /* 119c528e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119c5290 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c5293 push edx */
  push32((uint32_t)(EDX));
  /* 119c5294 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 119c5299 mov eax, dword ptr [0x119e7378] */
  EAX = (r32((uint32_t)(0x119e7378)));
  /* 119c529e push eax */
  push32((uint32_t)(EAX));
  /* 119c529f call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c52a5u);
  /* 119c52a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c52a7 jne 0x119c52ad */
  if (!C.zf) goto L_119c52ad;
  /* 119c52a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c52ab jmp 0x119c52ec */
  goto L_119c52ec;
L_119c52ad:;
  /* 119c52ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119c52af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c52b2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c52b5 push ecx */
  push32((uint32_t)(ECX));
  /* 119c52b6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 119c52bb mov edx, dword ptr [0x119e7394] */
  EDX = (r32((uint32_t)(0x119e7394)));
  /* 119c52c1 push edx */
  push32((uint32_t)(EDX));
  /* 119c52c2 call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c52c8u);
  /* 119c52c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c52ca jne 0x119c52d0 */
  if (!C.zf) goto L_119c52d0;
  /* 119c52cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c52ce jmp 0x119c52ec */
  goto L_119c52ec;
L_119c52d0:;
  /* 119c52d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 119c52d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c52d5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c52da push eax */
  push32((uint32_t)(EAX));
  /* 119c52db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c52de push ecx */
  push32((uint32_t)(ECX));
  /* 119c52df call 0x119bad50 */
  push32(0x119c52e4u); f_119bad50();
  /* 119c52e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c52e7:;
  /* 119c52e7 mov eax, 1 */
  EAX = (0x1u);
L_119c52ec:;
  /* 119c52ec mov esp, ebp */
  ESP = (EBP);
  /* 119c52ee pop ebp */
  EBP = (pop32());
  /* 119c52ef ret  */
  ESPCHK(0x119c50f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100152f0 @ 0x119c52f0 (130 bytes, 47 insns) */
void f_119c52f0(void) {
  FTRACE(0x119c52f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c52f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c52f1 mov ebp, esp */
  EBP = (ESP);
  /* 119c52f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c52f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 119c52fd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_119c5304:;
  /* 119c5304 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5307 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c530a jg 0x119c536e */
  if ((!C.zf&&C.sf==C.of)) goto L_119c536e;
  /* 119c530c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5310 je 0x119c536e */
  if (C.zf) goto L_119c536e;
  /* 119c5312 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5315 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5318 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c5319 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c531b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c531d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c5320 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c5323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5326 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 119c5329 push eax */
  push32((uint32_t)(EAX));
  /* 119c532a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c532d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c532f push edx */
  push32((uint32_t)(EDX));
  /* 119c5330 call 0x119c80c0 */
  push32(0x119c5335u); f_119c80c0();
  /* 119c5335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5338 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c533b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c533f jne 0x119c5352 */
  if (!C.zf) goto L_119c5352;
  /* 119c5341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c5344 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5347 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 119c534b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c534e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c5350 jmp 0x119c536c */
  goto L_119c536c;
L_119c5352:;
  /* 119c5352 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5356 jge 0x119c5363 */
  if ((C.sf==C.of)) goto L_119c5363;
  /* 119c5358 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c535b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c535e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119c5361 jmp 0x119c536c */
  goto L_119c536c;
L_119c5363:;
  /* 119c5363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c5366 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5369 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119c536c:;
  /* 119c536c jmp 0x119c5304 */
  goto L_119c5304;
L_119c536e:;
  /* 119c536e mov esp, ebp */
  ESP = (EBP);
  /* 119c5370 pop ebp */
  EBP = (pop32());
  /* 119c5371 ret  */
  ESPCHK(0x119c52f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015380 @ 0x119c5380 (186 bytes, 50 insns) */
void f_119c5380(void) {
  FTRACE(0x119c5380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5380 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5381 mov ebp, esp */
  EBP = (ESP);
  /* 119c5383 push ecx */
  push32((uint32_t)(ECX));
  /* 119c5384 mov eax, dword ptr [0x119e7388] */
  EAX = (r32((uint32_t)(0x119e7388)));
  /* 119c5389 push eax */
  push32((uint32_t)(EAX));
  /* 119c538a call 0x119bb040 */
  push32(0x119c538fu); f_119bb040();
  /* 119c538f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5392 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c5394 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5397 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 119c539a mov dword ptr [0x119e7384], ecx */
  w32((uint32_t)(0x119e7384), (ECX));
  /* 119c53a0 mov edx, dword ptr [0x119e738c] */
  EDX = (r32((uint32_t)(0x119e738c)));
  /* 119c53a6 push edx */
  push32((uint32_t)(EDX));
  /* 119c53a7 call 0x119bb040 */
  push32(0x119c53acu); f_119bb040();
  /* 119c53ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c53af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c53b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c53b4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 119c53b7 mov dword ptr [0x119e737c], ecx */
  w32((uint32_t)(0x119e737c), (ECX));
  /* 119c53bd mov dword ptr [0x119e7378], 0 */
  w32((uint32_t)(0x119e7378), (0x0u));
  /* 119c53c7 cmp dword ptr [0x119e7384], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7384))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c53ce je 0x119c53d9 */
  if (C.zf) goto L_119c53d9;
  /* 119c53d0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 119c53d7 jmp 0x119c53eb */
  goto L_119c53eb;
L_119c53d9:;
  /* 119c53d9 mov edx, dword ptr [0x119e7388] */
  EDX = (r32((uint32_t)(0x119e7388)));
  /* 119c53df push edx */
  push32((uint32_t)(EDX));
  /* 119c53e0 call 0x119c5e20 */
  push32(0x119c53e5u); f_119c5e20();
  /* 119c53e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c53e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c53eb:;
  /* 119c53eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c53ee mov dword ptr [0x119e7380], eax */
  w32((uint32_t)(0x119e7380), (EAX));
  /* 119c53f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c53f5 push 0x119c5440 */
  push32((uint32_t)(0x119c5440u));
  /* 119c53fa call dword ptr [0x119e9310] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9310))), 0x119c5400u);
  /* 119c5400 mov ecx, dword ptr [0x119e7390] */
  ECX = (r32((uint32_t)(0x119e7390)));
  /* 119c5406 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 119c540c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c540e je 0x119c542c */
  if (C.zf) goto L_119c542c;
  /* 119c5410 mov edx, dword ptr [0x119e7390] */
  EDX = (r32((uint32_t)(0x119e7390)));
  /* 119c5416 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 119c541c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c541e je 0x119c542c */
  if (C.zf) goto L_119c542c;
  /* 119c5420 mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c5425 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 119c5428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c542a jne 0x119c5436 */
  if (!C.zf) goto L_119c5436;
L_119c542c:;
  /* 119c542c mov dword ptr [0x119e7390], 0 */
  w32((uint32_t)(0x119e7390), (0x0u));
L_119c5436:;
  /* 119c5436 mov esp, ebp */
  ESP = (EBP);
  /* 119c5438 pop ebp */
  EBP = (pop32());
  /* 119c5439 ret  */
  ESPCHK(0x119c5380u, _esp0);
  ESP += 4; return;
}

/* FUN_10015440 @ 0x119c5440 (804 bytes, 220 insns) */
void f_119c5440(void) {
  FTRACE(0x119c5440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5440 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5441 mov ebp, esp */
  EBP = (ESP);
  /* 119c5443 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5449 push eax */
  push32((uint32_t)(EAX));
  /* 119c544a call 0x119c5da0 */
  push32(0x119c544fu); f_119c5da0();
  /* 119c544f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5452 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 119c5455 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 119c5457 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119c545a push ecx */
  push32((uint32_t)(ECX));
  /* 119c545b mov edx, dword ptr [0x119e737c] */
  EDX = (r32((uint32_t)(0x119e737c)));
  /* 119c5461 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c5463 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5465 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 119c546b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5471 push edx */
  push32((uint32_t)(EDX));
  /* 119c5472 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5475 push eax */
  push32((uint32_t)(EAX));
  /* 119c5476 call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c547cu);
  /* 119c547c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c547e jne 0x119c5494 */
  if (!C.zf) goto L_119c5494;
  /* 119c5480 mov dword ptr [0x119e7390], 0 */
  w32((uint32_t)(0x119e7390), (0x0u));
  /* 119c548a mov eax, 1 */
  EAX = (0x1u);
  /* 119c548f jmp 0x119c575e */
  goto L_119c575e;
L_119c5494:;
  /* 119c5494 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119c5497 push ecx */
  push32((uint32_t)(ECX));
  /* 119c5498 mov edx, dword ptr [0x119e738c] */
  EDX = (r32((uint32_t)(0x119e738c)));
  /* 119c549e push edx */
  push32((uint32_t)(EDX));
  /* 119c549f call 0x119c80c0 */
  push32(0x119c54a4u); f_119c80c0();
  /* 119c54a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c54a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c54a9 jne 0x119c55cf */
  if (!C.zf) goto L_119c55cf;
  /* 119c54af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 119c54b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 119c54b4 push eax */
  push32((uint32_t)(EAX));
  /* 119c54b5 mov ecx, dword ptr [0x119e7384] */
  ECX = (r32((uint32_t)(0x119e7384)));
  /* 119c54bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c54bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c54bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 119c54c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c54cb push ecx */
  push32((uint32_t)(ECX));
  /* 119c54cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c54cf push edx */
  push32((uint32_t)(EDX));
  /* 119c54d0 call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c54d6u);
  /* 119c54d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c54d8 jne 0x119c54ee */
  if (!C.zf) goto L_119c54ee;
  /* 119c54da mov dword ptr [0x119e7390], 0 */
  w32((uint32_t)(0x119e7390), (0x0u));
  /* 119c54e4 mov eax, 1 */
  EAX = (0x1u);
  /* 119c54e9 jmp 0x119c575e */
  goto L_119c575e;
L_119c54ee:;
  /* 119c54ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 119c54f1 push eax */
  push32((uint32_t)(EAX));
  /* 119c54f2 mov ecx, dword ptr [0x119e7388] */
  ECX = (r32((uint32_t)(0x119e7388)));
  /* 119c54f8 push ecx */
  push32((uint32_t)(ECX));
  /* 119c54f9 call 0x119c80c0 */
  push32(0x119c54feu); f_119c80c0();
  /* 119c54fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5503 jne 0x119c5530 */
  if (!C.zf) goto L_119c5530;
  /* 119c5505 mov edx, dword ptr [0x119e7390] */
  EDX = (r32((uint32_t)(0x119e7390)));
  /* 119c550b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 119c5511 mov dword ptr [0x119e7390], edx */
  w32((uint32_t)(0x119e7390), (EDX));
  /* 119c5517 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c551a mov dword ptr [0x119e7394], eax */
  w32((uint32_t)(0x119e7394), (EAX));
  /* 119c551f mov ecx, dword ptr [0x119e7394] */
  ECX = (r32((uint32_t)(0x119e7394)));
  /* 119c5525 mov dword ptr [0x119e7378], ecx */
  w32((uint32_t)(0x119e7378), (ECX));
  /* 119c552b jmp 0x119c55cf */
  goto L_119c55cf;
L_119c5530:;
  /* 119c5530 mov edx, dword ptr [0x119e7390] */
  EDX = (r32((uint32_t)(0x119e7390)));
  /* 119c5536 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 119c5539 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c553b jne 0x119c55cf */
  if (!C.zf) goto L_119c55cf;
  /* 119c5541 cmp dword ptr [0x119e7380], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7380))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5548 je 0x119c559d */
  if (C.zf) goto L_119c559d;
  /* 119c554a mov eax, dword ptr [0x119e7380] */
  EAX = (r32((uint32_t)(0x119e7380)));
  /* 119c554f push eax */
  push32((uint32_t)(EAX));
  /* 119c5550 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119c5553 push ecx */
  push32((uint32_t)(ECX));
  /* 119c5554 mov edx, dword ptr [0x119e7388] */
  EDX = (r32((uint32_t)(0x119e7388)));
  /* 119c555a push edx */
  push32((uint32_t)(EDX));
  /* 119c555b call 0x119c8190 */
  push32(0x119c5560u); f_119c8190();
  /* 119c5560 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5565 jne 0x119c559d */
  if (!C.zf) goto L_119c559d;
  /* 119c5567 mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c556c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 119c556e mov dword ptr [0x119e7390], eax */
  w32((uint32_t)(0x119e7390), (EAX));
  /* 119c5573 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5576 mov dword ptr [0x119e7394], ecx */
  w32((uint32_t)(0x119e7394), (ECX));
  /* 119c557c mov edx, dword ptr [0x119e7388] */
  EDX = (r32((uint32_t)(0x119e7388)));
  /* 119c5582 push edx */
  push32((uint32_t)(EDX));
  /* 119c5583 call 0x119bb040 */
  push32(0x119c5588u); f_119bb040();
  /* 119c5588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c558b cmp eax, dword ptr [0x119e7380] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e7380))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5591 jne 0x119c559b */
  if (!C.zf) goto L_119c559b;
  /* 119c5593 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5596 mov dword ptr [0x119e7378], eax */
  w32((uint32_t)(0x119e7378), (EAX));
L_119c559b:;
  /* 119c559b jmp 0x119c55cf */
  goto L_119c55cf;
L_119c559d:;
  /* 119c559d mov ecx, dword ptr [0x119e7390] */
  ECX = (r32((uint32_t)(0x119e7390)));
  /* 119c55a3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119c55a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c55a8 jne 0x119c55cf */
  if (!C.zf) goto L_119c55cf;
  /* 119c55aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c55ad push edx */
  push32((uint32_t)(EDX));
  /* 119c55ae call 0x119c5ae0 */
  push32(0x119c55b3u); f_119c5ae0();
  /* 119c55b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c55b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c55b8 je 0x119c55cf */
  if (C.zf) goto L_119c55cf;
  /* 119c55ba mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c55bf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 119c55c1 mov dword ptr [0x119e7390], eax */
  w32((uint32_t)(0x119e7390), (EAX));
  /* 119c55c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c55c9 mov dword ptr [0x119e7394], ecx */
  w32((uint32_t)(0x119e7394), (ECX));
L_119c55cf:;
  /* 119c55cf mov edx, dword ptr [0x119e7390] */
  EDX = (r32((uint32_t)(0x119e7390)));
  /* 119c55d5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 119c55db cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c55e1 je 0x119c5751 */
  if (C.zf) goto L_119c5751;
  /* 119c55e7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 119c55e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 119c55ec push eax */
  push32((uint32_t)(EAX));
  /* 119c55ed mov ecx, dword ptr [0x119e7384] */
  ECX = (r32((uint32_t)(0x119e7384)));
  /* 119c55f3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c55f5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c55f7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 119c55fd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5603 push ecx */
  push32((uint32_t)(ECX));
  /* 119c5604 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5607 push edx */
  push32((uint32_t)(EDX));
  /* 119c5608 call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c560eu);
  /* 119c560e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5610 jne 0x119c5626 */
  if (!C.zf) goto L_119c5626;
  /* 119c5612 mov dword ptr [0x119e7390], 0 */
  w32((uint32_t)(0x119e7390), (0x0u));
  /* 119c561c mov eax, 1 */
  EAX = (0x1u);
  /* 119c5621 jmp 0x119c575e */
  goto L_119c575e;
L_119c5626:;
  /* 119c5626 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 119c5629 push eax */
  push32((uint32_t)(EAX));
  /* 119c562a mov ecx, dword ptr [0x119e7388] */
  ECX = (r32((uint32_t)(0x119e7388)));
  /* 119c5630 push ecx */
  push32((uint32_t)(ECX));
  /* 119c5631 call 0x119c80c0 */
  push32(0x119c5636u); f_119c80c0();
  /* 119c5636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c563b jne 0x119c56f0 */
  if (!C.zf) goto L_119c56f0;
  /* 119c5641 mov edx, dword ptr [0x119e7390] */
  EDX = (r32((uint32_t)(0x119e7390)));
  /* 119c5647 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 119c564a mov dword ptr [0x119e7390], edx */
  w32((uint32_t)(0x119e7390), (EDX));
  /* 119c5650 cmp dword ptr [0x119e7384], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7384))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5657 je 0x119c567a */
  if (C.zf) goto L_119c567a;
  /* 119c5659 mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c565e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 119c5661 mov dword ptr [0x119e7390], eax */
  w32((uint32_t)(0x119e7390), (EAX));
  /* 119c5666 cmp dword ptr [0x119e7378], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7378))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c566d jne 0x119c5678 */
  if (!C.zf) goto L_119c5678;
  /* 119c566f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5672 mov dword ptr [0x119e7378], ecx */
  w32((uint32_t)(0x119e7378), (ECX));
L_119c5678:;
  /* 119c5678 jmp 0x119c56ee */
  goto L_119c56ee;
L_119c567a:;
  /* 119c567a cmp dword ptr [0x119e7380], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7380))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5681 je 0x119c56cf */
  if (C.zf) goto L_119c56cf;
  /* 119c5683 mov edx, dword ptr [0x119e7388] */
  EDX = (r32((uint32_t)(0x119e7388)));
  /* 119c5689 push edx */
  push32((uint32_t)(EDX));
  /* 119c568a call 0x119bb040 */
  push32(0x119c568fu); f_119bb040();
  /* 119c568f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5692 cmp eax, dword ptr [0x119e7380] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e7380))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5698 jne 0x119c56cf */
  if (!C.zf) goto L_119c56cf;
  /* 119c569a push 1 */
  push32((uint32_t)(0x1u));
  /* 119c569c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c569f push eax */
  push32((uint32_t)(EAX));
  /* 119c56a0 call 0x119c5b30 */
  push32(0x119c56a5u); f_119c5b30();
  /* 119c56a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c56a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c56aa je 0x119c56cd */
  if (C.zf) goto L_119c56cd;
  /* 119c56ac mov ecx, dword ptr [0x119e7390] */
  ECX = (r32((uint32_t)(0x119e7390)));
  /* 119c56b2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 119c56b5 mov dword ptr [0x119e7390], ecx */
  w32((uint32_t)(0x119e7390), (ECX));
  /* 119c56bb cmp dword ptr [0x119e7378], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7378))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c56c2 jne 0x119c56cd */
  if (!C.zf) goto L_119c56cd;
  /* 119c56c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c56c7 mov dword ptr [0x119e7378], edx */
  w32((uint32_t)(0x119e7378), (EDX));
L_119c56cd:;
  /* 119c56cd jmp 0x119c56ee */
  goto L_119c56ee;
L_119c56cf:;
  /* 119c56cf mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c56d4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 119c56d7 mov dword ptr [0x119e7390], eax */
  w32((uint32_t)(0x119e7390), (EAX));
  /* 119c56dc cmp dword ptr [0x119e7378], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7378))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c56e3 jne 0x119c56ee */
  if (!C.zf) goto L_119c56ee;
  /* 119c56e5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c56e8 mov dword ptr [0x119e7378], ecx */
  w32((uint32_t)(0x119e7378), (ECX));
L_119c56ee:;
  /* 119c56ee jmp 0x119c5751 */
  goto L_119c5751;
L_119c56f0:;
  /* 119c56f0 cmp dword ptr [0x119e7384], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7384))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c56f7 jne 0x119c5751 */
  if (!C.zf) goto L_119c5751;
  /* 119c56f9 cmp dword ptr [0x119e7380], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7380))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5700 je 0x119c5751 */
  if (C.zf) goto L_119c5751;
  /* 119c5702 mov edx, dword ptr [0x119e7380] */
  EDX = (r32((uint32_t)(0x119e7380)));
  /* 119c5708 push edx */
  push32((uint32_t)(EDX));
  /* 119c5709 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 119c570c push eax */
  push32((uint32_t)(EAX));
  /* 119c570d mov ecx, dword ptr [0x119e7388] */
  ECX = (r32((uint32_t)(0x119e7388)));
  /* 119c5713 push ecx */
  push32((uint32_t)(ECX));
  /* 119c5714 call 0x119c8190 */
  push32(0x119c5719u); f_119c8190();
  /* 119c5719 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c571c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c571e jne 0x119c5751 */
  if (!C.zf) goto L_119c5751;
  /* 119c5720 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c5722 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5725 push edx */
  push32((uint32_t)(EDX));
  /* 119c5726 call 0x119c5b30 */
  push32(0x119c572bu); f_119c5b30();
  /* 119c572b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c572e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5730 je 0x119c5751 */
  if (C.zf) goto L_119c5751;
  /* 119c5732 mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c5737 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 119c573a mov dword ptr [0x119e7390], eax */
  w32((uint32_t)(0x119e7390), (EAX));
  /* 119c573f cmp dword ptr [0x119e7378], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7378))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5746 jne 0x119c5751 */
  if (!C.zf) goto L_119c5751;
  /* 119c5748 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c574b mov dword ptr [0x119e7378], ecx */
  w32((uint32_t)(0x119e7378), (ECX));
L_119c5751:;
  /* 119c5751 mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c5756 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119c5759 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c575b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c575d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119c575e:;
  /* 119c575e mov esp, ebp */
  ESP = (EBP);
  /* 119c5760 pop ebp */
  EBP = (pop32());
  /* 119c5761 ret 4 */
  ESPCHK(0x119c5440u, _esp0);
  ESP += 8; return;
}

/* FUN_10015770 @ 0x119c5770 (116 bytes, 33 insns) */
void f_119c5770(void) {
  FTRACE(0x119c5770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5770 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5771 mov ebp, esp */
  EBP = (ESP);
  /* 119c5773 push ecx */
  push32((uint32_t)(ECX));
  /* 119c5774 mov eax, dword ptr [0x119e7388] */
  EAX = (r32((uint32_t)(0x119e7388)));
  /* 119c5779 push eax */
  push32((uint32_t)(EAX));
  /* 119c577a call 0x119bb040 */
  push32(0x119c577fu); f_119bb040();
  /* 119c577f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5782 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c5784 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5787 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 119c578a mov dword ptr [0x119e7384], ecx */
  w32((uint32_t)(0x119e7384), (ECX));
  /* 119c5790 cmp dword ptr [0x119e7384], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7384))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5797 je 0x119c57a2 */
  if (C.zf) goto L_119c57a2;
  /* 119c5799 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 119c57a0 jmp 0x119c57b4 */
  goto L_119c57b4;
L_119c57a2:;
  /* 119c57a2 mov edx, dword ptr [0x119e7388] */
  EDX = (r32((uint32_t)(0x119e7388)));
  /* 119c57a8 push edx */
  push32((uint32_t)(EDX));
  /* 119c57a9 call 0x119c5e20 */
  push32(0x119c57aeu); f_119c5e20();
  /* 119c57ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c57b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c57b4:;
  /* 119c57b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c57b7 mov dword ptr [0x119e7380], eax */
  w32((uint32_t)(0x119e7380), (EAX));
  /* 119c57bc push 1 */
  push32((uint32_t)(0x1u));
  /* 119c57be push 0x119c57f0 */
  push32((uint32_t)(0x119c57f0u));
  /* 119c57c3 call dword ptr [0x119e9310] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9310))), 0x119c57c9u);
  /* 119c57c9 mov ecx, dword ptr [0x119e7390] */
  ECX = (r32((uint32_t)(0x119e7390)));
  /* 119c57cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119c57d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c57d4 jne 0x119c57e0 */
  if (!C.zf) goto L_119c57e0;
  /* 119c57d6 mov dword ptr [0x119e7390], 0 */
  w32((uint32_t)(0x119e7390), (0x0u));
L_119c57e0:;
  /* 119c57e0 mov esp, ebp */
  ESP = (EBP);
  /* 119c57e2 pop ebp */
  EBP = (pop32());
  /* 119c57e3 ret  */
  ESPCHK(0x119c5770u, _esp0);
  ESP += 4; return;
}

/* FUN_100157f0 @ 0x119c57f0 (287 bytes, 86 insns) */
void f_119c57f0(void) {
  FTRACE(0x119c57f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c57f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c57f1 mov ebp, esp */
  EBP = (ESP);
  /* 119c57f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c57f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c57f9 push eax */
  push32((uint32_t)(EAX));
  /* 119c57fa call 0x119c5da0 */
  push32(0x119c57ffu); f_119c5da0();
  /* 119c57ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5802 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 119c5805 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 119c5807 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119c580a push ecx */
  push32((uint32_t)(ECX));
  /* 119c580b mov edx, dword ptr [0x119e7384] */
  EDX = (r32((uint32_t)(0x119e7384)));
  /* 119c5811 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c5813 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5815 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 119c581b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5821 push edx */
  push32((uint32_t)(EDX));
  /* 119c5822 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5825 push eax */
  push32((uint32_t)(EAX));
  /* 119c5826 call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c582cu);
  /* 119c582c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c582e jne 0x119c5844 */
  if (!C.zf) goto L_119c5844;
  /* 119c5830 mov dword ptr [0x119e7390], 0 */
  w32((uint32_t)(0x119e7390), (0x0u));
  /* 119c583a mov eax, 1 */
  EAX = (0x1u);
  /* 119c583f jmp 0x119c5909 */
  goto L_119c5909;
L_119c5844:;
  /* 119c5844 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119c5847 push ecx */
  push32((uint32_t)(ECX));
  /* 119c5848 mov edx, dword ptr [0x119e7388] */
  EDX = (r32((uint32_t)(0x119e7388)));
  /* 119c584e push edx */
  push32((uint32_t)(EDX));
  /* 119c584f call 0x119c80c0 */
  push32(0x119c5854u); f_119c80c0();
  /* 119c5854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5859 jne 0x119c5899 */
  if (!C.zf) goto L_119c5899;
  /* 119c585b cmp dword ptr [0x119e7384], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7384))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5862 jne 0x119c5876 */
  if (!C.zf) goto L_119c5876;
  /* 119c5864 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c5866 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5869 push eax */
  push32((uint32_t)(EAX));
  /* 119c586a call 0x119c5b30 */
  push32(0x119c586fu); f_119c5b30();
  /* 119c586f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5874 je 0x119c5897 */
  if (C.zf) goto L_119c5897;
L_119c5876:;
  /* 119c5876 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5879 mov dword ptr [0x119e7394], ecx */
  w32((uint32_t)(0x119e7394), (ECX));
  /* 119c587f mov edx, dword ptr [0x119e7394] */
  EDX = (r32((uint32_t)(0x119e7394)));
  /* 119c5885 mov dword ptr [0x119e7378], edx */
  w32((uint32_t)(0x119e7378), (EDX));
  /* 119c588b mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c5890 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 119c5892 mov dword ptr [0x119e7390], eax */
  w32((uint32_t)(0x119e7390), (EAX));
L_119c5897:;
  /* 119c5897 jmp 0x119c58fc */
  goto L_119c58fc;
L_119c5899:;
  /* 119c5899 cmp dword ptr [0x119e7384], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7384))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c58a0 jne 0x119c58fc */
  if (!C.zf) goto L_119c58fc;
  /* 119c58a2 cmp dword ptr [0x119e7380], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7380))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c58a9 je 0x119c58fc */
  if (C.zf) goto L_119c58fc;
  /* 119c58ab mov ecx, dword ptr [0x119e7380] */
  ECX = (r32((uint32_t)(0x119e7380)));
  /* 119c58b1 push ecx */
  push32((uint32_t)(ECX));
  /* 119c58b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 119c58b5 push edx */
  push32((uint32_t)(EDX));
  /* 119c58b6 mov eax, dword ptr [0x119e7388] */
  EAX = (r32((uint32_t)(0x119e7388)));
  /* 119c58bb push eax */
  push32((uint32_t)(EAX));
  /* 119c58bc call 0x119c8190 */
  push32(0x119c58c1u); f_119c8190();
  /* 119c58c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c58c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c58c6 jne 0x119c58fc */
  if (!C.zf) goto L_119c58fc;
  /* 119c58c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c58ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c58cd push ecx */
  push32((uint32_t)(ECX));
  /* 119c58ce call 0x119c5b30 */
  push32(0x119c58d3u); f_119c5b30();
  /* 119c58d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c58d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c58d8 je 0x119c58fc */
  if (C.zf) goto L_119c58fc;
  /* 119c58da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c58dd mov dword ptr [0x119e7394], edx */
  w32((uint32_t)(0x119e7394), (EDX));
  /* 119c58e3 mov eax, dword ptr [0x119e7394] */
  EAX = (r32((uint32_t)(0x119e7394)));
  /* 119c58e8 mov dword ptr [0x119e7378], eax */
  w32((uint32_t)(0x119e7378), (EAX));
  /* 119c58ed mov ecx, dword ptr [0x119e7390] */
  ECX = (r32((uint32_t)(0x119e7390)));
  /* 119c58f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119c58f6 mov dword ptr [0x119e7390], ecx */
  w32((uint32_t)(0x119e7390), (ECX));
L_119c58fc:;
  /* 119c58fc mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c5901 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119c5904 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c5906 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5908 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119c5909:;
  /* 119c5909 mov esp, ebp */
  ESP = (EBP);
  /* 119c590b pop ebp */
  EBP = (pop32());
  /* 119c590c ret 4 */
  ESPCHK(0x119c57f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10015910 @ 0x119c5910 (69 bytes, 20 insns) */
void f_119c5910(void) {
  FTRACE(0x119c5910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5910 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5911 mov ebp, esp */
  EBP = (ESP);
  /* 119c5913 mov eax, dword ptr [0x119e738c] */
  EAX = (r32((uint32_t)(0x119e738c)));
  /* 119c5918 push eax */
  push32((uint32_t)(EAX));
  /* 119c5919 call 0x119bb040 */
  push32(0x119c591eu); f_119bb040();
  /* 119c591e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5921 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c5923 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5926 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 119c5929 mov dword ptr [0x119e737c], ecx */
  w32((uint32_t)(0x119e737c), (ECX));
  /* 119c592f push 1 */
  push32((uint32_t)(0x1u));
  /* 119c5931 push 0x119c5960 */
  push32((uint32_t)(0x119c5960u));
  /* 119c5936 call dword ptr [0x119e9310] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9310))), 0x119c593cu);
  /* 119c593c mov edx, dword ptr [0x119e7390] */
  EDX = (r32((uint32_t)(0x119e7390)));
  /* 119c5942 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119c5945 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c5947 jne 0x119c5953 */
  if (!C.zf) goto L_119c5953;
  /* 119c5949 mov dword ptr [0x119e7390], 0 */
  w32((uint32_t)(0x119e7390), (0x0u));
L_119c5953:;
  /* 119c5953 pop ebp */
  EBP = (pop32());
  /* 119c5954 ret  */
  ESPCHK(0x119c5910u, _esp0);
  ESP += 4; return;
}

/* FUN_10015960 @ 0x119c5960 (172 bytes, 54 insns) */
void f_119c5960(void) {
  FTRACE(0x119c5960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5960 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5961 mov ebp, esp */
  EBP = (ESP);
  /* 119c5963 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5969 push eax */
  push32((uint32_t)(EAX));
  /* 119c596a call 0x119c5da0 */
  push32(0x119c596fu); f_119c5da0();
  /* 119c596f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5972 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 119c5975 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 119c5977 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119c597a push ecx */
  push32((uint32_t)(ECX));
  /* 119c597b mov edx, dword ptr [0x119e737c] */
  EDX = (r32((uint32_t)(0x119e737c)));
  /* 119c5981 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c5983 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5985 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 119c598b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5991 push edx */
  push32((uint32_t)(EDX));
  /* 119c5992 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c5995 push eax */
  push32((uint32_t)(EAX));
  /* 119c5996 call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c599cu);
  /* 119c599c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c599e jne 0x119c59b1 */
  if (!C.zf) goto L_119c59b1;
  /* 119c59a0 mov dword ptr [0x119e7390], 0 */
  w32((uint32_t)(0x119e7390), (0x0u));
  /* 119c59aa mov eax, 1 */
  EAX = (0x1u);
  /* 119c59af jmp 0x119c5a06 */
  goto L_119c5a06;
L_119c59b1:;
  /* 119c59b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 119c59b4 push ecx */
  push32((uint32_t)(ECX));
  /* 119c59b5 mov edx, dword ptr [0x119e738c] */
  EDX = (r32((uint32_t)(0x119e738c)));
  /* 119c59bb push edx */
  push32((uint32_t)(EDX));
  /* 119c59bc call 0x119c80c0 */
  push32(0x119c59c1u); f_119c80c0();
  /* 119c59c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c59c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c59c6 jne 0x119c59f9 */
  if (!C.zf) goto L_119c59f9;
  /* 119c59c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c59cb push eax */
  push32((uint32_t)(EAX));
  /* 119c59cc call 0x119c5ae0 */
  push32(0x119c59d1u); f_119c5ae0();
  /* 119c59d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c59d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c59d6 je 0x119c59f9 */
  if (C.zf) goto L_119c59f9;
  /* 119c59d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 119c59db mov dword ptr [0x119e7394], ecx */
  w32((uint32_t)(0x119e7394), (ECX));
  /* 119c59e1 mov edx, dword ptr [0x119e7394] */
  EDX = (r32((uint32_t)(0x119e7394)));
  /* 119c59e7 mov dword ptr [0x119e7378], edx */
  w32((uint32_t)(0x119e7378), (EDX));
  /* 119c59ed mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c59f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 119c59f4 mov dword ptr [0x119e7390], eax */
  w32((uint32_t)(0x119e7390), (EAX));
L_119c59f9:;
  /* 119c59f9 mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c59fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 119c5a01 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c5a03 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5a05 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_119c5a06:;
  /* 119c5a06 mov esp, ebp */
  ESP = (EBP);
  /* 119c5a08 pop ebp */
  EBP = (pop32());
  /* 119c5a09 ret 4 */
  ESPCHK(0x119c5960u, _esp0);
  ESP += 8; return;
}

/* FUN_10015a10 @ 0x119c5a10 (43 bytes, 11 insns) */
void f_119c5a10(void) {
  FTRACE(0x119c5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5a11 mov ebp, esp */
  EBP = (ESP);
  /* 119c5a13 mov eax, dword ptr [0x119e7390] */
  EAX = (r32((uint32_t)(0x119e7390)));
  /* 119c5a18 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 119c5a1d mov dword ptr [0x119e7390], eax */
  w32((uint32_t)(0x119e7390), (EAX));
  /* 119c5a22 call dword ptr [0x119e930c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e930c))), 0x119c5a28u);
  /* 119c5a28 mov dword ptr [0x119e7394], eax */
  w32((uint32_t)(0x119e7394), (EAX));
  /* 119c5a2d mov ecx, dword ptr [0x119e7394] */
  ECX = (r32((uint32_t)(0x119e7394)));
  /* 119c5a33 mov dword ptr [0x119e7378], ecx */
  w32((uint32_t)(0x119e7378), (ECX));
  /* 119c5a39 pop ebp */
  EBP = (pop32());
  /* 119c5a3a ret  */
  ESPCHK(0x119c5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a40 @ 0x119c5a40 (155 bytes, 57 insns) */
void f_119c5a40(void) {
  FTRACE(0x119c5a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5a40 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5a41 mov ebp, esp */
  EBP = (ESP);
  /* 119c5a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5a46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5a4a je 0x119c5a6b */
  if (C.zf) goto L_119c5a6b;
  /* 119c5a4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5a4f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c5a52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c5a54 je 0x119c5a6b */
  if (C.zf) goto L_119c5a6b;
  /* 119c5a56 push 0x119e2988 */
  push32((uint32_t)(0x119e2988u));
  /* 119c5a5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5a5e push edx */
  push32((uint32_t)(EDX));
  /* 119c5a5f call 0x119c4fa0 */
  push32(0x119c5a64u); f_119c4fa0();
  /* 119c5a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5a67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5a69 jne 0x119c5a93 */
  if (!C.zf) goto L_119c5a93;
L_119c5a6b:;
  /* 119c5a6b push 8 */
  push32((uint32_t)(0x8u));
  /* 119c5a6d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 119c5a70 push eax */
  push32((uint32_t)(EAX));
  /* 119c5a71 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 119c5a76 mov ecx, dword ptr [0x119e7394] */
  ECX = (r32((uint32_t)(0x119e7394)));
  /* 119c5a7c push ecx */
  push32((uint32_t)(ECX));
  /* 119c5a7d call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c5a83u);
  /* 119c5a83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5a85 jne 0x119c5a8b */
  if (!C.zf) goto L_119c5a8b;
  /* 119c5a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c5a89 jmp 0x119c5ad7 */
  goto L_119c5ad7;
L_119c5a8b:;
  /* 119c5a8b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 119c5a8e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119c5a91 jmp 0x119c5acb */
  goto L_119c5acb;
L_119c5a93:;
  /* 119c5a93 push 0x119e2984 */
  push32((uint32_t)(0x119e2984u));
  /* 119c5a98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5a9b push eax */
  push32((uint32_t)(EAX));
  /* 119c5a9c call 0x119c4fa0 */
  push32(0x119c5aa1u); f_119c4fa0();
  /* 119c5aa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5aa6 jne 0x119c5acb */
  if (!C.zf) goto L_119c5acb;
  /* 119c5aa8 push 8 */
  push32((uint32_t)(0x8u));
  /* 119c5aaa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 119c5aad push ecx */
  push32((uint32_t)(ECX));
  /* 119c5aae push 0xb */
  push32((uint32_t)(0xbu));
  /* 119c5ab0 mov edx, dword ptr [0x119e7394] */
  EDX = (r32((uint32_t)(0x119e7394)));
  /* 119c5ab6 push edx */
  push32((uint32_t)(EDX));
  /* 119c5ab7 call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c5abdu);
  /* 119c5abd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5abf jne 0x119c5ac5 */
  if (!C.zf) goto L_119c5ac5;
  /* 119c5ac1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c5ac3 jmp 0x119c5ad7 */
  goto L_119c5ad7;
L_119c5ac5:;
  /* 119c5ac5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 119c5ac8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119c5acb:;
  /* 119c5acb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5ace push ecx */
  push32((uint32_t)(ECX));
  /* 119c5acf call 0x119c82a0 */
  push32(0x119c5ad4u); f_119c82a0();
  /* 119c5ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c5ad7:;
  /* 119c5ad7 mov esp, ebp */
  ESP = (EBP);
  /* 119c5ad9 pop ebp */
  EBP = (pop32());
  /* 119c5ada ret  */
  ESPCHK(0x119c5a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10015ae0 @ 0x119c5ae0 (79 bytes, 26 insns) */
void f_119c5ae0(void) {
  FTRACE(0x119c5ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5ae1 mov ebp, esp */
  EBP = (ESP);
  /* 119c5ae3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5ae6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 119c5aea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 119c5aee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c5af5 jmp 0x119c5b00 */
  goto L_119c5b00;
L_119c5af7:;
  /* 119c5af7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c5afa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5afd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119c5b00:;
  /* 119c5b00 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5b04 jae 0x119c5b26 */
  if (!C.cf) goto L_119c5b26;
  /* 119c5b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c5b09 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c5b0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c5b12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c5b14 mov cx, word ptr [eax*2 + 0x119e5a04] */
  CX = (r16((uint32_t)(EAX*2 + 0x119e5a04)));
  /* 119c5b1c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5b1e jne 0x119c5b24 */
  if (!C.zf) goto L_119c5b24;
  /* 119c5b20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c5b22 jmp 0x119c5b2b */
  goto L_119c5b2b;
L_119c5b24:;
  /* 119c5b24 jmp 0x119c5af7 */
  goto L_119c5af7;
L_119c5b26:;
  /* 119c5b26 mov eax, 1 */
  EAX = (0x1u);
L_119c5b2b:;
  /* 119c5b2b mov esp, ebp */
  ESP = (EBP);
  /* 119c5b2d pop ebp */
  EBP = (pop32());
  /* 119c5b2e ret  */
  ESPCHK(0x119c5ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b30 @ 0x119c5b30 (135 bytes, 48 insns) */
void f_119c5b30(void) {
  FTRACE(0x119c5b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5b30 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5b31 mov ebp, esp */
  EBP = (ESP);
  /* 119c5b33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5b36 push esi */
  push32((uint32_t)(ESI));
  /* 119c5b37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5b3a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c5b3f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c5b44 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c5b49 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 119c5b4c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c5b51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c5b54 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 119c5b56 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 119c5b59 push ecx */
  push32((uint32_t)(ECX));
  /* 119c5b5a push 1 */
  push32((uint32_t)(0x1u));
  /* 119c5b5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c5b5f push edx */
  push32((uint32_t)(EDX));
  /* 119c5b60 call dword ptr [0x119e7398] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e7398))), 0x119c5b66u);
  /* 119c5b66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5b68 jne 0x119c5b6e */
  if (!C.zf) goto L_119c5b6e;
  /* 119c5b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c5b6c jmp 0x119c5bb2 */
  goto L_119c5bb2;
L_119c5b6e:;
  /* 119c5b6e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 119c5b71 push eax */
  push32((uint32_t)(EAX));
  /* 119c5b72 call 0x119c5da0 */
  push32(0x119c5b77u); f_119c5da0();
  /* 119c5b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5b7a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5b7d je 0x119c5bad */
  if (C.zf) goto L_119c5bad;
  /* 119c5b7f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5b83 je 0x119c5bad */
  if (C.zf) goto L_119c5bad;
  /* 119c5b85 mov ecx, dword ptr [0x119e7388] */
  ECX = (r32((uint32_t)(0x119e7388)));
  /* 119c5b8b push ecx */
  push32((uint32_t)(ECX));
  /* 119c5b8c call 0x119c5e20 */
  push32(0x119c5b91u); f_119c5e20();
  /* 119c5b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5b94 mov esi, eax */
  ESI = (EAX);
  /* 119c5b96 mov edx, dword ptr [0x119e7388] */
  EDX = (r32((uint32_t)(0x119e7388)));
  /* 119c5b9c push edx */
  push32((uint32_t)(EDX));
  /* 119c5b9d call 0x119bb040 */
  push32(0x119c5ba2u); f_119bb040();
  /* 119c5ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5ba5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5ba7 jne 0x119c5bad */
  if (!C.zf) goto L_119c5bad;
  /* 119c5ba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c5bab jmp 0x119c5bb2 */
  goto L_119c5bb2;
L_119c5bad:;
  /* 119c5bad mov eax, 1 */
  EAX = (0x1u);
L_119c5bb2:;
  /* 119c5bb2 pop esi */
  ESI = (pop32());
  /* 119c5bb3 mov esp, ebp */
  ESP = (EBP);
  /* 119c5bb5 pop ebp */
  EBP = (pop32());
  /* 119c5bb6 ret  */
  ESPCHK(0x119c5b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10015bc0 @ 0x119c5bc0 (77 bytes, 18 insns) */
void f_119c5bc0(void) {
  FTRACE(0x119c5bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5bc1 mov ebp, esp */
  EBP = (ESP);
  /* 119c5bc3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5bc9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 119c5bd3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 119c5bd9 push eax */
  push32((uint32_t)(EAX));
  /* 119c5bda call dword ptr [0x119e9308] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9308))), 0x119c5be0u);
  /* 119c5be0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c5be2 je 0x119c5bf9 */
  if (C.zf) goto L_119c5bf9;
  /* 119c5be4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5beb jne 0x119c5bf9 */
  if (!C.zf) goto L_119c5bf9;
  /* 119c5bed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 119c5bf7 jmp 0x119c5c03 */
  goto L_119c5c03;
L_119c5bf9:;
  /* 119c5bf9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_119c5c03:;
  /* 119c5c03 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 119c5c09 mov esp, ebp */
  ESP = (EBP);
  /* 119c5c0b pop ebp */
  EBP = (pop32());
  /* 119c5c0c ret  */
  ESPCHK(0x119c5bc0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x119c5c10 (388 bytes, 118 insns) */
void f_119c5c10(void) {
  FTRACE(0x119c5c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5c10 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5c11 mov ebp, esp */
  EBP = (ESP);
  /* 119c5c13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5c16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c5c1d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 119c5c24 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119c5c2b:;
  /* 119c5c2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c5c2e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5c31 jg 0x119c5d78 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c5d78;
  /* 119c5c37 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c5c3a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5c3d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c5c3e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5c40 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c5c42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c5c45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5c48 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c5c4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5c4e cmp edx, dword ptr [ecx + 0x119e5560] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x119e5560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5c54 jne 0x119c5d4e */
  if (!C.zf) goto L_119c5d4e;
  /* 119c5c5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c5c5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c5c60 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5c64 ja 0x119c5c87 */
  if ((!C.cf&&!C.zf)) goto L_119c5c87;
  /* 119c5c66 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5c6a je 0x119c5cf9 */
  if (C.zf) goto L_119c5cf9;
  /* 119c5c70 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5c74 je 0x119c5ca4 */
  if (C.zf) goto L_119c5ca4;
  /* 119c5c76 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5c7a je 0x119c5cc6 */
  if (C.zf) goto L_119c5cc6;
  /* 119c5c7c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5c80 je 0x119c5ce8 */
  if (C.zf) goto L_119c5ce8;
  /* 119c5c82 jmp 0x119c5d18 */
  goto L_119c5d18;
L_119c5c87:;
  /* 119c5c87 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5c8e je 0x119c5cb5 */
  if (C.zf) goto L_119c5cb5;
  /* 119c5c90 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5c97 je 0x119c5cd7 */
  if (C.zf) goto L_119c5cd7;
  /* 119c5c99 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5ca0 je 0x119c5d0a */
  if (C.zf) goto L_119c5d0a;
  /* 119c5ca2 jmp 0x119c5d18 */
  goto L_119c5d18;
L_119c5ca4:;
  /* 119c5ca4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5ca7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c5caa add ecx, 0x119e5564 */
  { uint32_t _a=(ECX),_b=(0x119e5564u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5cb0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c5cb3 jmp 0x119c5d18 */
  goto L_119c5d18;
L_119c5cb5:;
  /* 119c5cb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5cb8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c5cbb mov eax, dword ptr [edx + 0x119e556c] */
  EAX = (r32((uint32_t)(EDX + 0x119e556c)));
  /* 119c5cc1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c5cc4 jmp 0x119c5d18 */
  goto L_119c5d18;
L_119c5cc6:;
  /* 119c5cc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5cc9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c5ccc add ecx, 0x119e5570 */
  { uint32_t _a=(ECX),_b=(0x119e5570u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5cd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c5cd5 jmp 0x119c5d18 */
  goto L_119c5d18;
L_119c5cd7:;
  /* 119c5cd7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5cda imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c5cdd mov eax, dword ptr [edx + 0x119e5574] */
  EAX = (r32((uint32_t)(EDX + 0x119e5574)));
  /* 119c5ce3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c5ce6 jmp 0x119c5d18 */
  goto L_119c5d18;
L_119c5ce8:;
  /* 119c5ce8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5ceb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c5cee add ecx, 0x119e5578 */
  { uint32_t _a=(ECX),_b=(0x119e5578u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5cf4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c5cf7 jmp 0x119c5d18 */
  goto L_119c5d18;
L_119c5cf9:;
  /* 119c5cf9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5cfc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c5cff add edx, 0x119e557c */
  { uint32_t _a=(EDX),_b=(0x119e557cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5d05 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c5d08 jmp 0x119c5d18 */
  goto L_119c5d18;
L_119c5d0a:;
  /* 119c5d0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5d0d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c5d10 add eax, 0x119e5584 */
  { uint32_t _a=(EAX),_b=(0x119e5584u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5d15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119c5d18:;
  /* 119c5d18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5d1c je 0x119c5d24 */
  if (C.zf) goto L_119c5d24;
  /* 119c5d1e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5d22 jge 0x119c5d26 */
  if ((C.sf==C.of)) goto L_119c5d26;
L_119c5d24:;
  /* 119c5d24 jmp 0x119c5d78 */
  goto L_119c5d78;
L_119c5d26:;
  /* 119c5d26 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c5d29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5d2c push ecx */
  push32((uint32_t)(ECX));
  /* 119c5d2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c5d30 push edx */
  push32((uint32_t)(EDX));
  /* 119c5d31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c5d34 push eax */
  push32((uint32_t)(EAX));
  /* 119c5d35 call 0x119bba30 */
  push32(0x119c5d3au); f_119bba30();
  /* 119c5d3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5d3d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c5d40 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5d43 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 119c5d47 mov eax, 1 */
  EAX = (0x1u);
  /* 119c5d4c jmp 0x119c5d8e */
  goto L_119c5d8e;
L_119c5d4e:;
  /* 119c5d4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5d51 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c5d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5d57 cmp eax, dword ptr [edx + 0x119e5560] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x119e5560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5d5d jae 0x119c5d6a */
  if (!C.cf) goto L_119c5d6a;
  /* 119c5d5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5d62 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5d65 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c5d68 jmp 0x119c5d73 */
  goto L_119c5d73;
L_119c5d6a:;
  /* 119c5d6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c5d6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5d70 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119c5d73:;
  /* 119c5d73 jmp 0x119c5c2b */
  goto L_119c5c2b;
L_119c5d78:;
  /* 119c5d78 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c5d7b push eax */
  push32((uint32_t)(EAX));
  /* 119c5d7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c5d7f push ecx */
  push32((uint32_t)(ECX));
  /* 119c5d80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c5d83 push edx */
  push32((uint32_t)(EDX));
  /* 119c5d84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5d87 push eax */
  push32((uint32_t)(EAX));
  /* 119c5d88 call dword ptr [0x119e9314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9314))), 0x119c5d8eu);
L_119c5d8e:;
  /* 119c5d8e mov esp, ebp */
  ESP = (EBP);
  /* 119c5d90 pop ebp */
  EBP = (pop32());
  /* 119c5d91 ret 0x10 */
  ESPCHK(0x119c5c10u, _esp0);
  ESP += 20; return;
}

/* FUN_10015da0 @ 0x119c5da0 (118 bytes, 42 insns) */
void f_119c5da0(void) {
  FTRACE(0x119c5da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5da0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5da1 mov ebp, esp */
  EBP = (ESP);
  /* 119c5da3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5da6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_119c5dad:;
  /* 119c5dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5db0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c5db2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 119c5db5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c5db9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5dbc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5dbf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c5dc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c5dc4 je 0x119c5e0f */
  if (C.zf) goto L_119c5e0f;
  /* 119c5dc6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c5dca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5dcd jl 0x119c5de2 */
  if ((C.sf!=C.of)) goto L_119c5de2;
  /* 119c5dcf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c5dd3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5dd6 jg 0x119c5de2 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c5de2;
  /* 119c5dd8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 119c5ddb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119c5ddd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 119c5de0 jmp 0x119c5dfc */
  goto L_119c5dfc;
L_119c5de2:;
  /* 119c5de2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c5de6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5de9 jl 0x119c5dfc */
  if ((C.sf!=C.of)) goto L_119c5dfc;
  /* 119c5deb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c5def cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5df2 jg 0x119c5dfc */
  if ((!C.zf&&C.sf==C.of)) goto L_119c5dfc;
  /* 119c5df4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 119c5df7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119c5df9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_119c5dfc:;
  /* 119c5dfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c5dff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119c5e02 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c5e06 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 119c5e0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c5e0d jmp 0x119c5dad */
  goto L_119c5dad;
L_119c5e0f:;
  /* 119c5e0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c5e12 mov esp, ebp */
  ESP = (EBP);
  /* 119c5e14 pop ebp */
  EBP = (pop32());
  /* 119c5e15 ret  */
  ESPCHK(0x119c5da0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x119c5e20 (101 bytes, 36 insns) */
void f_119c5e20(void) {
  FTRACE(0x119c5e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5e20 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5e21 mov ebp, esp */
  EBP = (ESP);
  /* 119c5e23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c5e26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c5e2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5e30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c5e32 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 119c5e35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5e38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5e3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_119c5e3e:;
  /* 119c5e3e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119c5e42 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5e45 jl 0x119c5e50 */
  if ((C.sf!=C.of)) goto L_119c5e50;
  /* 119c5e47 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119c5e4b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5e4e jle 0x119c5e62 */
  if ((C.zf||C.sf!=C.of)) goto L_119c5e62;
L_119c5e50:;
  /* 119c5e50 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119c5e54 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5e57 jl 0x119c5e7e */
  if ((C.sf!=C.of)) goto L_119c5e7e;
  /* 119c5e59 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119c5e5d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5e60 jg 0x119c5e7e */
  if ((!C.zf&&C.sf==C.of)) goto L_119c5e7e;
L_119c5e62:;
  /* 119c5e62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c5e65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5e68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c5e6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5e6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c5e70 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 119c5e73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5e76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5e79 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 119c5e7c jmp 0x119c5e3e */
  goto L_119c5e3e;
L_119c5e7e:;
  /* 119c5e7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c5e81 mov esp, ebp */
  ESP = (EBP);
  /* 119c5e83 pop ebp */
  EBP = (pop32());
  /* 119c5e84 ret  */
  ESPCHK(0x119c5e20u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x119c5e88 (32 bytes, 18 insns) */
void f_119c5e88(void) {
  FTRACE(0x119c5e88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5e88 push ebp */
  push32((uint32_t)(EBP));
  /* 119c5e89 mov ebp, esp */
  EBP = (ESP);
  /* 119c5e8b push ebx */
  push32((uint32_t)(EBX));
  /* 119c5e8c push esi */
  push32((uint32_t)(ESI));
  /* 119c5e8d push edi */
  push32((uint32_t)(EDI));
  /* 119c5e8e push ebp */
  push32((uint32_t)(EBP));
  /* 119c5e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 119c5e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c5e93 push 0x119c5ea0 */
  push32((uint32_t)(0x119c5ea0u));
  /* 119c5e98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119c5e9b call 0x119c9fa8 */
  push32(0x119c5ea0u); f_119c9fa8();
  /* 119c5ea0 pop ebp */
  EBP = (pop32());
  /* 119c5ea1 pop edi */
  EDI = (pop32());
  /* 119c5ea2 pop esi */
  ESI = (pop32());
  /* 119c5ea3 pop ebx */
  EBX = (pop32());
  /* 119c5ea4 mov esp, ebp */
  ESP = (EBP);
  /* 119c5ea6 pop ebp */
  EBP = (pop32());
  /* 119c5ea7 ret  */
  ESPCHK(0x119c5e88u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x119c5eca (104 bytes, 33 insns) */
void f_119c5eca(void) {
  FTRACE(0x119c5ecau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5eca push ebx */
  push32((uint32_t)(EBX));
  /* 119c5ecb push esi */
  push32((uint32_t)(ESI));
  /* 119c5ecc push edi */
  push32((uint32_t)(EDI));
  /* 119c5ecd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 119c5ed1 push eax */
  push32((uint32_t)(EAX));
  /* 119c5ed2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 119c5ed4 push 0x119c5ea8 */
  push32((uint32_t)(0x119c5ea8u));
  /* 119c5ed9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 119c5ee0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_119c5ee7:;
  /* 119c5ee7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 119c5eeb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 119c5eee mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 119c5ef1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5ef4 je 0x119c5f24 */
  if (C.zf) goto L_119c5f24;
  /* 119c5ef6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5efa je 0x119c5f24 */
  if (C.zf) goto L_119c5f24;
  /* 119c5efc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 119c5eff mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 119c5f02 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 119c5f06 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 119c5f09 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c5f0e jne 0x119c5f22 */
  if (!C.zf) goto L_119c5f22;
  /* 119c5f10 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 119c5f15 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 119c5f19 call 0x119c5f5e */
  push32(0x119c5f1eu); f_119c5f5e();
  /* 119c5f1e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x119c5f22u);
L_119c5f22:;
  /* 119c5f22 jmp 0x119c5ee7 */
  goto L_119c5ee7;
L_119c5f24:;
  /* 119c5f24 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 119c5f2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c5f2e pop edi */
  EDI = (pop32());
  /* 119c5f2f pop esi */
  ESI = (pop32());
  /* 119c5f30 pop ebx */
  EBX = (pop32());
  /* 119c5f31 ret  */
  ESPCHK(0x119c5ecau, _esp0);
  ESP += 4; return;
}

/* FUN_10015f5e @ 0x119c5f5e (24 bytes, 10 insns) */
void f_119c5f5e(void) {
  FTRACE(0x119c5f5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c5f5e push ebx */
  push32((uint32_t)(EBX));
  /* 119c5f5f push ecx */
  push32((uint32_t)(ECX));
  /* 119c5f60 mov ebx, 0x119e5cd8 */
  EBX = (0x119e5cd8u);
  /* 119c5f65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c5f68 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 119c5f6b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 119c5f6e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 119c5f71 pop ecx */
  ECX = (pop32());
  /* 119c5f72 pop ebx */
  EBX = (pop32());
  /* 119c5f73 ret 4 */
  ESPCHK(0x119c5f5eu, _esp0);
  ESP += 8; return;
}

/* FUN_1001603d @ 0x119c603d (27 bytes, 11 insns) */
void f_119c603d(void) {
  FTRACE(0x119c603du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c603d push ebp */
  push32((uint32_t)(EBP));
  /* 119c603e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 119c6042 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 119c6044 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 119c6047 push eax */
  push32((uint32_t)(EAX));
  /* 119c6048 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 119c604b push eax */
  push32((uint32_t)(EAX));
  /* 119c604c call 0x119c5eca */
  push32(0x119c6051u); f_119c5eca();
  /* 119c6051 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6054 pop ebp */
  EBP = (pop32());
  /* 119c6055 ret 4 */
  ESPCHK(0x119c603du, _esp0);
  ESP += 8; return;
}

/* FUN_10016060 @ 0x119c6060 (1085 bytes, 299 insns) */
void f_119c6060(void) {
  FTRACE(0x119c6060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c6060 push ebp */
  push32((uint32_t)(EBP));
  /* 119c6061 mov ebp, esp */
  EBP = (ESP);
  /* 119c6063 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6066 mov word ptr [ebp - 0x2c], 0 */
  w16((uint32_t)(EBP + -0x2c), (0x0u));
  /* 119c606c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c6073 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 119c607a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c6081 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c6088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c608b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 119c608f mov word ptr [ebp - 0x18], cx */
  w16((uint32_t)(EBP + -0x18), (CX));
  /* 119c6093 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6096 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 119c609a mov word ptr [ebp - 0x20], ax */
  w16((uint32_t)(EBP + -0x20), (AX));
  /* 119c609e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c60a1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c60a7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c60aa and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c60b0 xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 119c60b2 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 119c60b8 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
  /* 119c60bc mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 119c60c0 and ax, 0x7fff */
  { uint32_t _r=(AX)&(0x7fffu); AX = (_r); fl_logic(_r,16); }
  /* 119c60c4 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 119c60c8 mov cx, word ptr [ebp - 0x20] */
  CX = (r16((uint32_t)(EBP + -0x20)));
  /* 119c60cc and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 119c60d1 mov word ptr [ebp - 0x20], cx */
  w16((uint32_t)(EBP + -0x20), (CX));
  /* 119c60d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c60d8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c60de mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c60e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c60e6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c60e8 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 119c60ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c60ef and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c60f5 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c60fb jge 0x119c611d */
  if ((C.sf==C.of)) goto L_119c611d;
  /* 119c60fd mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c6100 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c6106 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c610c jge 0x119c611d */
  if ((C.sf==C.of)) goto L_119c611d;
  /* 119c610e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c6111 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c6116 cmp eax, 0xbffd */
  { uint32_t _a=(EAX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c611b jle 0x119c6154 */
  if ((C.zf||C.sf!=C.of)) goto L_119c6154;
L_119c611d:;
  /* 119c611d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c6120 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c6126 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c6128 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c612a and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 119c6130 add ecx, 0x7fff8000 */
  { uint32_t _a=(ECX),_b=(0x7fff8000u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6136 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6139 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119c613c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c613f mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 119c6146 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6149 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 119c614f jmp 0x119c6499 */
  goto L_119c6499;
L_119c6154:;
  /* 119c6154 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c6157 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c615d cmp edx, 0x3fbf */
  { uint32_t _a=(EDX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6163 jg 0x119c6187 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c6187;
  /* 119c6165 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6168 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 119c616f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6172 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 119c6179 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c617c mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 119c6182 jmp 0x119c6499 */
  goto L_119c6499;
L_119c6187:;
  /* 119c6187 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c618a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c618f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c6191 jne 0x119c61cd */
  if (!C.zf) goto L_119c61cd;
  /* 119c6193 mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 119c6197 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 119c619b mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 119c619f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c61a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c61a5 and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c61aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c61ac jne 0x119c61cd */
  if (!C.zf) goto L_119c61cd;
  /* 119c61ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c61b1 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c61b5 jne 0x119c61cd */
  if (!C.zf) goto L_119c61cd;
  /* 119c61b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c61ba cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c61bd jne 0x119c61cd */
  if (!C.zf) goto L_119c61cd;
  /* 119c61bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c61c2 mov word ptr [eax + 0xa], 0 */
  w16((uint32_t)(EAX + 0xa), (0x0u));
  /* 119c61c8 jmp 0x119c6499 */
  goto L_119c6499;
L_119c61cd:;
  /* 119c61cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c61d0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c61d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c61d8 jne 0x119c6229 */
  if (!C.zf) goto L_119c6229;
  /* 119c61da mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 119c61de add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 119c61e2 mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
  /* 119c61e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c61e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119c61ec and ecx, 0x7fffffff */
  { uint32_t _r=(ECX)&(0x7fffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c61f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c61f4 jne 0x119c6229 */
  if (!C.zf) goto L_119c6229;
  /* 119c61f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c61f9 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c61fd jne 0x119c6229 */
  if (!C.zf) goto L_119c6229;
  /* 119c61ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6202 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6205 jne 0x119c6229 */
  if (!C.zf) goto L_119c6229;
  /* 119c6207 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c620a mov dword ptr [ecx + 8], 0 */
  w32((uint32_t)(ECX + 0x8), (0x0u));
  /* 119c6211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6214 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 119c621b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c621e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119c6224 jmp 0x119c6499 */
  goto L_119c6499;
L_119c6229:;
  /* 119c6229 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 119c6230 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 119c6237 jmp 0x119c6242 */
  goto L_119c6242;
L_119c6239:;
  /* 119c6239 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c623c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c623f mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_119c6242:;
  /* 119c6242 cmp dword ptr [ebp - 0x1c], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6246 jge 0x119c6301 */
  if ((C.sf==C.of)) goto L_119c6301;
  /* 119c624c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c624f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 119c6251 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 119c6254 mov dword ptr [ebp - 8], 8 */
  w32((uint32_t)(EBP + -0x8), (0x8u));
  /* 119c625b mov eax, 5 */
  EAX = (0x5u);
  /* 119c6260 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6263 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 119c6266 jmp 0x119c6271 */
  goto L_119c6271;
L_119c6268:;
  /* 119c6268 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 119c626b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c626e mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
L_119c6271:;
  /* 119c6271 cmp dword ptr [ebp - 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6275 jle 0x119c62f3 */
  if ((C.zf||C.sf!=C.of)) goto L_119c62f3;
  /* 119c6277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c627a add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c627d mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 119c6280 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6283 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6286 mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 119c6289 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c628c lea edx, [ebp + ecx - 0x14] */
  EDX = ((uint32_t)(EBP + ECX*1 + -0x14));
  /* 119c6290 mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 119c6293 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 119c6296 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c6298 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 119c629b mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 119c629e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c62a0 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 119c62a3 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c62a6 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 119c62a9 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c62ac push ecx */
  push32((uint32_t)(ECX));
  /* 119c62ad mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 119c62b0 push edx */
  push32((uint32_t)(EDX));
  /* 119c62b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c62b4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c62b6 push ecx */
  push32((uint32_t)(ECX));
  /* 119c62b7 call 0x119c2510 */
  push32(0x119c62bcu); f_119c2510();
  /* 119c62bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c62bf mov dword ptr [ebp - 0x48], eax */
  w32((uint32_t)(EBP + -0x48), (EAX));
  /* 119c62c2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c62c6 je 0x119c62dc */
  if (C.zf) goto L_119c62dc;
  /* 119c62c8 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c62cb mov ax, word ptr [ebp + edx - 0x10] */
  AX = (r16((uint32_t)(EBP + EDX*1 + -0x10)));
  /* 119c62d0 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 119c62d4 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c62d7 mov word ptr [ebp + ecx - 0x10], ax */
  w16((uint32_t)(EBP + ECX*1 + -0x10), (AX));
L_119c62dc:;
  /* 119c62dc mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c62df add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c62e2 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 119c62e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c62e8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c62eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c62ee jmp 0x119c6268 */
  goto L_119c6268;
L_119c62f3:;
  /* 119c62f3 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c62f6 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c62f9 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 119c62fc jmp 0x119c6239 */
  goto L_119c6239;
L_119c6301:;
  /* 119c6301 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 119c6305 sub dx, 0x3ffe */
  { uint32_t _a=(DX),_b=(0x3ffeu),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 119c630a mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_119c630e:;
  /* 119c630e movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 119c6312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c6314 jle 0x119c633d */
  if ((C.zf||C.sf!=C.of)) goto L_119c633d;
  /* 119c6316 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6319 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 119c631f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c6321 jne 0x119c633d */
  if (!C.zf) goto L_119c633d;
  /* 119c6323 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 119c6326 push edx */
  push32((uint32_t)(EDX));
  /* 119c6327 call 0x119c2600 */
  push32(0x119c632cu); f_119c2600();
  /* 119c632c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c632f mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 119c6333 sub ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a-_b; AX = (_r); fl_sub(_a,_b,_r,16); }
  /* 119c6337 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 119c633b jmp 0x119c630e */
  goto L_119c630e;
L_119c633d:;
  /* 119c633d movsx ecx, word ptr [ebp - 0x30] */
  ECX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 119c6341 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c6343 jg 0x119c639d */
  if ((!C.zf&&C.sf==C.of)) goto L_119c639d;
  /* 119c6345 mov dx, word ptr [ebp - 0x30] */
  DX = (r16((uint32_t)(EBP + -0x30)));
  /* 119c6349 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 119c634d mov word ptr [ebp - 0x30], dx */
  w16((uint32_t)(EBP + -0x30), (DX));
L_119c6351:;
  /* 119c6351 movsx eax, word ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x30))));
  /* 119c6355 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c6357 jge 0x119c638c */
  if ((C.sf==C.of)) goto L_119c638c;
  /* 119c6359 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c635c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c6362 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119c6365 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c6367 je 0x119c6372 */
  if (C.zf) goto L_119c6372;
  /* 119c6369 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c636c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c636f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c6372:;
  /* 119c6372 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 119c6375 push eax */
  push32((uint32_t)(EAX));
  /* 119c6376 call 0x119c2660 */
  push32(0x119c637bu); f_119c2660();
  /* 119c637b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c637e mov cx, word ptr [ebp - 0x30] */
  CX = (r16((uint32_t)(EBP + -0x30)));
  /* 119c6382 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 119c6386 mov word ptr [ebp - 0x30], cx */
  w16((uint32_t)(EBP + -0x30), (CX));
  /* 119c638a jmp 0x119c6351 */
  goto L_119c6351;
L_119c638c:;
  /* 119c638c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6390 je 0x119c639d */
  if (C.zf) goto L_119c639d;
  /* 119c6392 mov dx, word ptr [ebp - 0x14] */
  DX = (r16((uint32_t)(EBP + -0x14)));
  /* 119c6396 or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 119c6399 mov word ptr [ebp - 0x14], dx */
  w16((uint32_t)(EBP + -0x14), (DX));
L_119c639d:;
  /* 119c639d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c63a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c63a5 cmp eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c63aa jg 0x119c63bd */
  if ((!C.zf&&C.sf==C.of)) goto L_119c63bd;
  /* 119c63ac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c63af and ecx, 0x1ffff */
  { uint32_t _r=(ECX)&(0x1ffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c63b5 cmp ecx, 0x18000 */
  { uint32_t _a=(ECX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c63bb jne 0x119c641e */
  if (!C.zf) goto L_119c641e;
L_119c63bd:;
  /* 119c63bd cmp dword ptr [ebp - 0x12], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x12))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c63c1 jne 0x119c6415 */
  if (!C.zf) goto L_119c6415;
  /* 119c63c3 mov dword ptr [ebp - 0x12], 0 */
  w32((uint32_t)(EBP + -0x12), (0x0u));
  /* 119c63ca cmp dword ptr [ebp - 0xe], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xe))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c63ce jne 0x119c640a */
  if (!C.zf) goto L_119c640a;
  /* 119c63d0 mov dword ptr [ebp - 0xe], 0 */
  w32((uint32_t)(EBP + -0xe), (0x0u));
  /* 119c63d7 mov edx, dword ptr [ebp - 0xa] */
  EDX = (r32((uint32_t)(EBP + -0xa)));
  /* 119c63da and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c63e0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c63e6 jne 0x119c63fc */
  if (!C.zf) goto L_119c63fc;
  /* 119c63e8 mov word ptr [ebp - 0xa], 0x8000 */
  w16((uint32_t)(EBP + -0xa), (0x8000u));
  /* 119c63ee mov ax, word ptr [ebp - 0x30] */
  AX = (r16((uint32_t)(EBP + -0x30)));
  /* 119c63f2 add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 119c63f6 mov word ptr [ebp - 0x30], ax */
  w16((uint32_t)(EBP + -0x30), (AX));
  /* 119c63fa jmp 0x119c6408 */
  goto L_119c6408;
L_119c63fc:;
  /* 119c63fc mov cx, word ptr [ebp - 0xa] */
  CX = (r16((uint32_t)(EBP + -0xa)));
  /* 119c6400 add cx, 1 */
  { uint32_t _a=(CX),_b=(0x1u),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 119c6404 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_119c6408:;
  /* 119c6408 jmp 0x119c6413 */
  goto L_119c6413;
L_119c640a:;
  /* 119c640a mov edx, dword ptr [ebp - 0xe] */
  EDX = (r32((uint32_t)(EBP + -0xe)));
  /* 119c640d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6410 mov dword ptr [ebp - 0xe], edx */
  w32((uint32_t)(EBP + -0xe), (EDX));
L_119c6413:;
  /* 119c6413 jmp 0x119c641e */
  goto L_119c641e;
L_119c6415:;
  /* 119c6415 mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 119c6418 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c641b mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
L_119c641e:;
  /* 119c641e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c6421 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c6427 cmp ecx, 0x7fff */
  { uint32_t _a=(ECX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c642d jl 0x119c6463 */
  if ((C.sf!=C.of)) goto L_119c6463;
  /* 119c642f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c6432 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c6438 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c643a sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c643c and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 119c6442 add edx, 0x7fff8000 */
  { uint32_t _a=(EDX),_b=(0x7fff8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c644b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 119c644e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6451 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 119c6458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c645b mov dword ptr [edx], 0 */
  w32((uint32_t)(EDX), (0x0u));
  /* 119c6461 jmp 0x119c6499 */
  goto L_119c6499;
L_119c6463:;
  /* 119c6463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6466 mov cx, word ptr [ebp - 0x12] */
  CX = (r16((uint32_t)(EBP + -0x12)));
  /* 119c646a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 119c646d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6470 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6473 mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 119c6476 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6479 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c647c mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 119c647f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c6482 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c6487 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c648a and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c6490 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 119c6492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6495 mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
L_119c6499:;
  /* 119c6499 mov esp, ebp */
  ESP = (EBP);
  /* 119c649b pop ebp */
  EBP = (pop32());
  /* 119c649c ret  */
  ESPCHK(0x119c6060u, _esp0);
  ESP += 4; return;
}

/* FUN_100164a0 @ 0x119c64a0 (195 bytes, 67 insns) */
void f_119c64a0(void) {
  FTRACE(0x119c64a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c64a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c64a1 mov ebp, esp */
  EBP = (ESP);
  /* 119c64a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c64a6 mov eax, 0x119e5de0 */
  EAX = (0x119e5de0u);
  /* 119c64ab sub eax, 0x60 */
  { uint32_t _a=(EAX),_b=(0x60u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c64ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c64b1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c64b5 jne 0x119c64bc */
  if (!C.zf) goto L_119c64bc;
  /* 119c64b7 jmp 0x119c655f */
  goto L_119c655f;
L_119c64bc:;
  /* 119c64bc cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c64c0 jge 0x119c64d5 */
  if ((C.sf==C.of)) goto L_119c64d5;
  /* 119c64c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c64c5 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c64c7 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 119c64ca mov edx, 0x119e5f40 */
  EDX = (0x119e5f40u);
  /* 119c64cf sub edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c64d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c64d5:;
  /* 119c64d5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c64d9 jne 0x119c64e3 */
  if (!C.zf) goto L_119c64e3;
  /* 119c64db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c64de mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
L_119c64e3:;
  /* 119c64e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c64e7 je 0x119c655f */
  if (C.zf) goto L_119c655f;
  /* 119c64e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c64ec add ecx, 0x54 */
  { uint32_t _a=(ECX),_b=(0x54u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c64ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c64f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c64f5 and edx, 7 */
  { uint32_t _r=(EDX)&(0x7u); EDX = (_r); fl_logic(_r,32); }
  /* 119c64f8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119c64fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c64fe sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 119c6501 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 119c6504 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6508 jne 0x119c650c */
  if (!C.zf) goto L_119c650c;
  /* 119c650a jmp 0x119c64e3 */
  goto L_119c64e3;
L_119c650c:;
  /* 119c650c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c650f imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c6512 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c6515 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6517 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c651a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c651d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c651f mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 119c6522 cmp ecx, 0x8000 */
  { uint32_t _a=(ECX),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6528 jl 0x119c654d */
  if ((C.sf!=C.of)) goto L_119c654d;
  /* 119c652a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c652d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c652f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c6532 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119c6535 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119c6538 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c653b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119c653e mov eax, dword ptr [ebp - 0x12] */
  EAX = (r32((uint32_t)(EBP + -0x12)));
  /* 119c6541 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6544 mov dword ptr [ebp - 0x12], eax */
  w32((uint32_t)(EBP + -0x12), (EAX));
  /* 119c6547 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 119c654a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119c654d:;
  /* 119c654d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c6550 push edx */
  push32((uint32_t)(EDX));
  /* 119c6551 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6554 push eax */
  push32((uint32_t)(EAX));
  /* 119c6555 call 0x119c6060 */
  push32(0x119c655au); f_119c6060();
  /* 119c655a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c655d jmp 0x119c64e3 */
  goto L_119c64e3;
L_119c655f:;
  /* 119c655f mov esp, ebp */
  ESP = (EBP);
  /* 119c6561 pop ebp */
  EBP = (pop32());
  /* 119c6562 ret  */
  ESPCHK(0x119c64a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016570 @ 0x119c6570 (122 bytes, 39 insns) */
void f_119c6570(void) {
  FTRACE(0x119c6570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c6570 push ebp */
  push32((uint32_t)(EBP));
  /* 119c6571 mov ebp, esp */
  EBP = (ESP);
  /* 119c6573 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6577 cmp eax, dword ptr [0x119e8c1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e8c1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c657d jae 0x119c65a1 */
  if (!C.cf) goto L_119c65a1;
  /* 119c657f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6582 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119c6585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6588 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 119c658b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c658e mov eax, dword ptr [ecx*4 + 0x119e8ae0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x119e8ae0)));
  /* 119c6595 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 119c659a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119c659d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c659f jne 0x119c65bc */
  if (!C.zf) goto L_119c65bc;
L_119c65a1:;
  /* 119c65a1 call 0x119c0c20 */
  push32(0x119c65a6u); f_119c0c20();
  /* 119c65a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 119c65ac call 0x119c0c30 */
  push32(0x119c65b1u); f_119c0c30();
  /* 119c65b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119c65b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c65ba jmp 0x119c65e6 */
  goto L_119c65e6;
L_119c65bc:;
  /* 119c65bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c65bf push edx */
  push32((uint32_t)(EDX));
  /* 119c65c0 call 0x119c1150 */
  push32(0x119c65c5u); f_119c1150();
  /* 119c65c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c65c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c65cb push eax */
  push32((uint32_t)(EAX));
  /* 119c65cc call 0x119c65f0 */
  push32(0x119c65d1u); f_119c65f0();
  /* 119c65d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c65d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c65d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c65da push ecx */
  push32((uint32_t)(ECX));
  /* 119c65db call 0x119c11e0 */
  push32(0x119c65e0u); f_119c11e0();
  /* 119c65e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c65e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119c65e6:;
  /* 119c65e6 mov esp, ebp */
  ESP = (EBP);
  /* 119c65e8 pop ebp */
  EBP = (pop32());
  /* 119c65e9 ret  */
  ESPCHK(0x119c6570u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x119c65f0 (170 bytes, 59 insns) */
void f_119c65f0(void) {
  FTRACE(0x119c65f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c65f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c65f1 mov ebp, esp */
  EBP = (ESP);
  /* 119c65f3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c65f4 push esi */
  push32((uint32_t)(ESI));
  /* 119c65f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c65f8 push eax */
  push32((uint32_t)(EAX));
  /* 119c65f9 call 0x119c0fd0 */
  push32(0x119c65feu); f_119c0fd0();
  /* 119c65fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6601 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6604 je 0x119c6643 */
  if (C.zf) goto L_119c6643;
  /* 119c6606 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c660a je 0x119c6612 */
  if (C.zf) goto L_119c6612;
  /* 119c660c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6610 jne 0x119c662c */
  if (!C.zf) goto L_119c662c;
L_119c6612:;
  /* 119c6612 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c6614 call 0x119c0fd0 */
  push32(0x119c6619u); f_119c0fd0();
  /* 119c6619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c661c mov esi, eax */
  ESI = (EAX);
  /* 119c661e push 2 */
  push32((uint32_t)(0x2u));
  /* 119c6620 call 0x119c0fd0 */
  push32(0x119c6625u); f_119c0fd0();
  /* 119c6625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6628 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c662a je 0x119c6643 */
  if (C.zf) goto L_119c6643;
L_119c662c:;
  /* 119c662c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c662f push ecx */
  push32((uint32_t)(ECX));
  /* 119c6630 call 0x119c0fd0 */
  push32(0x119c6635u); f_119c0fd0();
  /* 119c6635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6638 push eax */
  push32((uint32_t)(EAX));
  /* 119c6639 call dword ptr [0x119e9300] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9300))), 0x119c663fu);
  /* 119c663f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c6641 je 0x119c664c */
  if (C.zf) goto L_119c664c;
L_119c6643:;
  /* 119c6643 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c664a jmp 0x119c6655 */
  goto L_119c6655;
L_119c664c:;
  /* 119c664c call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119c6652u);
  /* 119c6652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c6655:;
  /* 119c6655 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6658 push edx */
  push32((uint32_t)(EDX));
  /* 119c6659 call 0x119c0ef0 */
  push32(0x119c665eu); f_119c0ef0();
  /* 119c665e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6661 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6664 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 119c6667 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c666a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 119c666d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c6670 mov edx, dword ptr [eax*4 + 0x119e8ae0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x119e8ae0)));
  /* 119c6677 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 119c667c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6680 je 0x119c6693 */
  if (C.zf) goto L_119c6693;
  /* 119c6682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c6685 push eax */
  push32((uint32_t)(EAX));
  /* 119c6686 call 0x119c0b80 */
  push32(0x119c668bu); f_119c0b80();
  /* 119c668b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c668e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c6691 jmp 0x119c6695 */
  goto L_119c6695;
L_119c6693:;
  /* 119c6693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c6695:;
  /* 119c6695 pop esi */
  ESI = (pop32());
  /* 119c6696 mov esp, ebp */
  ESP = (EBP);
  /* 119c6698 pop ebp */
  EBP = (pop32());
  /* 119c6699 ret  */
  ESPCHK(0x119c65f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100166a0 @ 0x119c66a0 (146 bytes, 52 insns) */
void f_119c66a0(void) {
  FTRACE(0x119c66a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c66a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c66a1 mov ebp, esp */
  EBP = (ESP);
  /* 119c66a3 push ebx */
  push32((uint32_t)(EBX));
  /* 119c66a4 push esi */
  push32((uint32_t)(ESI));
  /* 119c66a5 push edi */
  push32((uint32_t)(EDI));
L_119c66a6:;
  /* 119c66a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c66aa jne 0x119c66ca */
  if (!C.zf) goto L_119c66ca;
  /* 119c66ac push 0x119e22c4 */
  push32((uint32_t)(0x119e22c4u));
  /* 119c66b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c66b3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 119c66b5 push 0x119e298c */
  push32((uint32_t)(0x119e298cu));
  /* 119c66ba push 2 */
  push32((uint32_t)(0x2u));
  /* 119c66bc call 0x119b59b0 */
  push32(0x119c66c1u); f_119b59b0();
  /* 119c66c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c66c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c66c7 jne 0x119c66ca */
  if (!C.zf) goto L_119c66ca;
  /* 119c66c9 int3  */
  x86_unimpl("int3 @ 0x119c66c9");
L_119c66ca:;
  /* 119c66ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c66cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c66ce jne 0x119c66a6 */
  if (!C.zf) goto L_119c66a6;
  /* 119c66d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c66d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c66d6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 119c66dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c66de je 0x119c672d */
  if (C.zf) goto L_119c672d;
  /* 119c66e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c66e3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 119c66e6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 119c66e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c66eb je 0x119c672d */
  if (C.zf) goto L_119c672d;
  /* 119c66ed push 2 */
  push32((uint32_t)(0x2u));
  /* 119c66ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c66f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c66f5 push eax */
  push32((uint32_t)(EAX));
  /* 119c66f6 call 0x119b8ca0 */
  push32(0x119c66fbu); f_119b8ca0();
  /* 119c66fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c66fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6701 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c6704 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 119c670a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c670d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 119c6710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6713 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 119c6719 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c671c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 119c6723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6726 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_119c672d:;
  /* 119c672d pop edi */
  EDI = (pop32());
  /* 119c672e pop esi */
  ESI = (pop32());
  /* 119c672f pop ebx */
  EBX = (pop32());
  /* 119c6730 pop ebp */
  EBP = (pop32());
  /* 119c6731 ret  */
  ESPCHK(0x119c66a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016740 @ 0x119c6740 (289 bytes, 97 insns) */
void f_119c6740(void) {
  FTRACE(0x119c6740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c6740 push ebp */
  push32((uint32_t)(EBP));
  /* 119c6741 mov ebp, esp */
  EBP = (ESP);
  /* 119c6743 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6746 push esi */
  push32((uint32_t)(ESI));
  /* 119c6747 mov eax, dword ptr [0x119e5ce8] */
  EAX = (r32((uint32_t)(0x119e5ce8)));
  /* 119c674c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c674f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c6756 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c675d jmp 0x119c6768 */
  goto L_119c6768;
L_119c675f:;
  /* 119c675f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6762 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6765 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_119c6768:;
  /* 119c6768 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c676c jae 0x119c67a1 */
  if (!C.cf) goto L_119c67a1;
  /* 119c676e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6774 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119c6777 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6778 call 0x119bb040 */
  push32(0x119c677du); f_119bb040();
  /* 119c677d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6780 mov esi, eax */
  ESI = (EAX);
  /* 119c6782 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6785 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6788 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 119c678c push ecx */
  push32((uint32_t)(ECX));
  /* 119c678d call 0x119bb040 */
  push32(0x119c6792u); f_119bb040();
  /* 119c6792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6795 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6798 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 119c679c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c679f jmp 0x119c675f */
  goto L_119c675f;
L_119c67a1:;
  /* 119c67a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c67a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c67a7 push eax */
  push32((uint32_t)(EAX));
  /* 119c67a8 call 0x119b81f0 */
  push32(0x119c67adu); f_119b81f0();
  /* 119c67ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c67b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c67b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c67b7 je 0x119c6859 */
  if (C.zf) goto L_119c6859;
  /* 119c67bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c67c0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119c67c3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c67ca jmp 0x119c67d5 */
  goto L_119c67d5;
L_119c67cc:;
  /* 119c67cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c67cf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c67d2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119c67d5:;
  /* 119c67d5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c67d9 jae 0x119c684a */
  if (!C.cf) goto L_119c684a;
  /* 119c67db mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c67de mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 119c67e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c67e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c67e7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119c67ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c67ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c67f0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119c67f3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c67f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c67f7 push edx */
  push32((uint32_t)(EDX));
  /* 119c67f8 call 0x119bb1c0 */
  push32(0x119c67fdu); f_119bb1c0();
  /* 119c67fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6800 push eax */
  push32((uint32_t)(EAX));
  /* 119c6801 call 0x119bb040 */
  push32(0x119c6806u); f_119bb040();
  /* 119c6806 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6809 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c680c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c680e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119c6811 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6814 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 119c6817 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c681a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c681d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c6820 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6823 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6826 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 119c682a push eax */
  push32((uint32_t)(EAX));
  /* 119c682b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c682e push ecx */
  push32((uint32_t)(ECX));
  /* 119c682f call 0x119bb1c0 */
  push32(0x119c6834u); f_119bb1c0();
  /* 119c6834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6837 push eax */
  push32((uint32_t)(EAX));
  /* 119c6838 call 0x119bb040 */
  push32(0x119c683du); f_119bb040();
  /* 119c683d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6840 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6843 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6845 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c6848 jmp 0x119c67cc */
  goto L_119c67cc;
L_119c684a:;
  /* 119c684a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c684d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 119c6850 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6853 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6856 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_119c6859:;
  /* 119c6859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c685c pop esi */
  ESI = (pop32());
  /* 119c685d mov esp, ebp */
  ESP = (EBP);
  /* 119c685f pop ebp */
  EBP = (pop32());
  /* 119c6860 ret  */
  ESPCHK(0x119c6740u, _esp0);
  ESP += 4; return;
}

/* FUN_10016870 @ 0x119c6870 (291 bytes, 97 insns) */
void f_119c6870(void) {
  FTRACE(0x119c6870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c6870 push ebp */
  push32((uint32_t)(EBP));
  /* 119c6871 mov ebp, esp */
  EBP = (ESP);
  /* 119c6873 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6876 push esi */
  push32((uint32_t)(ESI));
  /* 119c6877 mov eax, dword ptr [0x119e5ce8] */
  EAX = (r32((uint32_t)(0x119e5ce8)));
  /* 119c687c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c687f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c6886 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c688d jmp 0x119c6898 */
  goto L_119c6898;
L_119c688f:;
  /* 119c688f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6892 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6895 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_119c6898:;
  /* 119c6898 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c689c jae 0x119c68d2 */
  if (!C.cf) goto L_119c68d2;
  /* 119c689e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c68a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c68a4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 119c68a8 push ecx */
  push32((uint32_t)(ECX));
  /* 119c68a9 call 0x119bb040 */
  push32(0x119c68aeu); f_119bb040();
  /* 119c68ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c68b1 mov esi, eax */
  ESI = (EAX);
  /* 119c68b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c68b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c68b9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 119c68bd push ecx */
  push32((uint32_t)(ECX));
  /* 119c68be call 0x119bb040 */
  push32(0x119c68c3u); f_119bb040();
  /* 119c68c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c68c6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c68c9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 119c68cd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c68d0 jmp 0x119c688f */
  goto L_119c688f;
L_119c68d2:;
  /* 119c68d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c68d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c68d8 push eax */
  push32((uint32_t)(EAX));
  /* 119c68d9 call 0x119b81f0 */
  push32(0x119c68deu); f_119b81f0();
  /* 119c68de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c68e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c68e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c68e8 je 0x119c698b */
  if (C.zf) goto L_119c698b;
  /* 119c68ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c68f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119c68f4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c68fb jmp 0x119c6906 */
  goto L_119c6906;
L_119c68fd:;
  /* 119c68fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6900 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6903 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119c6906:;
  /* 119c6906 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c690a jae 0x119c697c */
  if (!C.cf) goto L_119c697c;
  /* 119c690c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c690f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 119c6912 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6915 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6918 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119c691b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c691e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6921 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 119c6925 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6926 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6929 push edx */
  push32((uint32_t)(EDX));
  /* 119c692a call 0x119bb1c0 */
  push32(0x119c692fu); f_119bb1c0();
  /* 119c692f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6932 push eax */
  push32((uint32_t)(EAX));
  /* 119c6933 call 0x119bb040 */
  push32(0x119c6938u); f_119bb040();
  /* 119c6938 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c693b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c693e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6940 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119c6943 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6946 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 119c6949 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c694c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c694f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c6952 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6955 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6958 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 119c695c push eax */
  push32((uint32_t)(EAX));
  /* 119c695d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6960 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6961 call 0x119bb1c0 */
  push32(0x119c6966u); f_119bb1c0();
  /* 119c6966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6969 push eax */
  push32((uint32_t)(EAX));
  /* 119c696a call 0x119bb040 */
  push32(0x119c696fu); f_119bb040();
  /* 119c696f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6972 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6975 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6977 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c697a jmp 0x119c68fd */
  goto L_119c68fd;
L_119c697c:;
  /* 119c697c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c697f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 119c6982 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6988 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_119c698b:;
  /* 119c698b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c698e pop esi */
  ESI = (pop32());
  /* 119c698f mov esp, ebp */
  ESP = (EBP);
  /* 119c6991 pop ebp */
  EBP = (pop32());
  /* 119c6992 ret  */
  ESPCHK(0x119c6870u, _esp0);
  ESP += 4; return;
}

/* FUN_100169a0 @ 0x119c69a0 (878 bytes, 273 insns) */
void f_119c69a0(void) {
  FTRACE(0x119c69a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c69a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c69a1 mov ebp, esp */
  EBP = (ESP);
  /* 119c69a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c69a6 push esi */
  push32((uint32_t)(ESI));
  /* 119c69a7 mov eax, dword ptr [0x119e5ce8] */
  EAX = (r32((uint32_t)(0x119e5ce8)));
  /* 119c69ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c69af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c69b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c69bd jmp 0x119c69c8 */
  goto L_119c69c8;
L_119c69bf:;
  /* 119c69bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c69c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c69c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_119c69c8:;
  /* 119c69c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c69cc jae 0x119c6a01 */
  if (!C.cf) goto L_119c6a01;
  /* 119c69ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c69d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c69d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 119c69d7 push ecx */
  push32((uint32_t)(ECX));
  /* 119c69d8 call 0x119bb040 */
  push32(0x119c69ddu); f_119bb040();
  /* 119c69dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c69e0 mov esi, eax */
  ESI = (EAX);
  /* 119c69e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c69e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c69e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 119c69ec push ecx */
  push32((uint32_t)(ECX));
  /* 119c69ed call 0x119bb040 */
  push32(0x119c69f2u); f_119bb040();
  /* 119c69f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c69f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c69f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 119c69fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c69ff jmp 0x119c69bf */
  goto L_119c69bf;
L_119c6a01:;
  /* 119c6a01 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c6a08 jmp 0x119c6a13 */
  goto L_119c6a13;
L_119c6a0a:;
  /* 119c6a0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6a0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6a10 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_119c6a13:;
  /* 119c6a13 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6a17 jae 0x119c6a4d */
  if (!C.cf) goto L_119c6a4d;
  /* 119c6a19 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6a1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6a1f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 119c6a23 push eax */
  push32((uint32_t)(EAX));
  /* 119c6a24 call 0x119bb040 */
  push32(0x119c6a29u); f_119bb040();
  /* 119c6a29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6a2c mov esi, eax */
  ESI = (EAX);
  /* 119c6a2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6a31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6a34 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 119c6a38 push eax */
  push32((uint32_t)(EAX));
  /* 119c6a39 call 0x119bb040 */
  push32(0x119c6a3eu); f_119bb040();
  /* 119c6a3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6a41 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6a44 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 119c6a48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c6a4b jmp 0x119c6a0a */
  goto L_119c6a0a;
L_119c6a4d:;
  /* 119c6a4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6a50 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 119c6a56 push eax */
  push32((uint32_t)(EAX));
  /* 119c6a57 call 0x119bb040 */
  push32(0x119c6a5cu); f_119bb040();
  /* 119c6a5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6a5f mov esi, eax */
  ESI = (EAX);
  /* 119c6a61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6a64 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 119c6a6a push edx */
  push32((uint32_t)(EDX));
  /* 119c6a6b call 0x119bb040 */
  push32(0x119c6a70u); f_119bb040();
  /* 119c6a70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6a73 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6a76 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 119c6a7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c6a7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6a80 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 119c6a86 push edx */
  push32((uint32_t)(EDX));
  /* 119c6a87 call 0x119bb040 */
  push32(0x119c6a8cu); f_119bb040();
  /* 119c6a8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6a8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c6a92 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 119c6a96 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c6a99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6a9c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 119c6aa2 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6aa3 call 0x119bb040 */
  push32(0x119c6aa8u); f_119bb040();
  /* 119c6aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6aab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c6aae lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 119c6ab2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c6ab5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6ab8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 119c6abe push edx */
  push32((uint32_t)(EDX));
  /* 119c6abf call 0x119bb040 */
  push32(0x119c6ac4u); f_119bb040();
  /* 119c6ac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6ac7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c6aca lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 119c6ace mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c6ad1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c6ad4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6ad9 push eax */
  push32((uint32_t)(EAX));
  /* 119c6ada call 0x119b81f0 */
  push32(0x119c6adfu); f_119b81f0();
  /* 119c6adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6ae2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c6ae5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6ae9 je 0x119c6d06 */
  if (C.zf) goto L_119c6d06;
  /* 119c6aef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c6af2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 119c6af5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c6af8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6afe mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c6b01 push 0xac */
  push32((uint32_t)(0xacu));
  /* 119c6b06 mov eax, dword ptr [0x119e5ce8] */
  EAX = (r32((uint32_t)(0x119e5ce8)));
  /* 119c6b0b push eax */
  push32((uint32_t)(EAX));
  /* 119c6b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c6b0f push ecx */
  push32((uint32_t)(ECX));
  /* 119c6b10 call 0x119c0840 */
  push32(0x119c6b15u); f_119c0840();
  /* 119c6b15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6b18 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c6b1f jmp 0x119c6b2a */
  goto L_119c6b2a;
L_119c6b21:;
  /* 119c6b21 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6b24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6b27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119c6b2a:;
  /* 119c6b2a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6b2e jae 0x119c6b9e */
  if (!C.cf) goto L_119c6b9e;
  /* 119c6b30 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6b33 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c6b36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6b39 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 119c6b3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6b3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6b42 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119c6b45 push edx */
  push32((uint32_t)(EDX));
  /* 119c6b46 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6b49 push eax */
  push32((uint32_t)(EAX));
  /* 119c6b4a call 0x119bb1c0 */
  push32(0x119c6b4fu); f_119bb1c0();
  /* 119c6b4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6b52 push eax */
  push32((uint32_t)(EAX));
  /* 119c6b53 call 0x119bb040 */
  push32(0x119c6b58u); f_119bb040();
  /* 119c6b58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6b5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6b5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 119c6b62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c6b65 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6b68 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c6b6b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6b6e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 119c6b72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6b75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6b78 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 119c6b7c push edx */
  push32((uint32_t)(EDX));
  /* 119c6b7d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6b80 push eax */
  push32((uint32_t)(EAX));
  /* 119c6b81 call 0x119bb1c0 */
  push32(0x119c6b86u); f_119bb1c0();
  /* 119c6b86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6b89 push eax */
  push32((uint32_t)(EAX));
  /* 119c6b8a call 0x119bb040 */
  push32(0x119c6b8fu); f_119bb040();
  /* 119c6b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6b92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6b95 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 119c6b99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c6b9c jmp 0x119c6b21 */
  goto L_119c6b21;
L_119c6b9e:;
  /* 119c6b9e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c6ba5 jmp 0x119c6bb0 */
  goto L_119c6bb0;
L_119c6ba7:;
  /* 119c6ba7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6baa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6bad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_119c6bb0:;
  /* 119c6bb0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6bb4 jae 0x119c6c26 */
  if (!C.cf) goto L_119c6c26;
  /* 119c6bb6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6bb9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c6bbc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6bbf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 119c6bc3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6bc6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6bc9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 119c6bcd push eax */
  push32((uint32_t)(EAX));
  /* 119c6bce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6bd1 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6bd2 call 0x119bb1c0 */
  push32(0x119c6bd7u); f_119bb1c0();
  /* 119c6bd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6bda push eax */
  push32((uint32_t)(EAX));
  /* 119c6bdb call 0x119bb040 */
  push32(0x119c6be0u); f_119bb040();
  /* 119c6be0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6be3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6be6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 119c6bea mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c6bed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6bf0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c6bf3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6bf6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 119c6bfa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6bfd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6c00 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 119c6c04 push eax */
  push32((uint32_t)(EAX));
  /* 119c6c05 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6c08 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6c09 call 0x119bb1c0 */
  push32(0x119c6c0eu); f_119bb1c0();
  /* 119c6c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6c11 push eax */
  push32((uint32_t)(EAX));
  /* 119c6c12 call 0x119bb040 */
  push32(0x119c6c17u); f_119bb040();
  /* 119c6c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6c1a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6c1d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 119c6c21 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c6c24 jmp 0x119c6ba7 */
  goto L_119c6ba7;
L_119c6c26:;
  /* 119c6c26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c6c29 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6c2c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 119c6c32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6c35 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 119c6c3b push ecx */
  push32((uint32_t)(ECX));
  /* 119c6c3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6c3f push edx */
  push32((uint32_t)(EDX));
  /* 119c6c40 call 0x119bb1c0 */
  push32(0x119c6c45u); f_119bb1c0();
  /* 119c6c45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6c48 push eax */
  push32((uint32_t)(EAX));
  /* 119c6c49 call 0x119bb040 */
  push32(0x119c6c4eu); f_119bb040();
  /* 119c6c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6c51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6c54 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 119c6c58 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c6c5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c6c5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6c61 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 119c6c67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6c6a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 119c6c70 push eax */
  push32((uint32_t)(EAX));
  /* 119c6c71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6c74 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6c75 call 0x119bb1c0 */
  push32(0x119c6c7au); f_119bb1c0();
  /* 119c6c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6c7d push eax */
  push32((uint32_t)(EAX));
  /* 119c6c7e call 0x119bb040 */
  push32(0x119c6c83u); f_119bb040();
  /* 119c6c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6c86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6c89 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 119c6c8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c6c90 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c6c93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6c96 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 119c6c9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6c9f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 119c6ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6ca6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6ca9 push edx */
  push32((uint32_t)(EDX));
  /* 119c6caa call 0x119bb1c0 */
  push32(0x119c6cafu); f_119bb1c0();
  /* 119c6caf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6cb2 push eax */
  push32((uint32_t)(EAX));
  /* 119c6cb3 call 0x119bb040 */
  push32(0x119c6cb8u); f_119bb040();
  /* 119c6cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6cbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6cbe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 119c6cc2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c6cc5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c6cc8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6ccb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 119c6cd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6cd4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 119c6cda push eax */
  push32((uint32_t)(EAX));
  /* 119c6cdb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6cde push ecx */
  push32((uint32_t)(ECX));
  /* 119c6cdf call 0x119bb1c0 */
  push32(0x119c6ce4u); f_119bb1c0();
  /* 119c6ce4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6ce7 push eax */
  push32((uint32_t)(EAX));
  /* 119c6ce8 call 0x119bb040 */
  push32(0x119c6cedu); f_119bb040();
  /* 119c6ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6cf0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6cf3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 119c6cf7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c6cfa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c6cfd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c6d00 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_119c6d06:;
  /* 119c6d06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c6d09 pop esi */
  ESI = (pop32());
  /* 119c6d0a mov esp, ebp */
  ESP = (EBP);
  /* 119c6d0c pop ebp */
  EBP = (pop32());
  /* 119c6d0d ret  */
  ESPCHK(0x119c69a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d10 @ 0x119c6d10 (31 bytes, 15 insns) */
void f_119c6d10(void) {
  FTRACE(0x119c6d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c6d10 push ebp */
  push32((uint32_t)(EBP));
  /* 119c6d11 mov ebp, esp */
  EBP = (ESP);
  /* 119c6d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c6d15 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6d18 push eax */
  push32((uint32_t)(EAX));
  /* 119c6d19 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6d1c push ecx */
  push32((uint32_t)(ECX));
  /* 119c6d1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6d20 push edx */
  push32((uint32_t)(EDX));
  /* 119c6d21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6d24 push eax */
  push32((uint32_t)(EAX));
  /* 119c6d25 call 0x119c6d30 */
  push32(0x119c6d2au); f_119c6d30();
  /* 119c6d2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6d2d pop ebp */
  EBP = (pop32());
  /* 119c6d2e ret  */
  ESPCHK(0x119c6d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016d30 @ 0x119c6d30 (393 bytes, 123 insns) */
void f_119c6d30(void) {
  FTRACE(0x119c6d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c6d30 push ebp */
  push32((uint32_t)(EBP));
  /* 119c6d31 mov ebp, esp */
  EBP = (ESP);
  /* 119c6d33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6d36 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6d3a jne 0x119c6d46 */
  if (!C.zf) goto L_119c6d46;
  /* 119c6d3c mov eax, dword ptr [0x119e5ce8] */
  EAX = (r32((uint32_t)(0x119e5ce8)));
  /* 119c6d41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119c6d44 jmp 0x119c6d4c */
  goto L_119c6d4c;
L_119c6d46:;
  /* 119c6d46 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c6d49 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_119c6d4c:;
  /* 119c6d4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c6d4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c6d52 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6d55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c6d58 push 0x119e749c */
  push32((uint32_t)(0x119e749cu));
  /* 119c6d5d call dword ptr [0x119e93d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93d4))), 0x119c6d63u);
  /* 119c6d63 cmp dword ptr [0x119e748c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e748c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6d6a je 0x119c6d8a */
  if (C.zf) goto L_119c6d8a;
  /* 119c6d6c push 0x119e749c */
  push32((uint32_t)(0x119e749cu));
  /* 119c6d71 call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119c6d77u);
  /* 119c6d77 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c6d79 call 0x119bdb80 */
  push32(0x119c6d7eu); f_119bdb80();
  /* 119c6d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6d81 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 119c6d88 jmp 0x119c6d91 */
  goto L_119c6d91;
L_119c6d8a:;
  /* 119c6d8a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119c6d91:;
  /* 119c6d91 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6d95 jbe 0x119c6e82 */
  if ((C.cf||C.zf)) goto L_119c6e82;
  /* 119c6d9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6d9e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c6da0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 119c6da3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c6da7 je 0x119c6db1 */
  if (C.zf) goto L_119c6db1;
  /* 119c6da9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c6dad je 0x119c6db6 */
  if (C.zf) goto L_119c6db6;
  /* 119c6daf jmp 0x119c6e10 */
  goto L_119c6e10;
L_119c6db1:;
  /* 119c6db1 jmp 0x119c6e82 */
  goto L_119c6e82;
L_119c6db6:;
  /* 119c6db6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6db9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6dbc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 119c6dbf mov dword ptr [0x119e7478], 0 */
  w32((uint32_t)(0x119e7478), (0x0u));
  /* 119c6dc9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6dcc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c6dcf cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6dd2 jne 0x119c6de7 */
  if (!C.zf) goto L_119c6de7;
  /* 119c6dd4 mov dword ptr [0x119e7478], 1 */
  w32((uint32_t)(0x119e7478), (0x1u));
  /* 119c6dde mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6de1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6de4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_119c6de7:;
  /* 119c6de7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c6dea push ecx */
  push32((uint32_t)(ECX));
  /* 119c6deb lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 119c6dee push edx */
  push32((uint32_t)(EDX));
  /* 119c6def lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 119c6df2 push eax */
  push32((uint32_t)(EAX));
  /* 119c6df3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6df6 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6df7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6dfa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c6dfc push eax */
  push32((uint32_t)(EAX));
  /* 119c6dfd call 0x119c6ec0 */
  push32(0x119c6e02u); f_119c6ec0();
  /* 119c6e02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6e05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6e08 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6e0b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 119c6e0e jmp 0x119c6e7d */
  goto L_119c6e7d;
L_119c6e10:;
  /* 119c6e10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c6e15 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c6e17 mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119c6e1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c6e1f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c6e23 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 119c6e29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c6e2b je 0x119c6e58 */
  if (C.zf) goto L_119c6e58;
  /* 119c6e2d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6e31 jbe 0x119c6e58 */
  if ((C.cf||C.zf)) goto L_119c6e58;
  /* 119c6e33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6e36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6e39 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c6e3b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119c6e3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6e40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6e43 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c6e46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6e49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6e4c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 119c6e4f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6e52 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6e55 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119c6e58:;
  /* 119c6e58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6e5b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6e5e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c6e60 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119c6e62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6e65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6e68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c6e6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6e6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6e71 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 119c6e74 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6e77 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6e7a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119c6e7d:;
  /* 119c6e7d jmp 0x119c6d91 */
  goto L_119c6d91;
L_119c6e82:;
  /* 119c6e82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6e86 je 0x119c6e94 */
  if (C.zf) goto L_119c6e94;
  /* 119c6e88 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c6e8a call 0x119bdc20 */
  push32(0x119c6e8fu); f_119bdc20();
  /* 119c6e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6e92 jmp 0x119c6e9f */
  goto L_119c6e9f;
L_119c6e94:;
  /* 119c6e94 push 0x119e749c */
  push32((uint32_t)(0x119e749cu));
  /* 119c6e99 call dword ptr [0x119e93c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e93c4))), 0x119c6e9fu);
L_119c6e9f:;
  /* 119c6e9f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6ea3 jbe 0x119c6eb3 */
  if ((C.cf||C.zf)) goto L_119c6eb3;
  /* 119c6ea5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c6ea8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 119c6eab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6eae sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6eb1 jmp 0x119c6eb5 */
  goto L_119c6eb5;
L_119c6eb3:;
  /* 119c6eb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c6eb5:;
  /* 119c6eb5 mov esp, ebp */
  ESP = (EBP);
  /* 119c6eb7 pop ebp */
  EBP = (pop32());
  /* 119c6eb8 ret  */
  ESPCHK(0x119c6d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10016ec0 @ 0x119c6ec0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_119c6ec0(void) {
  FTRACE(0x119c6ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c6ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c6ec1 mov ebp, esp */
  EBP = (ESP);
  /* 119c6ec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6ec6 push esi */
  push32((uint32_t)(ESI));
  /* 119c6ec7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 119c6ecb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c6ece mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6ed1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6ed4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c6ed7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6edb ja 0x119c7428 */
  if ((!C.cf&&!C.zf)) goto L_119c7428;
  /* 119c6ee1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c6ee4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c6ee6 mov dl, byte ptr [eax + 0x119c7489] */
  DL = (r8((uint32_t)(EAX + 0x119c7489)));
  /* 119c6eec jmp dword ptr [edx*4 + 0x119c742d] */
  switch (EDX) {
    case 0: goto L_119c7406;
    case 1: goto L_119c6f15;
    case 2: goto L_119c6f5b;
    case 3: goto L_119c70a8;
    case 4: goto L_119c70d0;
    case 5: goto L_119c716f;
    case 6: goto L_119c71db;
    case 7: goto L_119c7204;
    case 8: goto L_119c7245;
    case 9: goto L_119c7327;
    case 10: goto L_119c738e;
    case 11: goto L_119c73db;
    case 12: goto L_119c6ef3;
    case 13: goto L_119c6f38;
    case 14: goto L_119c6f7e;
    case 15: goto L_119c707e;
    case 16: goto L_119c7115;
    case 17: goto L_119c7142;
    case 18: goto L_119c7197;
    case 19: goto L_119c721b;
    case 20: goto L_119c72c9;
    case 21: goto L_119c7358;
    case 22: goto L_119c7428;
    default: x86_unimpl("switch@0x119c6eec out of table"); return;
  }
L_119c6ef3:;
  /* 119c6ef3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6ef7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6efa push edx */
  push32((uint32_t)(EDX));
  /* 119c6efb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6efe mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 119c6f01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c6f04 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 119c6f07 push eax */
  push32((uint32_t)(EAX));
  /* 119c6f08 call 0x119c74e0 */
  push32(0x119c6f0du); f_119c74e0();
  /* 119c6f0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6f10 jmp 0x119c7428 */
  goto L_119c7428;
L_119c6f15:;
  /* 119c6f15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6f18 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6f19 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6f1c push edx */
  push32((uint32_t)(EDX));
  /* 119c6f1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6f20 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 119c6f23 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c6f26 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 119c6f2a push eax */
  push32((uint32_t)(EAX));
  /* 119c6f2b call 0x119c74e0 */
  push32(0x119c6f30u); f_119c74e0();
  /* 119c6f30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6f33 jmp 0x119c7428 */
  goto L_119c7428;
L_119c6f38:;
  /* 119c6f38 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6f3b push ecx */
  push32((uint32_t)(ECX));
  /* 119c6f3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6f3f push edx */
  push32((uint32_t)(EDX));
  /* 119c6f40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6f43 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119c6f46 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c6f49 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 119c6f4d push eax */
  push32((uint32_t)(EAX));
  /* 119c6f4e call 0x119c74e0 */
  push32(0x119c6f53u); f_119c74e0();
  /* 119c6f53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6f56 jmp 0x119c7428 */
  goto L_119c7428;
L_119c6f5b:;
  /* 119c6f5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6f5e push ecx */
  push32((uint32_t)(ECX));
  /* 119c6f5f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6f62 push edx */
  push32((uint32_t)(EDX));
  /* 119c6f63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6f66 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119c6f69 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c6f6c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 119c6f70 push eax */
  push32((uint32_t)(EAX));
  /* 119c6f71 call 0x119c74e0 */
  push32(0x119c6f76u); f_119c74e0();
  /* 119c6f76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6f79 jmp 0x119c7428 */
  goto L_119c7428;
L_119c6f7e:;
  /* 119c6f7e cmp dword ptr [0x119e7478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6f85 je 0x119c7006 */
  if (C.zf) goto L_119c7006;
  /* 119c6f87 mov dword ptr [0x119e7478], 0 */
  w32((uint32_t)(0x119e7478), (0x0u));
  /* 119c6f91 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c6f94 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6f95 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6f98 push edx */
  push32((uint32_t)(EDX));
  /* 119c6f99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6f9c push eax */
  push32((uint32_t)(EAX));
  /* 119c6f9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6fa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c6fa4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 119c6faa push eax */
  push32((uint32_t)(EAX));
  /* 119c6fab call 0x119c7690 */
  push32(0x119c6fb0u); f_119c7690();
  /* 119c6fb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6fb3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6fb6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c6fb9 jne 0x119c6fc0 */
  if (!C.zf) goto L_119c6fc0;
  /* 119c6fbb jmp 0x119c7428 */
  goto L_119c7428;
L_119c6fc0:;
  /* 119c6fc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6fc3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c6fc5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 119c6fc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6fcb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c6fcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c6fd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6fd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c6fd5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6fd8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c6fda sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c6fdd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6fe0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c6fe2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c6fe5 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6fe6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c6fe9 push edx */
  push32((uint32_t)(EDX));
  /* 119c6fea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c6fed push eax */
  push32((uint32_t)(EAX));
  /* 119c6fee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c6ff1 push ecx */
  push32((uint32_t)(ECX));
  /* 119c6ff2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c6ff5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 119c6ffb push eax */
  push32((uint32_t)(EAX));
  /* 119c6ffc call 0x119c7690 */
  push32(0x119c7001u); f_119c7690();
  /* 119c7001 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7004 jmp 0x119c7079 */
  goto L_119c7079;
L_119c7006:;
  /* 119c7006 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c7009 push ecx */
  push32((uint32_t)(ECX));
  /* 119c700a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c700d push edx */
  push32((uint32_t)(EDX));
  /* 119c700e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7011 push eax */
  push32((uint32_t)(EAX));
  /* 119c7012 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7015 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7016 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c7019 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 119c701f push eax */
  push32((uint32_t)(EAX));
  /* 119c7020 call 0x119c7690 */
  push32(0x119c7025u); f_119c7690();
  /* 119c7025 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7028 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c702b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c702e jne 0x119c7035 */
  if (!C.zf) goto L_119c7035;
  /* 119c7030 jmp 0x119c7428 */
  goto L_119c7428;
L_119c7035:;
  /* 119c7035 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7038 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c703a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 119c703d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7040 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c7042 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7045 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7048 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c704a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c704d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c704f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7052 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7055 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c7057 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c705a push ecx */
  push32((uint32_t)(ECX));
  /* 119c705b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c705e push edx */
  push32((uint32_t)(EDX));
  /* 119c705f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7062 push eax */
  push32((uint32_t)(EAX));
  /* 119c7063 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7066 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7067 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c706a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 119c7070 push eax */
  push32((uint32_t)(EAX));
  /* 119c7071 call 0x119c7690 */
  push32(0x119c7076u); f_119c7690();
  /* 119c7076 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c7079:;
  /* 119c7079 jmp 0x119c7428 */
  goto L_119c7428;
L_119c707e:;
  /* 119c707e mov ecx, dword ptr [0x119e7478] */
  ECX = (r32((uint32_t)(0x119e7478)));
  /* 119c7084 mov dword ptr [0x119e7488], ecx */
  w32((uint32_t)(0x119e7488), (ECX));
  /* 119c708a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c708d push edx */
  push32((uint32_t)(EDX));
  /* 119c708e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7091 push eax */
  push32((uint32_t)(EAX));
  /* 119c7092 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c7094 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7097 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 119c709a push edx */
  push32((uint32_t)(EDX));
  /* 119c709b call 0x119c7530 */
  push32(0x119c70a0u); f_119c7530();
  /* 119c70a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c70a3 jmp 0x119c7428 */
  goto L_119c7428;
L_119c70a8:;
  /* 119c70a8 mov eax, dword ptr [0x119e7478] */
  EAX = (r32((uint32_t)(0x119e7478)));
  /* 119c70ad mov dword ptr [0x119e7488], eax */
  w32((uint32_t)(0x119e7488), (EAX));
  /* 119c70b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c70b5 push ecx */
  push32((uint32_t)(ECX));
  /* 119c70b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c70b9 push edx */
  push32((uint32_t)(EDX));
  /* 119c70ba push 2 */
  push32((uint32_t)(0x2u));
  /* 119c70bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c70bf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 119c70c2 push ecx */
  push32((uint32_t)(ECX));
  /* 119c70c3 call 0x119c7530 */
  push32(0x119c70c8u); f_119c7530();
  /* 119c70c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c70cb jmp 0x119c7428 */
  goto L_119c7428;
L_119c70d0:;
  /* 119c70d0 mov edx, dword ptr [0x119e7478] */
  EDX = (r32((uint32_t)(0x119e7478)));
  /* 119c70d6 mov dword ptr [0x119e7488], edx */
  w32((uint32_t)(0x119e7488), (EDX));
  /* 119c70dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c70df mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 119c70e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c70e3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 119c70e8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c70ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c70ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c70f1 jne 0x119c70fa */
  if (!C.zf) goto L_119c70fa;
  /* 119c70f3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_119c70fa:;
  /* 119c70fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c70fd push edx */
  push32((uint32_t)(EDX));
  /* 119c70fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7101 push eax */
  push32((uint32_t)(EAX));
  /* 119c7102 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c7104 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c7107 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7108 call 0x119c7530 */
  push32(0x119c710du); f_119c7530();
  /* 119c710d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7110 jmp 0x119c7428 */
  goto L_119c7428;
L_119c7115:;
  /* 119c7115 mov edx, dword ptr [0x119e7478] */
  EDX = (r32((uint32_t)(0x119e7478)));
  /* 119c711b mov dword ptr [0x119e7488], edx */
  w32((uint32_t)(0x119e7488), (EDX));
  /* 119c7121 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7124 push eax */
  push32((uint32_t)(EAX));
  /* 119c7125 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7128 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7129 push 3 */
  push32((uint32_t)(0x3u));
  /* 119c712b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c712e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 119c7131 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7134 push eax */
  push32((uint32_t)(EAX));
  /* 119c7135 call 0x119c7530 */
  push32(0x119c713au); f_119c7530();
  /* 119c713a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c713d jmp 0x119c7428 */
  goto L_119c7428;
L_119c7142:;
  /* 119c7142 mov ecx, dword ptr [0x119e7478] */
  ECX = (r32((uint32_t)(0x119e7478)));
  /* 119c7148 mov dword ptr [0x119e7488], ecx */
  w32((uint32_t)(0x119e7488), (ECX));
  /* 119c714e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7151 push edx */
  push32((uint32_t)(EDX));
  /* 119c7152 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7155 push eax */
  push32((uint32_t)(EAX));
  /* 119c7156 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c7158 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c715b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 119c715e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7161 push edx */
  push32((uint32_t)(EDX));
  /* 119c7162 call 0x119c7530 */
  push32(0x119c7167u); f_119c7530();
  /* 119c7167 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c716a jmp 0x119c7428 */
  goto L_119c7428;
L_119c716f:;
  /* 119c716f mov eax, dword ptr [0x119e7478] */
  EAX = (r32((uint32_t)(0x119e7478)));
  /* 119c7174 mov dword ptr [0x119e7488], eax */
  w32((uint32_t)(0x119e7488), (EAX));
  /* 119c7179 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c717c push ecx */
  push32((uint32_t)(ECX));
  /* 119c717d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7180 push edx */
  push32((uint32_t)(EDX));
  /* 119c7181 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c7183 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7186 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 119c7189 push ecx */
  push32((uint32_t)(ECX));
  /* 119c718a call 0x119c7530 */
  push32(0x119c718fu); f_119c7530();
  /* 119c718f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7192 jmp 0x119c7428 */
  goto L_119c7428;
L_119c7197:;
  /* 119c7197 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c719a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c719e jg 0x119c71bc */
  if ((!C.zf&&C.sf==C.of)) goto L_119c71bc;
  /* 119c71a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c71a3 push eax */
  push32((uint32_t)(EAX));
  /* 119c71a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c71a7 push ecx */
  push32((uint32_t)(ECX));
  /* 119c71a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c71ab mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 119c71b1 push eax */
  push32((uint32_t)(EAX));
  /* 119c71b2 call 0x119c74e0 */
  push32(0x119c71b7u); f_119c74e0();
  /* 119c71b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c71ba jmp 0x119c71d6 */
  goto L_119c71d6;
L_119c71bc:;
  /* 119c71bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c71bf push ecx */
  push32((uint32_t)(ECX));
  /* 119c71c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c71c3 push edx */
  push32((uint32_t)(EDX));
  /* 119c71c4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c71c7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 119c71cd push ecx */
  push32((uint32_t)(ECX));
  /* 119c71ce call 0x119c74e0 */
  push32(0x119c71d3u); f_119c74e0();
  /* 119c71d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c71d6:;
  /* 119c71d6 jmp 0x119c7428 */
  goto L_119c7428;
L_119c71db:;
  /* 119c71db mov edx, dword ptr [0x119e7478] */
  EDX = (r32((uint32_t)(0x119e7478)));
  /* 119c71e1 mov dword ptr [0x119e7488], edx */
  w32((uint32_t)(0x119e7488), (EDX));
  /* 119c71e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c71ea push eax */
  push32((uint32_t)(EAX));
  /* 119c71eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c71ee push ecx */
  push32((uint32_t)(ECX));
  /* 119c71ef push 2 */
  push32((uint32_t)(0x2u));
  /* 119c71f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c71f4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c71f6 push eax */
  push32((uint32_t)(EAX));
  /* 119c71f7 call 0x119c7530 */
  push32(0x119c71fcu); f_119c7530();
  /* 119c71fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c71ff jmp 0x119c7428 */
  goto L_119c7428;
L_119c7204:;
  /* 119c7204 mov ecx, dword ptr [0x119e7478] */
  ECX = (r32((uint32_t)(0x119e7478)));
  /* 119c720a mov dword ptr [0x119e7488], ecx */
  w32((uint32_t)(0x119e7488), (ECX));
  /* 119c7210 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7213 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 119c7216 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c7219 jmp 0x119c726d */
  goto L_119c726d;
L_119c721b:;
  /* 119c721b mov ecx, dword ptr [0x119e7478] */
  ECX = (r32((uint32_t)(0x119e7478)));
  /* 119c7221 mov dword ptr [0x119e7488], ecx */
  w32((uint32_t)(0x119e7488), (ECX));
  /* 119c7227 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c722a push edx */
  push32((uint32_t)(EDX));
  /* 119c722b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c722e push eax */
  push32((uint32_t)(EAX));
  /* 119c722f push 1 */
  push32((uint32_t)(0x1u));
  /* 119c7231 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7234 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 119c7237 push edx */
  push32((uint32_t)(EDX));
  /* 119c7238 call 0x119c7530 */
  push32(0x119c723du); f_119c7530();
  /* 119c723d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7240 jmp 0x119c7428 */
  goto L_119c7428;
L_119c7245:;
  /* 119c7245 mov eax, dword ptr [0x119e7478] */
  EAX = (r32((uint32_t)(0x119e7478)));
  /* 119c724a mov dword ptr [0x119e7488], eax */
  w32((uint32_t)(0x119e7488), (EAX));
  /* 119c724f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7252 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7256 jne 0x119c7261 */
  if (!C.zf) goto L_119c7261;
  /* 119c7258 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 119c725f jmp 0x119c726d */
  goto L_119c726d;
L_119c7261:;
  /* 119c7261 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7264 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 119c7267 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c726a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119c726d:;
  /* 119c726d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7270 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 119c7273 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7276 jge 0x119c7281 */
  if ((C.sf==C.of)) goto L_119c7281;
  /* 119c7278 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c727f jmp 0x119c72ae */
  goto L_119c72ae;
L_119c7281:;
  /* 119c7281 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7284 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 119c7287 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c7288 mov ecx, 7 */
  ECX = (0x7u);
  /* 119c728d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c728f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c7292 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7295 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 119c7298 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c7299 mov ecx, 7 */
  ECX = (0x7u);
  /* 119c729e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c72a0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c72a3 jl 0x119c72ae */
  if ((C.sf!=C.of)) goto L_119c72ae;
  /* 119c72a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c72a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c72ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_119c72ae:;
  /* 119c72ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c72b1 push eax */
  push32((uint32_t)(EAX));
  /* 119c72b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c72b5 push ecx */
  push32((uint32_t)(ECX));
  /* 119c72b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c72b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c72bb push edx */
  push32((uint32_t)(EDX));
  /* 119c72bc call 0x119c7530 */
  push32(0x119c72c1u); f_119c7530();
  /* 119c72c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c72c4 jmp 0x119c7428 */
  goto L_119c7428;
L_119c72c9:;
  /* 119c72c9 cmp dword ptr [0x119e7478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c72d0 je 0x119c7300 */
  if (C.zf) goto L_119c7300;
  /* 119c72d2 mov dword ptr [0x119e7478], 0 */
  w32((uint32_t)(0x119e7478), (0x0u));
  /* 119c72dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c72df push eax */
  push32((uint32_t)(EAX));
  /* 119c72e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c72e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c72e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c72e7 push edx */
  push32((uint32_t)(EDX));
  /* 119c72e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c72eb push eax */
  push32((uint32_t)(EAX));
  /* 119c72ec mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c72ef mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 119c72f5 push edx */
  push32((uint32_t)(EDX));
  /* 119c72f6 call 0x119c7690 */
  push32(0x119c72fbu); f_119c7690();
  /* 119c72fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c72fe jmp 0x119c7322 */
  goto L_119c7322;
L_119c7300:;
  /* 119c7300 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c7303 push eax */
  push32((uint32_t)(EAX));
  /* 119c7304 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7307 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7308 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c730b push edx */
  push32((uint32_t)(EDX));
  /* 119c730c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c730f push eax */
  push32((uint32_t)(EAX));
  /* 119c7310 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c7313 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 119c7319 push edx */
  push32((uint32_t)(EDX));
  /* 119c731a call 0x119c7690 */
  push32(0x119c731fu); f_119c7690();
  /* 119c731f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c7322:;
  /* 119c7322 jmp 0x119c7428 */
  goto L_119c7428;
L_119c7327:;
  /* 119c7327 mov dword ptr [0x119e7478], 0 */
  w32((uint32_t)(0x119e7478), (0x0u));
  /* 119c7331 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c7334 push eax */
  push32((uint32_t)(EAX));
  /* 119c7335 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7338 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7339 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c733c push edx */
  push32((uint32_t)(EDX));
  /* 119c733d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7340 push eax */
  push32((uint32_t)(EAX));
  /* 119c7341 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c7344 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 119c734a push edx */
  push32((uint32_t)(EDX));
  /* 119c734b call 0x119c7690 */
  push32(0x119c7350u); f_119c7690();
  /* 119c7350 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7353 jmp 0x119c7428 */
  goto L_119c7428;
L_119c7358:;
  /* 119c7358 mov eax, dword ptr [0x119e7478] */
  EAX = (r32((uint32_t)(0x119e7478)));
  /* 119c735d mov dword ptr [0x119e7488], eax */
  w32((uint32_t)(0x119e7488), (EAX));
  /* 119c7362 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7365 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 119c7368 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c7369 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 119c736e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c7370 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c7373 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7376 push edx */
  push32((uint32_t)(EDX));
  /* 119c7377 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c737a push eax */
  push32((uint32_t)(EAX));
  /* 119c737b push 2 */
  push32((uint32_t)(0x2u));
  /* 119c737d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c7380 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7381 call 0x119c7530 */
  push32(0x119c7386u); f_119c7530();
  /* 119c7386 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7389 jmp 0x119c7428 */
  goto L_119c7428;
L_119c738e:;
  /* 119c738e mov edx, dword ptr [0x119e7478] */
  EDX = (r32((uint32_t)(0x119e7478)));
  /* 119c7394 mov dword ptr [0x119e7488], edx */
  w32((uint32_t)(0x119e7488), (EDX));
  /* 119c739a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c739d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 119c73a0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c73a1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 119c73a6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c73a8 mov ecx, eax */
  ECX = (EAX);
  /* 119c73aa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c73ad imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c73b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c73b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119c73b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c73b7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 119c73bc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c73be add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c73c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c73c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c73c6 push eax */
  push32((uint32_t)(EAX));
  /* 119c73c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c73ca push ecx */
  push32((uint32_t)(ECX));
  /* 119c73cb push 4 */
  push32((uint32_t)(0x4u));
  /* 119c73cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c73d0 push edx */
  push32((uint32_t)(EDX));
  /* 119c73d1 call 0x119c7530 */
  push32(0x119c73d6u); f_119c7530();
  /* 119c73d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c73d9 jmp 0x119c7428 */
  goto L_119c7428;
L_119c73db:;
  /* 119c73db call 0x119c84f0 */
  push32(0x119c73e0u); f_119c84f0();
  /* 119c73e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c73e3 push eax */
  push32((uint32_t)(EAX));
  /* 119c73e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c73e7 push ecx */
  push32((uint32_t)(ECX));
  /* 119c73e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c73eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c73ed cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c73f1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 119c73f4 mov ecx, dword ptr [eax*4 + 0x119e6128] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119e6128)));
  /* 119c73fb push ecx */
  push32((uint32_t)(ECX));
  /* 119c73fc call 0x119c74e0 */
  push32(0x119c7401u); f_119c74e0();
  /* 119c7401 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7404 jmp 0x119c7428 */
  goto L_119c7428;
L_119c7406:;
  /* 119c7406 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7409 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c740b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 119c740e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7411 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c7413 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7416 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7419 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c741b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c741e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c7420 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7423 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7426 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119c7428:;
  /* 119c7428 pop esi */
  ESI = (pop32());
  /* 119c7429 mov esp, ebp */
  ESP = (EBP);
  /* 119c742b pop ebp */
  EBP = (pop32());
  /* 119c742c ret  */
  ESPCHK(0x119c6ec0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x119c74e0 (72 bytes, 30 insns) */
void f_119c74e0(void) {
  FTRACE(0x119c74e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c74e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c74e1 mov ebp, esp */
  EBP = (ESP);
L_119c74e3:;
  /* 119c74e3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c74e6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c74e9 je 0x119c7526 */
  if (C.zf) goto L_119c7526;
  /* 119c74eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c74ee movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c74f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c74f3 je 0x119c7526 */
  if (C.zf) goto L_119c7526;
  /* 119c74f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c74f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c74fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c74fd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c74ff mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119c7501 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7504 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c7506 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7509 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c750c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c750e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7511 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7514 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 119c7517 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c751a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c751c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c751f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7522 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119c7524 jmp 0x119c74e3 */
  goto L_119c74e3;
L_119c7526:;
  /* 119c7526 pop ebp */
  EBP = (pop32());
  /* 119c7527 ret  */
  ESPCHK(0x119c74e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017530 @ 0x119c7530 (173 bytes, 64 insns) */
void f_119c7530(void) {
  FTRACE(0x119c7530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c7530 push ebp */
  push32((uint32_t)(EBP));
  /* 119c7531 mov ebp, esp */
  EBP = (ESP);
  /* 119c7533 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7534 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c753b cmp dword ptr [0x119e7488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7542 je 0x119c755a */
  if (C.zf) goto L_119c755a;
  /* 119c7544 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7547 push eax */
  push32((uint32_t)(EAX));
  /* 119c7548 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c754b push ecx */
  push32((uint32_t)(ECX));
  /* 119c754c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c754f push edx */
  push32((uint32_t)(EDX));
  /* 119c7550 call 0x119c75e0 */
  push32(0x119c7555u); f_119c75e0();
  /* 119c7555 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7558 jmp 0x119c75d9 */
  goto L_119c75d9;
L_119c755a:;
  /* 119c755a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c755d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7560 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7562 jae 0x119c75d0 */
  if (!C.cf) goto L_119c75d0;
  /* 119c7564 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7567 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c756a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 119c756d jmp 0x119c7578 */
  goto L_119c7578;
L_119c756f:;
  /* 119c756f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7572 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7575 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_119c7578:;
  /* 119c7578 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c757b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c757e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c7580 je 0x119c75b4 */
  if (C.zf) goto L_119c75b4;
  /* 119c7582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7585 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c7586 mov ecx, 0xa */
  ECX = (0xau);
  /* 119c758b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c758d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7590 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7593 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c7595 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7598 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 119c759b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c759e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c759f mov ecx, 0xa */
  ECX = (0xau);
  /* 119c75a4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c75a6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c75a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c75ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c75af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c75b2 jmp 0x119c756f */
  goto L_119c756f;
L_119c75b4:;
  /* 119c75b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c75b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c75b9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c75bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c75bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119c75c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c75c4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c75c6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c75c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c75cc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119c75ce jmp 0x119c75d9 */
  goto L_119c75d9;
L_119c75d0:;
  /* 119c75d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c75d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_119c75d9:;
  /* 119c75d9 mov esp, ebp */
  ESP = (EBP);
  /* 119c75db pop ebp */
  EBP = (pop32());
  /* 119c75dc ret  */
  ESPCHK(0x119c7530u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x119c75e0 (172 bytes, 65 insns) */
void f_119c75e0(void) {
  FTRACE(0x119c75e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c75e0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c75e1 mov ebp, esp */
  EBP = (ESP);
  /* 119c75e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c75e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c75e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c75eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c75ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c75f1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c75f4 jbe 0x119c763b */
  if ((C.cf||C.zf)) goto L_119c763b;
L_119c75f6:;
  /* 119c75f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c75f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c75fa mov ecx, 0xa */
  ECX = (0xau);
  /* 119c75ff idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c7601 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7604 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c7607 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119c7609 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c760c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c760f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c7612 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7615 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c7617 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c761a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c761d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119c761f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7622 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c7623 mov ecx, 0xa */
  ECX = (0xau);
  /* 119c7628 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c762a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c762d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7631 jle 0x119c763b */
  if ((C.zf||C.sf!=C.of)) goto L_119c763b;
  /* 119c7633 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7636 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7639 ja 0x119c75f6 */
  if ((!C.cf&&!C.zf)) goto L_119c75f6;
L_119c763b:;
  /* 119c763b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c763e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c7640 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c7643 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7646 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c7649 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119c764b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c764e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7651 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c7654:;
  /* 119c7654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c7657 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c7659 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 119c765c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c765f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c7662 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c7664 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119c7666 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c7669 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c766c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c766f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c7672 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 119c7675 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 119c7677 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c767a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c767d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c7680 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c7683 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7686 jb 0x119c7654 */
  if (C.cf) goto L_119c7654;
  /* 119c7688 mov esp, ebp */
  ESP = (EBP);
  /* 119c768a pop ebp */
  EBP = (pop32());
  /* 119c768b ret  */
  ESPCHK(0x119c75e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017690 @ 0x119c7690 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_119c7690(void) {
  FTRACE(0x119c7690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c7690 push ebp */
  push32((uint32_t)(EBP));
  /* 119c7691 mov ebp, esp */
  EBP = (ESP);
  /* 119c7693 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_119c7696:;
  /* 119c7696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7699 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c769c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c769e je 0x119c7b0c */
  if (C.zf) goto L_119c7b0c;
  /* 119c76a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c76a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c76aa je 0x119c7b0c */
  if (C.zf) goto L_119c7b0c;
  /* 119c76b0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 119c76b4 mov dword ptr [0x119e7488], 0 */
  w32((uint32_t)(0x119e7488), (0x0u));
  /* 119c76be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c76c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c76c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c76cb jmp 0x119c76d6 */
  goto L_119c76d6;
L_119c76cd:;
  /* 119c76cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c76d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c76d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_119c76d6:;
  /* 119c76d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c76d9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c76dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c76df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c76e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c76e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c76e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c76eb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c76ed jne 0x119c76f1 */
  if (!C.zf) goto L_119c76f1;
  /* 119c76ef jmp 0x119c76cd */
  goto L_119c76cd;
L_119c76f1:;
  /* 119c76f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c76f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c76f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c76fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c76fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c7700 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119c7703 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c7706 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7709 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 119c770c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7710 ja 0x119c7a60 */
  if ((!C.cf&&!C.zf)) goto L_119c7a60;
  /* 119c7716 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c7719 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c771b mov al, byte ptr [ecx + 0x119c7b3c] */
  AL = (r8((uint32_t)(ECX + 0x119c7b3c)));
  /* 119c7721 jmp dword ptr [eax*4 + 0x119c7b10] */
  switch (EAX) {
    case 0: goto L_119c797f;
    case 1: goto L_119c7863;
    case 2: goto L_119c77ee;
    case 3: goto L_119c7728;
    case 4: goto L_119c7766;
    case 5: goto L_119c77c7;
    case 6: goto L_119c7815;
    case 7: goto L_119c783c;
    case 8: goto L_119c78aa;
    case 9: goto L_119c77a4;
    case 10: goto L_119c7a60;
    default: x86_unimpl("switch@0x119c7721 out of table"); return;
  }
L_119c7728:;
  /* 119c7728 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c772b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 119c772e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c7731 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7734 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119c7737 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c773b ja 0x119c7761 */
  if ((!C.cf&&!C.zf)) goto L_119c7761;
  /* 119c773d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c7740 jmp dword ptr [ecx*4 + 0x119c7b8f] */
  switch (ECX) {
    case 0: goto L_119c7747;
    case 1: goto L_119c7751;
    case 2: goto L_119c7757;
    case 3: goto L_119c775d;
    case 4: goto L_119c7785;
    case 5: goto L_119c778f;
    case 6: goto L_119c7795;
    case 7: goto L_119c779b;
    default: x86_unimpl("switch@0x119c7740 out of table"); return;
  }
L_119c7747:;
  /* 119c7747 mov dword ptr [0x119e7488], 1 */
  w32((uint32_t)(0x119e7488), (0x1u));
L_119c7751:;
  /* 119c7751 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 119c7755 jmp 0x119c7761 */
  goto L_119c7761;
L_119c7757:;
  /* 119c7757 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 119c775b jmp 0x119c7761 */
  goto L_119c7761;
L_119c775d:;
  /* 119c775d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_119c7761:;
  /* 119c7761 jmp 0x119c7a60 */
  goto L_119c7a60;
L_119c7766:;
  /* 119c7766 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c7769 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 119c776c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c776f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7772 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119c7775 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7779 ja 0x119c779f */
  if ((!C.cf&&!C.zf)) goto L_119c779f;
  /* 119c777b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c777e jmp dword ptr [ecx*4 + 0x119c7b9f] */
  switch (ECX) {
    case 0: goto L_119c7785;
    case 1: goto L_119c778f;
    case 2: goto L_119c7795;
    case 3: goto L_119c779b;
    default: x86_unimpl("switch@0x119c777e out of table"); return;
  }
L_119c7785:;
  /* 119c7785 mov dword ptr [0x119e7488], 1 */
  w32((uint32_t)(0x119e7488), (0x1u));
L_119c778f:;
  /* 119c778f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 119c7793 jmp 0x119c779f */
  goto L_119c779f;
L_119c7795:;
  /* 119c7795 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 119c7799 jmp 0x119c779f */
  goto L_119c779f;
L_119c779b:;
  /* 119c779b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_119c779f:;
  /* 119c779f jmp 0x119c7a60 */
  goto L_119c7a60;
L_119c77a4:;
  /* 119c77a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c77a7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 119c77aa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c77ae je 0x119c77b8 */
  if (C.zf) goto L_119c77b8;
  /* 119c77b0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c77b4 je 0x119c77be */
  if (C.zf) goto L_119c77be;
  /* 119c77b6 jmp 0x119c77c2 */
  goto L_119c77c2;
L_119c77b8:;
  /* 119c77b8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 119c77bc jmp 0x119c77c2 */
  goto L_119c77c2;
L_119c77be:;
  /* 119c77be mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_119c77c2:;
  /* 119c77c2 jmp 0x119c7a60 */
  goto L_119c7a60;
L_119c77c7:;
  /* 119c77c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c77ca mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119c77cd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c77d1 je 0x119c77db */
  if (C.zf) goto L_119c77db;
  /* 119c77d3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c77d7 je 0x119c77e5 */
  if (C.zf) goto L_119c77e5;
  /* 119c77d9 jmp 0x119c77e9 */
  goto L_119c77e9;
L_119c77db:;
  /* 119c77db mov dword ptr [0x119e7488], 1 */
  w32((uint32_t)(0x119e7488), (0x1u));
L_119c77e5:;
  /* 119c77e5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_119c77e9:;
  /* 119c77e9 jmp 0x119c7a60 */
  goto L_119c7a60;
L_119c77ee:;
  /* 119c77ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c77f1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 119c77f4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c77f8 je 0x119c7802 */
  if (C.zf) goto L_119c7802;
  /* 119c77fa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c77fe je 0x119c780c */
  if (C.zf) goto L_119c780c;
  /* 119c7800 jmp 0x119c7810 */
  goto L_119c7810;
L_119c7802:;
  /* 119c7802 mov dword ptr [0x119e7488], 1 */
  w32((uint32_t)(0x119e7488), (0x1u));
L_119c780c:;
  /* 119c780c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_119c7810:;
  /* 119c7810 jmp 0x119c7a60 */
  goto L_119c7a60;
L_119c7815:;
  /* 119c7815 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c7818 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 119c781b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c781f je 0x119c7829 */
  if (C.zf) goto L_119c7829;
  /* 119c7821 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7825 je 0x119c7833 */
  if (C.zf) goto L_119c7833;
  /* 119c7827 jmp 0x119c7837 */
  goto L_119c7837;
L_119c7829:;
  /* 119c7829 mov dword ptr [0x119e7488], 1 */
  w32((uint32_t)(0x119e7488), (0x1u));
L_119c7833:;
  /* 119c7833 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_119c7837:;
  /* 119c7837 jmp 0x119c7a60 */
  goto L_119c7a60;
L_119c783c:;
  /* 119c783c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c783f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 119c7842 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7846 je 0x119c7850 */
  if (C.zf) goto L_119c7850;
  /* 119c7848 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c784c je 0x119c785a */
  if (C.zf) goto L_119c785a;
  /* 119c784e jmp 0x119c785e */
  goto L_119c785e;
L_119c7850:;
  /* 119c7850 mov dword ptr [0x119e7488], 1 */
  w32((uint32_t)(0x119e7488), (0x1u));
L_119c785a:;
  /* 119c785a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_119c785e:;
  /* 119c785e jmp 0x119c7a60 */
  goto L_119c7a60;
L_119c7863:;
  /* 119c7863 push 0x119e2ac0 */
  push32((uint32_t)(0x119e2ac0u));
  /* 119c7868 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c786b push ecx */
  push32((uint32_t)(ECX));
  /* 119c786c call 0x119c80c0 */
  push32(0x119c7871u); f_119c80c0();
  /* 119c7871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c7876 jne 0x119c7883 */
  if (!C.zf) goto L_119c7883;
  /* 119c7878 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c787b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c787e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c7881 jmp 0x119c78a1 */
  goto L_119c78a1;
L_119c7883:;
  /* 119c7883 push 0x119e2abc */
  push32((uint32_t)(0x119e2abcu));
  /* 119c7888 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c788b push eax */
  push32((uint32_t)(EAX));
  /* 119c788c call 0x119c80c0 */
  push32(0x119c7891u); f_119c80c0();
  /* 119c7891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c7896 jne 0x119c78a1 */
  if (!C.zf) goto L_119c78a1;
  /* 119c7898 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c789b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c789e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c78a1:;
  /* 119c78a1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 119c78a5 jmp 0x119c7a60 */
  goto L_119c7a60;
L_119c78aa:;
  /* 119c78aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c78ad cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c78b1 jg 0x119c78c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c78c1;
  /* 119c78b3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c78b6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 119c78bc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119c78bf jmp 0x119c78cd */
  goto L_119c78cd;
L_119c78c1:;
  /* 119c78c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c78c4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 119c78ca mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_119c78cd:;
  /* 119c78cd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c78d1 jle 0x119c7974 */
  if ((C.zf||C.sf!=C.of)) goto L_119c7974;
  /* 119c78d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c78da cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c78dd jbe 0x119c7974 */
  if ((C.cf||C.zf)) goto L_119c7974;
  /* 119c78e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c78e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c78e8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c78ea mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119c78f0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c78f2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c78f6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 119c78fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c78fe je 0x119c7937 */
  if (C.zf) goto L_119c7937;
  /* 119c7900 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7903 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7906 jbe 0x119c7937 */
  if ((C.cf||C.zf)) goto L_119c7937;
  /* 119c7908 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c790b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c790d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c7910 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c7912 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119c7914 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7917 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c7919 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c791c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c791f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119c7921 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c7924 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7927 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 119c792a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c792d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c792f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7932 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7935 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_119c7937:;
  /* 119c7937 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c793a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c793c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c793f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c7941 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119c7943 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7946 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c7948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c794b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c794e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c7950 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c7953 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7956 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119c7959 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c795c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c795e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7961 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7964 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119c7966 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c7969 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c796c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119c796f jmp 0x119c78cd */
  goto L_119c78cd;
L_119c7974:;
  /* 119c7974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c7977 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c797a jmp 0x119c7696 */
  goto L_119c7696;
L_119c797f:;
  /* 119c797f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c7982 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 119c7985 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c7987 je 0x119c7a52 */
  if (C.zf) goto L_119c7a52;
  /* 119c798d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7990 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7993 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_119c7996:;
  /* 119c7996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7999 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c799c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c799e je 0x119c7a50 */
  if (C.zf) goto L_119c7a50;
  /* 119c79a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c79a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c79aa je 0x119c7a50 */
  if (C.zf) goto L_119c7a50;
  /* 119c79b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c79b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c79b6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c79b9 jne 0x119c79c9 */
  if (!C.zf) goto L_119c79c9;
  /* 119c79bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c79be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c79c1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119c79c4 jmp 0x119c7a50 */
  goto L_119c7a50;
L_119c79c9:;
  /* 119c79c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c79cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c79ce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c79d0 mov edx, dword ptr [0x119e4e00] */
  EDX = (r32((uint32_t)(0x119e4e00)));
  /* 119c79d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c79d8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 119c79dc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 119c79e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c79e3 je 0x119c7a1c */
  if (C.zf) goto L_119c7a1c;
  /* 119c79e5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c79e8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c79eb jbe 0x119c7a1c */
  if ((C.cf||C.zf)) goto L_119c7a1c;
  /* 119c79ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c79f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c79f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c79f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c79f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119c79f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c79fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c79fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7a01 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7a04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119c7a06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7a09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7a0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c7a0f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7a12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c7a14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7a17 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7a1a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119c7a1c:;
  /* 119c7a1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7a1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c7a21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7a24 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c7a26 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 119c7a28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7a2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c7a2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7a30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7a33 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119c7a35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7a38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7a3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119c7a3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7a41 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c7a43 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7a46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7a49 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119c7a4b jmp 0x119c7996 */
  goto L_119c7996;
L_119c7a50:;
  /* 119c7a50 jmp 0x119c7a5b */
  goto L_119c7a5b;
L_119c7a52:;
  /* 119c7a52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7a55 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7a58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_119c7a5b:;
  /* 119c7a5b jmp 0x119c7696 */
  goto L_119c7696;
L_119c7a60:;
  /* 119c7a60 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 119c7a64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c7a66 je 0x119c7a8c */
  if (C.zf) goto L_119c7a8c;
  /* 119c7a68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c7a6b push edx */
  push32((uint32_t)(EDX));
  /* 119c7a6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7a6f push eax */
  push32((uint32_t)(EAX));
  /* 119c7a70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7a73 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7a74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7a77 push edx */
  push32((uint32_t)(EDX));
  /* 119c7a78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 119c7a7b push eax */
  push32((uint32_t)(EAX));
  /* 119c7a7c call 0x119c6ec0 */
  push32(0x119c7a81u); f_119c6ec0();
  /* 119c7a81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7a84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c7a87 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 119c7a8a jmp 0x119c7b07 */
  goto L_119c7b07;
L_119c7a8c:;
  /* 119c7a8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7a8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c7a91 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c7a93 mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119c7a99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c7a9b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c7a9f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 119c7aa5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c7aa7 je 0x119c7ad8 */
  if (C.zf) goto L_119c7ad8;
  /* 119c7aa9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7aac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c7aae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7ab1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c7ab3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119c7ab5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7ab8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c7aba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7abd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7ac0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119c7ac2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7ac5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7ac8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 119c7acb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7ace mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c7ad0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7ad3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7ad6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_119c7ad8:;
  /* 119c7ad8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7adb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c7add mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7ae0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c7ae2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 119c7ae4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7ae7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c7ae9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7aec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7aef mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 119c7af1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7af4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7af7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c7afa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7afd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c7aff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7b02 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7b05 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_119c7b07:;
  /* 119c7b07 jmp 0x119c7696 */
  goto L_119c7696;
L_119c7b0c:;
  /* 119c7b0c mov esp, ebp */
  ESP = (EBP);
  /* 119c7b0e pop ebp */
  EBP = (pop32());
  /* 119c7b0f ret  */
  ESPCHK(0x119c7690u, _esp0);
  ESP += 4; return;
}

/* FUN_10017bb0 @ 0x119c7bb0 (650 bytes, 178 insns) */
void f_119c7bb0(void) {
  FTRACE(0x119c7bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c7bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c7bb1 mov ebp, esp */
  EBP = (ESP);
  /* 119c7bb3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c7bb9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7bbd jne 0x119c7d19 */
  if (!C.zf) goto L_119c7d19;
  /* 119c7bc3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7bc6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 119c7bcc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 119c7bd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c7bd5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c7bdc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 119c7be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7be8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 119c7bee push edx */
  push32((uint32_t)(EDX));
  /* 119c7bef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c7bf2 push eax */
  push32((uint32_t)(EAX));
  /* 119c7bf3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7bf6 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7bf7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7bfa push edx */
  push32((uint32_t)(EDX));
  /* 119c7bfb call 0x119c8fd0 */
  push32(0x119c7c00u); f_119c8fd0();
  /* 119c7c00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7c03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c7c06 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7c0a jne 0x119c7c9f */
  if (!C.zf) goto L_119c7c9f;
  /* 119c7c10 call dword ptr [0x119e9404] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9404))), 0x119c7c16u);
  /* 119c7c16 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7c19 je 0x119c7c20 */
  if (C.zf) goto L_119c7c20;
  /* 119c7c1b jmp 0x119c7cfd */
  goto L_119c7cfd;
L_119c7c20:;
  /* 119c7c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7c26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7c29 push eax */
  push32((uint32_t)(EAX));
  /* 119c7c2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7c2d push ecx */
  push32((uint32_t)(ECX));
  /* 119c7c2e call 0x119c8fd0 */
  push32(0x119c7c33u); f_119c8fd0();
  /* 119c7c33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7c36 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 119c7c3c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7c43 jne 0x119c7c4a */
  if (!C.zf) goto L_119c7c4a;
  /* 119c7c45 jmp 0x119c7cfd */
  goto L_119c7cfd;
L_119c7c4a:;
  /* 119c7c4a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 119c7c4c push 0x119e2ac8 */
  push32((uint32_t)(0x119e2ac8u));
  /* 119c7c51 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c7c53 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 119c7c59 push edx */
  push32((uint32_t)(EDX));
  /* 119c7c5a call 0x119b8210 */
  push32(0x119c7c5fu); f_119b8210();
  /* 119c7c5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7c62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c7c65 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7c69 jne 0x119c7c70 */
  if (!C.zf) goto L_119c7c70;
  /* 119c7c6b jmp 0x119c7cfd */
  goto L_119c7cfd;
L_119c7c70:;
  /* 119c7c70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119c7c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7c79 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 119c7c7f push eax */
  push32((uint32_t)(EAX));
  /* 119c7c80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c7c83 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7c84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7c87 push edx */
  push32((uint32_t)(EDX));
  /* 119c7c88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7c8b push eax */
  push32((uint32_t)(EAX));
  /* 119c7c8c call 0x119c8fd0 */
  push32(0x119c7c91u); f_119c8fd0();
  /* 119c7c91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7c94 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c7c97 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7c9b jne 0x119c7c9f */
  if (!C.zf) goto L_119c7c9f;
  /* 119c7c9d jmp 0x119c7cfd */
  goto L_119c7cfd;
L_119c7c9f:;
  /* 119c7c9f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 119c7ca1 push 0x119e2ac8 */
  push32((uint32_t)(0x119e2ac8u));
  /* 119c7ca6 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c7ca8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c7cab push ecx */
  push32((uint32_t)(ECX));
  /* 119c7cac call 0x119b8210 */
  push32(0x119c7cb1u); f_119b8210();
  /* 119c7cb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7cb4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 119c7cba mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 119c7cbc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 119c7cc2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7cc5 jne 0x119c7cc9 */
  if (!C.zf) goto L_119c7cc9;
  /* 119c7cc7 jmp 0x119c7cfd */
  goto L_119c7cfd;
L_119c7cc9:;
  /* 119c7cc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c7ccc push ecx */
  push32((uint32_t)(ECX));
  /* 119c7ccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c7cd0 push edx */
  push32((uint32_t)(EDX));
  /* 119c7cd1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 119c7cd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c7cd9 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7cda call 0x119bba30 */
  push32(0x119c7cdfu); f_119bba30();
  /* 119c7cdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7ce2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7ce6 je 0x119c7cf6 */
  if (C.zf) goto L_119c7cf6;
  /* 119c7ce8 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c7cea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c7ced push edx */
  push32((uint32_t)(EDX));
  /* 119c7cee call 0x119b8ca0 */
  push32(0x119c7cf3u); f_119b8ca0();
  /* 119c7cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c7cf6:;
  /* 119c7cf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c7cf8 jmp 0x119c7e36 */
  goto L_119c7e36;
L_119c7cfd:;
  /* 119c7cfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7d01 je 0x119c7d11 */
  if (C.zf) goto L_119c7d11;
  /* 119c7d03 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c7d05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c7d08 push eax */
  push32((uint32_t)(EAX));
  /* 119c7d09 call 0x119b8ca0 */
  push32(0x119c7d0eu); f_119b8ca0();
  /* 119c7d0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c7d11:;
  /* 119c7d11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c7d14 jmp 0x119c7e36 */
  goto L_119c7e36;
L_119c7d19:;
  /* 119c7d19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7d1d jne 0x119c7e33 */
  if (!C.zf) goto L_119c7e33;
  /* 119c7d23 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 119c7d2d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7d30 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 119c7d36 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7d38 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 119c7d3e push edx */
  push32((uint32_t)(EDX));
  /* 119c7d3f push 0x119e739c */
  push32((uint32_t)(0x119e739cu));
  /* 119c7d44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7d47 push eax */
  push32((uint32_t)(EAX));
  /* 119c7d48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7d4b push ecx */
  push32((uint32_t)(ECX));
  /* 119c7d4c call 0x119c8e30 */
  push32(0x119c7d51u); f_119c8e30();
  /* 119c7d51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7d54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c7d56 jne 0x119c7d60 */
  if (!C.zf) goto L_119c7d60;
  /* 119c7d58 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c7d5b jmp 0x119c7e36 */
  goto L_119c7e36;
L_119c7d60:;
  /* 119c7d60 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c7d66 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 119c7d69 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 119c7d73 jmp 0x119c7d84 */
  goto L_119c7d84;
L_119c7d75:;
  /* 119c7d75 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c7d7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7d7e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_119c7d84:;
  /* 119c7d84 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7d8b jge 0x119c7e2f */
  if ((C.sf==C.of)) goto L_119c7e2f;
  /* 119c7d91 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7d98 jle 0x119c7dcb */
  if ((C.zf||C.sf!=C.of)) goto L_119c7dcb;
  /* 119c7d9a push 4 */
  push32((uint32_t)(0x4u));
  /* 119c7d9c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c7da2 mov dl, byte ptr [ecx*2 + 0x119e739c] */
  DL = (r8((uint32_t)(ECX*2 + 0x119e739c)));
  /* 119c7da9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 119c7daf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 119c7db5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c7dba push eax */
  push32((uint32_t)(EAX));
  /* 119c7dbb call 0x119bc980 */
  push32(0x119c7dc0u); f_119bc980();
  /* 119c7dc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7dc3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 119c7dc9 jmp 0x119c7dfe */
  goto L_119c7dfe;
L_119c7dcb:;
  /* 119c7dcb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 119c7dd1 mov dl, byte ptr [ecx*2 + 0x119e739c] */
  DL = (r8((uint32_t)(ECX*2 + 0x119e739c)));
  /* 119c7dd8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 119c7dde mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 119c7de4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c7de9 mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119c7def xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c7df1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c7df5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119c7df8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_119c7dfe:;
  /* 119c7dfe cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7e05 je 0x119c7e28 */
  if (C.zf) goto L_119c7e28;
  /* 119c7e07 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c7e0d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c7e10 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c7e13 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 119c7e1a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 119c7e1e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 119c7e24 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 119c7e26 jmp 0x119c7e2a */
  goto L_119c7e2a;
L_119c7e28:;
  /* 119c7e28 jmp 0x119c7e2f */
  goto L_119c7e2f;
L_119c7e2a:;
  /* 119c7e2a jmp 0x119c7d75 */
  goto L_119c7d75;
L_119c7e2f:;
  /* 119c7e2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c7e31 jmp 0x119c7e36 */
  goto L_119c7e36;
L_119c7e33:;
  /* 119c7e33 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_119c7e36:;
  /* 119c7e36 mov esp, ebp */
  ESP = (EBP);
  /* 119c7e38 pop ebp */
  EBP = (pop32());
  /* 119c7e39 ret  */
  ESPCHK(0x119c7bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e40 @ 0x119c7e40 (10 bytes, 5 insns) */
void f_119c7e40(void) {
  FTRACE(0x119c7e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c7e40 push ebp */
  push32((uint32_t)(EBP));
  /* 119c7e41 mov ebp, esp */
  EBP = (ESP);
  /* 119c7e43 mov eax, dword ptr [0x119e5dd8] */
  EAX = (r32((uint32_t)(0x119e5dd8)));
  /* 119c7e48 pop ebp */
  EBP = (pop32());
  /* 119c7e49 ret  */
  ESPCHK(0x119c7e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10017e50 @ 0x119c7e50 (575 bytes, 196 insns) */
void f_119c7e50(void) {
  FTRACE(0x119c7e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c7e50 push ebp */
  push32((uint32_t)(EBP));
  /* 119c7e51 mov ebp, esp */
  EBP = (ESP);
  /* 119c7e53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c7e55 push 0x119e2ad8 */
  push32((uint32_t)(0x119e2ad8u));
  /* 119c7e5a push 0x119c5f80 */
  push32((uint32_t)(0x119c5f80u));
  /* 119c7e5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119c7e65 push eax */
  push32((uint32_t)(EAX));
  /* 119c7e66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119c7e6d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7e70 push ebx */
  push32((uint32_t)(EBX));
  /* 119c7e71 push esi */
  push32((uint32_t)(ESI));
  /* 119c7e72 push edi */
  push32((uint32_t)(EDI));
  /* 119c7e73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c7e76 cmp dword ptr [0x119e73a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e73a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7e7d jne 0x119c7ece */
  if (!C.zf) goto L_119c7ece;
  /* 119c7e7f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 119c7e82 push eax */
  push32((uint32_t)(EAX));
  /* 119c7e83 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c7e85 push 0x119e226c */
  push32((uint32_t)(0x119e226cu));
  /* 119c7e8a push 1 */
  push32((uint32_t)(0x1u));
  /* 119c7e8c call dword ptr [0x119e932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e932c))), 0x119c7e92u);
  /* 119c7e92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c7e94 je 0x119c7ea2 */
  if (C.zf) goto L_119c7ea2;
  /* 119c7e96 mov dword ptr [0x119e73a8], 1 */
  w32((uint32_t)(0x119e73a8), (0x1u));
  /* 119c7ea0 jmp 0x119c7ece */
  goto L_119c7ece;
L_119c7ea2:;
  /* 119c7ea2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 119c7ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7ea6 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c7ea8 push 0x119e2268 */
  push32((uint32_t)(0x119e2268u));
  /* 119c7ead push 1 */
  push32((uint32_t)(0x1u));
  /* 119c7eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7eb1 call dword ptr [0x119e9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9330))), 0x119c7eb7u);
  /* 119c7eb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c7eb9 je 0x119c7ec7 */
  if (C.zf) goto L_119c7ec7;
  /* 119c7ebb mov dword ptr [0x119e73a8], 2 */
  w32((uint32_t)(0x119e73a8), (0x2u));
  /* 119c7ec5 jmp 0x119c7ece */
  goto L_119c7ece;
L_119c7ec7:;
  /* 119c7ec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c7ec9 jmp 0x119c80a9 */
  goto L_119c80a9;
L_119c7ece:;
  /* 119c7ece cmp dword ptr [0x119e73a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e73a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7ed5 jne 0x119c7ef2 */
  if (!C.zf) goto L_119c7ef2;
  /* 119c7ed7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c7eda push edx */
  push32((uint32_t)(EDX));
  /* 119c7edb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7ede push eax */
  push32((uint32_t)(EAX));
  /* 119c7edf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7ee3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c7ee6 push edx */
  push32((uint32_t)(EDX));
  /* 119c7ee7 call dword ptr [0x119e932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e932c))), 0x119c7eedu);
  /* 119c7eed jmp 0x119c80a9 */
  goto L_119c80a9;
L_119c7ef2:;
  /* 119c7ef2 cmp dword ptr [0x119e73a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119e73a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7ef9 jne 0x119c80a7 */
  if (!C.zf) goto L_119c80a7;
  /* 119c7eff cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7f03 jne 0x119c7f0d */
  if (!C.zf) goto L_119c7f0d;
  /* 119c7f05 mov eax, dword ptr [0x119e7328] */
  EAX = (r32((uint32_t)(0x119e7328)));
  /* 119c7f0a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_119c7f0d:;
  /* 119c7f0d push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7f15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7f18 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7f19 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7f1c push edx */
  push32((uint32_t)(EDX));
  /* 119c7f1d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119c7f22 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c7f25 push eax */
  push32((uint32_t)(EAX));
  /* 119c7f26 call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c7f2cu);
  /* 119c7f2c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 119c7f2f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7f33 jne 0x119c7f3c */
  if (!C.zf) goto L_119c7f3c;
  /* 119c7f35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c7f37 jmp 0x119c80a9 */
  goto L_119c80a9;
L_119c7f3c:;
  /* 119c7f3c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c7f43 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c7f46 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7f49 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119c7f4b call 0x119bb3b0 */
  push32(0x119c7f50u); f_119bb3b0();
  /* 119c7f50 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 119c7f53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c7f56 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 119c7f59 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 119c7f5c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c7f5f push edx */
  push32((uint32_t)(EDX));
  /* 119c7f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7f62 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c7f65 push eax */
  push32((uint32_t)(EAX));
  /* 119c7f66 call 0x119bd6f0 */
  push32(0x119c7f6bu); f_119bd6f0();
  /* 119c7f6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7f6e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c7f75 jmp 0x119c7f8e */
  goto L_119c7f8e;
  /* 119c7f77 mov eax, 1 */
  EAX = (0x1u);
  /* 119c7f7c ret  */
  ESPCHK(0x119c7e50u, _esp0);
  ESP += 4; return;
  /* 119c7f7d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119c7f80 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 119c7f87 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c7f8e:;
  /* 119c7f8e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c7f92 jne 0x119c7f9b */
  if (!C.zf) goto L_119c7f9b;
  /* 119c7f94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c7f96 jmp 0x119c80a9 */
  goto L_119c80a9;
L_119c7f9b:;
  /* 119c7f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 119c7f9f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c7fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 119c7fa3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c7fa6 push edx */
  push32((uint32_t)(EDX));
  /* 119c7fa7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c7faa push eax */
  push32((uint32_t)(EAX));
  /* 119c7fab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c7fae push ecx */
  push32((uint32_t)(ECX));
  /* 119c7faf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119c7fb4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c7fb7 push edx */
  push32((uint32_t)(EDX));
  /* 119c7fb8 call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c7fbeu);
  /* 119c7fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c7fc0 jne 0x119c7fc9 */
  if (!C.zf) goto L_119c7fc9;
  /* 119c7fc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c7fc4 jmp 0x119c80a9 */
  goto L_119c80a9;
L_119c7fc9:;
  /* 119c7fc9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119c7fd0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c7fd3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 119c7fd7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c7fda and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119c7fdc call 0x119bb3b0 */
  push32(0x119c7fe1u); f_119bb3b0();
  /* 119c7fe1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 119c7fe4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c7fe7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 119c7fea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119c7fed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c7ff4 jmp 0x119c800d */
  goto L_119c800d;
  /* 119c7ff6 mov eax, 1 */
  EAX = (0x1u);
  /* 119c7ffb ret  */
  ESPCHK(0x119c7e50u, _esp0);
  ESP += 4; return;
  /* 119c7ffc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119c7fff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 119c8006 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c800d:;
  /* 119c800d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8011 jne 0x119c801a */
  if (!C.zf) goto L_119c801a;
  /* 119c8013 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8015 jmp 0x119c80a9 */
  goto L_119c80a9;
L_119c801a:;
  /* 119c801a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c801e jne 0x119c8029 */
  if (!C.zf) goto L_119c8029;
  /* 119c8020 mov edx, dword ptr [0x119e7318] */
  EDX = (r32((uint32_t)(0x119e7318)));
  /* 119c8026 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_119c8029:;
  /* 119c8029 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c802c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c802f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 119c8035 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8038 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c803b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 119c8042 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c8045 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8046 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c8049 push edx */
  push32((uint32_t)(EDX));
  /* 119c804a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 119c804d push eax */
  push32((uint32_t)(EAX));
  /* 119c804e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8051 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8052 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c8055 push edx */
  push32((uint32_t)(EDX));
  /* 119c8056 call dword ptr [0x119e9330] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9330))), 0x119c805cu);
  /* 119c805c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119c805f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8062 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c8065 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c8067 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 119c806c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8072 je 0x119c8088 */
  if (C.zf) goto L_119c8088;
  /* 119c8074 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8077 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c807a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c807c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c8080 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8086 je 0x119c808c */
  if (C.zf) goto L_119c808c;
L_119c8088:;
  /* 119c8088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c808a jmp 0x119c80a9 */
  goto L_119c80a9;
L_119c808c:;
  /* 119c808c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c808f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c8091 push eax */
  push32((uint32_t)(EAX));
  /* 119c8092 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c8095 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8096 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c8099 push edx */
  push32((uint32_t)(EDX));
  /* 119c809a call 0x119bd750 */
  push32(0x119c809fu); f_119bd750();
  /* 119c809f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c80a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c80a5 jmp 0x119c80a9 */
  goto L_119c80a9;
L_119c80a7:;
  /* 119c80a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c80a9:;
  /* 119c80a9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 119c80ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c80af mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119c80b6 pop edi */
  EDI = (pop32());
  /* 119c80b7 pop esi */
  ESI = (pop32());
  /* 119c80b8 pop ebx */
  EBX = (pop32());
  /* 119c80b9 mov esp, ebp */
  ESP = (EBP);
  /* 119c80bb pop ebp */
  EBP = (pop32());
  /* 119c80bc ret  */
  ESPCHK(0x119c7e50u, _esp0);
  ESP += 4; return;
}

/* FUN_100180c0 @ 0x119c80c0 (208 bytes, 85 insns) */
void f_119c80c0(void) {
  FTRACE(0x119c80c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c80c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c80c1 mov ebp, esp */
  EBP = (ESP);
  /* 119c80c3 push edi */
  push32((uint32_t)(EDI));
  /* 119c80c4 push esi */
  push32((uint32_t)(ESI));
  /* 119c80c5 push ebx */
  push32((uint32_t)(EBX));
  /* 119c80c6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119c80c9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119c80cc lea eax, [0x119e7310] */
  EAX = ((uint32_t)(0x119e7310));
  /* 119c80d2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c80d6 jne 0x119c8113 */
  if (!C.zf) goto L_119c8113;
  /* 119c80d8 mov al, 0xff */
  AL = (0xffu);
  /* 119c80da mov edi, edi */
  EDI = (EDI);
L_119c80dc:;
  /* 119c80dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c80de je 0x119c810e */
  if (C.zf) goto L_119c810e;
  /* 119c80e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c80e2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119c80e3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 119c80e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119c80e6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c80e8 je 0x119c80dc */
  if (C.zf) goto L_119c80dc;
  /* 119c80ea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119c80ec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c80ee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119c80f0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 119c80f3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119c80f5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119c80f7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 119c80f9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119c80fb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c80fd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119c80ff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 119c8102 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119c8104 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119c8106 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c8108 je 0x119c80dc */
  if (C.zf) goto L_119c80dc;
  /* 119c810a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 119c810c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_119c810e:;
  /* 119c810e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 119c8111 jmp 0x119c818b */
  goto L_119c818b;
L_119c8113:;
  /* 119c8113 lock inc dword ptr [0x119e749c] */
  x86_unimpl("lock inc @ 0x119c8113");
  /* 119c811a cmp dword ptr [0x119e748c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e748c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8121 jg 0x119c8127 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c8127;
  /* 119c8123 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8125 jmp 0x119c813c */
  goto L_119c813c;
L_119c8127:;
  /* 119c8127 lock dec dword ptr [0x119e749c] */
  x86_unimpl("lock dec @ 0x119c8127");
  /* 119c812e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c8130 call 0x119bdb80 */
  push32(0x119c8135u); f_119bdb80();
  /* 119c8135 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_119c813c:;
  /* 119c813c mov eax, 0xff */
  EAX = (0xffu);
  /* 119c8141 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119c8143 nop  */
  /* nop */
L_119c8144:;
  /* 119c8144 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c8146 je 0x119c816f */
  if (C.zf) goto L_119c816f;
  /* 119c8148 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c814a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119c814b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 119c814d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119c814e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c8150 je 0x119c8144 */
  if (C.zf) goto L_119c8144;
  /* 119c8152 push eax */
  push32((uint32_t)(EAX));
  /* 119c8153 push ebx */
  push32((uint32_t)(EBX));
  /* 119c8154 call 0x119bcaf0 */
  push32(0x119c8159u); f_119bcaf0();
  /* 119c8159 mov ebx, eax */
  EBX = (EAX);
  /* 119c815b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c815e call 0x119bcaf0 */
  push32(0x119c8163u); f_119bcaf0();
  /* 119c8163 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8166 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c8168 je 0x119c8144 */
  if (C.zf) goto L_119c8144;
  /* 119c816a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c816c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_119c816f:;
  /* 119c816f mov ebx, eax */
  EBX = (EAX);
  /* 119c8171 pop eax */
  EAX = (pop32());
  /* 119c8172 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8174 jne 0x119c817f */
  if (!C.zf) goto L_119c817f;
  /* 119c8176 lock dec dword ptr [0x119e749c] */
  x86_unimpl("lock dec @ 0x119c8176");
  /* 119c817d jmp 0x119c8189 */
  goto L_119c8189;
L_119c817f:;
  /* 119c817f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c8181 call 0x119bdc20 */
  push32(0x119c8186u); f_119bdc20();
  /* 119c8186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c8189:;
  /* 119c8189 mov eax, ebx */
  EAX = (EBX);
L_119c818b:;
  /* 119c818b pop ebx */
  EBX = (pop32());
  /* 119c818c pop esi */
  ESI = (pop32());
  /* 119c818d pop edi */
  EDI = (pop32());
  /* 119c818e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c818f ret  */
  ESPCHK(0x119c80c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018190 @ 0x119c8190 (257 bytes, 103 insns) */
void f_119c8190(void) {
  FTRACE(0x119c8190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c8190 push ebp */
  push32((uint32_t)(EBP));
  /* 119c8191 mov ebp, esp */
  EBP = (ESP);
  /* 119c8193 push edi */
  push32((uint32_t)(EDI));
  /* 119c8194 push esi */
  push32((uint32_t)(ESI));
  /* 119c8195 push ebx */
  push32((uint32_t)(EBX));
  /* 119c8196 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8199 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c819b je 0x119c828a */
  if (C.zf) goto L_119c828a;
  /* 119c81a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 119c81a4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 119c81a7 lea eax, [0x119e7310] */
  EAX = ((uint32_t)(0x119e7310));
  /* 119c81ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c81b1 jne 0x119c8201 */
  if (!C.zf) goto L_119c8201;
  /* 119c81b3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 119c81b5 mov bl, 0x5a */
  BL = (0x5au);
  /* 119c81b7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 119c81b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119c81bc:;
  /* 119c81bc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 119c81be or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 119c81c0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 119c81c2 je 0x119c81e5 */
  if (C.zf) goto L_119c81e5;
  /* 119c81c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 119c81c6 je 0x119c81e5 */
  if (C.zf) goto L_119c81e5;
  /* 119c81c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119c81c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119c81ca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c81cc jb 0x119c81d4 */
  if (C.cf) goto L_119c81d4;
  /* 119c81ce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c81d0 ja 0x119c81d4 */
  if ((!C.cf&&!C.zf)) goto L_119c81d4;
  /* 119c81d2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_119c81d4:;
  /* 119c81d4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c81d6 jb 0x119c81de */
  if (C.cf) goto L_119c81de;
  /* 119c81d8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c81da ja 0x119c81de */
  if ((!C.cf&&!C.zf)) goto L_119c81de;
  /* 119c81dc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_119c81de:;
  /* 119c81de cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c81e0 jne 0x119c81ef */
  if (!C.zf) goto L_119c81ef;
  /* 119c81e2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119c81e3 jne 0x119c81bc */
  if (!C.zf) goto L_119c81bc;
L_119c81e5:;
  /* 119c81e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c81e7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c81e9 je 0x119c828a */
  if (C.zf) goto L_119c828a;
L_119c81ef:;
  /* 119c81ef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 119c81f4 jb 0x119c828a */
  if (C.cf) goto L_119c828a;
  /* 119c81fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c81fc jmp 0x119c828a */
  goto L_119c828a;
L_119c8201:;
  /* 119c8201 lock inc dword ptr [0x119e749c] */
  x86_unimpl("lock inc @ 0x119c8201");
  /* 119c8208 cmp dword ptr [0x119e748c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e748c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c820f jg 0x119c8215 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c8215;
  /* 119c8211 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8213 jmp 0x119c822e */
  goto L_119c822e;
L_119c8215:;
  /* 119c8215 lock dec dword ptr [0x119e749c] */
  x86_unimpl("lock dec @ 0x119c8215");
  /* 119c821c mov ebx, ecx */
  EBX = (ECX);
  /* 119c821e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c8220 call 0x119bdb80 */
  push32(0x119c8225u); f_119bdb80();
  /* 119c8225 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 119c822c mov ecx, ebx */
  ECX = (EBX);
L_119c822e:;
  /* 119c822e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8230 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119c8232 mov edi, edi */
  EDI = (EDI);
L_119c8234:;
  /* 119c8234 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119c8236 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8238 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 119c823a je 0x119c825f */
  if (C.zf) goto L_119c825f;
  /* 119c823c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119c823e je 0x119c825f */
  if (C.zf) goto L_119c825f;
  /* 119c8240 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119c8241 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119c8242 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8243 push eax */
  push32((uint32_t)(EAX));
  /* 119c8244 push ebx */
  push32((uint32_t)(EBX));
  /* 119c8245 call 0x119bcaf0 */
  push32(0x119c824au); f_119bcaf0();
  /* 119c824a mov ebx, eax */
  EBX = (EAX);
  /* 119c824c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c824f call 0x119bcaf0 */
  push32(0x119c8254u); f_119bcaf0();
  /* 119c8254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8257 pop ecx */
  ECX = (pop32());
  /* 119c8258 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c825a jne 0x119c8265 */
  if (!C.zf) goto L_119c8265;
  /* 119c825c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119c825d jne 0x119c8234 */
  if (!C.zf) goto L_119c8234;
L_119c825f:;
  /* 119c825f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c8261 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8263 je 0x119c826e */
  if (C.zf) goto L_119c826e;
L_119c8265:;
  /* 119c8265 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 119c826a jb 0x119c826e */
  if (C.cf) goto L_119c826e;
  /* 119c826c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_119c826e:;
  /* 119c826e pop eax */
  EAX = (pop32());
  /* 119c826f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8271 jne 0x119c827c */
  if (!C.zf) goto L_119c827c;
  /* 119c8273 lock dec dword ptr [0x119e749c] */
  x86_unimpl("lock dec @ 0x119c8273");
  /* 119c827a jmp 0x119c828a */
  goto L_119c828a;
L_119c827c:;
  /* 119c827c mov ebx, ecx */
  EBX = (ECX);
  /* 119c827e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119c8280 call 0x119bdc20 */
  push32(0x119c8285u); f_119bdc20();
  /* 119c8285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8288 mov ecx, ebx */
  ECX = (EBX);
L_119c828a:;
  /* 119c828a mov eax, ecx */
  EAX = (ECX);
  /* 119c828c pop ebx */
  EBX = (pop32());
  /* 119c828d pop esi */
  ESI = (pop32());
  /* 119c828e pop edi */
  EDI = (pop32());
  /* 119c828f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119c8290 ret  */
  ESPCHK(0x119c8190u, _esp0);
  ESP += 4; return;
}

/* FUN_100182a0 @ 0x119c82a0 (255 bytes, 88 insns) */
void f_119c82a0(void) {
  FTRACE(0x119c82a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c82a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c82a1 mov ebp, esp */
  EBP = (ESP);
  /* 119c82a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_119c82a6:;
  /* 119c82a6 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c82ad jle 0x119c82c6 */
  if ((C.zf||C.sf!=C.of)) goto L_119c82c6;
  /* 119c82af push 8 */
  push32((uint32_t)(0x8u));
  /* 119c82b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c82b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c82b6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c82b8 push ecx */
  push32((uint32_t)(ECX));
  /* 119c82b9 call 0x119bc980 */
  push32(0x119c82beu); f_119bc980();
  /* 119c82be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c82c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119c82c4 jmp 0x119c82df */
  goto L_119c82df;
L_119c82c6:;
  /* 119c82c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c82c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c82cb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c82cd mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119c82d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c82d5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c82d9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 119c82dc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119c82df:;
  /* 119c82df cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c82e3 je 0x119c82f0 */
  if (C.zf) goto L_119c82f0;
  /* 119c82e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c82e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c82eb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c82ee jmp 0x119c82a6 */
  goto L_119c82a6;
L_119c82f0:;
  /* 119c82f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c82f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c82f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c82f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c82fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c82fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8300 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c8303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c8306 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c8309 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c830d je 0x119c8315 */
  if (C.zf) goto L_119c8315;
  /* 119c830f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8313 jne 0x119c8328 */
  if (!C.zf) goto L_119c8328;
L_119c8315:;
  /* 119c8315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c831a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c831c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c831f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8322 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8325 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_119c8328:;
  /* 119c8328 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119c832f:;
  /* 119c832f cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8336 jle 0x119c834b */
  if ((C.zf||C.sf!=C.of)) goto L_119c834b;
  /* 119c8338 push 4 */
  push32((uint32_t)(0x4u));
  /* 119c833a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c833d push edx */
  push32((uint32_t)(EDX));
  /* 119c833e call 0x119bc980 */
  push32(0x119c8343u); f_119bc980();
  /* 119c8343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8346 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c8349 jmp 0x119c8360 */
  goto L_119c8360;
L_119c834b:;
  /* 119c834b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c834e mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119c8354 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c8356 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c835a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119c835d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_119c8360:;
  /* 119c8360 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8364 je 0x119c838b */
  if (C.zf) goto L_119c838b;
  /* 119c8366 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c8369 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c836c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c836f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 119c8373 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c8376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8379 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c837b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c837d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c8380 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8383 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8386 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119c8389 jmp 0x119c832f */
  goto L_119c832f;
L_119c838b:;
  /* 119c838b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c838f jne 0x119c8398 */
  if (!C.zf) goto L_119c8398;
  /* 119c8391 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c8394 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c8396 jmp 0x119c839b */
  goto L_119c839b;
L_119c8398:;
  /* 119c8398 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_119c839b:;
  /* 119c839b mov esp, ebp */
  ESP = (EBP);
  /* 119c839d pop ebp */
  EBP = (pop32());
  /* 119c839e ret  */
  ESPCHK(0x119c82a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100183a0 @ 0x119c83a0 (17 bytes, 8 insns) */
void f_119c83a0(void) {
  FTRACE(0x119c83a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c83a0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c83a1 mov ebp, esp */
  EBP = (ESP);
  /* 119c83a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c83a6 push eax */
  push32((uint32_t)(EAX));
  /* 119c83a7 call 0x119c82a0 */
  push32(0x119c83acu); f_119c82a0();
  /* 119c83ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c83af pop ebp */
  EBP = (pop32());
  /* 119c83b0 ret  */
  ESPCHK(0x119c83a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100183c0 @ 0x119c83c0 (297 bytes, 106 insns) */
void f_119c83c0(void) {
  FTRACE(0x119c83c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c83c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c83c1 mov ebp, esp */
  EBP = (ESP);
  /* 119c83c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c83c6 push esi */
  push32((uint32_t)(ESI));
L_119c83c7:;
  /* 119c83c7 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c83ce jle 0x119c83e7 */
  if ((C.zf||C.sf!=C.of)) goto L_119c83e7;
  /* 119c83d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 119c83d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c83d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c83d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c83d9 push ecx */
  push32((uint32_t)(ECX));
  /* 119c83da call 0x119bc980 */
  push32(0x119c83dfu); f_119bc980();
  /* 119c83df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c83e2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c83e5 jmp 0x119c8400 */
  goto L_119c8400;
L_119c83e7:;
  /* 119c83e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c83ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c83ec mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c83ee mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119c83f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c83f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c83fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 119c83fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_119c8400:;
  /* 119c8400 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8404 je 0x119c8411 */
  if (C.zf) goto L_119c8411;
  /* 119c8406 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8409 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c840c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c840f jmp 0x119c83c7 */
  goto L_119c83c7;
L_119c8411:;
  /* 119c8411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8414 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c8416 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c8418 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c841b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c841e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8421 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 119c8424 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c8427 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119c842a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c842e je 0x119c8436 */
  if (C.zf) goto L_119c8436;
  /* 119c8430 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8434 jne 0x119c8449 */
  if (!C.zf) goto L_119c8449;
L_119c8436:;
  /* 119c8436 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c843b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c843d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c8440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8443 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8446 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_119c8449:;
  /* 119c8449 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 119c8450 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_119c8457:;
  /* 119c8457 cmp dword ptr [0x119e5010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e5010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c845e jle 0x119c8473 */
  if ((C.zf||C.sf!=C.of)) goto L_119c8473;
  /* 119c8460 push 4 */
  push32((uint32_t)(0x4u));
  /* 119c8462 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c8465 push edx */
  push32((uint32_t)(EDX));
  /* 119c8466 call 0x119bc980 */
  push32(0x119c846bu); f_119bc980();
  /* 119c846b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c846e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119c8471 jmp 0x119c8488 */
  goto L_119c8488;
L_119c8473:;
  /* 119c8473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c8476 mov ecx, dword ptr [0x119e4e00] */
  ECX = (r32((uint32_t)(0x119e4e00)));
  /* 119c847c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c847e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 119c8482 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 119c8485 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_119c8488:;
  /* 119c8488 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c848c je 0x119c84c9 */
  if (C.zf) goto L_119c84c9;
  /* 119c848e push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8490 push 0xa */
  push32((uint32_t)(0xau));
  /* 119c8492 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c8495 push eax */
  push32((uint32_t)(EAX));
  /* 119c8496 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8499 push ecx */
  push32((uint32_t)(ECX));
  /* 119c849a call 0x119c9180 */
  push32(0x119c849fu); f_119c9180();
  /* 119c849f mov ecx, eax */
  ECX = (EAX);
  /* 119c84a1 mov esi, edx */
  ESI = (EDX);
  /* 119c84a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c84a6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c84a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c84aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c84ac adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119c84ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c84b1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 119c84b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c84b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c84b9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c84bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c84be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c84c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c84c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 119c84c7 jmp 0x119c8457 */
  goto L_119c8457;
L_119c84c9:;
  /* 119c84c9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c84cd jne 0x119c84de */
  if (!C.zf) goto L_119c84de;
  /* 119c84cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c84d2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c84d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c84d7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c84da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c84dc jmp 0x119c84e4 */
  goto L_119c84e4;
L_119c84de:;
  /* 119c84de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c84e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_119c84e4:;
  /* 119c84e4 pop esi */
  ESI = (pop32());
  /* 119c84e5 mov esp, ebp */
  ESP = (EBP);
  /* 119c84e7 pop ebp */
  EBP = (pop32());
  /* 119c84e8 ret  */
  ESPCHK(0x119c83c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100184f0 @ 0x119c84f0 (61 bytes, 18 insns) */
void f_119c84f0(void) {
  FTRACE(0x119c84f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c84f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c84f1 mov ebp, esp */
  EBP = (ESP);
  /* 119c84f3 cmp dword ptr [0x119e7468], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7468))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c84fa jne 0x119c852b */
  if (!C.zf) goto L_119c852b;
  /* 119c84fc push 0xb */
  push32((uint32_t)(0xbu));
  /* 119c84fe call 0x119bdb80 */
  push32(0x119c8503u); f_119bdb80();
  /* 119c8503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8506 cmp dword ptr [0x119e7468], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7468))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c850d jne 0x119c8521 */
  if (!C.zf) goto L_119c8521;
  /* 119c850f call 0x119c8550 */
  push32(0x119c8514u); f_119c8550();
  /* 119c8514 mov eax, dword ptr [0x119e7468] */
  EAX = (r32((uint32_t)(0x119e7468)));
  /* 119c8519 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c851c mov dword ptr [0x119e7468], eax */
  w32((uint32_t)(0x119e7468), (EAX));
L_119c8521:;
  /* 119c8521 push 0xb */
  push32((uint32_t)(0xbu));
  /* 119c8523 call 0x119bdc20 */
  push32(0x119c8528u); f_119bdc20();
  /* 119c8528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c852b:;
  /* 119c852b pop ebp */
  EBP = (pop32());
  /* 119c852c ret  */
  ESPCHK(0x119c84f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018530 @ 0x119c8530 (30 bytes, 11 insns) */
void f_119c8530(void) {
  FTRACE(0x119c8530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c8530 push ebp */
  push32((uint32_t)(EBP));
  /* 119c8531 mov ebp, esp */
  EBP = (ESP);
  /* 119c8533 push 0xb */
  push32((uint32_t)(0xbu));
  /* 119c8535 call 0x119bdb80 */
  push32(0x119c853au); f_119bdb80();
  /* 119c853a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c853d call 0x119c8550 */
  push32(0x119c8542u); f_119c8550();
  /* 119c8542 push 0xb */
  push32((uint32_t)(0xbu));
  /* 119c8544 call 0x119bdc20 */
  push32(0x119c8549u); f_119bdc20();
  /* 119c8549 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c854c pop ebp */
  EBP = (pop32());
  /* 119c854d ret  */
  ESPCHK(0x119c8530u, _esp0);
  ESP += 4; return;
}

/* FUN_10018550 @ 0x119c8550 (939 bytes, 266 insns) */
void f_119c8550(void) {
  FTRACE(0x119c8550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c8550 push ebp */
  push32((uint32_t)(EBP));
  /* 119c8551 mov ebp, esp */
  EBP = (ESP);
  /* 119c8553 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8556 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c855d push 0xc */
  push32((uint32_t)(0xcu));
  /* 119c855f call 0x119bdb80 */
  push32(0x119c8564u); f_119bdb80();
  /* 119c8564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8567 mov dword ptr [0x119e73b0], 0 */
  w32((uint32_t)(0x119e73b0), (0x0u));
  /* 119c8571 mov dword ptr [0x119e6140], 0xffffffff */
  w32((uint32_t)(0x119e6140), (0xffffffffu));
  /* 119c857b mov eax, dword ptr [0x119e6140] */
  EAX = (r32((uint32_t)(0x119e6140)));
  /* 119c8580 mov dword ptr [0x119e6130], eax */
  w32((uint32_t)(0x119e6130), (EAX));
  /* 119c8585 push 0x119e2b38 */
  push32((uint32_t)(0x119e2b38u));
  /* 119c858a call 0x119c91f0 */
  push32(0x119c858fu); f_119c91f0();
  /* 119c858f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8592 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c8595 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8599 jne 0x119c86d3 */
  if (!C.zf) goto L_119c86d3;
  /* 119c859f push 0xc */
  push32((uint32_t)(0xcu));
  /* 119c85a1 call 0x119bdc20 */
  push32(0x119c85a6u); f_119bdc20();
  /* 119c85a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c85a9 push 0x119e73b8 */
  push32((uint32_t)(0x119e73b8u));
  /* 119c85ae call dword ptr [0x119e92fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92fc))), 0x119c85b4u);
  /* 119c85b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c85b7 je 0x119c86ce */
  if (C.zf) goto L_119c86ce;
  /* 119c85bd mov dword ptr [0x119e73b0], 1 */
  w32((uint32_t)(0x119e73b0), (0x1u));
  /* 119c85c7 mov ecx, dword ptr [0x119e73b8] */
  ECX = (r32((uint32_t)(0x119e73b8)));
  /* 119c85cd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c85d0 mov dword ptr [0x119e609c], ecx */
  w32((uint32_t)(0x119e609c), (ECX));
  /* 119c85d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c85d8 mov dx, word ptr [0x119e73fe] */
  DX = (r16((uint32_t)(0x119e73fe)));
  /* 119c85df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c85e1 je 0x119c85f9 */
  if (C.zf) goto L_119c85f9;
  /* 119c85e3 mov eax, dword ptr [0x119e740c] */
  EAX = (r32((uint32_t)(0x119e740c)));
  /* 119c85e8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c85eb mov ecx, dword ptr [0x119e609c] */
  ECX = (r32((uint32_t)(0x119e609c)));
  /* 119c85f1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c85f3 mov dword ptr [0x119e609c], ecx */
  w32((uint32_t)(0x119e609c), (ECX));
L_119c85f9:;
  /* 119c85f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c85fb mov dx, word ptr [0x119e7452] */
  DX = (r16((uint32_t)(0x119e7452)));
  /* 119c8602 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c8604 je 0x119c862e */
  if (C.zf) goto L_119c862e;
  /* 119c8606 cmp dword ptr [0x119e7460], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7460))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c860d je 0x119c862e */
  if (C.zf) goto L_119c862e;
  /* 119c860f mov dword ptr [0x119e60a0], 1 */
  w32((uint32_t)(0x119e60a0), (0x1u));
  /* 119c8619 mov eax, dword ptr [0x119e7460] */
  EAX = (r32((uint32_t)(0x119e7460)));
  /* 119c861e sub eax, dword ptr [0x119e740c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e740c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8624 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8627 mov dword ptr [0x119e60a4], eax */
  w32((uint32_t)(0x119e60a4), (EAX));
  /* 119c862c jmp 0x119c8642 */
  goto L_119c8642;
L_119c862e:;
  /* 119c862e mov dword ptr [0x119e60a0], 0 */
  w32((uint32_t)(0x119e60a0), (0x0u));
  /* 119c8638 mov dword ptr [0x119e60a4], 0 */
  w32((uint32_t)(0x119e60a4), (0x0u));
L_119c8642:;
  /* 119c8642 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 119c8645 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8646 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8648 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119c864a mov edx, dword ptr [0x119e6128] */
  EDX = (r32((uint32_t)(0x119e6128)));
  /* 119c8650 push edx */
  push32((uint32_t)(EDX));
  /* 119c8651 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c8653 push 0x119e73bc */
  push32((uint32_t)(0x119e73bcu));
  /* 119c8658 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119c865d mov eax, dword ptr [0x119e7328] */
  EAX = (r32((uint32_t)(0x119e7328)));
  /* 119c8662 push eax */
  push32((uint32_t)(EAX));
  /* 119c8663 call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c8669u);
  /* 119c8669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c866b je 0x119c867f */
  if (C.zf) goto L_119c867f;
  /* 119c866d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8671 jne 0x119c867f */
  if (!C.zf) goto L_119c867f;
  /* 119c8673 mov ecx, dword ptr [0x119e6128] */
  ECX = (r32((uint32_t)(0x119e6128)));
  /* 119c8679 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 119c867d jmp 0x119c8688 */
  goto L_119c8688;
L_119c867f:;
  /* 119c867f mov edx, dword ptr [0x119e6128] */
  EDX = (r32((uint32_t)(0x119e6128)));
  /* 119c8685 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_119c8688:;
  /* 119c8688 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 119c868b push eax */
  push32((uint32_t)(EAX));
  /* 119c868c push 0 */
  push32((uint32_t)(0x0u));
  /* 119c868e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 119c8690 mov ecx, dword ptr [0x119e612c] */
  ECX = (r32((uint32_t)(0x119e612c)));
  /* 119c8696 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8697 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c8699 push 0x119e7410 */
  push32((uint32_t)(0x119e7410u));
  /* 119c869e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119c86a3 mov edx, dword ptr [0x119e7328] */
  EDX = (r32((uint32_t)(0x119e7328)));
  /* 119c86a9 push edx */
  push32((uint32_t)(EDX));
  /* 119c86aa call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c86b0u);
  /* 119c86b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c86b2 je 0x119c86c5 */
  if (C.zf) goto L_119c86c5;
  /* 119c86b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c86b8 jne 0x119c86c5 */
  if (!C.zf) goto L_119c86c5;
  /* 119c86ba mov eax, dword ptr [0x119e612c] */
  EAX = (r32((uint32_t)(0x119e612c)));
  /* 119c86bf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 119c86c3 jmp 0x119c86ce */
  goto L_119c86ce;
L_119c86c5:;
  /* 119c86c5 mov ecx, dword ptr [0x119e612c] */
  ECX = (r32((uint32_t)(0x119e612c)));
  /* 119c86cb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_119c86ce:;
  /* 119c86ce jmp 0x119c88f7 */
  goto L_119c88f7;
L_119c86d3:;
  /* 119c86d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c86d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c86d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c86db je 0x119c86fd */
  if (C.zf) goto L_119c86fd;
  /* 119c86dd cmp dword ptr [0x119e7464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c86e4 je 0x119c870c */
  if (C.zf) goto L_119c870c;
  /* 119c86e6 mov ecx, dword ptr [0x119e7464] */
  ECX = (r32((uint32_t)(0x119e7464)));
  /* 119c86ec push ecx */
  push32((uint32_t)(ECX));
  /* 119c86ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c86f0 push edx */
  push32((uint32_t)(EDX));
  /* 119c86f1 call 0x119c4fa0 */
  push32(0x119c86f6u); f_119c4fa0();
  /* 119c86f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c86f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c86fb jne 0x119c870c */
  if (!C.zf) goto L_119c870c;
L_119c86fd:;
  /* 119c86fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 119c86ff call 0x119bdc20 */
  push32(0x119c8704u); f_119bdc20();
  /* 119c8704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8707 jmp 0x119c88f7 */
  goto L_119c88f7;
L_119c870c:;
  /* 119c870c push 2 */
  push32((uint32_t)(0x2u));
  /* 119c870e mov eax, dword ptr [0x119e7464] */
  EAX = (r32((uint32_t)(0x119e7464)));
  /* 119c8713 push eax */
  push32((uint32_t)(EAX));
  /* 119c8714 call 0x119b8ca0 */
  push32(0x119c8719u); f_119b8ca0();
  /* 119c8719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c871c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 119c8721 push 0x119e2b30 */
  push32((uint32_t)(0x119e2b30u));
  /* 119c8726 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c8728 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c872b push ecx */
  push32((uint32_t)(ECX));
  /* 119c872c call 0x119bb040 */
  push32(0x119c8731u); f_119bb040();
  /* 119c8731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8734 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8737 push eax */
  push32((uint32_t)(EAX));
  /* 119c8738 call 0x119b8210 */
  push32(0x119c873du); f_119b8210();
  /* 119c873d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8740 mov dword ptr [0x119e7464], eax */
  w32((uint32_t)(0x119e7464), (EAX));
  /* 119c8745 cmp dword ptr [0x119e7464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c874c jne 0x119c875d */
  if (!C.zf) goto L_119c875d;
  /* 119c874e push 0xc */
  push32((uint32_t)(0xcu));
  /* 119c8750 call 0x119bdc20 */
  push32(0x119c8755u); f_119bdc20();
  /* 119c8755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8758 jmp 0x119c88f7 */
  goto L_119c88f7;
L_119c875d:;
  /* 119c875d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8760 push edx */
  push32((uint32_t)(EDX));
  /* 119c8761 mov eax, dword ptr [0x119e7464] */
  EAX = (r32((uint32_t)(0x119e7464)));
  /* 119c8766 push eax */
  push32((uint32_t)(EAX));
  /* 119c8767 call 0x119bb1c0 */
  push32(0x119c876cu); f_119bb1c0();
  /* 119c876c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c876f push 0xc */
  push32((uint32_t)(0xcu));
  /* 119c8771 call 0x119bdc20 */
  push32(0x119c8776u); f_119bdc20();
  /* 119c8776 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8779 push 3 */
  push32((uint32_t)(0x3u));
  /* 119c877b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c877e push ecx */
  push32((uint32_t)(ECX));
  /* 119c877f mov edx, dword ptr [0x119e6128] */
  EDX = (r32((uint32_t)(0x119e6128)));
  /* 119c8785 push edx */
  push32((uint32_t)(EDX));
  /* 119c8786 call 0x119bba30 */
  push32(0x119c878bu); f_119bba30();
  /* 119c878b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c878e mov eax, dword ptr [0x119e6128] */
  EAX = (r32((uint32_t)(0x119e6128)));
  /* 119c8793 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 119c8797 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c879a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c879d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c87a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c87a3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c87a6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c87a9 jne 0x119c87bd */
  if (!C.zf) goto L_119c87bd;
  /* 119c87ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c87ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c87b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c87b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c87b7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c87ba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119c87bd:;
  /* 119c87bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c87c0 push eax */
  push32((uint32_t)(EAX));
  /* 119c87c1 call 0x119c82a0 */
  push32(0x119c87c6u); f_119c82a0();
  /* 119c87c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c87c9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c87cf mov dword ptr [0x119e609c], eax */
  w32((uint32_t)(0x119e609c), (EAX));
L_119c87d4:;
  /* 119c87d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c87d7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c87da cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c87dd je 0x119c87f5 */
  if (C.zf) goto L_119c87f5;
  /* 119c87df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c87e2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c87e5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c87e8 jl 0x119c8800 */
  if ((C.sf!=C.of)) goto L_119c8800;
  /* 119c87ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c87ed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c87f0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c87f3 jg 0x119c8800 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c8800;
L_119c87f5:;
  /* 119c87f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c87f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c87fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c87fe jmp 0x119c87d4 */
  goto L_119c87d4;
L_119c8800:;
  /* 119c8800 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8803 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c8806 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8809 jne 0x119c88a5 */
  if (!C.zf) goto L_119c88a5;
  /* 119c880f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8812 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8815 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c8818 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c881b push edx */
  push32((uint32_t)(EDX));
  /* 119c881c call 0x119c82a0 */
  push32(0x119c8821u); f_119c82a0();
  /* 119c8821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8824 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8827 mov ecx, dword ptr [0x119e609c] */
  ECX = (r32((uint32_t)(0x119e609c)));
  /* 119c882d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c882f mov dword ptr [0x119e609c], ecx */
  w32((uint32_t)(0x119e609c), (ECX));
L_119c8835:;
  /* 119c8835 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8838 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c883b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c883e jl 0x119c8856 */
  if ((C.sf!=C.of)) goto L_119c8856;
  /* 119c8840 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8843 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c8846 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8849 jg 0x119c8856 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c8856;
  /* 119c884b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c884e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8851 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c8854 jmp 0x119c8835 */
  goto L_119c8835;
L_119c8856:;
  /* 119c8856 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8859 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c885c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c885f jne 0x119c88a5 */
  if (!C.zf) goto L_119c88a5;
  /* 119c8861 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8864 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8867 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c886a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c886d push ecx */
  push32((uint32_t)(ECX));
  /* 119c886e call 0x119c82a0 */
  push32(0x119c8873u); f_119c82a0();
  /* 119c8873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8876 mov edx, dword ptr [0x119e609c] */
  EDX = (r32((uint32_t)(0x119e609c)));
  /* 119c887c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c887e mov dword ptr [0x119e609c], edx */
  w32((uint32_t)(0x119e609c), (EDX));
L_119c8884:;
  /* 119c8884 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8887 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c888a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c888d jl 0x119c88a5 */
  if ((C.sf!=C.of)) goto L_119c88a5;
  /* 119c888f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8892 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 119c8895 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8898 jg 0x119c88a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c88a5;
  /* 119c889a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c889d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c88a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c88a3 jmp 0x119c8884 */
  goto L_119c8884;
L_119c88a5:;
  /* 119c88a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c88a9 je 0x119c88b9 */
  if (C.zf) goto L_119c88b9;
  /* 119c88ab mov edx, dword ptr [0x119e609c] */
  EDX = (r32((uint32_t)(0x119e609c)));
  /* 119c88b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c88b3 mov dword ptr [0x119e609c], edx */
  w32((uint32_t)(0x119e609c), (EDX));
L_119c88b9:;
  /* 119c88b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c88bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 119c88bf mov dword ptr [0x119e60a0], ecx */
  w32((uint32_t)(0x119e60a0), (ECX));
  /* 119c88c5 cmp dword ptr [0x119e60a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e60a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c88cc je 0x119c88ee */
  if (C.zf) goto L_119c88ee;
  /* 119c88ce push 3 */
  push32((uint32_t)(0x3u));
  /* 119c88d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c88d3 push edx */
  push32((uint32_t)(EDX));
  /* 119c88d4 mov eax, dword ptr [0x119e612c] */
  EAX = (r32((uint32_t)(0x119e612c)));
  /* 119c88d9 push eax */
  push32((uint32_t)(EAX));
  /* 119c88da call 0x119bba30 */
  push32(0x119c88dfu); f_119bba30();
  /* 119c88df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c88e2 mov ecx, dword ptr [0x119e612c] */
  ECX = (r32((uint32_t)(0x119e612c)));
  /* 119c88e8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 119c88ec jmp 0x119c88f7 */
  goto L_119c88f7;
L_119c88ee:;
  /* 119c88ee mov edx, dword ptr [0x119e612c] */
  EDX = (r32((uint32_t)(0x119e612c)));
  /* 119c88f4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_119c88f7:;
  /* 119c88f7 mov esp, ebp */
  ESP = (EBP);
  /* 119c88f9 pop ebp */
  EBP = (pop32());
  /* 119c88fa ret  */
  ESPCHK(0x119c8550u, _esp0);
  ESP += 4; return;
}

/* FUN_10018900 @ 0x119c8900 (46 bytes, 18 insns) */
void f_119c8900(void) {
  FTRACE(0x119c8900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c8900 push ebp */
  push32((uint32_t)(EBP));
  /* 119c8901 mov ebp, esp */
  EBP = (ESP);
  /* 119c8903 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8904 push 0xb */
  push32((uint32_t)(0xbu));
  /* 119c8906 call 0x119bdb80 */
  push32(0x119c890bu); f_119bdb80();
  /* 119c890b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c890e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8911 push eax */
  push32((uint32_t)(EAX));
  /* 119c8912 call 0x119c8930 */
  push32(0x119c8917u); f_119c8930();
  /* 119c8917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c891a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c891d push 0xb */
  push32((uint32_t)(0xbu));
  /* 119c891f call 0x119bdc20 */
  push32(0x119c8924u); f_119bdc20();
  /* 119c8924 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c892a mov esp, ebp */
  ESP = (EBP);
  /* 119c892c pop ebp */
  EBP = (pop32());
  /* 119c892d ret  */
  ESPCHK(0x119c8900u, _esp0);
  ESP += 4; return;
}

/* FUN_10018930 @ 0x119c8930 (762 bytes, 246 insns) */
void f_119c8930(void) {
  FTRACE(0x119c8930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c8930 push ebp */
  push32((uint32_t)(EBP));
  /* 119c8931 mov ebp, esp */
  EBP = (ESP);
  /* 119c8933 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8934 cmp dword ptr [0x119e60a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e60a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c893b jne 0x119c8944 */
  if (!C.zf) goto L_119c8944;
  /* 119c893d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c893f jmp 0x119c8c26 */
  goto L_119c8c26;
L_119c8944:;
  /* 119c8944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8947 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119c894a cmp ecx, dword ptr [0x119e6130] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e6130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8950 jne 0x119c8964 */
  if (!C.zf) goto L_119c8964;
  /* 119c8952 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8955 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119c8958 cmp eax, dword ptr [0x119e6140] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e6140))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c895e je 0x119c8b2b */
  if (C.zf) goto L_119c8b2b;
L_119c8964:;
  /* 119c8964 cmp dword ptr [0x119e73b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e73b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c896b je 0x119c8ae5 */
  if (C.zf) goto L_119c8ae5;
  /* 119c8971 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c8973 mov cx, word ptr [0x119e7450] */
  CX = (r16((uint32_t)(0x119e7450)));
  /* 119c897a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c897c jne 0x119c89d9 */
  if (!C.zf) goto L_119c89d9;
  /* 119c897e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c8980 mov dx, word ptr [0x119e745e] */
  DX = (r16((uint32_t)(0x119e745e)));
  /* 119c8987 push edx */
  push32((uint32_t)(EDX));
  /* 119c8988 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c898a mov ax, word ptr [0x119e745c] */
  AX = (r16((uint32_t)(0x119e745c)));
  /* 119c8990 push eax */
  push32((uint32_t)(EAX));
  /* 119c8991 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c8993 mov cx, word ptr [0x119e745a] */
  CX = (r16((uint32_t)(0x119e745a)));
  /* 119c899a push ecx */
  push32((uint32_t)(ECX));
  /* 119c899b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c899d mov dx, word ptr [0x119e7458] */
  DX = (r16((uint32_t)(0x119e7458)));
  /* 119c89a4 push edx */
  push32((uint32_t)(EDX));
  /* 119c89a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c89a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c89a9 mov ax, word ptr [0x119e7454] */
  AX = (r16((uint32_t)(0x119e7454)));
  /* 119c89af push eax */
  push32((uint32_t)(EAX));
  /* 119c89b0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c89b2 mov cx, word ptr [0x119e7456] */
  CX = (r16((uint32_t)(0x119e7456)));
  /* 119c89b9 push ecx */
  push32((uint32_t)(ECX));
  /* 119c89ba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c89bc mov dx, word ptr [0x119e7452] */
  DX = (r16((uint32_t)(0x119e7452)));
  /* 119c89c3 push edx */
  push32((uint32_t)(EDX));
  /* 119c89c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c89c7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119c89ca push ecx */
  push32((uint32_t)(ECX));
  /* 119c89cb push 1 */
  push32((uint32_t)(0x1u));
  /* 119c89cd push 1 */
  push32((uint32_t)(0x1u));
  /* 119c89cf call 0x119c8c30 */
  push32(0x119c89d4u); f_119c8c30();
  /* 119c89d4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c89d7 jmp 0x119c8a2a */
  goto L_119c8a2a;
L_119c89d9:;
  /* 119c89d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c89db mov dx, word ptr [0x119e745e] */
  DX = (r16((uint32_t)(0x119e745e)));
  /* 119c89e2 push edx */
  push32((uint32_t)(EDX));
  /* 119c89e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c89e5 mov ax, word ptr [0x119e745c] */
  AX = (r16((uint32_t)(0x119e745c)));
  /* 119c89eb push eax */
  push32((uint32_t)(EAX));
  /* 119c89ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c89ee mov cx, word ptr [0x119e745a] */
  CX = (r16((uint32_t)(0x119e745a)));
  /* 119c89f5 push ecx */
  push32((uint32_t)(ECX));
  /* 119c89f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c89f8 mov dx, word ptr [0x119e7458] */
  DX = (r16((uint32_t)(0x119e7458)));
  /* 119c89ff push edx */
  push32((uint32_t)(EDX));
  /* 119c8a00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8a02 mov ax, word ptr [0x119e7456] */
  AX = (r16((uint32_t)(0x119e7456)));
  /* 119c8a08 push eax */
  push32((uint32_t)(EAX));
  /* 119c8a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8a0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c8a0f mov cx, word ptr [0x119e7452] */
  CX = (r16((uint32_t)(0x119e7452)));
  /* 119c8a16 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8a17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8a1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119c8a1d push eax */
  push32((uint32_t)(EAX));
  /* 119c8a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8a20 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8a22 call 0x119c8c30 */
  push32(0x119c8a27u); f_119c8c30();
  /* 119c8a27 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c8a2a:;
  /* 119c8a2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c8a2c mov cx, word ptr [0x119e73fc] */
  CX = (r16((uint32_t)(0x119e73fc)));
  /* 119c8a33 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c8a35 jne 0x119c8a92 */
  if (!C.zf) goto L_119c8a92;
  /* 119c8a37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c8a39 mov dx, word ptr [0x119e740a] */
  DX = (r16((uint32_t)(0x119e740a)));
  /* 119c8a40 push edx */
  push32((uint32_t)(EDX));
  /* 119c8a41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8a43 mov ax, word ptr [0x119e7408] */
  AX = (r16((uint32_t)(0x119e7408)));
  /* 119c8a49 push eax */
  push32((uint32_t)(EAX));
  /* 119c8a4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c8a4c mov cx, word ptr [0x119e7406] */
  CX = (r16((uint32_t)(0x119e7406)));
  /* 119c8a53 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8a54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c8a56 mov dx, word ptr [0x119e7404] */
  DX = (r16((uint32_t)(0x119e7404)));
  /* 119c8a5d push edx */
  push32((uint32_t)(EDX));
  /* 119c8a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8a60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8a62 mov ax, word ptr [0x119e7400] */
  AX = (r16((uint32_t)(0x119e7400)));
  /* 119c8a68 push eax */
  push32((uint32_t)(EAX));
  /* 119c8a69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c8a6b mov cx, word ptr [0x119e7402] */
  CX = (r16((uint32_t)(0x119e7402)));
  /* 119c8a72 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8a73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c8a75 mov dx, word ptr [0x119e73fe] */
  DX = (r16((uint32_t)(0x119e73fe)));
  /* 119c8a7c push edx */
  push32((uint32_t)(EDX));
  /* 119c8a7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8a80 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119c8a83 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8a84 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8a88 call 0x119c8c30 */
  push32(0x119c8a8du); f_119c8c30();
  /* 119c8a8d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8a90 jmp 0x119c8ae3 */
  goto L_119c8ae3;
L_119c8a92:;
  /* 119c8a92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c8a94 mov dx, word ptr [0x119e740a] */
  DX = (r16((uint32_t)(0x119e740a)));
  /* 119c8a9b push edx */
  push32((uint32_t)(EDX));
  /* 119c8a9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8a9e mov ax, word ptr [0x119e7408] */
  AX = (r16((uint32_t)(0x119e7408)));
  /* 119c8aa4 push eax */
  push32((uint32_t)(EAX));
  /* 119c8aa5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c8aa7 mov cx, word ptr [0x119e7406] */
  CX = (r16((uint32_t)(0x119e7406)));
  /* 119c8aae push ecx */
  push32((uint32_t)(ECX));
  /* 119c8aaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c8ab1 mov dx, word ptr [0x119e7404] */
  DX = (r16((uint32_t)(0x119e7404)));
  /* 119c8ab8 push edx */
  push32((uint32_t)(EDX));
  /* 119c8ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8abb mov ax, word ptr [0x119e7402] */
  AX = (r16((uint32_t)(0x119e7402)));
  /* 119c8ac1 push eax */
  push32((uint32_t)(EAX));
  /* 119c8ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8ac6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c8ac8 mov cx, word ptr [0x119e73fe] */
  CX = (r16((uint32_t)(0x119e73fe)));
  /* 119c8acf push ecx */
  push32((uint32_t)(ECX));
  /* 119c8ad0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8ad3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 119c8ad6 push eax */
  push32((uint32_t)(EAX));
  /* 119c8ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8adb call 0x119c8c30 */
  push32(0x119c8ae0u); f_119c8c30();
  /* 119c8ae0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c8ae3:;
  /* 119c8ae3 jmp 0x119c8b2b */
  goto L_119c8b2b;
L_119c8ae5:;
  /* 119c8ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8ae7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8ae9 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8aeb push 2 */
  push32((uint32_t)(0x2u));
  /* 119c8aed push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8aef push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8af1 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8af3 push 4 */
  push32((uint32_t)(0x4u));
  /* 119c8af5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8af8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 119c8afb push edx */
  push32((uint32_t)(EDX));
  /* 119c8afc push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8afe push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8b00 call 0x119c8c30 */
  push32(0x119c8b05u); f_119c8c30();
  /* 119c8b05 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8b0e push 2 */
  push32((uint32_t)(0x2u));
  /* 119c8b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8b14 push 5 */
  push32((uint32_t)(0x5u));
  /* 119c8b16 push 0xa */
  push32((uint32_t)(0xau));
  /* 119c8b18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8b1b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 119c8b1e push ecx */
  push32((uint32_t)(ECX));
  /* 119c8b1f push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8b23 call 0x119c8c30 */
  push32(0x119c8b28u); f_119c8c30();
  /* 119c8b28 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c8b2b:;
  /* 119c8b2b mov edx, dword ptr [0x119e6134] */
  EDX = (r32((uint32_t)(0x119e6134)));
  /* 119c8b31 cmp edx, dword ptr [0x119e6144] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e6144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8b37 jge 0x119c8b84 */
  if ((C.sf==C.of)) goto L_119c8b84;
  /* 119c8b39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8b3c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 119c8b3f cmp ecx, dword ptr [0x119e6134] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e6134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8b45 jl 0x119c8b55 */
  if ((C.sf!=C.of)) goto L_119c8b55;
  /* 119c8b47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8b4a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 119c8b4d cmp eax, dword ptr [0x119e6144] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e6144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8b53 jle 0x119c8b5c */
  if ((C.zf||C.sf!=C.of)) goto L_119c8b5c;
L_119c8b55:;
  /* 119c8b55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8b57 jmp 0x119c8c26 */
  goto L_119c8c26;
L_119c8b5c:;
  /* 119c8b5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8b5f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 119c8b62 cmp edx, dword ptr [0x119e6134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e6134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8b68 jle 0x119c8b82 */
  if ((C.zf||C.sf!=C.of)) goto L_119c8b82;
  /* 119c8b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8b6d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 119c8b70 cmp ecx, dword ptr [0x119e6144] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e6144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8b76 jge 0x119c8b82 */
  if ((C.sf==C.of)) goto L_119c8b82;
  /* 119c8b78 mov eax, 1 */
  EAX = (0x1u);
  /* 119c8b7d jmp 0x119c8c26 */
  goto L_119c8c26;
L_119c8b82:;
  /* 119c8b82 jmp 0x119c8bc7 */
  goto L_119c8bc7;
L_119c8b84:;
  /* 119c8b84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8b87 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 119c8b8a cmp eax, dword ptr [0x119e6144] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e6144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8b90 jl 0x119c8ba0 */
  if ((C.sf!=C.of)) goto L_119c8ba0;
  /* 119c8b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8b95 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 119c8b98 cmp edx, dword ptr [0x119e6134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e6134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8b9e jle 0x119c8ba7 */
  if ((C.zf||C.sf!=C.of)) goto L_119c8ba7;
L_119c8ba0:;
  /* 119c8ba0 mov eax, 1 */
  EAX = (0x1u);
  /* 119c8ba5 jmp 0x119c8c26 */
  goto L_119c8c26;
L_119c8ba7:;
  /* 119c8ba7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8baa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 119c8bad cmp ecx, dword ptr [0x119e6144] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e6144))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8bb3 jle 0x119c8bc7 */
  if ((C.zf||C.sf!=C.of)) goto L_119c8bc7;
  /* 119c8bb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8bb8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 119c8bbb cmp eax, dword ptr [0x119e6134] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e6134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8bc1 jge 0x119c8bc7 */
  if ((C.sf==C.of)) goto L_119c8bc7;
  /* 119c8bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8bc5 jmp 0x119c8c26 */
  goto L_119c8c26;
L_119c8bc7:;
  /* 119c8bc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8bca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119c8bcd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8bd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8bd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c8bd5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8bd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8bda mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 119c8bdd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8be3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8be5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8beb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c8bee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8bf1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 119c8bf4 cmp edx, dword ptr [0x119e6134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x119e6134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8bfa jne 0x119c8c12 */
  if (!C.zf) goto L_119c8c12;
  /* 119c8bfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c8bff cmp eax, dword ptr [0x119e6138] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e6138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8c05 jl 0x119c8c0e */
  if ((C.sf!=C.of)) goto L_119c8c0e;
  /* 119c8c07 mov eax, 1 */
  EAX = (0x1u);
  /* 119c8c0c jmp 0x119c8c26 */
  goto L_119c8c26;
L_119c8c0e:;
  /* 119c8c0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8c10 jmp 0x119c8c26 */
  goto L_119c8c26;
L_119c8c12:;
  /* 119c8c12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c8c15 cmp ecx, dword ptr [0x119e6148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e6148))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8c1b jge 0x119c8c24 */
  if ((C.sf==C.of)) goto L_119c8c24;
  /* 119c8c1d mov eax, 1 */
  EAX = (0x1u);
  /* 119c8c22 jmp 0x119c8c26 */
  goto L_119c8c26;
L_119c8c24:;
  /* 119c8c24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c8c26:;
  /* 119c8c26 mov esp, ebp */
  ESP = (EBP);
  /* 119c8c28 pop ebp */
  EBP = (pop32());
  /* 119c8c29 ret  */
  ESPCHK(0x119c8930u, _esp0);
  ESP += 4; return;
}

/* FUN_10018c30 @ 0x119c8c30 (504 bytes, 145 insns) */
void f_119c8c30(void) {
  FTRACE(0x119c8c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c8c30 push ebp */
  push32((uint32_t)(EBP));
  /* 119c8c31 mov ebp, esp */
  EBP = (ESP);
  /* 119c8c33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8c36 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8c3a jne 0x119c8d0c */
  if (!C.zf) goto L_119c8d0c;
  /* 119c8c40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8c43 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119c8c46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c8c48 jne 0x119c8c59 */
  if (!C.zf) goto L_119c8c59;
  /* 119c8c4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c8c4d mov edx, dword ptr [ecx*4 + 0x119e614c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e614c)));
  /* 119c8c54 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119c8c57 jmp 0x119c8c66 */
  goto L_119c8c66;
L_119c8c59:;
  /* 119c8c59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c8c5c mov ecx, dword ptr [eax*4 + 0x119e6180] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119e6180)));
  /* 119c8c63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_119c8c66:;
  /* 119c8c66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c8c69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8c6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c8c6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8c72 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8c75 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8c7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c8c7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8c80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8c83 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8c86 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 119c8c89 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 119c8c8d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119c8c8e mov ecx, 7 */
  ECX = (0x7u);
  /* 119c8c93 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119c8c95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c8c98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c8c9b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8c9e jge 0x119c8cb9 */
  if ((C.sf==C.of)) goto L_119c8cb9;
  /* 119c8ca0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c8ca3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8ca6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c8ca9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8cac imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8caf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8cb2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8cb4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c8cb7 jmp 0x119c8ccd */
  goto L_119c8ccd;
L_119c8cb9:;
  /* 119c8cb9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c8cbc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8cbf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c8cc2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8cc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8cc8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8cca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119c8ccd:;
  /* 119c8ccd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8cd1 jne 0x119c8d0a */
  if (!C.zf) goto L_119c8d0a;
  /* 119c8cd3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8cd6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 119c8cd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c8cdb jne 0x119c8cec */
  if (!C.zf) goto L_119c8cec;
  /* 119c8cdd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c8ce0 mov eax, dword ptr [edx*4 + 0x119e6150] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e6150)));
  /* 119c8ce7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119c8cea jmp 0x119c8cf9 */
  goto L_119c8cf9;
L_119c8cec:;
  /* 119c8cec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c8cef mov edx, dword ptr [ecx*4 + 0x119e6184] */
  EDX = (r32((uint32_t)(ECX*4 + 0x119e6184)));
  /* 119c8cf6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_119c8cf9:;
  /* 119c8cf9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c8cfc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8cff jle 0x119c8d0a */
  if ((C.zf||C.sf!=C.of)) goto L_119c8d0a;
  /* 119c8d01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c8d04 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8d07 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119c8d0a:;
  /* 119c8d0a jmp 0x119c8d41 */
  goto L_119c8d41;
L_119c8d0c:;
  /* 119c8d0c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8d0f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119c8d12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c8d14 jne 0x119c8d25 */
  if (!C.zf) goto L_119c8d25;
  /* 119c8d16 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c8d19 mov ecx, dword ptr [eax*4 + 0x119e614c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x119e614c)));
  /* 119c8d20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 119c8d23 jmp 0x119c8d32 */
  goto L_119c8d32;
L_119c8d25:;
  /* 119c8d25 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c8d28 mov eax, dword ptr [edx*4 + 0x119e6180] */
  EAX = (r32((uint32_t)(EDX*4 + 0x119e6180)));
  /* 119c8d2f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_119c8d32:;
  /* 119c8d32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c8d35 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 119c8d38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c8d3b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8d3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_119c8d41:;
  /* 119c8d41 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8d45 jne 0x119c8d81 */
  if (!C.zf) goto L_119c8d81;
  /* 119c8d47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c8d4a mov dword ptr [0x119e6134], eax */
  w32((uint32_t)(0x119e6134), (EAX));
  /* 119c8d4f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 119c8d52 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8d55 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 119c8d58 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8d5a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8d5d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 119c8d60 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8d62 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8d68 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 119c8d6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8d6d mov dword ptr [0x119e6138], ecx */
  w32((uint32_t)(0x119e6138), (ECX));
  /* 119c8d73 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8d76 mov dword ptr [0x119e6130], edx */
  w32((uint32_t)(0x119e6130), (EDX));
  /* 119c8d7c jmp 0x119c8e24 */
  goto L_119c8e24;
L_119c8d81:;
  /* 119c8d81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c8d84 mov dword ptr [0x119e6144], eax */
  w32((uint32_t)(0x119e6144), (EAX));
  /* 119c8d89 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 119c8d8c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8d8f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 119c8d92 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8d94 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8d97 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 119c8d9a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8d9c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8da2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 119c8da5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8da7 mov dword ptr [0x119e6148], ecx */
  w32((uint32_t)(0x119e6148), (ECX));
  /* 119c8dad mov edx, dword ptr [0x119e60a4] */
  EDX = (r32((uint32_t)(0x119e60a4)));
  /* 119c8db3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119c8db9 mov eax, dword ptr [0x119e6148] */
  EAX = (r32((uint32_t)(0x119e6148)));
  /* 119c8dbe add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8dc0 mov dword ptr [0x119e6148], eax */
  w32((uint32_t)(0x119e6148), (EAX));
  /* 119c8dc5 cmp dword ptr [0x119e6148], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e6148))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8dcc jge 0x119c8df1 */
  if ((C.sf==C.of)) goto L_119c8df1;
  /* 119c8dce mov ecx, dword ptr [0x119e6148] */
  ECX = (r32((uint32_t)(0x119e6148)));
  /* 119c8dd4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8dda mov dword ptr [0x119e6148], ecx */
  w32((uint32_t)(0x119e6148), (ECX));
  /* 119c8de0 mov edx, dword ptr [0x119e6144] */
  EDX = (r32((uint32_t)(0x119e6144)));
  /* 119c8de6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8de9 mov dword ptr [0x119e6144], edx */
  w32((uint32_t)(0x119e6144), (EDX));
  /* 119c8def jmp 0x119c8e1b */
  goto L_119c8e1b;
L_119c8df1:;
  /* 119c8df1 cmp dword ptr [0x119e6148], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x119e6148))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8dfb jl 0x119c8e1b */
  if ((C.sf!=C.of)) goto L_119c8e1b;
  /* 119c8dfd mov eax, dword ptr [0x119e6148] */
  EAX = (r32((uint32_t)(0x119e6148)));
  /* 119c8e02 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c8e07 mov dword ptr [0x119e6148], eax */
  w32((uint32_t)(0x119e6148), (EAX));
  /* 119c8e0c mov ecx, dword ptr [0x119e6144] */
  ECX = (r32((uint32_t)(0x119e6144)));
  /* 119c8e12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8e15 mov dword ptr [0x119e6144], ecx */
  w32((uint32_t)(0x119e6144), (ECX));
L_119c8e1b:;
  /* 119c8e1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8e1e mov dword ptr [0x119e6140], edx */
  w32((uint32_t)(0x119e6140), (EDX));
L_119c8e24:;
  /* 119c8e24 mov esp, ebp */
  ESP = (EBP);
  /* 119c8e26 pop ebp */
  EBP = (pop32());
  /* 119c8e27 ret  */
  ESPCHK(0x119c8c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10018e30 @ 0x119c8e30 (382 bytes, 135 insns) */
void f_119c8e30(void) {
  FTRACE(0x119c8e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c8e30 push ebp */
  push32((uint32_t)(EBP));
  /* 119c8e31 mov ebp, esp */
  EBP = (ESP);
  /* 119c8e33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c8e35 push 0x119e2b40 */
  push32((uint32_t)(0x119e2b40u));
  /* 119c8e3a push 0x119c5f80 */
  push32((uint32_t)(0x119c5f80u));
  /* 119c8e3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119c8e45 push eax */
  push32((uint32_t)(EAX));
  /* 119c8e46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119c8e4d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8e50 push ebx */
  push32((uint32_t)(EBX));
  /* 119c8e51 push esi */
  push32((uint32_t)(ESI));
  /* 119c8e52 push edi */
  push32((uint32_t)(EDI));
  /* 119c8e53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c8e56 cmp dword ptr [0x119e746c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e746c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8e5d jne 0x119c8ea2 */
  if (!C.zf) goto L_119c8ea2;
  /* 119c8e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8e67 call dword ptr [0x119e92f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92f8))), 0x119c8e6du);
  /* 119c8e6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c8e6f je 0x119c8e7d */
  if (C.zf) goto L_119c8e7d;
  /* 119c8e71 mov dword ptr [0x119e746c], 1 */
  w32((uint32_t)(0x119e746c), (0x1u));
  /* 119c8e7b jmp 0x119c8ea2 */
  goto L_119c8ea2;
L_119c8e7d:;
  /* 119c8e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8e7f push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8e81 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8e85 call dword ptr [0x119e9314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9314))), 0x119c8e8bu);
  /* 119c8e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c8e8d je 0x119c8e9b */
  if (C.zf) goto L_119c8e9b;
  /* 119c8e8f mov dword ptr [0x119e746c], 2 */
  w32((uint32_t)(0x119e746c), (0x2u));
  /* 119c8e99 jmp 0x119c8ea2 */
  goto L_119c8ea2;
L_119c8e9b:;
  /* 119c8e9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8e9d jmp 0x119c8fb1 */
  goto L_119c8fb1;
L_119c8ea2:;
  /* 119c8ea2 cmp dword ptr [0x119e746c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e746c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8ea9 jne 0x119c8ec6 */
  if (!C.zf) goto L_119c8ec6;
  /* 119c8eab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c8eae push eax */
  push32((uint32_t)(EAX));
  /* 119c8eaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8eb2 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8eb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c8eb6 push edx */
  push32((uint32_t)(EDX));
  /* 119c8eb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8eba push eax */
  push32((uint32_t)(EAX));
  /* 119c8ebb call dword ptr [0x119e92f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92f8))), 0x119c8ec1u);
  /* 119c8ec1 jmp 0x119c8fb1 */
  goto L_119c8fb1;
L_119c8ec6:;
  /* 119c8ec6 cmp dword ptr [0x119e746c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119e746c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8ecd jne 0x119c8faf */
  if (!C.zf) goto L_119c8faf;
  /* 119c8ed3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8ed7 jne 0x119c8ee2 */
  if (!C.zf) goto L_119c8ee2;
  /* 119c8ed9 mov ecx, dword ptr [0x119e7328] */
  ECX = (r32((uint32_t)(0x119e7328)));
  /* 119c8edf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_119c8ee2:;
  /* 119c8ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8ee6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c8ee9 push edx */
  push32((uint32_t)(EDX));
  /* 119c8eea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8eed push eax */
  push32((uint32_t)(EAX));
  /* 119c8eee call dword ptr [0x119e9314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9314))), 0x119c8ef4u);
  /* 119c8ef4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119c8ef7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8efb jne 0x119c8f04 */
  if (!C.zf) goto L_119c8f04;
  /* 119c8efd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8eff jmp 0x119c8fb1 */
  goto L_119c8fb1;
L_119c8f04:;
  /* 119c8f04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c8f0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c8f0e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8f11 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119c8f13 call 0x119bb3b0 */
  push32(0x119c8f18u); f_119bb3b0();
  /* 119c8f18 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 119c8f1b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c8f1e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c8f21 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119c8f24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c8f2b jmp 0x119c8f44 */
  goto L_119c8f44;
  /* 119c8f2d mov eax, 1 */
  EAX = (0x1u);
  /* 119c8f32 ret  */
  ESPCHK(0x119c8e30u, _esp0);
  ESP += 4; return;
  /* 119c8f33 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119c8f36 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 119c8f3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c8f44:;
  /* 119c8f44 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8f48 jne 0x119c8f4e */
  if (!C.zf) goto L_119c8f4e;
  /* 119c8f4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8f4c jmp 0x119c8fb1 */
  goto L_119c8fb1;
L_119c8f4e:;
  /* 119c8f4e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c8f51 push edx */
  push32((uint32_t)(EDX));
  /* 119c8f52 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c8f55 push eax */
  push32((uint32_t)(EAX));
  /* 119c8f56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c8f59 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8f5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c8f5d push edx */
  push32((uint32_t)(EDX));
  /* 119c8f5e call dword ptr [0x119e9314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9314))), 0x119c8f64u);
  /* 119c8f64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c8f66 jne 0x119c8f6c */
  if (!C.zf) goto L_119c8f6c;
  /* 119c8f68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c8f6a jmp 0x119c8fb1 */
  goto L_119c8fb1;
L_119c8f6c:;
  /* 119c8f6c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8f70 jne 0x119c8f8d */
  if (!C.zf) goto L_119c8f8d;
  /* 119c8f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c8f76 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c8f78 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c8f7b push eax */
  push32((uint32_t)(EAX));
  /* 119c8f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8f7e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c8f81 push ecx */
  push32((uint32_t)(ECX));
  /* 119c8f82 call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c8f88u);
  /* 119c8f88 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119c8f8b jmp 0x119c8faa */
  goto L_119c8faa;
L_119c8f8d:;
  /* 119c8f8d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c8f90 push edx */
  push32((uint32_t)(EDX));
  /* 119c8f91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c8f94 push eax */
  push32((uint32_t)(EAX));
  /* 119c8f95 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c8f97 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c8f9a push ecx */
  push32((uint32_t)(ECX));
  /* 119c8f9b push 1 */
  push32((uint32_t)(0x1u));
  /* 119c8f9d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c8fa0 push edx */
  push32((uint32_t)(EDX));
  /* 119c8fa1 call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c8fa7u);
  /* 119c8fa7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_119c8faa:;
  /* 119c8faa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c8fad jmp 0x119c8fb1 */
  goto L_119c8fb1;
L_119c8faf:;
  /* 119c8faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c8fb1:;
  /* 119c8fb1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 119c8fb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c8fb7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119c8fbe pop edi */
  EDI = (pop32());
  /* 119c8fbf pop esi */
  ESI = (pop32());
  /* 119c8fc0 pop ebx */
  EBX = (pop32());
  /* 119c8fc1 mov esp, ebp */
  ESP = (EBP);
  /* 119c8fc3 pop ebp */
  EBP = (pop32());
  /* 119c8fc4 ret  */
  ESPCHK(0x119c8e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10018fd0 @ 0x119c8fd0 (398 bytes, 140 insns) */
void f_119c8fd0(void) {
  FTRACE(0x119c8fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c8fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c8fd1 mov ebp, esp */
  EBP = (ESP);
  /* 119c8fd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c8fd5 push 0x119e2b50 */
  push32((uint32_t)(0x119e2b50u));
  /* 119c8fda push 0x119c5f80 */
  push32((uint32_t)(0x119c5f80u));
  /* 119c8fdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119c8fe5 push eax */
  push32((uint32_t)(EAX));
  /* 119c8fe6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119c8fed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c8ff0 push ebx */
  push32((uint32_t)(EBX));
  /* 119c8ff1 push esi */
  push32((uint32_t)(ESI));
  /* 119c8ff2 push edi */
  push32((uint32_t)(EDI));
  /* 119c8ff3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c8ff6 cmp dword ptr [0x119e7470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c8ffd jne 0x119c9042 */
  if (!C.zf) goto L_119c9042;
  /* 119c8fff push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9001 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9003 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c9005 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9007 call dword ptr [0x119e92f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92f8))), 0x119c900du);
  /* 119c900d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c900f je 0x119c901d */
  if (C.zf) goto L_119c901d;
  /* 119c9011 mov dword ptr [0x119e7470], 1 */
  w32((uint32_t)(0x119e7470), (0x1u));
  /* 119c901b jmp 0x119c9042 */
  goto L_119c9042;
L_119c901d:;
  /* 119c901d push 0 */
  push32((uint32_t)(0x0u));
  /* 119c901f push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9021 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c9023 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9025 call dword ptr [0x119e9314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9314))), 0x119c902bu);
  /* 119c902b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c902d je 0x119c903b */
  if (C.zf) goto L_119c903b;
  /* 119c902f mov dword ptr [0x119e7470], 2 */
  w32((uint32_t)(0x119e7470), (0x2u));
  /* 119c9039 jmp 0x119c9042 */
  goto L_119c9042;
L_119c903b:;
  /* 119c903b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c903d jmp 0x119c9161 */
  goto L_119c9161;
L_119c9042:;
  /* 119c9042 cmp dword ptr [0x119e7470], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119e7470))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9049 jne 0x119c9066 */
  if (!C.zf) goto L_119c9066;
  /* 119c904b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c904e push eax */
  push32((uint32_t)(EAX));
  /* 119c904f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c9052 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9053 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c9056 push edx */
  push32((uint32_t)(EDX));
  /* 119c9057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c905a push eax */
  push32((uint32_t)(EAX));
  /* 119c905b call dword ptr [0x119e9314] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9314))), 0x119c9061u);
  /* 119c9061 jmp 0x119c9161 */
  goto L_119c9161;
L_119c9066:;
  /* 119c9066 cmp dword ptr [0x119e7470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c906d jne 0x119c915f */
  if (!C.zf) goto L_119c915f;
  /* 119c9073 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9077 jne 0x119c9082 */
  if (!C.zf) goto L_119c9082;
  /* 119c9079 mov ecx, dword ptr [0x119e7328] */
  ECX = (r32((uint32_t)(0x119e7328)));
  /* 119c907f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_119c9082:;
  /* 119c9082 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9084 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9086 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c9089 push edx */
  push32((uint32_t)(EDX));
  /* 119c908a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c908d push eax */
  push32((uint32_t)(EAX));
  /* 119c908e call dword ptr [0x119e92f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92f8))), 0x119c9094u);
  /* 119c9094 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119c9097 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c909b jne 0x119c90a4 */
  if (!C.zf) goto L_119c90a4;
  /* 119c909d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c909f jmp 0x119c9161 */
  goto L_119c9161;
L_119c90a4:;
  /* 119c90a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c90ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c90ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c90b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c90b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119c90b5 call 0x119bb3b0 */
  push32(0x119c90bau); f_119bb3b0();
  /* 119c90ba mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 119c90bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c90c0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c90c3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 119c90c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c90cd jmp 0x119c90e6 */
  goto L_119c90e6;
  /* 119c90cf mov eax, 1 */
  EAX = (0x1u);
  /* 119c90d4 ret  */
  ESPCHK(0x119c8fd0u, _esp0);
  ESP += 4; return;
  /* 119c90d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119c90d8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 119c90df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c90e6:;
  /* 119c90e6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c90ea jne 0x119c90f0 */
  if (!C.zf) goto L_119c90f0;
  /* 119c90ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c90ee jmp 0x119c9161 */
  goto L_119c9161;
L_119c90f0:;
  /* 119c90f0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c90f3 push edx */
  push32((uint32_t)(EDX));
  /* 119c90f4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c90f7 push eax */
  push32((uint32_t)(EAX));
  /* 119c90f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c90fb push ecx */
  push32((uint32_t)(ECX));
  /* 119c90fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c90ff push edx */
  push32((uint32_t)(EDX));
  /* 119c9100 call dword ptr [0x119e92f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92f8))), 0x119c9106u);
  /* 119c9106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c9108 jne 0x119c910e */
  if (!C.zf) goto L_119c910e;
  /* 119c910a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c910c jmp 0x119c9161 */
  goto L_119c9161;
L_119c910e:;
  /* 119c910e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9112 jne 0x119c9136 */
  if (!C.zf) goto L_119c9136;
  /* 119c9114 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9116 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9118 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c911a push 0 */
  push32((uint32_t)(0x0u));
  /* 119c911c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c911e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c9121 push eax */
  push32((uint32_t)(EAX));
  /* 119c9122 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119c9127 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c912a push ecx */
  push32((uint32_t)(ECX));
  /* 119c912b call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c9131u);
  /* 119c9131 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119c9134 jmp 0x119c915a */
  goto L_119c915a;
L_119c9136:;
  /* 119c9136 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9138 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c913a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c913d push edx */
  push32((uint32_t)(EDX));
  /* 119c913e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c9141 push eax */
  push32((uint32_t)(EAX));
  /* 119c9142 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c9144 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c9147 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9148 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 119c914d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c9150 push edx */
  push32((uint32_t)(EDX));
  /* 119c9151 call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c9157u);
  /* 119c9157 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_119c915a:;
  /* 119c915a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c915d jmp 0x119c9161 */
  goto L_119c9161;
L_119c915f:;
  /* 119c915f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c9161:;
  /* 119c9161 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 119c9164 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c9167 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119c916e pop edi */
  EDI = (pop32());
  /* 119c916f pop esi */
  ESI = (pop32());
  /* 119c9170 pop ebx */
  EBX = (pop32());
  /* 119c9171 mov esp, ebp */
  ESP = (EBP);
  /* 119c9173 pop ebp */
  EBP = (pop32());
  /* 119c9174 ret  */
  ESPCHK(0x119c8fd0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x119c9180 (52 bytes, 19 insns) */
void f_119c9180(void) {
  FTRACE(0x119c9180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c9180 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119c9184 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 119c9188 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 119c918a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119c918e jne 0x119c9199 */
  if (!C.zf) goto L_119c9199;
  /* 119c9190 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119c9194 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119c9196 ret 0x10 */
  ESPCHK(0x119c9180u, _esp0);
  ESP += 20; return;
L_119c9199:;
  /* 119c9199 push ebx */
  push32((uint32_t)(EBX));
  /* 119c919a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119c919c mov ebx, eax */
  EBX = (EAX);
  /* 119c919e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119c91a2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119c91a6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c91a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119c91ac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 119c91ae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c91b0 pop ebx */
  EBX = (pop32());
  /* 119c91b1 ret 0x10 */
  ESPCHK(0x119c9180u, _esp0);
  ESP += 20; return;
}

/* FUN_100191c0 @ 0x119c91c0 (46 bytes, 18 insns) */
void f_119c91c0(void) {
  FTRACE(0x119c91c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c91c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c91c1 mov ebp, esp */
  EBP = (ESP);
  /* 119c91c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c91c4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 119c91c6 call 0x119bdb80 */
  push32(0x119c91cbu); f_119bdb80();
  /* 119c91cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c91ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c91d1 push eax */
  push32((uint32_t)(EAX));
  /* 119c91d2 call 0x119c91f0 */
  push32(0x119c91d7u); f_119c91f0();
  /* 119c91d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c91da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c91dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 119c91df call 0x119bdc20 */
  push32(0x119c91e4u); f_119bdc20();
  /* 119c91e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c91e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c91ea mov esp, ebp */
  ESP = (EBP);
  /* 119c91ec pop ebp */
  EBP = (pop32());
  /* 119c91ed ret  */
  ESPCHK(0x119c91c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x119c91f0 (198 bytes, 69 insns) */
void f_119c91f0(void) {
  FTRACE(0x119c91f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c91f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c91f1 mov ebp, esp */
  EBP = (ESP);
  /* 119c91f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c91f6 mov eax, dword ptr [0x119e7128] */
  EAX = (r32((uint32_t)(0x119e7128)));
  /* 119c91fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c91fe cmp dword ptr [0x119e8c20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e8c20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9205 jne 0x119c920e */
  if (!C.zf) goto L_119c920e;
  /* 119c9207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9209 jmp 0x119c92b2 */
  goto L_119c92b2;
L_119c920e:;
  /* 119c920e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9212 jne 0x119c9236 */
  if (!C.zf) goto L_119c9236;
  /* 119c9214 cmp dword ptr [0x119e7130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c921b je 0x119c9236 */
  if (C.zf) goto L_119c9236;
  /* 119c921d call 0x119c9310 */
  push32(0x119c9222u); f_119c9310();
  /* 119c9222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c9224 je 0x119c922d */
  if (C.zf) goto L_119c922d;
  /* 119c9226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9228 jmp 0x119c92b2 */
  goto L_119c92b2;
L_119c922d:;
  /* 119c922d mov ecx, dword ptr [0x119e7128] */
  ECX = (r32((uint32_t)(0x119e7128)));
  /* 119c9233 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_119c9236:;
  /* 119c9236 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c923a je 0x119c92b0 */
  if (C.zf) goto L_119c92b0;
  /* 119c923c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9240 je 0x119c92b0 */
  if (C.zf) goto L_119c92b0;
  /* 119c9242 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9245 push edx */
  push32((uint32_t)(EDX));
  /* 119c9246 call 0x119bb040 */
  push32(0x119c924bu); f_119bb040();
  /* 119c924b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c924e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c9251:;
  /* 119c9251 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9254 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9257 je 0x119c92b0 */
  if (C.zf) goto L_119c92b0;
  /* 119c9259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c925c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c925e push edx */
  push32((uint32_t)(EDX));
  /* 119c925f call 0x119bb040 */
  push32(0x119c9264u); f_119bb040();
  /* 119c9264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9267 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c926a jbe 0x119c92a5 */
  if ((C.cf||C.zf)) goto L_119c92a5;
  /* 119c926c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c926f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c9271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9274 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 119c9278 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c927b jne 0x119c92a5 */
  if (!C.zf) goto L_119c92a5;
  /* 119c927d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9280 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9284 push edx */
  push32((uint32_t)(EDX));
  /* 119c9285 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9288 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c928a push ecx */
  push32((uint32_t)(ECX));
  /* 119c928b call 0x119c92c0 */
  push32(0x119c9290u); f_119c92c0();
  /* 119c9290 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9293 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c9295 jne 0x119c92a5 */
  if (!C.zf) goto L_119c92a5;
  /* 119c9297 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c929a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c929c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c929f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 119c92a3 jmp 0x119c92b2 */
  goto L_119c92b2;
L_119c92a5:;
  /* 119c92a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c92a8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c92ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c92ae jmp 0x119c9251 */
  goto L_119c9251;
L_119c92b0:;
  /* 119c92b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c92b2:;
  /* 119c92b2 mov esp, ebp */
  ESP = (EBP);
  /* 119c92b4 pop ebp */
  EBP = (pop32());
  /* 119c92b5 ret  */
  ESPCHK(0x119c91f0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x119c92c0 (79 bytes, 32 insns) */
void f_119c92c0(void) {
  FTRACE(0x119c92c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c92c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c92c1 mov ebp, esp */
  EBP = (ESP);
  /* 119c92c3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c92c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c92c8 jne 0x119c92ce */
  if (!C.zf) goto L_119c92ce;
  /* 119c92ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c92cc jmp 0x119c930b */
  goto L_119c930b;
L_119c92ce:;
  /* 119c92ce mov eax, dword ptr [0x119e74a0] */
  EAX = (r32((uint32_t)(0x119e74a0)));
  /* 119c92d3 push eax */
  push32((uint32_t)(EAX));
  /* 119c92d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c92d7 push ecx */
  push32((uint32_t)(ECX));
  /* 119c92d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c92db push edx */
  push32((uint32_t)(EDX));
  /* 119c92dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c92df push eax */
  push32((uint32_t)(EAX));
  /* 119c92e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c92e3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c92e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c92e6 mov edx, dword ptr [0x119e7744] */
  EDX = (r32((uint32_t)(0x119e7744)));
  /* 119c92ec push edx */
  push32((uint32_t)(EDX));
  /* 119c92ed call 0x119c93c0 */
  push32(0x119c92f2u); f_119c93c0();
  /* 119c92f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c92f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c92f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c92fc jne 0x119c9305 */
  if (!C.zf) goto L_119c9305;
  /* 119c92fe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 119c9303 jmp 0x119c930b */
  goto L_119c930b;
L_119c9305:;
  /* 119c9305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9308 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_119c930b:;
  /* 119c930b mov esp, ebp */
  ESP = (EBP);
  /* 119c930d pop ebp */
  EBP = (pop32());
  /* 119c930e ret  */
  ESPCHK(0x119c92c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019310 @ 0x119c9310 (174 bytes, 66 insns) */
void f_119c9310(void) {
  FTRACE(0x119c9310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c9310 push ebp */
  push32((uint32_t)(EBP));
  /* 119c9311 mov ebp, esp */
  EBP = (ESP);
  /* 119c9313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9316 mov eax, dword ptr [0x119e7130] */
  EAX = (r32((uint32_t)(0x119e7130)));
  /* 119c931b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_119c931e:;
  /* 119c931e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9321 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9324 je 0x119c93b8 */
  if (C.zf) goto L_119c93b8;
  /* 119c932a push 0 */
  push32((uint32_t)(0x0u));
  /* 119c932c push 0 */
  push32((uint32_t)(0x0u));
  /* 119c932e push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9330 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9332 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c9334 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9337 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c9339 push eax */
  push32((uint32_t)(EAX));
  /* 119c933a push 0 */
  push32((uint32_t)(0x0u));
  /* 119c933c push 1 */
  push32((uint32_t)(0x1u));
  /* 119c933e call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c9344u);
  /* 119c9344 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c9347 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c934b jne 0x119c9352 */
  if (!C.zf) goto L_119c9352;
  /* 119c934d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c9350 jmp 0x119c93ba */
  goto L_119c93ba;
L_119c9352:;
  /* 119c9352 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 119c9354 push 0x119e2b5c */
  push32((uint32_t)(0x119e2b5cu));
  /* 119c9359 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c935b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c935e push ecx */
  push32((uint32_t)(ECX));
  /* 119c935f call 0x119b8210 */
  push32(0x119c9364u); f_119b8210();
  /* 119c9364 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9367 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c936a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c936e jne 0x119c9375 */
  if (!C.zf) goto L_119c9375;
  /* 119c9370 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c9373 jmp 0x119c93ba */
  goto L_119c93ba;
L_119c9375:;
  /* 119c9375 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9377 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9379 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c937c push edx */
  push32((uint32_t)(EDX));
  /* 119c937d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9380 push eax */
  push32((uint32_t)(EAX));
  /* 119c9381 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c9383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9386 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c9388 push edx */
  push32((uint32_t)(EDX));
  /* 119c9389 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c938b push 1 */
  push32((uint32_t)(0x1u));
  /* 119c938d call dword ptr [0x119e938c] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e938c))), 0x119c9393u);
  /* 119c9393 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c9395 jne 0x119c939c */
  if (!C.zf) goto L_119c939c;
  /* 119c9397 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c939a jmp 0x119c93ba */
  goto L_119c93ba;
L_119c939c:;
  /* 119c939c push 0 */
  push32((uint32_t)(0x0u));
  /* 119c939e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c93a1 push eax */
  push32((uint32_t)(EAX));
  /* 119c93a2 call 0x119c9810 */
  push32(0x119c93a7u); f_119c9810();
  /* 119c93a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c93aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c93ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c93b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c93b3 jmp 0x119c931e */
  goto L_119c931e;
L_119c93b8:;
  /* 119c93b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c93ba:;
  /* 119c93ba mov esp, ebp */
  ESP = (EBP);
  /* 119c93bc pop ebp */
  EBP = (pop32());
  /* 119c93bd ret  */
  ESPCHK(0x119c9310u, _esp0);
  ESP += 4; return;
}

/* FUN_100193c0 @ 0x119c93c0 (970 bytes, 340 insns) */
void f_119c93c0(void) {
  FTRACE(0x119c93c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c93c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c93c1 mov ebp, esp */
  EBP = (ESP);
  /* 119c93c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 119c93c5 push 0x119e2bb0 */
  push32((uint32_t)(0x119e2bb0u));
  /* 119c93ca push 0x119c5f80 */
  push32((uint32_t)(0x119c5f80u));
  /* 119c93cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 119c93d5 push eax */
  push32((uint32_t)(EAX));
  /* 119c93d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 119c93dd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c93e0 push ebx */
  push32((uint32_t)(EBX));
  /* 119c93e1 push esi */
  push32((uint32_t)(ESI));
  /* 119c93e2 push edi */
  push32((uint32_t)(EDI));
  /* 119c93e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c93e6 cmp dword ptr [0x119e7474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c93ed jne 0x119c9446 */
  if (!C.zf) goto L_119c9446;
  /* 119c93ef push 1 */
  push32((uint32_t)(0x1u));
  /* 119c93f1 push 0x119e226c */
  push32((uint32_t)(0x119e226cu));
  /* 119c93f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c93f8 push 0x119e226c */
  push32((uint32_t)(0x119e226cu));
  /* 119c93fd push 0 */
  push32((uint32_t)(0x0u));
  /* 119c93ff push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9401 call dword ptr [0x119e92f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92f0))), 0x119c9407u);
  /* 119c9407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c9409 je 0x119c9417 */
  if (C.zf) goto L_119c9417;
  /* 119c940b mov dword ptr [0x119e7474], 1 */
  w32((uint32_t)(0x119e7474), (0x1u));
  /* 119c9415 jmp 0x119c9446 */
  goto L_119c9446;
L_119c9417:;
  /* 119c9417 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c9419 push 0x119e2268 */
  push32((uint32_t)(0x119e2268u));
  /* 119c941e push 1 */
  push32((uint32_t)(0x1u));
  /* 119c9420 push 0x119e2268 */
  push32((uint32_t)(0x119e2268u));
  /* 119c9425 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9427 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9429 call dword ptr [0x119e92f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92f4))), 0x119c942fu);
  /* 119c942f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c9431 je 0x119c943f */
  if (C.zf) goto L_119c943f;
  /* 119c9433 mov dword ptr [0x119e7474], 2 */
  w32((uint32_t)(0x119e7474), (0x2u));
  /* 119c943d jmp 0x119c9446 */
  goto L_119c9446;
L_119c943f:;
  /* 119c943f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9441 jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c9446:;
  /* 119c9446 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c944a jle 0x119c945f */
  if ((C.zf||C.sf!=C.of)) goto L_119c945f;
  /* 119c944c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c944f push eax */
  push32((uint32_t)(EAX));
  /* 119c9450 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c9453 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9454 call 0x119c97c0 */
  push32(0x119c9459u); f_119c97c0();
  /* 119c9459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c945c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_119c945f:;
  /* 119c945f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9463 jle 0x119c9478 */
  if ((C.zf||C.sf!=C.of)) goto L_119c9478;
  /* 119c9465 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c9468 push edx */
  push32((uint32_t)(EDX));
  /* 119c9469 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c946c push eax */
  push32((uint32_t)(EAX));
  /* 119c946d call 0x119c97c0 */
  push32(0x119c9472u); f_119c97c0();
  /* 119c9472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9475 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_119c9478:;
  /* 119c9478 cmp dword ptr [0x119e7474], 2 */
  { uint32_t _a=(r32((uint32_t)(0x119e7474))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c947f jne 0x119c94a4 */
  if (!C.zf) goto L_119c94a4;
  /* 119c9481 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c9484 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9485 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c9488 push edx */
  push32((uint32_t)(EDX));
  /* 119c9489 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c948c push eax */
  push32((uint32_t)(EAX));
  /* 119c948d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c9490 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9491 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c9494 push edx */
  push32((uint32_t)(EDX));
  /* 119c9495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9498 push eax */
  push32((uint32_t)(EAX));
  /* 119c9499 call dword ptr [0x119e92f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92f4))), 0x119c949fu);
  /* 119c949f jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c94a4:;
  /* 119c94a4 cmp dword ptr [0x119e7474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x119e7474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c94ab jne 0x119c97a2 */
  if (!C.zf) goto L_119c97a2;
  /* 119c94b1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c94b5 jne 0x119c94c0 */
  if (!C.zf) goto L_119c94c0;
  /* 119c94b7 mov ecx, dword ptr [0x119e7328] */
  ECX = (r32((uint32_t)(0x119e7328)));
  /* 119c94bd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_119c94c0:;
  /* 119c94c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c94c4 je 0x119c94d0 */
  if (C.zf) goto L_119c94d0;
  /* 119c94c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c94ca jne 0x119c964c */
  if (!C.zf) goto L_119c964c;
L_119c94d0:;
  /* 119c94d0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c94d3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c94d6 jne 0x119c94e2 */
  if (!C.zf) goto L_119c94e2;
  /* 119c94d8 mov eax, 2 */
  EAX = (0x2u);
  /* 119c94dd jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c94e2:;
  /* 119c94e2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c94e6 jle 0x119c94f2 */
  if ((C.zf||C.sf!=C.of)) goto L_119c94f2;
  /* 119c94e8 mov eax, 1 */
  EAX = (0x1u);
  /* 119c94ed jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c94f2:;
  /* 119c94f2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c94f6 jle 0x119c9502 */
  if ((C.zf||C.sf!=C.of)) goto L_119c9502;
  /* 119c94f8 mov eax, 3 */
  EAX = (0x3u);
  /* 119c94fd jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c9502:;
  /* 119c9502 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 119c9505 push eax */
  push32((uint32_t)(EAX));
  /* 119c9506 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c9509 push ecx */
  push32((uint32_t)(ECX));
  /* 119c950a call dword ptr [0x119e9348] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9348))), 0x119c9510u);
  /* 119c9510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c9512 jne 0x119c951b */
  if (!C.zf) goto L_119c951b;
  /* 119c9514 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9516 jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c951b:;
  /* 119c951b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c951f jne 0x119c9527 */
  if (!C.zf) goto L_119c9527;
  /* 119c9521 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9525 je 0x119c9554 */
  if (C.zf) goto L_119c9554;
L_119c9527:;
  /* 119c9527 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c952b jne 0x119c9533 */
  if (!C.zf) goto L_119c9533;
  /* 119c952d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9531 je 0x119c9554 */
  if (C.zf) goto L_119c9554;
L_119c9533:;
  /* 119c9533 push 0x119e2b70 */
  push32((uint32_t)(0x119e2b70u));
  /* 119c9538 push 0 */
  push32((uint32_t)(0x0u));
  /* 119c953a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 119c953f push 0x119e2b68 */
  push32((uint32_t)(0x119e2b68u));
  /* 119c9544 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c9546 call 0x119b59b0 */
  push32(0x119c954bu); f_119b59b0();
  /* 119c954b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c954e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9551 jne 0x119c9554 */
  if (!C.zf) goto L_119c9554;
  /* 119c9553 int3  */
  x86_unimpl("int3 @ 0x119c9553");
L_119c9554:;
  /* 119c9554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c9556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c9558 jne 0x119c951b */
  if (!C.zf) goto L_119c951b;
  /* 119c955a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c955e jle 0x119c95d3 */
  if ((C.zf||C.sf!=C.of)) goto L_119c95d3;
  /* 119c9560 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9564 jae 0x119c9570 */
  if (!C.cf) goto L_119c9570;
  /* 119c9566 mov eax, 3 */
  EAX = (0x3u);
  /* 119c956b jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c9570:;
  /* 119c9570 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 119c9573 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 119c9576 jmp 0x119c9581 */
  goto L_119c9581;
L_119c9578:;
  /* 119c9578 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c957b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c957e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_119c9581:;
  /* 119c9581 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c9584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9586 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c9588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c958a je 0x119c95c9 */
  if (C.zf) goto L_119c95c9;
  /* 119c958c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c958f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c9591 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 119c9594 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c9596 je 0x119c95c9 */
  if (C.zf) goto L_119c95c9;
  /* 119c9598 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c959b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c959d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c959f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c95a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c95a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c95a6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c95a8 jl 0x119c95c7 */
  if ((C.sf!=C.of)) goto L_119c95c7;
  /* 119c95aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c95ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c95af mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c95b1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c95b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c95b6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 119c95b9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c95bb jg 0x119c95c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c95c7;
  /* 119c95bd mov eax, 2 */
  EAX = (0x2u);
  /* 119c95c2 jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c95c7:;
  /* 119c95c7 jmp 0x119c9578 */
  goto L_119c9578;
L_119c95c9:;
  /* 119c95c9 mov eax, 3 */
  EAX = (0x3u);
  /* 119c95ce jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c95d3:;
  /* 119c95d3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c95d7 jle 0x119c964c */
  if ((C.zf||C.sf!=C.of)) goto L_119c964c;
  /* 119c95d9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c95dd jae 0x119c95e9 */
  if (!C.cf) goto L_119c95e9;
  /* 119c95df mov eax, 1 */
  EAX = (0x1u);
  /* 119c95e4 jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c95e9:;
  /* 119c95e9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 119c95ec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 119c95ef jmp 0x119c95fa */
  goto L_119c95fa;
L_119c95f1:;
  /* 119c95f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c95f4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c95f7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_119c95fa:;
  /* 119c95fa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c95fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c95ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c9601 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c9603 je 0x119c9642 */
  if (C.zf) goto L_119c9642;
  /* 119c9605 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c9608 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c960a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 119c960d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c960f je 0x119c9642 */
  if (C.zf) goto L_119c9642;
  /* 119c9611 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c9614 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9616 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 119c9618 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c961b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119c961d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119c961f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9621 jl 0x119c9640 */
  if ((C.sf!=C.of)) goto L_119c9640;
  /* 119c9623 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c9626 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c9628 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c962a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 119c962d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c962f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 119c9632 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9634 jg 0x119c9640 */
  if ((!C.zf&&C.sf==C.of)) goto L_119c9640;
  /* 119c9636 mov eax, 2 */
  EAX = (0x2u);
  /* 119c963b jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c9640:;
  /* 119c9640 jmp 0x119c95f1 */
  goto L_119c95f1;
L_119c9642:;
  /* 119c9642 mov eax, 1 */
  EAX = (0x1u);
  /* 119c9647 jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c964c:;
  /* 119c964c push 0 */
  push32((uint32_t)(0x0u));
  /* 119c964e push 0 */
  push32((uint32_t)(0x0u));
  /* 119c9650 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c9653 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9654 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c9657 push edx */
  push32((uint32_t)(EDX));
  /* 119c9658 push 9 */
  push32((uint32_t)(0x9u));
  /* 119c965a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c965d push eax */
  push32((uint32_t)(EAX));
  /* 119c965e call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c9664u);
  /* 119c9664 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119c9667 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c966b jne 0x119c9674 */
  if (!C.zf) goto L_119c9674;
  /* 119c966d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c966f jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c9674:;
  /* 119c9674 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 119c967b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c967e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c9680 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9683 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119c9685 call 0x119bb3b0 */
  push32(0x119c968au); f_119bb3b0();
  /* 119c968a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 119c968d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c9690 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 119c9693 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 119c9696 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c969d jmp 0x119c96b6 */
  goto L_119c96b6;
  /* 119c969f mov eax, 1 */
  EAX = (0x1u);
  /* 119c96a4 ret  */
  ESPCHK(0x119c93c0u, _esp0);
  ESP += 4; return;
  /* 119c96a5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119c96a8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 119c96af mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c96b6:;
  /* 119c96b6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c96ba jne 0x119c96c3 */
  if (!C.zf) goto L_119c96c3;
  /* 119c96bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c96be jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c96c3:;
  /* 119c96c3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c96c6 push edx */
  push32((uint32_t)(EDX));
  /* 119c96c7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c96ca push eax */
  push32((uint32_t)(EAX));
  /* 119c96cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 119c96ce push ecx */
  push32((uint32_t)(ECX));
  /* 119c96cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 119c96d2 push edx */
  push32((uint32_t)(EDX));
  /* 119c96d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119c96d5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c96d8 push eax */
  push32((uint32_t)(EAX));
  /* 119c96d9 call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c96dfu);
  /* 119c96df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c96e1 jne 0x119c96ea */
  if (!C.zf) goto L_119c96ea;
  /* 119c96e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c96e5 jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c96ea:;
  /* 119c96ea push 0 */
  push32((uint32_t)(0x0u));
  /* 119c96ec push 0 */
  push32((uint32_t)(0x0u));
  /* 119c96ee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c96f1 push ecx */
  push32((uint32_t)(ECX));
  /* 119c96f2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c96f5 push edx */
  push32((uint32_t)(EDX));
  /* 119c96f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 119c96f8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c96fb push eax */
  push32((uint32_t)(EAX));
  /* 119c96fc call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c9702u);
  /* 119c9702 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 119c9705 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9709 jne 0x119c9712 */
  if (!C.zf) goto L_119c9712;
  /* 119c970b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c970d jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c9712:;
  /* 119c9712 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119c9719 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c971c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119c971e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9721 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119c9723 call 0x119bb3b0 */
  push32(0x119c9728u); f_119bb3b0();
  /* 119c9728 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 119c972b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119c972e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 119c9731 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 119c9734 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 119c973b jmp 0x119c9754 */
  goto L_119c9754;
  /* 119c973d mov eax, 1 */
  EAX = (0x1u);
  /* 119c9742 ret  */
  ESPCHK(0x119c93c0u, _esp0);
  ESP += 4; return;
  /* 119c9743 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119c9746 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 119c974d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_119c9754:;
  /* 119c9754 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9758 jne 0x119c975e */
  if (!C.zf) goto L_119c975e;
  /* 119c975a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c975c jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c975e:;
  /* 119c975e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c9761 push edx */
  push32((uint32_t)(EDX));
  /* 119c9762 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c9765 push eax */
  push32((uint32_t)(EAX));
  /* 119c9766 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119c9769 push ecx */
  push32((uint32_t)(ECX));
  /* 119c976a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 119c976d push edx */
  push32((uint32_t)(EDX));
  /* 119c976e push 1 */
  push32((uint32_t)(0x1u));
  /* 119c9770 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 119c9773 push eax */
  push32((uint32_t)(EAX));
  /* 119c9774 call dword ptr [0x119e9334] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e9334))), 0x119c977au);
  /* 119c977a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c977c jne 0x119c9782 */
  if (!C.zf) goto L_119c9782;
  /* 119c977e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9780 jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c9782:;
  /* 119c9782 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 119c9785 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9786 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 119c9789 push edx */
  push32((uint32_t)(EDX));
  /* 119c978a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119c978d push eax */
  push32((uint32_t)(EAX));
  /* 119c978e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 119c9791 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9792 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c9795 push edx */
  push32((uint32_t)(EDX));
  /* 119c9796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9799 push eax */
  push32((uint32_t)(EAX));
  /* 119c979a call dword ptr [0x119e92f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92f0))), 0x119c97a0u);
  /* 119c97a0 jmp 0x119c97a4 */
  goto L_119c97a4;
L_119c97a2:;
  /* 119c97a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c97a4:;
  /* 119c97a4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 119c97a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c97aa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119c97b1 pop edi */
  EDI = (pop32());
  /* 119c97b2 pop esi */
  ESI = (pop32());
  /* 119c97b3 pop ebx */
  EBX = (pop32());
  /* 119c97b4 mov esp, ebp */
  ESP = (EBP);
  /* 119c97b6 pop ebp */
  EBP = (pop32());
  /* 119c97b7 ret  */
  ESPCHK(0x119c93c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100197c0 @ 0x119c97c0 (80 bytes, 32 insns) */
void f_119c97c0(void) {
  FTRACE(0x119c97c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c97c0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c97c1 mov ebp, esp */
  EBP = (ESP);
  /* 119c97c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c97c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c97c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c97cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c97cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c97d2:;
  /* 119c97d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c97d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c97d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c97db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c97de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c97e0 je 0x119c97f7 */
  if (C.zf) goto L_119c97f7;
  /* 119c97e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c97e5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c97e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c97ea je 0x119c97f7 */
  if (C.zf) goto L_119c97f7;
  /* 119c97ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c97ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c97f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c97f5 jmp 0x119c97d2 */
  goto L_119c97d2;
L_119c97f7:;
  /* 119c97f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c97fa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 119c97fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c97ff jne 0x119c9809 */
  if (!C.zf) goto L_119c9809;
  /* 119c9801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9804 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9807 jmp 0x119c980c */
  goto L_119c980c;
L_119c9809:;
  /* 119c9809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_119c980c:;
  /* 119c980c mov esp, ebp */
  ESP = (EBP);
  /* 119c980e pop ebp */
  EBP = (pop32());
  /* 119c980f ret  */
  ESPCHK(0x119c97c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019810 @ 0x119c9810 (736 bytes, 224 insns) */
void f_119c9810(void) {
  FTRACE(0x119c9810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c9810 push ebp */
  push32((uint32_t)(EBP));
  /* 119c9811 mov ebp, esp */
  EBP = (ESP);
  /* 119c9813 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9816 push esi */
  push32((uint32_t)(ESI));
  /* 119c9817 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c981b je 0x119c983c */
  if (C.zf) goto L_119c983c;
  /* 119c981d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 119c981f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9822 push eax */
  push32((uint32_t)(EAX));
  /* 119c9823 call 0x119c9c60 */
  push32(0x119c9828u); f_119c9c60();
  /* 119c9828 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c982b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 119c982e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9832 je 0x119c983c */
  if (C.zf) goto L_119c983c;
  /* 119c9834 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9837 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c983a jne 0x119c9844 */
  if (!C.zf) goto L_119c9844;
L_119c983c:;
  /* 119c983c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c983f jmp 0x119c9aeb */
  goto L_119c9aeb;
L_119c9844:;
  /* 119c9844 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c9847 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 119c984b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c984d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c984f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119c9850 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 119c9853 mov ecx, dword ptr [0x119e7128] */
  ECX = (r32((uint32_t)(0x119e7128)));
  /* 119c9859 cmp ecx, dword ptr [0x119e712c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x119e712c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c985f jne 0x119c9875 */
  if (!C.zf) goto L_119c9875;
  /* 119c9861 mov edx, dword ptr [0x119e7128] */
  EDX = (r32((uint32_t)(0x119e7128)));
  /* 119c9867 push edx */
  push32((uint32_t)(EDX));
  /* 119c9868 call 0x119c9b70 */
  push32(0x119c986du); f_119c9b70();
  /* 119c986d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9870 mov dword ptr [0x119e7128], eax */
  w32((uint32_t)(0x119e7128), (EAX));
L_119c9875:;
  /* 119c9875 cmp dword ptr [0x119e7128], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7128))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c987c jne 0x119c9935 */
  if (!C.zf) goto L_119c9935;
  /* 119c9882 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9886 je 0x119c98a7 */
  if (C.zf) goto L_119c98a7;
  /* 119c9888 cmp dword ptr [0x119e7130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c988f je 0x119c98a7 */
  if (C.zf) goto L_119c98a7;
  /* 119c9891 call 0x119c9310 */
  push32(0x119c9896u); f_119c9310();
  /* 119c9896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c9898 je 0x119c98a2 */
  if (C.zf) goto L_119c98a2;
  /* 119c989a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c989d jmp 0x119c9aeb */
  goto L_119c9aeb;
L_119c98a2:;
  /* 119c98a2 jmp 0x119c9935 */
  goto L_119c9935;
L_119c98a7:;
  /* 119c98a7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c98ab je 0x119c98b4 */
  if (C.zf) goto L_119c98b4;
  /* 119c98ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c98af jmp 0x119c9aeb */
  goto L_119c9aeb;
L_119c98b4:;
  /* 119c98b4 cmp dword ptr [0x119e7128], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7128))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c98bb jne 0x119c98f4 */
  if (!C.zf) goto L_119c98f4;
  /* 119c98bd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 119c98c2 push 0x119e2bc8 */
  push32((uint32_t)(0x119e2bc8u));
  /* 119c98c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c98c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 119c98cb call 0x119b8210 */
  push32(0x119c98d0u); f_119b8210();
  /* 119c98d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c98d3 mov dword ptr [0x119e7128], eax */
  w32((uint32_t)(0x119e7128), (EAX));
  /* 119c98d8 cmp dword ptr [0x119e7128], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7128))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c98df jne 0x119c98e9 */
  if (!C.zf) goto L_119c98e9;
  /* 119c98e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c98e4 jmp 0x119c9aeb */
  goto L_119c9aeb;
L_119c98e9:;
  /* 119c98e9 mov eax, dword ptr [0x119e7128] */
  EAX = (r32((uint32_t)(0x119e7128)));
  /* 119c98ee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_119c98f4:;
  /* 119c98f4 cmp dword ptr [0x119e7130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c98fb jne 0x119c9935 */
  if (!C.zf) goto L_119c9935;
  /* 119c98fd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 119c9902 push 0x119e2bc8 */
  push32((uint32_t)(0x119e2bc8u));
  /* 119c9907 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c9909 push 4 */
  push32((uint32_t)(0x4u));
  /* 119c990b call 0x119b8210 */
  push32(0x119c9910u); f_119b8210();
  /* 119c9910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9913 mov dword ptr [0x119e7130], eax */
  w32((uint32_t)(0x119e7130), (EAX));
  /* 119c9918 cmp dword ptr [0x119e7130], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e7130))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c991f jne 0x119c9929 */
  if (!C.zf) goto L_119c9929;
  /* 119c9921 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c9924 jmp 0x119c9aeb */
  goto L_119c9aeb;
L_119c9929:;
  /* 119c9929 mov ecx, dword ptr [0x119e7130] */
  ECX = (r32((uint32_t)(0x119e7130)));
  /* 119c992f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_119c9935:;
  /* 119c9935 mov edx, dword ptr [0x119e7128] */
  EDX = (r32((uint32_t)(0x119e7128)));
  /* 119c993b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 119c993e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c9941 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9944 push eax */
  push32((uint32_t)(EAX));
  /* 119c9945 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9948 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9949 call 0x119c9af0 */
  push32(0x119c994eu); f_119c9af0();
  /* 119c994e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9951 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c9954 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9958 jl 0x119c99f1 */
  if ((C.sf!=C.of)) goto L_119c99f1;
  /* 119c995e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9961 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9964 je 0x119c99f1 */
  if (C.zf) goto L_119c99f1;
  /* 119c996a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c996e je 0x119c99e3 */
  if (C.zf) goto L_119c99e3;
  /* 119c9970 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c9972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9975 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9978 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 119c997b push edx */
  push32((uint32_t)(EDX));
  /* 119c997c call 0x119b8ca0 */
  push32(0x119c9981u); f_119b8ca0();
  /* 119c9981 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9984 jmp 0x119c998f */
  goto L_119c998f;
L_119c9986:;
  /* 119c9986 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9989 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c998c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119c998f:;
  /* 119c998f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9992 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9995 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9999 je 0x119c99b0 */
  if (C.zf) goto L_119c99b0;
  /* 119c999b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c999e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c99a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c99a4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 119c99a7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 119c99ab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 119c99ae jmp 0x119c9986 */
  goto L_119c9986;
L_119c99b0:;
  /* 119c99b0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 119c99b5 push 0x119e2bc8 */
  push32((uint32_t)(0x119e2bc8u));
  /* 119c99ba push 2 */
  push32((uint32_t)(0x2u));
  /* 119c99bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c99bf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 119c99c2 push eax */
  push32((uint32_t)(EAX));
  /* 119c99c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c99c6 push ecx */
  push32((uint32_t)(ECX));
  /* 119c99c7 call 0x119b86a0 */
  push32(0x119c99ccu); f_119b86a0();
  /* 119c99cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c99cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c99d2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c99d6 je 0x119c99e1 */
  if (C.zf) goto L_119c99e1;
  /* 119c99d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c99db mov dword ptr [0x119e7128], edx */
  w32((uint32_t)(0x119e7128), (EDX));
L_119c99e1:;
  /* 119c99e1 jmp 0x119c99ef */
  goto L_119c99ef;
L_119c99e3:;
  /* 119c99e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c99e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c99e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c99ec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_119c99ef:;
  /* 119c99ef jmp 0x119c9a64 */
  goto L_119c9a64;
L_119c99f1:;
  /* 119c99f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c99f5 jne 0x119c9a5d */
  if (!C.zf) goto L_119c9a5d;
  /* 119c99f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c99fb jge 0x119c9a05 */
  if ((C.sf==C.of)) goto L_119c9a05;
  /* 119c99fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9a00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c9a02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119c9a05:;
  /* 119c9a05 push 0xce */
  push32((uint32_t)(0xceu));
  /* 119c9a0a push 0x119e2bc8 */
  push32((uint32_t)(0x119e2bc8u));
  /* 119c9a0f push 2 */
  push32((uint32_t)(0x2u));
  /* 119c9a11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9a14 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 119c9a1b push edx */
  push32((uint32_t)(EDX));
  /* 119c9a1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9a1f push eax */
  push32((uint32_t)(EAX));
  /* 119c9a20 call 0x119b86a0 */
  push32(0x119c9a25u); f_119b86a0();
  /* 119c9a25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9a28 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c9a2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9a2f jne 0x119c9a39 */
  if (!C.zf) goto L_119c9a39;
  /* 119c9a31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c9a34 jmp 0x119c9aeb */
  goto L_119c9aeb;
L_119c9a39:;
  /* 119c9a39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9a3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9a3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9a42 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 119c9a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9a48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9a4b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 119c9a53 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9a56 mov dword ptr [0x119e7128], eax */
  w32((uint32_t)(0x119e7128), (EAX));
  /* 119c9a5b jmp 0x119c9a64 */
  goto L_119c9a64;
L_119c9a5d:;
  /* 119c9a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9a5f jmp 0x119c9aeb */
  goto L_119c9aeb;
L_119c9a64:;
  /* 119c9a64 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9a68 je 0x119c9ae9 */
  if (C.zf) goto L_119c9ae9;
  /* 119c9a6a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 119c9a6f push 0x119e2bc8 */
  push32((uint32_t)(0x119e2bc8u));
  /* 119c9a74 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c9a76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9a79 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9a7a call 0x119bb040 */
  push32(0x119c9a7fu); f_119bb040();
  /* 119c9a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9a82 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9a85 push eax */
  push32((uint32_t)(EAX));
  /* 119c9a86 call 0x119b8210 */
  push32(0x119c9a8bu); f_119b8210();
  /* 119c9a8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9a8e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 119c9a91 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9a95 je 0x119c9ae9 */
  if (C.zf) goto L_119c9ae9;
  /* 119c9a97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9a9a push edx */
  push32((uint32_t)(EDX));
  /* 119c9a9b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c9a9e push eax */
  push32((uint32_t)(EAX));
  /* 119c9a9f call 0x119bb1c0 */
  push32(0x119c9aa4u); f_119bb1c0();
  /* 119c9aa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9aa7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 119c9aaa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9aad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c9ab0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9ab2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119c9ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9ab8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 119c9abb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9abe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9ac1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c9ac4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 119c9ac7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 119c9ac9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9acb not edx */
  EDX = (~(EDX));
  /* 119c9acd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 119c9ad0 push edx */
  push32((uint32_t)(EDX));
  /* 119c9ad1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c9ad4 push eax */
  push32((uint32_t)(EAX));
  /* 119c9ad5 call dword ptr [0x119e92ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x119e92ec))), 0x119c9adbu);
  /* 119c9adb push 2 */
  push32((uint32_t)(0x2u));
  /* 119c9add mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c9ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9ae1 call 0x119b8ca0 */
  push32(0x119c9ae6u); f_119b8ca0();
  /* 119c9ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c9ae9:;
  /* 119c9ae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c9aeb:;
  /* 119c9aeb pop esi */
  ESI = (pop32());
  /* 119c9aec mov esp, ebp */
  ESP = (EBP);
  /* 119c9aee pop ebp */
  EBP = (pop32());
  /* 119c9aef ret  */
  ESPCHK(0x119c9810u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x119c9af0 (124 bytes, 47 insns) */
void f_119c9af0(void) {
  FTRACE(0x119c9af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c9af0 push ebp */
  push32((uint32_t)(EBP));
  /* 119c9af1 mov ebp, esp */
  EBP = (ESP);
  /* 119c9af3 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9af4 mov eax, dword ptr [0x119e7128] */
  EAX = (r32((uint32_t)(0x119e7128)));
  /* 119c9af9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 119c9afc jmp 0x119c9b07 */
  goto L_119c9b07;
L_119c9afe:;
  /* 119c9afe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9b01 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9b04 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_119c9b07:;
  /* 119c9b07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9b0a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9b0d je 0x119c9b5a */
  if (C.zf) goto L_119c9b5a;
  /* 119c9b0f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c9b12 push eax */
  push32((uint32_t)(EAX));
  /* 119c9b13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9b16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c9b18 push edx */
  push32((uint32_t)(EDX));
  /* 119c9b19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9b1c push eax */
  push32((uint32_t)(EAX));
  /* 119c9b1d call 0x119c92c0 */
  push32(0x119c9b22u); f_119c92c0();
  /* 119c9b22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119c9b27 jne 0x119c9b58 */
  if (!C.zf) goto L_119c9b58;
  /* 119c9b29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9b2c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c9b2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c9b31 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 119c9b35 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9b38 je 0x119c9b4a */
  if (C.zf) goto L_119c9b4a;
  /* 119c9b3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9b3d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c9b3f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c9b42 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 119c9b46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c9b48 jne 0x119c9b58 */
  if (!C.zf) goto L_119c9b58;
L_119c9b4a:;
  /* 119c9b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9b4d sub eax, dword ptr [0x119e7128] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e7128))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9b53 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 119c9b56 jmp 0x119c9b68 */
  goto L_119c9b68;
L_119c9b58:;
  /* 119c9b58 jmp 0x119c9afe */
  goto L_119c9afe;
L_119c9b5a:;
  /* 119c9b5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9b5d sub eax, dword ptr [0x119e7128] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x119e7128))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9b63 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 119c9b66 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_119c9b68:;
  /* 119c9b68 mov esp, ebp */
  ESP = (EBP);
  /* 119c9b6a pop ebp */
  EBP = (pop32());
  /* 119c9b6b ret  */
  ESPCHK(0x119c9af0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x119c9b70 (238 bytes, 80 insns) */
void f_119c9b70(void) {
  FTRACE(0x119c9b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c9b70 push ebp */
  push32((uint32_t)(EBP));
  /* 119c9b71 mov ebp, esp */
  EBP = (ESP);
  /* 119c9b73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9b76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 119c9b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9b80 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c9b83 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9b87 jne 0x119c9b90 */
  if (!C.zf) goto L_119c9b90;
  /* 119c9b89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9b8b jmp 0x119c9c5a */
  goto L_119c9c5a;
L_119c9b90:;
  /* 119c9b90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9b93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c9b95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9b98 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9b9b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 119c9b9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c9ba0 je 0x119c9bad */
  if (C.zf) goto L_119c9bad;
  /* 119c9ba2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c9ba5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9ba8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119c9bab jmp 0x119c9b90 */
  goto L_119c9b90;
L_119c9bad:;
  /* 119c9bad push 0x146 */
  push32((uint32_t)(0x146u));
  /* 119c9bb2 push 0x119e2bc8 */
  push32((uint32_t)(0x119e2bc8u));
  /* 119c9bb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119c9bb9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 119c9bbc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 119c9bc3 push eax */
  push32((uint32_t)(EAX));
  /* 119c9bc4 call 0x119b8210 */
  push32(0x119c9bc9u); f_119b8210();
  /* 119c9bc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9bcc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 119c9bcf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9bd2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 119c9bd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9bd9 jne 0x119c9be5 */
  if (!C.zf) goto L_119c9be5;
  /* 119c9bdb push 9 */
  push32((uint32_t)(0x9u));
  /* 119c9bdd call 0x119b5860 */
  push32(0x119c9be2u); f_119b5860();
  /* 119c9be2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c9be5:;
  /* 119c9be5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9be8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_119c9beb:;
  /* 119c9beb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9bee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9bf1 je 0x119c9c4e */
  if (C.zf) goto L_119c9c4e;
  /* 119c9bf3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 119c9bf8 push 0x119e2bc8 */
  push32((uint32_t)(0x119e2bc8u));
  /* 119c9bfd push 2 */
  push32((uint32_t)(0x2u));
  /* 119c9bff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9c02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119c9c04 push edx */
  push32((uint32_t)(EDX));
  /* 119c9c05 call 0x119bb040 */
  push32(0x119c9c0au); f_119bb040();
  /* 119c9c0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9c0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9c10 push eax */
  push32((uint32_t)(EAX));
  /* 119c9c11 call 0x119b8210 */
  push32(0x119c9c16u); f_119b8210();
  /* 119c9c16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9c19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9c1c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 119c9c1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9c21 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9c24 je 0x119c9c3a */
  if (C.zf) goto L_119c9c3a;
  /* 119c9c26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9c29 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 119c9c2b push ecx */
  push32((uint32_t)(ECX));
  /* 119c9c2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9c2f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 119c9c31 push eax */
  push32((uint32_t)(EAX));
  /* 119c9c32 call 0x119bb1c0 */
  push32(0x119c9c37u); f_119bb1c0();
  /* 119c9c37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119c9c3a:;
  /* 119c9c3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119c9c3d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9c40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119c9c43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9c46 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9c49 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 119c9c4c jmp 0x119c9beb */
  goto L_119c9beb;
L_119c9c4e:;
  /* 119c9c4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119c9c51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 119c9c57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_119c9c5a:;
  /* 119c9c5a mov esp, ebp */
  ESP = (EBP);
  /* 119c9c5c pop ebp */
  EBP = (pop32());
  /* 119c9c5d ret  */
  ESPCHK(0x119c9b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10019c60 @ 0x119c9c60 (237 bytes, 81 insns) */
void f_119c9c60(void) {
  FTRACE(0x119c9c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c9c60 push ebp */
  push32((uint32_t)(EBP));
  /* 119c9c61 mov ebp, esp */
  EBP = (ESP);
  /* 119c9c63 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9c64 cmp dword ptr [0x119e752c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119e752c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9c6b jne 0x119c9c82 */
  if (!C.zf) goto L_119c9c82;
  /* 119c9c6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 119c9c70 push eax */
  push32((uint32_t)(EAX));
  /* 119c9c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9c74 push ecx */
  push32((uint32_t)(ECX));
  /* 119c9c75 call 0x119c9d60 */
  push32(0x119c9c7au); f_119c9d60();
  /* 119c9c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9c7d jmp 0x119c9d49 */
  goto L_119c9d49;
L_119c9c82:;
  /* 119c9c82 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c9c84 call 0x119bdb80 */
  push32(0x119c9c89u); f_119bdb80();
  /* 119c9c89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9c8c jmp 0x119c9c97 */
  goto L_119c9c97;
L_119c9c8e:;
  /* 119c9c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9c91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9c94 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_119c9c97:;
  /* 119c9c97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9c9a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 119c9c9e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 119c9ca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9ca5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c9cab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119c9cad je 0x119c9d2b */
  if (C.zf) goto L_119c9d2b;
  /* 119c9caf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9cb2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c9cb7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c9cb9 mov cl, byte ptr [eax + 0x119e7641] */
  CL = (r8((uint32_t)(EAX + 0x119e7641)));
  /* 119c9cbf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 119c9cc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c9cc4 je 0x119c9d16 */
  if (C.zf) goto L_119c9d16;
  /* 119c9cc6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9cc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9ccc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 119c9ccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9cd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c9cd4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c9cd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119c9cd8 jne 0x119c9ce8 */
  if (!C.zf) goto L_119c9ce8;
  /* 119c9cda push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c9cdc call 0x119bdc20 */
  push32(0x119c9ce1u); f_119bdc20();
  /* 119c9ce1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9ce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9ce6 jmp 0x119c9d49 */
  goto L_119c9d49;
L_119c9ce8:;
  /* 119c9ce8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9ceb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c9cf1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 119c9cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9cf7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119c9cf9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 119c9cfb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119c9cfd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9d00 jne 0x119c9d14 */
  if (!C.zf) goto L_119c9d14;
  /* 119c9d02 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c9d04 call 0x119bdc20 */
  push32(0x119c9d09u); f_119bdc20();
  /* 119c9d09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9d0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9d0f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119c9d12 jmp 0x119c9d49 */
  goto L_119c9d49;
L_119c9d14:;
  /* 119c9d14 jmp 0x119c9d26 */
  goto L_119c9d26;
L_119c9d16:;
  /* 119c9d16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9d19 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119c9d1f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9d22 jne 0x119c9d26 */
  if (!C.zf) goto L_119c9d26;
  /* 119c9d24 jmp 0x119c9d2b */
  goto L_119c9d2b;
L_119c9d26:;
  /* 119c9d26 jmp 0x119c9c8e */
  goto L_119c9c8e;
L_119c9d2b:;
  /* 119c9d2b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119c9d2d call 0x119bdc20 */
  push32(0x119c9d32u); f_119bdc20();
  /* 119c9d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119c9d38 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c9d3d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119c9d40 jne 0x119c9d47 */
  if (!C.zf) goto L_119c9d47;
  /* 119c9d42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119c9d45 jmp 0x119c9d49 */
  goto L_119c9d49;
L_119c9d47:;
  /* 119c9d47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119c9d49:;
  /* 119c9d49 mov esp, ebp */
  ESP = (EBP);
  /* 119c9d4b pop ebp */
  EBP = (pop32());
  /* 119c9d4c ret  */
  ESPCHK(0x119c9c60u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x119c9d60 (193 bytes, 87 insns) */
void f_119c9d60(void) {
  FTRACE(0x119c9d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c9d60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9d62 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 119c9d66 push ebx */
  push32((uint32_t)(EBX));
  /* 119c9d67 mov ebx, eax */
  EBX = (EAX);
  /* 119c9d69 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 119c9d6c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 119c9d70 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 119c9d76 je 0x119c9d8b */
  if (C.zf) goto L_119c9d8b;
L_119c9d78:;
  /* 119c9d78 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 119c9d7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 119c9d7b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c9d7d je 0x119c9d50 */
  if (C.zf) { jmp_ind(0x119c9d50u); return; }
  /* 119c9d7f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 119c9d81 je 0x119c9dd4 */
  if (C.zf) goto L_119c9dd4;
  /* 119c9d83 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 119c9d89 jne 0x119c9d78 */
  if (!C.zf) goto L_119c9d78;
L_119c9d8b:;
  /* 119c9d8b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 119c9d8d push edi */
  push32((uint32_t)(EDI));
  /* 119c9d8e mov eax, ebx */
  EAX = (EBX);
  /* 119c9d90 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 119c9d93 push esi */
  push32((uint32_t)(ESI));
  /* 119c9d94 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_119c9d96:;
  /* 119c9d96 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 119c9d98 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 119c9d9d mov eax, ecx */
  EAX = (ECX);
  /* 119c9d9f mov esi, edi */
  ESI = (EDI);
  /* 119c9da1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 119c9da3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9da5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9da7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 119c9daa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119c9dad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 119c9daf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 119c9db1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119c9db4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 119c9dba jne 0x119c9dd8 */
  if (!C.zf) goto L_119c9dd8;
  /* 119c9dbc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 119c9dc1 je 0x119c9d96 */
  if (C.zf) goto L_119c9d96;
  /* 119c9dc3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 119c9dc8 jne 0x119c9dd2 */
  if (!C.zf) goto L_119c9dd2;
  /* 119c9dca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 119c9dd0 jne 0x119c9d96 */
  if (!C.zf) goto L_119c9d96;
L_119c9dd2:;
  /* 119c9dd2 pop esi */
  ESI = (pop32());
  /* 119c9dd3 pop edi */
  EDI = (pop32());
L_119c9dd4:;
  /* 119c9dd4 pop ebx */
  EBX = (pop32());
  /* 119c9dd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119c9dd7 ret  */
  ESPCHK(0x119c9d60u, _esp0);
  ESP += 4; return;
L_119c9dd8:;
  /* 119c9dd8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 119c9ddb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c9ddd je 0x119c9e15 */
  if (C.zf) goto L_119c9e15;
  /* 119c9ddf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119c9de1 je 0x119c9dd2 */
  if (C.zf) goto L_119c9dd2;
  /* 119c9de3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c9de5 je 0x119c9e0e */
  if (C.zf) goto L_119c9e0e;
  /* 119c9de7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119c9de9 je 0x119c9dd2 */
  if (C.zf) goto L_119c9dd2;
  /* 119c9deb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 119c9dee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c9df0 je 0x119c9e07 */
  if (C.zf) goto L_119c9e07;
  /* 119c9df2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119c9df4 je 0x119c9dd2 */
  if (C.zf) goto L_119c9dd2;
  /* 119c9df6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119c9df8 je 0x119c9e00 */
  if (C.zf) goto L_119c9e00;
  /* 119c9dfa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119c9dfc je 0x119c9dd2 */
  if (C.zf) goto L_119c9dd2;
  /* 119c9dfe jmp 0x119c9d96 */
  goto L_119c9d96;
L_119c9e00:;
  /* 119c9e00 pop esi */
  ESI = (pop32());
  /* 119c9e01 pop edi */
  EDI = (pop32());
  /* 119c9e02 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 119c9e05 pop ebx */
  EBX = (pop32());
  /* 119c9e06 ret  */
  ESPCHK(0x119c9d60u, _esp0);
  ESP += 4; return;
L_119c9e07:;
  /* 119c9e07 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 119c9e0a pop esi */
  ESI = (pop32());
  /* 119c9e0b pop edi */
  EDI = (pop32());
  /* 119c9e0c pop ebx */
  EBX = (pop32());
  /* 119c9e0d ret  */
  ESPCHK(0x119c9d60u, _esp0);
  ESP += 4; return;
L_119c9e0e:;
  /* 119c9e0e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 119c9e11 pop esi */
  ESI = (pop32());
  /* 119c9e12 pop edi */
  EDI = (pop32());
  /* 119c9e13 pop ebx */
  EBX = (pop32());
  /* 119c9e14 ret  */
  ESPCHK(0x119c9d60u, _esp0);
  ESP += 4; return;
L_119c9e15:;
  /* 119c9e15 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 119c9e18 pop esi */
  ESI = (pop32());
  /* 119c9e19 pop edi */
  EDI = (pop32());
  /* 119c9e1a pop ebx */
  EBX = (pop32());
  /* 119c9e1b ret  */
  ESPCHK(0x119c9d60u, _esp0);
  ESP += 4; return;
  /* 119c9e1c jmp dword ptr [0x119e93b0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x119e93b0)))); return;
}

/* RtlUnwind @ 0x119c9fa8 (6 bytes, 1 insns) */
void f_119c9fa8(void) {
  FTRACE(0x119c9fa8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119c9fa8 jmp dword ptr [0x119e9304] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x119e9304)))); return;
}

