#include "recomp.h"

/* FUN_10005b50 @ 0x12df5b50 (27 bytes, 13 insns) */
void f_12df5b50(void) {
  FTRACE(0x12df5b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df5b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12df5b51 mov ebp, esp */
  EBP = (ESP);
  /* 12df5b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5b57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df5b59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5b5c push eax */
  push32((uint32_t)(EAX));
  /* 12df5b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df5b60 push ecx */
  push32((uint32_t)(ECX));
  /* 12df5b61 call 0x12df5b70 */
  push32(0x12df5b66u); f_12df5b70();
  /* 12df5b66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5b69 pop ebp */
  EBP = (pop32());
  /* 12df5b6a ret  */
  ESPCHK(0x12df5b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b70 @ 0x12df5b70 (64 bytes, 27 insns) */
void f_12df5b70(void) {
  FTRACE(0x12df5b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df5b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12df5b71 mov ebp, esp */
  EBP = (ESP);
  /* 12df5b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12df5b74 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df5b76 call 0x12df9a90 */
  push32(0x12df5b7bu); f_12df9a90();
  /* 12df5b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5b7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12df5b80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df5b83 push eax */
  push32((uint32_t)(EAX));
  /* 12df5b84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df5b87 push ecx */
  push32((uint32_t)(ECX));
  /* 12df5b88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df5b8b push edx */
  push32((uint32_t)(EDX));
  /* 12df5b8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5b8f push eax */
  push32((uint32_t)(EAX));
  /* 12df5b90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df5b93 push ecx */
  push32((uint32_t)(ECX));
  /* 12df5b94 call 0x12df5bb0 */
  push32(0x12df5b99u); f_12df5bb0();
  /* 12df5b99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5b9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df5b9f push 9 */
  push32((uint32_t)(0x9u));
  /* 12df5ba1 call 0x12df9b30 */
  push32(0x12df5ba6u); f_12df9b30();
  /* 12df5ba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5ba9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df5bac mov esp, ebp */
  ESP = (EBP);
  /* 12df5bae pop ebp */
  EBP = (pop32());
  /* 12df5baf ret  */
  ESPCHK(0x12df5b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bb0 @ 0x12df5bb0 (1297 bytes, 431 insns) */
void f_12df5bb0(void) {
  FTRACE(0x12df5bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df5bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df5bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12df5bb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df5bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 12df5bb7 push esi */
  push32((uint32_t)(ESI));
  /* 12df5bb8 push edi */
  push32((uint32_t)(EDI));
  /* 12df5bb9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12df5bc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5bc4 jne 0x12df5be3 */
  if (!C.zf) goto L_12df5be3;
  /* 12df5bc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df5bc9 push eax */
  push32((uint32_t)(EAX));
  /* 12df5bca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df5bcd push ecx */
  push32((uint32_t)(ECX));
  /* 12df5bce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df5bd1 push edx */
  push32((uint32_t)(EDX));
  /* 12df5bd2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5bd5 push eax */
  push32((uint32_t)(EAX));
  /* 12df5bd6 call 0x12df56e0 */
  push32(0x12df5bdbu); f_12df56e0();
  /* 12df5bdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5bde jmp 0x12df60ba */
  goto L_12df60ba;
L_12df5be3:;
  /* 12df5be3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5be7 je 0x12df5c06 */
  if (C.zf) goto L_12df5c06;
  /* 12df5be9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5bed jne 0x12df5c06 */
  if (!C.zf) goto L_12df5c06;
  /* 12df5bef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df5bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 12df5bf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df5bf6 push edx */
  push32((uint32_t)(EDX));
  /* 12df5bf7 call 0x12df6170 */
  push32(0x12df5bfcu); f_12df6170();
  /* 12df5bfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5bff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5c01 jmp 0x12df60ba */
  goto L_12df60ba;
L_12df5c06:;
  /* 12df5c06 mov eax, dword ptr [0x12e1ea8c] */
  EAX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df5c0b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12df5c0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df5c10 je 0x12df5c42 */
  if (C.zf) goto L_12df5c42;
L_12df5c12:;
  /* 12df5c12 call 0x12df6880 */
  push32(0x12df5c17u); f_12df6880();
  /* 12df5c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df5c19 jne 0x12df5c3c */
  if (!C.zf) goto L_12df5c3c;
  /* 12df5c1b push 0x12e1bdac */
  push32((uint32_t)(0x12e1bdacu));
  /* 12df5c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5c22 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12df5c27 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df5c2c push 2 */
  push32((uint32_t)(0x2u));
  /* 12df5c2e call 0x12df3680 */
  push32(0x12df5c33u); f_12df3680();
  /* 12df5c33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5c36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5c39 jne 0x12df5c3c */
  if (!C.zf) goto L_12df5c3c;
  /* 12df5c3b int3  */
  x86_unimpl("int3 @ 0x12df5c3b");
L_12df5c3c:;
  /* 12df5c3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df5c3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df5c40 jne 0x12df5c12 */
  if (!C.zf) goto L_12df5c12;
L_12df5c42:;
  /* 12df5c42 mov edx, dword ptr [0x12e1ea90] */
  EDX = (r32((uint32_t)(0x12e1ea90)));
  /* 12df5c48 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12df5c4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df5c4e cmp eax, dword ptr [0x12e1ea94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e1ea94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5c54 jne 0x12df5c57 */
  if (!C.zf) goto L_12df5c57;
  /* 12df5c56 int3  */
  x86_unimpl("int3 @ 0x12df5c56");
L_12df5c57:;
  /* 12df5c57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df5c5a push ecx */
  push32((uint32_t)(ECX));
  /* 12df5c5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df5c5e push edx */
  push32((uint32_t)(EDX));
  /* 12df5c5f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df5c62 push eax */
  push32((uint32_t)(EAX));
  /* 12df5c63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df5c66 push ecx */
  push32((uint32_t)(ECX));
  /* 12df5c67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5c6a push edx */
  push32((uint32_t)(EDX));
  /* 12df5c6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df5c6e push eax */
  push32((uint32_t)(EAX));
  /* 12df5c6f push 2 */
  push32((uint32_t)(0x2u));
  /* 12df5c71 call dword ptr [0x12e1f150] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e1f150))), 0x12df5c77u);
  /* 12df5c77 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df5c7c jne 0x12df5cdc */
  if (!C.zf) goto L_12df5cdc;
  /* 12df5c7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5c82 je 0x12df5caf */
  if (C.zf) goto L_12df5caf;
L_12df5c84:;
  /* 12df5c84 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df5c87 push ecx */
  push32((uint32_t)(ECX));
  /* 12df5c88 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df5c8b push edx */
  push32((uint32_t)(EDX));
  /* 12df5c8c push 0x12e1bf28 */
  push32((uint32_t)(0x12e1bf28u));
  /* 12df5c91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5c99 call 0x12df3680 */
  push32(0x12df5c9eu); f_12df3680();
  /* 12df5c9e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5ca1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5ca4 jne 0x12df5ca7 */
  if (!C.zf) goto L_12df5ca7;
  /* 12df5ca6 int3  */
  x86_unimpl("int3 @ 0x12df5ca6");
L_12df5ca7:;
  /* 12df5ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df5cab jne 0x12df5c84 */
  if (!C.zf) goto L_12df5c84;
  /* 12df5cad jmp 0x12df5cd5 */
  goto L_12df5cd5;
L_12df5caf:;
  /* 12df5caf push 0x12e1bf04 */
  push32((uint32_t)(0x12e1bf04u));
  /* 12df5cb4 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df5cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5cc1 call 0x12df3680 */
  push32(0x12df5cc6u); f_12df3680();
  /* 12df5cc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5cc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5ccc jne 0x12df5ccf */
  if (!C.zf) goto L_12df5ccf;
  /* 12df5cce int3  */
  x86_unimpl("int3 @ 0x12df5cce");
L_12df5ccf:;
  /* 12df5ccf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df5cd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df5cd3 jne 0x12df5caf */
  if (!C.zf) goto L_12df5caf;
L_12df5cd5:;
  /* 12df5cd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5cd7 jmp 0x12df60ba */
  goto L_12df60ba;
L_12df5cdc:;
  /* 12df5cdc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5ce0 jbe 0x12df5d0e */
  if ((C.cf||C.zf)) goto L_12df5d0e;
L_12df5ce2:;
  /* 12df5ce2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5ce5 push edx */
  push32((uint32_t)(EDX));
  /* 12df5ce6 push 0x12e1bed4 */
  push32((uint32_t)(0x12e1bed4u));
  /* 12df5ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5ced push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5cef push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df5cf3 call 0x12df3680 */
  push32(0x12df5cf8u); f_12df3680();
  /* 12df5cf8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5cfb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5cfe jne 0x12df5d01 */
  if (!C.zf) goto L_12df5d01;
  /* 12df5d00 int3  */
  x86_unimpl("int3 @ 0x12df5d00");
L_12df5d01:;
  /* 12df5d01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5d03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df5d05 jne 0x12df5ce2 */
  if (!C.zf) goto L_12df5ce2;
  /* 12df5d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5d09 jmp 0x12df60ba */
  goto L_12df60ba;
L_12df5d0e:;
  /* 12df5d0e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5d12 je 0x12df5d56 */
  if (C.zf) goto L_12df5d56;
  /* 12df5d14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df5d17 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df5d1d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5d20 je 0x12df5d56 */
  if (C.zf) goto L_12df5d56;
  /* 12df5d22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df5d25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df5d2b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5d2e je 0x12df5d56 */
  if (C.zf) goto L_12df5d56;
L_12df5d30:;
  /* 12df5d30 push 0x12e1bce8 */
  push32((uint32_t)(0x12e1bce8u));
  /* 12df5d35 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df5d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5d40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df5d42 call 0x12df3680 */
  push32(0x12df5d47u); f_12df3680();
  /* 12df5d47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5d4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5d4d jne 0x12df5d50 */
  if (!C.zf) goto L_12df5d50;
  /* 12df5d4f int3  */
  x86_unimpl("int3 @ 0x12df5d4f");
L_12df5d50:;
  /* 12df5d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df5d54 jne 0x12df5d30 */
  if (!C.zf) goto L_12df5d30;
L_12df5d56:;
  /* 12df5d56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df5d59 push ecx */
  push32((uint32_t)(ECX));
  /* 12df5d5a call 0x12df6ce0 */
  push32(0x12df5d5fu); f_12df6ce0();
  /* 12df5d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df5d64 jne 0x12df5d87 */
  if (!C.zf) goto L_12df5d87;
  /* 12df5d66 push 0x12e1beb0 */
  push32((uint32_t)(0x12e1beb0u));
  /* 12df5d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5d6d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12df5d72 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df5d77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df5d79 call 0x12df3680 */
  push32(0x12df5d7eu); f_12df3680();
  /* 12df5d7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5d81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5d84 jne 0x12df5d87 */
  if (!C.zf) goto L_12df5d87;
  /* 12df5d86 int3  */
  x86_unimpl("int3 @ 0x12df5d86");
L_12df5d87:;
  /* 12df5d87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df5d89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df5d8b jne 0x12df5d56 */
  if (!C.zf) goto L_12df5d56;
  /* 12df5d8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df5d90 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df5d93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df5d96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df5d99 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5d9d jne 0x12df5da6 */
  if (!C.zf) goto L_12df5da6;
  /* 12df5d9f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12df5da6:;
  /* 12df5da6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5daa je 0x12df5dea */
  if (C.zf) goto L_12df5dea;
L_12df5dac:;
  /* 12df5dac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df5daf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5db6 jne 0x12df5dc1 */
  if (!C.zf) goto L_12df5dc1;
  /* 12df5db8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df5dbb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5dbf je 0x12df5de2 */
  if (C.zf) goto L_12df5de2;
L_12df5dc1:;
  /* 12df5dc1 push 0x12e1be68 */
  push32((uint32_t)(0x12e1be68u));
  /* 12df5dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5dc8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12df5dcd push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df5dd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df5dd4 call 0x12df3680 */
  push32(0x12df5dd9u); f_12df3680();
  /* 12df5dd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5ddc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5ddf jne 0x12df5de2 */
  if (!C.zf) goto L_12df5de2;
  /* 12df5de1 int3  */
  x86_unimpl("int3 @ 0x12df5de1");
L_12df5de2:;
  /* 12df5de2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df5de4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df5de6 jne 0x12df5dac */
  if (!C.zf) goto L_12df5dac;
  /* 12df5de8 jmp 0x12df5e4e */
  goto L_12df5e4e;
L_12df5dea:;
  /* 12df5dea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df5ded mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df5df0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df5df5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5df8 jne 0x12df5e0f */
  if (!C.zf) goto L_12df5e0f;
  /* 12df5dfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df5dfd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df5e03 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5e06 jne 0x12df5e0f */
  if (!C.zf) goto L_12df5e0f;
  /* 12df5e08 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12df5e0f:;
  /* 12df5e0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df5e12 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df5e15 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df5e1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df5e1d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df5e23 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5e25 je 0x12df5e48 */
  if (C.zf) goto L_12df5e48;
  /* 12df5e27 push 0x12e1be2c */
  push32((uint32_t)(0x12e1be2cu));
  /* 12df5e2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5e2e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12df5e33 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df5e38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df5e3a call 0x12df3680 */
  push32(0x12df5e3fu); f_12df3680();
  /* 12df5e3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5e42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5e45 jne 0x12df5e48 */
  if (!C.zf) goto L_12df5e48;
  /* 12df5e47 int3  */
  x86_unimpl("int3 @ 0x12df5e47");
L_12df5e48:;
  /* 12df5e48 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df5e4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df5e4c jne 0x12df5e0f */
  if (!C.zf) goto L_12df5e0f;
L_12df5e4e:;
  /* 12df5e4e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5e52 je 0x12df5e79 */
  if (C.zf) goto L_12df5e79;
  /* 12df5e54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5e57 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5e5a push eax */
  push32((uint32_t)(EAX));
  /* 12df5e5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df5e5e push ecx */
  push32((uint32_t)(ECX));
  /* 12df5e5f call 0x12dfa010 */
  push32(0x12df5e64u); f_12dfa010();
  /* 12df5e64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5e67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df5e6a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5e6e jne 0x12df5e77 */
  if (!C.zf) goto L_12df5e77;
  /* 12df5e70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5e72 jmp 0x12df60ba */
  goto L_12df60ba;
L_12df5e77:;
  /* 12df5e77 jmp 0x12df5e9c */
  goto L_12df5e9c;
L_12df5e79:;
  /* 12df5e79 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5e7c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5e7f push edx */
  push32((uint32_t)(EDX));
  /* 12df5e80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df5e83 push eax */
  push32((uint32_t)(EAX));
  /* 12df5e84 call 0x12df9f60 */
  push32(0x12df5e89u); f_12df9f60();
  /* 12df5e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5e8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df5e8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5e93 jne 0x12df5e9c */
  if (!C.zf) goto L_12df5e9c;
  /* 12df5e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5e97 jmp 0x12df60ba */
  goto L_12df60ba;
L_12df5e9c:;
  /* 12df5e9c mov ecx, dword ptr [0x12e1ea90] */
  ECX = (r32((uint32_t)(0x12e1ea90)));
  /* 12df5ea2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5ea5 mov dword ptr [0x12e1ea90], ecx */
  w32((uint32_t)(0x12e1ea90), (ECX));
  /* 12df5eab cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5eaf jne 0x12df5f07 */
  if (!C.zf) goto L_12df5f07;
  /* 12df5eb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5eb4 mov eax, dword ptr [0x12e206f0] */
  EAX = (r32((uint32_t)(0x12e206f0)));
  /* 12df5eb9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df5ebc mov dword ptr [0x12e206f0], eax */
  w32((uint32_t)(0x12e206f0), (EAX));
  /* 12df5ec1 mov ecx, dword ptr [0x12e206f0] */
  ECX = (r32((uint32_t)(0x12e206f0)));
  /* 12df5ec7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5eca mov dword ptr [0x12e206f0], ecx */
  w32((uint32_t)(0x12e206f0), (ECX));
  /* 12df5ed0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5ed3 mov eax, dword ptr [0x12e206f8] */
  EAX = (r32((uint32_t)(0x12e206f8)));
  /* 12df5ed8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df5edb mov dword ptr [0x12e206f8], eax */
  w32((uint32_t)(0x12e206f8), (EAX));
  /* 12df5ee0 mov ecx, dword ptr [0x12e206f8] */
  ECX = (r32((uint32_t)(0x12e206f8)));
  /* 12df5ee6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5ee9 mov dword ptr [0x12e206f8], ecx */
  w32((uint32_t)(0x12e206f8), (ECX));
  /* 12df5eef mov edx, dword ptr [0x12e206f8] */
  EDX = (r32((uint32_t)(0x12e206f8)));
  /* 12df5ef5 cmp edx, dword ptr [0x12e206fc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e206fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5efb jbe 0x12df5f07 */
  if ((C.cf||C.zf)) goto L_12df5f07;
  /* 12df5efd mov eax, dword ptr [0x12e206f8] */
  EAX = (r32((uint32_t)(0x12e206f8)));
  /* 12df5f02 mov dword ptr [0x12e206fc], eax */
  w32((uint32_t)(0x12e206fc), (EAX));
L_12df5f07:;
  /* 12df5f07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5f0a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5f0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12df5f10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5f13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5f16 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5f19 jbe 0x12df5f3f */
  if ((C.cf||C.zf)) goto L_12df5f3f;
  /* 12df5f1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5f1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5f21 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df5f24 push edx */
  push32((uint32_t)(EDX));
  /* 12df5f25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5f27 mov al, byte ptr [0x12e1ea9a] */
  AL = (r8((uint32_t)(0x12e1ea9a)));
  /* 12df5f2c push eax */
  push32((uint32_t)(EAX));
  /* 12df5f2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5f30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df5f33 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5f36 push edx */
  push32((uint32_t)(EDX));
  /* 12df5f37 call 0x12df9e00 */
  push32(0x12df5f3cu); f_12df9e00();
  /* 12df5f3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df5f3f:;
  /* 12df5f3f push 4 */
  push32((uint32_t)(0x4u));
  /* 12df5f41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df5f43 mov al, byte ptr [0x12e1ea98] */
  AL = (r8((uint32_t)(0x12e1ea98)));
  /* 12df5f48 push eax */
  push32((uint32_t)(EAX));
  /* 12df5f49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df5f4c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5f4f push ecx */
  push32((uint32_t)(ECX));
  /* 12df5f50 call 0x12df9e00 */
  push32(0x12df5f55u); f_12df9e00();
  /* 12df5f55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5f58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5f5c jne 0x12df5f79 */
  if (!C.zf) goto L_12df5f79;
  /* 12df5f5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5f61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df5f64 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12df5f67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5f6a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df5f6d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12df5f70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5f73 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df5f76 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12df5f79:;
  /* 12df5f79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5f7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df5f7f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12df5f82:;
  /* 12df5f82 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5f86 jne 0x12df5fb7 */
  if (!C.zf) goto L_12df5fb7;
  /* 12df5f88 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5f8c jne 0x12df5f96 */
  if (!C.zf) goto L_12df5f96;
  /* 12df5f8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5f91 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5f94 je 0x12df5fb7 */
  if (C.zf) goto L_12df5fb7;
L_12df5f96:;
  /* 12df5f96 push 0x12e1bdf8 */
  push32((uint32_t)(0x12e1bdf8u));
  /* 12df5f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5f9d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12df5fa2 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df5fa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df5fa9 call 0x12df3680 */
  push32(0x12df5faeu); f_12df3680();
  /* 12df5fae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df5fb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5fb4 jne 0x12df5fb7 */
  if (!C.zf) goto L_12df5fb7;
  /* 12df5fb6 int3  */
  x86_unimpl("int3 @ 0x12df5fb6");
L_12df5fb7:;
  /* 12df5fb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df5fb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df5fbb jne 0x12df5f82 */
  if (!C.zf) goto L_12df5f82;
  /* 12df5fbd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5fc0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5fc3 je 0x12df5fcb */
  if (C.zf) goto L_12df5fcb;
  /* 12df5fc5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5fc9 je 0x12df5fd3 */
  if (C.zf) goto L_12df5fd3;
L_12df5fcb:;
  /* 12df5fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df5fce jmp 0x12df60ba */
  goto L_12df60ba;
L_12df5fd3:;
  /* 12df5fd3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5fd6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5fd9 je 0x12df5feb */
  if (C.zf) goto L_12df5feb;
  /* 12df5fdb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5fde mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df5fe0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df5fe3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12df5fe6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12df5fe9 jmp 0x12df6027 */
  goto L_12df6027;
L_12df5feb:;
  /* 12df5feb mov eax, dword ptr [0x12e206ec] */
  EAX = (r32((uint32_t)(0x12e206ec)));
  /* 12df5ff0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df5ff3 je 0x12df6016 */
  if (C.zf) goto L_12df6016;
  /* 12df5ff5 push 0x12e1bddc */
  push32((uint32_t)(0x12e1bddcu));
  /* 12df5ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 12df5ffc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12df6001 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df6006 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df6008 call 0x12df3680 */
  push32(0x12df600du); f_12df3680();
  /* 12df600d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6010 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6013 jne 0x12df6016 */
  if (!C.zf) goto L_12df6016;
  /* 12df6015 int3  */
  x86_unimpl("int3 @ 0x12df6015");
L_12df6016:;
  /* 12df6016 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df6018 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df601a jne 0x12df5feb */
  if (!C.zf) goto L_12df5feb;
  /* 12df601c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df601f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12df6022 mov dword ptr [0x12e206ec], eax */
  w32((uint32_t)(0x12e206ec), (EAX));
L_12df6027:;
  /* 12df6027 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df602a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df602e je 0x12df603f */
  if (C.zf) goto L_12df603f;
  /* 12df6030 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df6033 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12df6036 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df6039 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df603b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12df603d jmp 0x12df607a */
  goto L_12df607a;
L_12df603f:;
  /* 12df603f mov eax, dword ptr [0x12e206f4] */
  EAX = (r32((uint32_t)(0x12e206f4)));
  /* 12df6044 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6047 je 0x12df606a */
  if (C.zf) goto L_12df606a;
  /* 12df6049 push 0x12e1bdc0 */
  push32((uint32_t)(0x12e1bdc0u));
  /* 12df604e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6050 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12df6055 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df605a push 2 */
  push32((uint32_t)(0x2u));
  /* 12df605c call 0x12df3680 */
  push32(0x12df6061u); f_12df3680();
  /* 12df6061 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6064 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6067 jne 0x12df606a */
  if (!C.zf) goto L_12df606a;
  /* 12df6069 int3  */
  x86_unimpl("int3 @ 0x12df6069");
L_12df606a:;
  /* 12df606a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df606c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df606e jne 0x12df603f */
  if (!C.zf) goto L_12df603f;
  /* 12df6070 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df6073 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df6075 mov dword ptr [0x12e206f4], eax */
  w32((uint32_t)(0x12e206f4), (EAX));
L_12df607a:;
  /* 12df607a cmp dword ptr [0x12e206f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e206f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6081 je 0x12df6091 */
  if (C.zf) goto L_12df6091;
  /* 12df6083 mov ecx, dword ptr [0x12e206f4] */
  ECX = (r32((uint32_t)(0x12e206f4)));
  /* 12df6089 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df608c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12df608f jmp 0x12df6099 */
  goto L_12df6099;
L_12df6091:;
  /* 12df6091 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df6094 mov dword ptr [0x12e206ec], eax */
  w32((uint32_t)(0x12e206ec), (EAX));
L_12df6099:;
  /* 12df6099 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df609c mov edx, dword ptr [0x12e206f4] */
  EDX = (r32((uint32_t)(0x12e206f4)));
  /* 12df60a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12df60a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df60a7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12df60ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df60b1 mov dword ptr [0x12e206f4], ecx */
  w32((uint32_t)(0x12e206f4), (ECX));
  /* 12df60b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12df60ba:;
  /* 12df60ba pop edi */
  EDI = (pop32());
  /* 12df60bb pop esi */
  ESI = (pop32());
  /* 12df60bc pop ebx */
  EBX = (pop32());
  /* 12df60bd mov esp, ebp */
  ESP = (EBP);
  /* 12df60bf pop ebp */
  EBP = (pop32());
  /* 12df60c0 ret  */
  ESPCHK(0x12df5bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060d0 @ 0x12df60d0 (27 bytes, 13 insns) */
void f_12df60d0(void) {
  FTRACE(0x12df60d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df60d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df60d1 mov ebp, esp */
  EBP = (ESP);
  /* 12df60d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df60d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df60d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df60d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df60dc push eax */
  push32((uint32_t)(EAX));
  /* 12df60dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df60e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12df60e1 call 0x12df60f0 */
  push32(0x12df60e6u); f_12df60f0();
  /* 12df60e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df60e9 pop ebp */
  EBP = (pop32());
  /* 12df60ea ret  */
  ESPCHK(0x12df60d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100060f0 @ 0x12df60f0 (64 bytes, 27 insns) */
void f_12df60f0(void) {
  FTRACE(0x12df60f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df60f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df60f1 mov ebp, esp */
  EBP = (ESP);
  /* 12df60f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df60f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df60f6 call 0x12df9a90 */
  push32(0x12df60fbu); f_12df9a90();
  /* 12df60fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df60fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6100 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df6103 push eax */
  push32((uint32_t)(EAX));
  /* 12df6104 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df6107 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6108 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df610b push edx */
  push32((uint32_t)(EDX));
  /* 12df610c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df610f push eax */
  push32((uint32_t)(EAX));
  /* 12df6110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6113 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6114 call 0x12df5bb0 */
  push32(0x12df6119u); f_12df5bb0();
  /* 12df6119 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df611c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df611f push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6121 call 0x12df9b30 */
  push32(0x12df6126u); f_12df9b30();
  /* 12df6126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6129 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df612c mov esp, ebp */
  ESP = (EBP);
  /* 12df612e pop ebp */
  EBP = (pop32());
  /* 12df612f ret  */
  ESPCHK(0x12df60f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x12df6130 (19 bytes, 9 insns) */
void f_12df6130(void) {
  FTRACE(0x12df6130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6130 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6131 mov ebp, esp */
  EBP = (ESP);
  /* 12df6133 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df6135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6138 push eax */
  push32((uint32_t)(EAX));
  /* 12df6139 call 0x12df6170 */
  push32(0x12df613eu); f_12df6170();
  /* 12df613e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6141 pop ebp */
  EBP = (pop32());
  /* 12df6142 ret  */
  ESPCHK(0x12df6130u, _esp0);
  ESP += 4; return;
}

/* FUN_10006150 @ 0x12df6150 (19 bytes, 9 insns) */
void f_12df6150(void) {
  FTRACE(0x12df6150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6150 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6151 mov ebp, esp */
  EBP = (ESP);
  /* 12df6153 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df6155 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6158 push eax */
  push32((uint32_t)(EAX));
  /* 12df6159 call 0x12df61a0 */
  push32(0x12df615eu); f_12df61a0();
  /* 12df615e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6161 pop ebp */
  EBP = (pop32());
  /* 12df6162 ret  */
  ESPCHK(0x12df6150u, _esp0);
  ESP += 4; return;
}

/* FUN_10006170 @ 0x12df6170 (41 bytes, 16 insns) */
void f_12df6170(void) {
  FTRACE(0x12df6170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6170 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6171 mov ebp, esp */
  EBP = (ESP);
  /* 12df6173 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6175 call 0x12df9a90 */
  push32(0x12df617au); f_12df9a90();
  /* 12df617a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df617d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df6180 push eax */
  push32((uint32_t)(EAX));
  /* 12df6181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6184 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6185 call 0x12df61a0 */
  push32(0x12df618au); f_12df61a0();
  /* 12df618a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df618d push 9 */
  push32((uint32_t)(0x9u));
  /* 12df618f call 0x12df9b30 */
  push32(0x12df6194u); f_12df9b30();
  /* 12df6194 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6197 pop ebp */
  EBP = (pop32());
  /* 12df6198 ret  */
  ESPCHK(0x12df6170u, _esp0);
  ESP += 4; return;
}

/* FUN_100061a0 @ 0x12df61a0 (1004 bytes, 342 insns) */
void f_12df61a0(void) {
  FTRACE(0x12df61a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df61a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df61a1 mov ebp, esp */
  EBP = (ESP);
  /* 12df61a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df61a4 push ebx */
  push32((uint32_t)(EBX));
  /* 12df61a5 push esi */
  push32((uint32_t)(ESI));
  /* 12df61a6 push edi */
  push32((uint32_t)(EDI));
  /* 12df61a7 mov eax, dword ptr [0x12e1ea8c] */
  EAX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df61ac and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12df61af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df61b1 je 0x12df61e3 */
  if (C.zf) goto L_12df61e3;
L_12df61b3:;
  /* 12df61b3 call 0x12df6880 */
  push32(0x12df61b8u); f_12df6880();
  /* 12df61b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df61ba jne 0x12df61dd */
  if (!C.zf) goto L_12df61dd;
  /* 12df61bc push 0x12e1bdac */
  push32((uint32_t)(0x12e1bdacu));
  /* 12df61c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df61c3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12df61c8 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df61cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12df61cf call 0x12df3680 */
  push32(0x12df61d4u); f_12df3680();
  /* 12df61d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df61d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df61da jne 0x12df61dd */
  if (!C.zf) goto L_12df61dd;
  /* 12df61dc int3  */
  x86_unimpl("int3 @ 0x12df61dc");
L_12df61dd:;
  /* 12df61dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df61df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df61e1 jne 0x12df61b3 */
  if (!C.zf) goto L_12df61b3;
L_12df61e3:;
  /* 12df61e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df61e7 jne 0x12df61ee */
  if (!C.zf) goto L_12df61ee;
  /* 12df61e9 jmp 0x12df6585 */
  goto L_12df6585;
L_12df61ee:;
  /* 12df61ee push 0 */
  push32((uint32_t)(0x0u));
  /* 12df61f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df61f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df61f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df61f7 push edx */
  push32((uint32_t)(EDX));
  /* 12df61f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df61fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df61fd push eax */
  push32((uint32_t)(EAX));
  /* 12df61fe push 3 */
  push32((uint32_t)(0x3u));
  /* 12df6200 call dword ptr [0x12e1f150] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e1f150))), 0x12df6206u);
  /* 12df6206 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df620b jne 0x12df6238 */
  if (!C.zf) goto L_12df6238;
L_12df620d:;
  /* 12df620d push 0x12e1c070 */
  push32((uint32_t)(0x12e1c070u));
  /* 12df6212 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df6217 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6219 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df621b push 0 */
  push32((uint32_t)(0x0u));
  /* 12df621d push 0 */
  push32((uint32_t)(0x0u));
  /* 12df621f call 0x12df3680 */
  push32(0x12df6224u); f_12df3680();
  /* 12df6224 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6227 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df622a jne 0x12df622d */
  if (!C.zf) goto L_12df622d;
  /* 12df622c int3  */
  x86_unimpl("int3 @ 0x12df622c");
L_12df622d:;
  /* 12df622d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df622f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df6231 jne 0x12df620d */
  if (!C.zf) goto L_12df620d;
  /* 12df6233 jmp 0x12df6585 */
  goto L_12df6585;
L_12df6238:;
  /* 12df6238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df623b push edx */
  push32((uint32_t)(EDX));
  /* 12df623c call 0x12df6ce0 */
  push32(0x12df6241u); f_12df6ce0();
  /* 12df6241 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6246 jne 0x12df6269 */
  if (!C.zf) goto L_12df6269;
  /* 12df6248 push 0x12e1beb0 */
  push32((uint32_t)(0x12e1beb0u));
  /* 12df624d push 0 */
  push32((uint32_t)(0x0u));
  /* 12df624f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12df6254 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df6259 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df625b call 0x12df3680 */
  push32(0x12df6260u); f_12df3680();
  /* 12df6260 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6263 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6266 jne 0x12df6269 */
  if (!C.zf) goto L_12df6269;
  /* 12df6268 int3  */
  x86_unimpl("int3 @ 0x12df6268");
L_12df6269:;
  /* 12df6269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df626b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df626d jne 0x12df6238 */
  if (!C.zf) goto L_12df6238;
  /* 12df626f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6272 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6275 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12df6278:;
  /* 12df6278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df627b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df627e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df6283 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6286 je 0x12df62cb */
  if (C.zf) goto L_12df62cb;
  /* 12df6288 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df628b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df628f je 0x12df62cb */
  if (C.zf) goto L_12df62cb;
  /* 12df6291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6294 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df6297 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df629c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df629f je 0x12df62cb */
  if (C.zf) goto L_12df62cb;
  /* 12df62a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df62a4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df62a8 je 0x12df62cb */
  if (C.zf) goto L_12df62cb;
  /* 12df62aa push 0x12e1c048 */
  push32((uint32_t)(0x12e1c048u));
  /* 12df62af push 0 */
  push32((uint32_t)(0x0u));
  /* 12df62b1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12df62b6 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df62bb push 2 */
  push32((uint32_t)(0x2u));
  /* 12df62bd call 0x12df3680 */
  push32(0x12df62c2u); f_12df3680();
  /* 12df62c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df62c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df62c8 jne 0x12df62cb */
  if (!C.zf) goto L_12df62cb;
  /* 12df62ca int3  */
  x86_unimpl("int3 @ 0x12df62ca");
L_12df62cb:;
  /* 12df62cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df62cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df62cf jne 0x12df6278 */
  if (!C.zf) goto L_12df6278;
  /* 12df62d1 mov eax, dword ptr [0x12e1ea8c] */
  EAX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df62d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12df62d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df62db jne 0x12df63a6 */
  if (!C.zf) goto L_12df63a6;
  /* 12df62e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12df62e3 mov cl, byte ptr [0x12e1ea98] */
  CL = (r8((uint32_t)(0x12e1ea98)));
  /* 12df62e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12df62ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df62ed add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df62f0 push edx */
  push32((uint32_t)(EDX));
  /* 12df62f1 call 0x12df67f0 */
  push32(0x12df62f6u); f_12df67f0();
  /* 12df62f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df62f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df62fb jne 0x12df6340 */
  if (!C.zf) goto L_12df6340;
L_12df62fd:;
  /* 12df62fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6300 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6303 push eax */
  push32((uint32_t)(EAX));
  /* 12df6304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6307 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12df630a push edx */
  push32((uint32_t)(EDX));
  /* 12df630b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df630e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12df6311 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df6317 mov edx, dword ptr [ecx*4 + 0x12e1ea9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e1ea9c)));
  /* 12df631e push edx */
  push32((uint32_t)(EDX));
  /* 12df631f push 0x12e1c01c */
  push32((uint32_t)(0x12e1c01cu));
  /* 12df6324 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6326 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6328 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df632a push 1 */
  push32((uint32_t)(0x1u));
  /* 12df632c call 0x12df3680 */
  push32(0x12df6331u); f_12df3680();
  /* 12df6331 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6334 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6337 jne 0x12df633a */
  if (!C.zf) goto L_12df633a;
  /* 12df6339 int3  */
  x86_unimpl("int3 @ 0x12df6339");
L_12df633a:;
  /* 12df633a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df633c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df633e jne 0x12df62fd */
  if (!C.zf) goto L_12df62fd;
L_12df6340:;
  /* 12df6340 push 4 */
  push32((uint32_t)(0x4u));
  /* 12df6342 mov cl, byte ptr [0x12e1ea98] */
  CL = (r8((uint32_t)(0x12e1ea98)));
  /* 12df6348 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6349 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df634c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12df634f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6352 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12df6356 push edx */
  push32((uint32_t)(EDX));
  /* 12df6357 call 0x12df67f0 */
  push32(0x12df635cu); f_12df67f0();
  /* 12df635c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df635f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6361 jne 0x12df63a6 */
  if (!C.zf) goto L_12df63a6;
L_12df6363:;
  /* 12df6363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6366 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6369 push eax */
  push32((uint32_t)(EAX));
  /* 12df636a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df636d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12df6370 push edx */
  push32((uint32_t)(EDX));
  /* 12df6371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6374 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12df6377 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df637d mov edx, dword ptr [ecx*4 + 0x12e1ea9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e1ea9c)));
  /* 12df6384 push edx */
  push32((uint32_t)(EDX));
  /* 12df6385 push 0x12e1bff0 */
  push32((uint32_t)(0x12e1bff0u));
  /* 12df638a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df638c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df638e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6390 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df6392 call 0x12df3680 */
  push32(0x12df6397u); f_12df3680();
  /* 12df6397 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df639a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df639d jne 0x12df63a0 */
  if (!C.zf) goto L_12df63a0;
  /* 12df639f int3  */
  x86_unimpl("int3 @ 0x12df639f");
L_12df63a0:;
  /* 12df63a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df63a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df63a4 jne 0x12df6363 */
  if (!C.zf) goto L_12df6363;
L_12df63a6:;
  /* 12df63a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df63a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df63ad jne 0x12df641b */
  if (!C.zf) goto L_12df641b;
L_12df63af:;
  /* 12df63af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df63b2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df63b9 jne 0x12df63c4 */
  if (!C.zf) goto L_12df63c4;
  /* 12df63bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df63be cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df63c2 je 0x12df63e5 */
  if (C.zf) goto L_12df63e5;
L_12df63c4:;
  /* 12df63c4 push 0x12e1bfb0 */
  push32((uint32_t)(0x12e1bfb0u));
  /* 12df63c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df63cb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12df63d0 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df63d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df63d7 call 0x12df3680 */
  push32(0x12df63dcu); f_12df3680();
  /* 12df63dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df63df cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df63e2 jne 0x12df63e5 */
  if (!C.zf) goto L_12df63e5;
  /* 12df63e4 int3  */
  x86_unimpl("int3 @ 0x12df63e4");
L_12df63e5:;
  /* 12df63e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df63e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df63e9 jne 0x12df63af */
  if (!C.zf) goto L_12df63af;
  /* 12df63eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df63ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12df63f1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df63f4 push eax */
  push32((uint32_t)(EAX));
  /* 12df63f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df63f7 mov cl, byte ptr [0x12e1ea99] */
  CL = (r8((uint32_t)(0x12e1ea99)));
  /* 12df63fd push ecx */
  push32((uint32_t)(ECX));
  /* 12df63fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6401 push edx */
  push32((uint32_t)(EDX));
  /* 12df6402 call 0x12df9e00 */
  push32(0x12df6407u); f_12df9e00();
  /* 12df6407 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df640a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df640d push eax */
  push32((uint32_t)(EAX));
  /* 12df640e call 0x12dfa200 */
  push32(0x12df6413u); f_12dfa200();
  /* 12df6413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6416 jmp 0x12df6585 */
  goto L_12df6585;
L_12df641b:;
  /* 12df641b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df641e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6422 jne 0x12df6431 */
  if (!C.zf) goto L_12df6431;
  /* 12df6424 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6428 jne 0x12df6431 */
  if (!C.zf) goto L_12df6431;
  /* 12df642a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12df6431:;
  /* 12df6431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6434 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df6437 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df643a je 0x12df645d */
  if (C.zf) goto L_12df645d;
  /* 12df643c push 0x12e1bf90 */
  push32((uint32_t)(0x12e1bf90u));
  /* 12df6441 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6443 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12df6448 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df644d push 2 */
  push32((uint32_t)(0x2u));
  /* 12df644f call 0x12df3680 */
  push32(0x12df6454u); f_12df3680();
  /* 12df6454 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6457 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df645a jne 0x12df645d */
  if (!C.zf) goto L_12df645d;
  /* 12df645c int3  */
  x86_unimpl("int3 @ 0x12df645c");
L_12df645d:;
  /* 12df645d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df645f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df6461 jne 0x12df6431 */
  if (!C.zf) goto L_12df6431;
  /* 12df6463 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6466 mov eax, dword ptr [0x12e206f8] */
  EAX = (r32((uint32_t)(0x12e206f8)));
  /* 12df646b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df646e mov dword ptr [0x12e206f8], eax */
  w32((uint32_t)(0x12e206f8), (EAX));
  /* 12df6473 mov ecx, dword ptr [0x12e1ea8c] */
  ECX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df6479 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12df647c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df647e jne 0x12df655c */
  if (!C.zf) goto L_12df655c;
  /* 12df6484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6487 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df648a je 0x12df649c */
  if (C.zf) goto L_12df649c;
  /* 12df648c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df648f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df6491 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6494 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12df6497 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12df649a jmp 0x12df64da */
  goto L_12df64da;
L_12df649c:;
  /* 12df649c mov ecx, dword ptr [0x12e206ec] */
  ECX = (r32((uint32_t)(0x12e206ec)));
  /* 12df64a2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df64a5 je 0x12df64c8 */
  if (C.zf) goto L_12df64c8;
  /* 12df64a7 push 0x12e1bf78 */
  push32((uint32_t)(0x12e1bf78u));
  /* 12df64ac push 0 */
  push32((uint32_t)(0x0u));
  /* 12df64ae push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12df64b3 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df64b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df64ba call 0x12df3680 */
  push32(0x12df64bfu); f_12df3680();
  /* 12df64bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df64c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df64c5 jne 0x12df64c8 */
  if (!C.zf) goto L_12df64c8;
  /* 12df64c7 int3  */
  x86_unimpl("int3 @ 0x12df64c7");
L_12df64c8:;
  /* 12df64c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df64ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df64cc jne 0x12df649c */
  if (!C.zf) goto L_12df649c;
  /* 12df64ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df64d1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12df64d4 mov dword ptr [0x12e206ec], ecx */
  w32((uint32_t)(0x12e206ec), (ECX));
L_12df64da:;
  /* 12df64da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df64dd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df64e1 je 0x12df64f2 */
  if (C.zf) goto L_12df64f2;
  /* 12df64e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df64e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12df64e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df64ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df64ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12df64f0 jmp 0x12df652f */
  goto L_12df652f;
L_12df64f2:;
  /* 12df64f2 mov ecx, dword ptr [0x12e206f4] */
  ECX = (r32((uint32_t)(0x12e206f4)));
  /* 12df64f8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df64fb je 0x12df651e */
  if (C.zf) goto L_12df651e;
  /* 12df64fd push 0x12e1bf60 */
  push32((uint32_t)(0x12e1bf60u));
  /* 12df6502 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6504 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12df6509 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df650e push 2 */
  push32((uint32_t)(0x2u));
  /* 12df6510 call 0x12df3680 */
  push32(0x12df6515u); f_12df3680();
  /* 12df6515 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6518 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df651b jne 0x12df651e */
  if (!C.zf) goto L_12df651e;
  /* 12df651d int3  */
  x86_unimpl("int3 @ 0x12df651d");
L_12df651e:;
  /* 12df651e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df6520 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df6522 jne 0x12df64f2 */
  if (!C.zf) goto L_12df64f2;
  /* 12df6524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6527 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df6529 mov dword ptr [0x12e206f4], ecx */
  w32((uint32_t)(0x12e206f4), (ECX));
L_12df652f:;
  /* 12df652f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6532 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12df6535 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6538 push eax */
  push32((uint32_t)(EAX));
  /* 12df6539 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df653b mov cl, byte ptr [0x12e1ea99] */
  CL = (r8((uint32_t)(0x12e1ea99)));
  /* 12df6541 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6542 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6545 push edx */
  push32((uint32_t)(EDX));
  /* 12df6546 call 0x12df9e00 */
  push32(0x12df654bu); f_12df9e00();
  /* 12df654b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df654e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6551 push eax */
  push32((uint32_t)(EAX));
  /* 12df6552 call 0x12dfa200 */
  push32(0x12df6557u); f_12dfa200();
  /* 12df6557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df655a jmp 0x12df6585 */
  goto L_12df6585;
L_12df655c:;
  /* 12df655c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df655f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12df6566 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6569 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12df656c push eax */
  push32((uint32_t)(EAX));
  /* 12df656d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df656f mov cl, byte ptr [0x12e1ea99] */
  CL = (r8((uint32_t)(0x12e1ea99)));
  /* 12df6575 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6576 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6579 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df657c push edx */
  push32((uint32_t)(EDX));
  /* 12df657d call 0x12df9e00 */
  push32(0x12df6582u); f_12df9e00();
  /* 12df6582 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df6585:;
  /* 12df6585 pop edi */
  EDI = (pop32());
  /* 12df6586 pop esi */
  ESI = (pop32());
  /* 12df6587 pop ebx */
  EBX = (pop32());
  /* 12df6588 mov esp, ebp */
  ESP = (EBP);
  /* 12df658a pop ebp */
  EBP = (pop32());
  /* 12df658b ret  */
  ESPCHK(0x12df61a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006590 @ 0x12df6590 (19 bytes, 9 insns) */
void f_12df6590(void) {
  FTRACE(0x12df6590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6590 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6591 mov ebp, esp */
  EBP = (ESP);
  /* 12df6593 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df6595 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6598 push eax */
  push32((uint32_t)(EAX));
  /* 12df6599 call 0x12df65b0 */
  push32(0x12df659eu); f_12df65b0();
  /* 12df659e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df65a1 pop ebp */
  EBP = (pop32());
  /* 12df65a2 ret  */
  ESPCHK(0x12df6590u, _esp0);
  ESP += 4; return;
}

/* FUN_100065b0 @ 0x12df65b0 (342 bytes, 119 insns) */
void f_12df65b0(void) {
  FTRACE(0x12df65b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df65b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df65b1 mov ebp, esp */
  EBP = (ESP);
  /* 12df65b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df65b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12df65b7 push esi */
  push32((uint32_t)(ESI));
  /* 12df65b8 push edi */
  push32((uint32_t)(EDI));
  /* 12df65b9 mov eax, dword ptr [0x12e1ea8c] */
  EAX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df65be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12df65c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df65c3 je 0x12df65f5 */
  if (C.zf) goto L_12df65f5;
L_12df65c5:;
  /* 12df65c5 call 0x12df6880 */
  push32(0x12df65cau); f_12df6880();
  /* 12df65ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df65cc jne 0x12df65ef */
  if (!C.zf) goto L_12df65ef;
  /* 12df65ce push 0x12e1bdac */
  push32((uint32_t)(0x12e1bdacu));
  /* 12df65d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df65d5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12df65da push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df65df push 2 */
  push32((uint32_t)(0x2u));
  /* 12df65e1 call 0x12df3680 */
  push32(0x12df65e6u); f_12df3680();
  /* 12df65e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df65e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df65ec jne 0x12df65ef */
  if (!C.zf) goto L_12df65ef;
  /* 12df65ee int3  */
  x86_unimpl("int3 @ 0x12df65ee");
L_12df65ef:;
  /* 12df65ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df65f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df65f3 jne 0x12df65c5 */
  if (!C.zf) goto L_12df65c5;
L_12df65f5:;
  /* 12df65f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df65f7 call 0x12df9a90 */
  push32(0x12df65fcu); f_12df9a90();
  /* 12df65fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df65ff:;
  /* 12df65ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6602 push edx */
  push32((uint32_t)(EDX));
  /* 12df6603 call 0x12df6ce0 */
  push32(0x12df6608u); f_12df6ce0();
  /* 12df6608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df660b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df660d jne 0x12df6630 */
  if (!C.zf) goto L_12df6630;
  /* 12df660f push 0x12e1beb0 */
  push32((uint32_t)(0x12e1beb0u));
  /* 12df6614 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6616 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12df661b push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df6620 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df6622 call 0x12df3680 */
  push32(0x12df6627u); f_12df3680();
  /* 12df6627 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df662a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df662d jne 0x12df6630 */
  if (!C.zf) goto L_12df6630;
  /* 12df662f int3  */
  x86_unimpl("int3 @ 0x12df662f");
L_12df6630:;
  /* 12df6630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6634 jne 0x12df65ff */
  if (!C.zf) goto L_12df65ff;
  /* 12df6636 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6639 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df663c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12df663f:;
  /* 12df663f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6642 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df6645 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df664a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df664d je 0x12df6692 */
  if (C.zf) goto L_12df6692;
  /* 12df664f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6652 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6656 je 0x12df6692 */
  if (C.zf) goto L_12df6692;
  /* 12df6658 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df665b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df665e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df6663 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6666 je 0x12df6692 */
  if (C.zf) goto L_12df6692;
  /* 12df6668 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df666b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df666f je 0x12df6692 */
  if (C.zf) goto L_12df6692;
  /* 12df6671 push 0x12e1c048 */
  push32((uint32_t)(0x12e1c048u));
  /* 12df6676 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6678 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12df667d push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df6682 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df6684 call 0x12df3680 */
  push32(0x12df6689u); f_12df3680();
  /* 12df6689 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df668c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df668f jne 0x12df6692 */
  if (!C.zf) goto L_12df6692;
  /* 12df6691 int3  */
  x86_unimpl("int3 @ 0x12df6691");
L_12df6692:;
  /* 12df6692 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df6694 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df6696 jne 0x12df663f */
  if (!C.zf) goto L_12df663f;
  /* 12df6698 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df669b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df669f jne 0x12df66ae */
  if (!C.zf) goto L_12df66ae;
  /* 12df66a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df66a5 jne 0x12df66ae */
  if (!C.zf) goto L_12df66ae;
  /* 12df66a7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12df66ae:;
  /* 12df66ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df66b1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df66b5 je 0x12df66e9 */
  if (C.zf) goto L_12df66e9;
L_12df66b7:;
  /* 12df66b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df66ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df66bd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df66c0 je 0x12df66e3 */
  if (C.zf) goto L_12df66e3;
  /* 12df66c2 push 0x12e1bf90 */
  push32((uint32_t)(0x12e1bf90u));
  /* 12df66c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df66c9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12df66ce push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df66d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df66d5 call 0x12df3680 */
  push32(0x12df66dau); f_12df3680();
  /* 12df66da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df66dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df66e0 jne 0x12df66e3 */
  if (!C.zf) goto L_12df66e3;
  /* 12df66e2 int3  */
  x86_unimpl("int3 @ 0x12df66e2");
L_12df66e3:;
  /* 12df66e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df66e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df66e7 jne 0x12df66b7 */
  if (!C.zf) goto L_12df66b7;
L_12df66e9:;
  /* 12df66e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df66ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12df66ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df66f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df66f4 call 0x12df9b30 */
  push32(0x12df66f9u); f_12df9b30();
  /* 12df66f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df66fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df66ff pop edi */
  EDI = (pop32());
  /* 12df6700 pop esi */
  ESI = (pop32());
  /* 12df6701 pop ebx */
  EBX = (pop32());
  /* 12df6702 mov esp, ebp */
  ESP = (EBP);
  /* 12df6704 pop ebp */
  EBP = (pop32());
  /* 12df6705 ret  */
  ESPCHK(0x12df65b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006710 @ 0x12df6710 (28 bytes, 11 insns) */
void f_12df6710(void) {
  FTRACE(0x12df6710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6710 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6711 mov ebp, esp */
  EBP = (ESP);
  /* 12df6713 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6714 mov eax, dword ptr [0x12e1ea94] */
  EAX = (r32((uint32_t)(0x12e1ea94)));
  /* 12df6719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df671c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df671f mov dword ptr [0x12e1ea94], ecx */
  w32((uint32_t)(0x12e1ea94), (ECX));
  /* 12df6725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6728 mov esp, ebp */
  ESP = (EBP);
  /* 12df672a pop ebp */
  EBP = (pop32());
  /* 12df672b ret  */
  ESPCHK(0x12df6710u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x12df6730 (157 bytes, 59 insns) */
void f_12df6730(void) {
  FTRACE(0x12df6730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6730 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6731 mov ebp, esp */
  EBP = (ESP);
  /* 12df6733 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6734 push ebx */
  push32((uint32_t)(EBX));
  /* 12df6735 push esi */
  push32((uint32_t)(ESI));
  /* 12df6736 push edi */
  push32((uint32_t)(EDI));
  /* 12df6737 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6739 call 0x12df9a90 */
  push32(0x12df673eu); f_12df9a90();
  /* 12df673e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6741 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6744 push eax */
  push32((uint32_t)(EAX));
  /* 12df6745 call 0x12df6ce0 */
  push32(0x12df674au); f_12df6ce0();
  /* 12df674a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df674d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df674f je 0x12df67bc */
  if (C.zf) goto L_12df67bc;
  /* 12df6751 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6754 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6757 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12df675a:;
  /* 12df675a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df675d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df6760 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df6765 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6768 je 0x12df67ad */
  if (C.zf) goto L_12df67ad;
  /* 12df676a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df676d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6771 je 0x12df67ad */
  if (C.zf) goto L_12df67ad;
  /* 12df6773 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6776 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df6779 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df677e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6781 je 0x12df67ad */
  if (C.zf) goto L_12df67ad;
  /* 12df6783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6786 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df678a je 0x12df67ad */
  if (C.zf) goto L_12df67ad;
  /* 12df678c push 0x12e1c048 */
  push32((uint32_t)(0x12e1c048u));
  /* 12df6791 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6793 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12df6798 push 0x12e1bda0 */
  push32((uint32_t)(0x12e1bda0u));
  /* 12df679d push 2 */
  push32((uint32_t)(0x2u));
  /* 12df679f call 0x12df3680 */
  push32(0x12df67a4u); f_12df3680();
  /* 12df67a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df67a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df67aa jne 0x12df67ad */
  if (!C.zf) goto L_12df67ad;
  /* 12df67ac int3  */
  x86_unimpl("int3 @ 0x12df67ac");
L_12df67ad:;
  /* 12df67ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df67af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df67b1 jne 0x12df675a */
  if (!C.zf) goto L_12df675a;
  /* 12df67b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df67b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df67b9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12df67bc:;
  /* 12df67bc push 9 */
  push32((uint32_t)(0x9u));
  /* 12df67be call 0x12df9b30 */
  push32(0x12df67c3u); f_12df9b30();
  /* 12df67c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df67c6 pop edi */
  EDI = (pop32());
  /* 12df67c7 pop esi */
  ESI = (pop32());
  /* 12df67c8 pop ebx */
  EBX = (pop32());
  /* 12df67c9 mov esp, ebp */
  ESP = (EBP);
  /* 12df67cb pop ebp */
  EBP = (pop32());
  /* 12df67cc ret  */
  ESPCHK(0x12df6730u, _esp0);
  ESP += 4; return;
}

/* FUN_100067d0 @ 0x12df67d0 (28 bytes, 11 insns) */
void f_12df67d0(void) {
  FTRACE(0x12df67d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df67d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df67d1 mov ebp, esp */
  EBP = (ESP);
  /* 12df67d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df67d4 mov eax, dword ptr [0x12e1f150] */
  EAX = (r32((uint32_t)(0x12e1f150)));
  /* 12df67d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df67dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df67df mov dword ptr [0x12e1f150], ecx */
  w32((uint32_t)(0x12e1f150), (ECX));
  /* 12df67e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df67e8 mov esp, ebp */
  ESP = (EBP);
  /* 12df67ea pop ebp */
  EBP = (pop32());
  /* 12df67eb ret  */
  ESPCHK(0x12df67d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067f0 @ 0x12df67f0 (136 bytes, 55 insns) */
void f_12df67f0(void) {
  FTRACE(0x12df67f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df67f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df67f1 mov ebp, esp */
  EBP = (ESP);
  /* 12df67f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df67f4 push ebx */
  push32((uint32_t)(EBX));
  /* 12df67f5 push esi */
  push32((uint32_t)(ESI));
  /* 12df67f6 push edi */
  push32((uint32_t)(EDI));
  /* 12df67f7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12df67fe:;
  /* 12df67fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df6801 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df6804 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6807 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12df680a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df680c je 0x12df686e */
  if (C.zf) goto L_12df686e;
  /* 12df680e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6811 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6813 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12df6815 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df6818 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df681e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6821 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6824 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12df6827 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6829 je 0x12df686c */
  if (C.zf) goto L_12df686c;
L_12df682b:;
  /* 12df682b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df682e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df6833 push eax */
  push32((uint32_t)(EAX));
  /* 12df6834 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6837 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df6839 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12df683c push edx */
  push32((uint32_t)(EDX));
  /* 12df683d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6840 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6843 push eax */
  push32((uint32_t)(EAX));
  /* 12df6844 push 0x12e1c08c */
  push32((uint32_t)(0x12e1c08cu));
  /* 12df6849 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df684b push 0 */
  push32((uint32_t)(0x0u));
  /* 12df684d push 0 */
  push32((uint32_t)(0x0u));
  /* 12df684f push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6851 call 0x12df3680 */
  push32(0x12df6856u); f_12df3680();
  /* 12df6856 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6859 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df685c jne 0x12df685f */
  if (!C.zf) goto L_12df685f;
  /* 12df685e int3  */
  x86_unimpl("int3 @ 0x12df685e");
L_12df685f:;
  /* 12df685f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df6861 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df6863 jne 0x12df682b */
  if (!C.zf) goto L_12df682b;
  /* 12df6865 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12df686c:;
  /* 12df686c jmp 0x12df67fe */
  goto L_12df67fe;
L_12df686e:;
  /* 12df686e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6871 pop edi */
  EDI = (pop32());
  /* 12df6872 pop esi */
  ESI = (pop32());
  /* 12df6873 pop ebx */
  EBX = (pop32());
  /* 12df6874 mov esp, ebp */
  ESP = (EBP);
  /* 12df6876 pop ebp */
  EBP = (pop32());
  /* 12df6877 ret  */
  ESPCHK(0x12df67f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x12df6880 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12df6880(void) {
  FTRACE(0x12df6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6880 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6881 mov ebp, esp */
  EBP = (ESP);
  /* 12df6883 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6886 push ebx */
  push32((uint32_t)(EBX));
  /* 12df6887 push esi */
  push32((uint32_t)(ESI));
  /* 12df6888 push edi */
  push32((uint32_t)(EDI));
  /* 12df6889 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12df6890 mov eax, dword ptr [0x12e1ea8c] */
  EAX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df6895 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12df6898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df689a jne 0x12df68a6 */
  if (!C.zf) goto L_12df68a6;
  /* 12df689c mov eax, 1 */
  EAX = (0x1u);
  /* 12df68a1 jmp 0x12df6bd8 */
  goto L_12df6bd8;
L_12df68a6:;
  /* 12df68a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df68a8 call 0x12df9a90 */
  push32(0x12df68adu); f_12df9a90();
  /* 12df68ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df68b0 call 0x12dfa270 */
  push32(0x12df68b5u); f_12dfa270();
  /* 12df68b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df68b8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df68bc je 0x12df69c9 */
  if (C.zf) goto L_12df69c9;
  /* 12df68c2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df68c6 je 0x12df69c9 */
  if (C.zf) goto L_12df69c9;
  /* 12df68cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df68cf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12df68d2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df68d5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df68d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12df68db cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df68df ja 0x12df6992 */
  if ((!C.cf&&!C.zf)) goto L_12df6992;
  /* 12df68e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df68e8 jmp dword ptr [eax*4 + 0x12df6bdf] */
  switch (EAX) {
    case 0: goto L_12df696a;
    case 1: goto L_12df6942;
    case 2: goto L_12df691a;
    case 3: goto L_12df68ef;
    default: x86_unimpl("switch@0x12df68e8 out of table"); return;
  }
L_12df68ef:;
  /* 12df68ef push 0x12e1c1e0 */
  push32((uint32_t)(0x12e1c1e0u));
  /* 12df68f4 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df68f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df68fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12df68fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12df68ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6901 call 0x12df3680 */
  push32(0x12df6906u); f_12df3680();
  /* 12df6906 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6909 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df690c jne 0x12df690f */
  if (!C.zf) goto L_12df690f;
  /* 12df690e int3  */
  x86_unimpl("int3 @ 0x12df690e");
L_12df690f:;
  /* 12df690f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df6911 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df6913 jne 0x12df68ef */
  if (!C.zf) goto L_12df68ef;
  /* 12df6915 jmp 0x12df69b8 */
  goto L_12df69b8;
L_12df691a:;
  /* 12df691a push 0x12e1c1bc */
  push32((uint32_t)(0x12e1c1bcu));
  /* 12df691f push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df6924 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6926 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6928 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df692a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df692c call 0x12df3680 */
  push32(0x12df6931u); f_12df3680();
  /* 12df6931 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6934 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6937 jne 0x12df693a */
  if (!C.zf) goto L_12df693a;
  /* 12df6939 int3  */
  x86_unimpl("int3 @ 0x12df6939");
L_12df693a:;
  /* 12df693a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df693c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df693e jne 0x12df691a */
  if (!C.zf) goto L_12df691a;
  /* 12df6940 jmp 0x12df69b8 */
  goto L_12df69b8;
L_12df6942:;
  /* 12df6942 push 0x12e1c198 */
  push32((uint32_t)(0x12e1c198u));
  /* 12df6947 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df694c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df694e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6950 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6952 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6954 call 0x12df3680 */
  push32(0x12df6959u); f_12df3680();
  /* 12df6959 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df695c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df695f jne 0x12df6962 */
  if (!C.zf) goto L_12df6962;
  /* 12df6961 int3  */
  x86_unimpl("int3 @ 0x12df6961");
L_12df6962:;
  /* 12df6962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6964 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6966 jne 0x12df6942 */
  if (!C.zf) goto L_12df6942;
  /* 12df6968 jmp 0x12df69b8 */
  goto L_12df69b8;
L_12df696a:;
  /* 12df696a push 0x12e1c174 */
  push32((uint32_t)(0x12e1c174u));
  /* 12df696f push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df6974 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6976 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6978 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df697a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df697c call 0x12df3680 */
  push32(0x12df6981u); f_12df3680();
  /* 12df6981 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6984 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6987 jne 0x12df698a */
  if (!C.zf) goto L_12df698a;
  /* 12df6989 int3  */
  x86_unimpl("int3 @ 0x12df6989");
L_12df698a:;
  /* 12df698a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df698c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df698e jne 0x12df696a */
  if (!C.zf) goto L_12df696a;
  /* 12df6990 jmp 0x12df69b8 */
  goto L_12df69b8;
L_12df6992:;
  /* 12df6992 push 0x12e1c148 */
  push32((uint32_t)(0x12e1c148u));
  /* 12df6997 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df699c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df699e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df69a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df69a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df69a4 call 0x12df3680 */
  push32(0x12df69a9u); f_12df3680();
  /* 12df69a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df69ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df69af jne 0x12df69b2 */
  if (!C.zf) goto L_12df69b2;
  /* 12df69b1 int3  */
  x86_unimpl("int3 @ 0x12df69b1");
L_12df69b2:;
  /* 12df69b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df69b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df69b6 jne 0x12df6992 */
  if (!C.zf) goto L_12df6992;
L_12df69b8:;
  /* 12df69b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df69ba call 0x12df9b30 */
  push32(0x12df69bfu); f_12df9b30();
  /* 12df69bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df69c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df69c4 jmp 0x12df6bd8 */
  goto L_12df6bd8;
L_12df69c9:;
  /* 12df69c9 mov eax, dword ptr [0x12e206f4] */
  EAX = (r32((uint32_t)(0x12e206f4)));
  /* 12df69ce mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df69d1 jmp 0x12df69db */
  goto L_12df69db;
L_12df69d3:;
  /* 12df69d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df69d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df69d8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12df69db:;
  /* 12df69db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df69df je 0x12df6bcb */
  if (C.zf) goto L_12df6bcb;
  /* 12df69e5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12df69ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df69ef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12df69f2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df69f8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df69fb je 0x12df6a20 */
  if (C.zf) goto L_12df6a20;
  /* 12df69fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6a00 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6a04 je 0x12df6a20 */
  if (C.zf) goto L_12df6a20;
  /* 12df6a06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6a09 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12df6a0c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df6a12 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6a15 je 0x12df6a20 */
  if (C.zf) goto L_12df6a20;
  /* 12df6a17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6a1a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6a1e jne 0x12df6a38 */
  if (!C.zf) goto L_12df6a38;
L_12df6a20:;
  /* 12df6a20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6a23 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12df6a26 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df6a2c mov edx, dword ptr [ecx*4 + 0x12e1ea9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e1ea9c)));
  /* 12df6a33 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12df6a36 jmp 0x12df6a3f */
  goto L_12df6a3f;
L_12df6a38:;
  /* 12df6a38 mov dword ptr [ebp - 0x14], 0x12e1c140 */
  w32((uint32_t)(EBP + -0x14), (0x12e1c140u));
L_12df6a3f:;
  /* 12df6a3f push 4 */
  push32((uint32_t)(0x4u));
  /* 12df6a41 mov al, byte ptr [0x12e1ea98] */
  AL = (r8((uint32_t)(0x12e1ea98)));
  /* 12df6a46 push eax */
  push32((uint32_t)(EAX));
  /* 12df6a47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6a4a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6a4d push ecx */
  push32((uint32_t)(ECX));
  /* 12df6a4e call 0x12df67f0 */
  push32(0x12df6a53u); f_12df67f0();
  /* 12df6a53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6a56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6a58 jne 0x12df6a94 */
  if (!C.zf) goto L_12df6a94;
L_12df6a5a:;
  /* 12df6a5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6a5d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6a60 push edx */
  push32((uint32_t)(EDX));
  /* 12df6a61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6a64 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12df6a67 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6a68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df6a6b push edx */
  push32((uint32_t)(EDX));
  /* 12df6a6c push 0x12e1c01c */
  push32((uint32_t)(0x12e1c01cu));
  /* 12df6a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6a79 call 0x12df3680 */
  push32(0x12df6a7eu); f_12df3680();
  /* 12df6a7e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6a81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6a84 jne 0x12df6a87 */
  if (!C.zf) goto L_12df6a87;
  /* 12df6a86 int3  */
  x86_unimpl("int3 @ 0x12df6a86");
L_12df6a87:;
  /* 12df6a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6a89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6a8b jne 0x12df6a5a */
  if (!C.zf) goto L_12df6a5a;
  /* 12df6a8d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12df6a94:;
  /* 12df6a94 push 4 */
  push32((uint32_t)(0x4u));
  /* 12df6a96 mov cl, byte ptr [0x12e1ea98] */
  CL = (r8((uint32_t)(0x12e1ea98)));
  /* 12df6a9c push ecx */
  push32((uint32_t)(ECX));
  /* 12df6a9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6aa0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12df6aa3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6aa6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12df6aaa push edx */
  push32((uint32_t)(EDX));
  /* 12df6aab call 0x12df67f0 */
  push32(0x12df6ab0u); f_12df67f0();
  /* 12df6ab0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6ab5 jne 0x12df6af1 */
  if (!C.zf) goto L_12df6af1;
L_12df6ab7:;
  /* 12df6ab7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6aba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6abd push eax */
  push32((uint32_t)(EAX));
  /* 12df6abe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6ac1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12df6ac4 push edx */
  push32((uint32_t)(EDX));
  /* 12df6ac5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df6ac8 push eax */
  push32((uint32_t)(EAX));
  /* 12df6ac9 push 0x12e1bff0 */
  push32((uint32_t)(0x12e1bff0u));
  /* 12df6ace push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6ad0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6ad4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6ad6 call 0x12df3680 */
  push32(0x12df6adbu); f_12df3680();
  /* 12df6adb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6ade cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6ae1 jne 0x12df6ae4 */
  if (!C.zf) goto L_12df6ae4;
  /* 12df6ae3 int3  */
  x86_unimpl("int3 @ 0x12df6ae3");
L_12df6ae4:;
  /* 12df6ae4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df6ae6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df6ae8 jne 0x12df6ab7 */
  if (!C.zf) goto L_12df6ab7;
  /* 12df6aea mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12df6af1:;
  /* 12df6af1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6af4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6af8 jne 0x12df6b4a */
  if (!C.zf) goto L_12df6b4a;
  /* 12df6afa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6afd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12df6b00 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6b01 mov dl, byte ptr [0x12e1ea99] */
  DL = (r8((uint32_t)(0x12e1ea99)));
  /* 12df6b07 push edx */
  push32((uint32_t)(EDX));
  /* 12df6b08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6b0b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6b0e push eax */
  push32((uint32_t)(EAX));
  /* 12df6b0f call 0x12df67f0 */
  push32(0x12df6b14u); f_12df67f0();
  /* 12df6b14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6b19 jne 0x12df6b4a */
  if (!C.zf) goto L_12df6b4a;
L_12df6b1b:;
  /* 12df6b1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6b1e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6b21 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6b22 push 0x12e1c114 */
  push32((uint32_t)(0x12e1c114u));
  /* 12df6b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6b2f call 0x12df3680 */
  push32(0x12df6b34u); f_12df3680();
  /* 12df6b34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6b37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6b3a jne 0x12df6b3d */
  if (!C.zf) goto L_12df6b3d;
  /* 12df6b3c int3  */
  x86_unimpl("int3 @ 0x12df6b3c");
L_12df6b3d:;
  /* 12df6b3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df6b3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df6b41 jne 0x12df6b1b */
  if (!C.zf) goto L_12df6b1b;
  /* 12df6b43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12df6b4a:;
  /* 12df6b4a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6b4e jne 0x12df6bc6 */
  if (!C.zf) goto L_12df6bc6;
  /* 12df6b50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6b53 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6b57 je 0x12df6b8c */
  if (C.zf) goto L_12df6b8c;
L_12df6b59:;
  /* 12df6b59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6b5c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12df6b5f push edx */
  push32((uint32_t)(EDX));
  /* 12df6b60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6b63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12df6b66 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6b67 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df6b6a push edx */
  push32((uint32_t)(EDX));
  /* 12df6b6b push 0x12e1c0f4 */
  push32((uint32_t)(0x12e1c0f4u));
  /* 12df6b70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6b72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6b78 call 0x12df3680 */
  push32(0x12df6b7du); f_12df3680();
  /* 12df6b7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6b80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6b83 jne 0x12df6b86 */
  if (!C.zf) goto L_12df6b86;
  /* 12df6b85 int3  */
  x86_unimpl("int3 @ 0x12df6b85");
L_12df6b86:;
  /* 12df6b86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6b8a jne 0x12df6b59 */
  if (!C.zf) goto L_12df6b59;
L_12df6b8c:;
  /* 12df6b8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6b8f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12df6b92 push edx */
  push32((uint32_t)(EDX));
  /* 12df6b93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6b96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6b99 push eax */
  push32((uint32_t)(EAX));
  /* 12df6b9a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df6b9d push ecx */
  push32((uint32_t)(ECX));
  /* 12df6b9e push 0x12e1c0c8 */
  push32((uint32_t)(0x12e1c0c8u));
  /* 12df6ba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6bab call 0x12df3680 */
  push32(0x12df6bb0u); f_12df3680();
  /* 12df6bb0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6bb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6bb6 jne 0x12df6bb9 */
  if (!C.zf) goto L_12df6bb9;
  /* 12df6bb8 int3  */
  x86_unimpl("int3 @ 0x12df6bb8");
L_12df6bb9:;
  /* 12df6bb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df6bbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df6bbd jne 0x12df6b8c */
  if (!C.zf) goto L_12df6b8c;
  /* 12df6bbf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12df6bc6:;
  /* 12df6bc6 jmp 0x12df69d3 */
  goto L_12df69d3;
L_12df6bcb:;
  /* 12df6bcb push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6bcd call 0x12df9b30 */
  push32(0x12df6bd2u); f_12df9b30();
  /* 12df6bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6bd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12df6bd8:;
  /* 12df6bd8 pop edi */
  EDI = (pop32());
  /* 12df6bd9 pop esi */
  ESI = (pop32());
  /* 12df6bda pop ebx */
  EBX = (pop32());
  /* 12df6bdb mov esp, ebp */
  ESP = (EBP);
  /* 12df6bdd pop ebp */
  EBP = (pop32());
  /* 12df6bde ret  */
  ESPCHK(0x12df6880u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x12df6bf0 (34 bytes, 13 insns) */
void f_12df6bf0(void) {
  FTRACE(0x12df6bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12df6bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6bf4 mov eax, dword ptr [0x12e1ea8c] */
  EAX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df6bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df6bfc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6c00 je 0x12df6c0b */
  if (C.zf) goto L_12df6c0b;
  /* 12df6c02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6c05 mov dword ptr [0x12e1ea8c], ecx */
  w32((uint32_t)(0x12e1ea8c), (ECX));
L_12df6c0b:;
  /* 12df6c0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6c0e mov esp, ebp */
  ESP = (EBP);
  /* 12df6c10 pop ebp */
  EBP = (pop32());
  /* 12df6c11 ret  */
  ESPCHK(0x12df6bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c20 @ 0x12df6c20 (103 bytes, 38 insns) */
void f_12df6c20(void) {
  FTRACE(0x12df6c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6c21 mov ebp, esp */
  EBP = (ESP);
  /* 12df6c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6c24 mov eax, dword ptr [0x12e1ea8c] */
  EAX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df6c29 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12df6c2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6c2e jne 0x12df6c32 */
  if (!C.zf) goto L_12df6c32;
  /* 12df6c30 jmp 0x12df6c83 */
  goto L_12df6c83;
L_12df6c32:;
  /* 12df6c32 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6c34 call 0x12df9a90 */
  push32(0x12df6c39u); f_12df9a90();
  /* 12df6c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6c3c mov ecx, dword ptr [0x12e206f4] */
  ECX = (r32((uint32_t)(0x12e206f4)));
  /* 12df6c42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12df6c45 jmp 0x12df6c4f */
  goto L_12df6c4f;
L_12df6c47:;
  /* 12df6c47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6c4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df6c4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df6c4f:;
  /* 12df6c4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6c53 je 0x12df6c79 */
  if (C.zf) goto L_12df6c79;
  /* 12df6c55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6c58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12df6c5b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df6c61 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6c64 jne 0x12df6c77 */
  if (!C.zf) goto L_12df6c77;
  /* 12df6c66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df6c69 push eax */
  push32((uint32_t)(EAX));
  /* 12df6c6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6c6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6c70 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6c71 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12df6c74u);
  /* 12df6c74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df6c77:;
  /* 12df6c77 jmp 0x12df6c47 */
  goto L_12df6c47;
L_12df6c79:;
  /* 12df6c79 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6c7b call 0x12df9b30 */
  push32(0x12df6c80u); f_12df9b30();
  /* 12df6c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df6c83:;
  /* 12df6c83 mov esp, ebp */
  ESP = (EBP);
  /* 12df6c85 pop ebp */
  EBP = (pop32());
  /* 12df6c86 ret  */
  ESPCHK(0x12df6c20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12df6c90 (75 bytes, 28 insns) */
void f_12df6c90(void) {
  FTRACE(0x12df6c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6c91 mov ebp, esp */
  EBP = (ESP);
  /* 12df6c93 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6c94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6c98 je 0x12df6ccd */
  if (C.zf) goto L_12df6ccd;
  /* 12df6c9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df6c9d push eax */
  push32((uint32_t)(EAX));
  /* 12df6c9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6ca1 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6ca2 call dword ptr [0x12e2326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2326c))), 0x12df6ca8u);
  /* 12df6ca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6caa jne 0x12df6ccd */
  if (!C.zf) goto L_12df6ccd;
  /* 12df6cac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6cb0 je 0x12df6cc4 */
  if (C.zf) goto L_12df6cc4;
  /* 12df6cb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df6cb5 push edx */
  push32((uint32_t)(EDX));
  /* 12df6cb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6cb9 push eax */
  push32((uint32_t)(EAX));
  /* 12df6cba call dword ptr [0x12e23268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23268))), 0x12df6cc0u);
  /* 12df6cc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6cc2 jne 0x12df6ccd */
  if (!C.zf) goto L_12df6ccd;
L_12df6cc4:;
  /* 12df6cc4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12df6ccb jmp 0x12df6cd4 */
  goto L_12df6cd4;
L_12df6ccd:;
  /* 12df6ccd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12df6cd4:;
  /* 12df6cd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6cd7 mov esp, ebp */
  ESP = (EBP);
  /* 12df6cd9 pop ebp */
  EBP = (pop32());
  /* 12df6cda ret  */
  ESPCHK(0x12df6c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x12df6ce0 (134 bytes, 50 insns) */
void f_12df6ce0(void) {
  FTRACE(0x12df6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12df6ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6ce4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6ce8 jne 0x12df6cee */
  if (!C.zf) goto L_12df6cee;
  /* 12df6cea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6cec jmp 0x12df6d62 */
  goto L_12df6d62;
L_12df6cee:;
  /* 12df6cee push 1 */
  push32((uint32_t)(0x1u));
  /* 12df6cf0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12df6cf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6cf5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6cf8 push eax */
  push32((uint32_t)(EAX));
  /* 12df6cf9 call 0x12df6c90 */
  push32(0x12df6cfeu); f_12df6c90();
  /* 12df6cfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6d03 jne 0x12df6d09 */
  if (!C.zf) goto L_12df6d09;
  /* 12df6d05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6d07 jmp 0x12df6d62 */
  goto L_12df6d62;
L_12df6d09:;
  /* 12df6d09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6d0c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6d0f push ecx */
  push32((uint32_t)(ECX));
  /* 12df6d10 call 0x12dfa390 */
  push32(0x12df6d15u); f_12dfa390();
  /* 12df6d15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6d18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df6d1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6d1f je 0x12df6d36 */
  if (C.zf) goto L_12df6d36;
  /* 12df6d21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6d24 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6d27 push edx */
  push32((uint32_t)(EDX));
  /* 12df6d28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6d2b push eax */
  push32((uint32_t)(EAX));
  /* 12df6d2c call 0x12dfa3f0 */
  push32(0x12df6d31u); f_12dfa3f0();
  /* 12df6d31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6d34 jmp 0x12df6d62 */
  goto L_12df6d62;
L_12df6d36:;
  /* 12df6d36 mov ecx, dword ptr [0x12e206a8] */
  ECX = (r32((uint32_t)(0x12e206a8)));
  /* 12df6d3c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12df6d42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df6d44 je 0x12df6d4d */
  if (C.zf) goto L_12df6d4d;
  /* 12df6d46 mov eax, 1 */
  EAX = (0x1u);
  /* 12df6d4b jmp 0x12df6d62 */
  goto L_12df6d62;
L_12df6d4d:;
  /* 12df6d4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6d50 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6d53 push edx */
  push32((uint32_t)(EDX));
  /* 12df6d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6d56 mov eax, dword ptr [0x12e22044] */
  EAX = (r32((uint32_t)(0x12e22044)));
  /* 12df6d5b push eax */
  push32((uint32_t)(EAX));
  /* 12df6d5c call dword ptr [0x12e23270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23270))), 0x12df6d62u);
L_12df6d62:;
  /* 12df6d62 mov esp, ebp */
  ESP = (EBP);
  /* 12df6d64 pop ebp */
  EBP = (pop32());
  /* 12df6d65 ret  */
  ESPCHK(0x12df6ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d70 @ 0x12df6d70 (227 bytes, 80 insns) */
void f_12df6d70(void) {
  FTRACE(0x12df6d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6d71 mov ebp, esp */
  EBP = (ESP);
  /* 12df6d73 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6d77 push eax */
  push32((uint32_t)(EAX));
  /* 12df6d78 call 0x12df6ce0 */
  push32(0x12df6d7du); f_12df6ce0();
  /* 12df6d7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6d82 jne 0x12df6d8b */
  if (!C.zf) goto L_12df6d8b;
  /* 12df6d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6d86 jmp 0x12df6e4f */
  goto L_12df6e4f;
L_12df6d8b:;
  /* 12df6d8b push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6d8d call 0x12df9a90 */
  push32(0x12df6d92u); f_12df9a90();
  /* 12df6d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6d95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6d98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6d9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12df6d9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6da1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df6da4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df6da9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6dac je 0x12df6dd0 */
  if (C.zf) goto L_12df6dd0;
  /* 12df6dae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6db1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6db5 je 0x12df6dd0 */
  if (C.zf) goto L_12df6dd0;
  /* 12df6db7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6dba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df6dbd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df6dc2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6dc5 je 0x12df6dd0 */
  if (C.zf) goto L_12df6dd0;
  /* 12df6dc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6dca cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6dce jne 0x12df6e43 */
  if (!C.zf) goto L_12df6e43;
L_12df6dd0:;
  /* 12df6dd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df6dd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df6dd5 push edx */
  push32((uint32_t)(EDX));
  /* 12df6dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6dd9 push eax */
  push32((uint32_t)(EAX));
  /* 12df6dda call 0x12df6c90 */
  push32(0x12df6ddfu); f_12df6c90();
  /* 12df6ddf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6de2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6de4 je 0x12df6e43 */
  if (C.zf) goto L_12df6e43;
  /* 12df6de6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6de9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12df6dec cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6def jne 0x12df6e43 */
  if (!C.zf) goto L_12df6e43;
  /* 12df6df1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6df4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12df6df7 cmp ecx, dword ptr [0x12e1ea90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e1ea90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6dfd jg 0x12df6e43 */
  if ((!C.zf&&C.sf==C.of)) goto L_12df6e43;
  /* 12df6dff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6e03 je 0x12df6e10 */
  if (C.zf) goto L_12df6e10;
  /* 12df6e05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df6e08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6e0b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12df6e0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12df6e10:;
  /* 12df6e10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6e14 je 0x12df6e21 */
  if (C.zf) goto L_12df6e21;
  /* 12df6e16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df6e19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6e1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12df6e1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12df6e21:;
  /* 12df6e21 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6e25 je 0x12df6e32 */
  if (C.zf) goto L_12df6e32;
  /* 12df6e27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df6e2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6e2d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12df6e30 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12df6e32:;
  /* 12df6e32 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6e34 call 0x12df9b30 */
  push32(0x12df6e39u); f_12df9b30();
  /* 12df6e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6e3c mov eax, 1 */
  EAX = (0x1u);
  /* 12df6e41 jmp 0x12df6e4f */
  goto L_12df6e4f;
L_12df6e43:;
  /* 12df6e43 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6e45 call 0x12df9b30 */
  push32(0x12df6e4au); f_12df9b30();
  /* 12df6e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6e4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12df6e4f:;
  /* 12df6e4f mov esp, ebp */
  ESP = (EBP);
  /* 12df6e51 pop ebp */
  EBP = (pop32());
  /* 12df6e52 ret  */
  ESPCHK(0x12df6d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e60 @ 0x12df6e60 (28 bytes, 11 insns) */
void f_12df6e60(void) {
  FTRACE(0x12df6e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6e61 mov ebp, esp */
  EBP = (ESP);
  /* 12df6e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12df6e64 mov eax, dword ptr [0x12e22050] */
  EAX = (r32((uint32_t)(0x12e22050)));
  /* 12df6e69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df6e6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6e6f mov dword ptr [0x12e22050], ecx */
  w32((uint32_t)(0x12e22050), (ECX));
  /* 12df6e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6e78 mov esp, ebp */
  ESP = (EBP);
  /* 12df6e7a pop ebp */
  EBP = (pop32());
  /* 12df6e7b ret  */
  ESPCHK(0x12df6e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e80 @ 0x12df6e80 (362 bytes, 116 insns) */
void f_12df6e80(void) {
  FTRACE(0x12df6e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6e81 mov ebp, esp */
  EBP = (ESP);
  /* 12df6e83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6e86 push ebx */
  push32((uint32_t)(EBX));
  /* 12df6e87 push esi */
  push32((uint32_t)(ESI));
  /* 12df6e88 push edi */
  push32((uint32_t)(EDI));
  /* 12df6e89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6e8d jne 0x12df6eba */
  if (!C.zf) goto L_12df6eba;
L_12df6e8f:;
  /* 12df6e8f push 0x12e1c228 */
  push32((uint32_t)(0x12e1c228u));
  /* 12df6e94 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df6e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6ea1 call 0x12df3680 */
  push32(0x12df6ea6u); f_12df3680();
  /* 12df6ea6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6ea9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6eac jne 0x12df6eaf */
  if (!C.zf) goto L_12df6eaf;
  /* 12df6eae int3  */
  x86_unimpl("int3 @ 0x12df6eae");
L_12df6eaf:;
  /* 12df6eaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6eb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6eb3 jne 0x12df6e8f */
  if (!C.zf) goto L_12df6e8f;
  /* 12df6eb5 jmp 0x12df6fe3 */
  goto L_12df6fe3;
L_12df6eba:;
  /* 12df6eba push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6ebc call 0x12df9a90 */
  push32(0x12df6ec1u); f_12df9a90();
  /* 12df6ec1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6ec4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6ec7 mov edx, dword ptr [0x12e206f4] */
  EDX = (r32((uint32_t)(0x12e206f4)));
  /* 12df6ecd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12df6ecf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df6ed6 jmp 0x12df6ee1 */
  goto L_12df6ee1;
L_12df6ed8:;
  /* 12df6ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6edb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6ede mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df6ee1:;
  /* 12df6ee1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6ee5 jge 0x12df6f05 */
  if ((C.sf==C.of)) goto L_12df6f05;
  /* 12df6ee7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6eea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6eed mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12df6ef5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df6ef8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6efb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12df6f03 jmp 0x12df6ed8 */
  goto L_12df6ed8;
L_12df6f05:;
  /* 12df6f05 mov edx, dword ptr [0x12e206f4] */
  EDX = (r32((uint32_t)(0x12e206f4)));
  /* 12df6f0b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12df6f0e jmp 0x12df6f18 */
  goto L_12df6f18;
L_12df6f10:;
  /* 12df6f10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6f13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df6f15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12df6f18:;
  /* 12df6f18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6f1c je 0x12df6fc1 */
  if (C.zf) goto L_12df6fc1;
  /* 12df6f22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6f25 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df6f28 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df6f2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6f2f jl 0x12df6f97 */
  if ((C.sf!=C.of)) goto L_12df6f97;
  /* 12df6f31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6f34 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12df6f37 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df6f3d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6f40 jge 0x12df6f97 */
  if ((C.sf==C.of)) goto L_12df6f97;
  /* 12df6f42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6f45 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12df6f48 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df6f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6f51 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12df6f55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6f58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6f5b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12df6f5e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df6f64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6f67 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12df6f6b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6f6e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df6f71 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df6f76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6f79 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12df6f7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6f80 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6f83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6f86 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12df6f89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df6f8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6f91 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12df6f95 jmp 0x12df6fbc */
  goto L_12df6fbc;
L_12df6f97:;
  /* 12df6f97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df6f9a push edx */
  push32((uint32_t)(EDX));
  /* 12df6f9b push 0x12e1c204 */
  push32((uint32_t)(0x12e1c204u));
  /* 12df6fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df6fa8 call 0x12df3680 */
  push32(0x12df6fadu); f_12df3680();
  /* 12df6fad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df6fb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df6fb3 jne 0x12df6fb6 */
  if (!C.zf) goto L_12df6fb6;
  /* 12df6fb5 int3  */
  x86_unimpl("int3 @ 0x12df6fb5");
L_12df6fb6:;
  /* 12df6fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df6fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df6fba jne 0x12df6f97 */
  if (!C.zf) goto L_12df6f97;
L_12df6fbc:;
  /* 12df6fbc jmp 0x12df6f10 */
  goto L_12df6f10;
L_12df6fc1:;
  /* 12df6fc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6fc4 mov edx, dword ptr [0x12e206fc] */
  EDX = (r32((uint32_t)(0x12e206fc)));
  /* 12df6fca mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12df6fcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df6fd0 mov ecx, dword ptr [0x12e206f0] */
  ECX = (r32((uint32_t)(0x12e206f0)));
  /* 12df6fd6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12df6fd9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df6fdb call 0x12df9b30 */
  push32(0x12df6fe0u); f_12df9b30();
  /* 12df6fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df6fe3:;
  /* 12df6fe3 pop edi */
  EDI = (pop32());
  /* 12df6fe4 pop esi */
  ESI = (pop32());
  /* 12df6fe5 pop ebx */
  EBX = (pop32());
  /* 12df6fe6 mov esp, ebp */
  ESP = (EBP);
  /* 12df6fe8 pop ebp */
  EBP = (pop32());
  /* 12df6fe9 ret  */
  ESPCHK(0x12df6e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ff0 @ 0x12df6ff0 (291 bytes, 95 insns) */
void f_12df6ff0(void) {
  FTRACE(0x12df6ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df6ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df6ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12df6ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df6ff6 push ebx */
  push32((uint32_t)(EBX));
  /* 12df6ff7 push esi */
  push32((uint32_t)(ESI));
  /* 12df6ff8 push edi */
  push32((uint32_t)(EDI));
  /* 12df6ff9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12df7000 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7004 je 0x12df7012 */
  if (C.zf) goto L_12df7012;
  /* 12df7006 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df700a je 0x12df7012 */
  if (C.zf) goto L_12df7012;
  /* 12df700c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7010 jne 0x12df7040 */
  if (!C.zf) goto L_12df7040;
L_12df7012:;
  /* 12df7012 push 0x12e1c250 */
  push32((uint32_t)(0x12e1c250u));
  /* 12df7017 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df701c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df701e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7020 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7022 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7024 call 0x12df3680 */
  push32(0x12df7029u); f_12df3680();
  /* 12df7029 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df702c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df702f jne 0x12df7032 */
  if (!C.zf) goto L_12df7032;
  /* 12df7031 int3  */
  x86_unimpl("int3 @ 0x12df7031");
L_12df7032:;
  /* 12df7032 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df7036 jne 0x12df7012 */
  if (!C.zf) goto L_12df7012;
  /* 12df7038 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df703b jmp 0x12df710c */
  goto L_12df710c;
L_12df7040:;
  /* 12df7040 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df7047 jmp 0x12df7052 */
  goto L_12df7052;
L_12df7049:;
  /* 12df7049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df704c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df704f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12df7052:;
  /* 12df7052 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7056 jge 0x12df70dc */
  if ((C.sf==C.of)) goto L_12df70dc;
  /* 12df705c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df705f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7062 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7065 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12df7068 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12df706c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df7076 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12df707a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df707d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7080 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7083 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12df7086 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12df708a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df708e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df7094 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12df7098 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df709b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df709e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df70a3 jne 0x12df70b2 */
  if (!C.zf) goto L_12df70b2;
  /* 12df70a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df70a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df70ab cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df70b0 je 0x12df70d7 */
  if (C.zf) goto L_12df70d7;
L_12df70b2:;
  /* 12df70b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df70b6 je 0x12df70d7 */
  if (C.zf) goto L_12df70d7;
  /* 12df70b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df70bc jne 0x12df70d0 */
  if (!C.zf) goto L_12df70d0;
  /* 12df70be cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df70c2 jne 0x12df70d7 */
  if (!C.zf) goto L_12df70d7;
  /* 12df70c4 mov eax, dword ptr [0x12e1ea8c] */
  EAX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df70c9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12df70cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df70ce je 0x12df70d7 */
  if (C.zf) goto L_12df70d7;
L_12df70d0:;
  /* 12df70d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12df70d7:;
  /* 12df70d7 jmp 0x12df7049 */
  goto L_12df7049;
L_12df70dc:;
  /* 12df70dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df70df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df70e2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12df70e5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df70e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df70eb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12df70ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df70f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df70f4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12df70f7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df70fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df70fd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12df7100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df7103 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12df7109 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12df710c:;
  /* 12df710c pop edi */
  EDI = (pop32());
  /* 12df710d pop esi */
  ESI = (pop32());
  /* 12df710e pop ebx */
  EBX = (pop32());
  /* 12df710f mov esp, ebp */
  ESP = (EBP);
  /* 12df7111 pop ebp */
  EBP = (pop32());
  /* 12df7112 ret  */
  ESPCHK(0x12df6ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007120 @ 0x12df7120 (697 bytes, 253 insns) */
void f_12df7120(void) {
  FTRACE(0x12df7120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df7120 push ebp */
  push32((uint32_t)(EBP));
  /* 12df7121 mov ebp, esp */
  EBP = (ESP);
  /* 12df7123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7126 push ebx */
  push32((uint32_t)(EBX));
  /* 12df7127 push esi */
  push32((uint32_t)(ESI));
  /* 12df7128 push edi */
  push32((uint32_t)(EDI));
  /* 12df7129 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12df7130 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df7132 call 0x12df9a90 */
  push32(0x12df7137u); f_12df9a90();
  /* 12df7137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df713a:;
  /* 12df713a push 0x12e1c348 */
  push32((uint32_t)(0x12e1c348u));
  /* 12df713f push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df7144 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7146 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7148 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df714a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df714c call 0x12df3680 */
  push32(0x12df7151u); f_12df3680();
  /* 12df7151 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7154 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7157 jne 0x12df715a */
  if (!C.zf) goto L_12df715a;
  /* 12df7159 int3  */
  x86_unimpl("int3 @ 0x12df7159");
L_12df715a:;
  /* 12df715a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df715c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df715e jne 0x12df713a */
  if (!C.zf) goto L_12df713a;
  /* 12df7160 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7164 je 0x12df716e */
  if (C.zf) goto L_12df716e;
  /* 12df7166 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df7169 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df716b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12df716e:;
  /* 12df716e mov eax, dword ptr [0x12e206f4] */
  EAX = (r32((uint32_t)(0x12e206f4)));
  /* 12df7173 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df7176 jmp 0x12df7180 */
  goto L_12df7180;
L_12df7178:;
  /* 12df7178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df717b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df717d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12df7180:;
  /* 12df7180 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7184 je 0x12df73a2 */
  if (C.zf) goto L_12df73a2;
  /* 12df718a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df718d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7190 je 0x12df73a2 */
  if (C.zf) goto L_12df73a2;
  /* 12df7196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7199 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12df719c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df71a2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df71a5 je 0x12df71d4 */
  if (C.zf) goto L_12df71d4;
  /* 12df71a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df71aa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12df71ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df71b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df71b5 je 0x12df71d4 */
  if (C.zf) goto L_12df71d4;
  /* 12df71b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df71ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df71bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df71c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df71c5 jne 0x12df71d9 */
  if (!C.zf) goto L_12df71d9;
  /* 12df71c7 mov ecx, dword ptr [0x12e1ea8c] */
  ECX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df71cd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12df71d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df71d2 jne 0x12df71d9 */
  if (!C.zf) goto L_12df71d9;
L_12df71d4:;
  /* 12df71d4 jmp 0x12df739d */
  goto L_12df739d;
L_12df71d9:;
  /* 12df71d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df71dc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df71e0 je 0x12df7252 */
  if (C.zf) goto L_12df7252;
  /* 12df71e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df71e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df71e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df71e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12df71ec push ecx */
  push32((uint32_t)(ECX));
  /* 12df71ed call 0x12df6c90 */
  push32(0x12df71f2u); f_12df6c90();
  /* 12df71f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df71f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df71f7 jne 0x12df7223 */
  if (!C.zf) goto L_12df7223;
L_12df71f9:;
  /* 12df71f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df71fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12df71ff push eax */
  push32((uint32_t)(EAX));
  /* 12df7200 push 0x12e1c334 */
  push32((uint32_t)(0x12e1c334u));
  /* 12df7205 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7207 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7209 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df720b push 0 */
  push32((uint32_t)(0x0u));
  /* 12df720d call 0x12df3680 */
  push32(0x12df7212u); f_12df3680();
  /* 12df7212 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7215 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7218 jne 0x12df721b */
  if (!C.zf) goto L_12df721b;
  /* 12df721a int3  */
  x86_unimpl("int3 @ 0x12df721a");
L_12df721b:;
  /* 12df721b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df721d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df721f jne 0x12df71f9 */
  if (!C.zf) goto L_12df71f9;
  /* 12df7221 jmp 0x12df7252 */
  goto L_12df7252;
L_12df7223:;
  /* 12df7223 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7226 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12df7229 push eax */
  push32((uint32_t)(EAX));
  /* 12df722a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df722d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12df7230 push edx */
  push32((uint32_t)(EDX));
  /* 12df7231 push 0x12e1c328 */
  push32((uint32_t)(0x12e1c328u));
  /* 12df7236 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7238 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df723a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df723c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df723e call 0x12df3680 */
  push32(0x12df7243u); f_12df3680();
  /* 12df7243 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7246 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7249 jne 0x12df724c */
  if (!C.zf) goto L_12df724c;
  /* 12df724b int3  */
  x86_unimpl("int3 @ 0x12df724b");
L_12df724c:;
  /* 12df724c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df724e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df7250 jne 0x12df7223 */
  if (!C.zf) goto L_12df7223;
L_12df7252:;
  /* 12df7252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7255 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12df7258 push edx */
  push32((uint32_t)(EDX));
  /* 12df7259 push 0x12e1c320 */
  push32((uint32_t)(0x12e1c320u));
  /* 12df725e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7260 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7262 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7264 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7266 call 0x12df3680 */
  push32(0x12df726bu); f_12df3680();
  /* 12df726b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df726e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7271 jne 0x12df7274 */
  if (!C.zf) goto L_12df7274;
  /* 12df7273 int3  */
  x86_unimpl("int3 @ 0x12df7273");
L_12df7274:;
  /* 12df7274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df7278 jne 0x12df7252 */
  if (!C.zf) goto L_12df7252;
  /* 12df727a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df727d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12df7280 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df7286 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7289 jne 0x12df72fc */
  if (!C.zf) goto L_12df72fc;
L_12df728b:;
  /* 12df728b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df728e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12df7291 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7292 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7295 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df7298 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12df729b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df72a0 push eax */
  push32((uint32_t)(EAX));
  /* 12df72a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df72a4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df72a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12df72a8 push 0x12e1c2ec */
  push32((uint32_t)(0x12e1c2ecu));
  /* 12df72ad push 0 */
  push32((uint32_t)(0x0u));
  /* 12df72af push 0 */
  push32((uint32_t)(0x0u));
  /* 12df72b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df72b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df72b5 call 0x12df3680 */
  push32(0x12df72bau); f_12df3680();
  /* 12df72ba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df72bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df72c0 jne 0x12df72c3 */
  if (!C.zf) goto L_12df72c3;
  /* 12df72c2 int3  */
  x86_unimpl("int3 @ 0x12df72c2");
L_12df72c3:;
  /* 12df72c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df72c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df72c7 jne 0x12df728b */
  if (!C.zf) goto L_12df728b;
  /* 12df72c9 cmp dword ptr [0x12e22050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e22050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df72d0 je 0x12df72eb */
  if (C.zf) goto L_12df72eb;
  /* 12df72d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df72d5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12df72d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12df72d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df72dc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df72df push edx */
  push32((uint32_t)(EDX));
  /* 12df72e0 call dword ptr [0x12e22050] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e22050))), 0x12df72e6u);
  /* 12df72e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df72e9 jmp 0x12df72f7 */
  goto L_12df72f7;
L_12df72eb:;
  /* 12df72eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df72ee push eax */
  push32((uint32_t)(EAX));
  /* 12df72ef call 0x12df73e0 */
  push32(0x12df72f4u); f_12df73e0();
  /* 12df72f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df72f7:;
  /* 12df72f7 jmp 0x12df739d */
  goto L_12df739d;
L_12df72fc:;
  /* 12df72fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df72ff cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7303 jne 0x12df7342 */
  if (!C.zf) goto L_12df7342;
L_12df7305:;
  /* 12df7305 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7308 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12df730b push eax */
  push32((uint32_t)(EAX));
  /* 12df730c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df730f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7312 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7313 push 0x12e1c2c4 */
  push32((uint32_t)(0x12e1c2c4u));
  /* 12df7318 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df731a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df731c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df731e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7320 call 0x12df3680 */
  push32(0x12df7325u); f_12df3680();
  /* 12df7325 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7328 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df732b jne 0x12df732e */
  if (!C.zf) goto L_12df732e;
  /* 12df732d int3  */
  x86_unimpl("int3 @ 0x12df732d");
L_12df732e:;
  /* 12df732e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df7330 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df7332 jne 0x12df7305 */
  if (!C.zf) goto L_12df7305;
  /* 12df7334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7337 push eax */
  push32((uint32_t)(EAX));
  /* 12df7338 call 0x12df73e0 */
  push32(0x12df733du); f_12df73e0();
  /* 12df733d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7340 jmp 0x12df739d */
  goto L_12df739d;
L_12df7342:;
  /* 12df7342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7345 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12df7348 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df734e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7351 jne 0x12df739d */
  if (!C.zf) goto L_12df739d;
L_12df7353:;
  /* 12df7353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7356 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12df7359 push ecx */
  push32((uint32_t)(ECX));
  /* 12df735a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df735d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12df7360 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12df7363 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df7368 push eax */
  push32((uint32_t)(EAX));
  /* 12df7369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df736c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df736f push ecx */
  push32((uint32_t)(ECX));
  /* 12df7370 push 0x12e1c290 */
  push32((uint32_t)(0x12e1c290u));
  /* 12df7375 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7377 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7379 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df737b push 0 */
  push32((uint32_t)(0x0u));
  /* 12df737d call 0x12df3680 */
  push32(0x12df7382u); f_12df3680();
  /* 12df7382 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7385 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7388 jne 0x12df738b */
  if (!C.zf) goto L_12df738b;
  /* 12df738a int3  */
  x86_unimpl("int3 @ 0x12df738a");
L_12df738b:;
  /* 12df738b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df738d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df738f jne 0x12df7353 */
  if (!C.zf) goto L_12df7353;
  /* 12df7391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7394 push eax */
  push32((uint32_t)(EAX));
  /* 12df7395 call 0x12df73e0 */
  push32(0x12df739au); f_12df73e0();
  /* 12df739a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df739d:;
  /* 12df739d jmp 0x12df7178 */
  goto L_12df7178;
L_12df73a2:;
  /* 12df73a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df73a4 call 0x12df9b30 */
  push32(0x12df73a9u); f_12df9b30();
  /* 12df73a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df73ac:;
  /* 12df73ac push 0x12e1c278 */
  push32((uint32_t)(0x12e1c278u));
  /* 12df73b1 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df73b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df73b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df73ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12df73bc push 0 */
  push32((uint32_t)(0x0u));
  /* 12df73be call 0x12df3680 */
  push32(0x12df73c3u); f_12df3680();
  /* 12df73c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df73c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df73c9 jne 0x12df73cc */
  if (!C.zf) goto L_12df73cc;
  /* 12df73cb int3  */
  x86_unimpl("int3 @ 0x12df73cb");
L_12df73cc:;
  /* 12df73cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df73ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df73d0 jne 0x12df73ac */
  if (!C.zf) goto L_12df73ac;
  /* 12df73d2 pop edi */
  EDI = (pop32());
  /* 12df73d3 pop esi */
  ESI = (pop32());
  /* 12df73d4 pop ebx */
  EBX = (pop32());
  /* 12df73d5 mov esp, ebp */
  ESP = (EBP);
  /* 12df73d7 pop ebp */
  EBP = (pop32());
  /* 12df73d8 ret  */
  ESPCHK(0x12df7120u, _esp0);
  ESP += 4; return;
}

/* FUN_100073e0 @ 0x12df73e0 (276 bytes, 89 insns) */
void f_12df73e0(void) {
  FTRACE(0x12df73e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df73e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df73e1 mov ebp, esp */
  EBP = (ESP);
  /* 12df73e3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df73e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12df73e7 push esi */
  push32((uint32_t)(ESI));
  /* 12df73e8 push edi */
  push32((uint32_t)(EDI));
  /* 12df73e9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12df73f0 jmp 0x12df73fb */
  goto L_12df73fb;
L_12df73f2:;
  /* 12df73f2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12df73f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df73f8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12df73fb:;
  /* 12df73fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df73fe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7402 jge 0x12df740f */
  if ((C.sf==C.of)) goto L_12df740f;
  /* 12df7404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df7407 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12df740a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12df740d jmp 0x12df7416 */
  goto L_12df7416;
L_12df740f:;
  /* 12df740f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12df7416:;
  /* 12df7416 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12df7419 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df741c jge 0x12df74bc */
  if ((C.sf==C.of)) goto L_12df74bc;
  /* 12df7422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df7425 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7428 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12df742b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12df742e cmp dword ptr [0x12e1f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e1f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7435 jle 0x12df7453 */
  if ((C.zf||C.sf!=C.of)) goto L_12df7453;
  /* 12df7437 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12df743c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12df743f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df7445 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7446 call 0x12dfbfa0 */
  push32(0x12df744bu); f_12dfbfa0();
  /* 12df744b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df744e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12df7451 jmp 0x12df7470 */
  goto L_12df7470;
L_12df7453:;
  /* 12df7453 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12df7456 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df745c mov eax, dword ptr [0x12e1ede8] */
  EAX = (r32((uint32_t)(0x12e1ede8)));
  /* 12df7461 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df7463 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12df7467 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12df746d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12df7470:;
  /* 12df7470 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7474 je 0x12df7484 */
  if (C.zf) goto L_12df7484;
  /* 12df7476 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12df7479 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df747f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12df7482 jmp 0x12df748b */
  goto L_12df748b;
L_12df7484:;
  /* 12df7484 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12df748b:;
  /* 12df748b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12df748e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12df7491 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12df7495 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12df7498 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df749e push edx */
  push32((uint32_t)(EDX));
  /* 12df749f push 0x12e1c36c */
  push32((uint32_t)(0x12e1c36cu));
  /* 12df74a4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12df74a7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df74aa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12df74ae push ecx */
  push32((uint32_t)(ECX));
  /* 12df74af call 0x12df31f0 */
  push32(0x12df74b4u); f_12df31f0();
  /* 12df74b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df74b7 jmp 0x12df73f2 */
  goto L_12df73f2;
L_12df74bc:;
  /* 12df74bc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12df74bf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12df74c4:;
  /* 12df74c4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12df74c7 push eax */
  push32((uint32_t)(EAX));
  /* 12df74c8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12df74cb push ecx */
  push32((uint32_t)(ECX));
  /* 12df74cc push 0x12e1c35c */
  push32((uint32_t)(0x12e1c35cu));
  /* 12df74d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df74d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df74d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df74d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df74d9 call 0x12df3680 */
  push32(0x12df74deu); f_12df3680();
  /* 12df74de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df74e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df74e4 jne 0x12df74e7 */
  if (!C.zf) goto L_12df74e7;
  /* 12df74e6 int3  */
  x86_unimpl("int3 @ 0x12df74e6");
L_12df74e7:;
  /* 12df74e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df74e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df74eb jne 0x12df74c4 */
  if (!C.zf) goto L_12df74c4;
  /* 12df74ed pop edi */
  EDI = (pop32());
  /* 12df74ee pop esi */
  ESI = (pop32());
  /* 12df74ef pop ebx */
  EBX = (pop32());
  /* 12df74f0 mov esp, ebp */
  ESP = (EBP);
  /* 12df74f2 pop ebp */
  EBP = (pop32());
  /* 12df74f3 ret  */
  ESPCHK(0x12df73e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x12df7500 (116 bytes, 46 insns) */
void f_12df7500(void) {
  FTRACE(0x12df7500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df7500 push ebp */
  push32((uint32_t)(EBP));
  /* 12df7501 mov ebp, esp */
  EBP = (ESP);
  /* 12df7503 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7506 push ebx */
  push32((uint32_t)(EBX));
  /* 12df7507 push esi */
  push32((uint32_t)(ESI));
  /* 12df7508 push edi */
  push32((uint32_t)(EDI));
  /* 12df7509 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12df750c push eax */
  push32((uint32_t)(EAX));
  /* 12df750d call 0x12df6e80 */
  push32(0x12df7512u); f_12df6e80();
  /* 12df7512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7515 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7519 jne 0x12df7534 */
  if (!C.zf) goto L_12df7534;
  /* 12df751b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df751f jne 0x12df7534 */
  if (!C.zf) goto L_12df7534;
  /* 12df7521 mov ecx, dword ptr [0x12e1ea8c] */
  ECX = (r32((uint32_t)(0x12e1ea8c)));
  /* 12df7527 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12df752a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df752c je 0x12df756b */
  if (C.zf) goto L_12df756b;
  /* 12df752e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7532 je 0x12df756b */
  if (C.zf) goto L_12df756b;
L_12df7534:;
  /* 12df7534 push 0x12e1c374 */
  push32((uint32_t)(0x12e1c374u));
  /* 12df7539 push 0x12e1bd40 */
  push32((uint32_t)(0x12e1bd40u));
  /* 12df753e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7540 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7542 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7544 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7546 call 0x12df3680 */
  push32(0x12df754bu); f_12df3680();
  /* 12df754b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df754e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7551 jne 0x12df7554 */
  if (!C.zf) goto L_12df7554;
  /* 12df7553 int3  */
  x86_unimpl("int3 @ 0x12df7553");
L_12df7554:;
  /* 12df7554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df7556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df7558 jne 0x12df7534 */
  if (!C.zf) goto L_12df7534;
  /* 12df755a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df755c call 0x12df7120 */
  push32(0x12df7561u); f_12df7120();
  /* 12df7561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7564 mov eax, 1 */
  EAX = (0x1u);
  /* 12df7569 jmp 0x12df756d */
  goto L_12df756d;
L_12df756b:;
  /* 12df756b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12df756d:;
  /* 12df756d pop edi */
  EDI = (pop32());
  /* 12df756e pop esi */
  ESI = (pop32());
  /* 12df756f pop ebx */
  EBX = (pop32());
  /* 12df7570 mov esp, ebp */
  ESP = (EBP);
  /* 12df7572 pop ebp */
  EBP = (pop32());
  /* 12df7573 ret  */
  ESPCHK(0x12df7500u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x12df7580 (197 bytes, 79 insns) */
void f_12df7580(void) {
  FTRACE(0x12df7580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df7580 push ebp */
  push32((uint32_t)(EBP));
  /* 12df7581 mov ebp, esp */
  EBP = (ESP);
  /* 12df7583 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7584 push ebx */
  push32((uint32_t)(EBX));
  /* 12df7585 push esi */
  push32((uint32_t)(ESI));
  /* 12df7586 push edi */
  push32((uint32_t)(EDI));
  /* 12df7587 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df758b jne 0x12df7592 */
  if (!C.zf) goto L_12df7592;
  /* 12df758d jmp 0x12df763e */
  goto L_12df763e;
L_12df7592:;
  /* 12df7592 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df7599 jmp 0x12df75a4 */
  goto L_12df75a4;
L_12df759b:;
  /* 12df759b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df759e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df75a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df75a4:;
  /* 12df75a4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df75a8 jge 0x12df75ee */
  if ((C.sf==C.of)) goto L_12df75ee;
L_12df75aa:;
  /* 12df75aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df75ad mov edx, dword ptr [ecx*4 + 0x12e1ea9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e1ea9c)));
  /* 12df75b4 push edx */
  push32((uint32_t)(EDX));
  /* 12df75b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df75b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df75bb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12df75bf push edx */
  push32((uint32_t)(EDX));
  /* 12df75c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df75c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df75c6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12df75ca push edx */
  push32((uint32_t)(EDX));
  /* 12df75cb push 0x12e1c3d0 */
  push32((uint32_t)(0x12e1c3d0u));
  /* 12df75d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df75d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df75d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df75d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df75d8 call 0x12df3680 */
  push32(0x12df75ddu); f_12df3680();
  /* 12df75dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df75e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df75e3 jne 0x12df75e6 */
  if (!C.zf) goto L_12df75e6;
  /* 12df75e5 int3  */
  x86_unimpl("int3 @ 0x12df75e5");
L_12df75e6:;
  /* 12df75e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df75e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df75ea jne 0x12df75aa */
  if (!C.zf) goto L_12df75aa;
  /* 12df75ec jmp 0x12df759b */
  goto L_12df759b;
L_12df75ee:;
  /* 12df75ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df75f1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12df75f4 push edx */
  push32((uint32_t)(EDX));
  /* 12df75f5 push 0x12e1c3ac */
  push32((uint32_t)(0x12e1c3acu));
  /* 12df75fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12df75fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12df75fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7600 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7602 call 0x12df3680 */
  push32(0x12df7607u); f_12df3680();
  /* 12df7607 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df760a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df760d jne 0x12df7610 */
  if (!C.zf) goto L_12df7610;
  /* 12df760f int3  */
  x86_unimpl("int3 @ 0x12df760f");
L_12df7610:;
  /* 12df7610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df7614 jne 0x12df75ee */
  if (!C.zf) goto L_12df75ee;
L_12df7616:;
  /* 12df7616 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df7619 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12df761c push edx */
  push32((uint32_t)(EDX));
  /* 12df761d push 0x12e1c38c */
  push32((uint32_t)(0x12e1c38cu));
  /* 12df7622 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7624 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7626 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7628 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df762a call 0x12df3680 */
  push32(0x12df762fu); f_12df3680();
  /* 12df762f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7632 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7635 jne 0x12df7638 */
  if (!C.zf) goto L_12df7638;
  /* 12df7637 int3  */
  x86_unimpl("int3 @ 0x12df7637");
L_12df7638:;
  /* 12df7638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df763a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df763c jne 0x12df7616 */
  if (!C.zf) goto L_12df7616;
L_12df763e:;
  /* 12df763e pop edi */
  EDI = (pop32());
  /* 12df763f pop esi */
  ESI = (pop32());
  /* 12df7640 pop ebx */
  EBX = (pop32());
  /* 12df7641 mov esp, ebp */
  ESP = (EBP);
  /* 12df7643 pop ebp */
  EBP = (pop32());
  /* 12df7644 ret  */
  ESPCHK(0x12df7580u, _esp0);
  ESP += 4; return;
}

/* FUN_10007650 @ 0x12df7650 (329 bytes, 102 insns) */
void f_12df7650(void) {
  FTRACE(0x12df7650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df7650 push ebp */
  push32((uint32_t)(EBP));
  /* 12df7651 mov ebp, esp */
  EBP = (ESP);
  /* 12df7653 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7656 cmp dword ptr [0x12e221b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e221b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df765d jne 0x12df7664 */
  if (!C.zf) goto L_12df7664;
  /* 12df765f call 0x12dfc840 */
  push32(0x12df7664u); f_12dfc840();
L_12df7664:;
  /* 12df7664 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12df766b mov eax, dword ptr [0x12e20690] */
  EAX = (r32((uint32_t)(0x12e20690)));
  /* 12df7670 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df7673:;
  /* 12df7673 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7676 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12df7679 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df767b je 0x12df76a9 */
  if (C.zf) goto L_12df76a9;
  /* 12df767d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7680 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12df7683 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7686 je 0x12df7691 */
  if (C.zf) goto L_12df7691;
  /* 12df7688 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df768b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df768e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12df7691:;
  /* 12df7691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7694 push eax */
  push32((uint32_t)(EAX));
  /* 12df7695 call 0x12df8510 */
  push32(0x12df769au); f_12df8510();
  /* 12df769a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df769d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df76a0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12df76a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df76a7 jmp 0x12df7673 */
  goto L_12df7673;
L_12df76a9:;
  /* 12df76a9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12df76ab push 0x12e1c3f0 */
  push32((uint32_t)(0x12e1c3f0u));
  /* 12df76b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df76b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df76b5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12df76bc push ecx */
  push32((uint32_t)(ECX));
  /* 12df76bd call 0x12df56e0 */
  push32(0x12df76c2u); f_12df56e0();
  /* 12df76c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df76c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df76c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df76cb mov dword ptr [0x12e206c4], edx */
  w32((uint32_t)(0x12e206c4), (EDX));
  /* 12df76d1 cmp dword ptr [0x12e206c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e206c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df76d8 jne 0x12df76e4 */
  if (!C.zf) goto L_12df76e4;
  /* 12df76da push 9 */
  push32((uint32_t)(0x9u));
  /* 12df76dc call 0x12df3530 */
  push32(0x12df76e1u); f_12df3530();
  /* 12df76e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df76e4:;
  /* 12df76e4 mov eax, dword ptr [0x12e20690] */
  EAX = (r32((uint32_t)(0x12e20690)));
  /* 12df76e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df76ec jmp 0x12df76f7 */
  goto L_12df76f7;
L_12df76ee:;
  /* 12df76ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df76f1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df76f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12df76f7:;
  /* 12df76f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df76fa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12df76fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df76ff je 0x12df7767 */
  if (C.zf) goto L_12df7767;
  /* 12df7701 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7704 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7705 call 0x12df8510 */
  push32(0x12df770au); f_12df8510();
  /* 12df770a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df770d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7710 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12df7713 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7716 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12df7719 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df771c je 0x12df7765 */
  if (C.zf) goto L_12df7765;
  /* 12df771e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12df7720 push 0x12e1c3f0 */
  push32((uint32_t)(0x12e1c3f0u));
  /* 12df7725 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df7727 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df772a push ecx */
  push32((uint32_t)(ECX));
  /* 12df772b call 0x12df56e0 */
  push32(0x12df7730u); f_12df56e0();
  /* 12df7730 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7733 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7736 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12df7738 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df773b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df773e jne 0x12df774a */
  if (!C.zf) goto L_12df774a;
  /* 12df7740 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df7742 call 0x12df3530 */
  push32(0x12df7747u); f_12df3530();
  /* 12df7747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df774a:;
  /* 12df774a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df774d push ecx */
  push32((uint32_t)(ECX));
  /* 12df774e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7751 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df7753 push eax */
  push32((uint32_t)(EAX));
  /* 12df7754 call 0x12df8690 */
  push32(0x12df7759u); f_12df8690();
  /* 12df7759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df775c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df775f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7762 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12df7765:;
  /* 12df7765 jmp 0x12df76ee */
  goto L_12df76ee;
L_12df7767:;
  /* 12df7767 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df7769 mov edx, dword ptr [0x12e20690] */
  EDX = (r32((uint32_t)(0x12e20690)));
  /* 12df776f push edx */
  push32((uint32_t)(EDX));
  /* 12df7770 call 0x12df6170 */
  push32(0x12df7775u); f_12df6170();
  /* 12df7775 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7778 mov dword ptr [0x12e20690], 0 */
  w32((uint32_t)(0x12e20690), (0x0u));
  /* 12df7782 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7785 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12df778b mov dword ptr [0x12e221a0], 1 */
  w32((uint32_t)(0x12e221a0), (0x1u));
  /* 12df7795 mov esp, ebp */
  ESP = (EBP);
  /* 12df7797 pop ebp */
  EBP = (pop32());
  /* 12df7798 ret  */
  ESPCHK(0x12df7650u, _esp0);
  ESP += 4; return;
}

/* FUN_100077a0 @ 0x12df77a0 (216 bytes, 69 insns) */
void f_12df77a0(void) {
  FTRACE(0x12df77a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df77a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df77a1 mov ebp, esp */
  EBP = (ESP);
  /* 12df77a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df77a6 cmp dword ptr [0x12e221b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e221b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df77ad jne 0x12df77b4 */
  if (!C.zf) goto L_12df77b4;
  /* 12df77af call 0x12dfc840 */
  push32(0x12df77b4u); f_12dfc840();
L_12df77b4:;
  /* 12df77b4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12df77b9 push 0x12e20700 */
  push32((uint32_t)(0x12e20700u));
  /* 12df77be push 0 */
  push32((uint32_t)(0x0u));
  /* 12df77c0 call dword ptr [0x12e23228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23228))), 0x12df77c6u);
  /* 12df77c6 mov dword ptr [0x12e206d4], 0x12e20700 */
  w32((uint32_t)(0x12e206d4), (0x12e20700u));
  /* 12df77d0 mov eax, dword ptr [0x12e221cc] */
  EAX = (r32((uint32_t)(0x12e221cc)));
  /* 12df77d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12df77d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df77da jne 0x12df77e7 */
  if (!C.zf) goto L_12df77e7;
  /* 12df77dc mov edx, dword ptr [0x12e206d4] */
  EDX = (r32((uint32_t)(0x12e206d4)));
  /* 12df77e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12df77e5 jmp 0x12df77ef */
  goto L_12df77ef;
L_12df77e7:;
  /* 12df77e7 mov eax, dword ptr [0x12e221cc] */
  EAX = (r32((uint32_t)(0x12e221cc)));
  /* 12df77ec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12df77ef:;
  /* 12df77ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df77f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12df77f5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12df77f8 push edx */
  push32((uint32_t)(EDX));
  /* 12df77f9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12df77fc push eax */
  push32((uint32_t)(EAX));
  /* 12df77fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12df77ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7801 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7804 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7805 call 0x12df7880 */
  push32(0x12df780au); f_12df7880();
  /* 12df780a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df780d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12df7812 push 0x12e1c3fc */
  push32((uint32_t)(0x12e1c3fcu));
  /* 12df7817 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df7819 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df781c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df781f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12df7822 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7823 call 0x12df56e0 */
  push32(0x12df7828u); f_12df56e0();
  /* 12df7828 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df782b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df782e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7832 jne 0x12df783e */
  if (!C.zf) goto L_12df783e;
  /* 12df7834 push 8 */
  push32((uint32_t)(0x8u));
  /* 12df7836 call 0x12df3530 */
  push32(0x12df783bu); f_12df3530();
  /* 12df783b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df783e:;
  /* 12df783e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12df7841 push edx */
  push32((uint32_t)(EDX));
  /* 12df7842 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12df7845 push eax */
  push32((uint32_t)(EAX));
  /* 12df7846 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7849 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df784c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12df784f push eax */
  push32((uint32_t)(EAX));
  /* 12df7850 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7853 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7854 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7857 push edx */
  push32((uint32_t)(EDX));
  /* 12df7858 call 0x12df7880 */
  push32(0x12df785du); f_12df7880();
  /* 12df785d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7860 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7863 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7866 mov dword ptr [0x12e206b8], eax */
  w32((uint32_t)(0x12e206b8), (EAX));
  /* 12df786b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df786e mov dword ptr [0x12e206bc], ecx */
  w32((uint32_t)(0x12e206bc), (ECX));
  /* 12df7874 mov esp, ebp */
  ESP = (EBP);
  /* 12df7876 pop ebp */
  EBP = (pop32());
  /* 12df7877 ret  */
  ESPCHK(0x12df77a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007880 @ 0x12df7880 (1060 bytes, 360 insns) */
void f_12df7880(void) {
  FTRACE(0x12df7880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df7880 push ebp */
  push32((uint32_t)(EBP));
  /* 12df7881 mov ebp, esp */
  EBP = (ESP);
  /* 12df7883 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7886 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7889 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12df788f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df7892 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12df7898 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df789b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df789e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df78a2 je 0x12df78b5 */
  if (C.zf) goto L_12df78b5;
  /* 12df78a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df78a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df78aa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12df78ac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df78af add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df78b2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12df78b5:;
  /* 12df78b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df78b8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12df78bb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df78be jne 0x12df798d */
  if (!C.zf) goto L_12df798d;
L_12df78c4:;
  /* 12df78c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df78c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df78ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df78cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df78d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12df78d3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df78d6 je 0x12df7952 */
  if (C.zf) goto L_12df7952;
  /* 12df78d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df78db movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12df78de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df78e0 je 0x12df7952 */
  if (C.zf) goto L_12df7952;
  /* 12df78e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df78e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df78e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df78e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df78eb mov al, byte ptr [edx + 0x12e20bc1] */
  AL = (r8((uint32_t)(EDX + 0x12e20bc1)));
  /* 12df78f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12df78f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df78f6 je 0x12df7927 */
  if (C.zf) goto L_12df7927;
  /* 12df78f8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df78fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df78fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7900 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7903 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12df7905 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7909 je 0x12df7927 */
  if (C.zf) goto L_12df7927;
  /* 12df790b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df790e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7911 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12df7913 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12df7915 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7918 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df791b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12df791e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7921 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7924 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12df7927:;
  /* 12df7927 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df792a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df792c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df792f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7932 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12df7934 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7938 je 0x12df794d */
  if (C.zf) goto L_12df794d;
  /* 12df793a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df793d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7940 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df7942 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12df7944 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7947 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df794a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12df794d:;
  /* 12df794d jmp 0x12df78c4 */
  goto L_12df78c4;
L_12df7952:;
  /* 12df7952 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7955 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df7957 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df795a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df795d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12df795f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7963 je 0x12df7974 */
  if (C.zf) goto L_12df7974;
  /* 12df7965 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7968 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12df796b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df796e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7971 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12df7974:;
  /* 12df7974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7977 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12df797a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df797d jne 0x12df7988 */
  if (!C.zf) goto L_12df7988;
  /* 12df797f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7982 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7985 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12df7988:;
  /* 12df7988 jmp 0x12df7a5c */
  goto L_12df7a5c;
L_12df798d:;
  /* 12df798d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7990 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df7992 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7995 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7998 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12df799a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df799e je 0x12df79b3 */
  if (C.zf) goto L_12df79b3;
  /* 12df79a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df79a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df79a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df79a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12df79aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df79ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df79b0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12df79b3:;
  /* 12df79b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df79b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df79b8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12df79bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df79be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df79c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df79c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df79c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df79cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df79cf mov dl, byte ptr [ecx + 0x12e20bc1] */
  DL = (r8((uint32_t)(ECX + 0x12e20bc1)));
  /* 12df79d5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12df79d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df79da je 0x12df7a0b */
  if (C.zf) goto L_12df7a0b;
  /* 12df79dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df79df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df79e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df79e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df79e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12df79e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df79ed je 0x12df7a02 */
  if (C.zf) goto L_12df7a02;
  /* 12df79ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df79f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df79f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df79f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12df79f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df79fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df79ff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12df7a02:;
  /* 12df7a02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7a05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7a08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12df7a0b:;
  /* 12df7a0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7a0e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df7a14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7a17 je 0x12df7a37 */
  if (C.zf) goto L_12df7a37;
  /* 12df7a19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7a1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df7a21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df7a23 je 0x12df7a37 */
  if (C.zf) goto L_12df7a37;
  /* 12df7a25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7a28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df7a2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7a31 jne 0x12df798d */
  if (!C.zf) goto L_12df798d;
L_12df7a37:;
  /* 12df7a37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7a3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df7a40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df7a42 jne 0x12df7a4f */
  if (!C.zf) goto L_12df7a4f;
  /* 12df7a44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7a47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7a4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df7a4d jmp 0x12df7a5c */
  goto L_12df7a5c;
L_12df7a4f:;
  /* 12df7a4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7a53 je 0x12df7a5c */
  if (C.zf) goto L_12df7a5c;
  /* 12df7a55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7a58 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12df7a5c:;
  /* 12df7a5c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12df7a63:;
  /* 12df7a63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7a66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12df7a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df7a6b je 0x12df7a8e */
  if (C.zf) goto L_12df7a8e;
L_12df7a6d:;
  /* 12df7a6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7a70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12df7a73 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7a76 je 0x12df7a83 */
  if (C.zf) goto L_12df7a83;
  /* 12df7a78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7a7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12df7a7e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7a81 jne 0x12df7a8e */
  if (!C.zf) goto L_12df7a8e;
L_12df7a83:;
  /* 12df7a83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7a86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7a89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df7a8c jmp 0x12df7a6d */
  goto L_12df7a6d;
L_12df7a8e:;
  /* 12df7a8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7a91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12df7a94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df7a96 jne 0x12df7a9d */
  if (!C.zf) goto L_12df7a9d;
  /* 12df7a98 jmp 0x12df7c7b */
  goto L_12df7c7b;
L_12df7a9d:;
  /* 12df7a9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7aa1 je 0x12df7ab4 */
  if (C.zf) goto L_12df7ab4;
  /* 12df7aa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df7aa6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7aa9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12df7aab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df7aae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7ab1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12df7ab4:;
  /* 12df7ab4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df7ab7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df7ab9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7abc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df7abf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12df7ac1:;
  /* 12df7ac1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12df7ac8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12df7acf:;
  /* 12df7acf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7ad2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12df7ad5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7ad8 jne 0x12df7aee */
  if (!C.zf) goto L_12df7aee;
  /* 12df7ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7add add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7ae0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12df7ae3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7ae6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7ae9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12df7aec jmp 0x12df7acf */
  goto L_12df7acf;
L_12df7aee:;
  /* 12df7aee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7af1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12df7af4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7af7 jne 0x12df7b4a */
  if (!C.zf) goto L_12df7b4a;
  /* 12df7af9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7afc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df7afe mov ecx, 2 */
  ECX = (0x2u);
  /* 12df7b03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12df7b05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df7b07 jne 0x12df7b42 */
  if (!C.zf) goto L_12df7b42;
  /* 12df7b09 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7b0d je 0x12df7b2f */
  if (C.zf) goto L_12df7b2f;
  /* 12df7b0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7b12 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12df7b16 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7b19 jne 0x12df7b26 */
  if (!C.zf) goto L_12df7b26;
  /* 12df7b1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7b1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7b21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12df7b24 jmp 0x12df7b2d */
  goto L_12df7b2d;
L_12df7b26:;
  /* 12df7b26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12df7b2d:;
  /* 12df7b2d jmp 0x12df7b36 */
  goto L_12df7b36;
L_12df7b2f:;
  /* 12df7b2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12df7b36:;
  /* 12df7b36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df7b38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7b3c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12df7b3f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12df7b42:;
  /* 12df7b42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7b45 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12df7b47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12df7b4a:;
  /* 12df7b4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7b4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7b50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7b53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12df7b56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df7b58 je 0x12df7b7e */
  if (C.zf) goto L_12df7b7e;
  /* 12df7b5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7b5e je 0x12df7b6f */
  if (C.zf) goto L_12df7b6f;
  /* 12df7b60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7b63 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12df7b66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7b69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7b6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12df7b6f:;
  /* 12df7b6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7b72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df7b74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7b77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7b7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12df7b7c jmp 0x12df7b4a */
  goto L_12df7b4a;
L_12df7b7e:;
  /* 12df7b7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7b81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12df7b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df7b86 je 0x12df7ba4 */
  if (C.zf) goto L_12df7ba4;
  /* 12df7b88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7b8c jne 0x12df7ba9 */
  if (!C.zf) goto L_12df7ba9;
  /* 12df7b8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7b91 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12df7b94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7b97 je 0x12df7ba4 */
  if (C.zf) goto L_12df7ba4;
  /* 12df7b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7b9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12df7b9f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7ba2 jne 0x12df7ba9 */
  if (!C.zf) goto L_12df7ba9;
L_12df7ba4:;
  /* 12df7ba4 jmp 0x12df7c54 */
  goto L_12df7c54;
L_12df7ba9:;
  /* 12df7ba9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7bad je 0x12df7c46 */
  if (C.zf) goto L_12df7c46;
  /* 12df7bb3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7bb7 je 0x12df7c0d */
  if (C.zf) goto L_12df7c0d;
  /* 12df7bb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7bbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7bbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12df7bc0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df7bc2 mov cl, byte ptr [eax + 0x12e20bc1] */
  CL = (r8((uint32_t)(EAX + 0x12e20bc1)));
  /* 12df7bc8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12df7bcb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df7bcd je 0x12df7bf8 */
  if (C.zf) goto L_12df7bf8;
  /* 12df7bcf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7bd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7bd5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12df7bd7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12df7bd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7bdc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7bdf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12df7be2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7be5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7be8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df7beb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7bee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df7bf0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7bf3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7bf6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12df7bf8:;
  /* 12df7bf8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7bfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7bfe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12df7c00 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12df7c02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7c05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7c08 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12df7c0b jmp 0x12df7c39 */
  goto L_12df7c39;
L_12df7c0d:;
  /* 12df7c0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7c12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12df7c14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df7c16 mov cl, byte ptr [eax + 0x12e20bc1] */
  CL = (r8((uint32_t)(EAX + 0x12e20bc1)));
  /* 12df7c1c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12df7c1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df7c21 je 0x12df7c39 */
  if (C.zf) goto L_12df7c39;
  /* 12df7c23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7c26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7c29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df7c2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7c2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df7c31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7c34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7c37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12df7c39:;
  /* 12df7c39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7c3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df7c3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7c41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7c44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12df7c46:;
  /* 12df7c46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7c49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7c4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df7c4f jmp 0x12df7ac1 */
  goto L_12df7ac1;
L_12df7c54:;
  /* 12df7c54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7c58 je 0x12df7c69 */
  if (C.zf) goto L_12df7c69;
  /* 12df7c5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7c5d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12df7c60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df7c63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7c66 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12df7c69:;
  /* 12df7c69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7c6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df7c6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7c71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12df7c74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12df7c76 jmp 0x12df7a63 */
  goto L_12df7a63;
L_12df7c7b:;
  /* 12df7c7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7c7f je 0x12df7c93 */
  if (C.zf) goto L_12df7c93;
  /* 12df7c81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df7c84 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12df7c8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df7c8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7c90 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12df7c93:;
  /* 12df7c93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df7c96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df7c98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7c9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df7c9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12df7ca0 mov esp, ebp */
  ESP = (EBP);
  /* 12df7ca2 pop ebp */
  EBP = (pop32());
  /* 12df7ca3 ret  */
  ESPCHK(0x12df7880u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x12df7cb0 (537 bytes, 173 insns) */
void f_12df7cb0(void) {
  FTRACE(0x12df7cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df7cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df7cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12df7cb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7cb6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12df7cbd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12df7cc4 cmp dword ptr [0x12e20804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7ccb jne 0x12df7d0a */
  if (!C.zf) goto L_12df7d0a;
  /* 12df7ccd call dword ptr [0x12e23284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23284))), 0x12df7cd3u);
  /* 12df7cd3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12df7cd6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7cda je 0x12df7ce8 */
  if (C.zf) goto L_12df7ce8;
  /* 12df7cdc mov dword ptr [0x12e20804], 1 */
  w32((uint32_t)(0x12e20804), (0x1u));
  /* 12df7ce6 jmp 0x12df7d0a */
  goto L_12df7d0a;
L_12df7ce8:;
  /* 12df7ce8 call dword ptr [0x12e23280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23280))), 0x12df7ceeu);
  /* 12df7cee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12df7cf1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7cf5 je 0x12df7d03 */
  if (C.zf) goto L_12df7d03;
  /* 12df7cf7 mov dword ptr [0x12e20804], 2 */
  w32((uint32_t)(0x12e20804), (0x2u));
  /* 12df7d01 jmp 0x12df7d0a */
  goto L_12df7d0a;
L_12df7d03:;
  /* 12df7d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7d05 jmp 0x12df7ec5 */
  goto L_12df7ec5;
L_12df7d0a:;
  /* 12df7d0a cmp dword ptr [0x12e20804], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e20804))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7d11 jne 0x12df7e0e */
  if (!C.zf) goto L_12df7e0e;
  /* 12df7d17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7d1b jne 0x12df7d33 */
  if (!C.zf) goto L_12df7d33;
  /* 12df7d1d call dword ptr [0x12e23284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23284))), 0x12df7d23u);
  /* 12df7d23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12df7d26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7d2a jne 0x12df7d33 */
  if (!C.zf) goto L_12df7d33;
  /* 12df7d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7d2e jmp 0x12df7ec5 */
  goto L_12df7ec5;
L_12df7d33:;
  /* 12df7d33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df7d36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12df7d39:;
  /* 12df7d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7d3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df7d3e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12df7d41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df7d43 je 0x12df7d65 */
  if (C.zf) goto L_12df7d65;
  /* 12df7d45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7d48 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7d4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df7d4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7d51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df7d53 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12df7d56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df7d58 jne 0x12df7d63 */
  if (!C.zf) goto L_12df7d63;
  /* 12df7d5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7d5d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7d60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12df7d63:;
  /* 12df7d63 jmp 0x12df7d39 */
  goto L_12df7d39;
L_12df7d65:;
  /* 12df7d65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7d68 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7d6b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12df7d6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7d70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12df7d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7d79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7d7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7d7e push edx */
  push32((uint32_t)(EDX));
  /* 12df7d7f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df7d82 push eax */
  push32((uint32_t)(EAX));
  /* 12df7d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7d87 call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12df7d8du);
  /* 12df7d8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12df7d90 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7d94 je 0x12df7db4 */
  if (C.zf) goto L_12df7db4;
  /* 12df7d96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12df7d98 push 0x12e1c408 */
  push32((uint32_t)(0x12e1c408u));
  /* 12df7d9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12df7d9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7da2 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7da3 call 0x12df56e0 */
  push32(0x12df7da8u); f_12df56e0();
  /* 12df7da8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7dab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12df7dae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7db2 jne 0x12df7dc5 */
  if (!C.zf) goto L_12df7dc5;
L_12df7db4:;
  /* 12df7db4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df7db7 push edx */
  push32((uint32_t)(EDX));
  /* 12df7db8 call dword ptr [0x12e23278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23278))), 0x12df7dbeu);
  /* 12df7dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7dc0 jmp 0x12df7ec5 */
  goto L_12df7ec5;
L_12df7dc5:;
  /* 12df7dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7dc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7dcc push eax */
  push32((uint32_t)(EAX));
  /* 12df7dcd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df7dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7dd4 push edx */
  push32((uint32_t)(EDX));
  /* 12df7dd5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df7dd8 push eax */
  push32((uint32_t)(EAX));
  /* 12df7dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7ddb push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7ddd call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12df7de3u);
  /* 12df7de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df7de5 jne 0x12df7dfc */
  if (!C.zf) goto L_12df7dfc;
  /* 12df7de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df7de9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df7dec push ecx */
  push32((uint32_t)(ECX));
  /* 12df7ded call 0x12df6170 */
  push32(0x12df7df2u); f_12df6170();
  /* 12df7df2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7df5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12df7dfc:;
  /* 12df7dfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df7dff push edx */
  push32((uint32_t)(EDX));
  /* 12df7e00 call dword ptr [0x12e23278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23278))), 0x12df7e06u);
  /* 12df7e06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df7e09 jmp 0x12df7ec5 */
  goto L_12df7ec5;
L_12df7e0e:;
  /* 12df7e0e cmp dword ptr [0x12e20804], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e20804))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7e15 jne 0x12df7ec3 */
  if (!C.zf) goto L_12df7ec3;
  /* 12df7e1b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7e1f jne 0x12df7e37 */
  if (!C.zf) goto L_12df7e37;
  /* 12df7e21 call dword ptr [0x12e23280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23280))), 0x12df7e27u);
  /* 12df7e27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12df7e2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7e2e jne 0x12df7e37 */
  if (!C.zf) goto L_12df7e37;
  /* 12df7e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7e32 jmp 0x12df7ec5 */
  goto L_12df7ec5;
L_12df7e37:;
  /* 12df7e37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df7e3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12df7e3d:;
  /* 12df7e3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7e40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12df7e43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df7e45 je 0x12df7e65 */
  if (C.zf) goto L_12df7e65;
  /* 12df7e47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7e4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7e4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df7e50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7e53 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12df7e56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df7e58 jne 0x12df7e63 */
  if (!C.zf) goto L_12df7e63;
  /* 12df7e5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7e5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7e60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12df7e63:;
  /* 12df7e63 jmp 0x12df7e3d */
  goto L_12df7e3d;
L_12df7e65:;
  /* 12df7e65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7e68 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7e6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7e6e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12df7e71 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12df7e76 push 0x12e1c408 */
  push32((uint32_t)(0x12e1c408u));
  /* 12df7e7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12df7e7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7e80 push edx */
  push32((uint32_t)(EDX));
  /* 12df7e81 call 0x12df56e0 */
  push32(0x12df7e86u); f_12df56e0();
  /* 12df7e86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7e89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df7e8c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7e90 jne 0x12df7ea0 */
  if (!C.zf) goto L_12df7ea0;
  /* 12df7e92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df7e95 push eax */
  push32((uint32_t)(EAX));
  /* 12df7e96 call dword ptr [0x12e23274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23274))), 0x12df7e9cu);
  /* 12df7e9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7e9e jmp 0x12df7ec5 */
  goto L_12df7ec5;
L_12df7ea0:;
  /* 12df7ea0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df7ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7ea4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df7ea7 push edx */
  push32((uint32_t)(EDX));
  /* 12df7ea8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7eab push eax */
  push32((uint32_t)(EAX));
  /* 12df7eac call 0x12dfc870 */
  push32(0x12df7eb1u); f_12dfc870();
  /* 12df7eb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7eb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df7eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7eb8 call dword ptr [0x12e23274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23274))), 0x12df7ebeu);
  /* 12df7ebe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df7ec1 jmp 0x12df7ec5 */
  goto L_12df7ec5;
L_12df7ec3:;
  /* 12df7ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12df7ec5:;
  /* 12df7ec5 mov esp, ebp */
  ESP = (EBP);
  /* 12df7ec7 pop ebp */
  EBP = (pop32());
  /* 12df7ec8 ret  */
  ESPCHK(0x12df7cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed0 @ 0x12df7ed0 (77 bytes, 25 insns) */
void f_12df7ed0(void) {
  FTRACE(0x12df7ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df7ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df7ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12df7ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7ed5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12df7eda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7edc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7ee0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12df7ee3 push eax */
  push32((uint32_t)(EAX));
  /* 12df7ee4 call dword ptr [0x12e231fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e231fc))), 0x12df7eeau);
  /* 12df7eea mov dword ptr [0x12e22044], eax */
  w32((uint32_t)(0x12e22044), (EAX));
  /* 12df7eef cmp dword ptr [0x12e22044], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e22044))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7ef6 jne 0x12df7efc */
  if (!C.zf) goto L_12df7efc;
  /* 12df7ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7efa jmp 0x12df7f1b */
  goto L_12df7f1b;
L_12df7efc:;
  /* 12df7efc call 0x12dfa330 */
  push32(0x12df7f01u); f_12dfa330();
  /* 12df7f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df7f03 jne 0x12df7f16 */
  if (!C.zf) goto L_12df7f16;
  /* 12df7f05 mov ecx, dword ptr [0x12e22044] */
  ECX = (r32((uint32_t)(0x12e22044)));
  /* 12df7f0b push ecx */
  push32((uint32_t)(ECX));
  /* 12df7f0c call dword ptr [0x12e231f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e231f4))), 0x12df7f12u);
  /* 12df7f12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df7f14 jmp 0x12df7f1b */
  goto L_12df7f1b;
L_12df7f16:;
  /* 12df7f16 mov eax, 1 */
  EAX = (0x1u);
L_12df7f1b:;
  /* 12df7f1b pop ebp */
  EBP = (pop32());
  /* 12df7f1c ret  */
  ESPCHK(0x12df7ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f20 @ 0x12df7f20 (156 bytes, 48 insns) */
void f_12df7f20(void) {
  FTRACE(0x12df7f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df7f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12df7f21 mov ebp, esp */
  EBP = (ESP);
  /* 12df7f23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df7f26 mov eax, dword ptr [0x12e20ce8] */
  EAX = (r32((uint32_t)(0x12e20ce8)));
  /* 12df7f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df7f2e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df7f35 jmp 0x12df7f40 */
  goto L_12df7f40;
L_12df7f37:;
  /* 12df7f37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7f3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7f3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12df7f40:;
  /* 12df7f40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df7f43 cmp edx, dword ptr [0x12e20ce4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e20ce4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7f49 jge 0x12df7f96 */
  if ((C.sf==C.of)) goto L_12df7f96;
  /* 12df7f4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12df7f50 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12df7f55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7f58 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12df7f5b push ecx */
  push32((uint32_t)(ECX));
  /* 12df7f5c call dword ptr [0x12e23294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23294))), 0x12df7f62u);
  /* 12df7f62 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12df7f67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7f69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7f6c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12df7f6f push eax */
  push32((uint32_t)(EAX));
  /* 12df7f70 call dword ptr [0x12e23294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23294))), 0x12df7f76u);
  /* 12df7f76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7f79 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12df7f7c push edx */
  push32((uint32_t)(EDX));
  /* 12df7f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7f7f mov eax, dword ptr [0x12e22044] */
  EAX = (r32((uint32_t)(0x12e22044)));
  /* 12df7f84 push eax */
  push32((uint32_t)(EAX));
  /* 12df7f85 call dword ptr [0x12e23200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23200))), 0x12df7f8bu);
  /* 12df7f8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df7f8e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7f91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12df7f94 jmp 0x12df7f37 */
  goto L_12df7f37;
L_12df7f96:;
  /* 12df7f96 mov edx, dword ptr [0x12e20ce8] */
  EDX = (r32((uint32_t)(0x12e20ce8)));
  /* 12df7f9c push edx */
  push32((uint32_t)(EDX));
  /* 12df7f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12df7f9f mov eax, dword ptr [0x12e22044] */
  EAX = (r32((uint32_t)(0x12e22044)));
  /* 12df7fa4 push eax */
  push32((uint32_t)(EAX));
  /* 12df7fa5 call dword ptr [0x12e23200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23200))), 0x12df7fabu);
  /* 12df7fab mov ecx, dword ptr [0x12e22044] */
  ECX = (r32((uint32_t)(0x12e22044)));
  /* 12df7fb1 push ecx */
  push32((uint32_t)(ECX));
  /* 12df7fb2 call dword ptr [0x12e231f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e231f4))), 0x12df7fb8u);
  /* 12df7fb8 mov esp, ebp */
  ESP = (EBP);
  /* 12df7fba pop ebp */
  EBP = (pop32());
  /* 12df7fbb ret  */
  ESPCHK(0x12df7f20u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12df7fc0 (73 bytes, 19 insns) */
void f_12df7fc0(void) {
  FTRACE(0x12df7fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df7fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df7fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12df7fc3 cmp dword ptr [0x12e20698], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e20698))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7fca je 0x12df7fde */
  if (C.zf) goto L_12df7fde;
  /* 12df7fcc cmp dword ptr [0x12e20698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7fd3 jne 0x12df8007 */
  if (!C.zf) goto L_12df8007;
  /* 12df7fd5 cmp dword ptr [0x12e2069c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e2069c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7fdc jne 0x12df8007 */
  if (!C.zf) goto L_12df8007;
L_12df7fde:;
  /* 12df7fde push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12df7fe3 call 0x12df8010 */
  push32(0x12df7fe8u); f_12df8010();
  /* 12df7fe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df7feb cmp dword ptr [0x12e20808], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20808))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df7ff2 je 0x12df7ffa */
  if (C.zf) goto L_12df7ffa;
  /* 12df7ff4 call dword ptr [0x12e20808] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20808))), 0x12df7ffau);
L_12df7ffa:;
  /* 12df7ffa push 0xff */
  push32((uint32_t)(0xffu));
  /* 12df7fff call 0x12df8010 */
  push32(0x12df8004u); f_12df8010();
  /* 12df8004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df8007:;
  /* 12df8007 pop ebp */
  EBP = (pop32());
  /* 12df8008 ret  */
  ESPCHK(0x12df7fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008010 @ 0x12df8010 (447 bytes, 131 insns) */
void f_12df8010(void) {
  FTRACE(0x12df8010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8010 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8011 mov ebp, esp */
  EBP = (ESP);
  /* 12df8013 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8019 push ebx */
  push32((uint32_t)(EBX));
  /* 12df801a push esi */
  push32((uint32_t)(ESI));
  /* 12df801b push edi */
  push32((uint32_t)(EDI));
  /* 12df801c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12df8023 jmp 0x12df802e */
  goto L_12df802e;
L_12df8025:;
  /* 12df8025 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8028 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df802b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12df802e:;
  /* 12df802e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8032 jae 0x12df8047 */
  if (!C.cf) goto L_12df8047;
  /* 12df8034 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8037 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df803a cmp edx, dword ptr [ecx*8 + 0x12e1eab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12e1eab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8041 jne 0x12df8045 */
  if (!C.zf) goto L_12df8045;
  /* 12df8043 jmp 0x12df8047 */
  goto L_12df8047;
L_12df8045:;
  /* 12df8045 jmp 0x12df8025 */
  goto L_12df8025;
L_12df8047:;
  /* 12df8047 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df804a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df804d cmp ecx, dword ptr [eax*8 + 0x12e1eab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12e1eab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8054 jne 0x12df81c8 */
  if (!C.zf) goto L_12df81c8;
  /* 12df805a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8061 je 0x12df8084 */
  if (C.zf) goto L_12df8084;
  /* 12df8063 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8066 mov eax, dword ptr [edx*8 + 0x12e1eabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12e1eabc)));
  /* 12df806d push eax */
  push32((uint32_t)(EAX));
  /* 12df806e push 0 */
  push32((uint32_t)(0x0u));
  /* 12df8070 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df8072 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df8074 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8076 call 0x12df3680 */
  push32(0x12df807bu); f_12df3680();
  /* 12df807b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df807e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8081 jne 0x12df8084 */
  if (!C.zf) goto L_12df8084;
  /* 12df8083 int3  */
  x86_unimpl("int3 @ 0x12df8083");
L_12df8084:;
  /* 12df8084 cmp dword ptr [0x12e20698], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e20698))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df808b je 0x12df809f */
  if (C.zf) goto L_12df809f;
  /* 12df808d cmp dword ptr [0x12e20698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8094 jne 0x12df80d8 */
  if (!C.zf) goto L_12df80d8;
  /* 12df8096 cmp dword ptr [0x12e2069c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e2069c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df809d jne 0x12df80d8 */
  if (!C.zf) goto L_12df80d8;
L_12df809f:;
  /* 12df809f push 0 */
  push32((uint32_t)(0x0u));
  /* 12df80a1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12df80a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12df80a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df80a8 mov eax, dword ptr [edx*8 + 0x12e1eabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12e1eabc)));
  /* 12df80af push eax */
  push32((uint32_t)(EAX));
  /* 12df80b0 call 0x12df8510 */
  push32(0x12df80b5u); f_12df8510();
  /* 12df80b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df80b8 push eax */
  push32((uint32_t)(EAX));
  /* 12df80b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df80bc mov edx, dword ptr [ecx*8 + 0x12e1eabc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12e1eabc)));
  /* 12df80c3 push edx */
  push32((uint32_t)(EDX));
  /* 12df80c4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12df80c6 call dword ptr [0x12e23210] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23210))), 0x12df80ccu);
  /* 12df80cc push eax */
  push32((uint32_t)(EAX));
  /* 12df80cd call dword ptr [0x12e23214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23214))), 0x12df80d3u);
  /* 12df80d3 jmp 0x12df81c8 */
  goto L_12df81c8;
L_12df80d8:;
  /* 12df80d8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df80df je 0x12df81c8 */
  if (C.zf) goto L_12df81c8;
  /* 12df80e5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12df80ea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12df80f0 push eax */
  push32((uint32_t)(EAX));
  /* 12df80f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df80f3 call dword ptr [0x12e23228] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23228))), 0x12df80f9u);
  /* 12df80f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df80fb jne 0x12df8111 */
  if (!C.zf) goto L_12df8111;
  /* 12df80fd push 0x12e1bb88 */
  push32((uint32_t)(0x12e1bb88u));
  /* 12df8102 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12df8108 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8109 call 0x12df8690 */
  push32(0x12df810eu); f_12df8690();
  /* 12df810e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df8111:;
  /* 12df8111 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12df8117 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12df811a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df811d push eax */
  push32((uint32_t)(EAX));
  /* 12df811e call 0x12df8510 */
  push32(0x12df8123u); f_12df8510();
  /* 12df8123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8126 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8129 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df812c jbe 0x12df815a */
  if ((C.cf||C.zf)) goto L_12df815a;
  /* 12df812e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12df8134 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8135 call 0x12df8510 */
  push32(0x12df813au); f_12df8510();
  /* 12df813a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df813d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df8140 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12df8144 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df8147 push 3 */
  push32((uint32_t)(0x3u));
  /* 12df8149 push 0x12e1bb84 */
  push32((uint32_t)(0x12e1bb84u));
  /* 12df814e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df8151 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8152 call 0x12df8f00 */
  push32(0x12df8157u); f_12df8f00();
  /* 12df8157 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df815a:;
  /* 12df815a push 0x12e1c6c4 */
  push32((uint32_t)(0x12e1c6c4u));
  /* 12df815f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12df8165 push edx */
  push32((uint32_t)(EDX));
  /* 12df8166 call 0x12df8690 */
  push32(0x12df816bu); f_12df8690();
  /* 12df816b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df816e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df8171 push eax */
  push32((uint32_t)(EAX));
  /* 12df8172 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12df8178 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8179 call 0x12df86a0 */
  push32(0x12df817eu); f_12df86a0();
  /* 12df817e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8181 push 0x12e1bafc */
  push32((uint32_t)(0x12e1bafcu));
  /* 12df8186 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12df818c push edx */
  push32((uint32_t)(EDX));
  /* 12df818d call 0x12df86a0 */
  push32(0x12df8192u); f_12df86a0();
  /* 12df8192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8195 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8198 mov ecx, dword ptr [eax*8 + 0x12e1eabc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12e1eabc)));
  /* 12df819f push ecx */
  push32((uint32_t)(ECX));
  /* 12df81a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12df81a6 push edx */
  push32((uint32_t)(EDX));
  /* 12df81a7 call 0x12df86a0 */
  push32(0x12df81acu); f_12df86a0();
  /* 12df81ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df81af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12df81b4 push 0x12e1c69c */
  push32((uint32_t)(0x12e1c69cu));
  /* 12df81b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12df81bf push eax */
  push32((uint32_t)(EAX));
  /* 12df81c0 call 0x12df8e40 */
  push32(0x12df81c5u); f_12df8e40();
  /* 12df81c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df81c8:;
  /* 12df81c8 pop edi */
  EDI = (pop32());
  /* 12df81c9 pop esi */
  ESI = (pop32());
  /* 12df81ca pop ebx */
  EBX = (pop32());
  /* 12df81cb mov esp, ebp */
  ESP = (EBP);
  /* 12df81cd pop ebp */
  EBP = (pop32());
  /* 12df81ce ret  */
  ESPCHK(0x12df8010u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12df81d0 (80 bytes, 27 insns) */
void f_12df81d0(void) {
  FTRACE(0x12df81d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df81d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df81d1 mov ebp, esp */
  EBP = (ESP);
  /* 12df81d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df81d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df81db jmp 0x12df81e6 */
  goto L_12df81e6;
L_12df81dd:;
  /* 12df81dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df81e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df81e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df81e6:;
  /* 12df81e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df81ea jae 0x12df81ff */
  if (!C.cf) goto L_12df81ff;
  /* 12df81ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df81ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df81f2 cmp edx, dword ptr [ecx*8 + 0x12e1eab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12e1eab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df81f9 jne 0x12df81fd */
  if (!C.zf) goto L_12df81fd;
  /* 12df81fb jmp 0x12df81ff */
  goto L_12df81ff;
L_12df81fd:;
  /* 12df81fd jmp 0x12df81dd */
  goto L_12df81dd;
L_12df81ff:;
  /* 12df81ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8205 cmp ecx, dword ptr [eax*8 + 0x12e1eab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12e1eab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df820c jne 0x12df821a */
  if (!C.zf) goto L_12df821a;
  /* 12df820e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8211 mov eax, dword ptr [edx*8 + 0x12e1eabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12e1eabc)));
  /* 12df8218 jmp 0x12df821c */
  goto L_12df821c;
L_12df821a:;
  /* 12df821a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12df821c:;
  /* 12df821c mov esp, ebp */
  ESP = (EBP);
  /* 12df821e pop ebp */
  EBP = (pop32());
  /* 12df821f ret  */
  ESPCHK(0x12df81d0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12df8220 (66 bytes, 28 insns) */
void f_12df8220(void) {
  FTRACE(0x12df8220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8220 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8221 mov ebp, esp */
  EBP = (ESP);
  /* 12df8223 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8227 jne 0x12df8247 */
  if (!C.zf) goto L_12df8247;
  /* 12df8229 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df822d jge 0x12df8247 */
  if ((C.sf==C.of)) goto L_12df8247;
  /* 12df822f push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8231 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df8234 push eax */
  push32((uint32_t)(EAX));
  /* 12df8235 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8238 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8239 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df823c push edx */
  push32((uint32_t)(EDX));
  /* 12df823d call 0x12df8270 */
  push32(0x12df8242u); f_12df8270();
  /* 12df8242 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8245 jmp 0x12df825d */
  goto L_12df825d;
L_12df8247:;
  /* 12df8247 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df8249 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df824c push eax */
  push32((uint32_t)(EAX));
  /* 12df824d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8250 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8254 push edx */
  push32((uint32_t)(EDX));
  /* 12df8255 call 0x12df8270 */
  push32(0x12df825au); f_12df8270();
  /* 12df825a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df825d:;
  /* 12df825d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8260 pop ebp */
  EBP = (pop32());
  /* 12df8261 ret  */
  ESPCHK(0x12df8220u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12df8270 (194 bytes, 71 insns) */
void f_12df8270(void) {
  FTRACE(0x12df8270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8270 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8271 mov ebp, esp */
  EBP = (ESP);
  /* 12df8273 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8276 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8279 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df827c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8280 je 0x12df8299 */
  if (C.zf) goto L_12df8299;
  /* 12df8282 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8285 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12df8288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df828b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df828e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df8291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8294 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12df8296 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12df8299:;
  /* 12df8299 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df829c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12df829f:;
  /* 12df829f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df82a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df82a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12df82a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12df82aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df82ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df82af div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12df82b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12df82b5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df82b9 jbe 0x12df82d1 */
  if ((C.cf||C.zf)) goto L_12df82d1;
  /* 12df82bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df82be add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df82c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df82c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12df82c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df82c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df82cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12df82cf jmp 0x12df82e5 */
  goto L_12df82e5;
L_12df82d1:;
  /* 12df82d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df82d4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df82d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df82da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12df82dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df82df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df82e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12df82e5:;
  /* 12df82e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df82e9 ja 0x12df829f */
  if ((!C.cf&&!C.zf)) goto L_12df829f;
  /* 12df82eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df82ee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12df82f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df82f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df82f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df82fa:;
  /* 12df82fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df82fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df82ff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12df8302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8305 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8308 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df830a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12df830c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df830f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12df8312 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12df8314 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8317 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df831a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df831d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8320 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8323 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df8326 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8329 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df832c jb 0x12df82fa */
  if (C.cf) goto L_12df82fa;
  /* 12df832e mov esp, ebp */
  ESP = (EBP);
  /* 12df8330 pop ebp */
  EBP = (pop32());
  /* 12df8331 ret  */
  ESPCHK(0x12df8270u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12df8340 (63 bytes, 24 insns) */
void f_12df8340(void) {
  FTRACE(0x12df8340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8340 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8341 mov ebp, esp */
  EBP = (ESP);
  /* 12df8343 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8344 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8348 jne 0x12df8359 */
  if (!C.zf) goto L_12df8359;
  /* 12df834a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df834e jge 0x12df8359 */
  if ((C.sf==C.of)) goto L_12df8359;
  /* 12df8350 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12df8357 jmp 0x12df8360 */
  goto L_12df8360;
L_12df8359:;
  /* 12df8359 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12df8360:;
  /* 12df8360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8363 push eax */
  push32((uint32_t)(EAX));
  /* 12df8364 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df8367 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8368 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df836b push edx */
  push32((uint32_t)(EDX));
  /* 12df836c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df836f push eax */
  push32((uint32_t)(EAX));
  /* 12df8370 call 0x12df8270 */
  push32(0x12df8375u); f_12df8270();
  /* 12df8375 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8378 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df837b mov esp, ebp */
  ESP = (EBP);
  /* 12df837d pop ebp */
  EBP = (pop32());
  /* 12df837e ret  */
  ESPCHK(0x12df8340u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12df8380 (30 bytes, 14 insns) */
void f_12df8380(void) {
  FTRACE(0x12df8380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8380 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8381 mov ebp, esp */
  EBP = (ESP);
  /* 12df8383 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df8385 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df8388 push eax */
  push32((uint32_t)(EAX));
  /* 12df8389 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df838c push ecx */
  push32((uint32_t)(ECX));
  /* 12df838d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8390 push edx */
  push32((uint32_t)(EDX));
  /* 12df8391 call 0x12df8270 */
  push32(0x12df8396u); f_12df8270();
  /* 12df8396 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8399 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df839c pop ebp */
  EBP = (pop32());
  /* 12df839d ret  */
  ESPCHK(0x12df8380u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12df83a0 (72 bytes, 28 insns) */
void f_12df83a0(void) {
  FTRACE(0x12df83a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df83a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df83a1 mov ebp, esp */
  EBP = (ESP);
  /* 12df83a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df83a4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df83a8 jne 0x12df83c1 */
  if (!C.zf) goto L_12df83c1;
  /* 12df83aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df83ae jg 0x12df83c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12df83c1;
  /* 12df83b0 jl 0x12df83b8 */
  if ((C.sf!=C.of)) goto L_12df83b8;
  /* 12df83b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df83b6 jae 0x12df83c1 */
  if (!C.cf) goto L_12df83c1;
L_12df83b8:;
  /* 12df83b8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12df83bf jmp 0x12df83c8 */
  goto L_12df83c8;
L_12df83c1:;
  /* 12df83c1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12df83c8:;
  /* 12df83c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df83cb push eax */
  push32((uint32_t)(EAX));
  /* 12df83cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df83cf push ecx */
  push32((uint32_t)(ECX));
  /* 12df83d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df83d3 push edx */
  push32((uint32_t)(EDX));
  /* 12df83d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df83d7 push eax */
  push32((uint32_t)(EAX));
  /* 12df83d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df83db push ecx */
  push32((uint32_t)(ECX));
  /* 12df83dc call 0x12df83f0 */
  push32(0x12df83e1u); f_12df83f0();
  /* 12df83e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df83e4 mov esp, ebp */
  ESP = (EBP);
  /* 12df83e6 pop ebp */
  EBP = (pop32());
  /* 12df83e7 ret  */
  ESPCHK(0x12df83a0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12df83f0 (242 bytes, 91 insns) */
void f_12df83f0(void) {
  FTRACE(0x12df83f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df83f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df83f1 mov ebp, esp */
  EBP = (ESP);
  /* 12df83f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df83f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df83f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df83fc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8400 je 0x12df8424 */
  if (C.zf) goto L_12df8424;
  /* 12df8402 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8405 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12df8408 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df840b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df840e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df8411 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8414 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12df8416 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8419 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df841c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12df841e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12df8421 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12df8424:;
  /* 12df8424 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8427 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12df842a:;
  /* 12df842a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df842d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df842f push ecx */
  push32((uint32_t)(ECX));
  /* 12df8430 push eax */
  push32((uint32_t)(EAX));
  /* 12df8431 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8434 push edx */
  push32((uint32_t)(EDX));
  /* 12df8435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8438 push eax */
  push32((uint32_t)(EAX));
  /* 12df8439 call 0x12df9930 */
  push32(0x12df843eu); f_12df9930();
  /* 12df843e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df8441 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df8444 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df8446 push edx */
  push32((uint32_t)(EDX));
  /* 12df8447 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8448 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df844b push eax */
  push32((uint32_t)(EAX));
  /* 12df844c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df844f push ecx */
  push32((uint32_t)(ECX));
  /* 12df8450 call 0x12df98c0 */
  push32(0x12df8455u); f_12df98c0();
  /* 12df8455 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12df8458 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12df845b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df845f jbe 0x12df8477 */
  if ((C.cf||C.zf)) goto L_12df8477;
  /* 12df8461 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df8464 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df846a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12df846c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df846f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8472 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12df8475 jmp 0x12df848b */
  goto L_12df848b;
L_12df8477:;
  /* 12df8477 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df847a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df847d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8480 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12df8482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8485 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8488 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12df848b:;
  /* 12df848b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df848f ja 0x12df842a */
  if ((!C.cf&&!C.zf)) goto L_12df842a;
  /* 12df8491 jb 0x12df8499 */
  if (C.cf) goto L_12df8499;
  /* 12df8493 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8497 ja 0x12df842a */
  if ((!C.cf&&!C.zf)) goto L_12df842a;
L_12df8499:;
  /* 12df8499 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df849c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12df849f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df84a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df84a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df84a8:;
  /* 12df84a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df84ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df84ad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12df84b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df84b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df84b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df84b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12df84ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df84bd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12df84c0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12df84c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df84c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df84c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df84cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df84ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df84d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df84d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df84d7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df84da jb 0x12df84a8 */
  if (C.cf) goto L_12df84a8;
  /* 12df84dc mov esp, ebp */
  ESP = (EBP);
  /* 12df84de pop ebp */
  EBP = (pop32());
  /* 12df84df ret 0x14 */
  ESPCHK(0x12df83f0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12df84f0 (31 bytes, 15 insns) */
void f_12df84f0(void) {
  FTRACE(0x12df84f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df84f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df84f1 mov ebp, esp */
  EBP = (ESP);
  /* 12df84f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df84f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df84f8 push eax */
  push32((uint32_t)(EAX));
  /* 12df84f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df84fc push ecx */
  push32((uint32_t)(ECX));
  /* 12df84fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8500 push edx */
  push32((uint32_t)(EDX));
  /* 12df8501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8504 push eax */
  push32((uint32_t)(EAX));
  /* 12df8505 call 0x12df83f0 */
  push32(0x12df850au); f_12df83f0();
  /* 12df850a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df850d pop ebp */
  EBP = (pop32());
  /* 12df850e ret  */
  ESPCHK(0x12df84f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12df8510 (123 bytes, 44 insns) */
void f_12df8510(void) {
  FTRACE(0x12df8510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8510 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12df8514 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12df851a je 0x12df8530 */
  if (C.zf) goto L_12df8530;
L_12df851c:;
  /* 12df851c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12df851e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12df851f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12df8521 je 0x12df8563 */
  if (C.zf) goto L_12df8563;
  /* 12df8523 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12df8529 jne 0x12df851c */
  if (!C.zf) goto L_12df851c;
  /* 12df852b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12df8530:;
  /* 12df8530 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12df8532 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12df8537 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8539 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df853c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12df853e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8541 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12df8546 je 0x12df8530 */
  if (C.zf) goto L_12df8530;
  /* 12df8548 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12df854b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12df854d je 0x12df8581 */
  if (C.zf) goto L_12df8581;
  /* 12df854f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12df8551 je 0x12df8577 */
  if (C.zf) goto L_12df8577;
  /* 12df8553 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12df8558 je 0x12df856d */
  if (C.zf) goto L_12df856d;
  /* 12df855a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12df855f je 0x12df8563 */
  if (C.zf) goto L_12df8563;
  /* 12df8561 jmp 0x12df8530 */
  goto L_12df8530;
L_12df8563:;
  /* 12df8563 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12df8566 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12df856a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df856c ret  */
  ESPCHK(0x12df8510u, _esp0);
  ESP += 4; return;
L_12df856d:;
  /* 12df856d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12df8570 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12df8574 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8576 ret  */
  ESPCHK(0x12df8510u, _esp0);
  ESP += 4; return;
L_12df8577:;
  /* 12df8577 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12df857a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12df857e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8580 ret  */
  ESPCHK(0x12df8510u, _esp0);
  ESP += 4; return;
L_12df8581:;
  /* 12df8581 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12df8584 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12df8588 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df858a ret  */
  ESPCHK(0x12df8510u, _esp0);
  ESP += 4; return;
}

/* FUN_10008590 @ 0x12df8590 (249 bytes, 93 insns) */
void f_12df8590(void) {
  FTRACE(0x12df8590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8590 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8591 mov ebp, esp */
  EBP = (ESP);
  /* 12df8593 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8596 push ebx */
  push32((uint32_t)(EBX));
  /* 12df8597 push esi */
  push32((uint32_t)(ESI));
  /* 12df8598 push edi */
  push32((uint32_t)(EDI));
  /* 12df8599 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12df859c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12df859f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12df85a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12df85a5:;
  /* 12df85a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df85a9 jne 0x12df85c9 */
  if (!C.zf) goto L_12df85c9;
  /* 12df85ab push 0x12e1b980 */
  push32((uint32_t)(0x12e1b980u));
  /* 12df85b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df85b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12df85b4 push 0x12e1b974 */
  push32((uint32_t)(0x12e1b974u));
  /* 12df85b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df85bb call 0x12df3680 */
  push32(0x12df85c0u); f_12df3680();
  /* 12df85c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df85c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df85c6 jne 0x12df85c9 */
  if (!C.zf) goto L_12df85c9;
  /* 12df85c8 int3  */
  x86_unimpl("int3 @ 0x12df85c8");
L_12df85c9:;
  /* 12df85c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df85cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df85cd jne 0x12df85a5 */
  if (!C.zf) goto L_12df85a5;
L_12df85cf:;
  /* 12df85cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df85d3 jne 0x12df85f3 */
  if (!C.zf) goto L_12df85f3;
  /* 12df85d5 push 0x12e1b964 */
  push32((uint32_t)(0x12e1b964u));
  /* 12df85da push 0 */
  push32((uint32_t)(0x0u));
  /* 12df85dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12df85de push 0x12e1b974 */
  push32((uint32_t)(0x12e1b974u));
  /* 12df85e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df85e5 call 0x12df3680 */
  push32(0x12df85eau); f_12df3680();
  /* 12df85ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df85ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df85f0 jne 0x12df85f3 */
  if (!C.zf) goto L_12df85f3;
  /* 12df85f2 int3  */
  x86_unimpl("int3 @ 0x12df85f2");
L_12df85f3:;
  /* 12df85f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df85f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df85f7 jne 0x12df85cf */
  if (!C.zf) goto L_12df85cf;
  /* 12df85f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df85fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12df8603 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8609 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12df860c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df860f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8612 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12df8614 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8617 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df861a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12df861d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12df8620 push edx */
  push32((uint32_t)(EDX));
  /* 12df8621 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df8624 push eax */
  push32((uint32_t)(EAX));
  /* 12df8625 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8628 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8629 call 0x12df3fa0 */
  push32(0x12df862eu); f_12df3fa0();
  /* 12df862e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8631 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12df8634 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8637 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12df863a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df863d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8640 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12df8643 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8646 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df864a jl 0x12df866e */
  if ((C.sf!=C.of)) goto L_12df866e;
  /* 12df864c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df864f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df8651 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12df8654 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df8656 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df865c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12df865f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8662 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df8664 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8667 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df866a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12df866c jmp 0x12df867f */
  goto L_12df867f;
L_12df866e:;
  /* 12df866e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8671 push eax */
  push32((uint32_t)(EAX));
  /* 12df8672 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df8674 call 0x12df3d20 */
  push32(0x12df8679u); f_12df3d20();
  /* 12df8679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df867c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12df867f:;
  /* 12df867f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12df8682 pop edi */
  EDI = (pop32());
  /* 12df8683 pop esi */
  ESI = (pop32());
  /* 12df8684 pop ebx */
  EBX = (pop32());
  /* 12df8685 mov esp, ebp */
  ESP = (EBP);
  /* 12df8687 pop ebp */
  EBP = (pop32());
  /* 12df8688 ret  */
  ESPCHK(0x12df8590u, _esp0);
  ESP += 4; return;
}

/* FUN_10008690 @ 0x12df8690 (7 bytes, 3 insns) */
void f_12df8690(void) {
  FTRACE(0x12df8690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8690 push edi */
  push32((uint32_t)(EDI));
  /* 12df8691 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12df8695 jmp 0x12df8701 */
  jmp_ind(0x12df8701u); return;
}

/* FUN_100086a0 @ 0x12df86a0 (224 bytes, 84 insns) */
void f_12df86a0(void) {
  FTRACE(0x12df86a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df86a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12df86a4 push edi */
  push32((uint32_t)(EDI));
  /* 12df86a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12df86ab je 0x12df86bc */
  if (C.zf) goto L_12df86bc;
L_12df86ad:;
  /* 12df86ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12df86af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12df86b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12df86b2 je 0x12df86ef */
  if (C.zf) goto L_12df86ef;
  /* 12df86b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12df86ba jne 0x12df86ad */
  if (!C.zf) goto L_12df86ad;
L_12df86bc:;
  /* 12df86bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12df86be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12df86c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df86c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df86c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12df86ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df86cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12df86d2 je 0x12df86bc */
  if (C.zf) goto L_12df86bc;
  /* 12df86d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12df86d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12df86d9 je 0x12df86fe */
  if (C.zf) goto L_12df86fe;
  /* 12df86db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12df86dd je 0x12df86f9 */
  if (C.zf) goto L_12df86f9;
  /* 12df86df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12df86e4 je 0x12df86f4 */
  if (C.zf) goto L_12df86f4;
  /* 12df86e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12df86eb je 0x12df86ef */
  if (C.zf) goto L_12df86ef;
  /* 12df86ed jmp 0x12df86bc */
  goto L_12df86bc;
L_12df86ef:;
  /* 12df86ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12df86f2 jmp 0x12df8701 */
  goto L_12df8701;
L_12df86f4:;
  /* 12df86f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12df86f7 jmp 0x12df8701 */
  goto L_12df8701;
L_12df86f9:;
  /* 12df86f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12df86fc jmp 0x12df8701 */
  goto L_12df8701;
L_12df86fe:;
  /* 12df86fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12df8701:;
  /* 12df8701 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12df8705 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12df870b je 0x12df8726 */
  if (C.zf) goto L_12df8726;
L_12df870d:;
  /* 12df870d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df870f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12df8710 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12df8712 je 0x12df8778 */
  if (C.zf) goto L_12df8778;
  /* 12df8714 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12df8716 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12df8717 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12df871d jne 0x12df870d */
  if (!C.zf) goto L_12df870d;
  /* 12df871f jmp 0x12df8726 */
  goto L_12df8726;
L_12df8721:;
  /* 12df8721 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12df8723 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12df8726:;
  /* 12df8726 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12df872b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12df872d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df872f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df8732 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12df8734 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df8736 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8739 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12df873e je 0x12df8721 */
  if (C.zf) goto L_12df8721;
  /* 12df8740 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12df8742 je 0x12df8778 */
  if (C.zf) goto L_12df8778;
  /* 12df8744 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12df8746 je 0x12df876f */
  if (C.zf) goto L_12df876f;
  /* 12df8748 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12df874e je 0x12df8762 */
  if (C.zf) goto L_12df8762;
  /* 12df8750 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12df8756 je 0x12df875a */
  if (C.zf) goto L_12df875a;
  /* 12df8758 jmp 0x12df8721 */
  goto L_12df8721;
L_12df875a:;
  /* 12df875a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12df875c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12df8760 pop edi */
  EDI = (pop32());
  /* 12df8761 ret  */
  ESPCHK(0x12df86a0u, _esp0);
  ESP += 4; return;
L_12df8762:;
  /* 12df8762 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12df8765 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12df8769 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12df876d pop edi */
  EDI = (pop32());
  /* 12df876e ret  */
  ESPCHK(0x12df86a0u, _esp0);
  ESP += 4; return;
L_12df876f:;
  /* 12df876f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12df8772 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12df8776 pop edi */
  EDI = (pop32());
  /* 12df8777 ret  */
  ESPCHK(0x12df86a0u, _esp0);
  ESP += 4; return;
L_12df8778:;
  /* 12df8778 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12df877a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12df877e pop edi */
  EDI = (pop32());
  /* 12df877f ret  */
  ESPCHK(0x12df86a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x12df8780 (243 bytes, 91 insns) */
void f_12df8780(void) {
  FTRACE(0x12df8780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8780 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8781 mov ebp, esp */
  EBP = (ESP);
  /* 12df8783 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8786 push ebx */
  push32((uint32_t)(EBX));
  /* 12df8787 push esi */
  push32((uint32_t)(ESI));
  /* 12df8788 push edi */
  push32((uint32_t)(EDI));
  /* 12df8789 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12df878c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12df878f:;
  /* 12df878f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8793 jne 0x12df87b3 */
  if (!C.zf) goto L_12df87b3;
  /* 12df8795 push 0x12e1b980 */
  push32((uint32_t)(0x12e1b980u));
  /* 12df879a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df879c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12df879e push 0x12e1c6e0 */
  push32((uint32_t)(0x12e1c6e0u));
  /* 12df87a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df87a5 call 0x12df3680 */
  push32(0x12df87aau); f_12df3680();
  /* 12df87aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df87ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df87b0 jne 0x12df87b3 */
  if (!C.zf) goto L_12df87b3;
  /* 12df87b2 int3  */
  x86_unimpl("int3 @ 0x12df87b2");
L_12df87b3:;
  /* 12df87b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df87b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df87b7 jne 0x12df878f */
  if (!C.zf) goto L_12df878f;
L_12df87b9:;
  /* 12df87b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df87bd jne 0x12df87dd */
  if (!C.zf) goto L_12df87dd;
  /* 12df87bf push 0x12e1b964 */
  push32((uint32_t)(0x12e1b964u));
  /* 12df87c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df87c6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12df87c8 push 0x12e1c6e0 */
  push32((uint32_t)(0x12e1c6e0u));
  /* 12df87cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12df87cf call 0x12df3680 */
  push32(0x12df87d4u); f_12df3680();
  /* 12df87d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df87d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df87da jne 0x12df87dd */
  if (!C.zf) goto L_12df87dd;
  /* 12df87dc int3  */
  x86_unimpl("int3 @ 0x12df87dc");
L_12df87dd:;
  /* 12df87dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df87df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df87e1 jne 0x12df87b9 */
  if (!C.zf) goto L_12df87b9;
  /* 12df87e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df87e6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12df87ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df87f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df87f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12df87f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df87f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df87fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12df87fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8801 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8804 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12df8807 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12df880a push ecx */
  push32((uint32_t)(ECX));
  /* 12df880b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df880e push edx */
  push32((uint32_t)(EDX));
  /* 12df880f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8812 push eax */
  push32((uint32_t)(EAX));
  /* 12df8813 call 0x12df3fa0 */
  push32(0x12df8818u); f_12df3fa0();
  /* 12df8818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df881b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12df881e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8821 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12df8824 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8827 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df882a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12df882d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8830 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8834 jl 0x12df8858 */
  if ((C.sf!=C.of)) goto L_12df8858;
  /* 12df8836 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df883b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12df883e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df8840 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12df8846 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12df8849 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df884c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df884e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8851 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df8854 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12df8856 jmp 0x12df8869 */
  goto L_12df8869;
L_12df8858:;
  /* 12df8858 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12df885b push edx */
  push32((uint32_t)(EDX));
  /* 12df885c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df885e call 0x12df3d20 */
  push32(0x12df8863u); f_12df3d20();
  /* 12df8863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8866 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12df8869:;
  /* 12df8869 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12df886c pop edi */
  EDI = (pop32());
  /* 12df886d pop esi */
  ESI = (pop32());
  /* 12df886e pop ebx */
  EBX = (pop32());
  /* 12df886f mov esp, ebp */
  ESP = (EBP);
  /* 12df8871 pop ebp */
  EBP = (pop32());
  /* 12df8872 ret  */
  ESPCHK(0x12df8780u, _esp0);
  ESP += 4; return;
}

/* FUN_10008880 @ 0x12df8880 (47 bytes, 17 insns) */
void f_12df8880(void) {
  FTRACE(0x12df8880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8880 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8881 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8886 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12df888a jb 0x12df88a0 */
  if (C.cf) goto L_12df88a0;
L_12df888c:;
  /* 12df888c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8892 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8897 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12df8899 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df889e jae 0x12df888c */
  if (!C.cf) goto L_12df888c;
L_12df88a0:;
  /* 12df88a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df88a2 mov eax, esp */
  EAX = (ESP);
  /* 12df88a4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12df88a6 mov esp, ecx */
  ESP = (ECX);
  /* 12df88a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df88aa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12df88ad push eax */
  push32((uint32_t)(EAX));
  /* 12df88ae ret  */
  ESPCHK(0x12df8880u, _esp0);
  ESP += 4; return;
}

/* FUN_100088b0 @ 0x12df88b0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12df88b0(void) {
  FTRACE(0x12df88b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df88b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df88b1 mov ebp, esp */
  EBP = (ESP);
  /* 12df88b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df88b6 push esi */
  push32((uint32_t)(ESI));
  /* 12df88b7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df88bb je 0x12df88c3 */
  if (C.zf) goto L_12df88c3;
  /* 12df88bd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df88c1 jne 0x12df88c8 */
  if (!C.zf) goto L_12df88c8;
L_12df88c3:;
  /* 12df88c3 jmp 0x12df8a98 */
  goto L_12df8a98;
L_12df88c8:;
  /* 12df88c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df88cc je 0x12df88e4 */
  if (C.zf) goto L_12df88e4;
  /* 12df88ce cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df88d2 je 0x12df88e4 */
  if (C.zf) goto L_12df88e4;
  /* 12df88d4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df88d8 je 0x12df88e4 */
  if (C.zf) goto L_12df88e4;
  /* 12df88da cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df88de jne 0x12df89c1 */
  if (!C.zf) goto L_12df89c1;
L_12df88e4:;
  /* 12df88e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df88e6 call 0x12df9a90 */
  push32(0x12df88ebu); f_12df9a90();
  /* 12df88eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df88ee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df88f2 je 0x12df88fa */
  if (C.zf) goto L_12df88fa;
  /* 12df88f4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df88f8 jne 0x12df893f */
  if (!C.zf) goto L_12df893f;
L_12df88fa:;
  /* 12df88fa cmp dword ptr [0x12e2081c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e2081c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8901 jne 0x12df893f */
  if (!C.zf) goto L_12df893f;
  /* 12df8903 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8905 push 0x12df8ae0 */
  push32((uint32_t)(0x12df8ae0u));
  /* 12df890a call dword ptr [0x12e23298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23298))), 0x12df8910u);
  /* 12df8910 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8913 jne 0x12df8921 */
  if (!C.zf) goto L_12df8921;
  /* 12df8915 mov dword ptr [0x12e2081c], 1 */
  w32((uint32_t)(0x12e2081c), (0x1u));
  /* 12df891f jmp 0x12df893f */
  goto L_12df893f;
L_12df8921:;
  /* 12df8921 call dword ptr [0x12e23250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23250))), 0x12df8927u);
  /* 12df8927 mov esi, eax */
  ESI = (EAX);
  /* 12df8929 call 0x12dfcc60 */
  push32(0x12df892eu); f_12dfcc60();
  /* 12df892e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12df8930 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8932 call 0x12df9b30 */
  push32(0x12df8937u); f_12df9b30();
  /* 12df8937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df893a jmp 0x12df8a98 */
  goto L_12df8a98;
L_12df893f:;
  /* 12df893f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8942 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12df8945 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df8948 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df894b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12df894e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8952 ja 0x12df89b2 */
  if ((!C.cf&&!C.zf)) goto L_12df89b2;
  /* 12df8954 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df8957 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df8959 mov dl, byte ptr [eax + 0x12df8abf] */
  DL = (r8((uint32_t)(EAX + 0x12df8abf)));
  /* 12df895f jmp dword ptr [edx*4 + 0x12df8aab] */
  switch (EDX) {
    case 0: goto L_12df8966;
    case 1: goto L_12df89a0;
    case 2: goto L_12df897a;
    case 3: goto L_12df898d;
    case 4: goto L_12df89b2;
    default: x86_unimpl("switch@0x12df895f out of table"); return;
  }
L_12df8966:;
  /* 12df8966 mov ecx, dword ptr [0x12e2080c] */
  ECX = (r32((uint32_t)(0x12e2080c)));
  /* 12df896c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12df896f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8972 mov dword ptr [0x12e2080c], edx */
  w32((uint32_t)(0x12e2080c), (EDX));
  /* 12df8978 jmp 0x12df89b2 */
  goto L_12df89b2;
L_12df897a:;
  /* 12df897a mov eax, dword ptr [0x12e20810] */
  EAX = (r32((uint32_t)(0x12e20810)));
  /* 12df897f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df8982 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8985 mov dword ptr [0x12e20810], ecx */
  w32((uint32_t)(0x12e20810), (ECX));
  /* 12df898b jmp 0x12df89b2 */
  goto L_12df89b2;
L_12df898d:;
  /* 12df898d mov edx, dword ptr [0x12e20814] */
  EDX = (r32((uint32_t)(0x12e20814)));
  /* 12df8993 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12df8996 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8999 mov dword ptr [0x12e20814], eax */
  w32((uint32_t)(0x12e20814), (EAX));
  /* 12df899e jmp 0x12df89b2 */
  goto L_12df89b2;
L_12df89a0:;
  /* 12df89a0 mov ecx, dword ptr [0x12e20818] */
  ECX = (r32((uint32_t)(0x12e20818)));
  /* 12df89a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12df89a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df89ac mov dword ptr [0x12e20818], edx */
  w32((uint32_t)(0x12e20818), (EDX));
L_12df89b2:;
  /* 12df89b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df89b4 call 0x12df9b30 */
  push32(0x12df89b9u); f_12df9b30();
  /* 12df89b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df89bc jmp 0x12df8a93 */
  goto L_12df8a93;
L_12df89c1:;
  /* 12df89c1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df89c5 je 0x12df89d8 */
  if (C.zf) goto L_12df89d8;
  /* 12df89c7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df89cb je 0x12df89d8 */
  if (C.zf) goto L_12df89d8;
  /* 12df89cd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df89d1 je 0x12df89d8 */
  if (C.zf) goto L_12df89d8;
  /* 12df89d3 jmp 0x12df8a98 */
  goto L_12df8a98;
L_12df89d8:;
  /* 12df89d8 call 0x12df5120 */
  push32(0x12df89ddu); f_12df5120();
  /* 12df89dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df89e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df89e3 cmp dword ptr [eax + 0x50], 0x12e1f0c0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12e1f0c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df89ea jne 0x12df8a35 */
  if (!C.zf) goto L_12df8a35;
  /* 12df89ec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12df89f1 push 0x12e1c6ec */
  push32((uint32_t)(0x12e1c6ecu));
  /* 12df89f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df89f8 mov ecx, dword ptr [0x12e1f140] */
  ECX = (r32((uint32_t)(0x12e1f140)));
  /* 12df89fe push ecx */
  push32((uint32_t)(ECX));
  /* 12df89ff call 0x12df56e0 */
  push32(0x12df8a04u); f_12df56e0();
  /* 12df8a04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8a07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8a0a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12df8a0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8a10 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8a14 je 0x12df8a33 */
  if (C.zf) goto L_12df8a33;
  /* 12df8a16 mov ecx, dword ptr [0x12e1f140] */
  ECX = (r32((uint32_t)(0x12e1f140)));
  /* 12df8a1c push ecx */
  push32((uint32_t)(ECX));
  /* 12df8a1d push 0x12e1f0c0 */
  push32((uint32_t)(0x12e1f0c0u));
  /* 12df8a22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8a25 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12df8a28 push eax */
  push32((uint32_t)(EAX));
  /* 12df8a29 call 0x12dfc870 */
  push32(0x12df8a2eu); f_12dfc870();
  /* 12df8a2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8a31 jmp 0x12df8a35 */
  goto L_12df8a35;
L_12df8a33:;
  /* 12df8a33 jmp 0x12df8a98 */
  goto L_12df8a98;
L_12df8a35:;
  /* 12df8a35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8a38 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12df8a3b push edx */
  push32((uint32_t)(EDX));
  /* 12df8a3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8a3f push eax */
  push32((uint32_t)(EAX));
  /* 12df8a40 call 0x12df8dc0 */
  push32(0x12df8a45u); f_12df8dc0();
  /* 12df8a45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8a48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df8a4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8a4f jne 0x12df8a53 */
  if (!C.zf) goto L_12df8a53;
  /* 12df8a51 jmp 0x12df8a98 */
  goto L_12df8a98;
L_12df8a53:;
  /* 12df8a53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8a56 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12df8a59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12df8a5c:;
  /* 12df8a5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8a5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12df8a62 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8a65 jne 0x12df8a93 */
  if (!C.zf) goto L_12df8a93;
  /* 12df8a67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8a6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8a6d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12df8a70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8a73 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8a76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12df8a79 mov edx, dword ptr [0x12e1f144] */
  EDX = (r32((uint32_t)(0x12e1f144)));
  /* 12df8a7f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df8a82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8a85 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12df8a88 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8a8a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8a8d jb 0x12df8a91 */
  if (C.cf) goto L_12df8a91;
  /* 12df8a8f jmp 0x12df8a93 */
  goto L_12df8a93;
L_12df8a91:;
  /* 12df8a91 jmp 0x12df8a5c */
  goto L_12df8a5c;
L_12df8a93:;
  /* 12df8a93 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df8a96 jmp 0x12df8aa6 */
  goto L_12df8aa6;
L_12df8a98:;
  /* 12df8a98 call 0x12dfcc50 */
  push32(0x12df8a9du); f_12dfcc50();
  /* 12df8a9d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12df8aa3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12df8aa6:;
  /* 12df8aa6 pop esi */
  ESI = (pop32());
  /* 12df8aa7 mov esp, ebp */
  ESP = (EBP);
  /* 12df8aa9 pop ebp */
  EBP = (pop32());
  /* 12df8aaa ret  */
  ESPCHK(0x12df88b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae0 @ 0x12df8ae0 (146 bytes, 45 insns) */
void f_12df8ae0(void) {
  FTRACE(0x12df8ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12df8ae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8ae6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8ae8 call 0x12df9a90 */
  push32(0x12df8aedu); f_12df9a90();
  /* 12df8aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8af0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8af4 jne 0x12df8b0e */
  if (!C.zf) goto L_12df8b0e;
  /* 12df8af6 mov dword ptr [ebp - 8], 0x12e2080c */
  w32((uint32_t)(EBP + -0x8), (0x12e2080cu));
  /* 12df8afd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8b00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12df8b02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12df8b05 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12df8b0c jmp 0x12df8b24 */
  goto L_12df8b24;
L_12df8b0e:;
  /* 12df8b0e mov dword ptr [ebp - 8], 0x12e20810 */
  w32((uint32_t)(EBP + -0x8), (0x12e20810u));
  /* 12df8b15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8b18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df8b1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df8b1d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12df8b24:;
  /* 12df8b24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8b28 jne 0x12df8b38 */
  if (!C.zf) goto L_12df8b38;
  /* 12df8b2a push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8b2c call 0x12df9b30 */
  push32(0x12df8b31u); f_12df9b30();
  /* 12df8b31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df8b36 jmp 0x12df8b6c */
  goto L_12df8b6c;
L_12df8b38:;
  /* 12df8b38 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8b3c je 0x12df8b5d */
  if (C.zf) goto L_12df8b5d;
  /* 12df8b3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8b41 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12df8b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8b49 call 0x12df9b30 */
  push32(0x12df8b4eu); f_12df9b30();
  /* 12df8b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8b51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8b54 push edx */
  push32((uint32_t)(EDX));
  /* 12df8b55 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12df8b58u);
  /* 12df8b58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8b5b jmp 0x12df8b67 */
  goto L_12df8b67;
L_12df8b5d:;
  /* 12df8b5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8b5f call 0x12df9b30 */
  push32(0x12df8b64u); f_12df9b30();
  /* 12df8b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df8b67:;
  /* 12df8b67 mov eax, 1 */
  EAX = (0x1u);
L_12df8b6c:;
  /* 12df8b6c mov esp, ebp */
  ESP = (EBP);
  /* 12df8b6e pop ebp */
  EBP = (pop32());
  /* 12df8b6f ret 4 */
  ESPCHK(0x12df8ae0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008b80 @ 0x12df8b80 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12df8b80(void) {
  FTRACE(0x12df8b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8b81 mov ebp, esp */
  EBP = (ESP);
  /* 12df8b83 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8b86 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12df8b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8b90 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12df8b93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12df8b96 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8b99 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12df8b9c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8ba0 ja 0x12df8c4e */
  if ((!C.cf&&!C.zf)) goto L_12df8c4e;
  /* 12df8ba6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12df8ba9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df8bab mov dl, byte ptr [eax + 0x12df8da2] */
  DL = (r8((uint32_t)(EAX + 0x12df8da2)));
  /* 12df8bb1 jmp dword ptr [edx*4 + 0x12df8d8a] */
  switch (EDX) {
    case 0: goto L_12df8bb8;
    case 1: goto L_12df8c23;
    case 2: goto L_12df8c09;
    case 3: goto L_12df8bd5;
    case 4: goto L_12df8bef;
    case 5: goto L_12df8c4e;
    default: x86_unimpl("switch@0x12df8bb1 out of table"); return;
  }
L_12df8bb8:;
  /* 12df8bb8 mov dword ptr [ebp - 0x18], 0x12e2080c */
  w32((uint32_t)(EBP + -0x18), (0x12e2080cu));
  /* 12df8bbf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df8bc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df8bc4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12df8bc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df8bca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8bcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df8bd0 jmp 0x12df8c56 */
  goto L_12df8c56;
L_12df8bd5:;
  /* 12df8bd5 mov dword ptr [ebp - 0x18], 0x12e20810 */
  w32((uint32_t)(EBP + -0x18), (0x12e20810u));
  /* 12df8bdc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df8bdf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df8be1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12df8be4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df8be7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8bea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df8bed jmp 0x12df8c56 */
  goto L_12df8c56;
L_12df8bef:;
  /* 12df8bef mov dword ptr [ebp - 0x18], 0x12e20814 */
  w32((uint32_t)(EBP + -0x18), (0x12e20814u));
  /* 12df8bf6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df8bf9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df8bfb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12df8bfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df8c01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8c04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df8c07 jmp 0x12df8c56 */
  goto L_12df8c56;
L_12df8c09:;
  /* 12df8c09 mov dword ptr [ebp - 0x18], 0x12e20818 */
  w32((uint32_t)(EBP + -0x18), (0x12e20818u));
  /* 12df8c10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df8c13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df8c15 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12df8c18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df8c1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8c1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df8c21 jmp 0x12df8c56 */
  goto L_12df8c56;
L_12df8c23:;
  /* 12df8c23 call 0x12df5120 */
  push32(0x12df8c28u); f_12df5120();
  /* 12df8c28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df8c2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8c2e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12df8c31 push edx */
  push32((uint32_t)(EDX));
  /* 12df8c32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8c35 push eax */
  push32((uint32_t)(EAX));
  /* 12df8c36 call 0x12df8dc0 */
  push32(0x12df8c3bu); f_12df8dc0();
  /* 12df8c3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8c3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8c41 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12df8c44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df8c47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df8c49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12df8c4c jmp 0x12df8c56 */
  goto L_12df8c56;
L_12df8c4e:;
  /* 12df8c4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df8c51 jmp 0x12df8d86 */
  goto L_12df8d86;
L_12df8c56:;
  /* 12df8c56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8c5a je 0x12df8c66 */
  if (C.zf) goto L_12df8c66;
  /* 12df8c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8c5e call 0x12df9a90 */
  push32(0x12df8c63u); f_12df9a90();
  /* 12df8c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df8c66:;
  /* 12df8c66 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8c6a jne 0x12df8c83 */
  if (!C.zf) goto L_12df8c83;
  /* 12df8c6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8c70 je 0x12df8c7c */
  if (C.zf) goto L_12df8c7c;
  /* 12df8c72 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8c74 call 0x12df9b30 */
  push32(0x12df8c79u); f_12df9b30();
  /* 12df8c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df8c7c:;
  /* 12df8c7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df8c7e jmp 0x12df8d86 */
  goto L_12df8d86;
L_12df8c83:;
  /* 12df8c83 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8c87 jne 0x12df8ca0 */
  if (!C.zf) goto L_12df8ca0;
  /* 12df8c89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8c8d je 0x12df8c99 */
  if (C.zf) goto L_12df8c99;
  /* 12df8c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8c91 call 0x12df9b30 */
  push32(0x12df8c96u); f_12df9b30();
  /* 12df8c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df8c99:;
  /* 12df8c99 push 3 */
  push32((uint32_t)(0x3u));
  /* 12df8c9b call 0x12df4ea0 */
  push32(0x12df8ca0u); f_12df4ea0();
L_12df8ca0:;
  /* 12df8ca0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8ca4 je 0x12df8cb2 */
  if (C.zf) goto L_12df8cb2;
  /* 12df8ca6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8caa je 0x12df8cb2 */
  if (C.zf) goto L_12df8cb2;
  /* 12df8cac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8cb0 jne 0x12df8cde */
  if (!C.zf) goto L_12df8cde;
L_12df8cb2:;
  /* 12df8cb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8cb5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12df8cb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12df8cbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8cbe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12df8cc5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8cc9 jne 0x12df8cde */
  if (!C.zf) goto L_12df8cde;
  /* 12df8ccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8cce mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12df8cd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12df8cd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8cd7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12df8cde:;
  /* 12df8cde cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8ce2 jne 0x12df8d20 */
  if (!C.zf) goto L_12df8d20;
  /* 12df8ce4 mov eax, dword ptr [0x12e1f138] */
  EAX = (r32((uint32_t)(0x12e1f138)));
  /* 12df8ce9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12df8cec jmp 0x12df8cf7 */
  goto L_12df8cf7;
L_12df8cee:;
  /* 12df8cee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df8cf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8cf4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12df8cf7:;
  /* 12df8cf7 mov edx, dword ptr [0x12e1f138] */
  EDX = (r32((uint32_t)(0x12e1f138)));
  /* 12df8cfd add edx, dword ptr [0x12e1f13c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e1f13c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8d03 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8d06 jge 0x12df8d1e */
  if ((C.sf==C.of)) goto L_12df8d1e;
  /* 12df8d08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df8d0b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df8d0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8d11 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12df8d14 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12df8d1c jmp 0x12df8cee */
  goto L_12df8cee;
L_12df8d1e:;
  /* 12df8d1e jmp 0x12df8d29 */
  goto L_12df8d29;
L_12df8d20:;
  /* 12df8d20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df8d23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12df8d29:;
  /* 12df8d29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8d2d je 0x12df8d39 */
  if (C.zf) goto L_12df8d39;
  /* 12df8d2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12df8d31 call 0x12df9b30 */
  push32(0x12df8d36u); f_12df9b30();
  /* 12df8d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df8d39:;
  /* 12df8d39 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8d3d jne 0x12df8d50 */
  if (!C.zf) goto L_12df8d50;
  /* 12df8d3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8d42 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12df8d45 push edx */
  push32((uint32_t)(EDX));
  /* 12df8d46 push 8 */
  push32((uint32_t)(0x8u));
  /* 12df8d48 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12df8d4bu);
  /* 12df8d4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8d4e jmp 0x12df8d5a */
  goto L_12df8d5a;
L_12df8d50:;
  /* 12df8d50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8d53 push eax */
  push32((uint32_t)(EAX));
  /* 12df8d54 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12df8d57u);
  /* 12df8d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df8d5a:;
  /* 12df8d5a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8d5e je 0x12df8d6c */
  if (C.zf) goto L_12df8d6c;
  /* 12df8d60 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8d64 je 0x12df8d6c */
  if (C.zf) goto L_12df8d6c;
  /* 12df8d66 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8d6a jne 0x12df8d84 */
  if (!C.zf) goto L_12df8d84;
L_12df8d6c:;
  /* 12df8d6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8d6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df8d72 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12df8d75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8d79 jne 0x12df8d84 */
  if (!C.zf) goto L_12df8d84;
  /* 12df8d7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8d7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8d81 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12df8d84:;
  /* 12df8d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12df8d86:;
  /* 12df8d86 mov esp, ebp */
  ESP = (EBP);
  /* 12df8d88 pop ebp */
  EBP = (pop32());
  /* 12df8d89 ret  */
  ESPCHK(0x12df8b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dc0 @ 0x12df8dc0 (91 bytes, 35 insns) */
void f_12df8dc0(void) {
  FTRACE(0x12df8dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12df8dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8dc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8dc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df8dca:;
  /* 12df8dca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8dcd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12df8dd0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8dd3 je 0x12df8df3 */
  if (C.zf) goto L_12df8df3;
  /* 12df8dd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8dd8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8ddb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df8dde mov ecx, dword ptr [0x12e1f144] */
  ECX = (r32((uint32_t)(0x12e1f144)));
  /* 12df8de4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df8de7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8dea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8dec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8def jae 0x12df8df3 */
  if (!C.cf) goto L_12df8df3;
  /* 12df8df1 jmp 0x12df8dca */
  goto L_12df8dca;
L_12df8df3:;
  /* 12df8df3 mov eax, dword ptr [0x12e1f144] */
  EAX = (r32((uint32_t)(0x12e1f144)));
  /* 12df8df8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df8dfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8dfe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8e00 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8e03 jae 0x12df8e15 */
  if (!C.cf) goto L_12df8e15;
  /* 12df8e05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8e08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12df8e0b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8e0e jne 0x12df8e15 */
  if (!C.zf) goto L_12df8e15;
  /* 12df8e10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8e13 jmp 0x12df8e17 */
  goto L_12df8e17;
L_12df8e15:;
  /* 12df8e15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12df8e17:;
  /* 12df8e17 mov esp, ebp */
  ESP = (EBP);
  /* 12df8e19 pop ebp */
  EBP = (pop32());
  /* 12df8e1a ret  */
  ESPCHK(0x12df8dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e20 @ 0x12df8e20 (13 bytes, 6 insns) */
void f_12df8e20(void) {
  FTRACE(0x12df8e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8e21 mov ebp, esp */
  EBP = (ESP);
  /* 12df8e23 call 0x12df5120 */
  push32(0x12df8e28u); f_12df5120();
  /* 12df8e28 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8e2b pop ebp */
  EBP = (pop32());
  /* 12df8e2c ret  */
  ESPCHK(0x12df8e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x12df8e30 (13 bytes, 6 insns) */
void f_12df8e30(void) {
  FTRACE(0x12df8e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8e31 mov ebp, esp */
  EBP = (ESP);
  /* 12df8e33 call 0x12df5120 */
  push32(0x12df8e38u); f_12df5120();
  /* 12df8e38 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8e3b pop ebp */
  EBP = (pop32());
  /* 12df8e3c ret  */
  ESPCHK(0x12df8e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e40 @ 0x12df8e40 (187 bytes, 54 insns) */
void f_12df8e40(void) {
  FTRACE(0x12df8e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12df8e41 mov ebp, esp */
  EBP = (ESP);
  /* 12df8e43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df8e46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df8e4d cmp dword ptr [0x12e20820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8e54 jne 0x12df8eb3 */
  if (!C.zf) goto L_12df8eb3;
  /* 12df8e56 push 0x12e1ba5c */
  push32((uint32_t)(0x12e1ba5cu));
  /* 12df8e5b call dword ptr [0x12e23220] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23220))), 0x12df8e61u);
  /* 12df8e61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df8e64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8e68 je 0x12df8e87 */
  if (C.zf) goto L_12df8e87;
  /* 12df8e6a push 0x12e1c71c */
  push32((uint32_t)(0x12e1c71cu));
  /* 12df8e6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8e72 push eax */
  push32((uint32_t)(EAX));
  /* 12df8e73 call dword ptr [0x12e23288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23288))), 0x12df8e79u);
  /* 12df8e79 mov dword ptr [0x12e20820], eax */
  w32((uint32_t)(0x12e20820), (EAX));
  /* 12df8e7e cmp dword ptr [0x12e20820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8e85 jne 0x12df8e8b */
  if (!C.zf) goto L_12df8e8b;
L_12df8e87:;
  /* 12df8e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df8e89 jmp 0x12df8ef7 */
  goto L_12df8ef7;
L_12df8e8b:;
  /* 12df8e8b push 0x12e1c70c */
  push32((uint32_t)(0x12e1c70cu));
  /* 12df8e90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8e93 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8e94 call dword ptr [0x12e23288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23288))), 0x12df8e9au);
  /* 12df8e9a mov dword ptr [0x12e20824], eax */
  w32((uint32_t)(0x12e20824), (EAX));
  /* 12df8e9f push 0x12e1c6f8 */
  push32((uint32_t)(0x12e1c6f8u));
  /* 12df8ea4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df8ea7 push edx */
  push32((uint32_t)(EDX));
  /* 12df8ea8 call dword ptr [0x12e23288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23288))), 0x12df8eaeu);
  /* 12df8eae mov dword ptr [0x12e20828], eax */
  w32((uint32_t)(0x12e20828), (EAX));
L_12df8eb3:;
  /* 12df8eb3 cmp dword ptr [0x12e20824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8eba je 0x12df8ec5 */
  if (C.zf) goto L_12df8ec5;
  /* 12df8ebc call dword ptr [0x12e20824] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20824))), 0x12df8ec2u);
  /* 12df8ec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df8ec5:;
  /* 12df8ec5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8ec9 je 0x12df8ee1 */
  if (C.zf) goto L_12df8ee1;
  /* 12df8ecb cmp dword ptr [0x12e20828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df8ed2 je 0x12df8ee1 */
  if (C.zf) goto L_12df8ee1;
  /* 12df8ed4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8ed7 push eax */
  push32((uint32_t)(EAX));
  /* 12df8ed8 call dword ptr [0x12e20828] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20828))), 0x12df8edeu);
  /* 12df8ede mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df8ee1:;
  /* 12df8ee1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df8ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8ee5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df8ee8 push edx */
  push32((uint32_t)(EDX));
  /* 12df8ee9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df8eec push eax */
  push32((uint32_t)(EAX));
  /* 12df8eed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df8ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 12df8ef1 call dword ptr [0x12e20820] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e20820))), 0x12df8ef7u);
L_12df8ef7:;
  /* 12df8ef7 mov esp, ebp */
  ESP = (EBP);
  /* 12df8ef9 pop ebp */
  EBP = (pop32());
  /* 12df8efa ret  */
  ESPCHK(0x12df8e40u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12df8f00 (254 bytes, 109 insns) */
void f_12df8f00(void) {
  FTRACE(0x12df8f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df8f00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12df8f04 push edi */
  push32((uint32_t)(EDI));
  /* 12df8f05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df8f07 je 0x12df8f83 */
  if (C.zf) goto L_12df8f83;
  /* 12df8f09 push esi */
  push32((uint32_t)(ESI));
  /* 12df8f0a push ebx */
  push32((uint32_t)(EBX));
  /* 12df8f0b mov ebx, ecx */
  EBX = (ECX);
  /* 12df8f0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12df8f11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12df8f17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12df8f1b jne 0x12df8f24 */
  if (!C.zf) goto L_12df8f24;
  /* 12df8f1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12df8f20 jne 0x12df8f91 */
  if (!C.zf) goto L_12df8f91;
  /* 12df8f22 jmp 0x12df8f45 */
  goto L_12df8f45;
L_12df8f24:;
  /* 12df8f24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12df8f26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12df8f27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12df8f29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12df8f2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12df8f2b je 0x12df8f52 */
  if (C.zf) goto L_12df8f52;
  /* 12df8f2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12df8f2f je 0x12df8f5a */
  if (C.zf) goto L_12df8f5a;
  /* 12df8f31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12df8f37 jne 0x12df8f24 */
  if (!C.zf) goto L_12df8f24;
  /* 12df8f39 mov ebx, ecx */
  EBX = (ECX);
  /* 12df8f3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12df8f3e jne 0x12df8f91 */
  if (!C.zf) goto L_12df8f91;
L_12df8f40:;
  /* 12df8f40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12df8f43 je 0x12df8f52 */
  if (C.zf) goto L_12df8f52;
L_12df8f45:;
  /* 12df8f45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12df8f47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12df8f48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12df8f4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12df8f4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12df8f4d je 0x12df8f7e */
  if (C.zf) goto L_12df8f7e;
  /* 12df8f4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12df8f50 jne 0x12df8f45 */
  if (!C.zf) goto L_12df8f45;
L_12df8f52:;
  /* 12df8f52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12df8f56 pop ebx */
  EBX = (pop32());
  /* 12df8f57 pop esi */
  ESI = (pop32());
  /* 12df8f58 pop edi */
  EDI = (pop32());
  /* 12df8f59 ret  */
  ESPCHK(0x12df8f00u, _esp0);
  ESP += 4; return;
L_12df8f5a:;
  /* 12df8f5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12df8f60 je 0x12df8f74 */
  if (C.zf) goto L_12df8f74;
L_12df8f62:;
  /* 12df8f62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12df8f64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12df8f65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12df8f66 je 0x12df8ff6 */
  if (C.zf) goto L_12df8ff6;
  /* 12df8f6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12df8f72 jne 0x12df8f62 */
  if (!C.zf) goto L_12df8f62;
L_12df8f74:;
  /* 12df8f74 mov ebx, ecx */
  EBX = (ECX);
  /* 12df8f76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12df8f79 jne 0x12df8fe7 */
  if (!C.zf) goto L_12df8fe7;
L_12df8f7b:;
  /* 12df8f7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12df8f7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12df8f7e:;
  /* 12df8f7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12df8f7f jne 0x12df8f7b */
  if (!C.zf) goto L_12df8f7b;
  /* 12df8f81 pop ebx */
  EBX = (pop32());
  /* 12df8f82 pop esi */
  ESI = (pop32());
L_12df8f83:;
  /* 12df8f83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12df8f87 pop edi */
  EDI = (pop32());
  /* 12df8f88 ret  */
  ESPCHK(0x12df8f00u, _esp0);
  ESP += 4; return;
L_12df8f89:;
  /* 12df8f89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12df8f8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8f8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12df8f8f je 0x12df8f40 */
  if (C.zf) goto L_12df8f40;
L_12df8f91:;
  /* 12df8f91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12df8f96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12df8f98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8f9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df8f9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12df8f9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12df8fa1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8fa4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12df8fa9 je 0x12df8f89 */
  if (C.zf) goto L_12df8f89;
  /* 12df8fab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12df8fad je 0x12df8fdb */
  if (C.zf) goto L_12df8fdb;
  /* 12df8faf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12df8fb1 je 0x12df8fd1 */
  if (C.zf) goto L_12df8fd1;
  /* 12df8fb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12df8fb9 je 0x12df8fc7 */
  if (C.zf) goto L_12df8fc7;
  /* 12df8fbb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12df8fc1 jne 0x12df8f89 */
  if (!C.zf) goto L_12df8f89;
  /* 12df8fc3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12df8fc5 jmp 0x12df8fdf */
  goto L_12df8fdf;
L_12df8fc7:;
  /* 12df8fc7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df8fcd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12df8fcf jmp 0x12df8fdf */
  goto L_12df8fdf;
L_12df8fd1:;
  /* 12df8fd1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12df8fd7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12df8fd9 jmp 0x12df8fdf */
  goto L_12df8fdf;
L_12df8fdb:;
  /* 12df8fdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df8fdd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12df8fdf:;
  /* 12df8fdf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8fe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df8fe4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12df8fe5 je 0x12df8ff1 */
  if (C.zf) goto L_12df8ff1;
L_12df8fe7:;
  /* 12df8fe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12df8fe9:;
  /* 12df8fe9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12df8feb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12df8fee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12df8fef jne 0x12df8fe9 */
  if (!C.zf) goto L_12df8fe9;
L_12df8ff1:;
  /* 12df8ff1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12df8ff4 jne 0x12df8f7b */
  if (!C.zf) goto L_12df8f7b;
L_12df8ff6:;
  /* 12df8ff6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12df8ffa pop ebx */
  EBX = (pop32());
  /* 12df8ffb pop esi */
  ESI = (pop32());
  /* 12df8ffc pop edi */
  EDI = (pop32());
  /* 12df8ffd ret  */
  ESPCHK(0x12df8f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009000 @ 0x12df9000 (130 bytes, 43 insns) */
void f_12df9000(void) {
  FTRACE(0x12df9000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9000 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9001 mov ebp, esp */
  EBP = (ESP);
  /* 12df9003 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9007 cmp eax, dword ptr [0x12e2219c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e2219c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df900d jae 0x12df9031 */
  if (!C.cf) goto L_12df9031;
  /* 12df900f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9012 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12df9015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9018 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12df901b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df901e mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12df9025 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12df902a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12df902d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df902f jne 0x12df904c */
  if (!C.zf) goto L_12df904c;
L_12df9031:;
  /* 12df9031 call 0x12dfcc50 */
  push32(0x12df9036u); f_12dfcc50();
  /* 12df9036 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12df903c call 0x12dfcc60 */
  push32(0x12df9041u); f_12dfcc60();
  /* 12df9041 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12df9047 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df904a jmp 0x12df907e */
  goto L_12df907e;
L_12df904c:;
  /* 12df904c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df904f push edx */
  push32((uint32_t)(EDX));
  /* 12df9050 call 0x12dfd180 */
  push32(0x12df9055u); f_12dfd180();
  /* 12df9055 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9058 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df905b push eax */
  push32((uint32_t)(EAX));
  /* 12df905c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df905f push ecx */
  push32((uint32_t)(ECX));
  /* 12df9060 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9063 push edx */
  push32((uint32_t)(EDX));
  /* 12df9064 call 0x12df9090 */
  push32(0x12df9069u); f_12df9090();
  /* 12df9069 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df906c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df906f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9072 push eax */
  push32((uint32_t)(EAX));
  /* 12df9073 call 0x12dfd210 */
  push32(0x12df9078u); f_12dfd210();
  /* 12df9078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df907b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12df907e:;
  /* 12df907e mov esp, ebp */
  ESP = (EBP);
  /* 12df9080 pop ebp */
  EBP = (pop32());
  /* 12df9081 ret  */
  ESPCHK(0x12df9000u, _esp0);
  ESP += 4; return;
}

/* FUN_10009090 @ 0x12df9090 (178 bytes, 56 insns) */
void f_12df9090(void) {
  FTRACE(0x12df9090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9090 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9091 mov ebp, esp */
  EBP = (ESP);
  /* 12df9093 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df9096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9099 push eax */
  push32((uint32_t)(EAX));
  /* 12df909a call 0x12dfd000 */
  push32(0x12df909fu); f_12dfd000();
  /* 12df909f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df90a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df90a5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df90a9 jne 0x12df90be */
  if (!C.zf) goto L_12df90be;
  /* 12df90ab call 0x12dfcc50 */
  push32(0x12df90b0u); f_12dfcc50();
  /* 12df90b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12df90b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df90b9 jmp 0x12df913e */
  goto L_12df913e;
L_12df90be:;
  /* 12df90be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df90c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12df90c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df90c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df90c7 push edx */
  push32((uint32_t)(EDX));
  /* 12df90c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df90cb push eax */
  push32((uint32_t)(EAX));
  /* 12df90cc call dword ptr [0x12e2329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2329c))), 0x12df90d2u);
  /* 12df90d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df90d5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df90d9 jne 0x12df90e6 */
  if (!C.zf) goto L_12df90e6;
  /* 12df90db call dword ptr [0x12e23250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23250))), 0x12df90e1u);
  /* 12df90e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df90e4 jmp 0x12df90ed */
  goto L_12df90ed;
L_12df90e6:;
  /* 12df90e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12df90ed:;
  /* 12df90ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df90f1 je 0x12df9104 */
  if (C.zf) goto L_12df9104;
  /* 12df90f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df90f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12df90f7 call 0x12dfcbb0 */
  push32(0x12df90fcu); f_12dfcbb0();
  /* 12df90fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df90ff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df9102 jmp 0x12df913e */
  goto L_12df913e;
L_12df9104:;
  /* 12df9104 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9107 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12df910a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df910d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12df9110 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9113 mov ecx, dword ptr [edx*4 + 0x12e22060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e22060)));
  /* 12df911a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12df911e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12df9121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9124 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12df9127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df912a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12df912d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9130 mov eax, dword ptr [eax*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12df9137 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12df913b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12df913e:;
  /* 12df913e mov esp, ebp */
  ESP = (EBP);
  /* 12df9140 pop ebp */
  EBP = (pop32());
  /* 12df9141 ret  */
  ESPCHK(0x12df9090u, _esp0);
  ESP += 4; return;
}

/* FUN_10009150 @ 0x12df9150 (130 bytes, 43 insns) */
void f_12df9150(void) {
  FTRACE(0x12df9150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9150 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9151 mov ebp, esp */
  EBP = (ESP);
  /* 12df9153 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9157 cmp eax, dword ptr [0x12e2219c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e2219c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df915d jae 0x12df9181 */
  if (!C.cf) goto L_12df9181;
  /* 12df915f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9162 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12df9165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9168 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12df916b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df916e mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12df9175 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12df917a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12df917d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df917f jne 0x12df919c */
  if (!C.zf) goto L_12df919c;
L_12df9181:;
  /* 12df9181 call 0x12dfcc50 */
  push32(0x12df9186u); f_12dfcc50();
  /* 12df9186 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12df918c call 0x12dfcc60 */
  push32(0x12df9191u); f_12dfcc60();
  /* 12df9191 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12df9197 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df919a jmp 0x12df91ce */
  goto L_12df91ce;
L_12df919c:;
  /* 12df919c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df919f push edx */
  push32((uint32_t)(EDX));
  /* 12df91a0 call 0x12dfd180 */
  push32(0x12df91a5u); f_12dfd180();
  /* 12df91a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df91a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df91ab push eax */
  push32((uint32_t)(EAX));
  /* 12df91ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df91af push ecx */
  push32((uint32_t)(ECX));
  /* 12df91b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df91b3 push edx */
  push32((uint32_t)(EDX));
  /* 12df91b4 call 0x12df91e0 */
  push32(0x12df91b9u); f_12df91e0();
  /* 12df91b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df91bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df91bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df91c2 push eax */
  push32((uint32_t)(EAX));
  /* 12df91c3 call 0x12dfd210 */
  push32(0x12df91c8u); f_12dfd210();
  /* 12df91c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df91cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12df91ce:;
  /* 12df91ce mov esp, ebp */
  ESP = (EBP);
  /* 12df91d0 pop ebp */
  EBP = (pop32());
  /* 12df91d1 ret  */
  ESPCHK(0x12df9150u, _esp0);
  ESP += 4; return;
}

/* FUN_100091e0 @ 0x12df91e0 (627 bytes, 182 insns) */
void f_12df91e0(void) {
  FTRACE(0x12df91e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df91e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df91e1 mov ebp, esp */
  EBP = (ESP);
  /* 12df91e3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df91e9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12df91f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df91f3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12df91f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df91fd jne 0x12df9206 */
  if (!C.zf) goto L_12df9206;
  /* 12df91ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9201 jmp 0x12df944f */
  goto L_12df944f;
L_12df9206:;
  /* 12df9206 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9209 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12df920c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df920f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12df9212 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9215 mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12df921c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12df9221 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12df9224 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12df9226 je 0x12df9238 */
  if (C.zf) goto L_12df9238;
  /* 12df9228 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df922a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df922c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df922f push edx */
  push32((uint32_t)(EDX));
  /* 12df9230 call 0x12df9090 */
  push32(0x12df9235u); f_12df9090();
  /* 12df9235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df9238:;
  /* 12df9238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df923b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12df923e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9241 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12df9244 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9247 mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12df924e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12df9253 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12df9258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df925a je 0x12df936c */
  if (C.zf) goto L_12df936c;
  /* 12df9260 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9263 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12df9266 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12df926d:;
  /* 12df926d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9270 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df9273 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9276 jae 0x12df936a */
  if (!C.cf) goto L_12df936a;
  /* 12df927c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12df9282 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12df9285:;
  /* 12df9285 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9288 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12df928e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df9290 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9296 jge 0x12df92f7 */
  if ((C.sf==C.of)) goto L_12df92f7;
  /* 12df9298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df929b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df929e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df92a1 jae 0x12df92f7 */
  if (!C.cf) goto L_12df92f7;
  /* 12df92a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df92a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12df92a8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12df92ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df92b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df92b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df92b7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12df92be cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df92c1 jne 0x12df92e1 */
  if (!C.zf) goto L_12df92e1;
  /* 12df92c3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12df92c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df92cc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12df92d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df92d5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12df92d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df92db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df92de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12df92e1:;
  /* 12df92e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df92e4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12df92ea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12df92ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df92ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df92f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12df92f5 jmp 0x12df9285 */
  goto L_12df9285;
L_12df92f7:;
  /* 12df92f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df92f9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12df92ff push edx */
  push32((uint32_t)(EDX));
  /* 12df9300 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9303 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12df9309 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df930b push eax */
  push32((uint32_t)(EAX));
  /* 12df930c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12df9312 push edx */
  push32((uint32_t)(EDX));
  /* 12df9313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9316 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12df9319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df931c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12df931f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9322 mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12df9329 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12df932c push eax */
  push32((uint32_t)(EAX));
  /* 12df932d call dword ptr [0x12e23214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23214))), 0x12df9333u);
  /* 12df9333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df9335 je 0x12df935a */
  if (C.zf) goto L_12df935a;
  /* 12df9337 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df933a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9340 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12df9343 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9346 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12df934c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df934e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9354 jge 0x12df9358 */
  if ((C.sf==C.of)) goto L_12df9358;
  /* 12df9356 jmp 0x12df936a */
  goto L_12df936a;
L_12df9358:;
  /* 12df9358 jmp 0x12df9365 */
  goto L_12df9365;
L_12df935a:;
  /* 12df935a call dword ptr [0x12e23250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23250))), 0x12df9360u);
  /* 12df9360 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12df9363 jmp 0x12df936a */
  goto L_12df936a;
L_12df9365:;
  /* 12df9365 jmp 0x12df926d */
  goto L_12df926d;
L_12df936a:;
  /* 12df936a jmp 0x12df93bc */
  goto L_12df93bc;
L_12df936c:;
  /* 12df936c push 0 */
  push32((uint32_t)(0x0u));
  /* 12df936e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12df9374 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9375 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12df9378 push edx */
  push32((uint32_t)(EDX));
  /* 12df9379 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df937c push eax */
  push32((uint32_t)(EAX));
  /* 12df937d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9380 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12df9383 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9386 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12df9389 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df938c mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12df9393 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12df9396 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9397 call dword ptr [0x12e23214] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23214))), 0x12df939du);
  /* 12df939d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df939f je 0x12df93b3 */
  if (C.zf) goto L_12df93b3;
  /* 12df93a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12df93a8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12df93ae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12df93b1 jmp 0x12df93bc */
  goto L_12df93bc;
L_12df93b3:;
  /* 12df93b3 call dword ptr [0x12e23250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23250))), 0x12df93b9u);
  /* 12df93b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12df93bc:;
  /* 12df93bc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df93c0 jne 0x12df9446 */
  if (!C.zf) goto L_12df9446;
  /* 12df93c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df93ca je 0x12df93fa */
  if (C.zf) goto L_12df93fa;
  /* 12df93cc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df93d0 jne 0x12df93e9 */
  if (!C.zf) goto L_12df93e9;
  /* 12df93d2 call 0x12dfcc50 */
  push32(0x12df93d7u); f_12dfcc50();
  /* 12df93d7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12df93dd call 0x12dfcc60 */
  push32(0x12df93e2u); f_12dfcc60();
  /* 12df93e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df93e5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12df93e7 jmp 0x12df93f5 */
  goto L_12df93f5;
L_12df93e9:;
  /* 12df93e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df93ec push edx */
  push32((uint32_t)(EDX));
  /* 12df93ed call 0x12dfcbb0 */
  push32(0x12df93f2u); f_12dfcbb0();
  /* 12df93f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df93f5:;
  /* 12df93f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df93f8 jmp 0x12df944f */
  goto L_12df944f;
L_12df93fa:;
  /* 12df93fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df93fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12df9400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9403 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12df9406 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9409 mov edx, dword ptr [eax*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e22060)));
  /* 12df9410 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12df9415 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12df9418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df941a je 0x12df942b */
  if (C.zf) goto L_12df942b;
  /* 12df941c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df941f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12df9422 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9425 jne 0x12df942b */
  if (!C.zf) goto L_12df942b;
  /* 12df9427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9429 jmp 0x12df944f */
  goto L_12df944f;
L_12df942b:;
  /* 12df942b call 0x12dfcc50 */
  push32(0x12df9430u); f_12dfcc50();
  /* 12df9430 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12df9436 call 0x12dfcc60 */
  push32(0x12df943bu); f_12dfcc60();
  /* 12df943b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12df9441 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df9444 jmp 0x12df944f */
  goto L_12df944f;
L_12df9446:;
  /* 12df9446 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9449 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12df944f:;
  /* 12df944f mov esp, ebp */
  ESP = (EBP);
  /* 12df9451 pop ebp */
  EBP = (pop32());
  /* 12df9452 ret  */
  ESPCHK(0x12df91e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009460 @ 0x12df9460 (199 bytes, 68 insns) */
void f_12df9460(void) {
  FTRACE(0x12df9460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9460 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9461 mov ebp, esp */
  EBP = (ESP);
  /* 12df9463 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9464 push ebx */
  push32((uint32_t)(EBX));
  /* 12df9465 push esi */
  push32((uint32_t)(ESI));
  /* 12df9466 push edi */
  push32((uint32_t)(EDI));
L_12df9467:;
  /* 12df9467 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df946b jne 0x12df948b */
  if (!C.zf) goto L_12df948b;
  /* 12df946d push 0x12e1bc10 */
  push32((uint32_t)(0x12e1bc10u));
  /* 12df9472 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df9474 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12df9476 push 0x12e1c728 */
  push32((uint32_t)(0x12e1c728u));
  /* 12df947b push 2 */
  push32((uint32_t)(0x2u));
  /* 12df947d call 0x12df3680 */
  push32(0x12df9482u); f_12df3680();
  /* 12df9482 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9485 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9488 jne 0x12df948b */
  if (!C.zf) goto L_12df948b;
  /* 12df948a int3  */
  x86_unimpl("int3 @ 0x12df948a");
L_12df948b:;
  /* 12df948b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df948d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df948f jne 0x12df9467 */
  if (!C.zf) goto L_12df9467;
  /* 12df9491 mov ecx, dword ptr [0x12e2082c] */
  ECX = (r32((uint32_t)(0x12e2082c)));
  /* 12df9497 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df949a mov dword ptr [0x12e2082c], ecx */
  w32((uint32_t)(0x12e2082c), (ECX));
  /* 12df94a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df94a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12df94a6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12df94a8 push 0x12e1c728 */
  push32((uint32_t)(0x12e1c728u));
  /* 12df94ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12df94af push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12df94b4 call 0x12df56e0 */
  push32(0x12df94b9u); f_12df56e0();
  /* 12df94b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df94bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df94bf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12df94c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df94c5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df94c9 je 0x12df94e6 */
  if (C.zf) goto L_12df94e6;
  /* 12df94cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df94ce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12df94d1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12df94d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df94d7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12df94da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df94dd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12df94e4 jmp 0x12df950b */
  goto L_12df950b;
L_12df94e6:;
  /* 12df94e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df94e9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12df94ec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12df94ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df94f2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12df94f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df94f8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df94fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df94fe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12df9501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9504 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12df950b:;
  /* 12df950b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df950e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9511 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12df9514 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12df9516 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9519 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12df9520 pop edi */
  EDI = (pop32());
  /* 12df9521 pop esi */
  ESI = (pop32());
  /* 12df9522 pop ebx */
  EBX = (pop32());
  /* 12df9523 mov esp, ebp */
  ESP = (EBP);
  /* 12df9525 pop ebp */
  EBP = (pop32());
  /* 12df9526 ret  */
  ESPCHK(0x12df9460u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12df9530 (50 bytes, 17 insns) */
void f_12df9530(void) {
  FTRACE(0x12df9530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9530 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9531 mov ebp, esp */
  EBP = (ESP);
  /* 12df9533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9536 cmp eax, dword ptr [0x12e2219c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e2219c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df953c jb 0x12df9542 */
  if (C.cf) goto L_12df9542;
  /* 12df953e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9540 jmp 0x12df9560 */
  goto L_12df9560;
L_12df9542:;
  /* 12df9542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9545 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12df9548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df954b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12df954e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9551 mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12df9558 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12df955d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12df9560:;
  /* 12df9560 pop ebp */
  EBP = (pop32());
  /* 12df9561 ret  */
  ESPCHK(0x12df9530u, _esp0);
  ESP += 4; return;
}

/* FUN_10009570 @ 0x12df9570 (300 bytes, 80 insns) */
void f_12df9570(void) {
  FTRACE(0x12df9570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9570 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9571 mov ebp, esp */
  EBP = (ESP);
  /* 12df9573 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9574 cmp dword ptr [0x12e22040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e22040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df957b jne 0x12df9589 */
  if (!C.zf) goto L_12df9589;
  /* 12df957d mov dword ptr [0x12e22040], 0x200 */
  w32((uint32_t)(0x12e22040), (0x200u));
  /* 12df9587 jmp 0x12df959c */
  goto L_12df959c;
L_12df9589:;
  /* 12df9589 cmp dword ptr [0x12e22040], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12e22040))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9590 jge 0x12df959c */
  if ((C.sf==C.of)) goto L_12df959c;
  /* 12df9592 mov dword ptr [0x12e22040], 0x14 */
  w32((uint32_t)(0x12e22040), (0x14u));
L_12df959c:;
  /* 12df959c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12df95a1 push 0x12e1c734 */
  push32((uint32_t)(0x12e1c734u));
  /* 12df95a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df95a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12df95aa mov eax, dword ptr [0x12e22040] */
  EAX = (r32((uint32_t)(0x12e22040)));
  /* 12df95af push eax */
  push32((uint32_t)(EAX));
  /* 12df95b0 call 0x12df5af0 */
  push32(0x12df95b5u); f_12df5af0();
  /* 12df95b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df95b8 mov dword ptr [0x12e20cec], eax */
  w32((uint32_t)(0x12e20cec), (EAX));
  /* 12df95bd cmp dword ptr [0x12e20cec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20cec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df95c4 jne 0x12df9605 */
  if (!C.zf) goto L_12df9605;
  /* 12df95c6 mov dword ptr [0x12e22040], 0x14 */
  w32((uint32_t)(0x12e22040), (0x14u));
  /* 12df95d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12df95d5 push 0x12e1c734 */
  push32((uint32_t)(0x12e1c734u));
  /* 12df95da push 2 */
  push32((uint32_t)(0x2u));
  /* 12df95dc push 4 */
  push32((uint32_t)(0x4u));
  /* 12df95de mov ecx, dword ptr [0x12e22040] */
  ECX = (r32((uint32_t)(0x12e22040)));
  /* 12df95e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12df95e5 call 0x12df5af0 */
  push32(0x12df95eau); f_12df5af0();
  /* 12df95ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df95ed mov dword ptr [0x12e20cec], eax */
  w32((uint32_t)(0x12e20cec), (EAX));
  /* 12df95f2 cmp dword ptr [0x12e20cec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20cec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df95f9 jne 0x12df9605 */
  if (!C.zf) goto L_12df9605;
  /* 12df95fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12df95fd call 0x12df3530 */
  push32(0x12df9602u); f_12df3530();
  /* 12df9602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df9605:;
  /* 12df9605 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df960c jmp 0x12df9617 */
  goto L_12df9617;
L_12df960e:;
  /* 12df960e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9611 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9614 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12df9617:;
  /* 12df9617 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df961b jge 0x12df9636 */
  if ((C.sf==C.of)) goto L_12df9636;
  /* 12df961d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9620 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12df9623 add eax, 0x12e1eb50 */
  { uint32_t _a=(EAX),_b=(0x12e1eb50u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9628 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df962b mov edx, dword ptr [0x12e20cec] */
  EDX = (r32((uint32_t)(0x12e20cec)));
  /* 12df9631 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12df9634 jmp 0x12df960e */
  goto L_12df960e;
L_12df9636:;
  /* 12df9636 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df963d jmp 0x12df9648 */
  goto L_12df9648;
L_12df963f:;
  /* 12df963f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9642 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9645 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df9648:;
  /* 12df9648 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df964c jge 0x12df9698 */
  if ((C.sf==C.of)) goto L_12df9698;
  /* 12df964e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9651 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12df9654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9657 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12df965a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df965d mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12df9664 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9668 je 0x12df9686 */
  if (C.zf) goto L_12df9686;
  /* 12df966a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df966d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12df9670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9673 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12df9676 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9679 mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12df9680 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9684 jne 0x12df9696 */
  if (!C.zf) goto L_12df9696;
L_12df9686:;
  /* 12df9686 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9689 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12df968c mov dword ptr [ecx + 0x12e1eb60], 0xffffffff */
  w32((uint32_t)(ECX + 0x12e1eb60), (0xffffffffu));
L_12df9696:;
  /* 12df9696 jmp 0x12df963f */
  goto L_12df963f;
L_12df9698:;
  /* 12df9698 mov esp, ebp */
  ESP = (EBP);
  /* 12df969a pop ebp */
  EBP = (pop32());
  /* 12df969b ret  */
  ESPCHK(0x12df9570u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a0 @ 0x12df96a0 (26 bytes, 9 insns) */
void f_12df96a0(void) {
  FTRACE(0x12df96a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df96a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df96a1 mov ebp, esp */
  EBP = (ESP);
  /* 12df96a3 call 0x12dfd480 */
  push32(0x12df96a8u); f_12dfd480();
  /* 12df96a8 movsx eax, byte ptr [0x12e206dc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12e206dc))));
  /* 12df96af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df96b1 je 0x12df96b8 */
  if (C.zf) goto L_12df96b8;
  /* 12df96b3 call 0x12dfd240 */
  push32(0x12df96b8u); f_12dfd240();
L_12df96b8:;
  /* 12df96b8 pop ebp */
  EBP = (pop32());
  /* 12df96b9 ret  */
  ESPCHK(0x12df96a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x12df96c0 (61 bytes, 20 insns) */
void f_12df96c0(void) {
  FTRACE(0x12df96c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df96c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df96c1 mov ebp, esp */
  EBP = (ESP);
  /* 12df96c3 cmp dword ptr [ebp + 8], 0x12e1eb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e1eb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df96ca jb 0x12df96ee */
  if (C.cf) goto L_12df96ee;
  /* 12df96cc cmp dword ptr [ebp + 8], 0x12e1edb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e1edb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df96d3 ja 0x12df96ee */
  if ((!C.cf&&!C.zf)) goto L_12df96ee;
  /* 12df96d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df96d8 sub eax, 0x12e1eb50 */
  { uint32_t _a=(EAX),_b=(0x12e1eb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df96dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12df96e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df96e3 push eax */
  push32((uint32_t)(EAX));
  /* 12df96e4 call 0x12df9a90 */
  push32(0x12df96e9u); f_12df9a90();
  /* 12df96e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df96ec jmp 0x12df96fb */
  goto L_12df96fb;
L_12df96ee:;
  /* 12df96ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df96f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df96f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12df96f5 call dword ptr [0x12e232a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a0))), 0x12df96fbu);
L_12df96fb:;
  /* 12df96fb pop ebp */
  EBP = (pop32());
  /* 12df96fc ret  */
  ESPCHK(0x12df96c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x12df9700 (41 bytes, 16 insns) */
void f_12df9700(void) {
  FTRACE(0x12df9700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9700 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9701 mov ebp, esp */
  EBP = (ESP);
  /* 12df9703 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9707 jge 0x12df971a */
  if ((C.sf==C.of)) goto L_12df971a;
  /* 12df9709 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df970c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df970f push eax */
  push32((uint32_t)(EAX));
  /* 12df9710 call 0x12df9a90 */
  push32(0x12df9715u); f_12df9a90();
  /* 12df9715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9718 jmp 0x12df9727 */
  goto L_12df9727;
L_12df971a:;
  /* 12df971a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df971d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9720 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9721 call dword ptr [0x12e232a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a0))), 0x12df9727u);
L_12df9727:;
  /* 12df9727 pop ebp */
  EBP = (pop32());
  /* 12df9728 ret  */
  ESPCHK(0x12df9700u, _esp0);
  ESP += 4; return;
}

/* FUN_10009730 @ 0x12df9730 (61 bytes, 20 insns) */
void f_12df9730(void) {
  FTRACE(0x12df9730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9730 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9731 mov ebp, esp */
  EBP = (ESP);
  /* 12df9733 cmp dword ptr [ebp + 8], 0x12e1eb50 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e1eb50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df973a jb 0x12df975e */
  if (C.cf) goto L_12df975e;
  /* 12df973c cmp dword ptr [ebp + 8], 0x12e1edb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12e1edb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9743 ja 0x12df975e */
  if ((!C.cf&&!C.zf)) goto L_12df975e;
  /* 12df9745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9748 sub eax, 0x12e1eb50 */
  { uint32_t _a=(EAX),_b=(0x12e1eb50u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df974d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12df9750 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9753 push eax */
  push32((uint32_t)(EAX));
  /* 12df9754 call 0x12df9b30 */
  push32(0x12df9759u); f_12df9b30();
  /* 12df9759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df975c jmp 0x12df976b */
  goto L_12df976b;
L_12df975e:;
  /* 12df975e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9761 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9764 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9765 call dword ptr [0x12e232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a4))), 0x12df976bu);
L_12df976b:;
  /* 12df976b pop ebp */
  EBP = (pop32());
  /* 12df976c ret  */
  ESPCHK(0x12df9730u, _esp0);
  ESP += 4; return;
}

/* FUN_10009770 @ 0x12df9770 (41 bytes, 16 insns) */
void f_12df9770(void) {
  FTRACE(0x12df9770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9770 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9771 mov ebp, esp */
  EBP = (ESP);
  /* 12df9773 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9777 jge 0x12df978a */
  if ((C.sf==C.of)) goto L_12df978a;
  /* 12df9779 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df977c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df977f push eax */
  push32((uint32_t)(EAX));
  /* 12df9780 call 0x12df9b30 */
  push32(0x12df9785u); f_12df9b30();
  /* 12df9785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9788 jmp 0x12df9797 */
  goto L_12df9797;
L_12df978a:;
  /* 12df978a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df978d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9790 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9791 call dword ptr [0x12e232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a4))), 0x12df9797u);
L_12df9797:;
  /* 12df9797 pop ebp */
  EBP = (pop32());
  /* 12df9798 ret  */
  ESPCHK(0x12df9770u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x12df97a0 (119 bytes, 34 insns) */
void f_12df97a0(void) {
  FTRACE(0x12df97a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df97a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df97a1 mov ebp, esp */
  EBP = (ESP);
  /* 12df97a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df97a6 push 0x12e20a34 */
  push32((uint32_t)(0x12e20a34u));
  /* 12df97ab call dword ptr [0x12e23224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23224))), 0x12df97b1u);
  /* 12df97b1 cmp dword ptr [0x12e20a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df97b8 je 0x12df97d8 */
  if (C.zf) goto L_12df97d8;
  /* 12df97ba push 0x12e20a34 */
  push32((uint32_t)(0x12e20a34u));
  /* 12df97bf call dword ptr [0x12e23218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23218))), 0x12df97c5u);
  /* 12df97c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12df97c7 call 0x12df9a90 */
  push32(0x12df97ccu); f_12df9a90();
  /* 12df97cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df97cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12df97d6 jmp 0x12df97df */
  goto L_12df97df;
L_12df97d8:;
  /* 12df97d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12df97df:;
  /* 12df97df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12df97e3 push eax */
  push32((uint32_t)(EAX));
  /* 12df97e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df97e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12df97e8 call 0x12df9820 */
  push32(0x12df97edu); f_12df9820();
  /* 12df97ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df97f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df97f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df97f7 je 0x12df9805 */
  if (C.zf) goto L_12df9805;
  /* 12df97f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12df97fb call 0x12df9b30 */
  push32(0x12df9800u); f_12df9b30();
  /* 12df9800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9803 jmp 0x12df9810 */
  goto L_12df9810;
L_12df9805:;
  /* 12df9805 push 0x12e20a34 */
  push32((uint32_t)(0x12e20a34u));
  /* 12df980a call dword ptr [0x12e23218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23218))), 0x12df9810u);
L_12df9810:;
  /* 12df9810 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9813 mov esp, ebp */
  ESP = (EBP);
  /* 12df9815 pop ebp */
  EBP = (pop32());
  /* 12df9816 ret  */
  ESPCHK(0x12df97a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009820 @ 0x12df9820 (160 bytes, 50 insns) */
void f_12df9820(void) {
  FTRACE(0x12df9820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9820 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9821 mov ebp, esp */
  EBP = (ESP);
  /* 12df9823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df9826 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df982a jne 0x12df9833 */
  if (!C.zf) goto L_12df9833;
  /* 12df982c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df982e jmp 0x12df98bc */
  goto L_12df98bc;
L_12df9833:;
  /* 12df9833 cmp dword ptr [0x12e208b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e208b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df983a jne 0x12df986a */
  if (!C.zf) goto L_12df986a;
  /* 12df983c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df983f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df9844 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9849 jle 0x12df985b */
  if ((C.zf||C.sf!=C.of)) goto L_12df985b;
  /* 12df984b call 0x12dfcc50 */
  push32(0x12df9850u); f_12dfcc50();
  /* 12df9850 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12df9856 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df9859 jmp 0x12df98bc */
  goto L_12df98bc;
L_12df985b:;
  /* 12df985b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df985e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12df9861 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12df9863 mov eax, 1 */
  EAX = (0x1u);
  /* 12df9868 jmp 0x12df98bc */
  goto L_12df98bc;
L_12df986a:;
  /* 12df986a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12df9871 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12df9874 push eax */
  push32((uint32_t)(EAX));
  /* 12df9875 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df9877 mov ecx, dword ptr [0x12e1f158] */
  ECX = (r32((uint32_t)(0x12e1f158)));
  /* 12df987d push ecx */
  push32((uint32_t)(ECX));
  /* 12df987e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9881 push edx */
  push32((uint32_t)(EDX));
  /* 12df9882 push 1 */
  push32((uint32_t)(0x1u));
  /* 12df9884 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12df9887 push eax */
  push32((uint32_t)(EAX));
  /* 12df9888 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12df988d mov ecx, dword ptr [0x12e208c0] */
  ECX = (r32((uint32_t)(0x12e208c0)));
  /* 12df9893 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9894 call dword ptr [0x12e2327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2327c))), 0x12df989au);
  /* 12df989a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df989d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df98a1 je 0x12df98a9 */
  if (C.zf) goto L_12df98a9;
  /* 12df98a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df98a7 je 0x12df98b9 */
  if (C.zf) goto L_12df98b9;
L_12df98a9:;
  /* 12df98a9 call 0x12dfcc50 */
  push32(0x12df98aeu); f_12dfcc50();
  /* 12df98ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12df98b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df98b7 jmp 0x12df98bc */
  goto L_12df98bc;
L_12df98b9:;
  /* 12df98b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12df98bc:;
  /* 12df98bc mov esp, ebp */
  ESP = (EBP);
  /* 12df98be pop ebp */
  EBP = (pop32());
  /* 12df98bf ret  */
  ESPCHK(0x12df9820u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12df98c0 (104 bytes, 43 insns) */
void f_12df98c0(void) {
  FTRACE(0x12df98c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df98c0 push ebx */
  push32((uint32_t)(EBX));
  /* 12df98c1 push esi */
  push32((uint32_t)(ESI));
  /* 12df98c2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12df98c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df98c8 jne 0x12df98e2 */
  if (!C.zf) goto L_12df98e2;
  /* 12df98ca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12df98ce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12df98d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df98d4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12df98d6 mov ebx, eax */
  EBX = (EAX);
  /* 12df98d8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12df98dc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12df98de mov edx, ebx */
  EDX = (EBX);
  /* 12df98e0 jmp 0x12df9923 */
  goto L_12df9923;
L_12df98e2:;
  /* 12df98e2 mov ecx, eax */
  ECX = (EAX);
  /* 12df98e4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12df98e8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12df98ec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12df98f0:;
  /* 12df98f0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12df98f2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12df98f4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12df98f6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12df98f8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df98fa jne 0x12df98f0 */
  if (!C.zf) goto L_12df98f0;
  /* 12df98fc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12df98fe mov esi, eax */
  ESI = (EAX);
  /* 12df9900 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12df9904 mov ecx, eax */
  ECX = (EAX);
  /* 12df9906 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12df990a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12df990c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df990e jb 0x12df991e */
  if (C.cf) goto L_12df991e;
  /* 12df9910 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9914 ja 0x12df991e */
  if ((!C.cf&&!C.zf)) goto L_12df991e;
  /* 12df9916 jb 0x12df991f */
  if (C.cf) goto L_12df991f;
  /* 12df9918 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df991c jbe 0x12df991f */
  if ((C.cf||C.zf)) goto L_12df991f;
L_12df991e:;
  /* 12df991e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12df991f:;
  /* 12df991f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df9921 mov eax, esi */
  EAX = (ESI);
L_12df9923:;
  /* 12df9923 pop esi */
  ESI = (pop32());
  /* 12df9924 pop ebx */
  EBX = (pop32());
  /* 12df9925 ret 0x10 */
  ESPCHK(0x12df98c0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12df9930 (117 bytes, 44 insns) */
void f_12df9930(void) {
  FTRACE(0x12df9930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9930 push ebx */
  push32((uint32_t)(EBX));
  /* 12df9931 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12df9935 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9937 jne 0x12df9951 */
  if (!C.zf) goto L_12df9951;
  /* 12df9939 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12df993d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12df9941 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df9943 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12df9945 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12df9949 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12df994b mov eax, edx */
  EAX = (EDX);
  /* 12df994d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12df994f jmp 0x12df99a1 */
  goto L_12df99a1;
L_12df9951:;
  /* 12df9951 mov ecx, eax */
  ECX = (EAX);
  /* 12df9953 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12df9957 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12df995b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12df995f:;
  /* 12df995f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12df9961 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12df9963 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12df9965 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12df9967 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12df9969 jne 0x12df995f */
  if (!C.zf) goto L_12df995f;
  /* 12df996b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12df996d mov ecx, eax */
  ECX = (EAX);
  /* 12df996f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12df9973 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12df9974 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12df9978 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df997a jb 0x12df998a */
  if (C.cf) goto L_12df998a;
  /* 12df997c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9980 ja 0x12df998a */
  if ((!C.cf&&!C.zf)) goto L_12df998a;
  /* 12df9982 jb 0x12df9992 */
  if (C.cf) goto L_12df9992;
  /* 12df9984 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9988 jbe 0x12df9992 */
  if ((C.cf||C.zf)) goto L_12df9992;
L_12df998a:;
  /* 12df998a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df998e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12df9992:;
  /* 12df9992 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df9996 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df999a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12df999c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12df999e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12df99a1:;
  /* 12df99a1 pop ebx */
  EBX = (pop32());
  /* 12df99a2 ret 0x10 */
  ESPCHK(0x12df9930u, _esp0);
  ESP += 20; return;
}

/* FUN_100099b0 @ 0x12df99b0 (55 bytes, 16 insns) */
void f_12df99b0(void) {
  FTRACE(0x12df99b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df99b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df99b1 mov ebp, esp */
  EBP = (ESP);
  /* 12df99b3 mov eax, dword ptr [0x12e1f044] */
  EAX = (r32((uint32_t)(0x12e1f044)));
  /* 12df99b8 push eax */
  push32((uint32_t)(EAX));
  /* 12df99b9 call dword ptr [0x12e232a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a8))), 0x12df99bfu);
  /* 12df99bf mov ecx, dword ptr [0x12e1f034] */
  ECX = (r32((uint32_t)(0x12e1f034)));
  /* 12df99c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12df99c6 call dword ptr [0x12e232a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a8))), 0x12df99ccu);
  /* 12df99cc mov edx, dword ptr [0x12e1f024] */
  EDX = (r32((uint32_t)(0x12e1f024)));
  /* 12df99d2 push edx */
  push32((uint32_t)(EDX));
  /* 12df99d3 call dword ptr [0x12e232a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a8))), 0x12df99d9u);
  /* 12df99d9 mov eax, dword ptr [0x12e1f004] */
  EAX = (r32((uint32_t)(0x12e1f004)));
  /* 12df99de push eax */
  push32((uint32_t)(EAX));
  /* 12df99df call dword ptr [0x12e232a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a8))), 0x12df99e5u);
  /* 12df99e5 pop ebp */
  EBP = (pop32());
  /* 12df99e6 ret  */
  ESPCHK(0x12df99b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f0 @ 0x12df99f0 (159 bytes, 47 insns) */
void f_12df99f0(void) {
  FTRACE(0x12df99f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df99f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df99f1 mov ebp, esp */
  EBP = (ESP);
  /* 12df99f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df99f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df99fb jmp 0x12df9a06 */
  goto L_12df9a06;
L_12df99fd:;
  /* 12df99fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9a00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9a03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df9a06:;
  /* 12df9a06 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9a0a jge 0x12df9a59 */
  if ((C.sf==C.of)) goto L_12df9a59;
  /* 12df9a0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9a0f cmp dword ptr [ecx*4 + 0x12e1f000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e1f000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9a17 je 0x12df9a57 */
  if (C.zf) goto L_12df9a57;
  /* 12df9a19 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9a1d je 0x12df9a57 */
  if (C.zf) goto L_12df9a57;
  /* 12df9a1f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9a23 je 0x12df9a57 */
  if (C.zf) goto L_12df9a57;
  /* 12df9a25 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9a29 je 0x12df9a57 */
  if (C.zf) goto L_12df9a57;
  /* 12df9a2b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9a2f je 0x12df9a57 */
  if (C.zf) goto L_12df9a57;
  /* 12df9a31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9a34 mov eax, dword ptr [edx*4 + 0x12e1f000] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e1f000)));
  /* 12df9a3b push eax */
  push32((uint32_t)(EAX));
  /* 12df9a3c call dword ptr [0x12e23264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23264))), 0x12df9a42u);
  /* 12df9a42 push 2 */
  push32((uint32_t)(0x2u));
  /* 12df9a44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9a47 mov edx, dword ptr [ecx*4 + 0x12e1f000] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e1f000)));
  /* 12df9a4e push edx */
  push32((uint32_t)(EDX));
  /* 12df9a4f call 0x12df6170 */
  push32(0x12df9a54u); f_12df6170();
  /* 12df9a54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df9a57:;
  /* 12df9a57 jmp 0x12df99fd */
  goto L_12df99fd;
L_12df9a59:;
  /* 12df9a59 mov eax, dword ptr [0x12e1f024] */
  EAX = (r32((uint32_t)(0x12e1f024)));
  /* 12df9a5e push eax */
  push32((uint32_t)(EAX));
  /* 12df9a5f call dword ptr [0x12e23264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23264))), 0x12df9a65u);
  /* 12df9a65 mov ecx, dword ptr [0x12e1f034] */
  ECX = (r32((uint32_t)(0x12e1f034)));
  /* 12df9a6b push ecx */
  push32((uint32_t)(ECX));
  /* 12df9a6c call dword ptr [0x12e23264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23264))), 0x12df9a72u);
  /* 12df9a72 mov edx, dword ptr [0x12e1f044] */
  EDX = (r32((uint32_t)(0x12e1f044)));
  /* 12df9a78 push edx */
  push32((uint32_t)(EDX));
  /* 12df9a79 call dword ptr [0x12e23264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23264))), 0x12df9a7fu);
  /* 12df9a7f mov eax, dword ptr [0x12e1f004] */
  EAX = (r32((uint32_t)(0x12e1f004)));
  /* 12df9a84 push eax */
  push32((uint32_t)(EAX));
  /* 12df9a85 call dword ptr [0x12e23264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23264))), 0x12df9a8bu);
  /* 12df9a8b mov esp, ebp */
  ESP = (EBP);
  /* 12df9a8d pop ebp */
  EBP = (pop32());
  /* 12df9a8e ret  */
  ESPCHK(0x12df99f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a90 @ 0x12df9a90 (151 bytes, 46 insns) */
void f_12df9a90(void) {
  FTRACE(0x12df9a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9a91 mov ebp, esp */
  EBP = (ESP);
  /* 12df9a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9a94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9a97 cmp dword ptr [eax*4 + 0x12e1f000], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12e1f000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9a9f jne 0x12df9b12 */
  if (!C.zf) goto L_12df9b12;
  /* 12df9aa1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12df9aa6 push 0x12e1c73c */
  push32((uint32_t)(0x12e1c73cu));
  /* 12df9aab push 2 */
  push32((uint32_t)(0x2u));
  /* 12df9aad push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12df9aaf call 0x12df56e0 */
  push32(0x12df9ab4u); f_12df56e0();
  /* 12df9ab4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9ab7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df9aba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9abe jne 0x12df9aca */
  if (!C.zf) goto L_12df9aca;
  /* 12df9ac0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12df9ac2 call 0x12df3530 */
  push32(0x12df9ac7u); f_12df3530();
  /* 12df9ac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df9aca:;
  /* 12df9aca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12df9acc call 0x12df9a90 */
  push32(0x12df9ad1u); f_12df9a90();
  /* 12df9ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9ad4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9ad7 cmp dword ptr [ecx*4 + 0x12e1f000], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e1f000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9adf jne 0x12df9afa */
  if (!C.zf) goto L_12df9afa;
  /* 12df9ae1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9ae4 push edx */
  push32((uint32_t)(EDX));
  /* 12df9ae5 call dword ptr [0x12e232a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a8))), 0x12df9aebu);
  /* 12df9aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9aee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9af1 mov dword ptr [eax*4 + 0x12e1f000], ecx */
  w32((uint32_t)(EAX*4 + 0x12e1f000), (ECX));
  /* 12df9af8 jmp 0x12df9b08 */
  goto L_12df9b08;
L_12df9afa:;
  /* 12df9afa push 2 */
  push32((uint32_t)(0x2u));
  /* 12df9afc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9aff push edx */
  push32((uint32_t)(EDX));
  /* 12df9b00 call 0x12df6170 */
  push32(0x12df9b05u); f_12df6170();
  /* 12df9b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df9b08:;
  /* 12df9b08 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12df9b0a call 0x12df9b30 */
  push32(0x12df9b0fu); f_12df9b30();
  /* 12df9b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df9b12:;
  /* 12df9b12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9b15 mov ecx, dword ptr [eax*4 + 0x12e1f000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e1f000)));
  /* 12df9b1c push ecx */
  push32((uint32_t)(ECX));
  /* 12df9b1d call dword ptr [0x12e232a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a0))), 0x12df9b23u);
  /* 12df9b23 mov esp, ebp */
  ESP = (EBP);
  /* 12df9b25 pop ebp */
  EBP = (pop32());
  /* 12df9b26 ret  */
  ESPCHK(0x12df9a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b30 @ 0x12df9b30 (22 bytes, 8 insns) */
void f_12df9b30(void) {
  FTRACE(0x12df9b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9b31 mov ebp, esp */
  EBP = (ESP);
  /* 12df9b33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9b36 mov ecx, dword ptr [eax*4 + 0x12e1f000] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e1f000)));
  /* 12df9b3d push ecx */
  push32((uint32_t)(ECX));
  /* 12df9b3e call dword ptr [0x12e232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a4))), 0x12df9b44u);
  /* 12df9b44 pop ebp */
  EBP = (pop32());
  /* 12df9b45 ret  */
  ESPCHK(0x12df9b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b50 @ 0x12df9b50 (26 bytes, 10 insns) */
void f_12df9b50(void) {
  FTRACE(0x12df9b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9b51 mov ebp, esp */
  EBP = (ESP);
  /* 12df9b53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9b56 push eax */
  push32((uint32_t)(EAX));
  /* 12df9b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12df9b59 call dword ptr [0x12e232ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232ac))), 0x12df9b5fu);
  /* 12df9b5f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12df9b64 call dword ptr [0x12e2322c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e2322c))), 0x12df9b6au);
  /* 12df9b6a pop ebp */
  EBP = (pop32());
  /* 12df9b6b ret  */
  ESPCHK(0x12df9b50u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12df9b70 (446 bytes, 130 insns) */
void f_12df9b70(void) {
  FTRACE(0x12df9b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9b71 mov ebp, esp */
  EBP = (ESP);
  /* 12df9b73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df9b76 call 0x12df5120 */
  push32(0x12df9b7bu); f_12df5120();
  /* 12df9b7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df9b7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9b81 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12df9b84 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9b85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9b88 push edx */
  push32((uint32_t)(EDX));
  /* 12df9b89 call 0x12df9d30 */
  push32(0x12df9b8eu); f_12df9d30();
  /* 12df9b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9b91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12df9b94 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9b98 je 0x12df9ba3 */
  if (C.zf) goto L_12df9ba3;
  /* 12df9b9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9b9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9ba1 jne 0x12df9bb2 */
  if (!C.zf) goto L_12df9bb2;
L_12df9ba3:;
  /* 12df9ba3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9ba7 call dword ptr [0x12e232b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232b0))), 0x12df9badu);
  /* 12df9bad jmp 0x12df9d2a */
  goto L_12df9d2a;
L_12df9bb2:;
  /* 12df9bb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9bb5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9bb9 jne 0x12df9bcf */
  if (!C.zf) goto L_12df9bcf;
  /* 12df9bbb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9bbe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12df9bc5 mov eax, 1 */
  EAX = (0x1u);
  /* 12df9bca jmp 0x12df9d2a */
  goto L_12df9d2a;
L_12df9bcf:;
  /* 12df9bcf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9bd2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9bd6 jne 0x12df9be0 */
  if (!C.zf) goto L_12df9be0;
  /* 12df9bd8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12df9bdb jmp 0x12df9d2a */
  goto L_12df9d2a;
L_12df9be0:;
  /* 12df9be0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9be3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12df9be6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df9be9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9bec mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12df9bef mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12df9bf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9bf5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9bf8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12df9bfb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9bfe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9c02 jne 0x12df9d07 */
  if (!C.zf) goto L_12df9d07;
  /* 12df9c08 mov eax, dword ptr [0x12e1f138] */
  EAX = (r32((uint32_t)(0x12e1f138)));
  /* 12df9c0d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12df9c10 jmp 0x12df9c1b */
  goto L_12df9c1b;
L_12df9c12:;
  /* 12df9c12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df9c15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9c18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12df9c1b:;
  /* 12df9c1b mov edx, dword ptr [0x12e1f138] */
  EDX = (r32((uint32_t)(0x12e1f138)));
  /* 12df9c21 add edx, dword ptr [0x12e1f13c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e1f13c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9c27 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9c2a jge 0x12df9c42 */
  if ((C.sf==C.of)) goto L_12df9c42;
  /* 12df9c2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12df9c2f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9c32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9c35 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12df9c38 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12df9c40 jmp 0x12df9c12 */
  goto L_12df9c12;
L_12df9c42:;
  /* 12df9c42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9c45 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12df9c48 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12df9c4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9c4e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9c54 jne 0x12df9c65 */
  if (!C.zf) goto L_12df9c65;
  /* 12df9c56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9c59 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12df9c60 jmp 0x12df9ced */
  goto L_12df9ced;
L_12df9c65:;
  /* 12df9c65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9c68 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9c6e jne 0x12df9c7c */
  if (!C.zf) goto L_12df9c7c;
  /* 12df9c70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9c73 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12df9c7a jmp 0x12df9ced */
  goto L_12df9ced;
L_12df9c7c:;
  /* 12df9c7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9c7f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9c85 jne 0x12df9c93 */
  if (!C.zf) goto L_12df9c93;
  /* 12df9c87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9c8a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12df9c91 jmp 0x12df9ced */
  goto L_12df9ced;
L_12df9c93:;
  /* 12df9c93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9c96 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9c9c jne 0x12df9caa */
  if (!C.zf) goto L_12df9caa;
  /* 12df9c9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9ca1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12df9ca8 jmp 0x12df9ced */
  goto L_12df9ced;
L_12df9caa:;
  /* 12df9caa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9cad cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9cb3 jne 0x12df9cc1 */
  if (!C.zf) goto L_12df9cc1;
  /* 12df9cb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9cb8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12df9cbf jmp 0x12df9ced */
  goto L_12df9ced;
L_12df9cc1:;
  /* 12df9cc1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9cc4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9cca jne 0x12df9cd8 */
  if (!C.zf) goto L_12df9cd8;
  /* 12df9ccc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9ccf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12df9cd6 jmp 0x12df9ced */
  goto L_12df9ced;
L_12df9cd8:;
  /* 12df9cd8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9cdb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9ce1 jne 0x12df9ced */
  if (!C.zf) goto L_12df9ced;
  /* 12df9ce3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9ce6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12df9ced:;
  /* 12df9ced mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9cf0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12df9cf3 push edx */
  push32((uint32_t)(EDX));
  /* 12df9cf4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12df9cf6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12df9cf9u);
  /* 12df9cf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9cfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9cff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12df9d02 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12df9d05 jmp 0x12df9d1e */
  goto L_12df9d1e;
L_12df9d07:;
  /* 12df9d07 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9d0a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12df9d11 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12df9d14 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12df9d17 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9d18 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12df9d1bu);
  /* 12df9d1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12df9d1e:;
  /* 12df9d1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9d21 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12df9d24 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12df9d27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12df9d2a:;
  /* 12df9d2a mov esp, ebp */
  ESP = (EBP);
  /* 12df9d2c pop ebp */
  EBP = (pop32());
  /* 12df9d2d ret  */
  ESPCHK(0x12df9b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d30 @ 0x12df9d30 (89 bytes, 35 insns) */
void f_12df9d30(void) {
  FTRACE(0x12df9d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9d31 mov ebp, esp */
  EBP = (ESP);
  /* 12df9d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9d34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9d37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12df9d3a:;
  /* 12df9d3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9d3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12df9d3f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9d42 je 0x12df9d62 */
  if (C.zf) goto L_12df9d62;
  /* 12df9d44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9d47 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9d4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df9d4d mov ecx, dword ptr [0x12e1f144] */
  ECX = (r32((uint32_t)(0x12e1f144)));
  /* 12df9d53 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9d56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9d59 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9d5b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9d5e jae 0x12df9d62 */
  if (!C.cf) goto L_12df9d62;
  /* 12df9d60 jmp 0x12df9d3a */
  goto L_12df9d3a;
L_12df9d62:;
  /* 12df9d62 mov eax, dword ptr [0x12e1f144] */
  EAX = (r32((uint32_t)(0x12e1f144)));
  /* 12df9d67 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12df9d6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9d6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9d6f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9d72 jae 0x12df9d7e */
  if (!C.cf) goto L_12df9d7e;
  /* 12df9d74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9d77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12df9d79 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9d7c je 0x12df9d82 */
  if (C.zf) goto L_12df9d82;
L_12df9d7e:;
  /* 12df9d7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9d80 jmp 0x12df9d85 */
  goto L_12df9d85;
L_12df9d82:;
  /* 12df9d82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12df9d85:;
  /* 12df9d85 mov esp, ebp */
  ESP = (EBP);
  /* 12df9d87 pop ebp */
  EBP = (pop32());
  /* 12df9d88 ret  */
  ESPCHK(0x12df9d30u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12df9d90 (48 bytes, 17 insns) */
void f_12df9d90(void) {
  FTRACE(0x12df9d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9d91 mov ebp, esp */
  EBP = (ESP);
  /* 12df9d93 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9d94 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df9d96 call 0x12df9a90 */
  push32(0x12df9d9bu); f_12df9a90();
  /* 12df9d9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9d9e mov eax, dword ptr [0x12e20894] */
  EAX = (r32((uint32_t)(0x12e20894)));
  /* 12df9da3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df9da6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9da9 mov dword ptr [0x12e20894], ecx */
  w32((uint32_t)(0x12e20894), (ECX));
  /* 12df9daf push 9 */
  push32((uint32_t)(0x9u));
  /* 12df9db1 call 0x12df9b30 */
  push32(0x12df9db6u); f_12df9b30();
  /* 12df9db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9db9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9dbc mov esp, ebp */
  ESP = (EBP);
  /* 12df9dbe pop ebp */
  EBP = (pop32());
  /* 12df9dbf ret  */
  ESPCHK(0x12df9d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009dc0 @ 0x12df9dc0 (10 bytes, 5 insns) */
void f_12df9dc0(void) {
  FTRACE(0x12df9dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12df9dc3 mov eax, dword ptr [0x12e20894] */
  EAX = (r32((uint32_t)(0x12e20894)));
  /* 12df9dc8 pop ebp */
  EBP = (pop32());
  /* 12df9dc9 ret  */
  ESPCHK(0x12df9dc0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12df9dd0 (45 bytes, 19 insns) */
void f_12df9dd0(void) {
  FTRACE(0x12df9dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12df9dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9dd4 mov eax, dword ptr [0x12e20894] */
  EAX = (r32((uint32_t)(0x12e20894)));
  /* 12df9dd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df9ddc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9de0 je 0x12df9df0 */
  if (C.zf) goto L_12df9df0;
  /* 12df9de2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9de5 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9de6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12df9de9u);
  /* 12df9de9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df9dee jne 0x12df9df4 */
  if (!C.zf) goto L_12df9df4;
L_12df9df0:;
  /* 12df9df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9df2 jmp 0x12df9df9 */
  goto L_12df9df9;
L_12df9df4:;
  /* 12df9df4 mov eax, 1 */
  EAX = (0x1u);
L_12df9df9:;
  /* 12df9df9 mov esp, ebp */
  ESP = (EBP);
  /* 12df9dfb pop ebp */
  EBP = (pop32());
  /* 12df9dfc ret  */
  ESPCHK(0x12df9dd0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12df9e00 (88 bytes, 40 insns) */
void f_12df9e00(void) {
  FTRACE(0x12df9e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9e00 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12df9e04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12df9e08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df9e0a je 0x12df9e53 */
  if (C.zf) goto L_12df9e53;
  /* 12df9e0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9e0e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12df9e12 push edi */
  push32((uint32_t)(EDI));
  /* 12df9e13 mov edi, ecx */
  EDI = (ECX);
  /* 12df9e15 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9e18 jb 0x12df9e47 */
  if (C.cf) goto L_12df9e47;
  /* 12df9e1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12df9e1c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12df9e1f je 0x12df9e29 */
  if (C.zf) goto L_12df9e29;
  /* 12df9e21 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12df9e23:;
  /* 12df9e23 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12df9e25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12df9e26 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12df9e27 jne 0x12df9e23 */
  if (!C.zf) goto L_12df9e23;
L_12df9e29:;
  /* 12df9e29 mov ecx, eax */
  ECX = (EAX);
  /* 12df9e2b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12df9e2e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9e30 mov ecx, eax */
  ECX = (EAX);
  /* 12df9e32 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12df9e35 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9e37 mov ecx, edx */
  ECX = (EDX);
  /* 12df9e39 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12df9e3c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12df9e3f je 0x12df9e47 */
  if (C.zf) goto L_12df9e47;
  /* 12df9e41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12df9e43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12df9e45 je 0x12df9e4d */
  if (C.zf) goto L_12df9e4d;
L_12df9e47:;
  /* 12df9e47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12df9e49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12df9e4a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12df9e4b jne 0x12df9e47 */
  if (!C.zf) goto L_12df9e47;
L_12df9e4d:;
  /* 12df9e4d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12df9e51 pop edi */
  EDI = (pop32());
  /* 12df9e52 ret  */
  ESPCHK(0x12df9e00u, _esp0);
  ESP += 4; return;
L_12df9e53:;
  /* 12df9e53 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12df9e57 ret  */
  ESPCHK(0x12df9e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e60 @ 0x12df9e60 (23 bytes, 10 insns) */
void f_12df9e60(void) {
  FTRACE(0x12df9e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9e61 mov ebp, esp */
  EBP = (ESP);
  /* 12df9e63 mov eax, dword ptr [0x12e20890] */
  EAX = (r32((uint32_t)(0x12e20890)));
  /* 12df9e68 push eax */
  push32((uint32_t)(EAX));
  /* 12df9e69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9e6c push ecx */
  push32((uint32_t)(ECX));
  /* 12df9e6d call 0x12df9e80 */
  push32(0x12df9e72u); f_12df9e80();
  /* 12df9e72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9e75 pop ebp */
  EBP = (pop32());
  /* 12df9e76 ret  */
  ESPCHK(0x12df9e60u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12df9e80 (87 bytes, 34 insns) */
void f_12df9e80(void) {
  FTRACE(0x12df9e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9e81 mov ebp, esp */
  EBP = (ESP);
  /* 12df9e83 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9e84 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9e88 jbe 0x12df9e8e */
  if ((C.cf||C.zf)) goto L_12df9e8e;
  /* 12df9e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9e8c jmp 0x12df9ed3 */
  goto L_12df9ed3;
L_12df9e8e:;
  /* 12df9e8e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9e92 ja 0x12df9ea5 */
  if ((!C.cf&&!C.zf)) goto L_12df9ea5;
  /* 12df9e94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9e97 push eax */
  push32((uint32_t)(EAX));
  /* 12df9e98 call 0x12df9ee0 */
  push32(0x12df9e9du); f_12df9ee0();
  /* 12df9e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9ea0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df9ea3 jmp 0x12df9eac */
  goto L_12df9eac;
L_12df9ea5:;
  /* 12df9ea5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12df9eac:;
  /* 12df9eac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9eb0 jne 0x12df9eb8 */
  if (!C.zf) goto L_12df9eb8;
  /* 12df9eb2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9eb6 jne 0x12df9ebd */
  if (!C.zf) goto L_12df9ebd;
L_12df9eb8:;
  /* 12df9eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9ebb jmp 0x12df9ed3 */
  goto L_12df9ed3;
L_12df9ebd:;
  /* 12df9ebd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9ec1 call 0x12df9dd0 */
  push32(0x12df9ec6u); f_12df9dd0();
  /* 12df9ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9ec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df9ecb jne 0x12df9ed1 */
  if (!C.zf) goto L_12df9ed1;
  /* 12df9ecd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9ecf jmp 0x12df9ed3 */
  goto L_12df9ed3;
L_12df9ed1:;
  /* 12df9ed1 jmp 0x12df9e8e */
  goto L_12df9e8e;
L_12df9ed3:;
  /* 12df9ed3 mov esp, ebp */
  ESP = (EBP);
  /* 12df9ed5 pop ebp */
  EBP = (pop32());
  /* 12df9ed6 ret  */
  ESPCHK(0x12df9e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ee0 @ 0x12df9ee0 (109 bytes, 37 insns) */
void f_12df9ee0(void) {
  FTRACE(0x12df9ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12df9ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9ee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9ee7 cmp eax, dword ptr [0x12e1f154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e1f154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9eed ja 0x12df9f1d */
  if ((!C.cf&&!C.zf)) goto L_12df9f1d;
  /* 12df9eef push 9 */
  push32((uint32_t)(0x9u));
  /* 12df9ef1 call 0x12df9a90 */
  push32(0x12df9ef6u); f_12df9a90();
  /* 12df9ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9ef9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9efc push ecx */
  push32((uint32_t)(ECX));
  /* 12df9efd call 0x12dfaa20 */
  push32(0x12df9f02u); f_12dfaa20();
  /* 12df9f02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9f05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12df9f08 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df9f0a call 0x12df9b30 */
  push32(0x12df9f0fu); f_12df9b30();
  /* 12df9f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9f12 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9f16 je 0x12df9f1d */
  if (C.zf) goto L_12df9f1d;
  /* 12df9f18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9f1b jmp 0x12df9f49 */
  goto L_12df9f49;
L_12df9f1d:;
  /* 12df9f1d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9f21 jne 0x12df9f2a */
  if (!C.zf) goto L_12df9f2a;
  /* 12df9f23 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12df9f2a:;
  /* 12df9f2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9f2d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9f30 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12df9f33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12df9f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9f39 push eax */
  push32((uint32_t)(EAX));
  /* 12df9f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12df9f3c mov ecx, dword ptr [0x12e22044] */
  ECX = (r32((uint32_t)(0x12e22044)));
  /* 12df9f42 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9f43 call dword ptr [0x12e232b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232b4))), 0x12df9f49u);
L_12df9f49:;
  /* 12df9f49 mov esp, ebp */
  ESP = (EBP);
  /* 12df9f4b pop ebp */
  EBP = (pop32());
  /* 12df9f4c ret  */
  ESPCHK(0x12df9ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f50 @ 0x12df9f50 (10 bytes, 5 insns) */
void f_12df9f50(void) {
  FTRACE(0x12df9f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9f51 mov ebp, esp */
  EBP = (ESP);
  /* 12df9f53 mov eax, 1 */
  EAX = (0x1u);
  /* 12df9f58 pop ebp */
  EBP = (pop32());
  /* 12df9f59 ret  */
  ESPCHK(0x12df9f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f60 @ 0x12df9f60 (173 bytes, 59 insns) */
void f_12df9f60(void) {
  FTRACE(0x12df9f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12df9f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12df9f61 mov ebp, esp */
  EBP = (ESP);
  /* 12df9f63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12df9f66 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9f6a jbe 0x12df9f73 */
  if ((C.cf||C.zf)) goto L_12df9f73;
  /* 12df9f6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12df9f6e jmp 0x12dfa009 */
  goto L_12dfa009;
L_12df9f73:;
  /* 12df9f73 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df9f75 call 0x12df9a90 */
  push32(0x12df9f7au); f_12df9a90();
  /* 12df9f7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9f80 push eax */
  push32((uint32_t)(EAX));
  /* 12df9f81 call 0x12dfa390 */
  push32(0x12df9f86u); f_12dfa390();
  /* 12df9f86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9f89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12df9f8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9f90 je 0x12df9fd1 */
  if (C.zf) goto L_12df9fd1;
  /* 12df9f92 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12df9f99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9f9c cmp ecx, dword ptr [0x12e1f154] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e1f154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9fa2 ja 0x12df9fc2 */
  if ((!C.cf&&!C.zf)) goto L_12df9fc2;
  /* 12df9fa4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9fa7 push edx */
  push32((uint32_t)(EDX));
  /* 12df9fa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9fab push eax */
  push32((uint32_t)(EAX));
  /* 12df9fac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12df9faf push ecx */
  push32((uint32_t)(ECX));
  /* 12df9fb0 call 0x12dfb260 */
  push32(0x12df9fb5u); f_12dfb260();
  /* 12df9fb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12df9fba je 0x12df9fc2 */
  if (C.zf) goto L_12df9fc2;
  /* 12df9fbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9fbf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12df9fc2:;
  /* 12df9fc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df9fc4 call 0x12df9b30 */
  push32(0x12df9fc9u); f_12df9b30();
  /* 12df9fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9fcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12df9fcf jmp 0x12dfa009 */
  goto L_12dfa009;
L_12df9fd1:;
  /* 12df9fd1 push 9 */
  push32((uint32_t)(0x9u));
  /* 12df9fd3 call 0x12df9b30 */
  push32(0x12df9fd8u); f_12df9b30();
  /* 12df9fd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9fdb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12df9fdf jne 0x12df9fe8 */
  if (!C.zf) goto L_12df9fe8;
  /* 12df9fe1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12df9fe8:;
  /* 12df9fe8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9feb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12df9fee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12df9ff0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12df9ff3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12df9ff6 push ecx */
  push32((uint32_t)(ECX));
  /* 12df9ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12df9ffa push edx */
  push32((uint32_t)(EDX));
  /* 12df9ffb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12df9ffd mov eax, dword ptr [0x12e22044] */
  EAX = (r32((uint32_t)(0x12e22044)));
  /* 12dfa002 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa003 call dword ptr [0x12e232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232b8))), 0x12dfa009u);
L_12dfa009:;
  /* 12dfa009 mov esp, ebp */
  ESP = (EBP);
  /* 12dfa00b pop ebp */
  EBP = (pop32());
  /* 12dfa00c ret  */
  ESPCHK(0x12df9f60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a010 @ 0x12dfa010 (490 bytes, 165 insns) */
void f_12dfa010(void) {
  FTRACE(0x12dfa010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa010 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa011 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa013 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa016 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa01a jne 0x12dfa02d */
  if (!C.zf) goto L_12dfa02d;
  /* 12dfa01c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa01f push eax */
  push32((uint32_t)(EAX));
  /* 12dfa020 call 0x12df9e60 */
  push32(0x12dfa025u); f_12df9e60();
  /* 12dfa025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa028 jmp 0x12dfa1f6 */
  goto L_12dfa1f6;
L_12dfa02d:;
  /* 12dfa02d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa031 jne 0x12dfa046 */
  if (!C.zf) goto L_12dfa046;
  /* 12dfa033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa036 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa037 call 0x12dfa200 */
  push32(0x12dfa03cu); f_12dfa200();
  /* 12dfa03c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa03f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfa041 jmp 0x12dfa1f6 */
  goto L_12dfa1f6;
L_12dfa046:;
  /* 12dfa046 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12dfa04d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa051 ja 0x12dfa1c9 */
  if ((!C.cf&&!C.zf)) goto L_12dfa1c9;
  /* 12dfa057 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dfa059 call 0x12df9a90 */
  push32(0x12dfa05eu); f_12df9a90();
  /* 12dfa05e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa061 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa064 push edx */
  push32((uint32_t)(EDX));
  /* 12dfa065 call 0x12dfa390 */
  push32(0x12dfa06au); f_12dfa390();
  /* 12dfa06a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa06d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dfa070 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa074 je 0x12dfa18c */
  if (C.zf) goto L_12dfa18c;
  /* 12dfa07a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa07d cmp eax, dword ptr [0x12e1f154] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e1f154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa083 ja 0x12dfa100 */
  if ((!C.cf&&!C.zf)) goto L_12dfa100;
  /* 12dfa085 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa088 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa089 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa08c push edx */
  push32((uint32_t)(EDX));
  /* 12dfa08d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfa090 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa091 call 0x12dfb260 */
  push32(0x12dfa096u); f_12dfb260();
  /* 12dfa096 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa099 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfa09b je 0x12dfa0a5 */
  if (C.zf) goto L_12dfa0a5;
  /* 12dfa09d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa0a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dfa0a3 jmp 0x12dfa100 */
  goto L_12dfa100;
L_12dfa0a5:;
  /* 12dfa0a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa0a8 push edx */
  push32((uint32_t)(EDX));
  /* 12dfa0a9 call 0x12dfaa20 */
  push32(0x12dfa0aeu); f_12dfaa20();
  /* 12dfa0ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa0b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfa0b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa0b8 je 0x12dfa100 */
  if (C.zf) goto L_12dfa100;
  /* 12dfa0ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa0bd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12dfa0c0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa0c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dfa0c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa0c9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa0cc jae 0x12dfa0d6 */
  if (!C.cf) goto L_12dfa0d6;
  /* 12dfa0ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa0d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dfa0d4 jmp 0x12dfa0dc */
  goto L_12dfa0dc;
L_12dfa0d6:;
  /* 12dfa0d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa0d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12dfa0dc:;
  /* 12dfa0dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfa0df push edx */
  push32((uint32_t)(EDX));
  /* 12dfa0e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa0e3 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa0e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa0e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa0e8 call 0x12dfc870 */
  push32(0x12dfa0edu); f_12dfc870();
  /* 12dfa0ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa0f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa0f3 push edx */
  push32((uint32_t)(EDX));
  /* 12dfa0f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfa0f7 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa0f8 call 0x12dfa450 */
  push32(0x12dfa0fdu); f_12dfa450();
  /* 12dfa0fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfa100:;
  /* 12dfa100 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa104 jne 0x12dfa180 */
  if (!C.zf) goto L_12dfa180;
  /* 12dfa106 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa10a jne 0x12dfa113 */
  if (!C.zf) goto L_12dfa113;
  /* 12dfa10c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12dfa113:;
  /* 12dfa113 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa116 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa119 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa11c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12dfa11f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa122 push edx */
  push32((uint32_t)(EDX));
  /* 12dfa123 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfa125 mov eax, dword ptr [0x12e22044] */
  EAX = (r32((uint32_t)(0x12e22044)));
  /* 12dfa12a push eax */
  push32((uint32_t)(EAX));
  /* 12dfa12b call dword ptr [0x12e232b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232b4))), 0x12dfa131u);
  /* 12dfa131 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfa134 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa138 je 0x12dfa180 */
  if (C.zf) goto L_12dfa180;
  /* 12dfa13a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa13d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12dfa140 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa143 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dfa146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa149 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa14c jae 0x12dfa156 */
  if (!C.cf) goto L_12dfa156;
  /* 12dfa14e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa151 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dfa154 jmp 0x12dfa15c */
  goto L_12dfa15c;
L_12dfa156:;
  /* 12dfa156 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa159 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12dfa15c:;
  /* 12dfa15c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfa15f push eax */
  push32((uint32_t)(EAX));
  /* 12dfa160 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa163 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa164 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa167 push edx */
  push32((uint32_t)(EDX));
  /* 12dfa168 call 0x12dfc870 */
  push32(0x12dfa16du); f_12dfc870();
  /* 12dfa16d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa173 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa174 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfa177 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa178 call 0x12dfa450 */
  push32(0x12dfa17du); f_12dfa450();
  /* 12dfa17d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfa180:;
  /* 12dfa180 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dfa182 call 0x12df9b30 */
  push32(0x12dfa187u); f_12df9b30();
  /* 12dfa187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa18a jmp 0x12dfa1c9 */
  goto L_12dfa1c9;
L_12dfa18c:;
  /* 12dfa18c push 9 */
  push32((uint32_t)(0x9u));
  /* 12dfa18e call 0x12df9b30 */
  push32(0x12dfa193u); f_12df9b30();
  /* 12dfa193 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa196 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa19a jne 0x12dfa1a3 */
  if (!C.zf) goto L_12dfa1a3;
  /* 12dfa19c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12dfa1a3:;
  /* 12dfa1a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa1a6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa1a9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfa1ac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12dfa1af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa1b2 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa1b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa1b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa1b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfa1b9 mov edx, dword ptr [0x12e22044] */
  EDX = (r32((uint32_t)(0x12e22044)));
  /* 12dfa1bf push edx */
  push32((uint32_t)(EDX));
  /* 12dfa1c0 call dword ptr [0x12e232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232b8))), 0x12dfa1c6u);
  /* 12dfa1c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12dfa1c9:;
  /* 12dfa1c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa1cd jne 0x12dfa1d8 */
  if (!C.zf) goto L_12dfa1d8;
  /* 12dfa1cf cmp dword ptr [0x12e20890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa1d6 jne 0x12dfa1dd */
  if (!C.zf) goto L_12dfa1dd;
L_12dfa1d8:;
  /* 12dfa1d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa1db jmp 0x12dfa1f6 */
  goto L_12dfa1f6;
L_12dfa1dd:;
  /* 12dfa1dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa1e0 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa1e1 call 0x12df9dd0 */
  push32(0x12dfa1e6u); f_12df9dd0();
  /* 12dfa1e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa1e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfa1eb jne 0x12dfa1f1 */
  if (!C.zf) goto L_12dfa1f1;
  /* 12dfa1ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfa1ef jmp 0x12dfa1f6 */
  goto L_12dfa1f6;
L_12dfa1f1:;
  /* 12dfa1f1 jmp 0x12dfa046 */
  goto L_12dfa046;
L_12dfa1f6:;
  /* 12dfa1f6 mov esp, ebp */
  ESP = (EBP);
  /* 12dfa1f8 pop ebp */
  EBP = (pop32());
  /* 12dfa1f9 ret  */
  ESPCHK(0x12dfa010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a200 @ 0x12dfa200 (104 bytes, 38 insns) */
void f_12dfa200(void) {
  FTRACE(0x12dfa200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa200 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa201 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa203 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa204 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa208 jne 0x12dfa20c */
  if (!C.zf) goto L_12dfa20c;
  /* 12dfa20a jmp 0x12dfa264 */
  goto L_12dfa264;
L_12dfa20c:;
  /* 12dfa20c push 9 */
  push32((uint32_t)(0x9u));
  /* 12dfa20e call 0x12df9a90 */
  push32(0x12dfa213u); f_12df9a90();
  /* 12dfa213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa219 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa21a call 0x12dfa390 */
  push32(0x12dfa21fu); f_12dfa390();
  /* 12dfa21f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa222 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfa225 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa229 je 0x12dfa247 */
  if (C.zf) goto L_12dfa247;
  /* 12dfa22b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa22e push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa22f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa232 push edx */
  push32((uint32_t)(EDX));
  /* 12dfa233 call 0x12dfa450 */
  push32(0x12dfa238u); f_12dfa450();
  /* 12dfa238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa23b push 9 */
  push32((uint32_t)(0x9u));
  /* 12dfa23d call 0x12df9b30 */
  push32(0x12dfa242u); f_12df9b30();
  /* 12dfa242 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa245 jmp 0x12dfa264 */
  goto L_12dfa264;
L_12dfa247:;
  /* 12dfa247 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dfa249 call 0x12df9b30 */
  push32(0x12dfa24eu); f_12df9b30();
  /* 12dfa24e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa254 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa255 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfa257 mov ecx, dword ptr [0x12e22044] */
  ECX = (r32((uint32_t)(0x12e22044)));
  /* 12dfa25d push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa25e call dword ptr [0x12e23200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23200))), 0x12dfa264u);
L_12dfa264:;
  /* 12dfa264 mov esp, ebp */
  ESP = (EBP);
  /* 12dfa266 pop ebp */
  EBP = (pop32());
  /* 12dfa267 ret  */
  ESPCHK(0x12dfa200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a270 @ 0x12dfa270 (116 bytes, 34 insns) */
void f_12dfa270(void) {
  FTRACE(0x12dfa270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa270 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa271 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa273 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa274 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12dfa27b push 9 */
  push32((uint32_t)(0x9u));
  /* 12dfa27d call 0x12df9a90 */
  push32(0x12dfa282u); f_12df9a90();
  /* 12dfa282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa285 call 0x12dfb980 */
  push32(0x12dfa28au); f_12dfb980();
  /* 12dfa28a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfa28c jge 0x12dfa295 */
  if ((C.sf==C.of)) goto L_12dfa295;
  /* 12dfa28e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12dfa295:;
  /* 12dfa295 push 9 */
  push32((uint32_t)(0x9u));
  /* 12dfa297 call 0x12df9b30 */
  push32(0x12dfa29cu); f_12df9b30();
  /* 12dfa29c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa29f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfa2a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfa2a3 mov eax, dword ptr [0x12e22044] */
  EAX = (r32((uint32_t)(0x12e22044)));
  /* 12dfa2a8 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa2a9 call dword ptr [0x12e23270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23270))), 0x12dfa2afu);
  /* 12dfa2af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfa2b1 jne 0x12dfa2dd */
  if (!C.zf) goto L_12dfa2dd;
  /* 12dfa2b3 call dword ptr [0x12e23250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23250))), 0x12dfa2b9u);
  /* 12dfa2b9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa2bc jne 0x12dfa2d6 */
  if (!C.zf) goto L_12dfa2d6;
  /* 12dfa2be call 0x12dfcc60 */
  push32(0x12dfa2c3u); f_12dfcc60();
  /* 12dfa2c3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12dfa2c9 call 0x12dfcc50 */
  push32(0x12dfa2ceu); f_12dfcc50();
  /* 12dfa2ce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12dfa2d4 jmp 0x12dfa2dd */
  goto L_12dfa2dd;
L_12dfa2d6:;
  /* 12dfa2d6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12dfa2dd:;
  /* 12dfa2dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa2e0 mov esp, ebp */
  ESP = (EBP);
  /* 12dfa2e2 pop ebp */
  EBP = (pop32());
  /* 12dfa2e3 ret  */
  ESPCHK(0x12dfa270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2f0 @ 0x12dfa2f0 (10 bytes, 5 insns) */
void f_12dfa2f0(void) {
  FTRACE(0x12dfa2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa2f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa2f3 call 0x12dfa270 */
  push32(0x12dfa2f8u); f_12dfa270();
  /* 12dfa2f8 pop ebp */
  EBP = (pop32());
  /* 12dfa2f9 ret  */
  ESPCHK(0x12dfa2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a300 @ 0x12dfa300 (10 bytes, 5 insns) */
void f_12dfa300(void) {
  FTRACE(0x12dfa300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa300 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa301 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa303 mov eax, dword ptr [0x12e1f154] */
  EAX = (r32((uint32_t)(0x12e1f154)));
  /* 12dfa308 pop ebp */
  EBP = (pop32());
  /* 12dfa309 ret  */
  ESPCHK(0x12dfa300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a310 @ 0x12dfa310 (31 bytes, 11 insns) */
void f_12dfa310(void) {
  FTRACE(0x12dfa310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa310 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa311 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa313 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa31a jbe 0x12dfa320 */
  if ((C.cf||C.zf)) goto L_12dfa320;
  /* 12dfa31c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfa31e jmp 0x12dfa32d */
  goto L_12dfa32d;
L_12dfa320:;
  /* 12dfa320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa323 mov dword ptr [0x12e1f154], eax */
  w32((uint32_t)(0x12e1f154), (EAX));
  /* 12dfa328 mov eax, 1 */
  EAX = (0x1u);
L_12dfa32d:;
  /* 12dfa32d pop ebp */
  EBP = (pop32());
  /* 12dfa32e ret  */
  ESPCHK(0x12dfa310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a330 @ 0x12dfa330 (89 bytes, 20 insns) */
void f_12dfa330(void) {
  FTRACE(0x12dfa330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa330 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa331 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa333 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12dfa338 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfa33a mov eax, dword ptr [0x12e22044] */
  EAX = (r32((uint32_t)(0x12e22044)));
  /* 12dfa33f push eax */
  push32((uint32_t)(EAX));
  /* 12dfa340 call dword ptr [0x12e232b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232b4))), 0x12dfa346u);
  /* 12dfa346 mov dword ptr [0x12e20ce8], eax */
  w32((uint32_t)(0x12e20ce8), (EAX));
  /* 12dfa34b cmp dword ptr [0x12e20ce8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20ce8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa352 jne 0x12dfa358 */
  if (!C.zf) goto L_12dfa358;
  /* 12dfa354 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfa356 jmp 0x12dfa387 */
  goto L_12dfa387;
L_12dfa358:;
  /* 12dfa358 mov ecx, dword ptr [0x12e20ce8] */
  ECX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfa35e mov dword ptr [0x12e20cdc], ecx */
  w32((uint32_t)(0x12e20cdc), (ECX));
  /* 12dfa364 mov dword ptr [0x12e20ce0], 0 */
  w32((uint32_t)(0x12e20ce0), (0x0u));
  /* 12dfa36e mov dword ptr [0x12e20ce4], 0 */
  w32((uint32_t)(0x12e20ce4), (0x0u));
  /* 12dfa378 mov dword ptr [0x12e20cc8], 0x10 */
  w32((uint32_t)(0x12e20cc8), (0x10u));
  /* 12dfa382 mov eax, 1 */
  EAX = (0x1u);
L_12dfa387:;
  /* 12dfa387 pop ebp */
  EBP = (pop32());
  /* 12dfa388 ret  */
  ESPCHK(0x12dfa330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a390 @ 0x12dfa390 (85 bytes, 29 insns) */
void f_12dfa390(void) {
  FTRACE(0x12dfa390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa390 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa391 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa396 mov eax, dword ptr [0x12e20ce4] */
  EAX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfa39b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfa39e mov ecx, dword ptr [0x12e20ce8] */
  ECX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfa3a4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa3a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfa3a9 mov edx, dword ptr [0x12e20ce8] */
  EDX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfa3af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dfa3b2:;
  /* 12dfa3b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa3b5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa3b8 jae 0x12dfa3df */
  if (!C.cf) goto L_12dfa3df;
  /* 12dfa3ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa3bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa3c0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa3c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dfa3c6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa3cd jae 0x12dfa3d4 */
  if (!C.cf) goto L_12dfa3d4;
  /* 12dfa3cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa3d2 jmp 0x12dfa3e1 */
  goto L_12dfa3e1;
L_12dfa3d4:;
  /* 12dfa3d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa3d7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa3da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfa3dd jmp 0x12dfa3b2 */
  goto L_12dfa3b2;
L_12dfa3df:;
  /* 12dfa3df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfa3e1:;
  /* 12dfa3e1 mov esp, ebp */
  ESP = (EBP);
  /* 12dfa3e3 pop ebp */
  EBP = (pop32());
  /* 12dfa3e4 ret  */
  ESPCHK(0x12dfa390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3f0 @ 0x12dfa3f0 (95 bytes, 33 insns) */
void f_12dfa3f0(void) {
  FTRACE(0x12dfa3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa3f1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa3f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa3f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa3fc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa3ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dfa402 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa405 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12dfa408 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dfa40b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfa410 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa413 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfa415 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa418 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dfa41b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfa41d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfa41f jne 0x12dfa441 */
  if (!C.zf) goto L_12dfa441;
  /* 12dfa421 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa424 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfa427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfa429 jne 0x12dfa441 */
  if (!C.zf) goto L_12dfa441;
  /* 12dfa42b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa42e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa434 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfa436 je 0x12dfa441 */
  if (C.zf) goto L_12dfa441;
  /* 12dfa438 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12dfa43f jmp 0x12dfa448 */
  goto L_12dfa448;
L_12dfa441:;
  /* 12dfa441 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12dfa448:;
  /* 12dfa448 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfa44b mov esp, ebp */
  ESP = (EBP);
  /* 12dfa44d pop ebp */
  EBP = (pop32());
  /* 12dfa44e ret  */
  ESPCHK(0x12dfa3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a450 @ 0x12dfa450 (1485 bytes, 453 insns) */
void f_12dfa450(void) {
  FTRACE(0x12dfa450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfa450 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfa451 mov ebp, esp */
  EBP = (ESP);
  /* 12dfa453 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa456 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa459 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfa45c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12dfa45f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa462 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa465 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa468 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dfa46b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfa46e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12dfa471 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dfa474 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa477 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfa47d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa480 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12dfa487 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dfa48a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfa48d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa490 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dfa493 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa496 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dfa498 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa49b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12dfa49e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa4a1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa4a4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12dfa4a7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfa4aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dfa4ac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dfa4af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa4b2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12dfa4b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12dfa4b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfa4bb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa4be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfa4c0 jne 0x12dfa5e8 */
  if (!C.zf) goto L_12dfa5e8;
  /* 12dfa4c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfa4c9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dfa4cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa4cf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dfa4d2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa4d6 jbe 0x12dfa4df */
  if ((C.cf||C.zf)) goto L_12dfa4df;
  /* 12dfa4d8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12dfa4df:;
  /* 12dfa4df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfa4e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfa4e5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfa4e8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa4eb jne 0x12dfa5c1 */
  if (!C.zf) goto L_12dfa5c1;
  /* 12dfa4f1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa4f5 jae 0x12dfa556 */
  if (!C.cf) goto L_12dfa556;
  /* 12dfa4f7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfa4fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfa4ff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfa501 not eax */
  EAX = (~(EAX));
  /* 12dfa503 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa506 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa509 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12dfa50d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa50f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa512 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa515 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12dfa519 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa51c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa51f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dfa522 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfa525 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa528 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa52b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dfa52e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa531 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa534 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfa538 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfa53a jne 0x12dfa554 */
  if (!C.zf) goto L_12dfa554;
  /* 12dfa53c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfa541 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfa544 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfa546 not eax */
  EAX = (~(EAX));
  /* 12dfa548 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa54b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dfa54d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfa54f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa552 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dfa554:;
  /* 12dfa554 jmp 0x12dfa5c1 */
  goto L_12dfa5c1;
L_12dfa556:;
  /* 12dfa556 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfa559 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa55c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfa561 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfa563 not edx */
  EDX = (~(EDX));
  /* 12dfa565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa568 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa56b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12dfa572 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfa574 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa577 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa57a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12dfa581 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa584 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa587 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dfa58a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfa58d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa590 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa593 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dfa596 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa599 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa59c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dfa5a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfa5a2 jne 0x12dfa5c1 */
  if (!C.zf) goto L_12dfa5c1;
  /* 12dfa5a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfa5a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa5aa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfa5af shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfa5b1 not edx */
  EDX = (~(EDX));
  /* 12dfa5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa5b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfa5b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa5bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa5be mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12dfa5c1:;
  /* 12dfa5c1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfa5c4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfa5c7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfa5ca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dfa5cd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12dfa5d0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfa5d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfa5d6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfa5d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfa5dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dfa5df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfa5e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa5e5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12dfa5e8:;
  /* 12dfa5e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfa5eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dfa5ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa5f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dfa5f4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa5f8 jbe 0x12dfa601 */
  if ((C.cf||C.zf)) goto L_12dfa601;
  /* 12dfa5fa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12dfa601:;
  /* 12dfa601 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfa604 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa607 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfa609 jne 0x12dfa765 */
  if (!C.zf) goto L_12dfa765;
  /* 12dfa60f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa612 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa615 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12dfa618 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfa61b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dfa61e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa621 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12dfa624 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa628 jbe 0x12dfa631 */
  if ((C.cf||C.zf)) goto L_12dfa631;
  /* 12dfa62a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12dfa631:;
  /* 12dfa631 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfa634 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa637 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12dfa63a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfa63d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dfa640 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa643 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12dfa646 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa64a jbe 0x12dfa653 */
  if ((C.cf||C.zf)) goto L_12dfa653;
  /* 12dfa64c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12dfa653:;
  /* 12dfa653 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfa656 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa659 je 0x12dfa75f */
  if (C.zf) goto L_12dfa75f;
  /* 12dfa65f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfa662 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfa665 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfa668 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa66b jne 0x12dfa741 */
  if (!C.zf) goto L_12dfa741;
  /* 12dfa671 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa675 jae 0x12dfa6d6 */
  if (!C.cf) goto L_12dfa6d6;
  /* 12dfa677 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfa67c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfa67f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfa681 not edx */
  EDX = (~(EDX));
  /* 12dfa683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa686 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa689 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dfa68d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfa68f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa692 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa695 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dfa699 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa69c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa69f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dfa6a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfa6a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa6a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa6ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dfa6ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa6b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa6b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dfa6b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfa6ba jne 0x12dfa6d4 */
  if (!C.zf) goto L_12dfa6d4;
  /* 12dfa6bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfa6c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfa6c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfa6c6 not edx */
  EDX = (~(EDX));
  /* 12dfa6c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa6cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dfa6cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa6cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa6d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dfa6d4:;
  /* 12dfa6d4 jmp 0x12dfa741 */
  goto L_12dfa741;
L_12dfa6d6:;
  /* 12dfa6d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfa6d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa6dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfa6e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfa6e3 not eax */
  EAX = (~(EAX));
  /* 12dfa6e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa6e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa6eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dfa6f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa6f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa6f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa6fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12dfa701 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa704 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa707 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dfa70a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfa70d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa710 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa713 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dfa716 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa719 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa71c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfa720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfa722 jne 0x12dfa741 */
  if (!C.zf) goto L_12dfa741;
  /* 12dfa724 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfa727 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa72a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfa72f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfa731 not eax */
  EAX = (~(EAX));
  /* 12dfa733 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa736 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfa739 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfa73b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa73e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dfa741:;
  /* 12dfa741 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfa744 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dfa747 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfa74a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfa74d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dfa750 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfa753 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dfa756 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfa759 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dfa75c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12dfa75f:;
  /* 12dfa75f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfa762 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12dfa765:;
  /* 12dfa765 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfa768 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa76b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfa76d jne 0x12dfa77b */
  if (!C.zf) goto L_12dfa77b;
  /* 12dfa76f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfa772 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa775 je 0x12dfa88b */
  if (C.zf) goto L_12dfa88b;
L_12dfa77b:;
  /* 12dfa77b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfa77e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa781 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12dfa784 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dfa787 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa78a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfa78d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfa790 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dfa793 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa796 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfa799 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12dfa79c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfa79f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa7a2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12dfa7a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa7a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfa7ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa7ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dfa7b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa7b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa7b7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfa7ba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa7bd jne 0x12dfa88b */
  if (!C.zf) goto L_12dfa88b;
  /* 12dfa7c3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa7c7 jae 0x12dfa824 */
  if (!C.cf) goto L_12dfa824;
  /* 12dfa7c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa7cc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa7cf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfa7d3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa7d6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa7d9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dfa7dc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfa7df mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa7e2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa7e5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12dfa7e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfa7ea jne 0x12dfa802 */
  if (!C.zf) goto L_12dfa802;
  /* 12dfa7ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfa7f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfa7f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfa7f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa7f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dfa7fb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa7fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa800 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dfa802:;
  /* 12dfa802 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfa807 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfa80a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfa80c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa80f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa812 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12dfa816 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa818 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa81b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa81e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12dfa822 jmp 0x12dfa88b */
  goto L_12dfa88b;
L_12dfa824:;
  /* 12dfa824 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa827 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa82a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfa82e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa831 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa834 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dfa837 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfa83a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa83d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa840 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12dfa843 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfa845 jne 0x12dfa862 */
  if (!C.zf) goto L_12dfa862;
  /* 12dfa847 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfa84a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa84d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfa852 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfa854 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa857 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfa85a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa85c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa85f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12dfa862:;
  /* 12dfa862 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfa865 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa868 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfa86d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfa86f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa872 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa875 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dfa87c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa87e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfa881 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12dfa884 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12dfa88b:;
  /* 12dfa88b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa88e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfa891 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dfa893 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfa896 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa899 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfa89c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12dfa89f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa8a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dfa8a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa8a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa8aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12dfa8ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfa8af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa8b2 jne 0x12dfaa19 */
  if (!C.zf) goto L_12dfaa19;
  /* 12dfa8b8 cmp dword ptr [0x12e20ce0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20ce0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa8bf je 0x12dfaa08 */
  if (C.zf) goto L_12dfaa08;
  /* 12dfa8c5 mov eax, dword ptr [0x12e20cd8] */
  EAX = (r32((uint32_t)(0x12e20cd8)));
  /* 12dfa8ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12dfa8cd mov ecx, dword ptr [0x12e20ce0] */
  ECX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa8d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dfa8d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa8d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dfa8db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12dfa8e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dfa8e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfa8e8 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa8e9 call dword ptr [0x12e23294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23294))), 0x12dfa8efu);
  /* 12dfa8ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfa8f4 mov ecx, dword ptr [0x12e20cd8] */
  ECX = (r32((uint32_t)(0x12e20cd8)));
  /* 12dfa8fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfa8fc mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa901 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfa904 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfa906 mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa90c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dfa90f mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa914 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfa917 mov edx, dword ptr [0x12e20cd8] */
  EDX = (r32((uint32_t)(0x12e20cd8)));
  /* 12dfa91d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12dfa928 mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa92d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfa930 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12dfa933 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfa936 mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa93b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfa93e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12dfa941 mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa947 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dfa94a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12dfa94e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfa950 jne 0x12dfa966 */
  if (!C.zf) goto L_12dfa966;
  /* 12dfa952 mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa958 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dfa95b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12dfa95d mov ecx, dword ptr [0x12e20ce0] */
  ECX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa963 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12dfa966:;
  /* 12dfa966 mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa96c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa970 jne 0x12dfaa08 */
  if (!C.zf) goto L_12dfaa08;
  /* 12dfa976 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dfa97b push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfa97d mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa982 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dfa985 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa986 call dword ptr [0x12e23294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23294))), 0x12dfa98cu);
  /* 12dfa98c mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa992 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dfa995 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa996 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfa998 mov ecx, dword ptr [0x12e22044] */
  ECX = (r32((uint32_t)(0x12e22044)));
  /* 12dfa99e push ecx */
  push32((uint32_t)(ECX));
  /* 12dfa99f call dword ptr [0x12e23200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23200))), 0x12dfa9a5u);
  /* 12dfa9a5 mov edx, dword ptr [0x12e20ce4] */
  EDX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfa9ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfa9ae mov eax, dword ptr [0x12e20ce8] */
  EAX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfa9b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa9b5 mov ecx, dword ptr [0x12e20ce0] */
  ECX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa9bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa9be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa9c0 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa9c1 mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa9c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa9ca push edx */
  push32((uint32_t)(EDX));
  /* 12dfa9cb mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfa9d0 push eax */
  push32((uint32_t)(EAX));
  /* 12dfa9d1 call 0x12dfe030 */
  push32(0x12dfa9d6u); f_12dfe030();
  /* 12dfa9d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfa9d9 mov ecx, dword ptr [0x12e20ce4] */
  ECX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfa9df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa9e2 mov dword ptr [0x12e20ce4], ecx */
  w32((uint32_t)(0x12e20ce4), (ECX));
  /* 12dfa9e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa9eb cmp edx, dword ptr [0x12e20ce0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e20ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfa9f1 jbe 0x12dfa9fc */
  if ((C.cf||C.zf)) goto L_12dfa9fc;
  /* 12dfa9f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfa9f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfa9f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12dfa9fc:;
  /* 12dfa9fc mov ecx, dword ptr [0x12e20ce8] */
  ECX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfaa02 mov dword ptr [0x12e20cdc], ecx */
  w32((uint32_t)(0x12e20cdc), (ECX));
L_12dfaa08:;
  /* 12dfaa08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfaa0b mov dword ptr [0x12e20ce0], edx */
  w32((uint32_t)(0x12e20ce0), (EDX));
  /* 12dfaa11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfaa14 mov dword ptr [0x12e20cd8], eax */
  w32((uint32_t)(0x12e20cd8), (EAX));
L_12dfaa19:;
  /* 12dfaa19 mov esp, ebp */
  ESP = (EBP);
  /* 12dfaa1b pop ebp */
  EBP = (pop32());
  /* 12dfaa1c ret  */
  ESPCHK(0x12dfa450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x12dfaa20 (1334 bytes, 427 insns) */
void f_12dfaa20(void) {
  FTRACE(0x12dfaa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfaa20 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfaa21 mov ebp, esp */
  EBP = (ESP);
  /* 12dfaa23 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfaa26 push esi */
  push32((uint32_t)(ESI));
  /* 12dfaa27 mov eax, dword ptr [0x12e20ce4] */
  EAX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfaa2c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfaa2f mov ecx, dword ptr [0x12e20ce8] */
  ECX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfaa35 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaa37 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dfaa3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfaa3d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaa40 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfaa43 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12dfaa46 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfaa49 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dfaa4c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfaa4f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dfaa52 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaa56 jge 0x12dfaa6c */
  if ((C.sf==C.of)) goto L_12dfaa6c;
  /* 12dfaa58 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12dfaa5b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfaa5e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfaa60 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dfaa63 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12dfaa6a jmp 0x12dfaa81 */
  goto L_12dfaa81;
L_12dfaa6c:;
  /* 12dfaa6c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dfaa73 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfaa76 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfaa79 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfaa7c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfaa7e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12dfaa81:;
  /* 12dfaa81 mov ecx, dword ptr [0x12e20cdc] */
  ECX = (r32((uint32_t)(0x12e20cdc)));
  /* 12dfaa87 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12dfaa8a:;
  /* 12dfaa8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaa8d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaa90 jae 0x12dfaab6 */
  if (!C.cf) goto L_12dfaab6;
  /* 12dfaa92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaa95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfaa98 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12dfaa9a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaa9d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfaaa0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12dfaaa3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfaaa5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfaaa7 je 0x12dfaaab */
  if (C.zf) goto L_12dfaaab;
  /* 12dfaaa9 jmp 0x12dfaab6 */
  goto L_12dfaab6;
L_12dfaaab:;
  /* 12dfaaab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaaae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaab1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dfaab4 jmp 0x12dfaa8a */
  goto L_12dfaa8a;
L_12dfaab6:;
  /* 12dfaab6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaab9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaabc jne 0x12dfab9d */
  if (!C.zf) goto L_12dfab9d;
  /* 12dfaac2 mov eax, dword ptr [0x12e20ce8] */
  EAX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfaac7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12dfaaca:;
  /* 12dfaaca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaacd cmp ecx, dword ptr [0x12e20cdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e20cdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaad3 jae 0x12dfaaf9 */
  if (!C.cf) goto L_12dfaaf9;
  /* 12dfaad5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaad8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfaadb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12dfaadd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaae0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfaae3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12dfaae6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfaae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfaaea je 0x12dfaaee */
  if (C.zf) goto L_12dfaaee;
  /* 12dfaaec jmp 0x12dfaaf9 */
  goto L_12dfaaf9;
L_12dfaaee:;
  /* 12dfaaee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaaf1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaaf4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dfaaf7 jmp 0x12dfaaca */
  goto L_12dfaaca;
L_12dfaaf9:;
  /* 12dfaaf9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaafc cmp ecx, dword ptr [0x12e20cdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e20cdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfab02 jne 0x12dfab9d */
  if (!C.zf) goto L_12dfab9d;
L_12dfab08:;
  /* 12dfab08 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab0b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfab0e jae 0x12dfab26 */
  if (!C.cf) goto L_12dfab26;
  /* 12dfab10 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab13 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfab17 je 0x12dfab1b */
  if (C.zf) goto L_12dfab1b;
  /* 12dfab19 jmp 0x12dfab26 */
  goto L_12dfab26;
L_12dfab1b:;
  /* 12dfab1b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfab21 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dfab24 jmp 0x12dfab08 */
  goto L_12dfab08;
L_12dfab26:;
  /* 12dfab26 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab29 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfab2c jne 0x12dfab77 */
  if (!C.zf) goto L_12dfab77;
  /* 12dfab2e mov eax, dword ptr [0x12e20ce8] */
  EAX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfab33 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12dfab36:;
  /* 12dfab36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab39 cmp ecx, dword ptr [0x12e20cdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e20cdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfab3f jae 0x12dfab57 */
  if (!C.cf) goto L_12dfab57;
  /* 12dfab41 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab44 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfab48 je 0x12dfab4c */
  if (C.zf) goto L_12dfab4c;
  /* 12dfab4a jmp 0x12dfab57 */
  goto L_12dfab57;
L_12dfab4c:;
  /* 12dfab4c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab4f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfab52 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dfab55 jmp 0x12dfab36 */
  goto L_12dfab36;
L_12dfab57:;
  /* 12dfab57 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab5a cmp ecx, dword ptr [0x12e20cdc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e20cdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfab60 jne 0x12dfab77 */
  if (!C.zf) goto L_12dfab77;
  /* 12dfab62 call 0x12dfaf60 */
  push32(0x12dfab67u); f_12dfaf60();
  /* 12dfab67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dfab6a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfab6e jne 0x12dfab77 */
  if (!C.zf) goto L_12dfab77;
  /* 12dfab70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfab72 jmp 0x12dfaf51 */
  goto L_12dfaf51;
L_12dfab77:;
  /* 12dfab77 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab7a push edx */
  push32((uint32_t)(EDX));
  /* 12dfab7b call 0x12dfb070 */
  push32(0x12dfab80u); f_12dfb070();
  /* 12dfab80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfab83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab86 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dfab89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dfab8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfab8e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfab91 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfab94 jne 0x12dfab9d */
  if (!C.zf) goto L_12dfab9d;
  /* 12dfab96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfab98 jmp 0x12dfaf51 */
  goto L_12dfaf51;
L_12dfab9d:;
  /* 12dfab9d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaba0 mov dword ptr [0x12e20cdc], edx */
  w32((uint32_t)(0x12e20cdc), (EDX));
  /* 12dfaba6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaba9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfabac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12dfabaf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfabb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dfabb4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12dfabb7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfabbb je 0x12dfabe0 */
  if (C.zf) goto L_12dfabe0;
  /* 12dfabbd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfabc0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfabc3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfabc6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12dfabca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfabcd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfabd0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfabd3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12dfabda or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12dfabdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfabde jne 0x12dfac15 */
  if (!C.zf) goto L_12dfac15;
L_12dfabe0:;
  /* 12dfabe0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12dfabe7:;
  /* 12dfabe7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfabea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfabed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfabf0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12dfabf4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfabf7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfabfa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfabfd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12dfac04 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12dfac06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfac08 jne 0x12dfac15 */
  if (!C.zf) goto L_12dfac15;
  /* 12dfac0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfac0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfac10 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12dfac13 jmp 0x12dfabe7 */
  goto L_12dfabe7;
L_12dfac15:;
  /* 12dfac15 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfac18 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfac1e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfac21 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12dfac28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dfac2b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dfac32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfac35 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfac38 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfac3b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12dfac3f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12dfac42 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfac46 jne 0x12dfac62 */
  if (!C.zf) goto L_12dfac62;
  /* 12dfac48 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12dfac4f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfac52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfac55 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12dfac58 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12dfac5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12dfac62:;
  /* 12dfac62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfac66 jl 0x12dfac7b */
  if ((C.sf!=C.of)) goto L_12dfac7b;
  /* 12dfac68 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfac6b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12dfac6d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dfac70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfac73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfac76 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12dfac79 jmp 0x12dfac62 */
  goto L_12dfac62;
L_12dfac7b:;
  /* 12dfac7b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfac7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfac81 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12dfac85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dfac88 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfac8b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dfac8d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfac90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfac93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfac96 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12dfac99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfac9c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12dfac9f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaca3 jle 0x12dfacac */
  if ((C.zf||C.sf!=C.of)) goto L_12dfacac;
  /* 12dfaca5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12dfacac:;
  /* 12dfacac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfacaf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfacb2 je 0x12dfaed0 */
  if (C.zf) goto L_12dfaed0;
  /* 12dfacb8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfacbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfacbe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfacc1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfacc4 jne 0x12dfad9a */
  if (!C.zf) goto L_12dfad9a;
  /* 12dfacca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfacce jge 0x12dfad2f */
  if ((C.sf==C.of)) goto L_12dfad2f;
  /* 12dfacd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfacd5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfacd8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfacda not eax */
  EAX = (~(EAX));
  /* 12dfacdc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfacdf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dface2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12dface6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dface8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfaceb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfacee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12dfacf2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfacf5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfacf8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dfacfb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfacfe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfad01 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfad04 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dfad07 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfad0a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfad0d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfad11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfad13 jne 0x12dfad2d */
  if (!C.zf) goto L_12dfad2d;
  /* 12dfad15 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfad1a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfad1d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfad1f not eax */
  EAX = (~(EAX));
  /* 12dfad21 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfad24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dfad26 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfad28 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfad2b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dfad2d:;
  /* 12dfad2d jmp 0x12dfad9a */
  goto L_12dfad9a;
L_12dfad2f:;
  /* 12dfad2f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfad32 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfad35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfad3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfad3c not edx */
  EDX = (~(EDX));
  /* 12dfad3e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfad41 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfad44 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12dfad4b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfad4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfad50 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfad53 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12dfad5a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfad5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfad60 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dfad63 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfad66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfad69 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfad6c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dfad6f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfad72 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfad75 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dfad79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfad7b jne 0x12dfad9a */
  if (!C.zf) goto L_12dfad9a;
  /* 12dfad7d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfad80 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfad83 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfad88 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfad8a not edx */
  EDX = (~(EDX));
  /* 12dfad8c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfad8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfad92 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfad94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfad97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12dfad9a:;
  /* 12dfad9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfad9d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfada0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfada3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dfada6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12dfada9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfadac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfadaf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfadb2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfadb5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dfadb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfadbc je 0x12dfaed0 */
  if (C.zf) goto L_12dfaed0;
  /* 12dfadc2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfadc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfadc8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12dfadcb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfadce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfadd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfadd4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfadd7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dfadda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfaddd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfade0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dfade3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfade6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfade9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12dfadec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfadef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfadf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfadf5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12dfadf8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfadfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfadfe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfae01 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfae04 jne 0x12dfaed0 */
  if (!C.zf) goto L_12dfaed0;
  /* 12dfae0a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfae0e jge 0x12dfae6a */
  if ((C.sf==C.of)) goto L_12dfae6a;
  /* 12dfae10 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfae13 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfae16 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dfae1a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfae1d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfae20 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12dfae23 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfae25 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfae28 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfae2b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12dfae2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfae30 jne 0x12dfae48 */
  if (!C.zf) goto L_12dfae48;
  /* 12dfae32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfae37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfae3a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfae3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfae3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dfae41 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfae43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfae46 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dfae48:;
  /* 12dfae48 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfae4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfae50 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfae52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfae55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfae58 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dfae5c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfae5e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfae61 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfae64 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dfae68 jmp 0x12dfaed0 */
  goto L_12dfaed0;
L_12dfae6a:;
  /* 12dfae6a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfae6d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfae70 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dfae74 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfae77 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfae7a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12dfae7d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfae7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfae82 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfae85 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12dfae88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfae8a jne 0x12dfaea7 */
  if (!C.zf) goto L_12dfaea7;
  /* 12dfae8c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfae8f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfae92 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfae97 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfae99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfae9c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfae9f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfaea1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaea4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dfaea7:;
  /* 12dfaea7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfaeaa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfaead mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfaeb2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfaeb4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfaeb7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfaeba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12dfaec1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfaec3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfaec6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfaec9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12dfaed0:;
  /* 12dfaed0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaed4 je 0x12dfaeea */
  if (C.zf) goto L_12dfaeea;
  /* 12dfaed6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfaed9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfaedc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dfaede mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfaee1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaee4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfaee7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12dfaeea:;
  /* 12dfaeea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfaeed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaef0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dfaef3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfaef6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaef9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfaefc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dfaefe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfaf01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaf04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfaf07 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaf0a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12dfaf0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfaf10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dfaf12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfaf15 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dfaf17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaf1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfaf1d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dfaf1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfaf21 jne 0x12dfaf43 */
  if (!C.zf) goto L_12dfaf43;
  /* 12dfaf23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfaf26 cmp eax, dword ptr [0x12e20ce0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e20ce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaf2c jne 0x12dfaf43 */
  if (!C.zf) goto L_12dfaf43;
  /* 12dfaf2e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfaf31 cmp ecx, dword ptr [0x12e20cd8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e20cd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaf37 jne 0x12dfaf43 */
  if (!C.zf) goto L_12dfaf43;
  /* 12dfaf39 mov dword ptr [0x12e20ce0], 0 */
  w32((uint32_t)(0x12e20ce0), (0x0u));
L_12dfaf43:;
  /* 12dfaf43 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12dfaf46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfaf49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12dfaf4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfaf4e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12dfaf51:;
  /* 12dfaf51 pop esi */
  ESI = (pop32());
  /* 12dfaf52 mov esp, ebp */
  ESP = (EBP);
  /* 12dfaf54 pop ebp */
  EBP = (pop32());
  /* 12dfaf55 ret  */
  ESPCHK(0x12dfaa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af60 @ 0x12dfaf60 (271 bytes, 78 insns) */
void f_12dfaf60(void) {
  FTRACE(0x12dfaf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfaf60 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfaf61 mov ebp, esp */
  EBP = (ESP);
  /* 12dfaf63 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfaf64 mov eax, dword ptr [0x12e20ce4] */
  EAX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfaf69 cmp eax, dword ptr [0x12e20cc8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e20cc8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaf6f jne 0x12dfafbb */
  if (!C.zf) goto L_12dfafbb;
  /* 12dfaf71 mov ecx, dword ptr [0x12e20cc8] */
  ECX = (r32((uint32_t)(0x12e20cc8)));
  /* 12dfaf77 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfaf7a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfaf7d push ecx */
  push32((uint32_t)(ECX));
  /* 12dfaf7e mov edx, dword ptr [0x12e20ce8] */
  EDX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfaf84 push edx */
  push32((uint32_t)(EDX));
  /* 12dfaf85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfaf87 mov eax, dword ptr [0x12e22044] */
  EAX = (r32((uint32_t)(0x12e22044)));
  /* 12dfaf8c push eax */
  push32((uint32_t)(EAX));
  /* 12dfaf8d call dword ptr [0x12e232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232b8))), 0x12dfaf93u);
  /* 12dfaf93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfaf96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfaf9a jne 0x12dfafa3 */
  if (!C.zf) goto L_12dfafa3;
  /* 12dfaf9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfaf9e jmp 0x12dfb06b */
  goto L_12dfb06b;
L_12dfafa3:;
  /* 12dfafa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfafa6 mov dword ptr [0x12e20ce8], ecx */
  w32((uint32_t)(0x12e20ce8), (ECX));
  /* 12dfafac mov edx, dword ptr [0x12e20cc8] */
  EDX = (r32((uint32_t)(0x12e20cc8)));
  /* 12dfafb2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfafb5 mov dword ptr [0x12e20cc8], edx */
  w32((uint32_t)(0x12e20cc8), (EDX));
L_12dfafbb:;
  /* 12dfafbb mov eax, dword ptr [0x12e20ce4] */
  EAX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfafc0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfafc3 mov ecx, dword ptr [0x12e20ce8] */
  ECX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfafc9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfafcb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dfafce push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12dfafd3 push 8 */
  push32((uint32_t)(0x8u));
  /* 12dfafd5 mov edx, dword ptr [0x12e22044] */
  EDX = (r32((uint32_t)(0x12e22044)));
  /* 12dfafdb push edx */
  push32((uint32_t)(EDX));
  /* 12dfafdc call dword ptr [0x12e232b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232b4))), 0x12dfafe2u);
  /* 12dfafe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfafe5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12dfafe8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfafeb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfafef jne 0x12dfaff5 */
  if (!C.zf) goto L_12dfaff5;
  /* 12dfaff1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfaff3 jmp 0x12dfb06b */
  goto L_12dfb06b;
L_12dfaff5:;
  /* 12dfaff5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dfaff7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12dfaffc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12dfb001 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfb003 call dword ptr [0x12e232bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232bc))), 0x12dfb009u);
  /* 12dfb009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb00c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12dfb00f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb012 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb016 jne 0x12dfb032 */
  if (!C.zf) goto L_12dfb032;
  /* 12dfb018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb01b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfb01e push ecx */
  push32((uint32_t)(ECX));
  /* 12dfb01f push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfb021 mov edx, dword ptr [0x12e22044] */
  EDX = (r32((uint32_t)(0x12e22044)));
  /* 12dfb027 push edx */
  push32((uint32_t)(EDX));
  /* 12dfb028 call dword ptr [0x12e23200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23200))), 0x12dfb02eu);
  /* 12dfb02e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfb030 jmp 0x12dfb06b */
  goto L_12dfb06b;
L_12dfb032:;
  /* 12dfb032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb035 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dfb03b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb03e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12dfb045 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb048 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12dfb04f mov eax, dword ptr [0x12e20ce4] */
  EAX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfb054 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb057 mov dword ptr [0x12e20ce4], eax */
  w32((uint32_t)(0x12e20ce4), (EAX));
  /* 12dfb05c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb05f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dfb062 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12dfb068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12dfb06b:;
  /* 12dfb06b mov esp, ebp */
  ESP = (EBP);
  /* 12dfb06d pop ebp */
  EBP = (pop32());
  /* 12dfb06e ret  */
  ESPCHK(0x12dfaf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b070 @ 0x12dfb070 (494 bytes, 149 insns) */
void f_12dfb070(void) {
  FTRACE(0x12dfb070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfb070 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfb071 mov ebp, esp */
  EBP = (ESP);
  /* 12dfb073 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb079 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfb07c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dfb07f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb082 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dfb085 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfb088 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12dfb08f:;
  /* 12dfb08f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb093 jl 0x12dfb0a8 */
  if ((C.sf!=C.of)) goto L_12dfb0a8;
  /* 12dfb095 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfb098 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12dfb09a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dfb09d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb0a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb0a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12dfb0a6 jmp 0x12dfb08f */
  goto L_12dfb08f;
L_12dfb0a8:;
  /* 12dfb0a8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb0ab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfb0b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb0b4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12dfb0bb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12dfb0be mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12dfb0c5 jmp 0x12dfb0d0 */
  goto L_12dfb0d0;
L_12dfb0c7:;
  /* 12dfb0c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb0ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb0cd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12dfb0d0:;
  /* 12dfb0d0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb0d4 jge 0x12dfb0f6 */
  if ((C.sf==C.of)) goto L_12dfb0f6;
  /* 12dfb0d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb0d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfb0dc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12dfb0df mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dfb0e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb0e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb0e8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12dfb0eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb0ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb0f1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12dfb0f4 jmp 0x12dfb0c7 */
  goto L_12dfb0c7;
L_12dfb0f6:;
  /* 12dfb0f6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb0f9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12dfb0fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb0ff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12dfb102 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb104 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12dfb107 push 4 */
  push32((uint32_t)(0x4u));
  /* 12dfb109 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12dfb10e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dfb113 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb116 push edx */
  push32((uint32_t)(EDX));
  /* 12dfb117 call dword ptr [0x12e232bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232bc))), 0x12dfb11du);
  /* 12dfb11d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfb11f jne 0x12dfb129 */
  if (!C.zf) goto L_12dfb129;
  /* 12dfb121 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfb124 jmp 0x12dfb25a */
  goto L_12dfb25a;
L_12dfb129:;
  /* 12dfb129 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb12c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb131 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dfb134 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb137 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dfb13a jmp 0x12dfb148 */
  goto L_12dfb148;
L_12dfb13c:;
  /* 12dfb13c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb13f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb145 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dfb148:;
  /* 12dfb148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb14b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb14e ja 0x12dfb1ad */
  if ((!C.cf&&!C.zf)) goto L_12dfb1ad;
  /* 12dfb150 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb153 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12dfb15a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb15d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12dfb167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb16a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb16d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dfb170 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb173 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12dfb179 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb17c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb182 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb185 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dfb188 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb18b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb191 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb194 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dfb197 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb19a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb19f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12dfb1a2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfb1a5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12dfb1ab jmp 0x12dfb13c */
  goto L_12dfb13c;
L_12dfb1ad:;
  /* 12dfb1ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfb1b0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb1b6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dfb1b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb1bc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb1bf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb1c2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12dfb1c5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb1c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dfb1cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dfb1ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb1d1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb1d4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12dfb1d7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfb1da add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb1dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb1e0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12dfb1e3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb1e6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dfb1e9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dfb1ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb1ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb1f2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12dfb1f5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb1f8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb1fb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12dfb203 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb206 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb209 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12dfb214 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb217 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12dfb21b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb21e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12dfb221 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfb224 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb227 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12dfb22a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfb22c jne 0x12dfb23d */
  if (!C.zf) goto L_12dfb23d;
  /* 12dfb22e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb231 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfb234 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfb237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb23a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dfb23d:;
  /* 12dfb23d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb242 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb245 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb247 not edx */
  EDX = (~(EDX));
  /* 12dfb249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb24c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfb24f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb251 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb254 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dfb257 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12dfb25a:;
  /* 12dfb25a mov esp, ebp */
  ESP = (EBP);
  /* 12dfb25c pop ebp */
  EBP = (pop32());
  /* 12dfb25d ret  */
  ESPCHK(0x12dfb070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b260 @ 0x12dfb260 (1515 bytes, 489 insns) */
void f_12dfb260(void) {
  FTRACE(0x12dfb260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfb260 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfb261 mov ebp, esp */
  EBP = (ESP);
  /* 12dfb263 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb266 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfb269 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb26c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12dfb26e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12dfb271 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb274 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12dfb277 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12dfb27a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb27d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfb280 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb283 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12dfb286 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfb289 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12dfb28c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dfb28f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb292 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfb298 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb29b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12dfb2a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dfb2a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfb2a8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb2ab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12dfb2ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb2b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dfb2b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb2b6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12dfb2b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb2bc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb2bf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12dfb2c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb2c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dfb2c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dfb2ca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfb2cd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb2d0 jle 0x12dfb586 */
  if ((C.zf||C.sf!=C.of)) goto L_12dfb586;
  /* 12dfb2d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb2d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb2dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfb2de jne 0x12dfb2eb */
  if (!C.zf) goto L_12dfb2eb;
  /* 12dfb2e0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb2e3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb2e6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb2e9 jle 0x12dfb2f2 */
  if ((C.zf||C.sf!=C.of)) goto L_12dfb2f2;
L_12dfb2eb:;
  /* 12dfb2eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfb2ed jmp 0x12dfb847 */
  goto L_12dfb847;
L_12dfb2f2:;
  /* 12dfb2f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb2f5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dfb2f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb2fb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dfb2fe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb302 jbe 0x12dfb30b */
  if ((C.cf||C.zf)) goto L_12dfb30b;
  /* 12dfb304 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12dfb30b:;
  /* 12dfb30b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb30e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb311 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfb314 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb317 jne 0x12dfb3ed */
  if (!C.zf) goto L_12dfb3ed;
  /* 12dfb31d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb321 jae 0x12dfb382 */
  if (!C.cf) goto L_12dfb382;
  /* 12dfb323 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb328 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb32b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb32d not edx */
  EDX = (~(EDX));
  /* 12dfb32f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb332 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb335 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dfb339 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfb33b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb33e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb341 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dfb345 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb348 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb34b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dfb34e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfb351 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb354 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb357 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dfb35a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb35d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb360 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dfb364 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfb366 jne 0x12dfb380 */
  if (!C.zf) goto L_12dfb380;
  /* 12dfb368 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb36d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb370 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb372 not edx */
  EDX = (~(EDX));
  /* 12dfb374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb377 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dfb379 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb37b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb37e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dfb380:;
  /* 12dfb380 jmp 0x12dfb3ed */
  goto L_12dfb3ed;
L_12dfb382:;
  /* 12dfb382 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb385 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb388 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfb38d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfb38f not eax */
  EAX = (~(EAX));
  /* 12dfb391 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb394 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb397 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dfb39e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb3a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb3a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb3a6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12dfb3ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb3b0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb3b3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dfb3b6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfb3b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb3bc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb3bf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dfb3c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb3c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb3c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfb3cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfb3ce jne 0x12dfb3ed */
  if (!C.zf) goto L_12dfb3ed;
  /* 12dfb3d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb3d3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb3d6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfb3db shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfb3dd not eax */
  EAX = (~(EAX));
  /* 12dfb3df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb3e2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfb3e5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfb3e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb3ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dfb3ed:;
  /* 12dfb3ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb3f0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dfb3f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb3f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfb3f9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dfb3fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb3ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dfb402 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb405 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dfb408 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12dfb40b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb40e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb411 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb414 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12dfb417 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb41b jle 0x12dfb567 */
  if ((C.zf||C.sf!=C.of)) goto L_12dfb567;
  /* 12dfb421 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb424 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb427 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12dfb42a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb42d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dfb430 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb433 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12dfb436 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb43a jbe 0x12dfb443 */
  if ((C.cf||C.zf)) goto L_12dfb443;
  /* 12dfb43c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12dfb443:;
  /* 12dfb443 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb446 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfb449 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12dfb44c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12dfb44f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb452 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb455 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfb458 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12dfb45b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb45e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb461 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12dfb464 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb467 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb46a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12dfb46d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb470 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfb473 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb476 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dfb479 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb47c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb47f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfb482 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb485 jne 0x12dfb553 */
  if (!C.zf) goto L_12dfb553;
  /* 12dfb48b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb48f jae 0x12dfb4ec */
  if (!C.cf) goto L_12dfb4ec;
  /* 12dfb491 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb494 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb497 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfb49b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb49e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb4a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dfb4a4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfb4a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb4aa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb4ad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12dfb4b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfb4b2 jne 0x12dfb4ca */
  if (!C.zf) goto L_12dfb4ca;
  /* 12dfb4b4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb4b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb4bc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb4be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb4c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dfb4c3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb4c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb4c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dfb4ca:;
  /* 12dfb4ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfb4cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb4d2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfb4d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb4d7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb4da mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12dfb4de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb4e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb4e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb4e6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12dfb4ea jmp 0x12dfb553 */
  goto L_12dfb553;
L_12dfb4ec:;
  /* 12dfb4ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb4ef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb4f2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfb4f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb4f9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb4fc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dfb4ff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfb502 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb505 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb508 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12dfb50b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfb50d jne 0x12dfb52a */
  if (!C.zf) goto L_12dfb52a;
  /* 12dfb50f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb512 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb515 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb51a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb51c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb51f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfb522 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb524 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb527 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12dfb52a:;
  /* 12dfb52a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb52d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb530 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfb535 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfb537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb53a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb53d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dfb544 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb546 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb549 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb54c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12dfb553:;
  /* 12dfb553 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb556 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb559 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12dfb55b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb55e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb561 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb564 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12dfb567:;
  /* 12dfb567 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfb56a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb56d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb570 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12dfb572 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfb575 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb578 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb57b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb57e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12dfb581 jmp 0x12dfb842 */
  goto L_12dfb842;
L_12dfb586:;
  /* 12dfb586 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfb589 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb58c jge 0x12dfb842 */
  if ((C.sf==C.of)) goto L_12dfb842;
  /* 12dfb592 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfb595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb598 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb59b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12dfb59d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12dfb5a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb5a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb5a6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb5a9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12dfb5ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb5af add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb5b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12dfb5b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb5b8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb5bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dfb5be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb5c1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12dfb5c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb5c7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dfb5ca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb5ce jbe 0x12dfb5d7 */
  if ((C.cf||C.zf)) goto L_12dfb5d7;
  /* 12dfb5d0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12dfb5d7:;
  /* 12dfb5d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb5da and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfb5dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfb5df jne 0x12dfb720 */
  if (!C.zf) goto L_12dfb720;
  /* 12dfb5e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfb5e8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12dfb5eb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb5ee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12dfb5f1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb5f5 jbe 0x12dfb5fe */
  if ((C.cf||C.zf)) goto L_12dfb5fe;
  /* 12dfb5f7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12dfb5fe:;
  /* 12dfb5fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb601 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb604 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfb607 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb60a jne 0x12dfb6e0 */
  if (!C.zf) goto L_12dfb6e0;
  /* 12dfb610 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb614 jae 0x12dfb675 */
  if (!C.cf) goto L_12dfb675;
  /* 12dfb616 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb61b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb61e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb620 not edx */
  EDX = (~(EDX));
  /* 12dfb622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb625 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb628 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dfb62c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfb62e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb631 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb634 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dfb638 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb63b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb63e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12dfb641 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfb644 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb647 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb64a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12dfb64d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb650 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb653 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dfb657 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfb659 jne 0x12dfb673 */
  if (!C.zf) goto L_12dfb673;
  /* 12dfb65b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb660 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb663 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb665 not edx */
  EDX = (~(EDX));
  /* 12dfb667 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb66a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dfb66c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb66e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb671 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12dfb673:;
  /* 12dfb673 jmp 0x12dfb6e0 */
  goto L_12dfb6e0;
L_12dfb675:;
  /* 12dfb675 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb678 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb67b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfb680 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfb682 not eax */
  EAX = (~(EAX));
  /* 12dfb684 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb687 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb68a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12dfb691 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb696 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb699 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12dfb6a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb6a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb6a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12dfb6a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfb6ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb6af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb6b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12dfb6b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb6b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb6bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfb6bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfb6c1 jne 0x12dfb6e0 */
  if (!C.zf) goto L_12dfb6e0;
  /* 12dfb6c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12dfb6c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb6c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfb6ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfb6d0 not eax */
  EAX = (~(EAX));
  /* 12dfb6d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb6d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfb6d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfb6da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb6dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dfb6e0:;
  /* 12dfb6e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb6e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dfb6e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb6e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfb6ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dfb6ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb6f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dfb6f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12dfb6f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dfb6fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12dfb6fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb701 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb704 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12dfb707 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb70a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12dfb70d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb710 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12dfb713 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb717 jbe 0x12dfb720 */
  if ((C.cf||C.zf)) goto L_12dfb720;
  /* 12dfb719 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12dfb720:;
  /* 12dfb720 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfb723 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfb726 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12dfb729 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dfb72c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb72f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb732 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfb735 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12dfb738 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb73b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb73e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12dfb741 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfb744 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb747 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12dfb74a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb74d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfb750 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb753 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12dfb756 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb759 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb75c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfb75f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb762 jne 0x12dfb82e */
  if (!C.zf) goto L_12dfb82e;
  /* 12dfb768 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb76c jae 0x12dfb7c8 */
  if (!C.cf) goto L_12dfb7c8;
  /* 12dfb76e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb771 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb774 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dfb778 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb77b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb77e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12dfb781 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfb783 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb786 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb789 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12dfb78c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfb78e jne 0x12dfb7a6 */
  if (!C.zf) goto L_12dfb7a6;
  /* 12dfb790 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfb795 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfb798 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfb79a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb79d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dfb79f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfb7a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb7a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12dfb7a6:;
  /* 12dfb7a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb7ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfb7ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb7b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb7b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb7b6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12dfb7ba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfb7bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb7bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb7c2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12dfb7c6 jmp 0x12dfb82e */
  goto L_12dfb82e;
L_12dfb7c8:;
  /* 12dfb7c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb7cb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb7ce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12dfb7d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb7d5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb7d8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12dfb7db add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfb7dd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb7e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb7e3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12dfb7e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfb7e8 jne 0x12dfb805 */
  if (!C.zf) goto L_12dfb805;
  /* 12dfb7ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfb7ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb7f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12dfb7f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12dfb7f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb7fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfb7fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfb7ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfb802 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12dfb805:;
  /* 12dfb805 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfb808 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb80b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb810 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb812 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb815 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb818 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12dfb81f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfb821 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb824 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12dfb827 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12dfb82e:;
  /* 12dfb82e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb831 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb834 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dfb836 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfb839 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb83c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfb83f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12dfb842:;
  /* 12dfb842 mov eax, 1 */
  EAX = (0x1u);
L_12dfb847:;
  /* 12dfb847 mov esp, ebp */
  ESP = (EBP);
  /* 12dfb849 pop ebp */
  EBP = (pop32());
  /* 12dfb84a ret  */
  ESPCHK(0x12dfb260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b850 @ 0x12dfb850 (304 bytes, 79 insns) */
void f_12dfb850(void) {
  FTRACE(0x12dfb850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfb850 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfb851 mov ebp, esp */
  EBP = (ESP);
  /* 12dfb853 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfb854 cmp dword ptr [0x12e20ce0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20ce0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb85b je 0x12dfb97c */
  if (C.zf) goto L_12dfb97c;
  /* 12dfb861 mov eax, dword ptr [0x12e20cd8] */
  EAX = (r32((uint32_t)(0x12e20cd8)));
  /* 12dfb866 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12dfb869 mov ecx, dword ptr [0x12e20ce0] */
  ECX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb86f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12dfb872 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb874 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dfb877 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12dfb87c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dfb881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfb884 push eax */
  push32((uint32_t)(EAX));
  /* 12dfb885 call dword ptr [0x12e23294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23294))), 0x12dfb88bu);
  /* 12dfb88b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfb890 mov ecx, dword ptr [0x12e20cd8] */
  ECX = (r32((uint32_t)(0x12e20cd8)));
  /* 12dfb896 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfb898 mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb89d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfb8a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfb8a2 mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb8a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12dfb8ab mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb8b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfb8b3 mov edx, dword ptr [0x12e20cd8] */
  EDX = (r32((uint32_t)(0x12e20cd8)));
  /* 12dfb8b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12dfb8c4 mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb8c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfb8cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12dfb8cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfb8d2 mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb8d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfb8da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12dfb8dd mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb8e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dfb8e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12dfb8ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfb8ec jne 0x12dfb902 */
  if (!C.zf) goto L_12dfb902;
  /* 12dfb8ee mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb8f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12dfb8f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12dfb8f9 mov ecx, dword ptr [0x12e20ce0] */
  ECX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb8ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12dfb902:;
  /* 12dfb902 mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb908 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb90c jne 0x12dfb972 */
  if (!C.zf) goto L_12dfb972;
  /* 12dfb90e cmp dword ptr [0x12e20ce4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e20ce4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb915 jle 0x12dfb972 */
  if ((C.zf||C.sf!=C.of)) goto L_12dfb972;
  /* 12dfb917 mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb91c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12dfb91f push ecx */
  push32((uint32_t)(ECX));
  /* 12dfb920 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfb922 mov edx, dword ptr [0x12e22044] */
  EDX = (r32((uint32_t)(0x12e22044)));
  /* 12dfb928 push edx */
  push32((uint32_t)(EDX));
  /* 12dfb929 call dword ptr [0x12e23200] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23200))), 0x12dfb92fu);
  /* 12dfb92f mov eax, dword ptr [0x12e20ce4] */
  EAX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfb934 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfb937 mov ecx, dword ptr [0x12e20ce8] */
  ECX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfb93d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb93f mov edx, dword ptr [0x12e20ce0] */
  EDX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb945 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb948 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb94a push ecx */
  push32((uint32_t)(ECX));
  /* 12dfb94b mov eax, dword ptr [0x12e20ce0] */
  EAX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb950 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb953 push eax */
  push32((uint32_t)(EAX));
  /* 12dfb954 mov ecx, dword ptr [0x12e20ce0] */
  ECX = (r32((uint32_t)(0x12e20ce0)));
  /* 12dfb95a push ecx */
  push32((uint32_t)(ECX));
  /* 12dfb95b call 0x12dfe030 */
  push32(0x12dfb960u); f_12dfe030();
  /* 12dfb960 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb963 mov edx, dword ptr [0x12e20ce4] */
  EDX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfb969 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb96c mov dword ptr [0x12e20ce4], edx */
  w32((uint32_t)(0x12e20ce4), (EDX));
L_12dfb972:;
  /* 12dfb972 mov dword ptr [0x12e20ce0], 0 */
  w32((uint32_t)(0x12e20ce0), (0x0u));
L_12dfb97c:;
  /* 12dfb97c mov esp, ebp */
  ESP = (EBP);
  /* 12dfb97e pop ebp */
  EBP = (pop32());
  /* 12dfb97f ret  */
  ESPCHK(0x12dfb850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b980 @ 0x12dfb980 (1565 bytes, 343 insns) */
void f_12dfb980(void) {
  FTRACE(0x12dfb980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfb980 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfb981 mov ebp, esp */
  EBP = (ESP);
  /* 12dfb983 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfb989 mov eax, dword ptr [0x12e20ce4] */
  EAX = (r32((uint32_t)(0x12e20ce4)));
  /* 12dfb98e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfb991 push eax */
  push32((uint32_t)(EAX));
  /* 12dfb992 mov ecx, dword ptr [0x12e20ce8] */
  ECX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfb998 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfb999 call dword ptr [0x12e23268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23268))), 0x12dfb99fu);
  /* 12dfb99f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfb9a1 je 0x12dfb9ab */
  if (C.zf) goto L_12dfb9ab;
  /* 12dfb9a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfb9a6 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfb9ab:;
  /* 12dfb9ab mov edx, dword ptr [0x12e20ce8] */
  EDX = (r32((uint32_t)(0x12e20ce8)));
  /* 12dfb9b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12dfb9b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12dfb9c1 jmp 0x12dfb9d2 */
  goto L_12dfb9d2;
L_12dfb9c3:;
  /* 12dfb9c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12dfb9c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfb9cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12dfb9d2:;
  /* 12dfb9d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12dfb9d8 cmp ecx, dword ptr [0x12e20ce4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e20ce4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfb9de jge 0x12dfbf97 */
  if ((C.sf==C.of)) goto L_12dfbf97;
  /* 12dfb9e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dfb9ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12dfb9ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12dfb9f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12dfb9f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12dfb9fe push ecx */
  push32((uint32_t)(ECX));
  /* 12dfb9ff call dword ptr [0x12e23268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23268))), 0x12dfba05u);
  /* 12dfba05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfba07 je 0x12dfba13 */
  if (C.zf) goto L_12dfba13;
  /* 12dfba09 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12dfba0e jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfba13:;
  /* 12dfba13 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dfba19 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12dfba1c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12dfba22 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12dfba28 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfba2e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12dfba31 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dfba37 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dfba3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfba3d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12dfba47 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12dfba51 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dfba58 jmp 0x12dfba63 */
  goto L_12dfba63;
L_12dfba5a:;
  /* 12dfba5a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfba5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfba60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12dfba63:;
  /* 12dfba63 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfba67 jge 0x12dfbf5b */
  if ((C.sf==C.of)) goto L_12dfbf5b;
  /* 12dfba6d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12dfba77 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12dfba81 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12dfba8b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12dfba95 jmp 0x12dfbaa6 */
  goto L_12dfbaa6;
L_12dfba97:;
  /* 12dfba97 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dfba9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbaa0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12dfbaa6:;
  /* 12dfbaa6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbaad jge 0x12dfbac2 */
  if ((C.sf==C.of)) goto L_12dfbac2;
  /* 12dfbaaf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dfbab5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12dfbac0 jmp 0x12dfba97 */
  goto L_12dfba97;
L_12dfbac2:;
  /* 12dfbac2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbac6 jl 0x12dfbefd */
  if ((C.sf!=C.of)) goto L_12dfbefd;
  /* 12dfbacc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12dfbad1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12dfbad7 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfbad8 call dword ptr [0x12e23268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e23268))), 0x12dfbadeu);
  /* 12dfbade test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfbae0 je 0x12dfbaec */
  if (C.zf) goto L_12dfbaec;
  /* 12dfbae2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12dfbae7 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbaec:;
  /* 12dfbaec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12dfbaf2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12dfbaf5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12dfbaff jmp 0x12dfbb10 */
  goto L_12dfbb10;
L_12dfbb01:;
  /* 12dfbb01 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12dfbb07 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbb0a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12dfbb10:;
  /* 12dfbb10 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbb17 jge 0x12dfbc94 */
  if ((C.sf==C.of)) goto L_12dfbc94;
  /* 12dfbb1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfbb20 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbb23 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12dfbb29 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dfbb2f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbb35 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12dfbb3b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dfbb41 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbb45 jne 0x12dfbb52 */
  if (!C.zf) goto L_12dfbb52;
  /* 12dfbb47 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12dfbb4d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbb50 je 0x12dfbb5c */
  if (C.zf) goto L_12dfbb5c;
L_12dfbb52:;
  /* 12dfbb52 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12dfbb57 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbb5c:;
  /* 12dfbb5c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dfbb62 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12dfbb64 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12dfbb6a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12dfbb70 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12dfbb76 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12dfbb7c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfbb7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfbb81 je 0x12dfbbb9 */
  if (C.zf) goto L_12dfbbb9;
  /* 12dfbb83 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12dfbb89 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfbb8c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12dfbb92 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbb9c jle 0x12dfbba8 */
  if ((C.zf||C.sf!=C.of)) goto L_12dfbba8;
  /* 12dfbb9e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12dfbba3 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbba8:;
  /* 12dfbba8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12dfbbae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbbb1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12dfbbb7 jmp 0x12dfbbfb */
  goto L_12dfbbfb;
L_12dfbbb9:;
  /* 12dfbbb9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12dfbbbf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dfbbc2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfbbc5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12dfbbcb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbbd2 jle 0x12dfbbde */
  if ((C.zf||C.sf!=C.of)) goto L_12dfbbde;
  /* 12dfbbd4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12dfbbde:;
  /* 12dfbbde mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dfbbe4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12dfbbeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbbee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dfbbf4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12dfbbfb:;
  /* 12dfbbfb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbc02 jl 0x12dfbc1d */
  if ((C.sf!=C.of)) goto L_12dfbc1d;
  /* 12dfbc04 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12dfbc0a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfbc0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfbc0f jne 0x12dfbc1d */
  if (!C.zf) goto L_12dfbc1d;
  /* 12dfbc11 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbc1b jle 0x12dfbc27 */
  if ((C.zf||C.sf!=C.of)) goto L_12dfbc27;
L_12dfbc1d:;
  /* 12dfbc1d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12dfbc22 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbc27:;
  /* 12dfbc27 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dfbc2d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbc33 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12dfbc36 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbc3c je 0x12dfbc48 */
  if (C.zf) goto L_12dfbc48;
  /* 12dfbc3e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12dfbc43 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbc48:;
  /* 12dfbc48 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dfbc4e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbc54 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12dfbc5a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dfbc60 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbc66 jb 0x12dfbb5c */
  if (C.cf) goto L_12dfbb5c;
  /* 12dfbc6c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dfbc72 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbc78 je 0x12dfbc84 */
  if (C.zf) goto L_12dfbc84;
  /* 12dfbc7a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12dfbc7f jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbc84:;
  /* 12dfbc84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfbc87 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbc8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12dfbc8f jmp 0x12dfbb01 */
  goto L_12dfbb01;
L_12dfbc94:;
  /* 12dfbc94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfbc97 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dfbc99 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbc9f je 0x12dfbcab */
  if (C.zf) goto L_12dfbcab;
  /* 12dfbca1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12dfbca6 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbcab:;
  /* 12dfbcab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfbcae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12dfbcb4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12dfbcbb jmp 0x12dfbcc6 */
  goto L_12dfbcc6;
L_12dfbcbd:;
  /* 12dfbcbd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfbcc0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbcc3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12dfbcc6:;
  /* 12dfbcc6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbcca jge 0x12dfbefd */
  if ((C.sf==C.of)) goto L_12dfbefd;
  /* 12dfbcd0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12dfbcda mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12dfbce0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12dfbce6:;
  /* 12dfbce6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dfbcec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12dfbcef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12dfbcf5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dfbcfb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbd01 je 0x12dfbe2a */
  if (C.zf) goto L_12dfbe2a;
  /* 12dfbd07 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfbd0a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12dfbd10 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbd17 je 0x12dfbe2a */
  if (C.zf) goto L_12dfbe2a;
  /* 12dfbd1d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dfbd23 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbd29 jb 0x12dfbd3e */
  if (C.cf) goto L_12dfbd3e;
  /* 12dfbd2b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12dfbd31 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbd36 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbd3c jb 0x12dfbd48 */
  if (C.cf) goto L_12dfbd48;
L_12dfbd3e:;
  /* 12dfbd3e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12dfbd43 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbd48:;
  /* 12dfbd48 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dfbd4e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfbd54 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12dfbd5a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12dfbd60 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbd63 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dfbd66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfbd69 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbd6e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12dfbd74:;
  /* 12dfbd74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfbd77 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbd7d je 0x12dfbd9e */
  if (C.zf) goto L_12dfbd9e;
  /* 12dfbd7f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfbd82 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbd88 jne 0x12dfbd8c */
  if (!C.zf) goto L_12dfbd8c;
  /* 12dfbd8a jmp 0x12dfbd9e */
  goto L_12dfbd9e;
L_12dfbd8c:;
  /* 12dfbd8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfbd8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12dfbd91 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfbd94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfbd97 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbd99 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12dfbd9c jmp 0x12dfbd74 */
  goto L_12dfbd74;
L_12dfbd9e:;
  /* 12dfbd9e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12dfbda1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbda7 jne 0x12dfbdb3 */
  if (!C.zf) goto L_12dfbdb3;
  /* 12dfbda9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12dfbdae jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbdb3:;
  /* 12dfbdb3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dfbdb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12dfbdbb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12dfbdbe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfbdc1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12dfbdc7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbdce jle 0x12dfbdda */
  if ((C.zf||C.sf!=C.of)) goto L_12dfbdda;
  /* 12dfbdd0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12dfbdda:;
  /* 12dfbdda mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12dfbde0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbde3 je 0x12dfbdef */
  if (C.zf) goto L_12dfbdef;
  /* 12dfbde5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12dfbdea jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbdef:;
  /* 12dfbdef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dfbdf5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12dfbdf8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbdfe je 0x12dfbe0a */
  if (C.zf) goto L_12dfbe0a;
  /* 12dfbe00 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12dfbe05 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbe0a:;
  /* 12dfbe0a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12dfbe10 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12dfbe16 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12dfbe1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbe1f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12dfbe25 jmp 0x12dfbce6 */
  goto L_12dfbce6;
L_12dfbe2a:;
  /* 12dfbe2a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbe31 je 0x12dfbea1 */
  if (C.zf) goto L_12dfbea1;
  /* 12dfbe33 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbe37 jge 0x12dfbe6b */
  if ((C.sf==C.of)) goto L_12dfbe6b;
  /* 12dfbe39 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfbe3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfbe41 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfbe43 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12dfbe49 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfbe4b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12dfbe51 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfbe56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfbe59 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfbe5b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12dfbe61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfbe63 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12dfbe69 jmp 0x12dfbea1 */
  goto L_12dfbea1;
L_12dfbe6b:;
  /* 12dfbe6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfbe6e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfbe71 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfbe76 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfbe78 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12dfbe7e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfbe80 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12dfbe86 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfbe89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfbe8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12dfbe91 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12dfbe93 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12dfbe99 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfbe9b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12dfbea1:;
  /* 12dfbea1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12dfbea7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12dfbeaa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbeb0 jne 0x12dfbec4 */
  if (!C.zf) goto L_12dfbec4;
  /* 12dfbeb2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12dfbeb5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12dfbebb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbec2 je 0x12dfbece */
  if (C.zf) goto L_12dfbece;
L_12dfbec4:;
  /* 12dfbec4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12dfbec9 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbece:;
  /* 12dfbece mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12dfbed4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12dfbed7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbedd je 0x12dfbee9 */
  if (C.zf) goto L_12dfbee9;
  /* 12dfbedf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12dfbee4 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbee9:;
  /* 12dfbee9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12dfbeef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbef2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12dfbef8 jmp 0x12dfbcbd */
  goto L_12dfbcbd;
L_12dfbefd:;
  /* 12dfbefd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfbf00 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12dfbf06 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12dfbf0c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbf10 jne 0x12dfbf2a */
  if (!C.zf) goto L_12dfbf2a;
  /* 12dfbf12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfbf15 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12dfbf1b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12dfbf21 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbf28 je 0x12dfbf31 */
  if (C.zf) goto L_12dfbf31;
L_12dfbf2a:;
  /* 12dfbf2a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12dfbf2f jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbf31:;
  /* 12dfbf31 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12dfbf37 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbf3d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12dfbf43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12dfbf46 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbf4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12dfbf4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfbf51 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12dfbf53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dfbf56 jmp 0x12dfba5a */
  goto L_12dfba5a;
L_12dfbf5b:;
  /* 12dfbf5b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dfbf61 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12dfbf67 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbf69 jne 0x12dfbf7c */
  if (!C.zf) goto L_12dfbf7c;
  /* 12dfbf6b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dfbf71 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12dfbf77 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbf7a je 0x12dfbf83 */
  if (C.zf) goto L_12dfbf83;
L_12dfbf7c:;
  /* 12dfbf7c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12dfbf81 jmp 0x12dfbf99 */
  goto L_12dfbf99;
L_12dfbf83:;
  /* 12dfbf83 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12dfbf89 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbf8c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12dfbf92 jmp 0x12dfb9c3 */
  goto L_12dfb9c3;
L_12dfbf97:;
  /* 12dfbf97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfbf99:;
  /* 12dfbf99 mov esp, ebp */
  ESP = (EBP);
  /* 12dfbf9b pop ebp */
  EBP = (pop32());
  /* 12dfbf9c ret  */
  ESPCHK(0x12dfb980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa0 @ 0x12dfbfa0 (183 bytes, 58 insns) */
void f_12dfbfa0(void) {
  FTRACE(0x12dfbfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfbfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfbfa1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfbfa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfbfa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfbfa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfbfac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfbfb1 ja 0x12dfbfca */
  if ((!C.cf&&!C.zf)) goto L_12dfbfca;
  /* 12dfbfb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfbfb6 mov edx, dword ptr [0x12e1ede8] */
  EDX = (r32((uint32_t)(0x12e1ede8)));
  /* 12dfbfbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfbfbe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12dfbfc2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12dfbfc5 jmp 0x12dfc053 */
  goto L_12dfc053;
L_12dfbfca:;
  /* 12dfbfca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfbfcd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12dfbfd0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfbfd6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfbfdc mov edx, dword ptr [0x12e1ede8] */
  EDX = (r32((uint32_t)(0x12e1ede8)));
  /* 12dfbfe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfbfe4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12dfbfe8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12dfbfed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfbfef je 0x12dfc013 */
  if (C.zf) goto L_12dfc013;
  /* 12dfbff1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfbff4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12dfbff7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12dfbffd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12dfc000 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12dfc003 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12dfc006 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12dfc00a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12dfc011 jmp 0x12dfc024 */
  goto L_12dfc024;
L_12dfc013:;
  /* 12dfc013 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12dfc016 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12dfc019 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12dfc01d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12dfc024:;
  /* 12dfc024 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfc026 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfc028 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfc02a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12dfc02d push ecx */
  push32((uint32_t)(ECX));
  /* 12dfc02e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfc031 push edx */
  push32((uint32_t)(EDX));
  /* 12dfc032 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12dfc035 push eax */
  push32((uint32_t)(EAX));
  /* 12dfc036 push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfc038 call 0x12dfe370 */
  push32(0x12dfc03du); f_12dfe370();
  /* 12dfc03d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc040 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfc042 jne 0x12dfc048 */
  if (!C.zf) goto L_12dfc048;
  /* 12dfc044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc046 jmp 0x12dfc053 */
  goto L_12dfc053;
L_12dfc048:;
  /* 12dfc048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc04b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc050 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12dfc053:;
  /* 12dfc053 mov esp, ebp */
  ESP = (EBP);
  /* 12dfc055 pop ebp */
  EBP = (pop32());
  /* 12dfc056 ret  */
  ESPCHK(0x12dfbfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c060 @ 0x12dfc060 (836 bytes, 238 insns) */
void f_12dfc060(void) {
  FTRACE(0x12dfc060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfc060 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfc061 mov ebp, esp */
  EBP = (ESP);
  /* 12dfc063 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfc066 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dfc068 call 0x12df9a90 */
  push32(0x12dfc06du); f_12df9a90();
  /* 12dfc06d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc073 push eax */
  push32((uint32_t)(EAX));
  /* 12dfc074 call 0x12dfc3b0 */
  push32(0x12dfc079u); f_12dfc3b0();
  /* 12dfc079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc07c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12dfc07f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc082 cmp ecx, dword ptr [0x12e20a38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e20a38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc088 jne 0x12dfc09b */
  if (!C.zf) goto L_12dfc09b;
  /* 12dfc08a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dfc08c call 0x12df9b30 */
  push32(0x12dfc091u); f_12df9b30();
  /* 12dfc091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc096 jmp 0x12dfc3a0 */
  goto L_12dfc3a0;
L_12dfc09b:;
  /* 12dfc09b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc09f jne 0x12dfc0bc */
  if (!C.zf) goto L_12dfc0bc;
  /* 12dfc0a1 call 0x12dfc490 */
  push32(0x12dfc0a6u); f_12dfc490();
  /* 12dfc0a6 call 0x12dfc510 */
  push32(0x12dfc0abu); f_12dfc510();
  /* 12dfc0ab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dfc0ad call 0x12df9b30 */
  push32(0x12dfc0b2u); f_12df9b30();
  /* 12dfc0b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc0b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc0b7 jmp 0x12dfc3a0 */
  goto L_12dfc3a0;
L_12dfc0bc:;
  /* 12dfc0bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfc0c3 jmp 0x12dfc0ce */
  goto L_12dfc0ce;
L_12dfc0c5:;
  /* 12dfc0c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc0c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc0cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dfc0ce:;
  /* 12dfc0ce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc0d2 jae 0x12dfc21f */
  if (!C.cf) goto L_12dfc21f;
  /* 12dfc0d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc0db imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfc0de mov ecx, dword ptr [eax + 0x12e1f170] */
  ECX = (r32((uint32_t)(EAX + 0x12e1f170)));
  /* 12dfc0e4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc0e7 jne 0x12dfc21a */
  if (!C.zf) goto L_12dfc21a;
  /* 12dfc0ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dfc0f4 jmp 0x12dfc0ff */
  goto L_12dfc0ff;
L_12dfc0f6:;
  /* 12dfc0f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc0f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc0fc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12dfc0ff:;
  /* 12dfc0ff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc106 jae 0x12dfc114 */
  if (!C.cf) goto L_12dfc114;
  /* 12dfc108 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc10b mov byte ptr [eax + 0x12e20bc0], 0 */
  w8((uint32_t)(EAX + 0x12e20bc0), (0x0u));
  /* 12dfc112 jmp 0x12dfc0f6 */
  goto L_12dfc0f6;
L_12dfc114:;
  /* 12dfc114 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dfc11b jmp 0x12dfc126 */
  goto L_12dfc126;
L_12dfc11d:;
  /* 12dfc11d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfc120 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc123 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12dfc126:;
  /* 12dfc126 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc12a jae 0x12dfc1a7 */
  if (!C.cf) goto L_12dfc1a7;
  /* 12dfc12c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc12f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfc132 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfc135 lea ecx, [edx + eax*8 + 0x12e1f180] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12e1f180));
  /* 12dfc13c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dfc13f jmp 0x12dfc14a */
  goto L_12dfc14a;
L_12dfc141:;
  /* 12dfc141 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfc144 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc147 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12dfc14a:;
  /* 12dfc14a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfc14d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfc14f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dfc151 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfc153 je 0x12dfc1a2 */
  if (C.zf) goto L_12dfc1a2;
  /* 12dfc155 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfc158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc15a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dfc15d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfc15f je 0x12dfc1a2 */
  if (C.zf) goto L_12dfc1a2;
  /* 12dfc161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfc164 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc166 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dfc168 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dfc16b jmp 0x12dfc176 */
  goto L_12dfc176;
L_12dfc16d:;
  /* 12dfc16d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc170 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc173 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dfc176:;
  /* 12dfc176 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfc179 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc17b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12dfc17e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc181 ja 0x12dfc1a0 */
  if ((!C.cf&&!C.zf)) goto L_12dfc1a0;
  /* 12dfc183 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfc189 mov dl, byte ptr [eax + 0x12e20bc1] */
  DL = (r8((uint32_t)(EAX + 0x12e20bc1)));
  /* 12dfc18f or dl, byte ptr [ecx + 0x12e1f168] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12e1f168))); DL = (_r); fl_logic(_r,8); }
  /* 12dfc195 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc198 mov byte ptr [eax + 0x12e20bc1], dl */
  w8((uint32_t)(EAX + 0x12e20bc1), (DL));
  /* 12dfc19e jmp 0x12dfc16d */
  goto L_12dfc16d;
L_12dfc1a0:;
  /* 12dfc1a0 jmp 0x12dfc141 */
  goto L_12dfc141;
L_12dfc1a2:;
  /* 12dfc1a2 jmp 0x12dfc11d */
  goto L_12dfc11d;
L_12dfc1a7:;
  /* 12dfc1a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc1aa mov dword ptr [0x12e20a38], ecx */
  w32((uint32_t)(0x12e20a38), (ECX));
  /* 12dfc1b0 mov dword ptr [0x12e20abc], 1 */
  w32((uint32_t)(0x12e20abc), (0x1u));
  /* 12dfc1ba mov edx, dword ptr [0x12e20a38] */
  EDX = (r32((uint32_t)(0x12e20a38)));
  /* 12dfc1c0 push edx */
  push32((uint32_t)(EDX));
  /* 12dfc1c1 call 0x12dfc410 */
  push32(0x12dfc1c6u); f_12dfc410();
  /* 12dfc1c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc1c9 mov dword ptr [0x12e20cc4], eax */
  w32((uint32_t)(0x12e20cc4), (EAX));
  /* 12dfc1ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dfc1d5 jmp 0x12dfc1e0 */
  goto L_12dfc1e0;
L_12dfc1d7:;
  /* 12dfc1d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfc1da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc1dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dfc1e0:;
  /* 12dfc1e0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc1e4 jae 0x12dfc204 */
  if (!C.cf) goto L_12dfc204;
  /* 12dfc1e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc1e9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfc1ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfc1ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfc1f2 mov cx, word ptr [ecx + eax*2 + 0x12e1f174] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12e1f174)));
  /* 12dfc1fa mov word ptr [edx*2 + 0x12e20ab0], cx */
  w16((uint32_t)(EDX*2 + 0x12e20ab0), (CX));
  /* 12dfc202 jmp 0x12dfc1d7 */
  goto L_12dfc1d7;
L_12dfc204:;
  /* 12dfc204 call 0x12dfc510 */
  push32(0x12dfc209u); f_12dfc510();
  /* 12dfc209 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dfc20b call 0x12df9b30 */
  push32(0x12dfc210u); f_12df9b30();
  /* 12dfc210 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc215 jmp 0x12dfc3a0 */
  goto L_12dfc3a0;
L_12dfc21a:;
  /* 12dfc21a jmp 0x12dfc0c5 */
  goto L_12dfc0c5;
L_12dfc21f:;
  /* 12dfc21f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12dfc222 push edx */
  push32((uint32_t)(EDX));
  /* 12dfc223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc226 push eax */
  push32((uint32_t)(EAX));
  /* 12dfc227 call dword ptr [0x12e232c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232c0))), 0x12dfc22du);
  /* 12dfc22d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc230 jne 0x12dfc372 */
  if (!C.zf) goto L_12dfc372;
  /* 12dfc236 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12dfc23d jmp 0x12dfc248 */
  goto L_12dfc248;
L_12dfc23f:;
  /* 12dfc23f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc242 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc245 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12dfc248:;
  /* 12dfc248 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc24f jae 0x12dfc25d */
  if (!C.cf) goto L_12dfc25d;
  /* 12dfc251 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc254 mov byte ptr [edx + 0x12e20bc0], 0 */
  w8((uint32_t)(EDX + 0x12e20bc0), (0x0u));
  /* 12dfc25b jmp 0x12dfc23f */
  goto L_12dfc23f;
L_12dfc25d:;
  /* 12dfc25d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc260 mov dword ptr [0x12e20a38], eax */
  w32((uint32_t)(0x12e20a38), (EAX));
  /* 12dfc265 mov dword ptr [0x12e20cc4], 0 */
  w32((uint32_t)(0x12e20cc4), (0x0u));
  /* 12dfc26f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc273 jbe 0x12dfc32e */
  if ((C.cf||C.zf)) goto L_12dfc32e;
  /* 12dfc279 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12dfc27c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12dfc27f jmp 0x12dfc28a */
  goto L_12dfc28a;
L_12dfc281:;
  /* 12dfc281 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfc284 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc287 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12dfc28a:;
  /* 12dfc28a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfc28d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfc28f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dfc291 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfc293 je 0x12dfc2dc */
  if (C.zf) goto L_12dfc2dc;
  /* 12dfc295 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfc298 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc29a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12dfc29d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12dfc29f je 0x12dfc2dc */
  if (C.zf) goto L_12dfc2dc;
  /* 12dfc2a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfc2a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc2a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dfc2a8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12dfc2ab jmp 0x12dfc2b6 */
  goto L_12dfc2b6;
L_12dfc2ad:;
  /* 12dfc2ad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc2b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc2b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dfc2b6:;
  /* 12dfc2b6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12dfc2b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc2bb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12dfc2be cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc2c1 ja 0x12dfc2da */
  if ((!C.cf&&!C.zf)) goto L_12dfc2da;
  /* 12dfc2c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc2c6 mov cl, byte ptr [eax + 0x12e20bc1] */
  CL = (r8((uint32_t)(EAX + 0x12e20bc1)));
  /* 12dfc2cc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12dfc2cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc2d2 mov byte ptr [edx + 0x12e20bc1], cl */
  w8((uint32_t)(EDX + 0x12e20bc1), (CL));
  /* 12dfc2d8 jmp 0x12dfc2ad */
  goto L_12dfc2ad;
L_12dfc2da:;
  /* 12dfc2da jmp 0x12dfc281 */
  goto L_12dfc281;
L_12dfc2dc:;
  /* 12dfc2dc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12dfc2e3 jmp 0x12dfc2ee */
  goto L_12dfc2ee;
L_12dfc2e5:;
  /* 12dfc2e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc2e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc2eb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12dfc2ee:;
  /* 12dfc2ee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc2f5 jae 0x12dfc30e */
  if (!C.cf) goto L_12dfc30e;
  /* 12dfc2f7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc2fa mov dl, byte ptr [ecx + 0x12e20bc1] */
  DL = (r8((uint32_t)(ECX + 0x12e20bc1)));
  /* 12dfc300 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12dfc303 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12dfc306 mov byte ptr [eax + 0x12e20bc1], dl */
  w8((uint32_t)(EAX + 0x12e20bc1), (DL));
  /* 12dfc30c jmp 0x12dfc2e5 */
  goto L_12dfc2e5;
L_12dfc30e:;
  /* 12dfc30e mov ecx, dword ptr [0x12e20a38] */
  ECX = (r32((uint32_t)(0x12e20a38)));
  /* 12dfc314 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfc315 call 0x12dfc410 */
  push32(0x12dfc31au); f_12dfc410();
  /* 12dfc31a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc31d mov dword ptr [0x12e20cc4], eax */
  w32((uint32_t)(0x12e20cc4), (EAX));
  /* 12dfc322 mov dword ptr [0x12e20abc], 1 */
  w32((uint32_t)(0x12e20abc), (0x1u));
  /* 12dfc32c jmp 0x12dfc338 */
  goto L_12dfc338;
L_12dfc32e:;
  /* 12dfc32e mov dword ptr [0x12e20abc], 0 */
  w32((uint32_t)(0x12e20abc), (0x0u));
L_12dfc338:;
  /* 12dfc338 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dfc33f jmp 0x12dfc34a */
  goto L_12dfc34a;
L_12dfc341:;
  /* 12dfc341 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfc344 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc347 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12dfc34a:;
  /* 12dfc34a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc34e jae 0x12dfc35f */
  if (!C.cf) goto L_12dfc35f;
  /* 12dfc350 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfc353 mov word ptr [eax*2 + 0x12e20ab0], 0 */
  w16((uint32_t)(EAX*2 + 0x12e20ab0), (0x0u));
  /* 12dfc35d jmp 0x12dfc341 */
  goto L_12dfc341;
L_12dfc35f:;
  /* 12dfc35f call 0x12dfc510 */
  push32(0x12dfc364u); f_12dfc510();
  /* 12dfc364 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dfc366 call 0x12df9b30 */
  push32(0x12dfc36bu); f_12df9b30();
  /* 12dfc36b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc36e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc370 jmp 0x12dfc3a0 */
  goto L_12dfc3a0;
L_12dfc372:;
  /* 12dfc372 cmp dword ptr [0x12e20898], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20898))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc379 je 0x12dfc393 */
  if (C.zf) goto L_12dfc393;
  /* 12dfc37b call 0x12dfc490 */
  push32(0x12dfc380u); f_12dfc490();
  /* 12dfc380 call 0x12dfc510 */
  push32(0x12dfc385u); f_12dfc510();
  /* 12dfc385 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dfc387 call 0x12df9b30 */
  push32(0x12dfc38cu); f_12df9b30();
  /* 12dfc38c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc38f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc391 jmp 0x12dfc3a0 */
  goto L_12dfc3a0;
L_12dfc393:;
  /* 12dfc393 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12dfc395 call 0x12df9b30 */
  push32(0x12dfc39au); f_12df9b30();
  /* 12dfc39a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc39d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dfc3a0:;
  /* 12dfc3a0 mov esp, ebp */
  ESP = (EBP);
  /* 12dfc3a2 pop ebp */
  EBP = (pop32());
  /* 12dfc3a3 ret  */
  ESPCHK(0x12dfc060u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12dfc3b0 (89 bytes, 21 insns) */
void f_12dfc3b0(void) {
  FTRACE(0x12dfc3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfc3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfc3b1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfc3b3 mov dword ptr [0x12e20898], 0 */
  w32((uint32_t)(0x12e20898), (0x0u));
  /* 12dfc3bd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc3c1 jne 0x12dfc3d5 */
  if (!C.zf) goto L_12dfc3d5;
  /* 12dfc3c3 mov dword ptr [0x12e20898], 1 */
  w32((uint32_t)(0x12e20898), (0x1u));
  /* 12dfc3cd call dword ptr [0x12e232c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232c8))), 0x12dfc3d3u);
  /* 12dfc3d3 jmp 0x12dfc407 */
  goto L_12dfc407;
L_12dfc3d5:;
  /* 12dfc3d5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc3d9 jne 0x12dfc3ed */
  if (!C.zf) goto L_12dfc3ed;
  /* 12dfc3db mov dword ptr [0x12e20898], 1 */
  w32((uint32_t)(0x12e20898), (0x1u));
  /* 12dfc3e5 call dword ptr [0x12e232c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232c4))), 0x12dfc3ebu);
  /* 12dfc3eb jmp 0x12dfc407 */
  goto L_12dfc407;
L_12dfc3ed:;
  /* 12dfc3ed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc3f1 jne 0x12dfc404 */
  if (!C.zf) goto L_12dfc404;
  /* 12dfc3f3 mov dword ptr [0x12e20898], 1 */
  w32((uint32_t)(0x12e20898), (0x1u));
  /* 12dfc3fd mov eax, dword ptr [0x12e208c0] */
  EAX = (r32((uint32_t)(0x12e208c0)));
  /* 12dfc402 jmp 0x12dfc407 */
  goto L_12dfc407;
L_12dfc404:;
  /* 12dfc404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12dfc407:;
  /* 12dfc407 pop ebp */
  EBP = (pop32());
  /* 12dfc408 ret  */
  ESPCHK(0x12dfc3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c410 @ 0x12dfc410 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12dfc410(void) {
  FTRACE(0x12dfc410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfc410 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfc411 mov ebp, esp */
  EBP = (ESP);
  /* 12dfc413 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfc414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc417 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfc41a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc41d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfc423 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dfc426 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc42a ja 0x12dfc45a */
  if ((!C.cf&&!C.zf)) goto L_12dfc45a;
  /* 12dfc42c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc42f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc431 mov dl, byte ptr [eax + 0x12dfc474] */
  DL = (r8((uint32_t)(EAX + 0x12dfc474)));
  /* 12dfc437 jmp dword ptr [edx*4 + 0x12dfc460] */
  switch (EDX) {
    case 0: goto L_12dfc43e;
    case 1: goto L_12dfc445;
    case 2: goto L_12dfc44c;
    case 3: goto L_12dfc453;
    case 4: goto L_12dfc45a;
    default: x86_unimpl("switch@0x12dfc437 out of table"); return;
  }
L_12dfc43e:;
  /* 12dfc43e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12dfc443 jmp 0x12dfc45c */
  goto L_12dfc45c;
L_12dfc445:;
  /* 12dfc445 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12dfc44a jmp 0x12dfc45c */
  goto L_12dfc45c;
L_12dfc44c:;
  /* 12dfc44c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12dfc451 jmp 0x12dfc45c */
  goto L_12dfc45c;
L_12dfc453:;
  /* 12dfc453 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12dfc458 jmp 0x12dfc45c */
  goto L_12dfc45c;
L_12dfc45a:;
  /* 12dfc45a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfc45c:;
  /* 12dfc45c mov esp, ebp */
  ESP = (EBP);
  /* 12dfc45e pop ebp */
  EBP = (pop32());
  /* 12dfc45f ret  */
  ESPCHK(0x12dfc410u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12dfc490 (116 bytes, 29 insns) */
void f_12dfc490(void) {
  FTRACE(0x12dfc490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfc490 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfc491 mov ebp, esp */
  EBP = (ESP);
  /* 12dfc493 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfc494 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfc49b jmp 0x12dfc4a6 */
  goto L_12dfc4a6;
L_12dfc49d:;
  /* 12dfc49d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc4a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc4a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dfc4a6:;
  /* 12dfc4a6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc4ad jge 0x12dfc4bb */
  if ((C.sf==C.of)) goto L_12dfc4bb;
  /* 12dfc4af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc4b2 mov byte ptr [ecx + 0x12e20bc0], 0 */
  w8((uint32_t)(ECX + 0x12e20bc0), (0x0u));
  /* 12dfc4b9 jmp 0x12dfc49d */
  goto L_12dfc49d;
L_12dfc4bb:;
  /* 12dfc4bb mov dword ptr [0x12e20a38], 0 */
  w32((uint32_t)(0x12e20a38), (0x0u));
  /* 12dfc4c5 mov dword ptr [0x12e20abc], 0 */
  w32((uint32_t)(0x12e20abc), (0x0u));
  /* 12dfc4cf mov dword ptr [0x12e20cc4], 0 */
  w32((uint32_t)(0x12e20cc4), (0x0u));
  /* 12dfc4d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfc4e0 jmp 0x12dfc4eb */
  goto L_12dfc4eb;
L_12dfc4e2:;
  /* 12dfc4e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc4e5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc4e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dfc4eb:;
  /* 12dfc4eb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc4ef jge 0x12dfc500 */
  if ((C.sf==C.of)) goto L_12dfc500;
  /* 12dfc4f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc4f4 mov word ptr [eax*2 + 0x12e20ab0], 0 */
  w16((uint32_t)(EAX*2 + 0x12e20ab0), (0x0u));
  /* 12dfc4fe jmp 0x12dfc4e2 */
  goto L_12dfc4e2;
L_12dfc500:;
  /* 12dfc500 mov esp, ebp */
  ESP = (EBP);
  /* 12dfc502 pop ebp */
  EBP = (pop32());
  /* 12dfc503 ret  */
  ESPCHK(0x12dfc490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x12dfc510 (770 bytes, 175 insns) */
void f_12dfc510(void) {
  FTRACE(0x12dfc510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfc510 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfc511 mov ebp, esp */
  EBP = (ESP);
  /* 12dfc513 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfc519 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12dfc51f push eax */
  push32((uint32_t)(EAX));
  /* 12dfc520 mov ecx, dword ptr [0x12e20a38] */
  ECX = (r32((uint32_t)(0x12e20a38)));
  /* 12dfc526 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfc527 call dword ptr [0x12e232c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232c0))), 0x12dfc52du);
  /* 12dfc52d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc530 jne 0x12dfc749 */
  if (!C.zf) goto L_12dfc749;
  /* 12dfc536 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12dfc540 jmp 0x12dfc551 */
  goto L_12dfc551;
L_12dfc542:;
  /* 12dfc542 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc548 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc54b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12dfc551:;
  /* 12dfc551 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc55b jae 0x12dfc572 */
  if (!C.cf) goto L_12dfc572;
  /* 12dfc55d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc563 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12dfc569 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12dfc570 jmp 0x12dfc542 */
  goto L_12dfc542;
L_12dfc572:;
  /* 12dfc572 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12dfc579 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12dfc57f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12dfc582 jmp 0x12dfc58d */
  goto L_12dfc58d;
L_12dfc584:;
  /* 12dfc584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc587 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc58a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dfc58d:;
  /* 12dfc58d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc590 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc592 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12dfc594 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfc596 je 0x12dfc5d8 */
  if (C.zf) goto L_12dfc5d8;
  /* 12dfc598 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc59b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfc59d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12dfc59f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12dfc5a5 jmp 0x12dfc5b6 */
  goto L_12dfc5b6;
L_12dfc5a7:;
  /* 12dfc5a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc5ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc5b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12dfc5b6:;
  /* 12dfc5b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfc5b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfc5bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12dfc5be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc5c4 ja 0x12dfc5d6 */
  if ((!C.cf&&!C.zf)) goto L_12dfc5d6;
  /* 12dfc5c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc5cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12dfc5d4 jmp 0x12dfc5a7 */
  goto L_12dfc5a7;
L_12dfc5d6:;
  /* 12dfc5d6 jmp 0x12dfc584 */
  goto L_12dfc584;
L_12dfc5d8:;
  /* 12dfc5d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfc5da mov eax, dword ptr [0x12e20cc4] */
  EAX = (r32((uint32_t)(0x12e20cc4)));
  /* 12dfc5df push eax */
  push32((uint32_t)(EAX));
  /* 12dfc5e0 mov ecx, dword ptr [0x12e20a38] */
  ECX = (r32((uint32_t)(0x12e20a38)));
  /* 12dfc5e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfc5e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12dfc5ed push edx */
  push32((uint32_t)(EDX));
  /* 12dfc5ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dfc5f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12dfc5f9 push eax */
  push32((uint32_t)(EAX));
  /* 12dfc5fa push 1 */
  push32((uint32_t)(0x1u));
  /* 12dfc5fc call 0x12dfe370 */
  push32(0x12dfc601u); f_12dfe370();
  /* 12dfc601 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc604 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfc606 mov ecx, dword ptr [0x12e20a38] */
  ECX = (r32((uint32_t)(0x12e20a38)));
  /* 12dfc60c push ecx */
  push32((uint32_t)(ECX));
  /* 12dfc60d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dfc612 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12dfc618 push edx */
  push32((uint32_t)(EDX));
  /* 12dfc619 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dfc61e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12dfc624 push eax */
  push32((uint32_t)(EAX));
  /* 12dfc625 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dfc62a mov ecx, dword ptr [0x12e20cc4] */
  ECX = (r32((uint32_t)(0x12e20cc4)));
  /* 12dfc630 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfc631 call 0x12dfe530 */
  push32(0x12dfc636u); f_12dfe530();
  /* 12dfc636 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc639 push 0 */
  push32((uint32_t)(0x0u));
  /* 12dfc63b mov edx, dword ptr [0x12e20a38] */
  EDX = (r32((uint32_t)(0x12e20a38)));
  /* 12dfc641 push edx */
  push32((uint32_t)(EDX));
  /* 12dfc642 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dfc647 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12dfc64d push eax */
  push32((uint32_t)(EAX));
  /* 12dfc64e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12dfc653 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12dfc659 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfc65a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12dfc65f mov edx, dword ptr [0x12e20cc4] */
  EDX = (r32((uint32_t)(0x12e20cc4)));
  /* 12dfc665 push edx */
  push32((uint32_t)(EDX));
  /* 12dfc666 call 0x12dfe530 */
  push32(0x12dfc66bu); f_12dfe530();
  /* 12dfc66b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc66e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12dfc678 jmp 0x12dfc689 */
  goto L_12dfc689;
L_12dfc67a:;
  /* 12dfc67a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc680 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc683 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12dfc689:;
  /* 12dfc689 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc693 jae 0x12dfc744 */
  if (!C.cf) goto L_12dfc744;
  /* 12dfc699 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc69f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc6a1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12dfc6a9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc6ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfc6ae je 0x12dfc6e6 */
  if (C.zf) goto L_12dfc6e6;
  /* 12dfc6b0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc6b6 mov cl, byte ptr [eax + 0x12e20bc1] */
  CL = (r8((uint32_t)(EAX + 0x12e20bc1)));
  /* 12dfc6bc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12dfc6bf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc6c5 mov byte ptr [edx + 0x12e20bc1], cl */
  w8((uint32_t)(EDX + 0x12e20bc1), (CL));
  /* 12dfc6cb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc6d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc6d7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12dfc6de mov byte ptr [eax + 0x12e20ac0], dl */
  w8((uint32_t)(EAX + 0x12e20ac0), (DL));
  /* 12dfc6e4 jmp 0x12dfc73f */
  goto L_12dfc73f;
L_12dfc6e6:;
  /* 12dfc6e6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc6ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12dfc6ee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12dfc6f6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12dfc6f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12dfc6fb je 0x12dfc732 */
  if (C.zf) goto L_12dfc732;
  /* 12dfc6fd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc703 mov al, byte ptr [edx + 0x12e20bc1] */
  AL = (r8((uint32_t)(EDX + 0x12e20bc1)));
  /* 12dfc709 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12dfc70b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc711 mov byte ptr [ecx + 0x12e20bc1], al */
  w8((uint32_t)(ECX + 0x12e20bc1), (AL));
  /* 12dfc717 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc71d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc723 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12dfc72a mov byte ptr [edx + 0x12e20ac0], cl */
  w8((uint32_t)(EDX + 0x12e20ac0), (CL));
  /* 12dfc730 jmp 0x12dfc73f */
  goto L_12dfc73f;
L_12dfc732:;
  /* 12dfc732 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc738 mov byte ptr [edx + 0x12e20ac0], 0 */
  w8((uint32_t)(EDX + 0x12e20ac0), (0x0u));
L_12dfc73f:;
  /* 12dfc73f jmp 0x12dfc67a */
  goto L_12dfc67a;
L_12dfc744:;
  /* 12dfc744 jmp 0x12dfc80e */
  goto L_12dfc80e;
L_12dfc749:;
  /* 12dfc749 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12dfc753 jmp 0x12dfc764 */
  goto L_12dfc764;
L_12dfc755:;
  /* 12dfc755 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc75b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc75e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12dfc764:;
  /* 12dfc764 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc76e jae 0x12dfc80e */
  if (!C.cf) goto L_12dfc80e;
  /* 12dfc774 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc77b jb 0x12dfc7b8 */
  if (C.cf) goto L_12dfc7b8;
  /* 12dfc77d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc784 ja 0x12dfc7b8 */
  if ((!C.cf&&!C.zf)) goto L_12dfc7b8;
  /* 12dfc786 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc78c mov dl, byte ptr [ecx + 0x12e20bc1] */
  DL = (r8((uint32_t)(ECX + 0x12e20bc1)));
  /* 12dfc792 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12dfc795 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc79b mov byte ptr [eax + 0x12e20bc1], dl */
  w8((uint32_t)(EAX + 0x12e20bc1), (DL));
  /* 12dfc7a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc7a7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc7aa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc7b0 mov byte ptr [edx + 0x12e20ac0], cl */
  w8((uint32_t)(EDX + 0x12e20ac0), (CL));
  /* 12dfc7b6 jmp 0x12dfc809 */
  goto L_12dfc809;
L_12dfc7b8:;
  /* 12dfc7b8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc7bf jb 0x12dfc7fc */
  if (C.cf) goto L_12dfc7fc;
  /* 12dfc7c1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc7c8 ja 0x12dfc7fc */
  if ((!C.cf&&!C.zf)) goto L_12dfc7fc;
  /* 12dfc7ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc7d0 mov cl, byte ptr [eax + 0x12e20bc1] */
  CL = (r8((uint32_t)(EAX + 0x12e20bc1)));
  /* 12dfc7d6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12dfc7d9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc7df mov byte ptr [edx + 0x12e20bc1], cl */
  w8((uint32_t)(EDX + 0x12e20bc1), (CL));
  /* 12dfc7e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc7eb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfc7ee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc7f4 mov byte ptr [ecx + 0x12e20ac0], al */
  w8((uint32_t)(ECX + 0x12e20ac0), (AL));
  /* 12dfc7fa jmp 0x12dfc809 */
  goto L_12dfc809;
L_12dfc7fc:;
  /* 12dfc7fc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12dfc802 mov byte ptr [edx + 0x12e20ac0], 0 */
  w8((uint32_t)(EDX + 0x12e20ac0), (0x0u));
L_12dfc809:;
  /* 12dfc809 jmp 0x12dfc755 */
  goto L_12dfc755;
L_12dfc80e:;
  /* 12dfc80e mov esp, ebp */
  ESP = (EBP);
  /* 12dfc810 pop ebp */
  EBP = (pop32());
  /* 12dfc811 ret  */
  ESPCHK(0x12dfc510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x12dfc820 (23 bytes, 9 insns) */
void f_12dfc820(void) {
  FTRACE(0x12dfc820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfc820 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfc821 mov ebp, esp */
  EBP = (ESP);
  /* 12dfc823 cmp dword ptr [0x12e20abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e20abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc82a je 0x12dfc833 */
  if (C.zf) goto L_12dfc833;
  /* 12dfc82c mov eax, dword ptr [0x12e20a38] */
  EAX = (r32((uint32_t)(0x12e20a38)));
  /* 12dfc831 jmp 0x12dfc835 */
  goto L_12dfc835;
L_12dfc833:;
  /* 12dfc833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12dfc835:;
  /* 12dfc835 pop ebp */
  EBP = (pop32());
  /* 12dfc836 ret  */
  ESPCHK(0x12dfc820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c840 @ 0x12dfc840 (34 bytes, 10 insns) */
void f_12dfc840(void) {
  FTRACE(0x12dfc840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfc840 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfc841 mov ebp, esp */
  EBP = (ESP);
  /* 12dfc843 cmp dword ptr [0x12e221b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e221b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc84a jne 0x12dfc860 */
  if (!C.zf) goto L_12dfc860;
  /* 12dfc84c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12dfc84e call 0x12dfc060 */
  push32(0x12dfc853u); f_12dfc060();
  /* 12dfc853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc856 mov dword ptr [0x12e221b0], 1 */
  w32((uint32_t)(0x12e221b0), (0x1u));
L_12dfc860:;
  /* 12dfc860 pop ebp */
  EBP = (pop32());
  /* 12dfc861 ret  */
  ESPCHK(0x12dfc840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x12dfc870 (664 bytes, 265 insns) [15 switch table(s)] */
void f_12dfc870(void) {
  FTRACE(0x12dfc870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfc870 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfc871 mov ebp, esp */
  EBP = (ESP);
  /* 12dfc873 push edi */
  push32((uint32_t)(EDI));
  /* 12dfc874 push esi */
  push32((uint32_t)(ESI));
  /* 12dfc875 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfc878 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12dfc87b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc87e mov eax, ecx */
  EAX = (ECX);
  /* 12dfc880 mov edx, ecx */
  EDX = (ECX);
  /* 12dfc882 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc884 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc886 jbe 0x12dfc890 */
  if ((C.cf||C.zf)) goto L_12dfc890;
  /* 12dfc888 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc88a jb 0x12dfca08 */
  if (C.cf) goto L_12dfca08;
L_12dfc890:;
  /* 12dfc890 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dfc896 jne 0x12dfc8ac */
  if (!C.zf) goto L_12dfc8ac;
  /* 12dfc898 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfc89b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc89e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc8a1 jb 0x12dfc8cc */
  if (C.cf) goto L_12dfc8cc;
  /* 12dfc8a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfc8a5 jmp dword ptr [edx*4 + 0x12dfc9b8] */
  switch (EDX) {
    case 0: goto L_12dfc9c8;
    case 1: goto L_12dfc9d0;
    case 2: goto L_12dfc9dc;
    case 3: goto L_12dfc9f0;
    default: x86_unimpl("switch@0x12dfc8a5 out of table"); return;
  }
L_12dfc8ac:;
  /* 12dfc8ac mov eax, edi */
  EAX = (EDI);
  /* 12dfc8ae mov edx, 3 */
  EDX = (0x3u);
  /* 12dfc8b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfc8b6 jb 0x12dfc8c4 */
  if (C.cf) goto L_12dfc8c4;
  /* 12dfc8b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12dfc8bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc8bd jmp dword ptr [eax*4 + 0x12dfc8d0] */
  switch (EAX) {
    case 1: goto L_12dfc8e0;
    case 2: goto L_12dfc90c;
    case 3: goto L_12dfc930;
    default: x86_unimpl("switch@0x12dfc8bd out of table"); return;
  }
L_12dfc8c4:;
  /* 12dfc8c4 jmp dword ptr [ecx*4 + 0x12dfc9c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12dfc9c8)))); return;
  /* 12dfc8cb nop  */
  /* nop */
L_12dfc8cc:;
  /* 12dfc8cc jmp dword ptr [ecx*4 + 0x12dfc94c] */
  switch (ECX) {
    case 0: goto L_12dfc9af;
    case 1: goto L_12dfc99c;
    case 2: goto L_12dfc994;
    case 3: goto L_12dfc98c;
    case 4: goto L_12dfc984;
    case 5: goto L_12dfc97c;
    case 6: goto L_12dfc974;
    case 7: goto L_12dfc96c;
    default: x86_unimpl("switch@0x12dfc8cc out of table"); return;
  }
  /* 12dfc8d3 nop  */
  /* nop */
L_12dfc8e0:;
  /* 12dfc8e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc8e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfc8e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfc8e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfc8e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfc8ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfc8ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfc8f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfc8f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc8f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc8fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc8fe jb 0x12dfc8cc */
  if (C.cf) goto L_12dfc8cc;
  /* 12dfc900 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfc902 jmp dword ptr [edx*4 + 0x12dfc9b8] */
  switch (EDX) {
    case 0: goto L_12dfc9c8;
    case 1: goto L_12dfc9d0;
    case 2: goto L_12dfc9dc;
    case 3: goto L_12dfc9f0;
    default: x86_unimpl("switch@0x12dfc902 out of table"); return;
  }
  /* 12dfc909 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfc90c:;
  /* 12dfc90c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc90e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfc910 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfc912 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfc915 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfc918 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfc91b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc91e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc921 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc924 jb 0x12dfc8cc */
  if (C.cf) goto L_12dfc8cc;
  /* 12dfc926 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfc928 jmp dword ptr [edx*4 + 0x12dfc9b8] */
  switch (EDX) {
    case 0: goto L_12dfc9c8;
    case 1: goto L_12dfc9d0;
    case 2: goto L_12dfc9dc;
    case 3: goto L_12dfc9f0;
    default: x86_unimpl("switch@0x12dfc928 out of table"); return;
  }
  /* 12dfc92f nop  */
  /* nop */
L_12dfc930:;
  /* 12dfc930 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfc932 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfc934 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfc936 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12dfc937 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfc93a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12dfc93b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfc93e jb 0x12dfc8cc */
  if (C.cf) goto L_12dfc8cc;
  /* 12dfc940 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfc942 jmp dword ptr [edx*4 + 0x12dfc9b8] */
  switch (EDX) {
    case 0: goto L_12dfc9c8;
    case 1: goto L_12dfc9d0;
    case 2: goto L_12dfc9dc;
    case 3: goto L_12dfc9f0;
    default: x86_unimpl("switch@0x12dfc942 out of table"); return;
  }
  /* 12dfc949 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfc96c:;
  /* 12dfc96c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12dfc970 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12dfc974:;
  /* 12dfc974 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12dfc978 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12dfc97c:;
  /* 12dfc97c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12dfc980 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12dfc984:;
  /* 12dfc984 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12dfc988 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12dfc98c:;
  /* 12dfc98c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12dfc990 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12dfc994:;
  /* 12dfc994 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12dfc998 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12dfc99c:;
  /* 12dfc99c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12dfc9a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12dfc9a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12dfc9ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfc9ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12dfc9af:;
  /* 12dfc9af jmp dword ptr [edx*4 + 0x12dfc9b8] */
  switch (EDX) {
    case 0: goto L_12dfc9c8;
    case 1: goto L_12dfc9d0;
    case 2: goto L_12dfc9dc;
    case 3: goto L_12dfc9f0;
    default: x86_unimpl("switch@0x12dfc9af out of table"); return;
  }
  /* 12dfc9b6 mov edi, edi */
  EDI = (EDI);
L_12dfc9c8:;
  /* 12dfc9c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc9cb pop esi */
  ESI = (pop32());
  /* 12dfc9cc pop edi */
  EDI = (pop32());
  /* 12dfc9cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfc9ce ret  */
  ESPCHK(0x12dfc870u, _esp0);
  ESP += 4; return;
  /* 12dfc9cf nop  */
  /* nop */
L_12dfc9d0:;
  /* 12dfc9d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfc9d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfc9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc9d7 pop esi */
  ESI = (pop32());
  /* 12dfc9d8 pop edi */
  EDI = (pop32());
  /* 12dfc9d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfc9da ret  */
  ESPCHK(0x12dfc870u, _esp0);
  ESP += 4; return;
  /* 12dfc9db nop  */
  /* nop */
L_12dfc9dc:;
  /* 12dfc9dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfc9de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfc9e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfc9e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfc9e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfc9e9 pop esi */
  ESI = (pop32());
  /* 12dfc9ea pop edi */
  EDI = (pop32());
  /* 12dfc9eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfc9ec ret  */
  ESPCHK(0x12dfc870u, _esp0);
  ESP += 4; return;
  /* 12dfc9ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfc9f0:;
  /* 12dfc9f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12dfc9f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12dfc9f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfc9f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfc9fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfc9fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfca00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfca03 pop esi */
  ESI = (pop32());
  /* 12dfca04 pop edi */
  EDI = (pop32());
  /* 12dfca05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfca06 ret  */
  ESPCHK(0x12dfc870u, _esp0);
  ESP += 4; return;
  /* 12dfca07 nop  */
  /* nop */
L_12dfca08:;
  /* 12dfca08 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12dfca0c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12dfca10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12dfca16 jne 0x12dfca3c */
  if (!C.zf) goto L_12dfca3c;
  /* 12dfca18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfca1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfca1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfca21 jb 0x12dfca30 */
  if (C.cf) goto L_12dfca30;
  /* 12dfca23 std  */
  C.df=1;
  /* 12dfca24 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfca26 cld  */
  C.df=0;
  /* 12dfca27 jmp dword ptr [edx*4 + 0x12dfcb50] */
  switch (EDX) {
    case 0: goto L_12dfcb60;
    case 1: goto L_12dfcb68;
    case 2: goto L_12dfcb78;
    case 3: goto L_12dfcb8c;
    default: x86_unimpl("switch@0x12dfca27 out of table"); return;
  }
  /* 12dfca2e mov edi, edi */
  EDI = (EDI);
L_12dfca30:;
  /* 12dfca30 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12dfca32 jmp dword ptr [ecx*4 + 0x12dfcb00] */
  switch (ECX) {
    case 0: goto L_12dfcb47;
    default: x86_unimpl("switch@0x12dfca32 out of table"); return;
  }
  /* 12dfca39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfca3c:;
  /* 12dfca3c mov eax, edi */
  EAX = (EDI);
  /* 12dfca3e mov edx, 3 */
  EDX = (0x3u);
  /* 12dfca43 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfca46 jb 0x12dfca54 */
  if (C.cf) goto L_12dfca54;
  /* 12dfca48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12dfca4b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfca4d jmp dword ptr [eax*4 + 0x12dfca58] */
  switch (EAX) {
    case 1: goto L_12dfca68;
    case 2: goto L_12dfca88;
    case 3: goto L_12dfcab0;
    default: x86_unimpl("switch@0x12dfca4d out of table"); return;
  }
L_12dfca54:;
  /* 12dfca54 jmp dword ptr [ecx*4 + 0x12dfcb50] */
  switch (ECX) {
    case 0: goto L_12dfcb60;
    case 1: goto L_12dfcb68;
    case 2: goto L_12dfcb78;
    case 3: goto L_12dfcb8c;
    default: x86_unimpl("switch@0x12dfca54 out of table"); return;
  }
  /* 12dfca5b nop  */
  /* nop */
L_12dfca68:;
  /* 12dfca68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfca6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfca6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfca70 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12dfca71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfca74 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12dfca75 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfca78 jb 0x12dfca30 */
  if (C.cf) goto L_12dfca30;
  /* 12dfca7a std  */
  C.df=1;
  /* 12dfca7b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfca7d cld  */
  C.df=0;
  /* 12dfca7e jmp dword ptr [edx*4 + 0x12dfcb50] */
  switch (EDX) {
    case 0: goto L_12dfcb60;
    case 1: goto L_12dfcb68;
    case 2: goto L_12dfcb78;
    case 3: goto L_12dfcb8c;
    default: x86_unimpl("switch@0x12dfca7e out of table"); return;
  }
  /* 12dfca85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfca88:;
  /* 12dfca88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfca8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfca8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfca90 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfca93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfca96 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfca99 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfca9c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfca9f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcaa2 jb 0x12dfca30 */
  if (C.cf) goto L_12dfca30;
  /* 12dfcaa4 std  */
  C.df=1;
  /* 12dfcaa5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfcaa7 cld  */
  C.df=0;
  /* 12dfcaa8 jmp dword ptr [edx*4 + 0x12dfcb50] */
  switch (EDX) {
    case 0: goto L_12dfcb60;
    case 1: goto L_12dfcb68;
    case 2: goto L_12dfcb78;
    case 3: goto L_12dfcb8c;
    default: x86_unimpl("switch@0x12dfcaa8 out of table"); return;
  }
  /* 12dfcaaf nop  */
  /* nop */
L_12dfcab0:;
  /* 12dfcab0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfcab3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12dfcab5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfcab8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfcabb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfcabe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfcac1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12dfcac4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfcac7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfcaca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfcacd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcad0 jb 0x12dfca30 */
  if (C.cf) goto L_12dfca30;
  /* 12dfcad6 std  */
  C.df=1;
  /* 12dfcad7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12dfcad9 cld  */
  C.df=0;
  /* 12dfcada jmp dword ptr [edx*4 + 0x12dfcb50] */
  switch (EDX) {
    case 0: goto L_12dfcb60;
    case 1: goto L_12dfcb68;
    case 2: goto L_12dfcb78;
    case 3: goto L_12dfcb8c;
    default: x86_unimpl("switch@0x12dfcada out of table"); return;
  }
  /* 12dfcae1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12dfcae4 add al, 0xcb */
  { uint32_t _a=(AL),_b=(0xcbu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfcae6 fist word ptr [edx] */
  w16((uint32_t)(EDX), (uint16_t)fpu_to_i16(FPU_ST(0)));
  /* 12dfcae8 or al, 0xcb */
  { uint32_t _r=(AL)|(0xcbu); AL = (_r); fl_logic(_r,8); }
  /* 12dfcaea fist word ptr [edx] */
  w16((uint32_t)(EDX), (uint16_t)fpu_to_i16(FPU_ST(0)));
  /* 12dfcaec adc al, 0xcb */
  { uint32_t _a=(AL),_b=(0xcbu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12dfcaee fist word ptr [edx] */
  w16((uint32_t)(EDX), (uint16_t)fpu_to_i16(FPU_ST(0)));
  /* 12dfcaf0 sbb al, 0xcb */
  { uint32_t _a=(AL),_b=(0xcbu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfcaf2 fist word ptr [edx] */
  w16((uint32_t)(EDX), (uint16_t)fpu_to_i16(FPU_ST(0)));
  /* 12dfcaf4 and al, 0xcb */
  { uint32_t _r=(AL)&(0xcbu); AL = (_r); fl_logic(_r,8); }
  /* 12dfcaf6 fist word ptr [edx] */
  w16((uint32_t)(EDX), (uint16_t)fpu_to_i16(FPU_ST(0)));
  /* 12dfcaf8 sub al, 0xcb */
  { uint32_t _a=(AL),_b=(0xcbu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12dfcafa fist word ptr [edx] */
  w16((uint32_t)(EDX), (uint16_t)fpu_to_i16(FPU_ST(0)));
  /* 12dfcafc xor al, 0xcb */
  { uint32_t _r=(AL)^(0xcbu); AL = (_r); fl_logic(_r,8); }
  /* 12dfcafe fist word ptr [edx] */
  w16((uint32_t)(EDX), (uint16_t)fpu_to_i16(FPU_ST(0)));
  /* 12dfcb04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12dfcb08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12dfcb0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12dfcb10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12dfcb14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12dfcb18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12dfcb1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12dfcb20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12dfcb24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12dfcb28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12dfcb2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12dfcb30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12dfcb34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12dfcb38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12dfcb3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12dfcb43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcb45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12dfcb47:;
  /* 12dfcb47 jmp dword ptr [edx*4 + 0x12dfcb50] */
  switch (EDX) {
    case 0: goto L_12dfcb60;
    case 1: goto L_12dfcb68;
    case 2: goto L_12dfcb78;
    case 3: goto L_12dfcb8c;
    default: x86_unimpl("switch@0x12dfcb47 out of table"); return;
  }
  /* 12dfcb4e mov edi, edi */
  EDI = (EDI);
L_12dfcb60:;
  /* 12dfcb60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcb63 pop esi */
  ESI = (pop32());
  /* 12dfcb64 pop edi */
  EDI = (pop32());
  /* 12dfcb65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfcb66 ret  */
  ESPCHK(0x12dfc870u, _esp0);
  ESP += 4; return;
  /* 12dfcb67 nop  */
  /* nop */
L_12dfcb68:;
  /* 12dfcb68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfcb6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfcb6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcb71 pop esi */
  ESI = (pop32());
  /* 12dfcb72 pop edi */
  EDI = (pop32());
  /* 12dfcb73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfcb74 ret  */
  ESPCHK(0x12dfc870u, _esp0);
  ESP += 4; return;
  /* 12dfcb75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12dfcb78:;
  /* 12dfcb78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfcb7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfcb7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfcb81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfcb84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcb87 pop esi */
  ESI = (pop32());
  /* 12dfcb88 pop edi */
  EDI = (pop32());
  /* 12dfcb89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfcb8a ret  */
  ESPCHK(0x12dfc870u, _esp0);
  ESP += 4; return;
  /* 12dfcb8b nop  */
  /* nop */
L_12dfcb8c:;
  /* 12dfcb8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12dfcb8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12dfcb92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12dfcb95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12dfcb98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12dfcb9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12dfcb9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcba1 pop esi */
  ESI = (pop32());
  /* 12dfcba2 pop edi */
  EDI = (pop32());
  /* 12dfcba3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12dfcba4 ret  */
  ESPCHK(0x12dfc870u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12dfcbb0 (145 bytes, 42 insns) */
void f_12dfcbb0(void) {
  FTRACE(0x12dfcbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfcbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfcbb1 mov ebp, esp */
  EBP = (ESP);
  /* 12dfcbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfcbb4 call 0x12dfcc60 */
  push32(0x12dfcbb9u); f_12dfcc60();
  /* 12dfcbb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcbbc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dfcbbe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12dfcbc5 jmp 0x12dfcbd0 */
  goto L_12dfcbd0;
L_12dfcbc7:;
  /* 12dfcbc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcbca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcbcd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12dfcbd0:;
  /* 12dfcbd0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcbd4 jae 0x12dfcbfa */
  if (!C.cf) goto L_12dfcbfa;
  /* 12dfcbd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcbd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcbdc cmp ecx, dword ptr [eax*8 + 0x12e1f260] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12e1f260))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcbe3 jne 0x12dfcbf8 */
  if (!C.zf) goto L_12dfcbf8;
  /* 12dfcbe5 call 0x12dfcc50 */
  push32(0x12dfcbeau); f_12dfcc50();
  /* 12dfcbea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcbed mov ecx, dword ptr [edx*8 + 0x12e1f264] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12e1f264)));
  /* 12dfcbf4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12dfcbf6 jmp 0x12dfcc3d */
  goto L_12dfcc3d;
L_12dfcbf8:;
  /* 12dfcbf8 jmp 0x12dfcbc7 */
  goto L_12dfcbc7;
L_12dfcbfa:;
  /* 12dfcbfa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcbfe jb 0x12dfcc13 */
  if (C.cf) goto L_12dfcc13;
  /* 12dfcc00 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcc04 ja 0x12dfcc13 */
  if ((!C.cf&&!C.zf)) goto L_12dfcc13;
  /* 12dfcc06 call 0x12dfcc50 */
  push32(0x12dfcc0bu); f_12dfcc50();
  /* 12dfcc0b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12dfcc11 jmp 0x12dfcc3d */
  goto L_12dfcc3d;
L_12dfcc13:;
  /* 12dfcc13 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcc1a jb 0x12dfcc32 */
  if (C.cf) goto L_12dfcc32;
  /* 12dfcc1c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcc23 ja 0x12dfcc32 */
  if ((!C.cf&&!C.zf)) goto L_12dfcc32;
  /* 12dfcc25 call 0x12dfcc50 */
  push32(0x12dfcc2au); f_12dfcc50();
  /* 12dfcc2a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12dfcc30 jmp 0x12dfcc3d */
  goto L_12dfcc3d;
L_12dfcc32:;
  /* 12dfcc32 call 0x12dfcc50 */
  push32(0x12dfcc37u); f_12dfcc50();
  /* 12dfcc37 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12dfcc3d:;
  /* 12dfcc3d mov esp, ebp */
  ESP = (EBP);
  /* 12dfcc3f pop ebp */
  EBP = (pop32());
  /* 12dfcc40 ret  */
  ESPCHK(0x12dfcbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc50 @ 0x12dfcc50 (13 bytes, 6 insns) */
void f_12dfcc50(void) {
  FTRACE(0x12dfcc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfcc50 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfcc51 mov ebp, esp */
  EBP = (ESP);
  /* 12dfcc53 call 0x12df5120 */
  push32(0x12dfcc58u); f_12df5120();
  /* 12dfcc58 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcc5b pop ebp */
  EBP = (pop32());
  /* 12dfcc5c ret  */
  ESPCHK(0x12dfcc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc60 @ 0x12dfcc60 (13 bytes, 6 insns) */
void f_12dfcc60(void) {
  FTRACE(0x12dfcc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfcc60 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfcc61 mov ebp, esp */
  EBP = (ESP);
  /* 12dfcc63 call 0x12df5120 */
  push32(0x12dfcc68u); f_12df5120();
  /* 12dfcc68 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcc6b pop ebp */
  EBP = (pop32());
  /* 12dfcc6c ret  */
  ESPCHK(0x12dfcc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc70 @ 0x12dfcc70 (482 bytes, 138 insns) */
void f_12dfcc70(void) {
  FTRACE(0x12dfcc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfcc70 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfcc71 mov ebp, esp */
  EBP = (ESP);
  /* 12dfcc73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfcc76 push esi */
  push32((uint32_t)(ESI));
  /* 12dfcc77 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12dfcc7e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12dfcc80 call 0x12df9a90 */
  push32(0x12dfcc85u); f_12df9a90();
  /* 12dfcc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcc88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12dfcc8f jmp 0x12dfcc9a */
  goto L_12dfcc9a;
L_12dfcc91:;
  /* 12dfcc91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfcc94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcc97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12dfcc9a:;
  /* 12dfcc9a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcc9e jge 0x12dfce40 */
  if ((C.sf==C.of)) goto L_12dfce40;
  /* 12dfcca4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfcca7 cmp dword ptr [ecx*4 + 0x12e22060], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12e22060))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfccaf je 0x12dfcda6 */
  if (C.zf) goto L_12dfcda6;
  /* 12dfccb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfccb8 mov eax, dword ptr [edx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e22060)));
  /* 12dfccbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfccc2 jmp 0x12dfcccd */
  goto L_12dfcccd;
L_12dfccc4:;
  /* 12dfccc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfccc7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfccca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12dfcccd:;
  /* 12dfcccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfccd0 mov eax, dword ptr [edx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e22060)));
  /* 12dfccd7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfccdc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfccdf jae 0x12dfcd96 */
  if (!C.cf) goto L_12dfcd96;
  /* 12dfcce5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcce8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfccec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfccef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfccf1 jne 0x12dfcd91 */
  if (!C.zf) goto L_12dfcd91;
  /* 12dfccf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfccfa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfccfe jne 0x12dfcd39 */
  if (!C.zf) goto L_12dfcd39;
  /* 12dfcd00 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dfcd02 call 0x12df9a90 */
  push32(0x12dfcd07u); f_12df9a90();
  /* 12dfcd07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcd0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcd0d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcd11 jne 0x12dfcd2f */
  if (!C.zf) goto L_12dfcd2f;
  /* 12dfcd13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcd16 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcd19 push edx */
  push32((uint32_t)(EDX));
  /* 12dfcd1a call dword ptr [0x12e232a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a8))), 0x12dfcd20u);
  /* 12dfcd20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcd23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12dfcd26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcd29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcd2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12dfcd2f:;
  /* 12dfcd2f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12dfcd31 call 0x12df9b30 */
  push32(0x12dfcd36u); f_12df9b30();
  /* 12dfcd36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfcd39:;
  /* 12dfcd39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcd3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcd3f push eax */
  push32((uint32_t)(EAX));
  /* 12dfcd40 call dword ptr [0x12e232a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a0))), 0x12dfcd46u);
  /* 12dfcd46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcd49 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12dfcd4d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12dfcd50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12dfcd52 je 0x12dfcd66 */
  if (C.zf) goto L_12dfcd66;
  /* 12dfcd54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcd57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcd5a push eax */
  push32((uint32_t)(EAX));
  /* 12dfcd5b call dword ptr [0x12e232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232a4))), 0x12dfcd61u);
  /* 12dfcd61 jmp 0x12dfccc4 */
  goto L_12dfccc4;
L_12dfcd66:;
  /* 12dfcd66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcd69 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12dfcd6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfcd72 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dfcd75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfcd78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcd7b sub eax, dword ptr [edx*4 + 0x12e22060] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12e22060))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12dfcd82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12dfcd83 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12dfcd88 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12dfcd8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcd8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dfcd8f jmp 0x12dfcd96 */
  goto L_12dfcd96;
L_12dfcd91:;
  /* 12dfcd91 jmp 0x12dfccc4 */
  goto L_12dfccc4;
L_12dfcd96:;
  /* 12dfcd96 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcd9a je 0x12dfcda1 */
  if (C.zf) goto L_12dfcda1;
  /* 12dfcd9c jmp 0x12dfce40 */
  goto L_12dfce40;
L_12dfcda1:;
  /* 12dfcda1 jmp 0x12dfce3b */
  goto L_12dfce3b;
L_12dfcda6:;
  /* 12dfcda6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12dfcda8 push 0x12e1c744 */
  push32((uint32_t)(0x12e1c744u));
  /* 12dfcdad push 2 */
  push32((uint32_t)(0x2u));
  /* 12dfcdaf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12dfcdb4 call 0x12df56e0 */
  push32(0x12dfcdb9u); f_12df56e0();
  /* 12dfcdb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcdbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12dfcdbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcdc3 je 0x12dfce39 */
  if (C.zf) goto L_12dfce39;
  /* 12dfcdc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfcdc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcdcb mov dword ptr [eax*4 + 0x12e22060], ecx */
  w32((uint32_t)(EAX*4 + 0x12e22060), (ECX));
  /* 12dfcdd2 mov edx, dword ptr [0x12e2219c] */
  EDX = (r32((uint32_t)(0x12e2219c)));
  /* 12dfcdd8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcddb mov dword ptr [0x12e2219c], edx */
  w32((uint32_t)(0x12e2219c), (EDX));
  /* 12dfcde1 jmp 0x12dfcdec */
  goto L_12dfcdec;
L_12dfcde3:;
  /* 12dfcde3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfcde6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12dfcdec:;
  /* 12dfcdec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfcdef mov edx, dword ptr [ecx*4 + 0x12e22060] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12dfcdf6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfcdfc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcdff jae 0x12dfce24 */
  if (!C.cf) goto L_12dfce24;
  /* 12dfce01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfce04 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12dfce08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfce0b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12dfce11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfce14 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12dfce18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12dfce1b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12dfce22 jmp 0x12dfcde3 */
  goto L_12dfcde3;
L_12dfce24:;
  /* 12dfce24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12dfce27 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dfce2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12dfce2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfce30 push edx */
  push32((uint32_t)(EDX));
  /* 12dfce31 call 0x12dfd180 */
  push32(0x12dfce36u); f_12dfd180();
  /* 12dfce36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12dfce39:;
  /* 12dfce39 jmp 0x12dfce40 */
  goto L_12dfce40;
L_12dfce3b:;
  /* 12dfce3b jmp 0x12dfcc91 */
  goto L_12dfcc91;
L_12dfce40:;
  /* 12dfce40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12dfce42 call 0x12df9b30 */
  push32(0x12dfce47u); f_12df9b30();
  /* 12dfce47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12dfce4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12dfce4d pop esi */
  ESI = (pop32());
  /* 12dfce4e mov esp, ebp */
  ESP = (EBP);
  /* 12dfce50 pop ebp */
  EBP = (pop32());
  /* 12dfce51 ret  */
  ESPCHK(0x12dfcc70u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12dfce60 (183 bytes, 57 insns) */
void f_12dfce60(void) {
  FTRACE(0x12dfce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12dfce60 push ebp */
  push32((uint32_t)(EBP));
  /* 12dfce61 mov ebp, esp */
  EBP = (ESP);
  /* 12dfce63 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfce64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfce67 cmp eax, dword ptr [0x12e2219c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e2219c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfce6d jae 0x12dfcefa */
  if (!C.cf) goto L_12dfcefa;
  /* 12dfce73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfce76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12dfce79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfce7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12dfce7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfce82 mov eax, dword ptr [ecx*4 + 0x12e22060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e22060)));
  /* 12dfce89 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfce8d jne 0x12dfcefa */
  if (!C.zf) goto L_12dfcefa;
  /* 12dfce8f cmp dword ptr [0x12e2069c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e2069c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfce96 jne 0x12dfceda */
  if (!C.zf) goto L_12dfceda;
  /* 12dfce98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfce9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12dfce9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcea2 je 0x12dfceb2 */
  if (C.zf) goto L_12dfceb2;
  /* 12dfcea4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfcea8 je 0x12dfcec0 */
  if (C.zf) goto L_12dfcec0;
  /* 12dfceaa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12dfceae je 0x12dfcece */
  if (C.zf) goto L_12dfcece;
  /* 12dfceb0 jmp 0x12dfceda */
  goto L_12dfceda;
L_12dfceb2:;
  /* 12dfceb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfceb5 push edx */
  push32((uint32_t)(EDX));
  /* 12dfceb6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12dfceb8 call dword ptr [0x12e232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232cc))), 0x12dfcebeu);
  /* 12dfcebe jmp 0x12dfceda */
  goto L_12dfceda;
L_12dfcec0:;
  /* 12dfcec0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfcec3 push eax */
  push32((uint32_t)(EAX));
  /* 12dfcec4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12dfcec6 call dword ptr [0x12e232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232cc))), 0x12dfceccu);
  /* 12dfcecc jmp 0x12dfceda */
  goto L_12dfceda;
L_12dfcece:;
  /* 12dfcece mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfced1 push ecx */
  push32((uint32_t)(ECX));
  /* 12dfced2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12dfced4 call dword ptr [0x12e232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e232cc))), 0x12dfcedau);
L_12dfceda:;
  /* 12dfceda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcedd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12dfcee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12dfcee3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12dfcee6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12dfcee9 mov ecx, dword ptr [edx*4 + 0x12e22060] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12e22060)));
  /* 12dfcef0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12dfcef3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12dfcef6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12dfcef8 jmp 0x12dfcf13 */
  goto L_12dfcf13;
L_12dfcefa:;
  /* 12dfcefa call 0x12dfcc50 */
  push32(0x12dfceffu); f_12dfcc50();
  /* 12dfceff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12dfcf05 call 0x12dfcc60 */
  push32(0x12dfcf0au); f_12dfcc60();
  /* 12dfcf0a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12dfcf10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12dfcf13:;
  /* 12dfcf13 mov esp, ebp */
  ESP = (EBP);
  /* 12dfcf15 pop ebp */
  EBP = (pop32());
  /* 12dfcf16 ret  */
  ESPCHK(0x12dfce60u, _esp0);
  ESP += 4; return;
}

