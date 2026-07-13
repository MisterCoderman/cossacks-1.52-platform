#include "recomp.h"

/* FUN_10007a80 @ 0x10727a80 (490 bytes, 165 insns) */
void f_10727a80(void) {
  FTRACE(0x10727a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10727a81 mov ebp, esp */
  EBP = (ESP);
  /* 10727a83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727a86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727a8a jne 0x10727a9d */
  if (!C.zf) goto L_10727a9d;
  /* 10727a8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727a8f push eax */
  push32((uint32_t)(EAX));
  /* 10727a90 call 0x107278d0 */
  push32(0x10727a95u); f_107278d0();
  /* 10727a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727a98 jmp 0x10727c66 */
  goto L_10727c66;
L_10727a9d:;
  /* 10727a9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727aa1 jne 0x10727ab6 */
  if (!C.zf) goto L_10727ab6;
  /* 10727aa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10727aa7 call 0x10727c70 */
  push32(0x10727aacu); f_10727c70();
  /* 10727aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727aaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10727ab1 jmp 0x10727c66 */
  goto L_10727c66;
L_10727ab6:;
  /* 10727ab6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10727abd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727ac1 ja 0x10727c39 */
  if ((!C.cf&&!C.zf)) goto L_10727c39;
  /* 10727ac7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10727ac9 call 0x10727500 */
  push32(0x10727aceu); f_10727500();
  /* 10727ace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727ad1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727ad4 push edx */
  push32((uint32_t)(EDX));
  /* 10727ad5 call 0x10727e00 */
  push32(0x10727adau); f_10727e00();
  /* 10727ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727add mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10727ae0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727ae4 je 0x10727bfc */
  if (C.zf) goto L_10727bfc;
  /* 10727aea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727aed cmp eax, dword ptr [0x1074dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727af3 ja 0x10727b70 */
  if ((!C.cf&&!C.zf)) goto L_10727b70;
  /* 10727af5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727af8 push ecx */
  push32((uint32_t)(ECX));
  /* 10727af9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727afc push edx */
  push32((uint32_t)(EDX));
  /* 10727afd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10727b00 push eax */
  push32((uint32_t)(EAX));
  /* 10727b01 call 0x10728cd0 */
  push32(0x10727b06u); f_10728cd0();
  /* 10727b06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10727b0b je 0x10727b15 */
  if (C.zf) goto L_10727b15;
  /* 10727b0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727b10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10727b13 jmp 0x10727b70 */
  goto L_10727b70;
L_10727b15:;
  /* 10727b15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727b18 push edx */
  push32((uint32_t)(EDX));
  /* 10727b19 call 0x10728490 */
  push32(0x10727b1eu); f_10728490();
  /* 10727b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727b21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10727b24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727b28 je 0x10727b70 */
  if (C.zf) goto L_10727b70;
  /* 10727b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727b2d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10727b30 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727b33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10727b36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727b39 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727b3c jae 0x10727b46 */
  if (!C.cf) goto L_10727b46;
  /* 10727b3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727b41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10727b44 jmp 0x10727b4c */
  goto L_10727b4c;
L_10727b46:;
  /* 10727b46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727b49 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10727b4c:;
  /* 10727b4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10727b4f push edx */
  push32((uint32_t)(EDX));
  /* 10727b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727b53 push eax */
  push32((uint32_t)(EAX));
  /* 10727b54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727b57 push ecx */
  push32((uint32_t)(ECX));
  /* 10727b58 call 0x1072a3e0 */
  push32(0x10727b5du); f_1072a3e0();
  /* 10727b5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727b60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727b63 push edx */
  push32((uint32_t)(EDX));
  /* 10727b64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10727b67 push eax */
  push32((uint32_t)(EAX));
  /* 10727b68 call 0x10727ec0 */
  push32(0x10727b6du); f_10727ec0();
  /* 10727b6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10727b70:;
  /* 10727b70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727b74 jne 0x10727bf0 */
  if (!C.zf) goto L_10727bf0;
  /* 10727b76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727b7a jne 0x10727b83 */
  if (!C.zf) goto L_10727b83;
  /* 10727b7c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10727b83:;
  /* 10727b83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727b86 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727b89 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10727b8c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10727b8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727b92 push edx */
  push32((uint32_t)(EDX));
  /* 10727b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10727b95 mov eax, dword ptr [0x10750eac] */
  EAX = (r32((uint32_t)(0x10750eac)));
  /* 10727b9a push eax */
  push32((uint32_t)(EAX));
  /* 10727b9b call dword ptr [0x107522f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522f0))), 0x10727ba1u);
  /* 10727ba1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10727ba4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727ba8 je 0x10727bf0 */
  if (C.zf) goto L_10727bf0;
  /* 10727baa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727bad mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10727bb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727bb3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10727bb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727bb9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727bbc jae 0x10727bc6 */
  if (!C.cf) goto L_10727bc6;
  /* 10727bbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727bc1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10727bc4 jmp 0x10727bcc */
  goto L_10727bcc;
L_10727bc6:;
  /* 10727bc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727bc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10727bcc:;
  /* 10727bcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10727bcf push eax */
  push32((uint32_t)(EAX));
  /* 10727bd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10727bd4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727bd7 push edx */
  push32((uint32_t)(EDX));
  /* 10727bd8 call 0x1072a3e0 */
  push32(0x10727bddu); f_1072a3e0();
  /* 10727bdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727be3 push eax */
  push32((uint32_t)(EAX));
  /* 10727be4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10727be7 push ecx */
  push32((uint32_t)(ECX));
  /* 10727be8 call 0x10727ec0 */
  push32(0x10727bedu); f_10727ec0();
  /* 10727bed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10727bf0:;
  /* 10727bf0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10727bf2 call 0x107275a0 */
  push32(0x10727bf7u); f_107275a0();
  /* 10727bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727bfa jmp 0x10727c39 */
  goto L_10727c39;
L_10727bfc:;
  /* 10727bfc push 9 */
  push32((uint32_t)(0x9u));
  /* 10727bfe call 0x107275a0 */
  push32(0x10727c03u); f_107275a0();
  /* 10727c03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727c06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727c0a jne 0x10727c13 */
  if (!C.zf) goto L_10727c13;
  /* 10727c0c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10727c13:;
  /* 10727c13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727c16 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727c19 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10727c1c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10727c1f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727c22 push eax */
  push32((uint32_t)(EAX));
  /* 10727c23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727c26 push ecx */
  push32((uint32_t)(ECX));
  /* 10727c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10727c29 mov edx, dword ptr [0x10750eac] */
  EDX = (r32((uint32_t)(0x10750eac)));
  /* 10727c2f push edx */
  push32((uint32_t)(EDX));
  /* 10727c30 call dword ptr [0x107522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522f8))), 0x10727c36u);
  /* 10727c36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10727c39:;
  /* 10727c39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727c3d jne 0x10727c48 */
  if (!C.zf) goto L_10727c48;
  /* 10727c3f cmp dword ptr [0x1074f6e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f6e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727c46 jne 0x10727c4d */
  if (!C.zf) goto L_10727c4d;
L_10727c48:;
  /* 10727c48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727c4b jmp 0x10727c66 */
  goto L_10727c66;
L_10727c4d:;
  /* 10727c4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727c50 push eax */
  push32((uint32_t)(EAX));
  /* 10727c51 call 0x10727840 */
  push32(0x10727c56u); f_10727840();
  /* 10727c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10727c5b jne 0x10727c61 */
  if (!C.zf) goto L_10727c61;
  /* 10727c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10727c5f jmp 0x10727c66 */
  goto L_10727c66;
L_10727c61:;
  /* 10727c61 jmp 0x10727ab6 */
  goto L_10727ab6;
L_10727c66:;
  /* 10727c66 mov esp, ebp */
  ESP = (EBP);
  /* 10727c68 pop ebp */
  EBP = (pop32());
  /* 10727c69 ret  */
  ESPCHK(0x10727a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x10727c70 (104 bytes, 38 insns) */
void f_10727c70(void) {
  FTRACE(0x10727c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10727c71 mov ebp, esp */
  EBP = (ESP);
  /* 10727c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10727c74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727c78 jne 0x10727c7c */
  if (!C.zf) goto L_10727c7c;
  /* 10727c7a jmp 0x10727cd4 */
  goto L_10727cd4;
L_10727c7c:;
  /* 10727c7c push 9 */
  push32((uint32_t)(0x9u));
  /* 10727c7e call 0x10727500 */
  push32(0x10727c83u); f_10727500();
  /* 10727c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727c89 push eax */
  push32((uint32_t)(EAX));
  /* 10727c8a call 0x10727e00 */
  push32(0x10727c8fu); f_10727e00();
  /* 10727c8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727c92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10727c95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727c99 je 0x10727cb7 */
  if (C.zf) goto L_10727cb7;
  /* 10727c9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10727c9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727ca2 push edx */
  push32((uint32_t)(EDX));
  /* 10727ca3 call 0x10727ec0 */
  push32(0x10727ca8u); f_10727ec0();
  /* 10727ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727cab push 9 */
  push32((uint32_t)(0x9u));
  /* 10727cad call 0x107275a0 */
  push32(0x10727cb2u); f_107275a0();
  /* 10727cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727cb5 jmp 0x10727cd4 */
  goto L_10727cd4;
L_10727cb7:;
  /* 10727cb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10727cb9 call 0x107275a0 */
  push32(0x10727cbeu); f_107275a0();
  /* 10727cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727cc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727cc4 push eax */
  push32((uint32_t)(EAX));
  /* 10727cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10727cc7 mov ecx, dword ptr [0x10750eac] */
  ECX = (r32((uint32_t)(0x10750eac)));
  /* 10727ccd push ecx */
  push32((uint32_t)(ECX));
  /* 10727cce call dword ptr [0x1075237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075237c))), 0x10727cd4u);
L_10727cd4:;
  /* 10727cd4 mov esp, ebp */
  ESP = (EBP);
  /* 10727cd6 pop ebp */
  EBP = (pop32());
  /* 10727cd7 ret  */
  ESPCHK(0x10727c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x10727ce0 (116 bytes, 34 insns) */
void f_10727ce0(void) {
  FTRACE(0x10727ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10727ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10727ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10727ce4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10727ceb push 9 */
  push32((uint32_t)(0x9u));
  /* 10727ced call 0x10727500 */
  push32(0x10727cf2u); f_10727500();
  /* 10727cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727cf5 call 0x107293f0 */
  push32(0x10727cfau); f_107293f0();
  /* 10727cfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10727cfc jge 0x10727d05 */
  if ((C.sf==C.of)) goto L_10727d05;
  /* 10727cfe mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10727d05:;
  /* 10727d05 push 9 */
  push32((uint32_t)(0x9u));
  /* 10727d07 call 0x107275a0 */
  push32(0x10727d0cu); f_107275a0();
  /* 10727d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10727d0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10727d11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10727d13 mov eax, dword ptr [0x10750eac] */
  EAX = (r32((uint32_t)(0x10750eac)));
  /* 10727d18 push eax */
  push32((uint32_t)(EAX));
  /* 10727d19 call dword ptr [0x1075236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075236c))), 0x10727d1fu);
  /* 10727d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10727d21 jne 0x10727d4d */
  if (!C.zf) goto L_10727d4d;
  /* 10727d23 call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x10727d29u);
  /* 10727d29 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727d2c jne 0x10727d46 */
  if (!C.zf) goto L_10727d46;
  /* 10727d2e call 0x1072b9e0 */
  push32(0x10727d33u); f_1072b9e0();
  /* 10727d33 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10727d39 call 0x1072b9d0 */
  push32(0x10727d3eu); f_1072b9d0();
  /* 10727d3e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10727d44 jmp 0x10727d4d */
  goto L_10727d4d;
L_10727d46:;
  /* 10727d46 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10727d4d:;
  /* 10727d4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727d50 mov esp, ebp */
  ESP = (EBP);
  /* 10727d52 pop ebp */
  EBP = (pop32());
  /* 10727d53 ret  */
  ESPCHK(0x10727ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d60 @ 0x10727d60 (10 bytes, 5 insns) */
void f_10727d60(void) {
  FTRACE(0x10727d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10727d61 mov ebp, esp */
  EBP = (ESP);
  /* 10727d63 call 0x10727ce0 */
  push32(0x10727d68u); f_10727ce0();
  /* 10727d68 pop ebp */
  EBP = (pop32());
  /* 10727d69 ret  */
  ESPCHK(0x10727d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d70 @ 0x10727d70 (10 bytes, 5 insns) */
void f_10727d70(void) {
  FTRACE(0x10727d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10727d71 mov ebp, esp */
  EBP = (ESP);
  /* 10727d73 mov eax, dword ptr [0x1074dc94] */
  EAX = (r32((uint32_t)(0x1074dc94)));
  /* 10727d78 pop ebp */
  EBP = (pop32());
  /* 10727d79 ret  */
  ESPCHK(0x10727d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d80 @ 0x10727d80 (31 bytes, 11 insns) */
void f_10727d80(void) {
  FTRACE(0x10727d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10727d81 mov ebp, esp */
  EBP = (ESP);
  /* 10727d83 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727d8a jbe 0x10727d90 */
  if ((C.cf||C.zf)) goto L_10727d90;
  /* 10727d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10727d8e jmp 0x10727d9d */
  goto L_10727d9d;
L_10727d90:;
  /* 10727d90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727d93 mov dword ptr [0x1074dc94], eax */
  w32((uint32_t)(0x1074dc94), (EAX));
  /* 10727d98 mov eax, 1 */
  EAX = (0x1u);
L_10727d9d:;
  /* 10727d9d pop ebp */
  EBP = (pop32());
  /* 10727d9e ret  */
  ESPCHK(0x10727d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x10727da0 (89 bytes, 20 insns) */
void f_10727da0(void) {
  FTRACE(0x10727da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10727da1 mov ebp, esp */
  EBP = (ESP);
  /* 10727da3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10727da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10727daa mov eax, dword ptr [0x10750eac] */
  EAX = (r32((uint32_t)(0x10750eac)));
  /* 10727daf push eax */
  push32((uint32_t)(EAX));
  /* 10727db0 call dword ptr [0x107522f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522f0))), 0x10727db6u);
  /* 10727db6 mov dword ptr [0x10750ea8], eax */
  w32((uint32_t)(0x10750ea8), (EAX));
  /* 10727dbb cmp dword ptr [0x10750ea8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10750ea8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727dc2 jne 0x10727dc8 */
  if (!C.zf) goto L_10727dc8;
  /* 10727dc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10727dc6 jmp 0x10727df7 */
  goto L_10727df7;
L_10727dc8:;
  /* 10727dc8 mov ecx, dword ptr [0x10750ea8] */
  ECX = (r32((uint32_t)(0x10750ea8)));
  /* 10727dce mov dword ptr [0x10750e9c], ecx */
  w32((uint32_t)(0x10750e9c), (ECX));
  /* 10727dd4 mov dword ptr [0x10750ea0], 0 */
  w32((uint32_t)(0x10750ea0), (0x0u));
  /* 10727dde mov dword ptr [0x10750ea4], 0 */
  w32((uint32_t)(0x10750ea4), (0x0u));
  /* 10727de8 mov dword ptr [0x10750e88], 0x10 */
  w32((uint32_t)(0x10750e88), (0x10u));
  /* 10727df2 mov eax, 1 */
  EAX = (0x1u);
L_10727df7:;
  /* 10727df7 pop ebp */
  EBP = (pop32());
  /* 10727df8 ret  */
  ESPCHK(0x10727da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x10727e00 (85 bytes, 29 insns) */
void f_10727e00(void) {
  FTRACE(0x10727e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10727e01 mov ebp, esp */
  EBP = (ESP);
  /* 10727e03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727e06 mov eax, dword ptr [0x10750ea4] */
  EAX = (r32((uint32_t)(0x10750ea4)));
  /* 10727e0b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10727e0e mov ecx, dword ptr [0x10750ea8] */
  ECX = (r32((uint32_t)(0x10750ea8)));
  /* 10727e14 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727e16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10727e19 mov edx, dword ptr [0x10750ea8] */
  EDX = (r32((uint32_t)(0x10750ea8)));
  /* 10727e1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10727e22:;
  /* 10727e22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727e25 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727e28 jae 0x10727e4f */
  if (!C.cf) goto L_10727e4f;
  /* 10727e2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727e2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727e30 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727e33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10727e36 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727e3d jae 0x10727e44 */
  if (!C.cf) goto L_10727e44;
  /* 10727e3f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727e42 jmp 0x10727e51 */
  goto L_10727e51;
L_10727e44:;
  /* 10727e44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727e47 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727e4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10727e4d jmp 0x10727e22 */
  goto L_10727e22;
L_10727e4f:;
  /* 10727e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10727e51:;
  /* 10727e51 mov esp, ebp */
  ESP = (EBP);
  /* 10727e53 pop ebp */
  EBP = (pop32());
  /* 10727e54 ret  */
  ESPCHK(0x10727e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x10727e60 (95 bytes, 33 insns) */
void f_10727e60(void) {
  FTRACE(0x10727e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10727e61 mov ebp, esp */
  EBP = (ESP);
  /* 10727e63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727e69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727e6c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727e6f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10727e72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727e75 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10727e78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10727e7b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10727e80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727e83 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10727e85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727e88 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10727e8b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10727e8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10727e8f jne 0x10727eb1 */
  if (!C.zf) goto L_10727eb1;
  /* 10727e91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727e94 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10727e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10727e99 jne 0x10727eb1 */
  if (!C.zf) goto L_10727eb1;
  /* 10727e9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10727e9e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10727ea4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10727ea6 je 0x10727eb1 */
  if (C.zf) goto L_10727eb1;
  /* 10727ea8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10727eaf jmp 0x10727eb8 */
  goto L_10727eb8;
L_10727eb1:;
  /* 10727eb1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10727eb8:;
  /* 10727eb8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10727ebb mov esp, ebp */
  ESP = (EBP);
  /* 10727ebd pop ebp */
  EBP = (pop32());
  /* 10727ebe ret  */
  ESPCHK(0x10727e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x10727ec0 (1485 bytes, 453 insns) */
void f_10727ec0(void) {
  FTRACE(0x10727ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10727ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10727ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10727ec3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727ec9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10727ecc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10727ecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727ed2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727ed5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727ed8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10727edb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10727ede shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10727ee1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10727ee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727ee7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10727eed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10727ef0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10727ef7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10727efa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10727efd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727f00 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10727f03 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10727f06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10727f08 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727f0b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10727f0e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10727f11 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727f14 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10727f17 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10727f1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10727f1c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10727f1f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10727f22 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10727f25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10727f28 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10727f2b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10727f2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10727f30 jne 0x10728058 */
  if (!C.zf) goto L_10728058;
  /* 10727f36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10727f39 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10727f3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727f3f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10727f42 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727f46 jbe 0x10727f4f */
  if ((C.cf||C.zf)) goto L_10727f4f;
  /* 10727f48 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10727f4f:;
  /* 10727f4f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10727f52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10727f55 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10727f58 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727f5b jne 0x10728031 */
  if (!C.zf) goto L_10728031;
  /* 10727f61 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10727f65 jae 0x10727fc6 */
  if (!C.cf) goto L_10727fc6;
  /* 10727f67 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10727f6c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10727f6f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10727f71 not eax */
  EAX = (~(EAX));
  /* 10727f73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727f76 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10727f79 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10727f7d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10727f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727f82 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10727f85 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10727f89 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10727f8c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727f8f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10727f92 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10727f95 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10727f98 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727f9b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10727f9e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10727fa1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727fa4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10727fa8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10727faa jne 0x10727fc4 */
  if (!C.zf) goto L_10727fc4;
  /* 10727fac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10727fb1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10727fb4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10727fb6 not eax */
  EAX = (~(EAX));
  /* 10727fb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727fbb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10727fbd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10727fbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10727fc2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10727fc4:;
  /* 10727fc4 jmp 0x10728031 */
  goto L_10728031;
L_10727fc6:;
  /* 10727fc6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10727fc9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10727fcc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10727fd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10727fd3 not edx */
  EDX = (~(EDX));
  /* 10727fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727fd8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10727fdb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10727fe2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10727fe4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10727fe7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10727fea mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10727ff1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10727ff4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10727ff7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10727ffa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10727ffd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728000 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728003 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10728006 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728009 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072800c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10728010 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10728012 jne 0x10728031 */
  if (!C.zf) goto L_10728031;
  /* 10728014 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10728017 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072801a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1072801f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10728021 not edx */
  EDX = (~(EDX));
  /* 10728023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728026 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10728029 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1072802b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072802e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10728031:;
  /* 10728031 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728034 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10728037 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1072803a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1072803d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10728040 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728043 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10728046 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728049 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1072804c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1072804f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728052 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728055 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10728058:;
  /* 10728058 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072805b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1072805e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728061 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10728064 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728068 jbe 0x10728071 */
  if ((C.cf||C.zf)) goto L_10728071;
  /* 1072806a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10728071:;
  /* 10728071 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10728074 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10728077 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10728079 jne 0x107281d5 */
  if (!C.zf) goto L_107281d5;
  /* 1072807f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728082 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728085 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10728088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072808b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1072808e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728091 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10728094 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728098 jbe 0x107280a1 */
  if ((C.cf||C.zf)) goto L_107280a1;
  /* 1072809a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_107280a1:;
  /* 107280a1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107280a4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107280a7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 107280aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107280ad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 107280b0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107280b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107280b6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107280ba jbe 0x107280c3 */
  if ((C.cf||C.zf)) goto L_107280c3;
  /* 107280bc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_107280c3:;
  /* 107280c3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107280c6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107280c9 je 0x107281cf */
  if (C.zf) goto L_107281cf;
  /* 107280cf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107280d2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107280d5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 107280d8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107280db jne 0x107281b1 */
  if (!C.zf) goto L_107281b1;
  /* 107280e1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107280e5 jae 0x10728146 */
  if (!C.cf) goto L_10728146;
  /* 107280e7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107280ec mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107280ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107280f1 not edx */
  EDX = (~(EDX));
  /* 107280f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107280f6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107280f9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107280fd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107280ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728102 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728105 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10728109 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1072810c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072810f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10728112 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10728115 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728118 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072811b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1072811e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728121 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728124 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10728128 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072812a jne 0x10728144 */
  if (!C.zf) goto L_10728144;
  /* 1072812c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10728131 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728134 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10728136 not edx */
  EDX = (~(EDX));
  /* 10728138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072813b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072813d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1072813f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728142 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10728144:;
  /* 10728144 jmp 0x107281b1 */
  goto L_107281b1;
L_10728146:;
  /* 10728146 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728149 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072814c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10728151 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10728153 not eax */
  EAX = (~(EAX));
  /* 10728155 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728158 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1072815b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10728162 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10728164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728167 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1072816a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10728171 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728174 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728177 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1072817a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1072817d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728180 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728183 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10728186 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728189 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072818c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10728190 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10728192 jne 0x107281b1 */
  if (!C.zf) goto L_107281b1;
  /* 10728194 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728197 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072819a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1072819f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107281a1 not eax */
  EAX = (~(EAX));
  /* 107281a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107281a6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 107281a9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107281ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107281ae mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_107281b1:;
  /* 107281b1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107281b4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107281b7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 107281ba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107281bd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107281c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107281c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107281c6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 107281c9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 107281cc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_107281cf:;
  /* 107281cf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 107281d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_107281d5:;
  /* 107281d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107281d8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107281db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107281dd jne 0x107281eb */
  if (!C.zf) goto L_107281eb;
  /* 107281df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107281e2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107281e5 je 0x107282fb */
  if (C.zf) goto L_107282fb;
L_107281eb:;
  /* 107281eb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107281ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107281f1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 107281f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 107281f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107281fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107281fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10728200 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10728203 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728206 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728209 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1072820c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072820f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728212 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10728215 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728218 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072821b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072821e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10728221 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728224 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728227 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072822a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072822d jne 0x107282fb */
  if (!C.zf) goto L_107282fb;
  /* 10728233 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728237 jae 0x10728294 */
  if (!C.cf) goto L_10728294;
  /* 10728239 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1072823c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072823f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10728243 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728246 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728249 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1072824c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1072824f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728252 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728255 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10728258 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072825a jne 0x10728272 */
  if (!C.zf) goto L_10728272;
  /* 1072825c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10728261 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728264 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10728266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728269 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072826b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1072826d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728270 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10728272:;
  /* 10728272 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10728277 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072827a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1072827c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072827f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728282 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10728286 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10728288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072828b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1072828e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10728292 jmp 0x107282fb */
  goto L_107282fb;
L_10728294:;
  /* 10728294 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10728297 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072829a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1072829e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107282a1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107282a4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107282a7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107282aa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107282ad add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107282b0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107282b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107282b5 jne 0x107282d2 */
  if (!C.zf) goto L_107282d2;
  /* 107282b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107282ba sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107282bd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107282c2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107282c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107282c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107282ca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107282cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107282cf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_107282d2:;
  /* 107282d2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107282d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107282d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107282dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107282df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107282e2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107282e5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 107282ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107282ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107282f1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107282f4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_107282fb:;
  /* 107282fb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107282fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728301 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10728303 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728306 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728309 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072830c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1072830f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10728312 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10728314 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728317 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072831a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1072831c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072831f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728322 jne 0x10728489 */
  if (!C.zf) goto L_10728489;
  /* 10728328 cmp dword ptr [0x10750ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10750ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072832f je 0x10728478 */
  if (C.zf) goto L_10728478;
  /* 10728335 mov eax, dword ptr [0x10750e98] */
  EAX = (r32((uint32_t)(0x10750e98)));
  /* 1072833a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1072833d mov ecx, dword ptr [0x10750ea0] */
  ECX = (r32((uint32_t)(0x10750ea0)));
  /* 10728343 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10728346 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728348 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1072834b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10728350 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10728355 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728358 push eax */
  push32((uint32_t)(EAX));
  /* 10728359 call dword ptr [0x10752378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752378))), 0x1072835fu);
  /* 1072835f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10728364 mov ecx, dword ptr [0x10750e98] */
  ECX = (r32((uint32_t)(0x10750e98)));
  /* 1072836a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1072836c mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 10728371 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10728374 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10728376 mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 1072837c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1072837f mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 10728384 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10728387 mov edx, dword ptr [0x10750e98] */
  EDX = (r32((uint32_t)(0x10750e98)));
  /* 1072838d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10728398 mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 1072839d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107283a0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 107283a3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107283a6 mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 107283ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107283ae mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 107283b1 mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 107283b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107283ba movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 107283be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107283c0 jne 0x107283d6 */
  if (!C.zf) goto L_107283d6;
  /* 107283c2 mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 107283c8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 107283cb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 107283cd mov ecx, dword ptr [0x10750ea0] */
  ECX = (r32((uint32_t)(0x10750ea0)));
  /* 107283d3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_107283d6:;
  /* 107283d6 mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 107283dc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107283e0 jne 0x10728478 */
  if (!C.zf) goto L_10728478;
  /* 107283e6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107283eb push 0 */
  push32((uint32_t)(0x0u));
  /* 107283ed mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 107283f2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107283f5 push ecx */
  push32((uint32_t)(ECX));
  /* 107283f6 call dword ptr [0x10752378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752378))), 0x107283fcu);
  /* 107283fc mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 10728402 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10728405 push eax */
  push32((uint32_t)(EAX));
  /* 10728406 push 0 */
  push32((uint32_t)(0x0u));
  /* 10728408 mov ecx, dword ptr [0x10750eac] */
  ECX = (r32((uint32_t)(0x10750eac)));
  /* 1072840e push ecx */
  push32((uint32_t)(ECX));
  /* 1072840f call dword ptr [0x1075237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075237c))), 0x10728415u);
  /* 10728415 mov edx, dword ptr [0x10750ea4] */
  EDX = (r32((uint32_t)(0x10750ea4)));
  /* 1072841b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072841e mov eax, dword ptr [0x10750ea8] */
  EAX = (r32((uint32_t)(0x10750ea8)));
  /* 10728423 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728425 mov ecx, dword ptr [0x10750ea0] */
  ECX = (r32((uint32_t)(0x10750ea0)));
  /* 1072842b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072842e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728430 push eax */
  push32((uint32_t)(EAX));
  /* 10728431 mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 10728437 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072843a push edx */
  push32((uint32_t)(EDX));
  /* 1072843b mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 10728440 push eax */
  push32((uint32_t)(EAX));
  /* 10728441 call 0x1072b9f0 */
  push32(0x10728446u); f_1072b9f0();
  /* 10728446 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10728449 mov ecx, dword ptr [0x10750ea4] */
  ECX = (r32((uint32_t)(0x10750ea4)));
  /* 1072844f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728452 mov dword ptr [0x10750ea4], ecx */
  w32((uint32_t)(0x10750ea4), (ECX));
  /* 10728458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072845b cmp edx, dword ptr [0x10750ea0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10750ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728461 jbe 0x1072846c */
  if ((C.cf||C.zf)) goto L_1072846c;
  /* 10728463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728466 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728469 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1072846c:;
  /* 1072846c mov ecx, dword ptr [0x10750ea8] */
  ECX = (r32((uint32_t)(0x10750ea8)));
  /* 10728472 mov dword ptr [0x10750e9c], ecx */
  w32((uint32_t)(0x10750e9c), (ECX));
L_10728478:;
  /* 10728478 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072847b mov dword ptr [0x10750ea0], edx */
  w32((uint32_t)(0x10750ea0), (EDX));
  /* 10728481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728484 mov dword ptr [0x10750e98], eax */
  w32((uint32_t)(0x10750e98), (EAX));
L_10728489:;
  /* 10728489 mov esp, ebp */
  ESP = (EBP);
  /* 1072848b pop ebp */
  EBP = (pop32());
  /* 1072848c ret  */
  ESPCHK(0x10727ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008490 @ 0x10728490 (1334 bytes, 427 insns) */
void f_10728490(void) {
  FTRACE(0x10728490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10728490 push ebp */
  push32((uint32_t)(EBP));
  /* 10728491 mov ebp, esp */
  EBP = (ESP);
  /* 10728493 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728496 push esi */
  push32((uint32_t)(ESI));
  /* 10728497 mov eax, dword ptr [0x10750ea4] */
  EAX = (r32((uint32_t)(0x10750ea4)));
  /* 1072849c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072849f mov ecx, dword ptr [0x10750ea8] */
  ECX = (r32((uint32_t)(0x10750ea8)));
  /* 107284a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107284a7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107284aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107284ad add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107284b0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107284b3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107284b6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107284b9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107284bc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107284bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 107284c2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107284c6 jge 0x107284dc */
  if ((C.sf==C.of)) goto L_107284dc;
  /* 107284c8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107284cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107284ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107284d0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 107284d3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 107284da jmp 0x107284f1 */
  goto L_107284f1;
L_107284dc:;
  /* 107284dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 107284e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107284e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107284e9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107284ec shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107284ee mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_107284f1:;
  /* 107284f1 mov ecx, dword ptr [0x10750e9c] */
  ECX = (r32((uint32_t)(0x10750e9c)));
  /* 107284f7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_107284fa:;
  /* 107284fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107284fd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728500 jae 0x10728526 */
  if (!C.cf) goto L_10728526;
  /* 10728502 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728505 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10728508 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1072850a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072850d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10728510 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10728513 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10728515 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10728517 je 0x1072851b */
  if (C.zf) goto L_1072851b;
  /* 10728519 jmp 0x10728526 */
  goto L_10728526;
L_1072851b:;
  /* 1072851b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072851e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728521 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10728524 jmp 0x107284fa */
  goto L_107284fa;
L_10728526:;
  /* 10728526 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728529 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072852c jne 0x1072860d */
  if (!C.zf) goto L_1072860d;
  /* 10728532 mov eax, dword ptr [0x10750ea8] */
  EAX = (r32((uint32_t)(0x10750ea8)));
  /* 10728537 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1072853a:;
  /* 1072853a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072853d cmp ecx, dword ptr [0x10750e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10750e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728543 jae 0x10728569 */
  if (!C.cf) goto L_10728569;
  /* 10728545 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728548 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072854b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1072854d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728550 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10728553 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10728556 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10728558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072855a je 0x1072855e */
  if (C.zf) goto L_1072855e;
  /* 1072855c jmp 0x10728569 */
  goto L_10728569;
L_1072855e:;
  /* 1072855e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728561 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728564 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10728567 jmp 0x1072853a */
  goto L_1072853a;
L_10728569:;
  /* 10728569 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072856c cmp ecx, dword ptr [0x10750e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10750e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728572 jne 0x1072860d */
  if (!C.zf) goto L_1072860d;
L_10728578:;
  /* 10728578 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072857b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072857e jae 0x10728596 */
  if (!C.cf) goto L_10728596;
  /* 10728580 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728583 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728587 je 0x1072858b */
  if (C.zf) goto L_1072858b;
  /* 10728589 jmp 0x10728596 */
  goto L_10728596;
L_1072858b:;
  /* 1072858b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072858e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728591 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10728594 jmp 0x10728578 */
  goto L_10728578;
L_10728596:;
  /* 10728596 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728599 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072859c jne 0x107285e7 */
  if (!C.zf) goto L_107285e7;
  /* 1072859e mov eax, dword ptr [0x10750ea8] */
  EAX = (r32((uint32_t)(0x10750ea8)));
  /* 107285a3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_107285a6:;
  /* 107285a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107285a9 cmp ecx, dword ptr [0x10750e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10750e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107285af jae 0x107285c7 */
  if (!C.cf) goto L_107285c7;
  /* 107285b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107285b4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107285b8 je 0x107285bc */
  if (C.zf) goto L_107285bc;
  /* 107285ba jmp 0x107285c7 */
  goto L_107285c7;
L_107285bc:;
  /* 107285bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107285bf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107285c2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107285c5 jmp 0x107285a6 */
  goto L_107285a6;
L_107285c7:;
  /* 107285c7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107285ca cmp ecx, dword ptr [0x10750e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10750e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107285d0 jne 0x107285e7 */
  if (!C.zf) goto L_107285e7;
  /* 107285d2 call 0x107289d0 */
  push32(0x107285d7u); f_107289d0();
  /* 107285d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107285da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107285de jne 0x107285e7 */
  if (!C.zf) goto L_107285e7;
  /* 107285e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107285e2 jmp 0x107289c1 */
  goto L_107289c1;
L_107285e7:;
  /* 107285e7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107285ea push edx */
  push32((uint32_t)(EDX));
  /* 107285eb call 0x10728ae0 */
  push32(0x107285f0u); f_10728ae0();
  /* 107285f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107285f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107285f6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 107285f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107285fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107285fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10728601 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728604 jne 0x1072860d */
  if (!C.zf) goto L_1072860d;
  /* 10728606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10728608 jmp 0x107289c1 */
  goto L_107289c1;
L_1072860d:;
  /* 1072860d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728610 mov dword ptr [0x10750e9c], edx */
  w32((uint32_t)(0x10750e9c), (EDX));
  /* 10728616 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728619 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1072861c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1072861f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728622 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10728624 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10728627 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072862b je 0x10728650 */
  if (C.zf) goto L_10728650;
  /* 1072862d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728630 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728633 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10728636 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1072863a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072863d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728640 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10728643 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1072864a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1072864c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072864e jne 0x10728685 */
  if (!C.zf) goto L_10728685;
L_10728650:;
  /* 10728650 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10728657:;
  /* 10728657 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072865a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1072865d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10728660 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10728664 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728667 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1072866a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1072866d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10728674 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10728676 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10728678 jne 0x10728685 */
  if (!C.zf) goto L_10728685;
  /* 1072867a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072867d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728680 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10728683 jmp 0x10728657 */
  goto L_10728657;
L_10728685:;
  /* 10728685 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728688 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072868e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728691 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10728698 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072869b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107286a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107286a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107286a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107286ab and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 107286af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107286b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107286b6 jne 0x107286d2 */
  if (!C.zf) goto L_107286d2;
  /* 107286b8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 107286bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107286c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107286c5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 107286c8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 107286cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_107286d2:;
  /* 107286d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107286d6 jl 0x107286eb */
  if ((C.sf!=C.of)) goto L_107286eb;
  /* 107286d8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107286db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 107286dd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107286e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107286e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107286e6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 107286e9 jmp 0x107286d2 */
  goto L_107286d2;
L_107286eb:;
  /* 107286eb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 107286ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107286f1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 107286f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107286f8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107286fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107286fd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728700 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10728703 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10728706 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10728709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072870c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1072870f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728713 jle 0x1072871c */
  if ((C.zf||C.sf!=C.of)) goto L_1072871c;
  /* 10728715 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1072871c:;
  /* 1072871c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072871f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728722 je 0x10728940 */
  if (C.zf) goto L_10728940;
  /* 10728728 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072872b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072872e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10728731 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728734 jne 0x1072880a */
  if (!C.zf) goto L_1072880a;
  /* 1072873a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072873e jge 0x1072879f */
  if ((C.sf==C.of)) goto L_1072879f;
  /* 10728740 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10728745 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728748 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1072874a not eax */
  EAX = (~(EAX));
  /* 1072874c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072874f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728752 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10728756 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10728758 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072875b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1072875e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10728762 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728765 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728768 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1072876b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1072876e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728771 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728774 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10728777 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1072877a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072877d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10728781 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10728783 jne 0x1072879d */
  if (!C.zf) goto L_1072879d;
  /* 10728785 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1072878a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072878d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1072878f not eax */
  EAX = (~(EAX));
  /* 10728791 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728794 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10728796 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10728798 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072879b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1072879d:;
  /* 1072879d jmp 0x1072880a */
  goto L_1072880a;
L_1072879f:;
  /* 1072879f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107287a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107287a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107287aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107287ac not edx */
  EDX = (~(EDX));
  /* 107287ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107287b1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107287b4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107287bb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107287bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107287c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107287c3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 107287ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107287cd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107287d0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107287d3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107287d6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107287d9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107287dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107287df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107287e2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107287e5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107287e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107287eb jne 0x1072880a */
  if (!C.zf) goto L_1072880a;
  /* 107287ed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107287f0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107287f3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107287f8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107287fa not edx */
  EDX = (~(EDX));
  /* 107287fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107287ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10728802 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10728804 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728807 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1072880a:;
  /* 1072880a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072880d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10728810 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728813 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10728816 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10728819 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072881c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072881f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728822 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10728825 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10728828 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072882c je 0x10728940 */
  if (C.zf) goto L_10728940;
  /* 10728832 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728838 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1072883b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072883e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10728844 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10728847 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1072884a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072884d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10728850 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10728853 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10728856 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728859 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1072885c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072885f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10728862 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728865 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10728868 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072886b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072886e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10728871 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728874 jne 0x10728940 */
  if (!C.zf) goto L_10728940;
  /* 1072887a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072887e jge 0x107288da */
  if ((C.sf==C.of)) goto L_107288da;
  /* 10728880 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728883 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728886 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1072888a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1072888d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728890 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10728893 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10728895 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728898 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072889b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1072889e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107288a0 jne 0x107288b8 */
  if (!C.zf) goto L_107288b8;
  /* 107288a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107288a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107288aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107288ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107288af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107288b1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107288b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107288b6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107288b8:;
  /* 107288b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107288bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107288c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107288c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107288c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107288c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 107288cc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107288ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107288d1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107288d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107288d8 jmp 0x10728940 */
  goto L_10728940;
L_107288da:;
  /* 107288da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107288dd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107288e0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107288e4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107288e7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107288ea mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107288ed add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107288ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107288f2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107288f5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107288f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107288fa jne 0x10728917 */
  if (!C.zf) goto L_10728917;
  /* 107288fc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107288ff sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728902 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10728907 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10728909 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072890c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072890f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10728911 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728914 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10728917:;
  /* 10728917 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072891a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072891d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10728922 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10728924 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728927 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1072892a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10728931 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10728933 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728936 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10728939 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10728940:;
  /* 10728940 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728944 je 0x1072895a */
  if (C.zf) goto L_1072895a;
  /* 10728946 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728949 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072894c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1072894e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728951 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728954 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10728957 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1072895a:;
  /* 1072895a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072895d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728960 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10728963 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728966 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728969 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072896c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1072896e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728971 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728974 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728977 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072897a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1072897d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728980 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10728982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728985 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10728987 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072898a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072898d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1072898f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10728991 jne 0x107289b3 */
  if (!C.zf) goto L_107289b3;
  /* 10728993 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728996 cmp eax, dword ptr [0x10750ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10750ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072899c jne 0x107289b3 */
  if (!C.zf) goto L_107289b3;
  /* 1072899e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107289a1 cmp ecx, dword ptr [0x10750e98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10750e98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107289a7 jne 0x107289b3 */
  if (!C.zf) goto L_107289b3;
  /* 107289a9 mov dword ptr [0x10750ea0], 0 */
  w32((uint32_t)(0x10750ea0), (0x0u));
L_107289b3:;
  /* 107289b3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107289b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107289b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107289bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107289be add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_107289c1:;
  /* 107289c1 pop esi */
  ESI = (pop32());
  /* 107289c2 mov esp, ebp */
  ESP = (EBP);
  /* 107289c4 pop ebp */
  EBP = (pop32());
  /* 107289c5 ret  */
  ESPCHK(0x10728490u, _esp0);
  ESP += 4; return;
}

/* FUN_100089d0 @ 0x107289d0 (271 bytes, 78 insns) */
void f_107289d0(void) {
  FTRACE(0x107289d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107289d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107289d1 mov ebp, esp */
  EBP = (ESP);
  /* 107289d3 push ecx */
  push32((uint32_t)(ECX));
  /* 107289d4 mov eax, dword ptr [0x10750ea4] */
  EAX = (r32((uint32_t)(0x10750ea4)));
  /* 107289d9 cmp eax, dword ptr [0x10750e88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10750e88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107289df jne 0x10728a2b */
  if (!C.zf) goto L_10728a2b;
  /* 107289e1 mov ecx, dword ptr [0x10750e88] */
  ECX = (r32((uint32_t)(0x10750e88)));
  /* 107289e7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107289ea imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107289ed push ecx */
  push32((uint32_t)(ECX));
  /* 107289ee mov edx, dword ptr [0x10750ea8] */
  EDX = (r32((uint32_t)(0x10750ea8)));
  /* 107289f4 push edx */
  push32((uint32_t)(EDX));
  /* 107289f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107289f7 mov eax, dword ptr [0x10750eac] */
  EAX = (r32((uint32_t)(0x10750eac)));
  /* 107289fc push eax */
  push32((uint32_t)(EAX));
  /* 107289fd call dword ptr [0x107522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522f8))), 0x10728a03u);
  /* 10728a03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10728a06 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728a0a jne 0x10728a13 */
  if (!C.zf) goto L_10728a13;
  /* 10728a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10728a0e jmp 0x10728adb */
  goto L_10728adb;
L_10728a13:;
  /* 10728a13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728a16 mov dword ptr [0x10750ea8], ecx */
  w32((uint32_t)(0x10750ea8), (ECX));
  /* 10728a1c mov edx, dword ptr [0x10750e88] */
  EDX = (r32((uint32_t)(0x10750e88)));
  /* 10728a22 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728a25 mov dword ptr [0x10750e88], edx */
  w32((uint32_t)(0x10750e88), (EDX));
L_10728a2b:;
  /* 10728a2b mov eax, dword ptr [0x10750ea4] */
  EAX = (r32((uint32_t)(0x10750ea4)));
  /* 10728a30 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10728a33 mov ecx, dword ptr [0x10750ea8] */
  ECX = (r32((uint32_t)(0x10750ea8)));
  /* 10728a39 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728a3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10728a3e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10728a43 push 8 */
  push32((uint32_t)(0x8u));
  /* 10728a45 mov edx, dword ptr [0x10750eac] */
  EDX = (r32((uint32_t)(0x10750eac)));
  /* 10728a4b push edx */
  push32((uint32_t)(EDX));
  /* 10728a4c call dword ptr [0x107522f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522f0))), 0x10728a52u);
  /* 10728a52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728a55 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10728a58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728a5b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728a5f jne 0x10728a65 */
  if (!C.zf) goto L_10728a65;
  /* 10728a61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10728a63 jmp 0x10728adb */
  goto L_10728adb;
L_10728a65:;
  /* 10728a65 push 4 */
  push32((uint32_t)(0x4u));
  /* 10728a67 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10728a6c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10728a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10728a73 call dword ptr [0x107522e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e8))), 0x10728a79u);
  /* 10728a79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728a7c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10728a7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728a82 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728a86 jne 0x10728aa2 */
  if (!C.zf) goto L_10728aa2;
  /* 10728a88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728a8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10728a8e push ecx */
  push32((uint32_t)(ECX));
  /* 10728a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10728a91 mov edx, dword ptr [0x10750eac] */
  EDX = (r32((uint32_t)(0x10750eac)));
  /* 10728a97 push edx */
  push32((uint32_t)(EDX));
  /* 10728a98 call dword ptr [0x1075237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075237c))), 0x10728a9eu);
  /* 10728a9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10728aa0 jmp 0x10728adb */
  goto L_10728adb;
L_10728aa2:;
  /* 10728aa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728aa5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10728aab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728aae mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10728ab5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728ab8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10728abf mov eax, dword ptr [0x10750ea4] */
  EAX = (r32((uint32_t)(0x10750ea4)));
  /* 10728ac4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728ac7 mov dword ptr [0x10750ea4], eax */
  w32((uint32_t)(0x10750ea4), (EAX));
  /* 10728acc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728acf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10728ad2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10728ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10728adb:;
  /* 10728adb mov esp, ebp */
  ESP = (EBP);
  /* 10728add pop ebp */
  EBP = (pop32());
  /* 10728ade ret  */
  ESPCHK(0x107289d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae0 @ 0x10728ae0 (494 bytes, 149 insns) */
void f_10728ae0(void) {
  FTRACE(0x10728ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10728ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10728ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10728ae3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728ae9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10728aec mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10728aef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728af2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10728af5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10728af8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10728aff:;
  /* 10728aff cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728b03 jl 0x10728b18 */
  if ((C.sf!=C.of)) goto L_10728b18;
  /* 10728b05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10728b08 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10728b0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10728b0d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728b10 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728b13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10728b16 jmp 0x10728aff */
  goto L_10728aff;
L_10728b18:;
  /* 10728b18 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728b1b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10728b21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728b24 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10728b2b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10728b2e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10728b35 jmp 0x10728b40 */
  goto L_10728b40;
L_10728b37:;
  /* 10728b37 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728b3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728b3d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10728b40:;
  /* 10728b40 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728b44 jge 0x10728b66 */
  if ((C.sf==C.of)) goto L_10728b66;
  /* 10728b46 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728b49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10728b4c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10728b4f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10728b52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728b55 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728b58 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10728b5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728b5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728b61 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10728b64 jmp 0x10728b37 */
  goto L_10728b37;
L_10728b66:;
  /* 10728b66 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728b69 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10728b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728b6f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10728b72 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728b74 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10728b77 push 4 */
  push32((uint32_t)(0x4u));
  /* 10728b79 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10728b7e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10728b83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728b86 push edx */
  push32((uint32_t)(EDX));
  /* 10728b87 call dword ptr [0x107522e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e8))), 0x10728b8du);
  /* 10728b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10728b8f jne 0x10728b99 */
  if (!C.zf) goto L_10728b99;
  /* 10728b91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10728b94 jmp 0x10728cca */
  goto L_10728cca;
L_10728b99:;
  /* 10728b99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728b9c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728ba1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10728ba4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728ba7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10728baa jmp 0x10728bb8 */
  goto L_10728bb8;
L_10728bac:;
  /* 10728bac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728baf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728bb5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10728bb8:;
  /* 10728bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728bbb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728bbe ja 0x10728c1d */
  if ((!C.cf&&!C.zf)) goto L_10728c1d;
  /* 10728bc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728bc3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10728bca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728bcd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10728bd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728bda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728bdd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10728be0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728be3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10728be9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728bec add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728bf2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728bf5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10728bf8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728bfb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728c01 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728c04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10728c07 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728c0a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728c0f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10728c12 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10728c15 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10728c1b jmp 0x10728bac */
  goto L_10728bac;
L_10728c1d:;
  /* 10728c1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10728c20 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728c26 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10728c29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728c2c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728c2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728c32 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10728c35 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728c38 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10728c3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10728c3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728c41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728c44 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10728c47 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728c4a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728c4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728c50 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10728c53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728c56 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10728c59 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10728c5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728c5f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728c62 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10728c65 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728c68 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728c6b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10728c73 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728c76 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728c79 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10728c84 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728c87 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10728c8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728c8e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10728c91 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10728c94 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728c97 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10728c9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10728c9c jne 0x10728cad */
  if (!C.zf) goto L_10728cad;
  /* 10728c9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728ca1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10728ca4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10728ca7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728caa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10728cad:;
  /* 10728cad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10728cb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728cb5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10728cb7 not edx */
  EDX = (~(EDX));
  /* 10728cb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728cbc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10728cbf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10728cc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728cc4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10728cc7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10728cca:;
  /* 10728cca mov esp, ebp */
  ESP = (EBP);
  /* 10728ccc pop ebp */
  EBP = (pop32());
  /* 10728ccd ret  */
  ESPCHK(0x10728ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cd0 @ 0x10728cd0 (1515 bytes, 489 insns) */
void f_10728cd0(void) {
  FTRACE(0x10728cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10728cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10728cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10728cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728cd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10728cd9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728cdc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10728cde mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10728ce1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728ce4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10728ce7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10728cea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728ced mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10728cf0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728cf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10728cf6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10728cf9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10728cfc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10728cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728d02 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10728d08 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728d0b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10728d12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10728d15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10728d18 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728d1b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10728d1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728d21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10728d23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728d26 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10728d29 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728d2c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728d2f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10728d32 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728d35 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10728d37 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10728d3a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728d3d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728d40 jle 0x10728ff6 */
  if ((C.zf||C.sf!=C.of)) goto L_10728ff6;
  /* 10728d46 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728d49 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10728d4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10728d4e jne 0x10728d5b */
  if (!C.zf) goto L_10728d5b;
  /* 10728d50 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728d53 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728d56 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728d59 jle 0x10728d62 */
  if ((C.zf||C.sf!=C.of)) goto L_10728d62;
L_10728d5b:;
  /* 10728d5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10728d5d jmp 0x107292b7 */
  goto L_107292b7;
L_10728d62:;
  /* 10728d62 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728d65 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10728d68 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728d6b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10728d6e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728d72 jbe 0x10728d7b */
  if ((C.cf||C.zf)) goto L_10728d7b;
  /* 10728d74 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10728d7b:;
  /* 10728d7b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728d7e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728d81 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10728d84 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728d87 jne 0x10728e5d */
  if (!C.zf) goto L_10728e5d;
  /* 10728d8d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728d91 jae 0x10728df2 */
  if (!C.cf) goto L_10728df2;
  /* 10728d93 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10728d98 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728d9b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10728d9d not edx */
  EDX = (~(EDX));
  /* 10728d9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728da2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728da5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10728da9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10728dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728dae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728db1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10728db5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728db8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728dbb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10728dbe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10728dc1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728dc4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728dc7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10728dca mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728dcd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728dd0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10728dd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10728dd6 jne 0x10728df0 */
  if (!C.zf) goto L_10728df0;
  /* 10728dd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10728ddd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728de0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10728de2 not edx */
  EDX = (~(EDX));
  /* 10728de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728de7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10728de9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10728deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728dee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10728df0:;
  /* 10728df0 jmp 0x10728e5d */
  goto L_10728e5d;
L_10728df2:;
  /* 10728df2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728df5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728df8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10728dfd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10728dff not eax */
  EAX = (~(EAX));
  /* 10728e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728e04 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728e07 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10728e0e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10728e10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728e13 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728e16 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10728e1d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728e20 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728e23 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10728e26 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10728e29 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728e2c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728e2f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10728e32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728e35 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728e38 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10728e3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10728e3e jne 0x10728e5d */
  if (!C.zf) goto L_10728e5d;
  /* 10728e40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728e43 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728e46 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10728e4b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10728e4d not eax */
  EAX = (~(EAX));
  /* 10728e4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728e52 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10728e55 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10728e57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728e5a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10728e5d:;
  /* 10728e5d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728e60 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10728e63 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728e66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10728e69 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10728e6c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728e6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10728e72 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728e75 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10728e78 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10728e7b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10728e7e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728e81 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728e84 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10728e87 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728e8b jle 0x10728fd7 */
  if ((C.zf||C.sf!=C.of)) goto L_10728fd7;
  /* 10728e91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728e94 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728e97 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10728e9a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728e9d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10728ea0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728ea3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10728ea6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728eaa jbe 0x10728eb3 */
  if ((C.cf||C.zf)) goto L_10728eb3;
  /* 10728eac mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10728eb3:;
  /* 10728eb3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728eb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10728eb9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10728ebc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10728ebf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728ec2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728ec5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10728ec8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10728ecb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728ece mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728ed1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10728ed4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10728ed7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728eda mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10728edd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728ee0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10728ee3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728ee6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10728ee9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728eec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728eef mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10728ef2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728ef5 jne 0x10728fc3 */
  if (!C.zf) goto L_10728fc3;
  /* 10728efb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728eff jae 0x10728f5c */
  if (!C.cf) goto L_10728f5c;
  /* 10728f01 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728f04 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728f07 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10728f0b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728f0e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728f11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10728f14 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10728f17 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728f1a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728f1d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10728f20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10728f22 jne 0x10728f3a */
  if (!C.zf) goto L_10728f3a;
  /* 10728f24 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10728f29 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728f2c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10728f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728f31 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10728f33 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10728f35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728f38 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10728f3a:;
  /* 10728f3a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10728f3f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728f42 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10728f44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728f47 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728f4a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10728f4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10728f50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728f53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728f56 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10728f5a jmp 0x10728fc3 */
  goto L_10728fc3;
L_10728f5c:;
  /* 10728f5c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728f5f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728f62 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10728f66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728f69 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728f6c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10728f6f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10728f72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728f75 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728f78 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10728f7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10728f7d jne 0x10728f9a */
  if (!C.zf) goto L_10728f9a;
  /* 10728f7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728f82 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728f85 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10728f8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10728f8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728f8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10728f92 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10728f94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10728f97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10728f9a:;
  /* 10728f9a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10728f9d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10728fa0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10728fa5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10728fa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728faa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728fad mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10728fb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10728fb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10728fb9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10728fbc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10728fc3:;
  /* 10728fc3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728fc6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728fc9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10728fcb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10728fce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728fd1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10728fd4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10728fd7:;
  /* 10728fd7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728fda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728fdd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728fe0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10728fe2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728fe5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728fe8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10728feb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10728fee mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10728ff1 jmp 0x107292b2 */
  goto L_107292b2;
L_10728ff6:;
  /* 10728ff6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10728ff9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10728ffc jge 0x107292b2 */
  if ((C.sf==C.of)) goto L_107292b2;
  /* 10729002 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10729005 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729008 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072900b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1072900d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10729010 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729013 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10729016 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729019 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1072901c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072901f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729022 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10729025 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10729028 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072902b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1072902e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10729031 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10729034 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729037 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1072903a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072903e jbe 0x10729047 */
  if ((C.cf||C.zf)) goto L_10729047;
  /* 10729040 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10729047:;
  /* 10729047 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072904a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1072904d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072904f jne 0x10729190 */
  if (!C.zf) goto L_10729190;
  /* 10729055 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10729058 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1072905b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072905e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10729061 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729065 jbe 0x1072906e */
  if ((C.cf||C.zf)) goto L_1072906e;
  /* 10729067 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1072906e:;
  /* 1072906e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10729071 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10729074 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10729077 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072907a jne 0x10729150 */
  if (!C.zf) goto L_10729150;
  /* 10729080 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729084 jae 0x107290e5 */
  if (!C.cf) goto L_107290e5;
  /* 10729086 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1072908b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072908e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10729090 not edx */
  EDX = (~(EDX));
  /* 10729092 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729095 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729098 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1072909c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1072909e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107290a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107290a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 107290a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107290ab add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107290ae mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107290b1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107290b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107290b7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107290ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 107290bd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107290c0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107290c3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107290c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107290c9 jne 0x107290e3 */
  if (!C.zf) goto L_107290e3;
  /* 107290cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107290d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107290d3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107290d5 not edx */
  EDX = (~(EDX));
  /* 107290d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107290da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107290dc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107290de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107290e1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107290e3:;
  /* 107290e3 jmp 0x10729150 */
  goto L_10729150;
L_107290e5:;
  /* 107290e5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107290e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107290eb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107290f0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107290f2 not eax */
  EAX = (~(EAX));
  /* 107290f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107290f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107290fa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10729101 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10729103 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729106 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729109 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10729110 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729113 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729116 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10729119 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1072911c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072911f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729122 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10729125 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729128 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072912b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1072912f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10729131 jne 0x10729150 */
  if (!C.zf) goto L_10729150;
  /* 10729133 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10729136 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729139 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1072913e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10729140 not eax */
  EAX = (~(EAX));
  /* 10729142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729145 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10729148 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1072914a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072914d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10729150:;
  /* 10729150 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10729153 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10729156 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10729159 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1072915c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1072915f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10729162 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10729165 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10729168 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1072916b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1072916e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10729171 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729174 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10729177 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072917a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1072917d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729180 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10729183 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729187 jbe 0x10729190 */
  if ((C.cf||C.zf)) goto L_10729190;
  /* 10729189 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10729190:;
  /* 10729190 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729193 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10729196 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10729199 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1072919c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072919f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107291a2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107291a5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 107291a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107291ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107291ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 107291b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107291b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107291b7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 107291ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107291bd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107291c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107291c3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107291c6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107291c9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107291cc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107291cf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107291d2 jne 0x1072929e */
  if (!C.zf) goto L_1072929e;
  /* 107291d8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107291dc jae 0x10729238 */
  if (!C.cf) goto L_10729238;
  /* 107291de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107291e1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107291e4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107291e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107291eb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107291ee mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107291f1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107291f3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107291f6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107291f9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107291fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107291fe jne 0x10729216 */
  if (!C.zf) goto L_10729216;
  /* 10729200 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10729205 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729208 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1072920a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072920d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072920f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10729211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729214 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10729216:;
  /* 10729216 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1072921b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072921e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10729220 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729223 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729226 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1072922a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1072922c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072922f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729232 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10729236 jmp 0x1072929e */
  goto L_1072929e;
L_10729238:;
  /* 10729238 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072923b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072923e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10729242 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729245 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729248 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1072924b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1072924d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729250 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729253 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10729256 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10729258 jne 0x10729275 */
  if (!C.zf) goto L_10729275;
  /* 1072925a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072925d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729260 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10729265 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10729267 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072926a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072926d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1072926f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729272 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10729275:;
  /* 10729275 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729278 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072927b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10729280 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10729282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729285 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729288 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1072928f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10729291 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729294 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10729297 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1072929e:;
  /* 1072929e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 107292a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107292a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 107292a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 107292a9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107292ac mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107292af mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_107292b2:;
  /* 107292b2 mov eax, 1 */
  EAX = (0x1u);
L_107292b7:;
  /* 107292b7 mov esp, ebp */
  ESP = (EBP);
  /* 107292b9 pop ebp */
  EBP = (pop32());
  /* 107292ba ret  */
  ESPCHK(0x10728cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100092c0 @ 0x107292c0 (304 bytes, 79 insns) */
void f_107292c0(void) {
  FTRACE(0x107292c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107292c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107292c1 mov ebp, esp */
  EBP = (ESP);
  /* 107292c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107292c4 cmp dword ptr [0x10750ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10750ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107292cb je 0x107293ec */
  if (C.zf) goto L_107293ec;
  /* 107292d1 mov eax, dword ptr [0x10750e98] */
  EAX = (r32((uint32_t)(0x10750e98)));
  /* 107292d6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 107292d9 mov ecx, dword ptr [0x10750ea0] */
  ECX = (r32((uint32_t)(0x10750ea0)));
  /* 107292df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107292e2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107292e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107292e7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 107292ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107292f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107292f4 push eax */
  push32((uint32_t)(EAX));
  /* 107292f5 call dword ptr [0x10752378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752378))), 0x107292fbu);
  /* 107292fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10729300 mov ecx, dword ptr [0x10750e98] */
  ECX = (r32((uint32_t)(0x10750e98)));
  /* 10729306 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10729308 mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 1072930d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10729310 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10729312 mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 10729318 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1072931b mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 10729320 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10729323 mov edx, dword ptr [0x10750e98] */
  EDX = (r32((uint32_t)(0x10750e98)));
  /* 10729329 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10729334 mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 10729339 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1072933c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1072933f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10729342 mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 10729347 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1072934a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1072934d mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 10729353 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10729356 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1072935a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072935c jne 0x10729372 */
  if (!C.zf) goto L_10729372;
  /* 1072935e mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 10729364 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10729367 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10729369 mov ecx, dword ptr [0x10750ea0] */
  ECX = (r32((uint32_t)(0x10750ea0)));
  /* 1072936f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10729372:;
  /* 10729372 mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 10729378 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072937c jne 0x107293e2 */
  if (!C.zf) goto L_107293e2;
  /* 1072937e cmp dword ptr [0x10750ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10750ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729385 jle 0x107293e2 */
  if ((C.zf||C.sf!=C.of)) goto L_107293e2;
  /* 10729387 mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 1072938c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1072938f push ecx */
  push32((uint32_t)(ECX));
  /* 10729390 push 0 */
  push32((uint32_t)(0x0u));
  /* 10729392 mov edx, dword ptr [0x10750eac] */
  EDX = (r32((uint32_t)(0x10750eac)));
  /* 10729398 push edx */
  push32((uint32_t)(EDX));
  /* 10729399 call dword ptr [0x1075237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075237c))), 0x1072939fu);
  /* 1072939f mov eax, dword ptr [0x10750ea4] */
  EAX = (r32((uint32_t)(0x10750ea4)));
  /* 107293a4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107293a7 mov ecx, dword ptr [0x10750ea8] */
  ECX = (r32((uint32_t)(0x10750ea8)));
  /* 107293ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107293af mov edx, dword ptr [0x10750ea0] */
  EDX = (r32((uint32_t)(0x10750ea0)));
  /* 107293b5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107293b8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107293ba push ecx */
  push32((uint32_t)(ECX));
  /* 107293bb mov eax, dword ptr [0x10750ea0] */
  EAX = (r32((uint32_t)(0x10750ea0)));
  /* 107293c0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107293c3 push eax */
  push32((uint32_t)(EAX));
  /* 107293c4 mov ecx, dword ptr [0x10750ea0] */
  ECX = (r32((uint32_t)(0x10750ea0)));
  /* 107293ca push ecx */
  push32((uint32_t)(ECX));
  /* 107293cb call 0x1072b9f0 */
  push32(0x107293d0u); f_1072b9f0();
  /* 107293d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107293d3 mov edx, dword ptr [0x10750ea4] */
  EDX = (r32((uint32_t)(0x10750ea4)));
  /* 107293d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107293dc mov dword ptr [0x10750ea4], edx */
  w32((uint32_t)(0x10750ea4), (EDX));
L_107293e2:;
  /* 107293e2 mov dword ptr [0x10750ea0], 0 */
  w32((uint32_t)(0x10750ea0), (0x0u));
L_107293ec:;
  /* 107293ec mov esp, ebp */
  ESP = (EBP);
  /* 107293ee pop ebp */
  EBP = (pop32());
  /* 107293ef ret  */
  ESPCHK(0x107292c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093f0 @ 0x107293f0 (1565 bytes, 343 insns) */
void f_107293f0(void) {
  FTRACE(0x107293f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107293f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107293f1 mov ebp, esp */
  EBP = (ESP);
  /* 107293f3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107293f9 mov eax, dword ptr [0x10750ea4] */
  EAX = (r32((uint32_t)(0x10750ea4)));
  /* 107293fe imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10729401 push eax */
  push32((uint32_t)(EAX));
  /* 10729402 mov ecx, dword ptr [0x10750ea8] */
  ECX = (r32((uint32_t)(0x10750ea8)));
  /* 10729408 push ecx */
  push32((uint32_t)(ECX));
  /* 10729409 call dword ptr [0x10752364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752364))), 0x1072940fu);
  /* 1072940f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10729411 je 0x1072941b */
  if (C.zf) goto L_1072941b;
  /* 10729413 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10729416 jmp 0x10729a09 */
  goto L_10729a09;
L_1072941b:;
  /* 1072941b mov edx, dword ptr [0x10750ea8] */
  EDX = (r32((uint32_t)(0x10750ea8)));
  /* 10729421 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10729427 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10729431 jmp 0x10729442 */
  goto L_10729442;
L_10729433:;
  /* 10729433 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10729439 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072943c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10729442:;
  /* 10729442 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10729448 cmp ecx, dword ptr [0x10750ea4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10750ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072944e jge 0x10729a07 */
  if ((C.sf==C.of)) goto L_10729a07;
  /* 10729454 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1072945a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1072945d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10729463 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10729468 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1072946e push ecx */
  push32((uint32_t)(ECX));
  /* 1072946f call dword ptr [0x10752364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752364))), 0x10729475u);
  /* 10729475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10729477 je 0x10729483 */
  if (C.zf) goto L_10729483;
  /* 10729479 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1072947e jmp 0x10729a09 */
  goto L_10729a09;
L_10729483:;
  /* 10729483 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10729489 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1072948c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10729492 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10729498 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072949e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107294a1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107294a7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 107294aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107294ad mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 107294b7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 107294c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 107294c8 jmp 0x107294d3 */
  goto L_107294d3;
L_107294ca:;
  /* 107294ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107294cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107294d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_107294d3:;
  /* 107294d3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107294d7 jge 0x107299cb */
  if ((C.sf==C.of)) goto L_107299cb;
  /* 107294dd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 107294e7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 107294f1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 107294fb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10729505 jmp 0x10729516 */
  goto L_10729516;
L_10729507:;
  /* 10729507 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1072950d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729510 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10729516:;
  /* 10729516 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072951d jge 0x10729532 */
  if ((C.sf==C.of)) goto L_10729532;
  /* 1072951f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10729525 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10729530 jmp 0x10729507 */
  goto L_10729507;
L_10729532:;
  /* 10729532 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729536 jl 0x1072996d */
  if ((C.sf!=C.of)) goto L_1072996d;
  /* 1072953c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10729541 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10729547 push ecx */
  push32((uint32_t)(ECX));
  /* 10729548 call dword ptr [0x10752364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752364))), 0x1072954eu);
  /* 1072954e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10729550 je 0x1072955c */
  if (C.zf) goto L_1072955c;
  /* 10729552 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10729557 jmp 0x10729a09 */
  goto L_10729a09;
L_1072955c:;
  /* 1072955c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10729562 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10729565 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1072956f jmp 0x10729580 */
  goto L_10729580;
L_10729571:;
  /* 10729571 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10729577 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072957a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10729580:;
  /* 10729580 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729587 jge 0x10729704 */
  if ((C.sf==C.of)) goto L_10729704;
  /* 1072958d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10729590 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729593 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10729599 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1072959f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107295a5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 107295ab mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 107295b1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107295b5 jne 0x107295c2 */
  if (!C.zf) goto L_107295c2;
  /* 107295b7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 107295bd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107295c0 je 0x107295cc */
  if (C.zf) goto L_107295cc;
L_107295c2:;
  /* 107295c2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 107295c7 jmp 0x10729a09 */
  goto L_10729a09;
L_107295cc:;
  /* 107295cc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 107295d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107295d4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 107295da mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 107295e0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 107295e6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 107295ec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 107295ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107295f1 je 0x10729629 */
  if (C.zf) goto L_10729629;
  /* 107295f3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 107295f9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107295fc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10729602 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072960c jle 0x10729618 */
  if ((C.zf||C.sf!=C.of)) goto L_10729618;
  /* 1072960e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10729613 jmp 0x10729a09 */
  goto L_10729a09;
L_10729618:;
  /* 10729618 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1072961e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729621 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10729627 jmp 0x1072966b */
  goto L_1072966b;
L_10729629:;
  /* 10729629 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1072962f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10729632 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729635 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1072963b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729642 jle 0x1072964e */
  if ((C.zf||C.sf!=C.of)) goto L_1072964e;
  /* 10729644 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1072964e:;
  /* 1072964e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10729654 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1072965b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072965e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10729664 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1072966b:;
  /* 1072966b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729672 jl 0x1072968d */
  if ((C.sf!=C.of)) goto L_1072968d;
  /* 10729674 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1072967a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1072967d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072967f jne 0x1072968d */
  if (!C.zf) goto L_1072968d;
  /* 10729681 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072968b jle 0x10729697 */
  if ((C.zf||C.sf!=C.of)) goto L_10729697;
L_1072968d:;
  /* 1072968d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10729692 jmp 0x10729a09 */
  goto L_10729a09;
L_10729697:;
  /* 10729697 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1072969d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107296a3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 107296a6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107296ac je 0x107296b8 */
  if (C.zf) goto L_107296b8;
  /* 107296ae mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 107296b3 jmp 0x10729a09 */
  goto L_10729a09;
L_107296b8:;
  /* 107296b8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 107296be add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107296c4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 107296ca mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 107296d0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107296d6 jb 0x107295cc */
  if (C.cf) goto L_107295cc;
  /* 107296dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 107296e2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107296e8 je 0x107296f4 */
  if (C.zf) goto L_107296f4;
  /* 107296ea mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 107296ef jmp 0x10729a09 */
  goto L_10729a09;
L_107296f4:;
  /* 107296f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107296f7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107296fc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107296ff jmp 0x10729571 */
  goto L_10729571;
L_10729704:;
  /* 10729704 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10729707 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10729709 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072970f je 0x1072971b */
  if (C.zf) goto L_1072971b;
  /* 10729711 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10729716 jmp 0x10729a09 */
  goto L_10729a09;
L_1072971b:;
  /* 1072971b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072971e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10729724 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1072972b jmp 0x10729736 */
  goto L_10729736;
L_1072972d:;
  /* 1072972d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10729730 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729733 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10729736:;
  /* 10729736 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072973a jge 0x1072996d */
  if ((C.sf==C.of)) goto L_1072996d;
  /* 10729740 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1072974a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10729750 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10729756:;
  /* 10729756 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1072975c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1072975f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10729765 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1072976b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729771 je 0x1072989a */
  if (C.zf) goto L_1072989a;
  /* 10729777 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072977a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10729780 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729787 je 0x1072989a */
  if (C.zf) goto L_1072989a;
  /* 1072978d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10729793 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729799 jb 0x107297ae */
  if (C.cf) goto L_107297ae;
  /* 1072979b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 107297a1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107297a6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107297ac jb 0x107297b8 */
  if (C.cf) goto L_107297b8;
L_107297ae:;
  /* 107297ae mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 107297b3 jmp 0x10729a09 */
  goto L_10729a09;
L_107297b8:;
  /* 107297b8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 107297be and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 107297c4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 107297ca mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 107297d0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107297d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 107297d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107297d9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107297de mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_107297e4:;
  /* 107297e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107297e7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107297ed je 0x1072980e */
  if (C.zf) goto L_1072980e;
  /* 107297ef mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107297f2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107297f8 jne 0x107297fc */
  if (!C.zf) goto L_107297fc;
  /* 107297fa jmp 0x1072980e */
  goto L_1072980e;
L_107297fc:;
  /* 107297fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107297ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10729801 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10729804 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10729807 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729809 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1072980c jmp 0x107297e4 */
  goto L_107297e4;
L_1072980e:;
  /* 1072980e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10729811 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729817 jne 0x10729823 */
  if (!C.zf) goto L_10729823;
  /* 10729819 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1072981e jmp 0x10729a09 */
  goto L_10729a09;
L_10729823:;
  /* 10729823 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10729829 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072982b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1072982e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729831 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10729837 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072983e jle 0x1072984a */
  if ((C.zf||C.sf!=C.of)) goto L_1072984a;
  /* 10729840 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1072984a:;
  /* 1072984a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10729850 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729853 je 0x1072985f */
  if (C.zf) goto L_1072985f;
  /* 10729855 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1072985a jmp 0x10729a09 */
  goto L_10729a09;
L_1072985f:;
  /* 1072985f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10729865 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10729868 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072986e je 0x1072987a */
  if (C.zf) goto L_1072987a;
  /* 10729870 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10729875 jmp 0x10729a09 */
  goto L_10729a09;
L_1072987a:;
  /* 1072987a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10729880 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10729886 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1072988c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072988f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10729895 jmp 0x10729756 */
  goto L_10729756;
L_1072989a:;
  /* 1072989a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107298a1 je 0x10729911 */
  if (C.zf) goto L_10729911;
  /* 107298a3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107298a7 jge 0x107298db */
  if ((C.sf==C.of)) goto L_107298db;
  /* 107298a9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107298ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107298b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107298b3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 107298b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107298bb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 107298c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107298c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107298c9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107298cb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 107298d1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107298d3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 107298d9 jmp 0x10729911 */
  goto L_10729911;
L_107298db:;
  /* 107298db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107298de sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107298e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107298e6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107298e8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 107298ee or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107298f0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 107298f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107298f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107298fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10729901 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10729903 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10729909 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1072990b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10729911:;
  /* 10729911 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10729917 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072991a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729920 jne 0x10729934 */
  if (!C.zf) goto L_10729934;
  /* 10729922 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10729925 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1072992b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729932 je 0x1072993e */
  if (C.zf) goto L_1072993e;
L_10729934:;
  /* 10729934 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10729939 jmp 0x10729a09 */
  goto L_10729a09;
L_1072993e:;
  /* 1072993e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10729944 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10729947 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072994d je 0x10729959 */
  if (C.zf) goto L_10729959;
  /* 1072994f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10729954 jmp 0x10729a09 */
  goto L_10729a09;
L_10729959:;
  /* 10729959 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1072995f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729962 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10729968 jmp 0x1072972d */
  goto L_1072972d;
L_1072996d:;
  /* 1072996d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729970 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10729976 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1072997c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729980 jne 0x1072999a */
  if (!C.zf) goto L_1072999a;
  /* 10729982 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729985 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1072998b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10729991 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729998 je 0x107299a1 */
  if (C.zf) goto L_107299a1;
L_1072999a:;
  /* 1072999a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1072999f jmp 0x10729a09 */
  goto L_10729a09;
L_107299a1:;
  /* 107299a1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 107299a7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107299ad mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 107299b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107299b6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107299bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107299be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107299c1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 107299c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107299c6 jmp 0x107294ca */
  goto L_107294ca;
L_107299cb:;
  /* 107299cb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107299d1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 107299d7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107299d9 jne 0x107299ec */
  if (!C.zf) goto L_107299ec;
  /* 107299db mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107299e1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 107299e7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107299ea je 0x107299f3 */
  if (C.zf) goto L_107299f3;
L_107299ec:;
  /* 107299ec mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 107299f1 jmp 0x10729a09 */
  goto L_10729a09;
L_107299f3:;
  /* 107299f3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 107299f9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107299fc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10729a02 jmp 0x10729433 */
  goto L_10729433;
L_10729a07:;
  /* 10729a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10729a09:;
  /* 10729a09 mov esp, ebp */
  ESP = (EBP);
  /* 10729a0b pop ebp */
  EBP = (pop32());
  /* 10729a0c ret  */
  ESPCHK(0x107293f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a10 @ 0x10729a10 (250 bytes, 92 insns) */
void f_10729a10(void) {
  FTRACE(0x10729a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10729a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10729a11 mov ebp, esp */
  EBP = (ESP);
  /* 10729a13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729a16 push ebx */
  push32((uint32_t)(EBX));
  /* 10729a17 push esi */
  push32((uint32_t)(ESI));
  /* 10729a18 push edi */
  push32((uint32_t)(EDI));
  /* 10729a19 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10729a1c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10729a1f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10729a22 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10729a25:;
  /* 10729a25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729a29 jne 0x10729a49 */
  if (!C.zf) goto L_10729a49;
  /* 10729a2b push 0x1074af18 */
  push32((uint32_t)(0x1074af18u));
  /* 10729a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10729a32 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10729a34 push 0x1074af0c */
  push32((uint32_t)(0x1074af0cu));
  /* 10729a39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10729a3b call 0x10722bc0 */
  push32(0x10729a40u); f_10722bc0();
  /* 10729a40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729a43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729a46 jne 0x10729a49 */
  if (!C.zf) goto L_10729a49;
  /* 10729a48 int3  */
  x86_unimpl("int3 @ 0x10729a48");
L_10729a49:;
  /* 10729a49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10729a4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10729a4d jne 0x10729a25 */
  if (!C.zf) goto L_10729a25;
L_10729a4f:;
  /* 10729a4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729a53 jne 0x10729a73 */
  if (!C.zf) goto L_10729a73;
  /* 10729a55 push 0x1074aefc */
  push32((uint32_t)(0x1074aefcu));
  /* 10729a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10729a5c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10729a5e push 0x1074af0c */
  push32((uint32_t)(0x1074af0cu));
  /* 10729a63 push 2 */
  push32((uint32_t)(0x2u));
  /* 10729a65 call 0x10722bc0 */
  push32(0x10729a6au); f_10722bc0();
  /* 10729a6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729a6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729a70 jne 0x10729a73 */
  if (!C.zf) goto L_10729a73;
  /* 10729a72 int3  */
  x86_unimpl("int3 @ 0x10729a72");
L_10729a73:;
  /* 10729a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10729a77 jne 0x10729a4f */
  if (!C.zf) goto L_10729a4f;
  /* 10729a79 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729a7c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10729a83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729a86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729a89 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10729a8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729a8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729a92 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10729a94 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729a97 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10729a9e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10729aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10729aa2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10729aa5 push edx */
  push32((uint32_t)(EDX));
  /* 10729aa6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729aa9 push eax */
  push32((uint32_t)(EAX));
  /* 10729aaa call 0x1072aa90 */
  push32(0x10729aafu); f_1072aa90();
  /* 10729aaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729ab2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10729ab5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729ab8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10729abb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729abe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729ac1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10729ac4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729ac7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729acb jl 0x10729aef */
  if ((C.sf!=C.of)) goto L_10729aef;
  /* 10729acd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729ad0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10729ad2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10729ad5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10729ad7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10729add mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10729ae0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729ae3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10729ae5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729ae8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729aeb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10729aed jmp 0x10729b00 */
  goto L_10729b00;
L_10729aef:;
  /* 10729aef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729af2 push edx */
  push32((uint32_t)(EDX));
  /* 10729af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10729af5 call 0x1072a810 */
  push32(0x10729afau); f_1072a810();
  /* 10729afa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729afd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10729b00:;
  /* 10729b00 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10729b03 pop edi */
  EDI = (pop32());
  /* 10729b04 pop esi */
  ESI = (pop32());
  /* 10729b05 pop ebx */
  EBX = (pop32());
  /* 10729b06 mov esp, ebp */
  ESP = (EBP);
  /* 10729b08 pop ebp */
  EBP = (pop32());
  /* 10729b09 ret  */
  ESPCHK(0x10729a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x10729b10 (183 bytes, 58 insns) */
void f_10729b10(void) {
  FTRACE(0x10729b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10729b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10729b11 mov ebp, esp */
  EBP = (ESP);
  /* 10729b13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729b19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729b1c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729b21 ja 0x10729b3a */
  if ((!C.cf&&!C.zf)) goto L_10729b3a;
  /* 10729b23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729b26 mov edx, dword ptr [0x1074dc98] */
  EDX = (r32((uint32_t)(0x1074dc98)));
  /* 10729b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729b2e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10729b32 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10729b35 jmp 0x10729bc3 */
  goto L_10729bc3;
L_10729b3a:;
  /* 10729b3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729b3d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10729b40 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10729b46 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10729b4c mov edx, dword ptr [0x1074dc98] */
  EDX = (r32((uint32_t)(0x1074dc98)));
  /* 10729b52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729b54 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10729b58 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10729b5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10729b5f je 0x10729b83 */
  if (C.zf) goto L_10729b83;
  /* 10729b61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729b64 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10729b67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10729b6d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10729b70 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10729b73 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10729b76 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10729b7a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10729b81 jmp 0x10729b94 */
  goto L_10729b94;
L_10729b83:;
  /* 10729b83 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10729b86 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10729b89 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10729b8d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10729b94:;
  /* 10729b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10729b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10729b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10729b9a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10729b9d push ecx */
  push32((uint32_t)(ECX));
  /* 10729b9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10729ba1 push edx */
  push32((uint32_t)(EDX));
  /* 10729ba2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10729ba5 push eax */
  push32((uint32_t)(EAX));
  /* 10729ba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10729ba8 call 0x1072bd30 */
  push32(0x10729badu); f_1072bd30();
  /* 10729bad add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10729bb2 jne 0x10729bb8 */
  if (!C.zf) goto L_10729bb8;
  /* 10729bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729bb6 jmp 0x10729bc3 */
  goto L_10729bc3;
L_10729bb8:;
  /* 10729bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729bbb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10729bc0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10729bc3:;
  /* 10729bc3 mov esp, ebp */
  ESP = (EBP);
  /* 10729bc5 pop ebp */
  EBP = (pop32());
  /* 10729bc6 ret  */
  ESPCHK(0x10729b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x10729bd0 (836 bytes, 238 insns) */
void f_10729bd0(void) {
  FTRACE(0x10729bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10729bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10729bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10729bd3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729bd6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10729bd8 call 0x10727500 */
  push32(0x10729bddu); f_10727500();
  /* 10729bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729be3 push eax */
  push32((uint32_t)(EAX));
  /* 10729be4 call 0x10729f20 */
  push32(0x10729be9u); f_10729f20();
  /* 10729be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729bec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10729bef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729bf2 cmp ecx, dword ptr [0x10750be4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10750be4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729bf8 jne 0x10729c0b */
  if (!C.zf) goto L_10729c0b;
  /* 10729bfa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10729bfc call 0x107275a0 */
  push32(0x10729c01u); f_107275a0();
  /* 10729c01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729c04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729c06 jmp 0x10729f10 */
  goto L_10729f10;
L_10729c0b:;
  /* 10729c0b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729c0f jne 0x10729c2c */
  if (!C.zf) goto L_10729c2c;
  /* 10729c11 call 0x1072a000 */
  push32(0x10729c16u); f_1072a000();
  /* 10729c16 call 0x1072a080 */
  push32(0x10729c1bu); f_1072a080();
  /* 10729c1b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10729c1d call 0x107275a0 */
  push32(0x10729c22u); f_107275a0();
  /* 10729c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729c25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729c27 jmp 0x10729f10 */
  goto L_10729f10;
L_10729c2c:;
  /* 10729c2c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10729c33 jmp 0x10729c3e */
  goto L_10729c3e;
L_10729c35:;
  /* 10729c35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729c38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729c3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10729c3e:;
  /* 10729c3e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729c42 jae 0x10729d8f */
  if (!C.cf) goto L_10729d8f;
  /* 10729c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729c4b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10729c4e mov ecx, dword ptr [eax + 0x1074deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1074deb8)));
  /* 10729c54 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729c57 jne 0x10729d8a */
  if (!C.zf) goto L_10729d8a;
  /* 10729c5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10729c64 jmp 0x10729c6f */
  goto L_10729c6f;
L_10729c66:;
  /* 10729c66 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729c69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729c6c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10729c6f:;
  /* 10729c6f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729c76 jae 0x10729c84 */
  if (!C.cf) goto L_10729c84;
  /* 10729c78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729c7b mov byte ptr [eax + 0x10750d80], 0 */
  w8((uint32_t)(EAX + 0x10750d80), (0x0u));
  /* 10729c82 jmp 0x10729c66 */
  goto L_10729c66;
L_10729c84:;
  /* 10729c84 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10729c8b jmp 0x10729c96 */
  goto L_10729c96;
L_10729c8d:;
  /* 10729c8d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729c90 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729c93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10729c96:;
  /* 10729c96 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729c9a jae 0x10729d17 */
  if (!C.cf) goto L_10729d17;
  /* 10729c9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729c9f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10729ca2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729ca5 lea ecx, [edx + eax*8 + 0x1074dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1074dec8));
  /* 10729cac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10729caf jmp 0x10729cba */
  goto L_10729cba;
L_10729cb1:;
  /* 10729cb1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10729cb4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729cb7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10729cba:;
  /* 10729cba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10729cbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10729cbf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10729cc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10729cc3 je 0x10729d12 */
  if (C.zf) goto L_10729d12;
  /* 10729cc5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10729cc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729cca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10729ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10729ccf je 0x10729d12 */
  if (C.zf) goto L_10729d12;
  /* 10729cd1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10729cd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10729cd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10729cd8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10729cdb jmp 0x10729ce6 */
  goto L_10729ce6;
L_10729cdd:;
  /* 10729cdd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729ce0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729ce3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10729ce6:;
  /* 10729ce6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10729ce9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10729ceb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10729cee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729cf1 ja 0x10729d10 */
  if ((!C.cf&&!C.zf)) goto L_10729d10;
  /* 10729cf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729cf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729cf9 mov dl, byte ptr [eax + 0x10750d81] */
  DL = (r8((uint32_t)(EAX + 0x10750d81)));
  /* 10729cff or dl, byte ptr [ecx + 0x1074deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1074deb0))); DL = (_r); fl_logic(_r,8); }
  /* 10729d05 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729d08 mov byte ptr [eax + 0x10750d81], dl */
  w8((uint32_t)(EAX + 0x10750d81), (DL));
  /* 10729d0e jmp 0x10729cdd */
  goto L_10729cdd;
L_10729d10:;
  /* 10729d10 jmp 0x10729cb1 */
  goto L_10729cb1;
L_10729d12:;
  /* 10729d12 jmp 0x10729c8d */
  goto L_10729c8d;
L_10729d17:;
  /* 10729d17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729d1a mov dword ptr [0x10750be4], ecx */
  w32((uint32_t)(0x10750be4), (ECX));
  /* 10729d20 mov dword ptr [0x10750c6c], 1 */
  w32((uint32_t)(0x10750c6c), (0x1u));
  /* 10729d2a mov edx, dword ptr [0x10750be4] */
  EDX = (r32((uint32_t)(0x10750be4)));
  /* 10729d30 push edx */
  push32((uint32_t)(EDX));
  /* 10729d31 call 0x10729f80 */
  push32(0x10729d36u); f_10729f80();
  /* 10729d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729d39 mov dword ptr [0x10750e84], eax */
  w32((uint32_t)(0x10750e84), (EAX));
  /* 10729d3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10729d45 jmp 0x10729d50 */
  goto L_10729d50;
L_10729d47:;
  /* 10729d47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729d4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729d4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10729d50:;
  /* 10729d50 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729d54 jae 0x10729d74 */
  if (!C.cf) goto L_10729d74;
  /* 10729d56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729d59 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10729d5c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729d5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729d62 mov cx, word ptr [ecx + eax*2 + 0x1074debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1074debc)));
  /* 10729d6a mov word ptr [edx*2 + 0x10750c60], cx */
  w16((uint32_t)(EDX*2 + 0x10750c60), (CX));
  /* 10729d72 jmp 0x10729d47 */
  goto L_10729d47;
L_10729d74:;
  /* 10729d74 call 0x1072a080 */
  push32(0x10729d79u); f_1072a080();
  /* 10729d79 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10729d7b call 0x107275a0 */
  push32(0x10729d80u); f_107275a0();
  /* 10729d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729d85 jmp 0x10729f10 */
  goto L_10729f10;
L_10729d8a:;
  /* 10729d8a jmp 0x10729c35 */
  goto L_10729c35;
L_10729d8f:;
  /* 10729d8f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10729d92 push edx */
  push32((uint32_t)(EDX));
  /* 10729d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729d96 push eax */
  push32((uint32_t)(EAX));
  /* 10729d97 call dword ptr [0x107522e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e4))), 0x10729d9du);
  /* 10729d9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729da0 jne 0x10729ee2 */
  if (!C.zf) goto L_10729ee2;
  /* 10729da6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10729dad jmp 0x10729db8 */
  goto L_10729db8;
L_10729daf:;
  /* 10729daf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729db2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729db5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10729db8:;
  /* 10729db8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729dbf jae 0x10729dcd */
  if (!C.cf) goto L_10729dcd;
  /* 10729dc1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729dc4 mov byte ptr [edx + 0x10750d80], 0 */
  w8((uint32_t)(EDX + 0x10750d80), (0x0u));
  /* 10729dcb jmp 0x10729daf */
  goto L_10729daf;
L_10729dcd:;
  /* 10729dcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729dd0 mov dword ptr [0x10750be4], eax */
  w32((uint32_t)(0x10750be4), (EAX));
  /* 10729dd5 mov dword ptr [0x10750e84], 0 */
  w32((uint32_t)(0x10750e84), (0x0u));
  /* 10729ddf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729de3 jbe 0x10729e9e */
  if ((C.cf||C.zf)) goto L_10729e9e;
  /* 10729de9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10729dec mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10729def jmp 0x10729dfa */
  goto L_10729dfa;
L_10729df1:;
  /* 10729df1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10729df4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729df7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10729dfa:;
  /* 10729dfa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10729dfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10729dff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10729e01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10729e03 je 0x10729e4c */
  if (C.zf) goto L_10729e4c;
  /* 10729e05 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10729e08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729e0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10729e0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10729e0f je 0x10729e4c */
  if (C.zf) goto L_10729e4c;
  /* 10729e11 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10729e14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10729e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10729e18 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10729e1b jmp 0x10729e26 */
  goto L_10729e26;
L_10729e1d:;
  /* 10729e1d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729e20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729e23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10729e26:;
  /* 10729e26 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10729e29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10729e2b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10729e2e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729e31 ja 0x10729e4a */
  if ((!C.cf&&!C.zf)) goto L_10729e4a;
  /* 10729e33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729e36 mov cl, byte ptr [eax + 0x10750d81] */
  CL = (r8((uint32_t)(EAX + 0x10750d81)));
  /* 10729e3c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10729e3f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729e42 mov byte ptr [edx + 0x10750d81], cl */
  w8((uint32_t)(EDX + 0x10750d81), (CL));
  /* 10729e48 jmp 0x10729e1d */
  goto L_10729e1d;
L_10729e4a:;
  /* 10729e4a jmp 0x10729df1 */
  goto L_10729df1;
L_10729e4c:;
  /* 10729e4c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10729e53 jmp 0x10729e5e */
  goto L_10729e5e;
L_10729e55:;
  /* 10729e55 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729e58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729e5b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10729e5e:;
  /* 10729e5e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729e65 jae 0x10729e7e */
  if (!C.cf) goto L_10729e7e;
  /* 10729e67 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729e6a mov dl, byte ptr [ecx + 0x10750d81] */
  DL = (r8((uint32_t)(ECX + 0x10750d81)));
  /* 10729e70 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10729e73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10729e76 mov byte ptr [eax + 0x10750d81], dl */
  w8((uint32_t)(EAX + 0x10750d81), (DL));
  /* 10729e7c jmp 0x10729e55 */
  goto L_10729e55;
L_10729e7e:;
  /* 10729e7e mov ecx, dword ptr [0x10750be4] */
  ECX = (r32((uint32_t)(0x10750be4)));
  /* 10729e84 push ecx */
  push32((uint32_t)(ECX));
  /* 10729e85 call 0x10729f80 */
  push32(0x10729e8au); f_10729f80();
  /* 10729e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729e8d mov dword ptr [0x10750e84], eax */
  w32((uint32_t)(0x10750e84), (EAX));
  /* 10729e92 mov dword ptr [0x10750c6c], 1 */
  w32((uint32_t)(0x10750c6c), (0x1u));
  /* 10729e9c jmp 0x10729ea8 */
  goto L_10729ea8;
L_10729e9e:;
  /* 10729e9e mov dword ptr [0x10750c6c], 0 */
  w32((uint32_t)(0x10750c6c), (0x0u));
L_10729ea8:;
  /* 10729ea8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10729eaf jmp 0x10729eba */
  goto L_10729eba;
L_10729eb1:;
  /* 10729eb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729eb4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10729eb7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10729eba:;
  /* 10729eba cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729ebe jae 0x10729ecf */
  if (!C.cf) goto L_10729ecf;
  /* 10729ec0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10729ec3 mov word ptr [eax*2 + 0x10750c60], 0 */
  w16((uint32_t)(EAX*2 + 0x10750c60), (0x0u));
  /* 10729ecd jmp 0x10729eb1 */
  goto L_10729eb1;
L_10729ecf:;
  /* 10729ecf call 0x1072a080 */
  push32(0x10729ed4u); f_1072a080();
  /* 10729ed4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10729ed6 call 0x107275a0 */
  push32(0x10729edbu); f_107275a0();
  /* 10729edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729ede xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729ee0 jmp 0x10729f10 */
  goto L_10729f10;
L_10729ee2:;
  /* 10729ee2 cmp dword ptr [0x1074f6f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f6f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729ee9 je 0x10729f03 */
  if (C.zf) goto L_10729f03;
  /* 10729eeb call 0x1072a000 */
  push32(0x10729ef0u); f_1072a000();
  /* 10729ef0 call 0x1072a080 */
  push32(0x10729ef5u); f_1072a080();
  /* 10729ef5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10729ef7 call 0x107275a0 */
  push32(0x10729efcu); f_107275a0();
  /* 10729efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10729f01 jmp 0x10729f10 */
  goto L_10729f10;
L_10729f03:;
  /* 10729f03 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10729f05 call 0x107275a0 */
  push32(0x10729f0au); f_107275a0();
  /* 10729f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10729f0d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10729f10:;
  /* 10729f10 mov esp, ebp */
  ESP = (EBP);
  /* 10729f12 pop ebp */
  EBP = (pop32());
  /* 10729f13 ret  */
  ESPCHK(0x10729bd0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10729f20 (89 bytes, 21 insns) */
void f_10729f20(void) {
  FTRACE(0x10729f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10729f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10729f21 mov ebp, esp */
  EBP = (ESP);
  /* 10729f23 mov dword ptr [0x1074f6f0], 0 */
  w32((uint32_t)(0x1074f6f0), (0x0u));
  /* 10729f2d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729f31 jne 0x10729f45 */
  if (!C.zf) goto L_10729f45;
  /* 10729f33 mov dword ptr [0x1074f6f0], 1 */
  w32((uint32_t)(0x1074f6f0), (0x1u));
  /* 10729f3d call dword ptr [0x107522dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522dc))), 0x10729f43u);
  /* 10729f43 jmp 0x10729f77 */
  goto L_10729f77;
L_10729f45:;
  /* 10729f45 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729f49 jne 0x10729f5d */
  if (!C.zf) goto L_10729f5d;
  /* 10729f4b mov dword ptr [0x1074f6f0], 1 */
  w32((uint32_t)(0x1074f6f0), (0x1u));
  /* 10729f55 call dword ptr [0x107522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522ec))), 0x10729f5bu);
  /* 10729f5b jmp 0x10729f77 */
  goto L_10729f77;
L_10729f5d:;
  /* 10729f5d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729f61 jne 0x10729f74 */
  if (!C.zf) goto L_10729f74;
  /* 10729f63 mov dword ptr [0x1074f6f0], 1 */
  w32((uint32_t)(0x1074f6f0), (0x1u));
  /* 10729f6d mov eax, dword ptr [0x1074f710] */
  EAX = (r32((uint32_t)(0x1074f710)));
  /* 10729f72 jmp 0x10729f77 */
  goto L_10729f77;
L_10729f74:;
  /* 10729f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10729f77:;
  /* 10729f77 pop ebp */
  EBP = (pop32());
  /* 10729f78 ret  */
  ESPCHK(0x10729f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f80 @ 0x10729f80 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10729f80(void) {
  FTRACE(0x10729f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10729f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10729f81 mov ebp, esp */
  EBP = (ESP);
  /* 10729f83 push ecx */
  push32((uint32_t)(ECX));
  /* 10729f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10729f87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10729f8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729f8d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10729f93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10729f96 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10729f9a ja 0x10729fca */
  if ((!C.cf&&!C.zf)) goto L_10729fca;
  /* 10729f9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10729f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10729fa1 mov dl, byte ptr [eax + 0x10729fe4] */
  DL = (r8((uint32_t)(EAX + 0x10729fe4)));
  /* 10729fa7 jmp dword ptr [edx*4 + 0x10729fd0] */
  switch (EDX) {
    case 0: goto L_10729fae;
    case 1: goto L_10729fb5;
    case 2: goto L_10729fbc;
    case 3: goto L_10729fc3;
    case 4: goto L_10729fca;
    default: x86_unimpl("switch@0x10729fa7 out of table"); return;
  }
L_10729fae:;
  /* 10729fae mov eax, 0x411 */
  EAX = (0x411u);
  /* 10729fb3 jmp 0x10729fcc */
  goto L_10729fcc;
L_10729fb5:;
  /* 10729fb5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10729fba jmp 0x10729fcc */
  goto L_10729fcc;
L_10729fbc:;
  /* 10729fbc mov eax, 0x412 */
  EAX = (0x412u);
  /* 10729fc1 jmp 0x10729fcc */
  goto L_10729fcc;
L_10729fc3:;
  /* 10729fc3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10729fc8 jmp 0x10729fcc */
  goto L_10729fcc;
L_10729fca:;
  /* 10729fca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10729fcc:;
  /* 10729fcc mov esp, ebp */
  ESP = (EBP);
  /* 10729fce pop ebp */
  EBP = (pop32());
  /* 10729fcf ret  */
  ESPCHK(0x10729f80u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1072a000 (116 bytes, 29 insns) */
void f_1072a000(void) {
  FTRACE(0x1072a000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072a000 push ebp */
  push32((uint32_t)(EBP));
  /* 1072a001 mov ebp, esp */
  EBP = (ESP);
  /* 1072a003 push ecx */
  push32((uint32_t)(ECX));
  /* 1072a004 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072a00b jmp 0x1072a016 */
  goto L_1072a016;
L_1072a00d:;
  /* 1072a00d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a010 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072a016:;
  /* 1072a016 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a01d jge 0x1072a02b */
  if ((C.sf==C.of)) goto L_1072a02b;
  /* 1072a01f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a022 mov byte ptr [ecx + 0x10750d80], 0 */
  w8((uint32_t)(ECX + 0x10750d80), (0x0u));
  /* 1072a029 jmp 0x1072a00d */
  goto L_1072a00d;
L_1072a02b:;
  /* 1072a02b mov dword ptr [0x10750be4], 0 */
  w32((uint32_t)(0x10750be4), (0x0u));
  /* 1072a035 mov dword ptr [0x10750c6c], 0 */
  w32((uint32_t)(0x10750c6c), (0x0u));
  /* 1072a03f mov dword ptr [0x10750e84], 0 */
  w32((uint32_t)(0x10750e84), (0x0u));
  /* 1072a049 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072a050 jmp 0x1072a05b */
  goto L_1072a05b;
L_1072a052:;
  /* 1072a052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a055 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a058 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1072a05b:;
  /* 1072a05b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a05f jge 0x1072a070 */
  if ((C.sf==C.of)) goto L_1072a070;
  /* 1072a061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a064 mov word ptr [eax*2 + 0x10750c60], 0 */
  w16((uint32_t)(EAX*2 + 0x10750c60), (0x0u));
  /* 1072a06e jmp 0x1072a052 */
  goto L_1072a052;
L_1072a070:;
  /* 1072a070 mov esp, ebp */
  ESP = (EBP);
  /* 1072a072 pop ebp */
  EBP = (pop32());
  /* 1072a073 ret  */
  ESPCHK(0x1072a000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a080 @ 0x1072a080 (770 bytes, 175 insns) */
void f_1072a080(void) {
  FTRACE(0x1072a080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072a080 push ebp */
  push32((uint32_t)(EBP));
  /* 1072a081 mov ebp, esp */
  EBP = (ESP);
  /* 1072a083 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a089 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1072a08f push eax */
  push32((uint32_t)(EAX));
  /* 1072a090 mov ecx, dword ptr [0x10750be4] */
  ECX = (r32((uint32_t)(0x10750be4)));
  /* 1072a096 push ecx */
  push32((uint32_t)(ECX));
  /* 1072a097 call dword ptr [0x107522e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e4))), 0x1072a09du);
  /* 1072a09d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a0a0 jne 0x1072a2b9 */
  if (!C.zf) goto L_1072a2b9;
  /* 1072a0a6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1072a0b0 jmp 0x1072a0c1 */
  goto L_1072a0c1;
L_1072a0b2:;
  /* 1072a0b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a0b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a0bb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1072a0c1:;
  /* 1072a0c1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a0cb jae 0x1072a0e2 */
  if (!C.cf) goto L_1072a0e2;
  /* 1072a0cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a0d3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1072a0d9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1072a0e0 jmp 0x1072a0b2 */
  goto L_1072a0b2;
L_1072a0e2:;
  /* 1072a0e2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1072a0e9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1072a0ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072a0f2 jmp 0x1072a0fd */
  goto L_1072a0fd;
L_1072a0f4:;
  /* 1072a0f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a0f7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a0fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072a0fd:;
  /* 1072a0fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a100 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a102 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1072a104 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072a106 je 0x1072a148 */
  if (C.zf) goto L_1072a148;
  /* 1072a108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a10b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072a10d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1072a10f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1072a115 jmp 0x1072a126 */
  goto L_1072a126;
L_1072a117:;
  /* 1072a117 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a11d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a120 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1072a126:;
  /* 1072a126 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a129 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072a12b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1072a12e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a134 ja 0x1072a146 */
  if ((!C.cf&&!C.zf)) goto L_1072a146;
  /* 1072a136 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a13c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1072a144 jmp 0x1072a117 */
  goto L_1072a117;
L_1072a146:;
  /* 1072a146 jmp 0x1072a0f4 */
  goto L_1072a0f4;
L_1072a148:;
  /* 1072a148 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072a14a mov eax, dword ptr [0x10750e84] */
  EAX = (r32((uint32_t)(0x10750e84)));
  /* 1072a14f push eax */
  push32((uint32_t)(EAX));
  /* 1072a150 mov ecx, dword ptr [0x10750be4] */
  ECX = (r32((uint32_t)(0x10750be4)));
  /* 1072a156 push ecx */
  push32((uint32_t)(ECX));
  /* 1072a157 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1072a15d push edx */
  push32((uint32_t)(EDX));
  /* 1072a15e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072a163 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1072a169 push eax */
  push32((uint32_t)(EAX));
  /* 1072a16a push 1 */
  push32((uint32_t)(0x1u));
  /* 1072a16c call 0x1072bd30 */
  push32(0x1072a171u); f_1072bd30();
  /* 1072a171 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a174 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072a176 mov ecx, dword ptr [0x10750be4] */
  ECX = (r32((uint32_t)(0x10750be4)));
  /* 1072a17c push ecx */
  push32((uint32_t)(ECX));
  /* 1072a17d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072a182 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1072a188 push edx */
  push32((uint32_t)(EDX));
  /* 1072a189 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072a18e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1072a194 push eax */
  push32((uint32_t)(EAX));
  /* 1072a195 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072a19a mov ecx, dword ptr [0x10750e84] */
  ECX = (r32((uint32_t)(0x10750e84)));
  /* 1072a1a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1072a1a1 call 0x1072bef0 */
  push32(0x1072a1a6u); f_1072bef0();
  /* 1072a1a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a1a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072a1ab mov edx, dword ptr [0x10750be4] */
  EDX = (r32((uint32_t)(0x10750be4)));
  /* 1072a1b1 push edx */
  push32((uint32_t)(EDX));
  /* 1072a1b2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072a1b7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1072a1bd push eax */
  push32((uint32_t)(EAX));
  /* 1072a1be push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072a1c3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1072a1c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1072a1ca push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1072a1cf mov edx, dword ptr [0x10750e84] */
  EDX = (r32((uint32_t)(0x10750e84)));
  /* 1072a1d5 push edx */
  push32((uint32_t)(EDX));
  /* 1072a1d6 call 0x1072bef0 */
  push32(0x1072a1dbu); f_1072bef0();
  /* 1072a1db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a1de mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1072a1e8 jmp 0x1072a1f9 */
  goto L_1072a1f9;
L_1072a1ea:;
  /* 1072a1ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a1f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a1f3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1072a1f9:;
  /* 1072a1f9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a203 jae 0x1072a2b4 */
  if (!C.cf) goto L_1072a2b4;
  /* 1072a209 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a20f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a211 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1072a219 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1072a21c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072a21e je 0x1072a256 */
  if (C.zf) goto L_1072a256;
  /* 1072a220 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a226 mov cl, byte ptr [eax + 0x10750d81] */
  CL = (r8((uint32_t)(EAX + 0x10750d81)));
  /* 1072a22c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1072a22f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a235 mov byte ptr [edx + 0x10750d81], cl */
  w8((uint32_t)(EDX + 0x10750d81), (CL));
  /* 1072a23b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a241 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a247 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1072a24e mov byte ptr [eax + 0x10750c80], dl */
  w8((uint32_t)(EAX + 0x10750c80), (DL));
  /* 1072a254 jmp 0x1072a2af */
  goto L_1072a2af;
L_1072a256:;
  /* 1072a256 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a25c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072a25e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1072a266 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1072a269 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072a26b je 0x1072a2a2 */
  if (C.zf) goto L_1072a2a2;
  /* 1072a26d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a273 mov al, byte ptr [edx + 0x10750d81] */
  AL = (r8((uint32_t)(EDX + 0x10750d81)));
  /* 1072a279 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1072a27b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a281 mov byte ptr [ecx + 0x10750d81], al */
  w8((uint32_t)(ECX + 0x10750d81), (AL));
  /* 1072a287 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a28d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a293 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1072a29a mov byte ptr [edx + 0x10750c80], cl */
  w8((uint32_t)(EDX + 0x10750c80), (CL));
  /* 1072a2a0 jmp 0x1072a2af */
  goto L_1072a2af;
L_1072a2a2:;
  /* 1072a2a2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a2a8 mov byte ptr [edx + 0x10750c80], 0 */
  w8((uint32_t)(EDX + 0x10750c80), (0x0u));
L_1072a2af:;
  /* 1072a2af jmp 0x1072a1ea */
  goto L_1072a1ea;
L_1072a2b4:;
  /* 1072a2b4 jmp 0x1072a37e */
  goto L_1072a37e;
L_1072a2b9:;
  /* 1072a2b9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1072a2c3 jmp 0x1072a2d4 */
  goto L_1072a2d4;
L_1072a2c5:;
  /* 1072a2c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a2cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a2ce mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1072a2d4:;
  /* 1072a2d4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a2de jae 0x1072a37e */
  if (!C.cf) goto L_1072a37e;
  /* 1072a2e4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a2eb jb 0x1072a328 */
  if (C.cf) goto L_1072a328;
  /* 1072a2ed cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a2f4 ja 0x1072a328 */
  if ((!C.cf&&!C.zf)) goto L_1072a328;
  /* 1072a2f6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a2fc mov dl, byte ptr [ecx + 0x10750d81] */
  DL = (r8((uint32_t)(ECX + 0x10750d81)));
  /* 1072a302 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1072a305 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a30b mov byte ptr [eax + 0x10750d81], dl */
  w8((uint32_t)(EAX + 0x10750d81), (DL));
  /* 1072a311 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a317 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a31a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a320 mov byte ptr [edx + 0x10750c80], cl */
  w8((uint32_t)(EDX + 0x10750c80), (CL));
  /* 1072a326 jmp 0x1072a379 */
  goto L_1072a379;
L_1072a328:;
  /* 1072a328 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a32f jb 0x1072a36c */
  if (C.cf) goto L_1072a36c;
  /* 1072a331 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a338 ja 0x1072a36c */
  if ((!C.cf&&!C.zf)) goto L_1072a36c;
  /* 1072a33a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a340 mov cl, byte ptr [eax + 0x10750d81] */
  CL = (r8((uint32_t)(EAX + 0x10750d81)));
  /* 1072a346 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1072a349 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a34f mov byte ptr [edx + 0x10750d81], cl */
  w8((uint32_t)(EDX + 0x10750d81), (CL));
  /* 1072a355 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a35b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a35e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a364 mov byte ptr [ecx + 0x10750c80], al */
  w8((uint32_t)(ECX + 0x10750c80), (AL));
  /* 1072a36a jmp 0x1072a379 */
  goto L_1072a379;
L_1072a36c:;
  /* 1072a36c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1072a372 mov byte ptr [edx + 0x10750c80], 0 */
  w8((uint32_t)(EDX + 0x10750c80), (0x0u));
L_1072a379:;
  /* 1072a379 jmp 0x1072a2c5 */
  goto L_1072a2c5;
L_1072a37e:;
  /* 1072a37e mov esp, ebp */
  ESP = (EBP);
  /* 1072a380 pop ebp */
  EBP = (pop32());
  /* 1072a381 ret  */
  ESPCHK(0x1072a080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a390 @ 0x1072a390 (23 bytes, 9 insns) */
void f_1072a390(void) {
  FTRACE(0x1072a390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072a390 push ebp */
  push32((uint32_t)(EBP));
  /* 1072a391 mov ebp, esp */
  EBP = (ESP);
  /* 1072a393 cmp dword ptr [0x10750c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10750c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a39a je 0x1072a3a3 */
  if (C.zf) goto L_1072a3a3;
  /* 1072a39c mov eax, dword ptr [0x10750be4] */
  EAX = (r32((uint32_t)(0x10750be4)));
  /* 1072a3a1 jmp 0x1072a3a5 */
  goto L_1072a3a5;
L_1072a3a3:;
  /* 1072a3a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072a3a5:;
  /* 1072a3a5 pop ebp */
  EBP = (pop32());
  /* 1072a3a6 ret  */
  ESPCHK(0x1072a390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3b0 @ 0x1072a3b0 (34 bytes, 10 insns) */
void f_1072a3b0(void) {
  FTRACE(0x1072a3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072a3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072a3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1072a3b3 cmp dword ptr [0x10751030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10751030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a3ba jne 0x1072a3d0 */
  if (!C.zf) goto L_1072a3d0;
  /* 1072a3bc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1072a3be call 0x10729bd0 */
  push32(0x1072a3c3u); f_10729bd0();
  /* 1072a3c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a3c6 mov dword ptr [0x10751030], 1 */
  w32((uint32_t)(0x10751030), (0x1u));
L_1072a3d0:;
  /* 1072a3d0 pop ebp */
  EBP = (pop32());
  /* 1072a3d1 ret  */
  ESPCHK(0x1072a3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3e0 @ 0x1072a3e0 (664 bytes, 266 insns) [15 switch table(s)] */
void f_1072a3e0(void) {
  FTRACE(0x1072a3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072a3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072a3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1072a3e3 push edi */
  push32((uint32_t)(EDI));
  /* 1072a3e4 push esi */
  push32((uint32_t)(ESI));
  /* 1072a3e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1072a3e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072a3eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1072a3ee mov eax, ecx */
  EAX = (ECX);
  /* 1072a3f0 mov edx, ecx */
  EDX = (ECX);
  /* 1072a3f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a3f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a3f6 jbe 0x1072a400 */
  if ((C.cf||C.zf)) goto L_1072a400;
  /* 1072a3f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a3fa jb 0x1072a578 */
  if (C.cf) goto L_1072a578;
L_1072a400:;
  /* 1072a400 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1072a406 jne 0x1072a41c */
  if (!C.zf) goto L_1072a41c;
  /* 1072a408 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072a40b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1072a40e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a411 jb 0x1072a43c */
  if (C.cf) goto L_1072a43c;
  /* 1072a413 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072a415 jmp dword ptr [edx*4 + 0x1072a528] */
  switch (EDX) {
    case 0: goto L_1072a538;
    case 1: goto L_1072a540;
    case 2: goto L_1072a54c;
    case 3: goto L_1072a560;
    default: x86_unimpl("switch@0x1072a415 out of table"); return;
  }
L_1072a41c:;
  /* 1072a41c mov eax, edi */
  EAX = (EDI);
  /* 1072a41e mov edx, 3 */
  EDX = (0x3u);
  /* 1072a423 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a426 jb 0x1072a434 */
  if (C.cf) goto L_1072a434;
  /* 1072a428 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1072a42b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a42d jmp dword ptr [eax*4 + 0x1072a440] */
  switch (EAX) {
    case 1: goto L_1072a450;
    case 2: goto L_1072a47c;
    case 3: goto L_1072a4a0;
    default: x86_unimpl("switch@0x1072a42d out of table"); return;
  }
L_1072a434:;
  /* 1072a434 jmp dword ptr [ecx*4 + 0x1072a538] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1072a538)))); return;
  /* 1072a43b nop  */
  /* nop */
L_1072a43c:;
  /* 1072a43c jmp dword ptr [ecx*4 + 0x1072a4bc] */
  switch (ECX) {
    case 0: goto L_1072a51f;
    case 1: goto L_1072a50c;
    case 2: goto L_1072a504;
    case 3: goto L_1072a4fc;
    case 4: goto L_1072a4f4;
    case 5: goto L_1072a4ec;
    case 6: goto L_1072a4e4;
    case 7: goto L_1072a4dc;
    default: x86_unimpl("switch@0x1072a43c out of table"); return;
  }
  /* 1072a443 nop  */
  /* nop */
L_1072a450:;
  /* 1072a450 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a452 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072a454 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072a456 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072a459 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072a45c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072a45f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072a462 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072a465 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a468 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a46b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a46e jb 0x1072a43c */
  if (C.cf) goto L_1072a43c;
  /* 1072a470 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072a472 jmp dword ptr [edx*4 + 0x1072a528] */
  switch (EDX) {
    case 0: goto L_1072a538;
    case 1: goto L_1072a540;
    case 2: goto L_1072a54c;
    case 3: goto L_1072a560;
    default: x86_unimpl("switch@0x1072a472 out of table"); return;
  }
  /* 1072a479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072a47c:;
  /* 1072a47c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a47e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072a480 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072a482 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072a485 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072a488 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072a48b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a48e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a491 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a494 jb 0x1072a43c */
  if (C.cf) goto L_1072a43c;
  /* 1072a496 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072a498 jmp dword ptr [edx*4 + 0x1072a528] */
  switch (EDX) {
    case 0: goto L_1072a538;
    case 1: goto L_1072a540;
    case 2: goto L_1072a54c;
    case 3: goto L_1072a560;
    default: x86_unimpl("switch@0x1072a498 out of table"); return;
  }
  /* 1072a49f nop  */
  /* nop */
L_1072a4a0:;
  /* 1072a4a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a4a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072a4a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072a4a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1072a4a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072a4aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1072a4ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a4ae jb 0x1072a43c */
  if (C.cf) goto L_1072a43c;
  /* 1072a4b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072a4b2 jmp dword ptr [edx*4 + 0x1072a528] */
  switch (EDX) {
    case 0: goto L_1072a538;
    case 1: goto L_1072a540;
    case 2: goto L_1072a54c;
    case 3: goto L_1072a560;
    default: x86_unimpl("switch@0x1072a4b2 out of table"); return;
  }
  /* 1072a4b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072a4dc:;
  /* 1072a4dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1072a4e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1072a4e4:;
  /* 1072a4e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1072a4e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1072a4ec:;
  /* 1072a4ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1072a4f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1072a4f4:;
  /* 1072a4f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1072a4f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1072a4fc:;
  /* 1072a4fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1072a500 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1072a504:;
  /* 1072a504 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1072a508 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1072a50c:;
  /* 1072a50c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1072a510 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1072a514 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1072a51b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a51d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1072a51f:;
  /* 1072a51f jmp dword ptr [edx*4 + 0x1072a528] */
  switch (EDX) {
    case 0: goto L_1072a538;
    case 1: goto L_1072a540;
    case 2: goto L_1072a54c;
    case 3: goto L_1072a560;
    default: x86_unimpl("switch@0x1072a51f out of table"); return;
  }
  /* 1072a526 mov edi, edi */
  EDI = (EDI);
L_1072a538:;
  /* 1072a538 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072a53b pop esi */
  ESI = (pop32());
  /* 1072a53c pop edi */
  EDI = (pop32());
  /* 1072a53d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072a53e ret  */
  ESPCHK(0x1072a3e0u, _esp0);
  ESP += 4; return;
  /* 1072a53f nop  */
  /* nop */
L_1072a540:;
  /* 1072a540 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072a542 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072a544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072a547 pop esi */
  ESI = (pop32());
  /* 1072a548 pop edi */
  EDI = (pop32());
  /* 1072a549 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072a54a ret  */
  ESPCHK(0x1072a3e0u, _esp0);
  ESP += 4; return;
  /* 1072a54b nop  */
  /* nop */
L_1072a54c:;
  /* 1072a54c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072a54e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072a550 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072a553 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072a556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072a559 pop esi */
  ESI = (pop32());
  /* 1072a55a pop edi */
  EDI = (pop32());
  /* 1072a55b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072a55c ret  */
  ESPCHK(0x1072a3e0u, _esp0);
  ESP += 4; return;
  /* 1072a55d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072a560:;
  /* 1072a560 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072a562 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072a564 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072a567 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072a56a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072a56d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072a570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072a573 pop esi */
  ESI = (pop32());
  /* 1072a574 pop edi */
  EDI = (pop32());
  /* 1072a575 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072a576 ret  */
  ESPCHK(0x1072a3e0u, _esp0);
  ESP += 4; return;
  /* 1072a577 nop  */
  /* nop */
L_1072a578:;
  /* 1072a578 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1072a57c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1072a580 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1072a586 jne 0x1072a5ac */
  if (!C.zf) goto L_1072a5ac;
  /* 1072a588 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072a58b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1072a58e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a591 jb 0x1072a5a0 */
  if (C.cf) goto L_1072a5a0;
  /* 1072a593 std  */
  C.df=1;
  /* 1072a594 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072a596 cld  */
  C.df=0;
  /* 1072a597 jmp dword ptr [edx*4 + 0x1072a6c0] */
  switch (EDX) {
    case 0: goto L_1072a6d0;
    case 1: goto L_1072a6d8;
    case 2: goto L_1072a6e8;
    case 3: goto L_1072a6fc;
    default: x86_unimpl("switch@0x1072a597 out of table"); return;
  }
  /* 1072a59e mov edi, edi */
  EDI = (EDI);
L_1072a5a0:;
  /* 1072a5a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072a5a2 jmp dword ptr [ecx*4 + 0x1072a670] */
  switch (ECX) {
    case 0: goto L_1072a6b7;
    default: x86_unimpl("switch@0x1072a5a2 out of table"); return;
  }
  /* 1072a5a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072a5ac:;
  /* 1072a5ac mov eax, edi */
  EAX = (EDI);
  /* 1072a5ae mov edx, 3 */
  EDX = (0x3u);
  /* 1072a5b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a5b6 jb 0x1072a5c4 */
  if (C.cf) goto L_1072a5c4;
  /* 1072a5b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1072a5bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a5bd jmp dword ptr [eax*4 + 0x1072a5c8] */
  switch (EAX) {
    case 1: goto L_1072a5d8;
    case 2: goto L_1072a5f8;
    case 3: goto L_1072a620;
    default: x86_unimpl("switch@0x1072a5bd out of table"); return;
  }
L_1072a5c4:;
  /* 1072a5c4 jmp dword ptr [ecx*4 + 0x1072a6c0] */
  switch (ECX) {
    case 0: goto L_1072a6d0;
    case 1: goto L_1072a6d8;
    case 2: goto L_1072a6e8;
    case 3: goto L_1072a6fc;
    default: x86_unimpl("switch@0x1072a5c4 out of table"); return;
  }
  /* 1072a5cb nop  */
  /* nop */
L_1072a5d8:;
  /* 1072a5d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072a5db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a5dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072a5e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1072a5e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072a5e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1072a5e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a5e8 jb 0x1072a5a0 */
  if (C.cf) goto L_1072a5a0;
  /* 1072a5ea std  */
  C.df=1;
  /* 1072a5eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072a5ed cld  */
  C.df=0;
  /* 1072a5ee jmp dword ptr [edx*4 + 0x1072a6c0] */
  switch (EDX) {
    case 0: goto L_1072a6d0;
    case 1: goto L_1072a6d8;
    case 2: goto L_1072a6e8;
    case 3: goto L_1072a6fc;
    default: x86_unimpl("switch@0x1072a5ee out of table"); return;
  }
  /* 1072a5f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072a5f8:;
  /* 1072a5f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072a5fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a5fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
L_1072a600:;
  /* 1072a600 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072a603 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072a606 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072a609 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a60c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a60f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a612 jb 0x1072a5a0 */
  if (C.cf) goto L_1072a5a0;
  /* 1072a614 std  */
  C.df=1;
  /* 1072a615 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072a617 cld  */
  C.df=0;
  /* 1072a618 jmp dword ptr [edx*4 + 0x1072a6c0] */
  switch (EDX) {
    case 0: goto L_1072a6d0;
    case 1: goto L_1072a6d8;
    case 2: goto L_1072a6e8;
    case 3: goto L_1072a6fc;
    default: x86_unimpl("switch@0x1072a618 out of table"); return;
  }
  /* 1072a61f nop  */
  /* nop */
L_1072a620:;
  /* 1072a620 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072a623 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a625 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072a628 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072a62b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072a62e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072a631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072a634 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072a637 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a63a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a63d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a640 jb 0x1072a5a0 */
  if (C.cf) goto L_1072a5a0;
  /* 1072a646 std  */
  C.df=1;
  /* 1072a647 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072a649 cld  */
  C.df=0;
  /* 1072a64a jmp dword ptr [edx*4 + 0x1072a6c0] */
  switch (EDX) {
    case 0: goto L_1072a6d0;
    case 1: goto L_1072a6d8;
    case 2: goto L_1072a6e8;
    case 3: goto L_1072a6fc;
    default: x86_unimpl("switch@0x1072a64a out of table"); return;
  }
  /* 1072a651 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1072a654 je 0x1072a5fc */
  if (C.zf) goto L_1072a5fc;
  /* 1072a656 jb 0x1072a668 */
  if (C.cf) goto L_1072a668;
  /* 1072a658 jl 0x1072a600 */
  if ((C.sf!=C.of)) goto L_1072a600;
  /* 1072a65a jb 0x1072a66c */
  if (C.cf) goto L_1072a66c;
  /* 1072a65c test byte ptr [esi - 0x5973ef8e], ah */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x5973ef8e)))&(AH); fl_logic(_r,8); }
  /* 1072a662 jb 0x1072a674 */
  if (C.cf) goto L_1072a674;
  /* 1072a664 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1072a665 cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1072a666 jb 0x1072a678 */
  if (C.cf) goto L_1072a678;
L_1072a668:;
  /* 1072a668 pushfd  */
  x86_unimpl("pushfd @ 0x1072a668");
  /* 1072a669 cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1072a66a jb 0x1072a67c */
  if (C.cf) goto L_1072a67c;
L_1072a66c:;
  /* 1072a66c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1072a66d cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1072a66e jb 0x1072a680 */
  if (C.cf) goto L_1072a680;
L_1072a674:;
  /* 1072a674 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
L_1072a678:;
  /* 1072a678 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
L_1072a67c:;
  /* 1072a67c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
L_1072a680:;
  /* 1072a680 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1072a684 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1072a688 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1072a68c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1072a690 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1072a694 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1072a698 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1072a69c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1072a6a0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1072a6a4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1072a6a8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1072a6ac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1072a6b3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a6b5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1072a6b7:;
  /* 1072a6b7 jmp dword ptr [edx*4 + 0x1072a6c0] */
  switch (EDX) {
    case 0: goto L_1072a6d0;
    case 1: goto L_1072a6d8;
    case 2: goto L_1072a6e8;
    case 3: goto L_1072a6fc;
    default: x86_unimpl("switch@0x1072a6b7 out of table"); return;
  }
  /* 1072a6be mov edi, edi */
  EDI = (EDI);
L_1072a6d0:;
  /* 1072a6d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072a6d3 pop esi */
  ESI = (pop32());
  /* 1072a6d4 pop edi */
  EDI = (pop32());
  /* 1072a6d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072a6d6 ret  */
  ESPCHK(0x1072a3e0u, _esp0);
  ESP += 4; return;
  /* 1072a6d7 nop  */
  /* nop */
L_1072a6d8:;
  /* 1072a6d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072a6db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072a6de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072a6e1 pop esi */
  ESI = (pop32());
  /* 1072a6e2 pop edi */
  EDI = (pop32());
  /* 1072a6e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072a6e4 ret  */
  ESPCHK(0x1072a3e0u, _esp0);
  ESP += 4; return;
  /* 1072a6e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072a6e8:;
  /* 1072a6e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072a6eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072a6ee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072a6f1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072a6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072a6f7 pop esi */
  ESI = (pop32());
  /* 1072a6f8 pop edi */
  EDI = (pop32());
  /* 1072a6f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072a6fa ret  */
  ESPCHK(0x1072a3e0u, _esp0);
  ESP += 4; return;
  /* 1072a6fb nop  */
  /* nop */
L_1072a6fc:;
  /* 1072a6fc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072a6ff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072a702 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072a705 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072a708 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072a70b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072a70e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072a711 pop esi */
  ESI = (pop32());
  /* 1072a712 pop edi */
  EDI = (pop32());
  /* 1072a713 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072a714 ret  */
  ESPCHK(0x1072a3e0u, _esp0);
  ESP += 4; return;
L_1072a5fc: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1072a5fc (unresolved jump table)"); return;
}

/* __aulldiv @ 0x1072a720 (104 bytes, 43 insns) */
void f_1072a720(void) {
  FTRACE(0x1072a720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072a720 push ebx */
  push32((uint32_t)(EBX));
  /* 1072a721 push esi */
  push32((uint32_t)(ESI));
  /* 1072a722 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1072a726 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072a728 jne 0x1072a742 */
  if (!C.zf) goto L_1072a742;
  /* 1072a72a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1072a72e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1072a732 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a734 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1072a736 mov ebx, eax */
  EBX = (EAX);
  /* 1072a738 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1072a73c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1072a73e mov edx, ebx */
  EDX = (EBX);
  /* 1072a740 jmp 0x1072a783 */
  goto L_1072a783;
L_1072a742:;
  /* 1072a742 mov ecx, eax */
  ECX = (EAX);
  /* 1072a744 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1072a748 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1072a74c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1072a750:;
  /* 1072a750 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1072a752 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1072a754 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1072a756 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1072a758 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072a75a jne 0x1072a750 */
  if (!C.zf) goto L_1072a750;
  /* 1072a75c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1072a75e mov esi, eax */
  ESI = (EAX);
  /* 1072a760 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1072a764 mov ecx, eax */
  ECX = (EAX);
  /* 1072a766 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1072a76a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1072a76c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a76e jb 0x1072a77e */
  if (C.cf) goto L_1072a77e;
  /* 1072a770 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a774 ja 0x1072a77e */
  if ((!C.cf&&!C.zf)) goto L_1072a77e;
  /* 1072a776 jb 0x1072a77f */
  if (C.cf) goto L_1072a77f;
  /* 1072a778 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a77c jbe 0x1072a77f */
  if ((C.cf||C.zf)) goto L_1072a77f;
L_1072a77e:;
  /* 1072a77e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1072a77f:;
  /* 1072a77f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a781 mov eax, esi */
  EAX = (ESI);
L_1072a783:;
  /* 1072a783 pop esi */
  ESI = (pop32());
  /* 1072a784 pop ebx */
  EBX = (pop32());
  /* 1072a785 ret 0x10 */
  ESPCHK(0x1072a720u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1072a790 (117 bytes, 44 insns) */
void f_1072a790(void) {
  FTRACE(0x1072a790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072a790 push ebx */
  push32((uint32_t)(EBX));
  /* 1072a791 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1072a795 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072a797 jne 0x1072a7b1 */
  if (!C.zf) goto L_1072a7b1;
  /* 1072a799 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1072a79d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1072a7a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a7a3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1072a7a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1072a7a9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1072a7ab mov eax, edx */
  EAX = (EDX);
  /* 1072a7ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072a7af jmp 0x1072a801 */
  goto L_1072a801;
L_1072a7b1:;
  /* 1072a7b1 mov ecx, eax */
  ECX = (EAX);
  /* 1072a7b3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1072a7b7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1072a7bb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1072a7bf:;
  /* 1072a7bf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1072a7c1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1072a7c3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1072a7c5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1072a7c7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072a7c9 jne 0x1072a7bf */
  if (!C.zf) goto L_1072a7bf;
  /* 1072a7cb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1072a7cd mov ecx, eax */
  ECX = (EAX);
  /* 1072a7cf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1072a7d3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1072a7d4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1072a7d8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a7da jb 0x1072a7ea */
  if (C.cf) goto L_1072a7ea;
  /* 1072a7dc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a7e0 ja 0x1072a7ea */
  if ((!C.cf&&!C.zf)) goto L_1072a7ea;
  /* 1072a7e2 jb 0x1072a7f2 */
  if (C.cf) goto L_1072a7f2;
  /* 1072a7e4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a7e8 jbe 0x1072a7f2 */
  if ((C.cf||C.zf)) goto L_1072a7f2;
L_1072a7ea:;
  /* 1072a7ea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a7ee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1072a7f2:;
  /* 1072a7f2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a7f6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a7fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072a7fc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072a7fe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1072a801:;
  /* 1072a801 pop ebx */
  EBX = (pop32());
  /* 1072a802 ret 0x10 */
  ESPCHK(0x1072a790u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a810 @ 0x1072a810 (628 bytes, 214 insns) */
void f_1072a810(void) {
  FTRACE(0x1072a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072a810 push ebp */
  push32((uint32_t)(EBP));
  /* 1072a811 mov ebp, esp */
  EBP = (ESP);
  /* 1072a813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a816 push ebx */
  push32((uint32_t)(EBX));
  /* 1072a817 push esi */
  push32((uint32_t)(ESI));
  /* 1072a818 push edi */
  push32((uint32_t)(EDI));
L_1072a819:;
  /* 1072a819 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a81d jne 0x1072a83d */
  if (!C.zf) goto L_1072a83d;
  /* 1072a81f push 0x1074afc4 */
  push32((uint32_t)(0x1074afc4u));
  /* 1072a824 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072a826 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1072a828 push 0x1074afb8 */
  push32((uint32_t)(0x1074afb8u));
  /* 1072a82d push 2 */
  push32((uint32_t)(0x2u));
  /* 1072a82f call 0x10722bc0 */
  push32(0x1072a834u); f_10722bc0();
  /* 1072a834 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a837 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a83a jne 0x1072a83d */
  if (!C.zf) goto L_1072a83d;
  /* 1072a83c int3  */
  x86_unimpl("int3 @ 0x1072a83c");
L_1072a83d:;
  /* 1072a83d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072a83f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072a841 jne 0x1072a819 */
  if (!C.zf) goto L_1072a819;
  /* 1072a843 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072a846 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072a849 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a84c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1072a84f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1072a852 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a855 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072a858 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1072a85e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072a860 je 0x1072a86f */
  if (C.zf) goto L_1072a86f;
  /* 1072a862 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a865 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072a868 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1072a86b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072a86d je 0x1072a885 */
  if (C.zf) goto L_1072a885;
L_1072a86f:;
  /* 1072a86f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a872 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1072a875 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1072a877 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a87a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1072a87d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072a880 jmp 0x1072aa7d */
  goto L_1072aa7d;
L_1072a885:;
  /* 1072a885 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a888 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1072a88b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1072a88e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072a890 je 0x1072a8dc */
  if (C.zf) goto L_1072a8dc;
  /* 1072a892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a895 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1072a89c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a89f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1072a8a2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1072a8a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072a8a7 je 0x1072a8c5 */
  if (C.zf) goto L_1072a8c5;
  /* 1072a8a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8af mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1072a8b2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1072a8b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072a8ba and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1072a8bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8c0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1072a8c3 jmp 0x1072a8dc */
  goto L_1072a8dc;
L_1072a8c5:;
  /* 1072a8c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8c8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072a8cb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1072a8ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8d1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1072a8d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072a8d7 jmp 0x1072aa7d */
  goto L_1072aa7d;
L_1072a8dc:;
  /* 1072a8dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8df mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072a8e2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1072a8e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8e8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1072a8eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8ee mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072a8f1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1072a8f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8f7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1072a8fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a8fd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1072a904 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072a90b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a90e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1072a911 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a914 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072a917 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1072a91d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072a91f jne 0x1072a94f */
  if (!C.zf) goto L_1072a94f;
  /* 1072a921 cmp dword ptr [ebp - 8], 0x1074e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1074e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a928 je 0x1072a933 */
  if (C.zf) goto L_1072a933;
  /* 1072a92a cmp dword ptr [ebp - 8], 0x1074e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1074e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a931 jne 0x1072a943 */
  if (!C.zf) goto L_1072a943;
L_1072a933:;
  /* 1072a933 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072a936 push edx */
  push32((uint32_t)(EDX));
  /* 1072a937 call 0x1072c780 */
  push32(0x1072a93cu); f_1072c780();
  /* 1072a93c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a93f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072a941 jne 0x1072a94f */
  if (!C.zf) goto L_1072a94f;
L_1072a943:;
  /* 1072a943 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a946 push eax */
  push32((uint32_t)(EAX));
  /* 1072a947 call 0x1072c6b0 */
  push32(0x1072a94cu); f_1072c6b0();
  /* 1072a94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072a94f:;
  /* 1072a94f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a952 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072a955 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1072a95b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072a95d je 0x1072aa3b */
  if (C.zf) goto L_1072aa3b;
L_1072a963:;
  /* 1072a963 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a966 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a969 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1072a96b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a96e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072a970 jge 0x1072a993 */
  if ((C.sf==C.of)) goto L_1072a993;
  /* 1072a972 push 0x1074af78 */
  push32((uint32_t)(0x1074af78u));
  /* 1072a977 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072a979 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1072a97e push 0x1074afb8 */
  push32((uint32_t)(0x1074afb8u));
  /* 1072a983 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072a985 call 0x10722bc0 */
  push32(0x1072a98au); f_10722bc0();
  /* 1072a98a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a98d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a990 jne 0x1072a993 */
  if (!C.zf) goto L_1072a993;
  /* 1072a992 int3  */
  x86_unimpl("int3 @ 0x1072a992");
L_1072a993:;
  /* 1072a993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072a995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072a997 jne 0x1072a963 */
  if (!C.zf) goto L_1072a963;
  /* 1072a999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a99c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a99f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1072a9a1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a9a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072a9a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a9aa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1072a9ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a9b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a9b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1072a9b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a9b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1072a9bb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072a9be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a9c1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1072a9c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a9c8 jle 0x1072a9e6 */
  if ((C.zf||C.sf!=C.of)) goto L_1072a9e6;
  /* 1072a9ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072a9cd push ecx */
  push32((uint32_t)(ECX));
  /* 1072a9ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072a9d1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1072a9d4 push eax */
  push32((uint32_t)(EAX));
  /* 1072a9d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072a9d8 push ecx */
  push32((uint32_t)(ECX));
  /* 1072a9d9 call 0x1072c3a0 */
  push32(0x1072a9deu); f_1072c3a0();
  /* 1072a9de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072a9e1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1072a9e4 jmp 0x1072aa2e */
  goto L_1072aa2e;
L_1072a9e6:;
  /* 1072a9e6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072a9ea je 0x1072aa09 */
  if (C.zf) goto L_1072aa09;
  /* 1072a9ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072a9ef sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1072a9f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072a9f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1072a9f8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072a9fb mov ecx, dword ptr [edx*4 + 0x10750ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10750ee0)));
  /* 1072aa02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072aa04 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1072aa07 jmp 0x1072aa10 */
  goto L_1072aa10;
L_1072aa09:;
  /* 1072aa09 mov dword ptr [ebp - 0x14], 0x1074da60 */
  w32((uint32_t)(EBP + -0x14), (0x1074da60u));
L_1072aa10:;
  /* 1072aa10 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072aa13 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1072aa17 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1072aa1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072aa1c je 0x1072aa2e */
  if (C.zf) goto L_1072aa2e;
  /* 1072aa1e push 2 */
  push32((uint32_t)(0x2u));
  /* 1072aa20 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072aa22 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072aa25 push ecx */
  push32((uint32_t)(ECX));
  /* 1072aa26 call 0x1072c250 */
  push32(0x1072aa2bu); f_1072c250();
  /* 1072aa2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072aa2e:;
  /* 1072aa2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072aa31 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1072aa34 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1072aa37 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1072aa39 jmp 0x1072aa59 */
  goto L_1072aa59;
L_1072aa3b:;
  /* 1072aa3b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1072aa42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072aa45 push edx */
  push32((uint32_t)(EDX));
  /* 1072aa46 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1072aa49 push eax */
  push32((uint32_t)(EAX));
  /* 1072aa4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072aa4d push ecx */
  push32((uint32_t)(ECX));
  /* 1072aa4e call 0x1072c3a0 */
  push32(0x1072aa53u); f_1072c3a0();
  /* 1072aa53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072aa56 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1072aa59:;
  /* 1072aa59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072aa5c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072aa5f je 0x1072aa75 */
  if (C.zf) goto L_1072aa75;
  /* 1072aa61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072aa64 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072aa67 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1072aa6a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072aa6d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1072aa70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072aa73 jmp 0x1072aa7d */
  goto L_1072aa7d;
L_1072aa75:;
  /* 1072aa75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072aa78 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1072aa7d:;
  /* 1072aa7d pop edi */
  EDI = (pop32());
  /* 1072aa7e pop esi */
  ESI = (pop32());
  /* 1072aa7f pop ebx */
  EBX = (pop32());
  /* 1072aa80 mov esp, ebp */
  ESP = (EBP);
  /* 1072aa82 pop ebp */
  EBP = (pop32());
  /* 1072aa83 ret  */
  ESPCHK(0x1072a810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa90 @ 0x1072aa90 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1072aa90(void) {
  FTRACE(0x1072aa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072aa90 push ebp */
  push32((uint32_t)(EBP));
  /* 1072aa91 mov ebp, esp */
  EBP = (ESP);
  /* 1072aa93 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072aa99 push ebx */
  push32((uint32_t)(EBX));
  /* 1072aa9a push esi */
  push32((uint32_t)(ESI));
  /* 1072aa9b push edi */
  push32((uint32_t)(EDI));
  /* 1072aa9c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1072aaa3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1072aaad mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1072aab4:;
  /* 1072aab4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072aab7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1072aab9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1072aabc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072aac0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072aac3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072aac6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1072aac9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072aacb je 0x1072b6a7 */
  if (C.zf) goto L_1072b6a7;
  /* 1072aad1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072aad8 jl 0x1072b6a7 */
  if ((C.sf!=C.of)) goto L_1072b6a7;
  /* 1072aade movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072aae2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072aae5 jl 0x1072ab06 */
  if ((C.sf!=C.of)) goto L_1072ab06;
  /* 1072aae7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072aaeb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072aaee jg 0x1072ab06 */
  if ((!C.zf&&C.sf==C.of)) goto L_1072ab06;
  /* 1072aaf0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072aaf4 movsx ecx, byte ptr [eax + 0x1074afb0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1074afb0))));
  /* 1072aafb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1072aafe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1072ab04 jmp 0x1072ab10 */
  goto L_1072ab10;
L_1072ab06:;
  /* 1072ab06 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1072ab10:;
  /* 1072ab10 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1072ab16 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1072ab19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072ab1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072ab1f movsx edx, byte ptr [ecx + eax*8 + 0x1074afd0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1074afd0))));
  /* 1072ab27 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1072ab2a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1072ab2d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072ab30 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1072ab36 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ab3d ja 0x1072b6a2 */
  if ((!C.cf&&!C.zf)) goto L_1072b6a2;
  /* 1072ab43 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1072ab49 jmp dword ptr [ecx*4 + 0x1072b6b4] */
  switch (ECX) {
    case 0: goto L_1072ab50;
    case 1: goto L_1072abea;
    case 2: goto L_1072ac2c;
    case 3: goto L_1072ac9b;
    case 4: goto L_1072acf3;
    case 5: goto L_1072ad02;
    case 6: goto L_1072ad4e;
    case 7: goto L_1072ade1;
    case 8: goto L_1072ac78;
    case 9: goto L_1072ac83;
    case 10: goto L_1072ac6e;
    case 11: goto L_1072ac63;
    case 12: goto L_1072ac8e;
    case 13: goto L_1072ac96;
    default: x86_unimpl("switch@0x1072ab49 out of table"); return;
  }
L_1072ab50:;
  /* 1072ab50 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1072ab57 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072ab5a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1072ab60 mov eax, dword ptr [0x1074dc98] */
  EAX = (r32((uint32_t)(0x1074dc98)));
  /* 1072ab65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072ab67 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1072ab6b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1072ab71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072ab73 je 0x1072abcd */
  if (C.zf) goto L_1072abcd;
  /* 1072ab75 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1072ab7b push edx */
  push32((uint32_t)(EDX));
  /* 1072ab7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ab7f push eax */
  push32((uint32_t)(EAX));
  /* 1072ab80 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072ab84 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ab85 call 0x1072b7c0 */
  push32(0x1072ab8au); f_1072b7c0();
  /* 1072ab8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ab8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072ab90 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1072ab92 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1072ab95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072ab98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ab9b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1072ab9e:;
  /* 1072ab9e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072aba2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072aba4 jne 0x1072abc7 */
  if (!C.zf) goto L_1072abc7;
  /* 1072aba6 push 0x1074b050 */
  push32((uint32_t)(0x1074b050u));
  /* 1072abab push 0 */
  push32((uint32_t)(0x0u));
  /* 1072abad push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1072abb2 push 0x1074b044 */
  push32((uint32_t)(0x1074b044u));
  /* 1072abb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072abb9 call 0x10722bc0 */
  push32(0x1072abbeu); f_10722bc0();
  /* 1072abbe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072abc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072abc4 jne 0x1072abc7 */
  if (!C.zf) goto L_1072abc7;
  /* 1072abc6 int3  */
  x86_unimpl("int3 @ 0x1072abc6");
L_1072abc7:;
  /* 1072abc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072abc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072abcb jne 0x1072ab9e */
  if (!C.zf) goto L_1072ab9e;
L_1072abcd:;
  /* 1072abcd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1072abd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072abd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072abd7 push edx */
  push32((uint32_t)(EDX));
  /* 1072abd8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072abdc push eax */
  push32((uint32_t)(EAX));
  /* 1072abdd call 0x1072b7c0 */
  push32(0x1072abe2u); f_1072b7c0();
  /* 1072abe2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072abe5 jmp 0x1072b6a2 */
  goto L_1072b6a2;
L_1072abea:;
  /* 1072abea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1072abf1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072abf4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1072abfa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1072ac00 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1072ac06 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1072ac0c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1072ac0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072ac16 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1072ac20 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1072ac27 jmp 0x1072b6a2 */
  goto L_1072b6a2;
L_1072ac2c:;
  /* 1072ac2c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072ac30 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1072ac36 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1072ac3c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072ac3f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1072ac45 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ac4c ja 0x1072ac96 */
  if ((!C.cf&&!C.zf)) goto L_1072ac96;
  /* 1072ac4e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1072ac54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072ac56 mov al, byte ptr [ecx + 0x1072b6ec] */
  AL = (r8((uint32_t)(ECX + 0x1072b6ec)));
  /* 1072ac5c jmp dword ptr [eax*4 + 0x1072b6d4] */
  switch (EAX) {
    case 0: goto L_1072ac78;
    case 1: goto L_1072ac83;
    case 2: goto L_1072ac6e;
    case 3: goto L_1072ac63;
    case 4: goto L_1072ac8e;
    case 5: goto L_1072ac96;
    default: x86_unimpl("switch@0x1072ac5c out of table"); return;
  }
L_1072ac63:;
  /* 1072ac63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ac66 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1072ac69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072ac6c jmp 0x1072ac96 */
  goto L_1072ac96;
L_1072ac6e:;
  /* 1072ac6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ac71 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1072ac73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072ac76 jmp 0x1072ac96 */
  goto L_1072ac96;
L_1072ac78:;
  /* 1072ac78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ac7b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1072ac7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1072ac81 jmp 0x1072ac96 */
  goto L_1072ac96;
L_1072ac83:;
  /* 1072ac83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ac86 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1072ac89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072ac8c jmp 0x1072ac96 */
  goto L_1072ac96;
L_1072ac8e:;
  /* 1072ac8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ac91 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1072ac93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072ac96:;
  /* 1072ac96 jmp 0x1072b6a2 */
  goto L_1072b6a2;
L_1072ac9b:;
  /* 1072ac9b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072ac9f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072aca2 jne 0x1072acd7 */
  if (!C.zf) goto L_1072acd7;
  /* 1072aca4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1072aca7 push edx */
  push32((uint32_t)(EDX));
  /* 1072aca8 call 0x1072b8d0 */
  push32(0x1072acadu); f_1072b8d0();
  /* 1072acad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072acb0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1072acb6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072acbd jge 0x1072acd5 */
  if ((C.sf==C.of)) goto L_1072acd5;
  /* 1072acbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072acc2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1072acc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072acc7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1072accd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072accf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1072acd5:;
  /* 1072acd5 jmp 0x1072acee */
  goto L_1072acee;
L_1072acd7:;
  /* 1072acd7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1072acdd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072ace0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072ace4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1072ace8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1072acee:;
  /* 1072acee jmp 0x1072b6a2 */
  goto L_1072b6a2;
L_1072acf3:;
  /* 1072acf3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1072acfd jmp 0x1072b6a2 */
  goto L_1072b6a2;
L_1072ad02:;
  /* 1072ad02 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072ad06 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ad09 jne 0x1072ad32 */
  if (!C.zf) goto L_1072ad32;
  /* 1072ad0b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1072ad0e push eax */
  push32((uint32_t)(EAX));
  /* 1072ad0f call 0x1072b8d0 */
  push32(0x1072ad14u); f_1072b8d0();
  /* 1072ad14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ad17 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1072ad1d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ad24 jge 0x1072ad30 */
  if ((C.sf==C.of)) goto L_1072ad30;
  /* 1072ad26 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1072ad30:;
  /* 1072ad30 jmp 0x1072ad49 */
  goto L_1072ad49;
L_1072ad32:;
  /* 1072ad32 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1072ad38 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072ad3b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072ad3f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1072ad43 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1072ad49:;
  /* 1072ad49 jmp 0x1072b6a2 */
  goto L_1072b6a2;
L_1072ad4e:;
  /* 1072ad4e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072ad52 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1072ad58 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1072ad5e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072ad61 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1072ad67 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ad6e ja 0x1072addc */
  if ((!C.cf&&!C.zf)) goto L_1072addc;
  /* 1072ad70 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1072ad76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072ad78 mov al, byte ptr [ecx + 0x1072b711] */
  AL = (r8((uint32_t)(ECX + 0x1072b711)));
  /* 1072ad7e jmp dword ptr [eax*4 + 0x1072b6fd] */
  switch (EAX) {
    case 0: goto L_1072ad90;
    case 1: goto L_1072adc9;
    case 2: goto L_1072ad85;
    case 3: goto L_1072add3;
    case 4: goto L_1072addc;
    default: x86_unimpl("switch@0x1072ad7e out of table"); return;
  }
L_1072ad85:;
  /* 1072ad85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ad88 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1072ad8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072ad8e jmp 0x1072addc */
  goto L_1072addc;
L_1072ad90:;
  /* 1072ad90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072ad93 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072ad96 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ad99 jne 0x1072adbb */
  if (!C.zf) goto L_1072adbb;
  /* 1072ad9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072ad9e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1072ada2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ada5 jne 0x1072adbb */
  if (!C.zf) goto L_1072adbb;
  /* 1072ada7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072adaa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072adad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1072adb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072adb3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1072adb6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072adb9 jmp 0x1072adc7 */
  goto L_1072adc7;
L_1072adbb:;
  /* 1072adbb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1072adc2 jmp 0x1072ab50 */
  goto L_1072ab50;
L_1072adc7:;
  /* 1072adc7 jmp 0x1072addc */
  goto L_1072addc;
L_1072adc9:;
  /* 1072adc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072adcc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1072adce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072add1 jmp 0x1072addc */
  goto L_1072addc;
L_1072add3:;
  /* 1072add3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072add6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1072add9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1072addc:;
  /* 1072addc jmp 0x1072b6a2 */
  goto L_1072b6a2;
L_1072ade1:;
  /* 1072ade1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072ade5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1072adeb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1072adf1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072adf4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1072adfa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ae01 ja 0x1072b4c7 */
  if ((!C.cf&&!C.zf)) goto L_1072b4c7;
  /* 1072ae07 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1072ae0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072ae0f mov cl, byte ptr [edx + 0x1072b77c] */
  CL = (r8((uint32_t)(EDX + 0x1072b77c)));
  /* 1072ae15 jmp dword ptr [ecx*4 + 0x1072b740] */
  switch (ECX) {
    case 0: goto L_1072ae1c;
    case 1: goto L_1072b0b0;
    case 2: goto L_1072af40;
    case 3: goto L_1072b1e9;
    case 4: goto L_1072aeab;
    case 5: goto L_1072ae31;
    case 6: goto L_1072b1bb;
    case 7: goto L_1072b0c0;
    case 8: goto L_1072b065;
    case 9: goto L_1072b235;
    case 10: goto L_1072b1df;
    case 11: goto L_1072af56;
    case 12: goto L_1072b1d3;
    case 13: goto L_1072b1f5;
    case 14: goto L_1072b4c7;
    default: x86_unimpl("switch@0x1072ae15 out of table"); return;
  }
L_1072ae1c:;
  /* 1072ae1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ae1f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1072ae24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072ae26 jne 0x1072ae31 */
  if (!C.zf) goto L_1072ae31;
  /* 1072ae28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ae2b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1072ae2e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1072ae31:;
  /* 1072ae31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ae34 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1072ae3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072ae3c je 0x1072ae77 */
  if (C.zf) goto L_1072ae77;
  /* 1072ae3e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1072ae41 push eax */
  push32((uint32_t)(EAX));
  /* 1072ae42 call 0x1072b910 */
  push32(0x1072ae47u); f_1072b910();
  /* 1072ae47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ae4a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1072ae4e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1072ae52 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ae53 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1072ae59 push edx */
  push32((uint32_t)(EDX));
  /* 1072ae5a call 0x1072c9f0 */
  push32(0x1072ae5fu); f_1072c9f0();
  /* 1072ae5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ae62 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1072ae65 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ae69 jge 0x1072ae75 */
  if ((C.sf==C.of)) goto L_1072ae75;
  /* 1072ae6b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1072ae75:;
  /* 1072ae75 jmp 0x1072ae9d */
  goto L_1072ae9d;
L_1072ae77:;
  /* 1072ae77 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1072ae7a push eax */
  push32((uint32_t)(EAX));
  /* 1072ae7b call 0x1072b8d0 */
  push32(0x1072ae80u); f_1072b8d0();
  /* 1072ae80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ae83 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1072ae8a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1072ae90 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1072ae96 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1072ae9d:;
  /* 1072ae9d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1072aea3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1072aea6 jmp 0x1072b4c7 */
  goto L_1072b4c7;
L_1072aeab:;
  /* 1072aeab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1072aeae push eax */
  push32((uint32_t)(EAX));
  /* 1072aeaf call 0x1072b8d0 */
  push32(0x1072aeb4u); f_1072b8d0();
  /* 1072aeb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072aeb7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1072aebd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072aec4 je 0x1072aed2 */
  if (C.zf) goto L_1072aed2;
  /* 1072aec6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1072aecc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072aed0 jne 0x1072aeec */
  if (!C.zf) goto L_1072aeec;
L_1072aed2:;
  /* 1072aed2 mov edx, dword ptr [0x1074dfb0] */
  EDX = (r32((uint32_t)(0x1074dfb0)));
  /* 1072aed8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1072aedb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072aede push eax */
  push32((uint32_t)(EAX));
  /* 1072aedf call 0x10726930 */
  push32(0x1072aee4u); f_10726930();
  /* 1072aee4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072aee7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1072aeea jmp 0x1072af3b */
  goto L_1072af3b;
L_1072aeec:;
  /* 1072aeec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072aeef and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1072aef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072aef7 je 0x1072af1c */
  if (C.zf) goto L_1072af1c;
  /* 1072aef9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1072aeff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1072af02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1072af05 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1072af0b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1072af0e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1072af10 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1072af13 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1072af1a jmp 0x1072af3b */
  goto L_1072af3b;
L_1072af1c:;
  /* 1072af1c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1072af23 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1072af29 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1072af2c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1072af2f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1072af35 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1072af38 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1072af3b:;
  /* 1072af3b jmp 0x1072b4c7 */
  goto L_1072b4c7;
L_1072af40:;
  /* 1072af40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072af43 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1072af49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072af4b jne 0x1072af56 */
  if (!C.zf) goto L_1072af56;
  /* 1072af4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072af50 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1072af53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1072af56:;
  /* 1072af56 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072af5d jne 0x1072af6b */
  if (!C.zf) goto L_1072af6b;
  /* 1072af5f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1072af69 jmp 0x1072af77 */
  goto L_1072af77;
L_1072af6b:;
  /* 1072af6b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1072af71 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1072af77:;
  /* 1072af77 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1072af7d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1072af83 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1072af86 push edx */
  push32((uint32_t)(EDX));
  /* 1072af87 call 0x1072b8d0 */
  push32(0x1072af8cu); f_1072b8d0();
  /* 1072af8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072af8f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1072af92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072af95 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1072af9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072af9c je 0x1072b006 */
  if (C.zf) goto L_1072b006;
  /* 1072af9e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072afa2 jne 0x1072afad */
  if (!C.zf) goto L_1072afad;
  /* 1072afa4 mov ecx, dword ptr [0x1074dfb4] */
  ECX = (r32((uint32_t)(0x1074dfb4)));
  /* 1072afaa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1072afad:;
  /* 1072afad mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1072afb4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072afb7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1072afbd:;
  /* 1072afbd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1072afc3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1072afc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072afcc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1072afd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072afd4 je 0x1072aff6 */
  if (C.zf) goto L_1072aff6;
  /* 1072afd6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1072afdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072afde mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1072afe1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072afe3 je 0x1072aff6 */
  if (C.zf) goto L_1072aff6;
  /* 1072afe5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1072afeb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072afee mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1072aff4 jmp 0x1072afbd */
  goto L_1072afbd;
L_1072aff6:;
  /* 1072aff6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1072affc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072afff sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1072b001 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1072b004 jmp 0x1072b060 */
  goto L_1072b060;
L_1072b006:;
  /* 1072b006 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b00a jne 0x1072b014 */
  if (!C.zf) goto L_1072b014;
  /* 1072b00c mov eax, dword ptr [0x1074dfb0] */
  EAX = (r32((uint32_t)(0x1074dfb0)));
  /* 1072b011 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1072b014:;
  /* 1072b014 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b017 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1072b01d:;
  /* 1072b01d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1072b023 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1072b029 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b02c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1072b032 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b034 je 0x1072b054 */
  if (C.zf) goto L_1072b054;
  /* 1072b036 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1072b03c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072b03f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b041 je 0x1072b054 */
  if (C.zf) goto L_1072b054;
  /* 1072b043 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1072b049 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b04c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1072b052 jmp 0x1072b01d */
  goto L_1072b01d;
L_1072b054:;
  /* 1072b054 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1072b05a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b05d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1072b060:;
  /* 1072b060 jmp 0x1072b4c7 */
  goto L_1072b4c7;
L_1072b065:;
  /* 1072b065 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1072b068 push edx */
  push32((uint32_t)(EDX));
  /* 1072b069 call 0x1072b8d0 */
  push32(0x1072b06eu); f_1072b8d0();
  /* 1072b06e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b071 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1072b077 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b07a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1072b07d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b07f je 0x1072b093 */
  if (C.zf) goto L_1072b093;
  /* 1072b081 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1072b087 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1072b08e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1072b091 jmp 0x1072b0a1 */
  goto L_1072b0a1;
L_1072b093:;
  /* 1072b093 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1072b099 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1072b09f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1072b0a1:;
  /* 1072b0a1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1072b0ab jmp 0x1072b4c7 */
  goto L_1072b4c7;
L_1072b0b0:;
  /* 1072b0b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1072b0b7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1072b0ba add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1072b0bd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1072b0c0:;
  /* 1072b0c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b0c3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1072b0c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072b0c8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1072b0ce mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1072b0d1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b0d8 jge 0x1072b0e6 */
  if ((C.sf==C.of)) goto L_1072b0e6;
  /* 1072b0da mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1072b0e4 jmp 0x1072b102 */
  goto L_1072b102;
L_1072b0e6:;
  /* 1072b0e6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b0ed jne 0x1072b102 */
  if (!C.zf) goto L_1072b102;
  /* 1072b0ef movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072b0f3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b0f6 jne 0x1072b102 */
  if (!C.zf) goto L_1072b102;
  /* 1072b0f8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1072b102:;
  /* 1072b102 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072b105 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b108 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1072b10b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072b10e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b111 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072b113 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072b116 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1072b11c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1072b122 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072b125 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b126 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1072b12c push edx */
  push32((uint32_t)(EDX));
  /* 1072b12d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072b131 push eax */
  push32((uint32_t)(EAX));
  /* 1072b132 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b135 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b136 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1072b13c push edx */
  push32((uint32_t)(EDX));
  /* 1072b13d call dword ptr [0x1074e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074e3a0))), 0x1072b143u);
  /* 1072b143 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b149 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1072b14e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b150 je 0x1072b168 */
  if (C.zf) goto L_1072b168;
  /* 1072b152 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b159 jne 0x1072b168 */
  if (!C.zf) goto L_1072b168;
  /* 1072b15b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b15e push ecx */
  push32((uint32_t)(ECX));
  /* 1072b15f call dword ptr [0x1074e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074e3ac))), 0x1072b165u);
  /* 1072b165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072b168:;
  /* 1072b168 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1072b16c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b16f jne 0x1072b18a */
  if (!C.zf) goto L_1072b18a;
  /* 1072b171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b174 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1072b179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b17b jne 0x1072b18a */
  if (!C.zf) goto L_1072b18a;
  /* 1072b17d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b180 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b181 call dword ptr [0x1074e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074e3a4))), 0x1072b187u);
  /* 1072b187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072b18a:;
  /* 1072b18a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b18d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1072b190 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b193 jne 0x1072b1a7 */
  if (!C.zf) goto L_1072b1a7;
  /* 1072b195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b198 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1072b19b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1072b19e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b1a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b1a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1072b1a7:;
  /* 1072b1a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b1aa push eax */
  push32((uint32_t)(EAX));
  /* 1072b1ab call 0x10726930 */
  push32(0x1072b1b0u); f_10726930();
  /* 1072b1b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b1b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1072b1b6 jmp 0x1072b4c7 */
  goto L_1072b4c7;
L_1072b1bb:;
  /* 1072b1bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b1be or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1072b1c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1072b1c4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1072b1ce jmp 0x1072b255 */
  goto L_1072b255;
L_1072b1d3:;
  /* 1072b1d3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1072b1dd jmp 0x1072b255 */
  goto L_1072b255;
L_1072b1df:;
  /* 1072b1df mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1072b1e9:;
  /* 1072b1e9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1072b1f3 jmp 0x1072b1ff */
  goto L_1072b1ff;
L_1072b1f5:;
  /* 1072b1f5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1072b1ff:;
  /* 1072b1ff mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1072b209 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b20c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1072b212 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b214 je 0x1072b233 */
  if (C.zf) goto L_1072b233;
  /* 1072b216 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1072b21d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1072b223 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b226 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1072b22c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1072b233:;
  /* 1072b233 jmp 0x1072b255 */
  goto L_1072b255;
L_1072b235:;
  /* 1072b235 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1072b23f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b242 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1072b248 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072b24a je 0x1072b255 */
  if (C.zf) goto L_1072b255;
  /* 1072b24c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b24f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1072b252 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1072b255:;
  /* 1072b255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b258 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1072b25d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b25f je 0x1072b27e */
  if (C.zf) goto L_1072b27e;
  /* 1072b261 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1072b264 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b265 call 0x1072b8f0 */
  push32(0x1072b26au); f_1072b8f0();
  /* 1072b26a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b26d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1072b273 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1072b279 jmp 0x1072b30f */
  goto L_1072b30f;
L_1072b27e:;
  /* 1072b27e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b281 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1072b284 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b286 je 0x1072b2d0 */
  if (C.zf) goto L_1072b2d0;
  /* 1072b288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b28b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1072b28e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b290 je 0x1072b2b0 */
  if (C.zf) goto L_1072b2b0;
  /* 1072b292 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1072b295 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b296 call 0x1072b8d0 */
  push32(0x1072b29bu); f_1072b8d0();
  /* 1072b29b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b29e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1072b2a1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1072b2a2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1072b2a8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1072b2ae jmp 0x1072b2ce */
  goto L_1072b2ce;
L_1072b2b0:;
  /* 1072b2b0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1072b2b3 push edx */
  push32((uint32_t)(EDX));
  /* 1072b2b4 call 0x1072b8d0 */
  push32(0x1072b2b9u); f_1072b8d0();
  /* 1072b2b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b2bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072b2c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1072b2c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1072b2c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1072b2ce:;
  /* 1072b2ce jmp 0x1072b30f */
  goto L_1072b30f;
L_1072b2d0:;
  /* 1072b2d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b2d3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1072b2d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b2d8 je 0x1072b2f5 */
  if (C.zf) goto L_1072b2f5;
  /* 1072b2da lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1072b2dd push ecx */
  push32((uint32_t)(ECX));
  /* 1072b2de call 0x1072b8d0 */
  push32(0x1072b2e3u); f_1072b8d0();
  /* 1072b2e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b2e6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1072b2e7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1072b2ed mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1072b2f3 jmp 0x1072b30f */
  goto L_1072b30f;
L_1072b2f5:;
  /* 1072b2f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1072b2f8 push edx */
  push32((uint32_t)(EDX));
  /* 1072b2f9 call 0x1072b8d0 */
  push32(0x1072b2feu); f_1072b8d0();
  /* 1072b2fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b301 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072b303 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1072b309 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1072b30f:;
  /* 1072b30f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b312 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1072b315 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b317 je 0x1072b357 */
  if (C.zf) goto L_1072b357;
  /* 1072b319 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b320 jg 0x1072b357 */
  if ((!C.zf&&C.sf==C.of)) goto L_1072b357;
  /* 1072b322 jl 0x1072b32d */
  if ((C.sf!=C.of)) goto L_1072b32d;
  /* 1072b324 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b32b jae 0x1072b357 */
  if (!C.cf) goto L_1072b357;
L_1072b32d:;
  /* 1072b32d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1072b333 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072b335 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1072b33b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b33e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072b340 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1072b346 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1072b34c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b34f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1072b352 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072b355 jmp 0x1072b36f */
  goto L_1072b36f;
L_1072b357:;
  /* 1072b357 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1072b35d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1072b363 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1072b369 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1072b36f:;
  /* 1072b36f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b372 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1072b378 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b37a jne 0x1072b397 */
  if (!C.zf) goto L_1072b397;
  /* 1072b37c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1072b382 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1072b388 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1072b38b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1072b391 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1072b397:;
  /* 1072b397 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b39e jge 0x1072b3ac */
  if ((C.sf==C.of)) goto L_1072b3ac;
  /* 1072b3a0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1072b3aa jmp 0x1072b3b5 */
  goto L_1072b3b5;
L_1072b3ac:;
  /* 1072b3ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b3af and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1072b3b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1072b3b5:;
  /* 1072b3b5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1072b3bb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1072b3c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b3c3 jne 0x1072b3cc */
  if (!C.zf) goto L_1072b3cc;
  /* 1072b3c5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1072b3cc:;
  /* 1072b3cc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1072b3cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1072b3d2:;
  /* 1072b3d2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1072b3d8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1072b3de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b3e1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1072b3e7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b3e9 jg 0x1072b3ff */
  if ((!C.zf&&C.sf==C.of)) goto L_1072b3ff;
  /* 1072b3eb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1072b3f1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1072b3f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072b3f9 je 0x1072b480 */
  if (C.zf) goto L_1072b480;
L_1072b3ff:;
  /* 1072b3ff mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1072b405 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1072b406 push edx */
  push32((uint32_t)(EDX));
  /* 1072b407 push eax */
  push32((uint32_t)(EAX));
  /* 1072b408 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1072b40e push edx */
  push32((uint32_t)(EDX));
  /* 1072b40f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1072b415 push eax */
  push32((uint32_t)(EAX));
  /* 1072b416 call 0x1072a790 */
  push32(0x1072b41bu); f_1072a790();
  /* 1072b41b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b41e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1072b424 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1072b42a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1072b42b push edx */
  push32((uint32_t)(EDX));
  /* 1072b42c push eax */
  push32((uint32_t)(EAX));
  /* 1072b42d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1072b433 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b434 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1072b43a push edx */
  push32((uint32_t)(EDX));
  /* 1072b43b call 0x1072a720 */
  push32(0x1072b440u); f_1072a720();
  /* 1072b440 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1072b446 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1072b44c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b453 jle 0x1072b467 */
  if ((C.zf||C.sf!=C.of)) goto L_1072b467;
  /* 1072b455 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1072b45b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b461 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1072b467:;
  /* 1072b467 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b46a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1072b470 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1072b472 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b475 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b478 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1072b47b jmp 0x1072b3d2 */
  goto L_1072b3d2;
L_1072b480:;
  /* 1072b480 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1072b483 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b486 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1072b489 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b48c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b48f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1072b492 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b495 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1072b49a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b49c je 0x1072b4c7 */
  if (C.zf) goto L_1072b4c7;
  /* 1072b49e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b4a1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072b4a4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b4a7 jne 0x1072b4af */
  if (!C.zf) goto L_1072b4af;
  /* 1072b4a9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b4ad jne 0x1072b4c7 */
  if (!C.zf) goto L_1072b4c7;
L_1072b4af:;
  /* 1072b4af mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b4b2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b4b5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1072b4b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b4bb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1072b4be mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072b4c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b4c4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1072b4c7:;
  /* 1072b4c7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b4ce jne 0x1072b6a2 */
  if (!C.zf) goto L_1072b6a2;
  /* 1072b4d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b4d7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1072b4da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b4dc je 0x1072b52d */
  if (C.zf) goto L_1072b52d;
  /* 1072b4de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b4e1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1072b4e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072b4e9 je 0x1072b4fb */
  if (C.zf) goto L_1072b4fb;
  /* 1072b4eb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1072b4f2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1072b4f9 jmp 0x1072b52d */
  goto L_1072b52d;
L_1072b4fb:;
  /* 1072b4fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b4fe and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1072b501 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b503 je 0x1072b515 */
  if (C.zf) goto L_1072b515;
  /* 1072b505 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1072b50c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1072b513 jmp 0x1072b52d */
  goto L_1072b52d;
L_1072b515:;
  /* 1072b515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b518 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1072b51b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b51d je 0x1072b52d */
  if (C.zf) goto L_1072b52d;
  /* 1072b51f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1072b526 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1072b52d:;
  /* 1072b52d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1072b533 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b536 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b539 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1072b53f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b542 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1072b545 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b547 jne 0x1072b565 */
  if (!C.zf) goto L_1072b565;
  /* 1072b549 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1072b54f push eax */
  push32((uint32_t)(EAX));
  /* 1072b550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b553 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b554 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1072b55a push edx */
  push32((uint32_t)(EDX));
  /* 1072b55b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1072b55d call 0x1072b840 */
  push32(0x1072b562u); f_1072b840();
  /* 1072b562 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072b565:;
  /* 1072b565 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1072b56b push eax */
  push32((uint32_t)(EAX));
  /* 1072b56c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b56f push ecx */
  push32((uint32_t)(ECX));
  /* 1072b570 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072b573 push edx */
  push32((uint32_t)(EDX));
  /* 1072b574 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1072b57a push eax */
  push32((uint32_t)(EAX));
  /* 1072b57b call 0x1072b880 */
  push32(0x1072b580u); f_1072b880();
  /* 1072b580 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b586 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1072b589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072b58b je 0x1072b5b3 */
  if (C.zf) goto L_1072b5b3;
  /* 1072b58d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b590 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1072b593 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b595 jne 0x1072b5b3 */
  if (!C.zf) goto L_1072b5b3;
  /* 1072b597 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1072b59d push eax */
  push32((uint32_t)(EAX));
  /* 1072b59e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b5a1 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b5a2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1072b5a8 push edx */
  push32((uint32_t)(EDX));
  /* 1072b5a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1072b5ab call 0x1072b840 */
  push32(0x1072b5b0u); f_1072b840();
  /* 1072b5b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072b5b3:;
  /* 1072b5b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b5b7 je 0x1072b661 */
  if (C.zf) goto L_1072b661;
  /* 1072b5bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b5c1 jle 0x1072b661 */
  if ((C.zf||C.sf!=C.of)) goto L_1072b661;
  /* 1072b5c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b5ca mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1072b5d0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072b5d3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1072b5d9:;
  /* 1072b5d9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1072b5df mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1072b5e5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b5e8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1072b5ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b5f0 je 0x1072b65f */
  if (C.zf) goto L_1072b65f;
  /* 1072b5f2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1072b5f8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1072b5fb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1072b602 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1072b609 push eax */
  push32((uint32_t)(EAX));
  /* 1072b60a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1072b610 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b611 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1072b617 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b61a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1072b620 call 0x1072c9f0 */
  push32(0x1072b625u); f_1072c9f0();
  /* 1072b625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b628 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1072b62e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b635 jg 0x1072b639 */
  if ((!C.zf&&C.sf==C.of)) goto L_1072b639;
  /* 1072b637 jmp 0x1072b65f */
  goto L_1072b65f;
L_1072b639:;
  /* 1072b639 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1072b63f push eax */
  push32((uint32_t)(EAX));
  /* 1072b640 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b643 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b644 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1072b64a push edx */
  push32((uint32_t)(EDX));
  /* 1072b64b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1072b651 push eax */
  push32((uint32_t)(EAX));
  /* 1072b652 call 0x1072b880 */
  push32(0x1072b657u); f_1072b880();
  /* 1072b657 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b65a jmp 0x1072b5d9 */
  goto L_1072b5d9;
L_1072b65f:;
  /* 1072b65f jmp 0x1072b67c */
  goto L_1072b67c;
L_1072b661:;
  /* 1072b661 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1072b667 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b66b push edx */
  push32((uint32_t)(EDX));
  /* 1072b66c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072b66f push eax */
  push32((uint32_t)(EAX));
  /* 1072b670 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072b673 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b674 call 0x1072b880 */
  push32(0x1072b679u); f_1072b880();
  /* 1072b679 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072b67c:;
  /* 1072b67c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b67f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1072b682 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072b684 je 0x1072b6a2 */
  if (C.zf) goto L_1072b6a2;
  /* 1072b686 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1072b68c push eax */
  push32((uint32_t)(EAX));
  /* 1072b68d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b690 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b691 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1072b697 push edx */
  push32((uint32_t)(EDX));
  /* 1072b698 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1072b69a call 0x1072b840 */
  push32(0x1072b69fu); f_1072b840();
  /* 1072b69f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072b6a2:;
  /* 1072b6a2 jmp 0x1072aab4 */
  goto L_1072aab4;
L_1072b6a7:;
  /* 1072b6a7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1072b6ad pop edi */
  EDI = (pop32());
  /* 1072b6ae pop esi */
  ESI = (pop32());
  /* 1072b6af pop ebx */
  EBX = (pop32());
  /* 1072b6b0 mov esp, ebp */
  ESP = (EBP);
  /* 1072b6b2 pop ebp */
  EBP = (pop32());
  /* 1072b6b3 ret  */
  ESPCHK(0x1072aa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7c0 @ 0x1072b7c0 (119 bytes, 44 insns) */
void f_1072b7c0(void) {
  FTRACE(0x1072b7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1072b7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b7c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b7c7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1072b7ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b7cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b7d0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1072b7d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b7d6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b7da jl 0x1072b802 */
  if ((C.sf!=C.of)) goto L_1072b802;
  /* 1072b7dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b7df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072b7e1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1072b7e4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1072b7e6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1072b7ea and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1072b7f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1072b7f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b7f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1072b7f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b7fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b7fe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1072b800 jmp 0x1072b815 */
  goto L_1072b815;
L_1072b802:;
  /* 1072b802 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b805 push edx */
  push32((uint32_t)(EDX));
  /* 1072b806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b809 push eax */
  push32((uint32_t)(EAX));
  /* 1072b80a call 0x1072a810 */
  push32(0x1072b80fu); f_1072a810();
  /* 1072b80f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b812 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072b815:;
  /* 1072b815 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b819 jne 0x1072b826 */
  if (!C.zf) goto L_1072b826;
  /* 1072b81b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072b81e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1072b824 jmp 0x1072b833 */
  goto L_1072b833;
L_1072b826:;
  /* 1072b826 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072b829 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1072b82b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b82e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072b831 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1072b833:;
  /* 1072b833 mov esp, ebp */
  ESP = (EBP);
  /* 1072b835 pop ebp */
  EBP = (pop32());
  /* 1072b836 ret  */
  ESPCHK(0x1072b7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x1072b840 (53 bytes, 23 insns) */
void f_1072b840(void) {
  FTRACE(0x1072b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b840 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b841 mov ebp, esp */
  EBP = (ESP);
L_1072b843:;
  /* 1072b843 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b846 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b849 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b84c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1072b84f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b851 jle 0x1072b873 */
  if ((C.zf||C.sf!=C.of)) goto L_1072b873;
  /* 1072b853 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072b856 push edx */
  push32((uint32_t)(EDX));
  /* 1072b857 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072b85a push eax */
  push32((uint32_t)(EAX));
  /* 1072b85b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b85e push ecx */
  push32((uint32_t)(ECX));
  /* 1072b85f call 0x1072b7c0 */
  push32(0x1072b864u); f_1072b7c0();
  /* 1072b864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b867 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072b86a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b86d jne 0x1072b871 */
  if (!C.zf) goto L_1072b871;
  /* 1072b86f jmp 0x1072b873 */
  goto L_1072b873;
L_1072b871:;
  /* 1072b871 jmp 0x1072b843 */
  goto L_1072b843;
L_1072b873:;
  /* 1072b873 pop ebp */
  EBP = (pop32());
  /* 1072b874 ret  */
  ESPCHK(0x1072b840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b880 @ 0x1072b880 (74 bytes, 31 insns) */
void f_1072b880(void) {
  FTRACE(0x1072b880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b880 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b881 mov ebp, esp */
  EBP = (ESP);
  /* 1072b883 push ecx */
  push32((uint32_t)(ECX));
L_1072b884:;
  /* 1072b884 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b887 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b88a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b88d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1072b890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072b892 jle 0x1072b8c6 */
  if ((C.zf||C.sf!=C.of)) goto L_1072b8c6;
  /* 1072b894 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072b897 push edx */
  push32((uint32_t)(EDX));
  /* 1072b898 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072b89b push eax */
  push32((uint32_t)(EAX));
  /* 1072b89c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b89f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072b8a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072b8a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b8a8 push eax */
  push32((uint32_t)(EAX));
  /* 1072b8a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b8ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b8af mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1072b8b2 call 0x1072b7c0 */
  push32(0x1072b8b7u); f_1072b7c0();
  /* 1072b8b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b8ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072b8bd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b8c0 jne 0x1072b8c4 */
  if (!C.zf) goto L_1072b8c4;
  /* 1072b8c2 jmp 0x1072b8c6 */
  goto L_1072b8c6;
L_1072b8c4:;
  /* 1072b8c4 jmp 0x1072b884 */
  goto L_1072b884;
L_1072b8c6:;
  /* 1072b8c6 mov esp, ebp */
  ESP = (EBP);
  /* 1072b8c8 pop ebp */
  EBP = (pop32());
  /* 1072b8c9 ret  */
  ESPCHK(0x1072b880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8d0 @ 0x1072b8d0 (26 bytes, 12 insns) */
void f_1072b8d0(void) {
  FTRACE(0x1072b8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1072b8d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b8d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072b8d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b8db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b8de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1072b8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b8e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072b8e5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1072b8e8 pop ebp */
  EBP = (pop32());
  /* 1072b8e9 ret  */
  ESPCHK(0x1072b8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8f0 @ 0x1072b8f0 (31 bytes, 14 insns) */
void f_1072b8f0(void) {
  FTRACE(0x1072b8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1072b8f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b8f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072b8f8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b8fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b8fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1072b900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b903 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072b905 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072b908 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1072b90a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072b90d pop ebp */
  EBP = (pop32());
  /* 1072b90e ret  */
  ESPCHK(0x1072b8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b910 @ 0x1072b910 (27 bytes, 12 insns) */
void f_1072b910(void) {
  FTRACE(0x1072b910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b910 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b911 mov ebp, esp */
  EBP = (ESP);
  /* 1072b913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b916 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072b918 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b91b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b91e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1072b920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b923 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072b925 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1072b929 pop ebp */
  EBP = (pop32());
  /* 1072b92a ret  */
  ESPCHK(0x1072b910u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1072b930 (145 bytes, 42 insns) */
void f_1072b930(void) {
  FTRACE(0x1072b930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b930 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b931 mov ebp, esp */
  EBP = (ESP);
  /* 1072b933 push ecx */
  push32((uint32_t)(ECX));
  /* 1072b934 call 0x1072b9e0 */
  push32(0x1072b939u); f_1072b9e0();
  /* 1072b939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b93c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1072b93e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072b945 jmp 0x1072b950 */
  goto L_1072b950;
L_1072b947:;
  /* 1072b947 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b94a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b94d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1072b950:;
  /* 1072b950 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b954 jae 0x1072b97a */
  if (!C.cf) goto L_1072b97a;
  /* 1072b956 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b959 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b95c cmp ecx, dword ptr [eax*8 + 0x1074dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1074dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b963 jne 0x1072b978 */
  if (!C.zf) goto L_1072b978;
  /* 1072b965 call 0x1072b9d0 */
  push32(0x1072b96au); f_1072b9d0();
  /* 1072b96a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072b96d mov ecx, dword ptr [edx*8 + 0x1074dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1074dfbc)));
  /* 1072b974 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1072b976 jmp 0x1072b9bd */
  goto L_1072b9bd;
L_1072b978:;
  /* 1072b978 jmp 0x1072b947 */
  goto L_1072b947;
L_1072b97a:;
  /* 1072b97a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b97e jb 0x1072b993 */
  if (C.cf) goto L_1072b993;
  /* 1072b980 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b984 ja 0x1072b993 */
  if ((!C.cf&&!C.zf)) goto L_1072b993;
  /* 1072b986 call 0x1072b9d0 */
  push32(0x1072b98bu); f_1072b9d0();
  /* 1072b98b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1072b991 jmp 0x1072b9bd */
  goto L_1072b9bd;
L_1072b993:;
  /* 1072b993 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b99a jb 0x1072b9b2 */
  if (C.cf) goto L_1072b9b2;
  /* 1072b99c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072b9a3 ja 0x1072b9b2 */
  if ((!C.cf&&!C.zf)) goto L_1072b9b2;
  /* 1072b9a5 call 0x1072b9d0 */
  push32(0x1072b9aau); f_1072b9d0();
  /* 1072b9aa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1072b9b0 jmp 0x1072b9bd */
  goto L_1072b9bd;
L_1072b9b2:;
  /* 1072b9b2 call 0x1072b9d0 */
  push32(0x1072b9b7u); f_1072b9d0();
  /* 1072b9b7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1072b9bd:;
  /* 1072b9bd mov esp, ebp */
  ESP = (EBP);
  /* 1072b9bf pop ebp */
  EBP = (pop32());
  /* 1072b9c0 ret  */
  ESPCHK(0x1072b930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x1072b9d0 (13 bytes, 6 insns) */
void f_1072b9d0(void) {
  FTRACE(0x1072b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1072b9d3 call 0x10723540 */
  push32(0x1072b9d8u); f_10723540();
  /* 1072b9d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b9db pop ebp */
  EBP = (pop32());
  /* 1072b9dc ret  */
  ESPCHK(0x1072b9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e0 @ 0x1072b9e0 (13 bytes, 6 insns) */
void f_1072b9e0(void) {
  FTRACE(0x1072b9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1072b9e3 call 0x10723540 */
  push32(0x1072b9e8u); f_10723540();
  /* 1072b9e8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072b9eb pop ebp */
  EBP = (pop32());
  /* 1072b9ec ret  */
  ESPCHK(0x1072b9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9f0 @ 0x1072b9f0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1072b9f0(void) {
  FTRACE(0x1072b9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072b9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072b9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1072b9f3 push edi */
  push32((uint32_t)(EDI));
  /* 1072b9f4 push esi */
  push32((uint32_t)(ESI));
  /* 1072b9f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1072b9f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072b9fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1072b9fe mov eax, ecx */
  EAX = (ECX);
  /* 1072ba00 mov edx, ecx */
  EDX = (ECX);
  /* 1072ba02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ba04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ba06 jbe 0x1072ba10 */
  if ((C.cf||C.zf)) goto L_1072ba10;
  /* 1072ba08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ba0a jb 0x1072bb88 */
  if (C.cf) goto L_1072bb88;
L_1072ba10:;
  /* 1072ba10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1072ba16 jne 0x1072ba2c */
  if (!C.zf) goto L_1072ba2c;
  /* 1072ba18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072ba1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1072ba1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ba21 jb 0x1072ba4c */
  if (C.cf) goto L_1072ba4c;
  /* 1072ba23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072ba25 jmp dword ptr [edx*4 + 0x1072bb38] */
  switch (EDX) {
    case 0: goto L_1072bb48;
    case 1: goto L_1072bb50;
    case 2: goto L_1072bb5c;
    case 3: goto L_1072bb70;
    default: x86_unimpl("switch@0x1072ba25 out of table"); return;
  }
L_1072ba2c:;
  /* 1072ba2c mov eax, edi */
  EAX = (EDI);
  /* 1072ba2e mov edx, 3 */
  EDX = (0x3u);
  /* 1072ba33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072ba36 jb 0x1072ba44 */
  if (C.cf) goto L_1072ba44;
  /* 1072ba38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1072ba3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ba3d jmp dword ptr [eax*4 + 0x1072ba50] */
  switch (EAX) {
    case 1: goto L_1072ba60;
    case 2: goto L_1072ba8c;
    case 3: goto L_1072bab0;
    default: x86_unimpl("switch@0x1072ba3d out of table"); return;
  }
L_1072ba44:;
  /* 1072ba44 jmp dword ptr [ecx*4 + 0x1072bb48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1072bb48)))); return;
  /* 1072ba4b nop  */
  /* nop */
L_1072ba4c:;
  /* 1072ba4c jmp dword ptr [ecx*4 + 0x1072bacc] */
  switch (ECX) {
    case 0: goto L_1072bb2f;
    case 1: goto L_1072bb1c;
    case 2: goto L_1072bb14;
    case 3: goto L_1072bb0c;
    case 4: goto L_1072bb04;
    case 5: goto L_1072bafc;
    case 6: goto L_1072baf4;
    case 7: goto L_1072baec;
    default: x86_unimpl("switch@0x1072ba4c out of table"); return;
  }
  /* 1072ba53 nop  */
  /* nop */
L_1072ba60:;
  /* 1072ba60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072ba62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072ba64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072ba66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072ba69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072ba6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072ba6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072ba72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072ba75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ba78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ba7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ba7e jb 0x1072ba4c */
  if (C.cf) goto L_1072ba4c;
  /* 1072ba80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072ba82 jmp dword ptr [edx*4 + 0x1072bb38] */
  switch (EDX) {
    case 0: goto L_1072bb48;
    case 1: goto L_1072bb50;
    case 2: goto L_1072bb5c;
    case 3: goto L_1072bb70;
    default: x86_unimpl("switch@0x1072ba82 out of table"); return;
  }
  /* 1072ba89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072ba8c:;
  /* 1072ba8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072ba8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072ba90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072ba92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072ba95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072ba98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072ba9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ba9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072baa1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072baa4 jb 0x1072ba4c */
  if (C.cf) goto L_1072ba4c;
  /* 1072baa6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072baa8 jmp dword ptr [edx*4 + 0x1072bb38] */
  switch (EDX) {
    case 0: goto L_1072bb48;
    case 1: goto L_1072bb50;
    case 2: goto L_1072bb5c;
    case 3: goto L_1072bb70;
    default: x86_unimpl("switch@0x1072baa8 out of table"); return;
  }
  /* 1072baaf nop  */
  /* nop */
L_1072bab0:;
  /* 1072bab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072bab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072bab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072bab6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1072bab7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072baba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1072babb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072babe jb 0x1072ba4c */
  if (C.cf) goto L_1072ba4c;
  /* 1072bac0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072bac2 jmp dword ptr [edx*4 + 0x1072bb38] */
  switch (EDX) {
    case 0: goto L_1072bb48;
    case 1: goto L_1072bb50;
    case 2: goto L_1072bb5c;
    case 3: goto L_1072bb70;
    default: x86_unimpl("switch@0x1072bac2 out of table"); return;
  }
  /* 1072bac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072baec:;
  /* 1072baec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1072baf0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1072baf4:;
  /* 1072baf4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1072baf8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1072bafc:;
  /* 1072bafc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1072bb00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1072bb04:;
  /* 1072bb04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1072bb08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1072bb0c:;
  /* 1072bb0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1072bb10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1072bb14:;
  /* 1072bb14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1072bb18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1072bb1c:;
  /* 1072bb1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1072bb20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1072bb24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1072bb2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072bb2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1072bb2f:;
  /* 1072bb2f jmp dword ptr [edx*4 + 0x1072bb38] */
  switch (EDX) {
    case 0: goto L_1072bb48;
    case 1: goto L_1072bb50;
    case 2: goto L_1072bb5c;
    case 3: goto L_1072bb70;
    default: x86_unimpl("switch@0x1072bb2f out of table"); return;
  }
  /* 1072bb36 mov edi, edi */
  EDI = (EDI);
L_1072bb48:;
  /* 1072bb48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bb4b pop esi */
  ESI = (pop32());
  /* 1072bb4c pop edi */
  EDI = (pop32());
  /* 1072bb4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072bb4e ret  */
  ESPCHK(0x1072b9f0u, _esp0);
  ESP += 4; return;
  /* 1072bb4f nop  */
  /* nop */
L_1072bb50:;
  /* 1072bb50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072bb52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072bb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bb57 pop esi */
  ESI = (pop32());
  /* 1072bb58 pop edi */
  EDI = (pop32());
  /* 1072bb59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072bb5a ret  */
  ESPCHK(0x1072b9f0u, _esp0);
  ESP += 4; return;
  /* 1072bb5b nop  */
  /* nop */
L_1072bb5c:;
  /* 1072bb5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072bb5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072bb60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072bb63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072bb66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bb69 pop esi */
  ESI = (pop32());
  /* 1072bb6a pop edi */
  EDI = (pop32());
  /* 1072bb6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072bb6c ret  */
  ESPCHK(0x1072b9f0u, _esp0);
  ESP += 4; return;
  /* 1072bb6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072bb70:;
  /* 1072bb70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072bb72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1072bb74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072bb77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072bb7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072bb7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072bb80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bb83 pop esi */
  ESI = (pop32());
  /* 1072bb84 pop edi */
  EDI = (pop32());
  /* 1072bb85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072bb86 ret  */
  ESPCHK(0x1072b9f0u, _esp0);
  ESP += 4; return;
  /* 1072bb87 nop  */
  /* nop */
L_1072bb88:;
  /* 1072bb88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1072bb8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1072bb90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1072bb96 jne 0x1072bbbc */
  if (!C.zf) goto L_1072bbbc;
  /* 1072bb98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072bb9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1072bb9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bba1 jb 0x1072bbb0 */
  if (C.cf) goto L_1072bbb0;
  /* 1072bba3 std  */
  C.df=1;
  /* 1072bba4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072bba6 cld  */
  C.df=0;
  /* 1072bba7 jmp dword ptr [edx*4 + 0x1072bcd0] */
  switch (EDX) {
    case 0: goto L_1072bce0;
    case 1: goto L_1072bce8;
    case 2: goto L_1072bcf8;
    case 3: goto L_1072bd0c;
    default: x86_unimpl("switch@0x1072bba7 out of table"); return;
  }
  /* 1072bbae mov edi, edi */
  EDI = (EDI);
L_1072bbb0:;
  /* 1072bbb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072bbb2 jmp dword ptr [ecx*4 + 0x1072bc80] */
  switch (ECX) {
    case 0: goto L_1072bcc7;
    default: x86_unimpl("switch@0x1072bbb2 out of table"); return;
  }
  /* 1072bbb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072bbbc:;
  /* 1072bbbc mov eax, edi */
  EAX = (EDI);
  /* 1072bbbe mov edx, 3 */
  EDX = (0x3u);
  /* 1072bbc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bbc6 jb 0x1072bbd4 */
  if (C.cf) goto L_1072bbd4;
  /* 1072bbc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1072bbcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072bbcd jmp dword ptr [eax*4 + 0x1072bbd8] */
  switch (EAX) {
    case 1: goto L_1072bbe8;
    case 2: goto L_1072bc08;
    case 3: goto L_1072bc30;
    default: x86_unimpl("switch@0x1072bbcd out of table"); return;
  }
L_1072bbd4:;
  /* 1072bbd4 jmp dword ptr [ecx*4 + 0x1072bcd0] */
  switch (ECX) {
    case 0: goto L_1072bce0;
    case 1: goto L_1072bce8;
    case 2: goto L_1072bcf8;
    case 3: goto L_1072bd0c;
    default: x86_unimpl("switch@0x1072bbd4 out of table"); return;
  }
  /* 1072bbdb nop  */
  /* nop */
L_1072bbe8:;
  /* 1072bbe8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072bbeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072bbed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072bbf0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1072bbf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072bbf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1072bbf5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bbf8 jb 0x1072bbb0 */
  if (C.cf) goto L_1072bbb0;
  /* 1072bbfa std  */
  C.df=1;
  /* 1072bbfb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072bbfd cld  */
  C.df=0;
  /* 1072bbfe jmp dword ptr [edx*4 + 0x1072bcd0] */
  switch (EDX) {
    case 0: goto L_1072bce0;
    case 1: goto L_1072bce8;
    case 2: goto L_1072bcf8;
    case 3: goto L_1072bd0c;
    default: x86_unimpl("switch@0x1072bbfe out of table"); return;
  }
  /* 1072bc05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072bc08:;
  /* 1072bc08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072bc0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072bc0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072bc10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072bc13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072bc16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072bc19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072bc1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072bc1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bc22 jb 0x1072bbb0 */
  if (C.cf) goto L_1072bbb0;
  /* 1072bc24 std  */
  C.df=1;
  /* 1072bc25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072bc27 cld  */
  C.df=0;
  /* 1072bc28 jmp dword ptr [edx*4 + 0x1072bcd0] */
  switch (EDX) {
    case 0: goto L_1072bce0;
    case 1: goto L_1072bce8;
    case 2: goto L_1072bcf8;
    case 3: goto L_1072bd0c;
    default: x86_unimpl("switch@0x1072bc28 out of table"); return;
  }
  /* 1072bc2f nop  */
  /* nop */
L_1072bc30:;
  /* 1072bc30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072bc33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1072bc35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072bc38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072bc3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072bc3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072bc41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1072bc44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072bc47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072bc4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072bc4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bc50 jb 0x1072bbb0 */
  if (C.cf) goto L_1072bbb0;
  /* 1072bc56 std  */
  C.df=1;
  /* 1072bc57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1072bc59 cld  */
  C.df=0;
  /* 1072bc5a jmp dword ptr [edx*4 + 0x1072bcd0] */
  switch (EDX) {
    case 0: goto L_1072bce0;
    case 1: goto L_1072bce8;
    case 2: goto L_1072bcf8;
    case 3: goto L_1072bd0c;
    default: x86_unimpl("switch@0x1072bc5a out of table"); return;
  }
  /* 1072bc61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1072bc64 test byte ptr [edx + esi*2 + 0x72bc8c10], bh */
  { uint32_t _r=(r8((uint32_t)(EDX + ESI*2 + 0x72bc8c10)))&(C.b.b.h); fl_logic(_r,8); }
  /* 1072bc6b adc byte ptr [esp + edi*4 - 0x4363ef8e], dl */
  { uint32_t _a=(r8((uint32_t)(ESP + EDI*4 + -0x4363ef8e))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDI*4 + -0x4363ef8e), (_r)); fl_add(_a,_b,_r,8); }
  /* 1072bc72 jb 0x1072bc84 */
  if (C.cf) goto L_1072bc84;
  /* 1072bc74 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1072bc75 mov esp, 0xbcac1072 */
  ESP = (0xbcac1072u);
  /* 1072bc7a jb 0x1072bc8c */
  if (C.cf) goto L_1072bc8c;
  /* 1072bc7c mov ah, 0xbc */
  AH = (0xbcu);
  /* 1072bc7e jb 0x1072bc90 */
  if (C.cf) goto L_1072bc90;
L_1072bc84:;
  /* 1072bc84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1072bc88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
L_1072bc8c:;
  /* 1072bc8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
L_1072bc90:;
  /* 1072bc90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1072bc94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1072bc98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1072bc9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1072bca0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1072bca4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1072bca8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1072bcac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1072bcb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1072bcb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1072bcb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1072bcbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1072bcc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1072bcc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1072bcc7:;
  /* 1072bcc7 jmp dword ptr [edx*4 + 0x1072bcd0] */
  switch (EDX) {
    case 0: goto L_1072bce0;
    case 1: goto L_1072bce8;
    case 2: goto L_1072bcf8;
    case 3: goto L_1072bd0c;
    default: x86_unimpl("switch@0x1072bcc7 out of table"); return;
  }
  /* 1072bcce mov edi, edi */
  EDI = (EDI);
L_1072bce0:;
  /* 1072bce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bce3 pop esi */
  ESI = (pop32());
  /* 1072bce4 pop edi */
  EDI = (pop32());
  /* 1072bce5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072bce6 ret  */
  ESPCHK(0x1072b9f0u, _esp0);
  ESP += 4; return;
  /* 1072bce7 nop  */
  /* nop */
L_1072bce8:;
  /* 1072bce8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072bceb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072bcee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bcf1 pop esi */
  ESI = (pop32());
  /* 1072bcf2 pop edi */
  EDI = (pop32());
  /* 1072bcf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072bcf4 ret  */
  ESPCHK(0x1072b9f0u, _esp0);
  ESP += 4; return;
  /* 1072bcf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072bcf8:;
  /* 1072bcf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072bcfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072bcfe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072bd01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072bd04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bd07 pop esi */
  ESI = (pop32());
  /* 1072bd08 pop edi */
  EDI = (pop32());
  /* 1072bd09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072bd0a ret  */
  ESPCHK(0x1072b9f0u, _esp0);
  ESP += 4; return;
  /* 1072bd0b nop  */
  /* nop */
L_1072bd0c:;
  /* 1072bd0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1072bd0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1072bd12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1072bd15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1072bd18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1072bd1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1072bd1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bd21 pop esi */
  ESI = (pop32());
  /* 1072bd22 pop edi */
  EDI = (pop32());
  /* 1072bd23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072bd24 ret  */
  ESPCHK(0x1072b9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd30 @ 0x1072bd30 (421 bytes, 148 insns) */
void f_1072bd30(void) {
  FTRACE(0x1072bd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072bd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1072bd31 mov ebp, esp */
  EBP = (ESP);
  /* 1072bd33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1072bd35 push 0x1074b068 */
  push32((uint32_t)(0x1074b068u));
  /* 1072bd3a push 0x1072cc08 */
  push32((uint32_t)(0x1072cc08u));
  /* 1072bd3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1072bd45 push eax */
  push32((uint32_t)(EAX));
  /* 1072bd46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1072bd4d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072bd50 push ebx */
  push32((uint32_t)(EBX));
  /* 1072bd51 push esi */
  push32((uint32_t)(ESI));
  /* 1072bd52 push edi */
  push32((uint32_t)(EDI));
  /* 1072bd53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1072bd56 cmp dword ptr [0x1074f6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bd5d jne 0x1072bdae */
  if (!C.zf) goto L_1072bdae;
  /* 1072bd5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1072bd62 push eax */
  push32((uint32_t)(EAX));
  /* 1072bd63 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072bd65 push 0x1074b064 */
  push32((uint32_t)(0x1074b064u));
  /* 1072bd6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1072bd6c call dword ptr [0x107522d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d0))), 0x1072bd72u);
  /* 1072bd72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072bd74 je 0x1072bd82 */
  if (C.zf) goto L_1072bd82;
  /* 1072bd76 mov dword ptr [0x1074f6f4], 1 */
  w32((uint32_t)(0x1074f6f4), (0x1u));
  /* 1072bd80 jmp 0x1072bdae */
  goto L_1072bdae;
L_1072bd82:;
  /* 1072bd82 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1072bd85 push ecx */
  push32((uint32_t)(ECX));
  /* 1072bd86 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072bd88 push 0x1074b060 */
  push32((uint32_t)(0x1074b060u));
  /* 1072bd8d push 1 */
  push32((uint32_t)(0x1u));
  /* 1072bd8f push 0 */
  push32((uint32_t)(0x0u));
  /* 1072bd91 call dword ptr [0x107522e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e0))), 0x1072bd97u);
  /* 1072bd97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072bd99 je 0x1072bda7 */
  if (C.zf) goto L_1072bda7;
  /* 1072bd9b mov dword ptr [0x1074f6f4], 2 */
  w32((uint32_t)(0x1074f6f4), (0x2u));
  /* 1072bda5 jmp 0x1072bdae */
  goto L_1072bdae;
L_1072bda7:;
  /* 1072bda7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072bda9 jmp 0x1072bed8 */
  goto L_1072bed8;
L_1072bdae:;
  /* 1072bdae cmp dword ptr [0x1074f6f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1074f6f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bdb5 jne 0x1072bde5 */
  if (!C.zf) goto L_1072bde5;
  /* 1072bdb7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bdbb jne 0x1072bdc6 */
  if (!C.zf) goto L_1072bdc6;
  /* 1072bdbd mov edx, dword ptr [0x1074f700] */
  EDX = (r32((uint32_t)(0x1074f700)));
  /* 1072bdc3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1072bdc6:;
  /* 1072bdc6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072bdc9 push eax */
  push32((uint32_t)(EAX));
  /* 1072bdca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072bdcd push ecx */
  push32((uint32_t)(ECX));
  /* 1072bdce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072bdd1 push edx */
  push32((uint32_t)(EDX));
  /* 1072bdd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bdd5 push eax */
  push32((uint32_t)(EAX));
  /* 1072bdd6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1072bdd9 push ecx */
  push32((uint32_t)(ECX));
  /* 1072bdda call dword ptr [0x107522e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e0))), 0x1072bde0u);
  /* 1072bde0 jmp 0x1072bed8 */
  goto L_1072bed8;
L_1072bde5:;
  /* 1072bde5 cmp dword ptr [0x1074f6f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f6f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bdec jne 0x1072bed6 */
  if (!C.zf) goto L_1072bed6;
  /* 1072bdf2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bdf6 jne 0x1072be01 */
  if (!C.zf) goto L_1072be01;
  /* 1072bdf8 mov edx, dword ptr [0x1074f710] */
  EDX = (r32((uint32_t)(0x1074f710)));
  /* 1072bdfe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1072be01:;
  /* 1072be01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072be03 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072be05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072be08 push eax */
  push32((uint32_t)(EAX));
  /* 1072be09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072be0c push ecx */
  push32((uint32_t)(ECX));
  /* 1072be0d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1072be10 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072be12 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072be14 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1072be17 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072be1a push edx */
  push32((uint32_t)(EDX));
  /* 1072be1b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072be1e push eax */
  push32((uint32_t)(EAX));
  /* 1072be1f call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x1072be25u);
  /* 1072be25 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1072be28 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072be2c jne 0x1072be35 */
  if (!C.zf) goto L_1072be35;
  /* 1072be2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072be30 jmp 0x1072bed8 */
  goto L_1072bed8;
L_1072be35:;
  /* 1072be35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072be3c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072be3f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1072be41 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072be44 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1072be46 call 0x10726ca0 */
  push32(0x1072be4bu); f_10726ca0();
  /* 1072be4b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1072be4e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1072be51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072be54 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1072be57 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072be5a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1072be5c push edx */
  push32((uint32_t)(EDX));
  /* 1072be5d push 0 */
  push32((uint32_t)(0x0u));
  /* 1072be5f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072be62 push eax */
  push32((uint32_t)(EAX));
  /* 1072be63 call 0x10727870 */
  push32(0x1072be68u); f_10727870();
  /* 1072be68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072be6b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1072be72 jmp 0x1072be8b */
  goto L_1072be8b;
  /* 1072be74 mov eax, 1 */
  EAX = (0x1u);
  /* 1072be79 ret  */
  ESPCHK(0x1072bd30u, _esp0);
  ESP += 4; return;
  /* 1072be7a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1072be7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1072be84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1072be8b:;
  /* 1072be8b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072be8f jne 0x1072be95 */
  if (!C.zf) goto L_1072be95;
  /* 1072be91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072be93 jmp 0x1072bed8 */
  goto L_1072bed8;
L_1072be95:;
  /* 1072be95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072be98 push ecx */
  push32((uint32_t)(ECX));
  /* 1072be99 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072be9c push edx */
  push32((uint32_t)(EDX));
  /* 1072be9d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072bea0 push eax */
  push32((uint32_t)(EAX));
  /* 1072bea1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072bea4 push ecx */
  push32((uint32_t)(ECX));
  /* 1072bea5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072bea7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072beaa push edx */
  push32((uint32_t)(EDX));
  /* 1072beab call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x1072beb1u);
  /* 1072beb1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1072beb4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072beb8 jne 0x1072bebe */
  if (!C.zf) goto L_1072bebe;
  /* 1072beba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072bebc jmp 0x1072bed8 */
  goto L_1072bed8;
L_1072bebe:;
  /* 1072bebe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072bec1 push eax */
  push32((uint32_t)(EAX));
  /* 1072bec2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072bec5 push ecx */
  push32((uint32_t)(ECX));
  /* 1072bec6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072bec9 push edx */
  push32((uint32_t)(EDX));
  /* 1072beca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072becd push eax */
  push32((uint32_t)(EAX));
  /* 1072bece call dword ptr [0x107522d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d0))), 0x1072bed4u);
  /* 1072bed4 jmp 0x1072bed8 */
  goto L_1072bed8;
L_1072bed6:;
  /* 1072bed6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072bed8:;
  /* 1072bed8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1072bedb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072bede mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1072bee5 pop edi */
  EDI = (pop32());
  /* 1072bee6 pop esi */
  ESI = (pop32());
  /* 1072bee7 pop ebx */
  EBX = (pop32());
  /* 1072bee8 mov esp, ebp */
  ESP = (EBP);
  /* 1072beea pop ebp */
  EBP = (pop32());
  /* 1072beeb ret  */
  ESPCHK(0x1072bd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bef0 @ 0x1072bef0 (727 bytes, 263 insns) */
void f_1072bef0(void) {
  FTRACE(0x1072bef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072bef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072bef1 mov ebp, esp */
  EBP = (ESP);
  /* 1072bef3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1072bef5 push 0x1074b078 */
  push32((uint32_t)(0x1074b078u));
  /* 1072befa push 0x1072cc08 */
  push32((uint32_t)(0x1072cc08u));
  /* 1072beff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1072bf05 push eax */
  push32((uint32_t)(EAX));
  /* 1072bf06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1072bf0d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072bf10 push ebx */
  push32((uint32_t)(EBX));
  /* 1072bf11 push esi */
  push32((uint32_t)(ESI));
  /* 1072bf12 push edi */
  push32((uint32_t)(EDI));
  /* 1072bf13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1072bf16 cmp dword ptr [0x1074f718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bf1d jne 0x1072bf76 */
  if (!C.zf) goto L_1072bf76;
  /* 1072bf1f push 0 */
  push32((uint32_t)(0x0u));
  /* 1072bf21 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072bf23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072bf25 push 0x1074b064 */
  push32((uint32_t)(0x1074b064u));
  /* 1072bf2a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072bf2f push 0 */
  push32((uint32_t)(0x0u));
  /* 1072bf31 call dword ptr [0x107522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d4))), 0x1072bf37u);
  /* 1072bf37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072bf39 je 0x1072bf47 */
  if (C.zf) goto L_1072bf47;
  /* 1072bf3b mov dword ptr [0x1074f718], 1 */
  w32((uint32_t)(0x1074f718), (0x1u));
  /* 1072bf45 jmp 0x1072bf76 */
  goto L_1072bf76;
L_1072bf47:;
  /* 1072bf47 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072bf49 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072bf4b push 1 */
  push32((uint32_t)(0x1u));
  /* 1072bf4d push 0x1074b060 */
  push32((uint32_t)(0x1074b060u));
  /* 1072bf52 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072bf57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072bf59 call dword ptr [0x107522cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522cc))), 0x1072bf5fu);
  /* 1072bf5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072bf61 je 0x1072bf6f */
  if (C.zf) goto L_1072bf6f;
  /* 1072bf63 mov dword ptr [0x1074f718], 2 */
  w32((uint32_t)(0x1074f718), (0x2u));
  /* 1072bf6d jmp 0x1072bf76 */
  goto L_1072bf76;
L_1072bf6f:;
  /* 1072bf6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072bf71 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072bf76:;
  /* 1072bf76 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bf7a jle 0x1072bf8f */
  if ((C.zf||C.sf!=C.of)) goto L_1072bf8f;
  /* 1072bf7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072bf7f push eax */
  push32((uint32_t)(EAX));
  /* 1072bf80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072bf83 push ecx */
  push32((uint32_t)(ECX));
  /* 1072bf84 call 0x1072c200 */
  push32(0x1072bf89u); f_1072c200();
  /* 1072bf89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072bf8c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1072bf8f:;
  /* 1072bf8f cmp dword ptr [0x1074f718], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1074f718))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bf96 jne 0x1072bfbb */
  if (!C.zf) goto L_1072bfbb;
  /* 1072bf98 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1072bf9b push edx */
  push32((uint32_t)(EDX));
  /* 1072bf9c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072bf9f push eax */
  push32((uint32_t)(EAX));
  /* 1072bfa0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072bfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072bfa4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072bfa7 push edx */
  push32((uint32_t)(EDX));
  /* 1072bfa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072bfab push eax */
  push32((uint32_t)(EAX));
  /* 1072bfac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072bfaf push ecx */
  push32((uint32_t)(ECX));
  /* 1072bfb0 call dword ptr [0x107522cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522cc))), 0x1072bfb6u);
  /* 1072bfb6 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072bfbb:;
  /* 1072bfbb cmp dword ptr [0x1074f718], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f718))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bfc2 jne 0x1072c1df */
  if (!C.zf) goto L_1072c1df;
  /* 1072bfc8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072bfcc jne 0x1072bfd7 */
  if (!C.zf) goto L_1072bfd7;
  /* 1072bfce mov edx, dword ptr [0x1074f710] */
  EDX = (r32((uint32_t)(0x1074f710)));
  /* 1072bfd4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1072bfd7:;
  /* 1072bfd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072bfd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072bfdb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072bfde push eax */
  push32((uint32_t)(EAX));
  /* 1072bfdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072bfe2 push ecx */
  push32((uint32_t)(ECX));
  /* 1072bfe3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1072bfe6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072bfe8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072bfea and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1072bfed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072bff0 push edx */
  push32((uint32_t)(EDX));
  /* 1072bff1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1072bff4 push eax */
  push32((uint32_t)(EAX));
  /* 1072bff5 call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x1072bffbu);
  /* 1072bffb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1072bffe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c002 jne 0x1072c00b */
  if (!C.zf) goto L_1072c00b;
  /* 1072c004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c006 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c00b:;
  /* 1072c00b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072c012 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072c015 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1072c017 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c01a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1072c01c call 0x10726ca0 */
  push32(0x1072c021u); f_10726ca0();
  /* 1072c021 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1072c024 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1072c027 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072c02a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1072c02d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1072c034 jmp 0x1072c04d */
  goto L_1072c04d;
  /* 1072c036 mov eax, 1 */
  EAX = (0x1u);
  /* 1072c03b ret  */
  ESPCHK(0x1072bef0u, _esp0);
  ESP += 4; return;
  /* 1072c03c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1072c03f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1072c046 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1072c04d:;
  /* 1072c04d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c051 jne 0x1072c05a */
  if (!C.zf) goto L_1072c05a;
  /* 1072c053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c055 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c05a:;
  /* 1072c05a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072c05d push edx */
  push32((uint32_t)(EDX));
  /* 1072c05e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072c061 push eax */
  push32((uint32_t)(EAX));
  /* 1072c062 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072c065 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c066 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072c069 push edx */
  push32((uint32_t)(EDX));
  /* 1072c06a push 1 */
  push32((uint32_t)(0x1u));
  /* 1072c06c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1072c06f push eax */
  push32((uint32_t)(EAX));
  /* 1072c070 call dword ptr [0x107522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d8))), 0x1072c076u);
  /* 1072c076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072c078 jne 0x1072c081 */
  if (!C.zf) goto L_1072c081;
  /* 1072c07a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c07c jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c081:;
  /* 1072c081 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c083 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c085 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072c088 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c089 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072c08c push edx */
  push32((uint32_t)(EDX));
  /* 1072c08d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c090 push eax */
  push32((uint32_t)(EAX));
  /* 1072c091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c094 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c095 call dword ptr [0x107522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d4))), 0x1072c09bu);
  /* 1072c09b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1072c09e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c0a2 jne 0x1072c0ab */
  if (!C.zf) goto L_1072c0ab;
  /* 1072c0a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c0a6 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c0ab:;
  /* 1072c0ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c0ae and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1072c0b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072c0b6 je 0x1072c0fb */
  if (C.zf) goto L_1072c0fb;
  /* 1072c0b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c0bc je 0x1072c0f6 */
  if (C.zf) goto L_1072c0f6;
  /* 1072c0be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072c0c1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c0c4 jle 0x1072c0cd */
  if ((C.zf||C.sf!=C.of)) goto L_1072c0cd;
  /* 1072c0c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c0c8 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c0cd:;
  /* 1072c0cd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1072c0d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c0d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072c0d4 push edx */
  push32((uint32_t)(EDX));
  /* 1072c0d5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072c0d8 push eax */
  push32((uint32_t)(EAX));
  /* 1072c0d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072c0dc push ecx */
  push32((uint32_t)(ECX));
  /* 1072c0dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c0e0 push edx */
  push32((uint32_t)(EDX));
  /* 1072c0e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c0e4 push eax */
  push32((uint32_t)(EAX));
  /* 1072c0e5 call dword ptr [0x107522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d4))), 0x1072c0ebu);
  /* 1072c0eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072c0ed jne 0x1072c0f6 */
  if (!C.zf) goto L_1072c0f6;
  /* 1072c0ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c0f1 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c0f6:;
  /* 1072c0f6 jmp 0x1072c1da */
  goto L_1072c1da;
L_1072c0fb:;
  /* 1072c0fb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072c0fe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1072c101 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1072c108 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072c10b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1072c10d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c110 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1072c112 call 0x10726ca0 */
  push32(0x1072c117u); f_10726ca0();
  /* 1072c117 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1072c11a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1072c11d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1072c120 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1072c123 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1072c12a jmp 0x1072c143 */
  goto L_1072c143;
  /* 1072c12c mov eax, 1 */
  EAX = (0x1u);
  /* 1072c131 ret  */
  ESPCHK(0x1072bef0u, _esp0);
  ESP += 4; return;
  /* 1072c132 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1072c135 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1072c13c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1072c143:;
  /* 1072c143 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c147 jne 0x1072c150 */
  if (!C.zf) goto L_1072c150;
  /* 1072c149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c14b jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c150:;
  /* 1072c150 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072c153 push eax */
  push32((uint32_t)(EAX));
  /* 1072c154 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072c157 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c158 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072c15b push edx */
  push32((uint32_t)(EDX));
  /* 1072c15c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072c15f push eax */
  push32((uint32_t)(EAX));
  /* 1072c160 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c163 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c167 push edx */
  push32((uint32_t)(EDX));
  /* 1072c168 call dword ptr [0x107522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522d4))), 0x1072c16eu);
  /* 1072c16e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072c170 jne 0x1072c176 */
  if (!C.zf) goto L_1072c176;
  /* 1072c172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c174 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c176:;
  /* 1072c176 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c17a jne 0x1072c1aa */
  if (!C.zf) goto L_1072c1aa;
  /* 1072c17c push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c17e push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c180 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c182 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c184 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072c187 push eax */
  push32((uint32_t)(EAX));
  /* 1072c188 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072c18b push ecx */
  push32((uint32_t)(ECX));
  /* 1072c18c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1072c191 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1072c194 push edx */
  push32((uint32_t)(EDX));
  /* 1072c195 call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x1072c19bu);
  /* 1072c19b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1072c19e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c1a2 jne 0x1072c1a8 */
  if (!C.zf) goto L_1072c1a8;
  /* 1072c1a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c1a6 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c1a8:;
  /* 1072c1a8 jmp 0x1072c1da */
  goto L_1072c1da;
L_1072c1aa:;
  /* 1072c1aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c1ac push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c1ae mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1072c1b1 push eax */
  push32((uint32_t)(EAX));
  /* 1072c1b2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1072c1b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c1b6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072c1b9 push edx */
  push32((uint32_t)(EDX));
  /* 1072c1ba mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072c1bd push eax */
  push32((uint32_t)(EAX));
  /* 1072c1be push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1072c1c3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1072c1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c1c7 call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x1072c1cdu);
  /* 1072c1cd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1072c1d0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c1d4 jne 0x1072c1da */
  if (!C.zf) goto L_1072c1da;
  /* 1072c1d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c1d8 jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c1da:;
  /* 1072c1da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072c1dd jmp 0x1072c1e1 */
  goto L_1072c1e1;
L_1072c1df:;
  /* 1072c1df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072c1e1:;
  /* 1072c1e1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1072c1e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072c1e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1072c1ee pop edi */
  EDI = (pop32());
  /* 1072c1ef pop esi */
  ESI = (pop32());
  /* 1072c1f0 pop ebx */
  EBX = (pop32());
  /* 1072c1f1 mov esp, ebp */
  ESP = (EBP);
  /* 1072c1f3 pop ebp */
  EBP = (pop32());
  /* 1072c1f4 ret  */
  ESPCHK(0x1072bef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c200 @ 0x1072c200 (80 bytes, 32 insns) */
void f_1072c200(void) {
  FTRACE(0x1072c200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c200 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c201 mov ebp, esp */
  EBP = (ESP);
  /* 1072c203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c206 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c209 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072c20c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c20f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1072c212:;
  /* 1072c212 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072c215 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072c218 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c21b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072c21e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072c220 je 0x1072c237 */
  if (C.zf) goto L_1072c237;
  /* 1072c222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c225 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072c228 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072c22a je 0x1072c237 */
  if (C.zf) goto L_1072c237;
  /* 1072c22c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c22f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c232 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072c235 jmp 0x1072c212 */
  goto L_1072c212;
L_1072c237:;
  /* 1072c237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c23a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072c23d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072c23f jne 0x1072c249 */
  if (!C.zf) goto L_1072c249;
  /* 1072c241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c244 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c247 jmp 0x1072c24c */
  goto L_1072c24c;
L_1072c249:;
  /* 1072c249 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1072c24c:;
  /* 1072c24c mov esp, ebp */
  ESP = (EBP);
  /* 1072c24e pop ebp */
  EBP = (pop32());
  /* 1072c24f ret  */
  ESPCHK(0x1072c200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c250 @ 0x1072c250 (130 bytes, 43 insns) */
void f_1072c250(void) {
  FTRACE(0x1072c250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c250 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c251 mov ebp, esp */
  EBP = (ESP);
  /* 1072c253 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c257 cmp eax, dword ptr [0x1075101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1075101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c25d jae 0x1072c281 */
  if (!C.cf) goto L_1072c281;
  /* 1072c25f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c262 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072c265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c268 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072c26b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c26e mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072c275 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1072c27a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1072c27d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072c27f jne 0x1072c29c */
  if (!C.zf) goto L_1072c29c;
L_1072c281:;
  /* 1072c281 call 0x1072b9d0 */
  push32(0x1072c286u); f_1072b9d0();
  /* 1072c286 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1072c28c call 0x1072b9e0 */
  push32(0x1072c291u); f_1072b9e0();
  /* 1072c291 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1072c297 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072c29a jmp 0x1072c2ce */
  goto L_1072c2ce;
L_1072c29c:;
  /* 1072c29c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c29f push edx */
  push32((uint32_t)(EDX));
  /* 1072c2a0 call 0x1072d1f0 */
  push32(0x1072c2a5u); f_1072d1f0();
  /* 1072c2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c2a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072c2ab push eax */
  push32((uint32_t)(EAX));
  /* 1072c2ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c2af push ecx */
  push32((uint32_t)(ECX));
  /* 1072c2b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c2b3 push edx */
  push32((uint32_t)(EDX));
  /* 1072c2b4 call 0x1072c2e0 */
  push32(0x1072c2b9u); f_1072c2e0();
  /* 1072c2b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c2bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072c2bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c2c2 push eax */
  push32((uint32_t)(EAX));
  /* 1072c2c3 call 0x1072d280 */
  push32(0x1072c2c8u); f_1072d280();
  /* 1072c2c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c2cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1072c2ce:;
  /* 1072c2ce mov esp, ebp */
  ESP = (EBP);
  /* 1072c2d0 pop ebp */
  EBP = (pop32());
  /* 1072c2d1 ret  */
  ESPCHK(0x1072c250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2e0 @ 0x1072c2e0 (178 bytes, 56 insns) */
void f_1072c2e0(void) {
  FTRACE(0x1072c2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1072c2e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c2e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c2e9 push eax */
  push32((uint32_t)(EAX));
  /* 1072c2ea call 0x1072d070 */
  push32(0x1072c2efu); f_1072d070();
  /* 1072c2ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c2f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1072c2f5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c2f9 jne 0x1072c30e */
  if (!C.zf) goto L_1072c30e;
  /* 1072c2fb call 0x1072b9d0 */
  push32(0x1072c300u); f_1072b9d0();
  /* 1072c300 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1072c306 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072c309 jmp 0x1072c38e */
  goto L_1072c38e;
L_1072c30e:;
  /* 1072c30e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072c311 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c312 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c314 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c317 push edx */
  push32((uint32_t)(EDX));
  /* 1072c318 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072c31b push eax */
  push32((uint32_t)(EAX));
  /* 1072c31c call dword ptr [0x107522c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522c4))), 0x1072c322u);
  /* 1072c322 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072c325 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c329 jne 0x1072c336 */
  if (!C.zf) goto L_1072c336;
  /* 1072c32b call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x1072c331u);
  /* 1072c331 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072c334 jmp 0x1072c33d */
  goto L_1072c33d;
L_1072c336:;
  /* 1072c336 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1072c33d:;
  /* 1072c33d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c341 je 0x1072c354 */
  if (C.zf) goto L_1072c354;
  /* 1072c343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c346 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c347 call 0x1072b930 */
  push32(0x1072c34cu); f_1072b930();
  /* 1072c34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c34f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072c352 jmp 0x1072c38e */
  goto L_1072c38e;
L_1072c354:;
  /* 1072c354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c357 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1072c35a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c35d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1072c360 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c363 mov ecx, dword ptr [edx*4 + 0x10750ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10750ee0)));
  /* 1072c36a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1072c36e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1072c371 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c374 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072c377 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c37a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072c37d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c380 mov eax, dword ptr [eax*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072c387 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1072c38b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1072c38e:;
  /* 1072c38e mov esp, ebp */
  ESP = (EBP);
  /* 1072c390 pop ebp */
  EBP = (pop32());
  /* 1072c391 ret  */
  ESPCHK(0x1072c2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3a0 @ 0x1072c3a0 (130 bytes, 43 insns) */
void f_1072c3a0(void) {
  FTRACE(0x1072c3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1072c3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c3a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c3a7 cmp eax, dword ptr [0x1075101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1075101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c3ad jae 0x1072c3d1 */
  if (!C.cf) goto L_1072c3d1;
  /* 1072c3af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c3b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072c3b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c3b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072c3bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c3be mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072c3c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1072c3ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1072c3cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072c3cf jne 0x1072c3ec */
  if (!C.zf) goto L_1072c3ec;
L_1072c3d1:;
  /* 1072c3d1 call 0x1072b9d0 */
  push32(0x1072c3d6u); f_1072b9d0();
  /* 1072c3d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1072c3dc call 0x1072b9e0 */
  push32(0x1072c3e1u); f_1072b9e0();
  /* 1072c3e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1072c3e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072c3ea jmp 0x1072c41e */
  goto L_1072c41e;
L_1072c3ec:;
  /* 1072c3ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c3ef push edx */
  push32((uint32_t)(EDX));
  /* 1072c3f0 call 0x1072d1f0 */
  push32(0x1072c3f5u); f_1072d1f0();
  /* 1072c3f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c3f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072c3fb push eax */
  push32((uint32_t)(EAX));
  /* 1072c3fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c3ff push ecx */
  push32((uint32_t)(ECX));
  /* 1072c400 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c403 push edx */
  push32((uint32_t)(EDX));
  /* 1072c404 call 0x1072c430 */
  push32(0x1072c409u); f_1072c430();
  /* 1072c409 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c40c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072c40f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c412 push eax */
  push32((uint32_t)(EAX));
  /* 1072c413 call 0x1072d280 */
  push32(0x1072c418u); f_1072d280();
  /* 1072c418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c41b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1072c41e:;
  /* 1072c41e mov esp, ebp */
  ESP = (EBP);
  /* 1072c420 pop ebp */
  EBP = (pop32());
  /* 1072c421 ret  */
  ESPCHK(0x1072c3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x1072c430 (627 bytes, 182 insns) */
void f_1072c430(void) {
  FTRACE(0x1072c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c430 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c431 mov ebp, esp */
  EBP = (ESP);
  /* 1072c433 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c439 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1072c440 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072c443 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1072c449 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c44d jne 0x1072c456 */
  if (!C.zf) goto L_1072c456;
  /* 1072c44f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c451 jmp 0x1072c69f */
  goto L_1072c69f;
L_1072c456:;
  /* 1072c456 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c459 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072c45c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c45f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072c462 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c465 mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072c46c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1072c471 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1072c474 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072c476 je 0x1072c488 */
  if (C.zf) goto L_1072c488;
  /* 1072c478 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072c47a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c47c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c47f push edx */
  push32((uint32_t)(EDX));
  /* 1072c480 call 0x1072c2e0 */
  push32(0x1072c485u); f_1072c2e0();
  /* 1072c485 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072c488:;
  /* 1072c488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c48b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072c48e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c491 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072c494 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c497 mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072c49e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1072c4a3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1072c4a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072c4aa je 0x1072c5bc */
  if (C.zf) goto L_1072c5bc;
  /* 1072c4b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c4b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1072c4b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1072c4bd:;
  /* 1072c4bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c4c0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c4c3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c4c6 jae 0x1072c5ba */
  if (!C.cf) goto L_1072c5ba;
  /* 1072c4cc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1072c4d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1072c4d5:;
  /* 1072c4d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072c4d8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1072c4de sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c4e0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c4e6 jge 0x1072c547 */
  if ((C.sf==C.of)) goto L_1072c547;
  /* 1072c4e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c4eb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c4ee cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c4f1 jae 0x1072c547 */
  if (!C.cf) goto L_1072c547;
  /* 1072c4f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c4f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1072c4f8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1072c4fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c501 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c504 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072c507 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1072c50e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c511 jne 0x1072c531 */
  if (!C.zf) goto L_1072c531;
  /* 1072c513 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1072c519 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c51c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1072c522 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072c525 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1072c528 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072c52b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c52e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1072c531:;
  /* 1072c531 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072c534 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1072c53a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1072c53c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072c53f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c542 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072c545 jmp 0x1072c4d5 */
  goto L_1072c4d5;
L_1072c547:;
  /* 1072c547 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c549 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1072c54f push edx */
  push32((uint32_t)(EDX));
  /* 1072c550 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072c553 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1072c559 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c55b push eax */
  push32((uint32_t)(EAX));
  /* 1072c55c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1072c562 push edx */
  push32((uint32_t)(EDX));
  /* 1072c563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c566 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072c569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c56c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072c56f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c572 mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072c579 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1072c57c push eax */
  push32((uint32_t)(EAX));
  /* 1072c57d call dword ptr [0x1075230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075230c))), 0x1072c583u);
  /* 1072c583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072c585 je 0x1072c5aa */
  if (C.zf) goto L_1072c5aa;
  /* 1072c587 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072c58a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c590 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1072c593 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072c596 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1072c59c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c59e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c5a4 jge 0x1072c5a8 */
  if ((C.sf==C.of)) goto L_1072c5a8;
  /* 1072c5a6 jmp 0x1072c5ba */
  goto L_1072c5ba;
L_1072c5a8:;
  /* 1072c5a8 jmp 0x1072c5b5 */
  goto L_1072c5b5;
L_1072c5aa:;
  /* 1072c5aa call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x1072c5b0u);
  /* 1072c5b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1072c5b3 jmp 0x1072c5ba */
  goto L_1072c5ba;
L_1072c5b5:;
  /* 1072c5b5 jmp 0x1072c4bd */
  goto L_1072c4bd;
L_1072c5ba:;
  /* 1072c5ba jmp 0x1072c60c */
  goto L_1072c60c;
L_1072c5bc:;
  /* 1072c5bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c5be lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1072c5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c5c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072c5c8 push edx */
  push32((uint32_t)(EDX));
  /* 1072c5c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c5cc push eax */
  push32((uint32_t)(EAX));
  /* 1072c5cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c5d0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072c5d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c5d6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072c5d9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c5dc mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072c5e3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1072c5e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c5e7 call dword ptr [0x1075230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075230c))), 0x1072c5edu);
  /* 1072c5ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072c5ef je 0x1072c603 */
  if (C.zf) goto L_1072c603;
  /* 1072c5f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1072c5f8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1072c5fe mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1072c601 jmp 0x1072c60c */
  goto L_1072c60c;
L_1072c603:;
  /* 1072c603 call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x1072c609u);
  /* 1072c609 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1072c60c:;
  /* 1072c60c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c610 jne 0x1072c696 */
  if (!C.zf) goto L_1072c696;
  /* 1072c616 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c61a je 0x1072c64a */
  if (C.zf) goto L_1072c64a;
  /* 1072c61c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c620 jne 0x1072c639 */
  if (!C.zf) goto L_1072c639;
  /* 1072c622 call 0x1072b9d0 */
  push32(0x1072c627u); f_1072b9d0();
  /* 1072c627 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1072c62d call 0x1072b9e0 */
  push32(0x1072c632u); f_1072b9e0();
  /* 1072c632 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072c635 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1072c637 jmp 0x1072c645 */
  goto L_1072c645;
L_1072c639:;
  /* 1072c639 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072c63c push edx */
  push32((uint32_t)(EDX));
  /* 1072c63d call 0x1072b930 */
  push32(0x1072c642u); f_1072b930();
  /* 1072c642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072c645:;
  /* 1072c645 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072c648 jmp 0x1072c69f */
  goto L_1072c69f;
L_1072c64a:;
  /* 1072c64a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c64d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072c650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c653 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072c656 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c659 mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072c660 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1072c665 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1072c668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072c66a je 0x1072c67b */
  if (C.zf) goto L_1072c67b;
  /* 1072c66c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c66f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072c672 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c675 jne 0x1072c67b */
  if (!C.zf) goto L_1072c67b;
  /* 1072c677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c679 jmp 0x1072c69f */
  goto L_1072c69f;
L_1072c67b:;
  /* 1072c67b call 0x1072b9d0 */
  push32(0x1072c680u); f_1072b9d0();
  /* 1072c680 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1072c686 call 0x1072b9e0 */
  push32(0x1072c68bu); f_1072b9e0();
  /* 1072c68b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1072c691 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072c694 jmp 0x1072c69f */
  goto L_1072c69f;
L_1072c696:;
  /* 1072c696 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072c699 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1072c69f:;
  /* 1072c69f mov esp, ebp */
  ESP = (EBP);
  /* 1072c6a1 pop ebp */
  EBP = (pop32());
  /* 1072c6a2 ret  */
  ESPCHK(0x1072c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x1072c6b0 (199 bytes, 68 insns) */
void f_1072c6b0(void) {
  FTRACE(0x1072c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1072c6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c6b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1072c6b5 push esi */
  push32((uint32_t)(ESI));
  /* 1072c6b6 push edi */
  push32((uint32_t)(EDI));
L_1072c6b7:;
  /* 1072c6b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c6bb jne 0x1072c6db */
  if (!C.zf) goto L_1072c6db;
  /* 1072c6bd push 0x1074afc4 */
  push32((uint32_t)(0x1074afc4u));
  /* 1072c6c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072c6c4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1072c6c6 push 0x1074b090 */
  push32((uint32_t)(0x1074b090u));
  /* 1072c6cb push 2 */
  push32((uint32_t)(0x2u));
  /* 1072c6cd call 0x10722bc0 */
  push32(0x1072c6d2u); f_10722bc0();
  /* 1072c6d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c6d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c6d8 jne 0x1072c6db */
  if (!C.zf) goto L_1072c6db;
  /* 1072c6da int3  */
  x86_unimpl("int3 @ 0x1072c6da");
L_1072c6db:;
  /* 1072c6db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c6dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072c6df jne 0x1072c6b7 */
  if (!C.zf) goto L_1072c6b7;
  /* 1072c6e1 mov ecx, dword ptr [0x1074f71c] */
  ECX = (r32((uint32_t)(0x1074f71c)));
  /* 1072c6e7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c6ea mov dword ptr [0x1074f71c], ecx */
  w32((uint32_t)(0x1074f71c), (ECX));
  /* 1072c6f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c6f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072c6f6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1072c6f8 push 0x1074b090 */
  push32((uint32_t)(0x1074b090u));
  /* 1072c6fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1072c6ff push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1072c704 call 0x10723b00 */
  push32(0x1072c709u); f_10723b00();
  /* 1072c709 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c70c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c70f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1072c712 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c715 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c719 je 0x1072c736 */
  if (C.zf) goto L_1072c736;
  /* 1072c71b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c71e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072c721 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1072c724 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c727 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1072c72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c72d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1072c734 jmp 0x1072c75b */
  goto L_1072c75b;
L_1072c736:;
  /* 1072c736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c739 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072c73c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1072c73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c742 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1072c745 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c748 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c74b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c74e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1072c751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c754 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1072c75b:;
  /* 1072c75b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c75e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c761 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1072c764 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1072c766 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c769 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1072c770 pop edi */
  EDI = (pop32());
  /* 1072c771 pop esi */
  ESI = (pop32());
  /* 1072c772 pop ebx */
  EBX = (pop32());
  /* 1072c773 mov esp, ebp */
  ESP = (EBP);
  /* 1072c775 pop ebp */
  EBP = (pop32());
  /* 1072c776 ret  */
  ESPCHK(0x1072c6b0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1072c780 (50 bytes, 17 insns) */
void f_1072c780(void) {
  FTRACE(0x1072c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c780 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c781 mov ebp, esp */
  EBP = (ESP);
  /* 1072c783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c786 cmp eax, dword ptr [0x1075101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1075101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c78c jb 0x1072c792 */
  if (C.cf) goto L_1072c792;
  /* 1072c78e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072c790 jmp 0x1072c7b0 */
  goto L_1072c7b0;
L_1072c792:;
  /* 1072c792 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c795 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072c798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c79b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072c79e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c7a1 mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072c7a8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1072c7ad and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1072c7b0:;
  /* 1072c7b0 pop ebp */
  EBP = (pop32());
  /* 1072c7b1 ret  */
  ESPCHK(0x1072c780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x1072c7c0 (300 bytes, 80 insns) */
void f_1072c7c0(void) {
  FTRACE(0x1072c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1072c7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c7c4 cmp dword ptr [0x10750be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10750be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c7cb jne 0x1072c7d9 */
  if (!C.zf) goto L_1072c7d9;
  /* 1072c7cd mov dword ptr [0x10750be0], 0x200 */
  w32((uint32_t)(0x10750be0), (0x200u));
  /* 1072c7d7 jmp 0x1072c7ec */
  goto L_1072c7ec;
L_1072c7d9:;
  /* 1072c7d9 cmp dword ptr [0x10750be0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10750be0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c7e0 jge 0x1072c7ec */
  if ((C.sf==C.of)) goto L_1072c7ec;
  /* 1072c7e2 mov dword ptr [0x10750be0], 0x14 */
  w32((uint32_t)(0x10750be0), (0x14u));
L_1072c7ec:;
  /* 1072c7ec push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1072c7f1 push 0x1074b09c */
  push32((uint32_t)(0x1074b09cu));
  /* 1072c7f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072c7f8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1072c7fa mov eax, dword ptr [0x10750be0] */
  EAX = (r32((uint32_t)(0x10750be0)));
  /* 1072c7ff push eax */
  push32((uint32_t)(EAX));
  /* 1072c800 call 0x10723f10 */
  push32(0x1072c805u); f_10723f10();
  /* 1072c805 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c808 mov dword ptr [0x1074f890], eax */
  w32((uint32_t)(0x1074f890), (EAX));
  /* 1072c80d cmp dword ptr [0x1074f890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c814 jne 0x1072c855 */
  if (!C.zf) goto L_1072c855;
  /* 1072c816 mov dword ptr [0x10750be0], 0x14 */
  w32((uint32_t)(0x10750be0), (0x14u));
  /* 1072c820 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1072c825 push 0x1074b09c */
  push32((uint32_t)(0x1074b09cu));
  /* 1072c82a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072c82c push 4 */
  push32((uint32_t)(0x4u));
  /* 1072c82e mov ecx, dword ptr [0x10750be0] */
  ECX = (r32((uint32_t)(0x10750be0)));
  /* 1072c834 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c835 call 0x10723f10 */
  push32(0x1072c83au); f_10723f10();
  /* 1072c83a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c83d mov dword ptr [0x1074f890], eax */
  w32((uint32_t)(0x1074f890), (EAX));
  /* 1072c842 cmp dword ptr [0x1074f890], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f890))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c849 jne 0x1072c855 */
  if (!C.zf) goto L_1072c855;
  /* 1072c84b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1072c84d call 0x10722a70 */
  push32(0x1072c852u); f_10722a70();
  /* 1072c852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072c855:;
  /* 1072c855 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072c85c jmp 0x1072c867 */
  goto L_1072c867;
L_1072c85e:;
  /* 1072c85e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c861 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c864 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1072c867:;
  /* 1072c867 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c86b jge 0x1072c886 */
  if ((C.sf==C.of)) goto L_1072c886;
  /* 1072c86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c870 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072c873 add eax, 0x1074e120 */
  { uint32_t _a=(EAX),_b=(0x1074e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c878 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c87b mov edx, dword ptr [0x1074f890] */
  EDX = (r32((uint32_t)(0x1074f890)));
  /* 1072c881 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1072c884 jmp 0x1072c85e */
  goto L_1072c85e;
L_1072c886:;
  /* 1072c886 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072c88d jmp 0x1072c898 */
  goto L_1072c898;
L_1072c88f:;
  /* 1072c88f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c892 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c895 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072c898:;
  /* 1072c898 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c89c jge 0x1072c8e8 */
  if ((C.sf==C.of)) goto L_1072c8e8;
  /* 1072c89e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c8a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072c8a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c8a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072c8aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c8ad mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072c8b4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c8b8 je 0x1072c8d6 */
  if (C.zf) goto L_1072c8d6;
  /* 1072c8ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c8bd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072c8c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c8c3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072c8c6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072c8c9 mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072c8d0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c8d4 jne 0x1072c8e6 */
  if (!C.zf) goto L_1072c8e6;
L_1072c8d6:;
  /* 1072c8d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072c8d9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072c8dc mov dword ptr [ecx + 0x1074e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1074e130), (0xffffffffu));
L_1072c8e6:;
  /* 1072c8e6 jmp 0x1072c88f */
  goto L_1072c88f;
L_1072c8e8:;
  /* 1072c8e8 mov esp, ebp */
  ESP = (EBP);
  /* 1072c8ea pop ebp */
  EBP = (pop32());
  /* 1072c8eb ret  */
  ESPCHK(0x1072c7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8f0 @ 0x1072c8f0 (26 bytes, 9 insns) */
void f_1072c8f0(void) {
  FTRACE(0x1072c8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1072c8f3 call 0x1072d4f0 */
  push32(0x1072c8f8u); f_1072d4f0();
  /* 1072c8f8 movsx eax, byte ptr [0x1074f538] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1074f538))));
  /* 1072c8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072c901 je 0x1072c908 */
  if (C.zf) goto L_1072c908;
  /* 1072c903 call 0x1072d2b0 */
  push32(0x1072c908u); f_1072d2b0();
L_1072c908:;
  /* 1072c908 pop ebp */
  EBP = (pop32());
  /* 1072c909 ret  */
  ESPCHK(0x1072c8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c910 @ 0x1072c910 (61 bytes, 20 insns) */
void f_1072c910(void) {
  FTRACE(0x1072c910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c910 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c911 mov ebp, esp */
  EBP = (ESP);
  /* 1072c913 cmp dword ptr [ebp + 8], 0x1074e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1074e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c91a jb 0x1072c93e */
  if (C.cf) goto L_1072c93e;
  /* 1072c91c cmp dword ptr [ebp + 8], 0x1074e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1074e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c923 ja 0x1072c93e */
  if ((!C.cf&&!C.zf)) goto L_1072c93e;
  /* 1072c925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c928 sub eax, 0x1074e120 */
  { uint32_t _a=(EAX),_b=(0x1074e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c92d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072c930 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c933 push eax */
  push32((uint32_t)(EAX));
  /* 1072c934 call 0x10727500 */
  push32(0x1072c939u); f_10727500();
  /* 1072c939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c93c jmp 0x1072c94b */
  goto L_1072c94b;
L_1072c93e:;
  /* 1072c93e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c941 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c944 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c945 call dword ptr [0x1075239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075239c))), 0x1072c94bu);
L_1072c94b:;
  /* 1072c94b pop ebp */
  EBP = (pop32());
  /* 1072c94c ret  */
  ESPCHK(0x1072c910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c950 @ 0x1072c950 (41 bytes, 16 insns) */
void f_1072c950(void) {
  FTRACE(0x1072c950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c950 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c951 mov ebp, esp */
  EBP = (ESP);
  /* 1072c953 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c957 jge 0x1072c96a */
  if ((C.sf==C.of)) goto L_1072c96a;
  /* 1072c959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c95c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c95f push eax */
  push32((uint32_t)(EAX));
  /* 1072c960 call 0x10727500 */
  push32(0x1072c965u); f_10727500();
  /* 1072c965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c968 jmp 0x1072c977 */
  goto L_1072c977;
L_1072c96a:;
  /* 1072c96a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c96d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c970 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c971 call dword ptr [0x1075239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075239c))), 0x1072c977u);
L_1072c977:;
  /* 1072c977 pop ebp */
  EBP = (pop32());
  /* 1072c978 ret  */
  ESPCHK(0x1072c950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x1072c980 (61 bytes, 20 insns) */
void f_1072c980(void) {
  FTRACE(0x1072c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c980 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c981 mov ebp, esp */
  EBP = (ESP);
  /* 1072c983 cmp dword ptr [ebp + 8], 0x1074e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1074e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c98a jb 0x1072c9ae */
  if (C.cf) goto L_1072c9ae;
  /* 1072c98c cmp dword ptr [ebp + 8], 0x1074e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1074e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c993 ja 0x1072c9ae */
  if ((!C.cf&&!C.zf)) goto L_1072c9ae;
  /* 1072c995 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c998 sub eax, 0x1074e120 */
  { uint32_t _a=(EAX),_b=(0x1074e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c99d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072c9a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1072c9a4 call 0x107275a0 */
  push32(0x1072c9a9u); f_107275a0();
  /* 1072c9a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c9ac jmp 0x1072c9bb */
  goto L_1072c9bb;
L_1072c9ae:;
  /* 1072c9ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c9b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c9b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c9b5 call dword ptr [0x1075238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075238c))), 0x1072c9bbu);
L_1072c9bb:;
  /* 1072c9bb pop ebp */
  EBP = (pop32());
  /* 1072c9bc ret  */
  ESPCHK(0x1072c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x1072c9c0 (41 bytes, 16 insns) */
void f_1072c9c0(void) {
  FTRACE(0x1072c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1072c9c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072c9c7 jge 0x1072c9da */
  if ((C.sf==C.of)) goto L_1072c9da;
  /* 1072c9c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072c9cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c9cf push eax */
  push32((uint32_t)(EAX));
  /* 1072c9d0 call 0x107275a0 */
  push32(0x1072c9d5u); f_107275a0();
  /* 1072c9d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c9d8 jmp 0x1072c9e7 */
  goto L_1072c9e7;
L_1072c9da:;
  /* 1072c9da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072c9dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072c9e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1072c9e1 call dword ptr [0x1075238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075238c))), 0x1072c9e7u);
L_1072c9e7:;
  /* 1072c9e7 pop ebp */
  EBP = (pop32());
  /* 1072c9e8 ret  */
  ESPCHK(0x1072c9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9f0 @ 0x1072c9f0 (119 bytes, 34 insns) */
void f_1072c9f0(void) {
  FTRACE(0x1072c9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072c9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072c9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1072c9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072c9f6 push 0x1074f88c */
  push32((uint32_t)(0x1074f88cu));
  /* 1072c9fb call dword ptr [0x10752320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752320))), 0x1072ca01u);
  /* 1072ca01 cmp dword ptr [0x1074f87c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f87c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ca08 je 0x1072ca28 */
  if (C.zf) goto L_1072ca28;
  /* 1072ca0a push 0x1074f88c */
  push32((uint32_t)(0x1074f88cu));
  /* 1072ca0f call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x1072ca15u);
  /* 1072ca15 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1072ca17 call 0x10727500 */
  push32(0x1072ca1cu); f_10727500();
  /* 1072ca1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ca1f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1072ca26 jmp 0x1072ca2f */
  goto L_1072ca2f;
L_1072ca28:;
  /* 1072ca28 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1072ca2f:;
  /* 1072ca2f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1072ca33 push eax */
  push32((uint32_t)(EAX));
  /* 1072ca34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ca37 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ca38 call 0x1072ca70 */
  push32(0x1072ca3du); f_1072ca70();
  /* 1072ca3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ca40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072ca43 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ca47 je 0x1072ca55 */
  if (C.zf) goto L_1072ca55;
  /* 1072ca49 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1072ca4b call 0x107275a0 */
  push32(0x1072ca50u); f_107275a0();
  /* 1072ca50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ca53 jmp 0x1072ca60 */
  goto L_1072ca60;
L_1072ca55:;
  /* 1072ca55 push 0x1074f88c */
  push32((uint32_t)(0x1074f88cu));
  /* 1072ca5a call dword ptr [0x10752310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752310))), 0x1072ca60u);
L_1072ca60:;
  /* 1072ca60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072ca63 mov esp, ebp */
  ESP = (EBP);
  /* 1072ca65 pop ebp */
  EBP = (pop32());
  /* 1072ca66 ret  */
  ESPCHK(0x1072c9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca70 @ 0x1072ca70 (160 bytes, 50 insns) */
void f_1072ca70(void) {
  FTRACE(0x1072ca70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072ca70 push ebp */
  push32((uint32_t)(EBP));
  /* 1072ca71 mov ebp, esp */
  EBP = (ESP);
  /* 1072ca73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072ca76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ca7a jne 0x1072ca83 */
  if (!C.zf) goto L_1072ca83;
  /* 1072ca7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072ca7e jmp 0x1072cb0c */
  goto L_1072cb0c;
L_1072ca83:;
  /* 1072ca83 cmp dword ptr [0x1074f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ca8a jne 0x1072caba */
  if (!C.zf) goto L_1072caba;
  /* 1072ca8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072ca8f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072ca94 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ca99 jle 0x1072caab */
  if ((C.zf||C.sf!=C.of)) goto L_1072caab;
  /* 1072ca9b call 0x1072b9d0 */
  push32(0x1072caa0u); f_1072b9d0();
  /* 1072caa0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1072caa6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072caa9 jmp 0x1072cb0c */
  goto L_1072cb0c;
L_1072caab:;
  /* 1072caab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072caae mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1072cab1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1072cab3 mov eax, 1 */
  EAX = (0x1u);
  /* 1072cab8 jmp 0x1072cb0c */
  goto L_1072cb0c;
L_1072caba:;
  /* 1072caba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1072cac1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1072cac4 push eax */
  push32((uint32_t)(EAX));
  /* 1072cac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072cac7 mov ecx, dword ptr [0x1074dea4] */
  ECX = (r32((uint32_t)(0x1074dea4)));
  /* 1072cacd push ecx */
  push32((uint32_t)(ECX));
  /* 1072cace mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cad1 push edx */
  push32((uint32_t)(EDX));
  /* 1072cad2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072cad4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1072cad7 push eax */
  push32((uint32_t)(EAX));
  /* 1072cad8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1072cadd mov ecx, dword ptr [0x1074f710] */
  ECX = (r32((uint32_t)(0x1074f710)));
  /* 1072cae3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072cae4 call dword ptr [0x1075234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075234c))), 0x1072caeau);
  /* 1072caea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072caed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072caf1 je 0x1072caf9 */
  if (C.zf) goto L_1072caf9;
  /* 1072caf3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072caf7 je 0x1072cb09 */
  if (C.zf) goto L_1072cb09;
L_1072caf9:;
  /* 1072caf9 call 0x1072b9d0 */
  push32(0x1072cafeu); f_1072b9d0();
  /* 1072cafe mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1072cb04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072cb07 jmp 0x1072cb0c */
  goto L_1072cb0c;
L_1072cb09:;
  /* 1072cb09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1072cb0c:;
  /* 1072cb0c mov esp, ebp */
  ESP = (EBP);
  /* 1072cb0e pop ebp */
  EBP = (pop32());
  /* 1072cb0f ret  */
  ESPCHK(0x1072ca70u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1072cb10 (32 bytes, 18 insns) */
void f_1072cb10(void) {
  FTRACE(0x1072cb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072cb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1072cb11 mov ebp, esp */
  EBP = (ESP);
  /* 1072cb13 push ebx */
  push32((uint32_t)(EBX));
  /* 1072cb14 push esi */
  push32((uint32_t)(ESI));
  /* 1072cb15 push edi */
  push32((uint32_t)(EDI));
  /* 1072cb16 push ebp */
  push32((uint32_t)(EBP));
  /* 1072cb17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072cb19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072cb1b push 0x1072cb28 */
  push32((uint32_t)(0x1072cb28u));
  /* 1072cb20 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1072cb23 call 0x1073425c */
  push32(0x1072cb28u); f_1073425c();
  /* 1072cb28 pop ebp */
  EBP = (pop32());
  /* 1072cb29 pop edi */
  EDI = (pop32());
  /* 1072cb2a pop esi */
  ESI = (pop32());
  /* 1072cb2b pop ebx */
  EBX = (pop32());
  /* 1072cb2c mov esp, ebp */
  ESP = (EBP);
  /* 1072cb2e pop ebp */
  EBP = (pop32());
  /* 1072cb2f ret  */
  ESPCHK(0x1072cb10u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1072cb52 (104 bytes, 33 insns) */
void f_1072cb52(void) {
  FTRACE(0x1072cb52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072cb52 push ebx */
  push32((uint32_t)(EBX));
  /* 1072cb53 push esi */
  push32((uint32_t)(ESI));
  /* 1072cb54 push edi */
  push32((uint32_t)(EDI));
  /* 1072cb55 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1072cb59 push eax */
  push32((uint32_t)(EAX));
  /* 1072cb5a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1072cb5c push 0x1072cb30 */
  push32((uint32_t)(0x1072cb30u));
  /* 1072cb61 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1072cb68 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1072cb6f:;
  /* 1072cb6f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1072cb73 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1072cb76 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1072cb79 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cb7c je 0x1072cbac */
  if (C.zf) goto L_1072cbac;
  /* 1072cb7e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cb82 je 0x1072cbac */
  if (C.zf) goto L_1072cbac;
  /* 1072cb84 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1072cb87 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1072cb8a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1072cb8e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1072cb91 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cb96 jne 0x1072cbaa */
  if (!C.zf) goto L_1072cbaa;
  /* 1072cb98 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1072cb9d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1072cba1 call 0x1072cbe6 */
  push32(0x1072cba6u); f_1072cbe6();
  /* 1072cba6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1072cbaau);
L_1072cbaa:;
  /* 1072cbaa jmp 0x1072cb6f */
  goto L_1072cb6f;
L_1072cbac:;
  /* 1072cbac pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1072cbb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cbb6 pop edi */
  EDI = (pop32());
  /* 1072cbb7 pop esi */
  ESI = (pop32());
  /* 1072cbb8 pop ebx */
  EBX = (pop32());
  /* 1072cbb9 ret  */
  ESPCHK(0x1072cb52u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe6 @ 0x1072cbe6 (24 bytes, 10 insns) */
void f_1072cbe6(void) {
  FTRACE(0x1072cbe6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072cbe6 push ebx */
  push32((uint32_t)(EBX));
  /* 1072cbe7 push ecx */
  push32((uint32_t)(ECX));
  /* 1072cbe8 mov ebx, 0x1074e3b8 */
  EBX = (0x1074e3b8u);
  /* 1072cbed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cbf0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1072cbf3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1072cbf6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1072cbf9 pop ecx */
  ECX = (pop32());
  /* 1072cbfa pop ebx */
  EBX = (pop32());
  /* 1072cbfb ret 4 */
  ESPCHK(0x1072cbe6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ccc5 @ 0x1072ccc5 (27 bytes, 11 insns) */
void f_1072ccc5(void) {
  FTRACE(0x1072ccc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072ccc5 push ebp */
  push32((uint32_t)(EBP));
  /* 1072ccc6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1072ccca mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1072cccc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1072cccf push eax */
  push32((uint32_t)(EAX));
  /* 1072ccd0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1072ccd3 push eax */
  push32((uint32_t)(EAX));
  /* 1072ccd4 call 0x1072cb52 */
  push32(0x1072ccd9u); f_1072cb52();
  /* 1072ccd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ccdc pop ebp */
  EBP = (pop32());
  /* 1072ccdd ret 4 */
  ESPCHK(0x1072ccc5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cce0 @ 0x1072cce0 (482 bytes, 138 insns) */
void f_1072cce0(void) {
  FTRACE(0x1072cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072cce1 mov ebp, esp */
  EBP = (ESP);
  /* 1072cce3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072cce6 push esi */
  push32((uint32_t)(ESI));
  /* 1072cce7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1072ccee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1072ccf0 call 0x10727500 */
  push32(0x1072ccf5u); f_10727500();
  /* 1072ccf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ccf8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1072ccff jmp 0x1072cd0a */
  goto L_1072cd0a;
L_1072cd01:;
  /* 1072cd01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072cd04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cd07 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1072cd0a:;
  /* 1072cd0a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cd0e jge 0x1072ceb0 */
  if ((C.sf==C.of)) goto L_1072ceb0;
  /* 1072cd14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072cd17 cmp dword ptr [ecx*4 + 0x10750ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10750ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cd1f je 0x1072ce16 */
  if (C.zf) goto L_1072ce16;
  /* 1072cd25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072cd28 mov eax, dword ptr [edx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10750ee0)));
  /* 1072cd2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072cd32 jmp 0x1072cd3d */
  goto L_1072cd3d;
L_1072cd34:;
  /* 1072cd34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cd37 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cd3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1072cd3d:;
  /* 1072cd3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072cd40 mov eax, dword ptr [edx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10750ee0)));
  /* 1072cd47 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cd4c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cd4f jae 0x1072ce06 */
  if (!C.cf) goto L_1072ce06;
  /* 1072cd55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cd58 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1072cd5c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1072cd5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072cd61 jne 0x1072ce01 */
  if (!C.zf) goto L_1072ce01;
  /* 1072cd67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cd6a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cd6e jne 0x1072cda9 */
  if (!C.zf) goto L_1072cda9;
  /* 1072cd70 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1072cd72 call 0x10727500 */
  push32(0x1072cd77u); f_10727500();
  /* 1072cd77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cd7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cd7d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cd81 jne 0x1072cd9f */
  if (!C.zf) goto L_1072cd9f;
  /* 1072cd83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cd86 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cd89 push edx */
  push32((uint32_t)(EDX));
  /* 1072cd8a call dword ptr [0x10752398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752398))), 0x1072cd90u);
  /* 1072cd90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cd93 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1072cd96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cd99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cd9c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1072cd9f:;
  /* 1072cd9f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1072cda1 call 0x107275a0 */
  push32(0x1072cda6u); f_107275a0();
  /* 1072cda6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072cda9:;
  /* 1072cda9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cdac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cdaf push eax */
  push32((uint32_t)(EAX));
  /* 1072cdb0 call dword ptr [0x1075239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075239c))), 0x1072cdb6u);
  /* 1072cdb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cdb9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1072cdbd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1072cdc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072cdc2 je 0x1072cdd6 */
  if (C.zf) goto L_1072cdd6;
  /* 1072cdc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cdc7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cdca push eax */
  push32((uint32_t)(EAX));
  /* 1072cdcb call dword ptr [0x1075238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075238c))), 0x1072cdd1u);
  /* 1072cdd1 jmp 0x1072cd34 */
  goto L_1072cd34;
L_1072cdd6:;
  /* 1072cdd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cdd9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1072cddf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072cde2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072cde5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072cde8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072cdeb sub eax, dword ptr [edx*4 + 0x10750ee0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10750ee0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072cdf2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1072cdf3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1072cdf8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1072cdfa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072cdfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072cdff jmp 0x1072ce06 */
  goto L_1072ce06;
L_1072ce01:;
  /* 1072ce01 jmp 0x1072cd34 */
  goto L_1072cd34;
L_1072ce06:;
  /* 1072ce06 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ce0a je 0x1072ce11 */
  if (C.zf) goto L_1072ce11;
  /* 1072ce0c jmp 0x1072ceb0 */
  goto L_1072ceb0;
L_1072ce11:;
  /* 1072ce11 jmp 0x1072ceab */
  goto L_1072ceab;
L_1072ce16:;
  /* 1072ce16 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1072ce18 push 0x1074b0a4 */
  push32((uint32_t)(0x1074b0a4u));
  /* 1072ce1d push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ce1f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1072ce24 call 0x10723b00 */
  push32(0x1072ce29u); f_10723b00();
  /* 1072ce29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ce2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072ce2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ce33 je 0x1072cea9 */
  if (C.zf) goto L_1072cea9;
  /* 1072ce35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072ce38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ce3b mov dword ptr [eax*4 + 0x10750ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x10750ee0), (ECX));
  /* 1072ce42 mov edx, dword ptr [0x1075101c] */
  EDX = (r32((uint32_t)(0x1075101c)));
  /* 1072ce48 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ce4b mov dword ptr [0x1075101c], edx */
  w32((uint32_t)(0x1075101c), (EDX));
  /* 1072ce51 jmp 0x1072ce5c */
  goto L_1072ce5c;
L_1072ce53:;
  /* 1072ce53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ce56 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ce59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072ce5c:;
  /* 1072ce5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072ce5f mov edx, dword ptr [ecx*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072ce66 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ce6c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ce6f jae 0x1072ce94 */
  if (!C.cf) goto L_1072ce94;
  /* 1072ce71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ce74 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1072ce78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ce7b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1072ce81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ce84 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1072ce88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ce8b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1072ce92 jmp 0x1072ce53 */
  goto L_1072ce53;
L_1072ce94:;
  /* 1072ce94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072ce97 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072ce9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072ce9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072cea0 push edx */
  push32((uint32_t)(EDX));
  /* 1072cea1 call 0x1072d1f0 */
  push32(0x1072cea6u); f_1072d1f0();
  /* 1072cea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072cea9:;
  /* 1072cea9 jmp 0x1072ceb0 */
  goto L_1072ceb0;
L_1072ceab:;
  /* 1072ceab jmp 0x1072cd01 */
  goto L_1072cd01;
L_1072ceb0:;
  /* 1072ceb0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1072ceb2 call 0x107275a0 */
  push32(0x1072ceb7u); f_107275a0();
  /* 1072ceb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ceba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072cebd pop esi */
  ESI = (pop32());
  /* 1072cebe mov esp, ebp */
  ESP = (EBP);
  /* 1072cec0 pop ebp */
  EBP = (pop32());
  /* 1072cec1 ret  */
  ESPCHK(0x1072cce0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1072ced0 (183 bytes, 57 insns) */
void f_1072ced0(void) {
  FTRACE(0x1072ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072ced1 mov ebp, esp */
  EBP = (ESP);
  /* 1072ced3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ced4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ced7 cmp eax, dword ptr [0x1075101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1075101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cedd jae 0x1072cf6a */
  if (!C.cf) goto L_1072cf6a;
  /* 1072cee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cee6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072cee9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ceec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072ceef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072cef2 mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072cef9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cefd jne 0x1072cf6a */
  if (!C.zf) goto L_1072cf6a;
  /* 1072ceff cmp dword ptr [0x1074f4f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cf06 jne 0x1072cf4a */
  if (!C.zf) goto L_1072cf4a;
  /* 1072cf08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cf0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1072cf0e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cf12 je 0x1072cf22 */
  if (C.zf) goto L_1072cf22;
  /* 1072cf14 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cf18 je 0x1072cf30 */
  if (C.zf) goto L_1072cf30;
  /* 1072cf1a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cf1e je 0x1072cf3e */
  if (C.zf) goto L_1072cf3e;
  /* 1072cf20 jmp 0x1072cf4a */
  goto L_1072cf4a;
L_1072cf22:;
  /* 1072cf22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072cf25 push edx */
  push32((uint32_t)(EDX));
  /* 1072cf26 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1072cf28 call dword ptr [0x107522c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522c8))), 0x1072cf2eu);
  /* 1072cf2e jmp 0x1072cf4a */
  goto L_1072cf4a;
L_1072cf30:;
  /* 1072cf30 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072cf33 push eax */
  push32((uint32_t)(EAX));
  /* 1072cf34 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1072cf36 call dword ptr [0x107522c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522c8))), 0x1072cf3cu);
  /* 1072cf3c jmp 0x1072cf4a */
  goto L_1072cf4a;
L_1072cf3e:;
  /* 1072cf3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072cf41 push ecx */
  push32((uint32_t)(ECX));
  /* 1072cf42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1072cf44 call dword ptr [0x107522c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522c8))), 0x1072cf4au);
L_1072cf4a:;
  /* 1072cf4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cf4d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1072cf50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cf53 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1072cf56 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072cf59 mov ecx, dword ptr [edx*4 + 0x10750ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10750ee0)));
  /* 1072cf60 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072cf63 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1072cf66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072cf68 jmp 0x1072cf83 */
  goto L_1072cf83;
L_1072cf6a:;
  /* 1072cf6a call 0x1072b9d0 */
  push32(0x1072cf6fu); f_1072b9d0();
  /* 1072cf6f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1072cf75 call 0x1072b9e0 */
  push32(0x1072cf7au); f_1072b9e0();
  /* 1072cf7a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1072cf80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1072cf83:;
  /* 1072cf83 mov esp, ebp */
  ESP = (EBP);
  /* 1072cf85 pop ebp */
  EBP = (pop32());
  /* 1072cf86 ret  */
  ESPCHK(0x1072ced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf90 @ 0x1072cf90 (216 bytes, 63 insns) */
void f_1072cf90(void) {
  FTRACE(0x1072cf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072cf90 push ebp */
  push32((uint32_t)(EBP));
  /* 1072cf91 mov ebp, esp */
  EBP = (ESP);
  /* 1072cf93 push ecx */
  push32((uint32_t)(ECX));
  /* 1072cf94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cf97 cmp eax, dword ptr [0x1075101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1075101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cf9d jae 0x1072d04b */
  if (!C.cf) goto L_1072d04b;
  /* 1072cfa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cfa6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072cfa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cfac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072cfaf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072cfb2 mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072cfb9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1072cfbe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1072cfc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072cfc3 je 0x1072d04b */
  if (C.zf) goto L_1072d04b;
  /* 1072cfc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cfcc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1072cfcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cfd2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1072cfd5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072cfd8 mov ecx, dword ptr [edx*4 + 0x10750ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10750ee0)));
  /* 1072cfdf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cfe3 je 0x1072d04b */
  if (C.zf) goto L_1072d04b;
  /* 1072cfe5 cmp dword ptr [0x1074f4f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074f4f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cfec jne 0x1072d02a */
  if (!C.zf) goto L_1072d02a;
  /* 1072cfee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072cff1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072cff4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cff8 je 0x1072d008 */
  if (C.zf) goto L_1072d008;
  /* 1072cffa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072cffe je 0x1072d014 */
  if (C.zf) goto L_1072d014;
  /* 1072d000 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d004 je 0x1072d020 */
  if (C.zf) goto L_1072d020;
  /* 1072d006 jmp 0x1072d02a */
  goto L_1072d02a;
L_1072d008:;
  /* 1072d008 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072d00a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1072d00c call dword ptr [0x107522c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522c8))), 0x1072d012u);
  /* 1072d012 jmp 0x1072d02a */
  goto L_1072d02a;
L_1072d014:;
  /* 1072d014 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072d016 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1072d018 call dword ptr [0x107522c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522c8))), 0x1072d01eu);
  /* 1072d01e jmp 0x1072d02a */
  goto L_1072d02a;
L_1072d020:;
  /* 1072d020 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072d022 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1072d024 call dword ptr [0x107522c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522c8))), 0x1072d02au);
L_1072d02a:;
  /* 1072d02a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d02d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072d030 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d033 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072d036 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d039 mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072d040 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1072d047 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072d049 jmp 0x1072d064 */
  goto L_1072d064;
L_1072d04b:;
  /* 1072d04b call 0x1072b9d0 */
  push32(0x1072d050u); f_1072b9d0();
  /* 1072d050 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1072d056 call 0x1072b9e0 */
  push32(0x1072d05bu); f_1072b9e0();
  /* 1072d05b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1072d061 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1072d064:;
  /* 1072d064 mov esp, ebp */
  ESP = (EBP);
  /* 1072d066 pop ebp */
  EBP = (pop32());
  /* 1072d067 ret  */
  ESPCHK(0x1072cf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x1072d070 (102 bytes, 30 insns) */
void f_1072d070(void) {
  FTRACE(0x1072d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d070 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d071 mov ebp, esp */
  EBP = (ESP);
  /* 1072d073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d076 cmp eax, dword ptr [0x1075101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1075101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d07c jae 0x1072d0bb */
  if (!C.cf) goto L_1072d0bb;
  /* 1072d07e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d081 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072d084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d087 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072d08a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d08d mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072d094 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1072d099 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1072d09c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072d09e je 0x1072d0bb */
  if (C.zf) goto L_1072d0bb;
  /* 1072d0a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d0a3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1072d0a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d0a9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1072d0ac imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d0af mov ecx, dword ptr [edx*4 + 0x10750ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10750ee0)));
  /* 1072d0b6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1072d0b9 jmp 0x1072d0d4 */
  goto L_1072d0d4;
L_1072d0bb:;
  /* 1072d0bb call 0x1072b9d0 */
  push32(0x1072d0c0u); f_1072b9d0();
  /* 1072d0c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1072d0c6 call 0x1072b9e0 */
  push32(0x1072d0cbu); f_1072b9e0();
  /* 1072d0cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1072d0d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1072d0d4:;
  /* 1072d0d4 pop ebp */
  EBP = (pop32());
  /* 1072d0d5 ret  */
  ESPCHK(0x1072d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0e0 @ 0x1072d0e0 (260 bytes, 83 insns) */
void f_1072d0e0(void) {
  FTRACE(0x1072d0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1072d0e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d0e6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1072d0ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072d0ed and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1072d0f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072d0f2 je 0x1072d0fd */
  if (C.zf) goto L_1072d0fd;
  /* 1072d0f4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1072d0f7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1072d0fa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1072d0fd:;
  /* 1072d0fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072d100 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1072d106 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072d108 je 0x1072d112 */
  if (C.zf) goto L_1072d112;
  /* 1072d10a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1072d10d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1072d10f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1072d112:;
  /* 1072d112 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072d115 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1072d11b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072d11d je 0x1072d128 */
  if (C.zf) goto L_1072d128;
  /* 1072d11f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1072d122 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1072d125 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1072d128:;
  /* 1072d128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d12b push eax */
  push32((uint32_t)(EAX));
  /* 1072d12c call dword ptr [0x10752358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752358))), 0x1072d132u);
  /* 1072d132 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072d135 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d139 jne 0x1072d152 */
  if (!C.zf) goto L_1072d152;
  /* 1072d13b call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x1072d141u);
  /* 1072d141 push eax */
  push32((uint32_t)(EAX));
  /* 1072d142 call 0x1072b930 */
  push32(0x1072d147u); f_1072b930();
  /* 1072d147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d14a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072d14d jmp 0x1072d1e0 */
  goto L_1072d1e0;
L_1072d152:;
  /* 1072d152 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d156 jne 0x1072d163 */
  if (!C.zf) goto L_1072d163;
  /* 1072d158 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1072d15b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1072d15e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1072d161 jmp 0x1072d172 */
  goto L_1072d172;
L_1072d163:;
  /* 1072d163 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d167 jne 0x1072d172 */
  if (!C.zf) goto L_1072d172;
  /* 1072d169 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1072d16c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1072d16f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1072d172:;
  /* 1072d172 call 0x1072cce0 */
  push32(0x1072d177u); f_1072cce0();
  /* 1072d177 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072d17a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d17e jne 0x1072d19b */
  if (!C.zf) goto L_1072d19b;
  /* 1072d180 call 0x1072b9d0 */
  push32(0x1072d185u); f_1072b9d0();
  /* 1072d185 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1072d18b call 0x1072b9e0 */
  push32(0x1072d190u); f_1072b9e0();
  /* 1072d190 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1072d196 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072d199 jmp 0x1072d1e0 */
  goto L_1072d1e0;
L_1072d19b:;
  /* 1072d19b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d19e push eax */
  push32((uint32_t)(EAX));
  /* 1072d19f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d1a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d1a3 call 0x1072ced0 */
  push32(0x1072d1a8u); f_1072ced0();
  /* 1072d1a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d1ab mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1072d1ae or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1072d1b1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1072d1b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d1b7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072d1ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d1bd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072d1c0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d1c3 mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072d1ca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1072d1cd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1072d1d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d1d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d1d5 call 0x1072d280 */
  push32(0x1072d1dau); f_1072d280();
  /* 1072d1da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d1dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1072d1e0:;
  /* 1072d1e0 mov esp, ebp */
  ESP = (EBP);
  /* 1072d1e2 pop ebp */
  EBP = (pop32());
  /* 1072d1e3 ret  */
  ESPCHK(0x1072d0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x1072d1f0 (134 bytes, 44 insns) */
void f_1072d1f0(void) {
  FTRACE(0x1072d1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1072d1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d1f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072d1fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d1fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072d200 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d203 mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072d20a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d20c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1072d20f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d212 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d216 jne 0x1072d251 */
  if (!C.zf) goto L_1072d251;
  /* 1072d218 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1072d21a call 0x10727500 */
  push32(0x1072d21fu); f_10727500();
  /* 1072d21f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d225 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d229 jne 0x1072d247 */
  if (!C.zf) goto L_1072d247;
  /* 1072d22b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d22e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d231 push edx */
  push32((uint32_t)(EDX));
  /* 1072d232 call dword ptr [0x10752398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752398))), 0x1072d238u);
  /* 1072d238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d23b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1072d23e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d244 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1072d247:;
  /* 1072d247 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1072d249 call 0x107275a0 */
  push32(0x1072d24eu); f_107275a0();
  /* 1072d24e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072d251:;
  /* 1072d251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d254 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072d257 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d25a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072d25d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d260 mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072d267 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1072d26b push eax */
  push32((uint32_t)(EAX));
  /* 1072d26c call dword ptr [0x1075239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075239c))), 0x1072d272u);
  /* 1072d272 mov esp, ebp */
  ESP = (EBP);
  /* 1072d274 pop ebp */
  EBP = (pop32());
  /* 1072d275 ret  */
  ESPCHK(0x1072d1f0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1072d280 (38 bytes, 13 insns) */
void f_1072d280(void) {
  FTRACE(0x1072d280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d280 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d281 mov ebp, esp */
  EBP = (ESP);
  /* 1072d283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d286 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072d289 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d28c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072d28f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d292 mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072d299 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1072d29d push eax */
  push32((uint32_t)(EAX));
  /* 1072d29e call dword ptr [0x1075238c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075238c))), 0x1072d2a4u);
  /* 1072d2a4 pop ebp */
  EBP = (pop32());
  /* 1072d2a5 ret  */
  ESPCHK(0x1072d280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2b0 @ 0x1072d2b0 (218 bytes, 63 insns) */
void f_1072d2b0(void) {
  FTRACE(0x1072d2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1072d2b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d2b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072d2bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1072d2bf call 0x10727500 */
  push32(0x1072d2c4u); f_10727500();
  /* 1072d2c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d2c7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1072d2ce jmp 0x1072d2d9 */
  goto L_1072d2d9;
L_1072d2d0:;
  /* 1072d2d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d2d3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d2d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1072d2d9:;
  /* 1072d2d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d2dc cmp ecx, dword ptr [0x10750be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10750be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d2e2 jge 0x1072d379 */
  if ((C.sf==C.of)) goto L_1072d379;
  /* 1072d2e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d2eb mov eax, dword ptr [0x1074f890] */
  EAX = (r32((uint32_t)(0x1074f890)));
  /* 1072d2f0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d2f4 je 0x1072d374 */
  if (C.zf) goto L_1072d374;
  /* 1072d2f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d2f9 mov edx, dword ptr [0x1074f890] */
  EDX = (r32((uint32_t)(0x1074f890)));
  /* 1072d2ff mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1072d302 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072d305 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1072d30b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072d30d je 0x1072d331 */
  if (C.zf) goto L_1072d331;
  /* 1072d30f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d312 mov eax, dword ptr [0x1074f890] */
  EAX = (r32((uint32_t)(0x1074f890)));
  /* 1072d317 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1072d31a push ecx */
  push32((uint32_t)(ECX));
  /* 1072d31b call 0x1072e0a0 */
  push32(0x1072d320u); f_1072e0a0();
  /* 1072d320 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d323 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d326 je 0x1072d331 */
  if (C.zf) goto L_1072d331;
  /* 1072d328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d32b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d32e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1072d331:;
  /* 1072d331 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d335 jl 0x1072d374 */
  if ((C.sf!=C.of)) goto L_1072d374;
  /* 1072d337 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d33a mov ecx, dword ptr [0x1074f890] */
  ECX = (r32((uint32_t)(0x1074f890)));
  /* 1072d340 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1072d343 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d346 push edx */
  push32((uint32_t)(EDX));
  /* 1072d347 call dword ptr [0x10752360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752360))), 0x1072d34du);
  /* 1072d34d push 2 */
  push32((uint32_t)(0x2u));
  /* 1072d34f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d352 mov ecx, dword ptr [0x1074f890] */
  ECX = (r32((uint32_t)(0x1074f890)));
  /* 1072d358 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1072d35b push edx */
  push32((uint32_t)(EDX));
  /* 1072d35c call 0x10724590 */
  push32(0x1072d361u); f_10724590();
  /* 1072d361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d364 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d367 mov ecx, dword ptr [0x1074f890] */
  ECX = (r32((uint32_t)(0x1074f890)));
  /* 1072d36d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1072d374:;
  /* 1072d374 jmp 0x1072d2d0 */
  goto L_1072d2d0;
L_1072d379:;
  /* 1072d379 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072d37b call 0x107275a0 */
  push32(0x1072d380u); f_107275a0();
  /* 1072d380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d383 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d386 mov esp, ebp */
  ESP = (EBP);
  /* 1072d388 pop ebp */
  EBP = (pop32());
  /* 1072d389 ret  */
  ESPCHK(0x1072d2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d390 @ 0x1072d390 (68 bytes, 26 insns) */
void f_1072d390(void) {
  FTRACE(0x1072d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d390 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d391 mov ebp, esp */
  EBP = (ESP);
  /* 1072d393 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d394 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d398 jne 0x1072d3a6 */
  if (!C.zf) goto L_1072d3a6;
  /* 1072d39a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072d39c call 0x1072d500 */
  push32(0x1072d3a1u); f_1072d500();
  /* 1072d3a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d3a4 jmp 0x1072d3d0 */
  goto L_1072d3d0;
L_1072d3a6:;
  /* 1072d3a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d3a9 push eax */
  push32((uint32_t)(EAX));
  /* 1072d3aa call 0x1072c910 */
  push32(0x1072d3afu); f_1072c910();
  /* 1072d3af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d3b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d3b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d3b6 call 0x1072d3e0 */
  push32(0x1072d3bbu); f_1072d3e0();
  /* 1072d3bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d3be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072d3c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d3c4 push edx */
  push32((uint32_t)(EDX));
  /* 1072d3c5 call 0x1072c980 */
  push32(0x1072d3cau); f_1072c980();
  /* 1072d3ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d3cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1072d3d0:;
  /* 1072d3d0 mov esp, ebp */
  ESP = (EBP);
  /* 1072d3d2 pop ebp */
  EBP = (pop32());
  /* 1072d3d3 ret  */
  ESPCHK(0x1072d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3e0 @ 0x1072d3e0 (65 bytes, 26 insns) */
void f_1072d3e0(void) {
  FTRACE(0x1072d3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1072d3e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d3e6 push eax */
  push32((uint32_t)(EAX));
  /* 1072d3e7 call 0x1072d430 */
  push32(0x1072d3ecu); f_1072d430();
  /* 1072d3ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d3ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072d3f1 je 0x1072d3f8 */
  if (C.zf) goto L_1072d3f8;
  /* 1072d3f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072d3f6 jmp 0x1072d41f */
  goto L_1072d41f;
L_1072d3f8:;
  /* 1072d3f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d3fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072d3fe and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1072d404 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072d406 je 0x1072d41d */
  if (C.zf) goto L_1072d41d;
  /* 1072d408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d40b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1072d40e push ecx */
  push32((uint32_t)(ECX));
  /* 1072d40f call 0x1072e1f0 */
  push32(0x1072d414u); f_1072e1f0();
  /* 1072d414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d417 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072d419 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d41b jmp 0x1072d41f */
  goto L_1072d41f;
L_1072d41d:;
  /* 1072d41d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072d41f:;
  /* 1072d41f pop ebp */
  EBP = (pop32());
  /* 1072d420 ret  */
  ESPCHK(0x1072d3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1072d430 (183 bytes, 62 insns) */
void f_1072d430(void) {
  FTRACE(0x1072d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d431 mov ebp, esp */
  EBP = (ESP);
  /* 1072d433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d436 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072d43d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d440 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072d443 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d446 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072d449 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1072d44c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d44f jne 0x1072d4cb */
  if (!C.zf) goto L_1072d4cb;
  /* 1072d451 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d454 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072d457 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1072d45d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072d45f je 0x1072d4cb */
  if (C.zf) goto L_1072d4cb;
  /* 1072d461 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d467 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1072d469 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d46c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072d46f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d473 jle 0x1072d4cb */
  if ((C.zf||C.sf!=C.of)) goto L_1072d4cb;
  /* 1072d475 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d478 push edx */
  push32((uint32_t)(EDX));
  /* 1072d479 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d47c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1072d47f push ecx */
  push32((uint32_t)(ECX));
  /* 1072d480 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d483 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1072d486 push eax */
  push32((uint32_t)(EAX));
  /* 1072d487 call 0x1072c3a0 */
  push32(0x1072d48cu); f_1072c3a0();
  /* 1072d48c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d48f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d492 jne 0x1072d4b5 */
  if (!C.zf) goto L_1072d4b5;
  /* 1072d494 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d497 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072d49a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1072d4a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072d4a2 je 0x1072d4b3 */
  if (C.zf) goto L_1072d4b3;
  /* 1072d4a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d4a7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072d4aa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1072d4ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d4b0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1072d4b3:;
  /* 1072d4b3 jmp 0x1072d4cb */
  goto L_1072d4cb;
L_1072d4b5:;
  /* 1072d4b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d4b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072d4bb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1072d4be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d4c1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1072d4c4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1072d4cb:;
  /* 1072d4cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d4ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d4d1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1072d4d4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1072d4d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072d4d9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1072d4e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d4e3 mov esp, ebp */
  ESP = (EBP);
  /* 1072d4e5 pop ebp */
  EBP = (pop32());
  /* 1072d4e6 ret  */
  ESPCHK(0x1072d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4f0 @ 0x1072d4f0 (15 bytes, 7 insns) */
void f_1072d4f0(void) {
  FTRACE(0x1072d4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1072d4f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072d4f5 call 0x1072d500 */
  push32(0x1072d4fau); f_1072d500();
  /* 1072d4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d4fd pop ebp */
  EBP = (pop32());
  /* 1072d4fe ret  */
  ESPCHK(0x1072d4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d500 @ 0x1072d500 (319 bytes, 94 insns) */
void f_1072d500(void) {
  FTRACE(0x1072d500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d500 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d501 mov ebp, esp */
  EBP = (ESP);
  /* 1072d503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d506 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072d50d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1072d514 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072d516 call 0x10727500 */
  push32(0x1072d51bu); f_10727500();
  /* 1072d51b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d51e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1072d525 jmp 0x1072d530 */
  goto L_1072d530;
L_1072d527:;
  /* 1072d527 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d52a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d52d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1072d530:;
  /* 1072d530 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d533 cmp ecx, dword ptr [0x10750be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10750be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d539 jge 0x1072d623 */
  if ((C.sf==C.of)) goto L_1072d623;
  /* 1072d53f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d542 mov eax, dword ptr [0x1074f890] */
  EAX = (r32((uint32_t)(0x1074f890)));
  /* 1072d547 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d54b je 0x1072d61e */
  if (C.zf) goto L_1072d61e;
  /* 1072d551 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d554 mov edx, dword ptr [0x1074f890] */
  EDX = (r32((uint32_t)(0x1074f890)));
  /* 1072d55a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1072d55d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1072d560 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1072d566 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072d568 je 0x1072d61e */
  if (C.zf) goto L_1072d61e;
  /* 1072d56e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d571 mov eax, dword ptr [0x1074f890] */
  EAX = (r32((uint32_t)(0x1074f890)));
  /* 1072d576 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1072d579 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d57a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d57d push edx */
  push32((uint32_t)(EDX));
  /* 1072d57e call 0x1072c950 */
  push32(0x1072d583u); f_1072c950();
  /* 1072d583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d586 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d589 mov ecx, dword ptr [0x1074f890] */
  ECX = (r32((uint32_t)(0x1074f890)));
  /* 1072d58f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1072d592 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1072d595 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1072d59a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072d59c je 0x1072d605 */
  if (C.zf) goto L_1072d605;
  /* 1072d59e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d5a2 jne 0x1072d5c9 */
  if (!C.zf) goto L_1072d5c9;
  /* 1072d5a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d5a7 mov edx, dword ptr [0x1074f890] */
  EDX = (r32((uint32_t)(0x1074f890)));
  /* 1072d5ad mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1072d5b0 push eax */
  push32((uint32_t)(EAX));
  /* 1072d5b1 call 0x1072d3e0 */
  push32(0x1072d5b6u); f_1072d3e0();
  /* 1072d5b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d5b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d5bc je 0x1072d5c7 */
  if (C.zf) goto L_1072d5c7;
  /* 1072d5be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d5c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d5c4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1072d5c7:;
  /* 1072d5c7 jmp 0x1072d605 */
  goto L_1072d605;
L_1072d5c9:;
  /* 1072d5c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d5cd jne 0x1072d605 */
  if (!C.zf) goto L_1072d605;
  /* 1072d5cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d5d2 mov eax, dword ptr [0x1074f890] */
  EAX = (r32((uint32_t)(0x1074f890)));
  /* 1072d5d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1072d5da mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072d5dd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1072d5e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072d5e2 je 0x1072d605 */
  if (C.zf) goto L_1072d605;
  /* 1072d5e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d5e7 mov ecx, dword ptr [0x1074f890] */
  ECX = (r32((uint32_t)(0x1074f890)));
  /* 1072d5ed mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1072d5f0 push edx */
  push32((uint32_t)(EDX));
  /* 1072d5f1 call 0x1072d3e0 */
  push32(0x1072d5f6u); f_1072d3e0();
  /* 1072d5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d5f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d5fc jne 0x1072d605 */
  if (!C.zf) goto L_1072d605;
  /* 1072d5fe mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1072d605:;
  /* 1072d605 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d608 mov ecx, dword ptr [0x1074f890] */
  ECX = (r32((uint32_t)(0x1074f890)));
  /* 1072d60e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1072d611 push edx */
  push32((uint32_t)(EDX));
  /* 1072d612 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d615 push eax */
  push32((uint32_t)(EAX));
  /* 1072d616 call 0x1072c9c0 */
  push32(0x1072d61bu); f_1072c9c0();
  /* 1072d61b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072d61e:;
  /* 1072d61e jmp 0x1072d527 */
  goto L_1072d527;
L_1072d623:;
  /* 1072d623 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072d625 call 0x107275a0 */
  push32(0x1072d62au); f_107275a0();
  /* 1072d62a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d62d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d631 jne 0x1072d638 */
  if (!C.zf) goto L_1072d638;
  /* 1072d633 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072d636 jmp 0x1072d63b */
  goto L_1072d63b;
L_1072d638:;
  /* 1072d638 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1072d63b:;
  /* 1072d63b mov esp, ebp */
  ESP = (EBP);
  /* 1072d63d pop ebp */
  EBP = (pop32());
  /* 1072d63e ret  */
  ESPCHK(0x1072d500u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1072d640 (15 bytes, 7 insns) */
void f_1072d640(void) {
  FTRACE(0x1072d640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d640 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d641 mov ebp, esp */
  EBP = (ESP);
  /* 1072d643 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072d645 call 0x10722a70 */
  push32(0x1072d64au); f_10722a70();
  /* 1072d64a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d64d pop ebp */
  EBP = (pop32());
  /* 1072d64e ret  */
  ESPCHK(0x1072d640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d650 @ 0x1072d650 (1007 bytes, 269 insns) */
void f_1072d650(void) {
  FTRACE(0x1072d650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072d650 push ebp */
  push32((uint32_t)(EBP));
  /* 1072d651 mov ebp, esp */
  EBP = (ESP);
  /* 1072d653 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d659 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d65d jl 0x1072d665 */
  if ((C.sf!=C.of)) goto L_1072d665;
  /* 1072d65f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d663 jle 0x1072d66c */
  if ((C.zf||C.sf!=C.of)) goto L_1072d66c;
L_1072d665:;
  /* 1072d665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072d667 jmp 0x1072da3b */
  goto L_1072da3b;
L_1072d66c:;
  /* 1072d66c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1072d66e call 0x10727500 */
  push32(0x1072d673u); f_10727500();
  /* 1072d673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d676 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1072d67d mov eax, dword ptr [0x1074f87c] */
  EAX = (r32((uint32_t)(0x1074f87c)));
  /* 1072d682 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d685 mov dword ptr [0x1074f87c], eax */
  w32((uint32_t)(0x1074f87c), (EAX));
L_1072d68a:;
  /* 1072d68a cmp dword ptr [0x1074f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d691 je 0x1072d69d */
  if (C.zf) goto L_1072d69d;
  /* 1072d693 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072d695 call dword ptr [0x107522b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522b8))), 0x1072d69bu);
  /* 1072d69b jmp 0x1072d68a */
  goto L_1072d68a;
L_1072d69d:;
  /* 1072d69d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d6a1 je 0x1072d6e1 */
  if (C.zf) goto L_1072d6e1;
  /* 1072d6a3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d6a7 je 0x1072d6c1 */
  if (C.zf) goto L_1072d6c1;
  /* 1072d6a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072d6ac push ecx */
  push32((uint32_t)(ECX));
  /* 1072d6ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d6b0 push edx */
  push32((uint32_t)(EDX));
  /* 1072d6b1 call 0x1072da40 */
  push32(0x1072d6b6u); f_1072da40();
  /* 1072d6b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d6b9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1072d6bf jmp 0x1072d6d3 */
  goto L_1072d6d3;
L_1072d6c1:;
  /* 1072d6c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d6c4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d6c7 mov ecx, dword ptr [eax + 0x1074e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1074e4dc)));
  /* 1072d6cd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1072d6d3:;
  /* 1072d6d3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1072d6d9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1072d6dc jmp 0x1072da1b */
  goto L_1072da1b;
L_1072d6e1:;
  /* 1072d6e1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1072d6e8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1072d6ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d6f3 je 0x1072da13 */
  if (C.zf) goto L_1072da13;
  /* 1072d6f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072d6fc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072d6ff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d702 jne 0x1072d924 */
  if (!C.zf) goto L_1072d924;
  /* 1072d708 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072d70b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1072d70f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d712 jne 0x1072d924 */
  if (!C.zf) goto L_1072d924;
  /* 1072d718 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072d71b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1072d71f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d722 jne 0x1072d924 */
  if (!C.zf) goto L_1072d924;
  /* 1072d728 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072d72b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1072d731:;
  /* 1072d731 push 0x1074b0f4 */
  push32((uint32_t)(0x1074b0f4u));
  /* 1072d736 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1072d73c push ecx */
  push32((uint32_t)(ECX));
  /* 1072d73d call 0x1072f8a0 */
  push32(0x1072d742u); f_1072f8a0();
  /* 1072d742 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d745 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1072d74b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d752 je 0x1072d77d */
  if (C.zf) goto L_1072d77d;
  /* 1072d754 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1072d75a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d760 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1072d766 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d76d je 0x1072d77d */
  if (C.zf) goto L_1072d77d;
  /* 1072d76f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1072d775 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072d778 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d77b jne 0x1072d7a3 */
  if (!C.zf) goto L_1072d7a3;
L_1072d77d:;
  /* 1072d77d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d781 je 0x1072d79c */
  if (C.zf) goto L_1072d79c;
  /* 1072d783 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1072d785 call 0x107275a0 */
  push32(0x1072d78au); f_107275a0();
  /* 1072d78a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d78d mov edx, dword ptr [0x1074f87c] */
  EDX = (r32((uint32_t)(0x1074f87c)));
  /* 1072d793 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d796 mov dword ptr [0x1074f87c], edx */
  w32((uint32_t)(0x1074f87c), (EDX));
L_1072d79c:;
  /* 1072d79c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072d79e jmp 0x1072da3b */
  goto L_1072da3b;
L_1072d7a3:;
  /* 1072d7a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1072d7aa jmp 0x1072d7b5 */
  goto L_1072d7b5;
L_1072d7ac:;
  /* 1072d7ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072d7af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d7b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1072d7b5:;
  /* 1072d7b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d7b9 jg 0x1072d803 */
  if ((!C.zf&&C.sf==C.of)) goto L_1072d803;
  /* 1072d7bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1072d7c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d7c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1072d7c8 push edx */
  push32((uint32_t)(EDX));
  /* 1072d7c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072d7cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d7cf mov ecx, dword ptr [eax + 0x1074e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1074e4d8)));
  /* 1072d7d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d7d6 call 0x1072f860 */
  push32(0x1072d7dbu); f_1072f860();
  /* 1072d7db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d7de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072d7e0 jne 0x1072d801 */
  if (!C.zf) goto L_1072d801;
  /* 1072d7e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072d7e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d7e8 mov eax, dword ptr [edx + 0x1074e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1074e4d8)));
  /* 1072d7ee push eax */
  push32((uint32_t)(EAX));
  /* 1072d7ef call 0x10726930 */
  push32(0x1072d7f4u); f_10726930();
  /* 1072d7f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d7f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d7fd jne 0x1072d801 */
  if (!C.zf) goto L_1072d801;
  /* 1072d7ff jmp 0x1072d803 */
  goto L_1072d803;
L_1072d801:;
  /* 1072d801 jmp 0x1072d7ac */
  goto L_1072d7ac;
L_1072d803:;
  /* 1072d803 push 0x1074b0f0 */
  push32((uint32_t)(0x1074b0f0u));
  /* 1072d808 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1072d80e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d811 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1072d817 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1072d81d push edx */
  push32((uint32_t)(EDX));
  /* 1072d81e call 0x1072f820 */
  push32(0x1072d823u); f_1072f820();
  /* 1072d823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d826 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1072d82c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d833 jne 0x1072d869 */
  if (!C.zf) goto L_1072d869;
  /* 1072d835 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1072d83b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072d83e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d841 je 0x1072d869 */
  if (C.zf) goto L_1072d869;
  /* 1072d843 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d847 je 0x1072d862 */
  if (C.zf) goto L_1072d862;
  /* 1072d849 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1072d84b call 0x107275a0 */
  push32(0x1072d850u); f_107275a0();
  /* 1072d850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d853 mov edx, dword ptr [0x1074f87c] */
  EDX = (r32((uint32_t)(0x1074f87c)));
  /* 1072d859 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072d85c mov dword ptr [0x1074f87c], edx */
  w32((uint32_t)(0x1074f87c), (EDX));
L_1072d862:;
  /* 1072d862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072d864 jmp 0x1072da3b */
  goto L_1072da3b;
L_1072d869:;
  /* 1072d869 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d86d jg 0x1072d8ba */
  if ((!C.zf&&C.sf==C.of)) goto L_1072d8ba;
  /* 1072d86f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1072d875 push eax */
  push32((uint32_t)(EAX));
  /* 1072d876 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1072d87c push ecx */
  push32((uint32_t)(ECX));
  /* 1072d87d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1072d883 push edx */
  push32((uint32_t)(EDX));
  /* 1072d884 call 0x10727320 */
  push32(0x1072d889u); f_10727320();
  /* 1072d889 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d88c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1072d892 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1072d89a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1072d8a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d8a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072d8a4 push edx */
  push32((uint32_t)(EDX));
  /* 1072d8a5 call 0x1072da40 */
  push32(0x1072d8aau); f_1072da40();
  /* 1072d8aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d8ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072d8af je 0x1072d8ba */
  if (C.zf) goto L_1072d8ba;
  /* 1072d8b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d8b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d8b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1072d8ba:;
  /* 1072d8ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1072d8c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d8c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1072d8cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1072d8d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1072d8d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072d8d7 je 0x1072d8e8 */
  if (C.zf) goto L_1072d8e8;
  /* 1072d8d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1072d8df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d8e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1072d8e8:;
  /* 1072d8e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1072d8ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1072d8f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072d8f3 jne 0x1072d731 */
  if (!C.zf) goto L_1072d731;
  /* 1072d8f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d8fd je 0x1072d90c */
  if (C.zf) goto L_1072d90c;
  /* 1072d8ff call 0x1072dbe0 */
  push32(0x1072d904u); f_1072dbe0();
  /* 1072d904 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1072d90a jmp 0x1072d916 */
  goto L_1072d916;
L_1072d90c:;
  /* 1072d90c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1072d916:;
  /* 1072d916 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1072d91c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072d91f jmp 0x1072da11 */
  goto L_1072da11;
L_1072d924:;
  /* 1072d924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072d927 push edx */
  push32((uint32_t)(EDX));
  /* 1072d928 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072d92a push 0 */
  push32((uint32_t)(0x0u));
  /* 1072d92c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1072d932 push eax */
  push32((uint32_t)(EAX));
  /* 1072d933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072d936 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d937 call 0x1072dce0 */
  push32(0x1072d93cu); f_1072dce0();
  /* 1072d93c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d93f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072d942 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d946 je 0x1072da11 */
  if (C.zf) goto L_1072da11;
  /* 1072d94c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1072d953 jmp 0x1072d95e */
  goto L_1072d95e;
L_1072d955:;
  /* 1072d955 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072d958 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d95b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1072d95e:;
  /* 1072d95e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d962 jg 0x1072d9c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1072d9c0;
  /* 1072d964 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d968 je 0x1072d9be */
  if (C.zf) goto L_1072d9be;
  /* 1072d96a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072d96d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072d970 mov ecx, dword ptr [eax + 0x1074e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1074e4dc)));
  /* 1072d976 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d977 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1072d97d push edx */
  push32((uint32_t)(EDX));
  /* 1072d97e call 0x1072f790 */
  push32(0x1072d983u); f_1072f790();
  /* 1072d983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072d988 je 0x1072d9b5 */
  if (C.zf) goto L_1072d9b5;
  /* 1072d98a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1072d990 push eax */
  push32((uint32_t)(EAX));
  /* 1072d991 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1072d994 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d995 call 0x1072da40 */
  push32(0x1072d99au); f_1072da40();
  /* 1072d99a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d99d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072d99f je 0x1072d9ac */
  if (C.zf) goto L_1072d9ac;
  /* 1072d9a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d9a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d9a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1072d9aa jmp 0x1072d9b3 */
  goto L_1072d9b3;
L_1072d9ac:;
  /* 1072d9ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1072d9b3:;
  /* 1072d9b3 jmp 0x1072d9be */
  goto L_1072d9be;
L_1072d9b5:;
  /* 1072d9b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072d9b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d9bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1072d9be:;
  /* 1072d9be jmp 0x1072d955 */
  goto L_1072d955;
L_1072d9c0:;
  /* 1072d9c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d9c4 je 0x1072d9eb */
  if (C.zf) goto L_1072d9eb;
  /* 1072d9c6 call 0x1072dbe0 */
  push32(0x1072d9cbu); f_1072dbe0();
  /* 1072d9cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072d9ce push 2 */
  push32((uint32_t)(0x2u));
  /* 1072d9d0 mov ecx, dword ptr [0x1074e4dc] */
  ECX = (r32((uint32_t)(0x1074e4dc)));
  /* 1072d9d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1072d9d7 call 0x10724590 */
  push32(0x1072d9dcu); f_10724590();
  /* 1072d9dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072d9df mov dword ptr [0x1074e4dc], 0 */
  w32((uint32_t)(0x1074e4dc), (0x0u));
  /* 1072d9e9 jmp 0x1072da11 */
  goto L_1072da11;
L_1072d9eb:;
  /* 1072d9eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072d9ef je 0x1072d9fe */
  if (C.zf) goto L_1072d9fe;
  /* 1072d9f1 call 0x1072dbe0 */
  push32(0x1072d9f6u); f_1072dbe0();
  /* 1072d9f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1072d9fc jmp 0x1072da08 */
  goto L_1072da08;
L_1072d9fe:;
  /* 1072d9fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1072da08:;
  /* 1072da08 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1072da0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1072da11:;
  /* 1072da11 jmp 0x1072da1b */
  goto L_1072da1b;
L_1072da13:;
  /* 1072da13 call 0x1072dbe0 */
  push32(0x1072da18u); f_1072dbe0();
  /* 1072da18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1072da1b:;
  /* 1072da1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072da1f je 0x1072da38 */
  if (C.zf) goto L_1072da38;
  /* 1072da21 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1072da23 call 0x107275a0 */
  push32(0x1072da28u); f_107275a0();
  /* 1072da28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072da2b mov eax, dword ptr [0x1074f87c] */
  EAX = (r32((uint32_t)(0x1074f87c)));
  /* 1072da30 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072da33 mov dword ptr [0x1074f87c], eax */
  w32((uint32_t)(0x1074f87c), (EAX));
L_1072da38:;
  /* 1072da38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1072da3b:;
  /* 1072da3b mov esp, ebp */
  ESP = (EBP);
  /* 1072da3d pop ebp */
  EBP = (pop32());
  /* 1072da3e ret  */
  ESPCHK(0x1072d650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x1072da40 (403 bytes, 117 insns) */
void f_1072da40(void) {
  FTRACE(0x1072da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072da40 push ebp */
  push32((uint32_t)(EBP));
  /* 1072da41 mov ebp, esp */
  EBP = (ESP);
  /* 1072da43 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072da49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072da4c push eax */
  push32((uint32_t)(EAX));
  /* 1072da4d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1072da53 push ecx */
  push32((uint32_t)(ECX));
  /* 1072da54 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1072da5a push edx */
  push32((uint32_t)(EDX));
  /* 1072da5b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1072da61 push eax */
  push32((uint32_t)(EAX));
  /* 1072da62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072da65 push ecx */
  push32((uint32_t)(ECX));
  /* 1072da66 call 0x1072dce0 */
  push32(0x1072da6bu); f_1072dce0();
  /* 1072da6b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072da6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072da70 jne 0x1072da79 */
  if (!C.zf) goto L_1072da79;
  /* 1072da72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072da74 jmp 0x1072dbcf */
  goto L_1072dbcf;
L_1072da79:;
  /* 1072da79 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1072da7e push 0x1074b0f8 */
  push32((uint32_t)(0x1074b0f8u));
  /* 1072da83 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072da85 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1072da8b push edx */
  push32((uint32_t)(EDX));
  /* 1072da8c call 0x10726930 */
  push32(0x1072da91u); f_10726930();
  /* 1072da91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072da94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072da97 push eax */
  push32((uint32_t)(EAX));
  /* 1072da98 call 0x10723b00 */
  push32(0x1072da9du); f_10723b00();
  /* 1072da9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072daa0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072daa3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072daa7 jne 0x1072dab0 */
  if (!C.zf) goto L_1072dab0;
  /* 1072daa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072daab jmp 0x1072dbcf */
  goto L_1072dbcf;
L_1072dab0:;
  /* 1072dab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dab3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072dab6 mov ecx, dword ptr [eax + 0x1074e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1074e4dc)));
  /* 1072dabc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072dabf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dac2 mov eax, dword ptr [edx*4 + 0x1074f6f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1074f6f8)));
  /* 1072dac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072dacc push 6 */
  push32((uint32_t)(0x6u));
  /* 1072dace mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dad1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072dad4 add ecx, 0x1074f748 */
  { uint32_t _a=(ECX),_b=(0x1074f748u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dada push ecx */
  push32((uint32_t)(ECX));
  /* 1072dadb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1072dade push edx */
  push32((uint32_t)(EDX));
  /* 1072dadf call 0x1072a3e0 */
  push32(0x1072dae4u); f_1072a3e0();
  /* 1072dae4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dae7 mov eax, dword ptr [0x1074f710] */
  EAX = (r32((uint32_t)(0x1074f710)));
  /* 1072daec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1072daef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1072daf5 push ecx */
  push32((uint32_t)(ECX));
  /* 1072daf6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072daf9 push edx */
  push32((uint32_t)(EDX));
  /* 1072dafa call 0x10726ab0 */
  push32(0x1072daffu); f_10726ab0();
  /* 1072daff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072db02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072db05 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072db08 mov dword ptr [ecx + 0x1074e4dc], eax */
  w32((uint32_t)(ECX + 0x1074e4dc), (EAX));
  /* 1072db0e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1072db14 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1072db1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072db1d mov dword ptr [eax*4 + 0x1074f6f8], edx */
  w32((uint32_t)(EAX*4 + 0x1074f6f8), (EDX));
  /* 1072db24 push 6 */
  push32((uint32_t)(0x6u));
  /* 1072db26 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1072db2c push ecx */
  push32((uint32_t)(ECX));
  /* 1072db2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072db30 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072db33 add edx, 0x1074f748 */
  { uint32_t _a=(EDX),_b=(0x1074f748u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072db39 push edx */
  push32((uint32_t)(EDX));
  /* 1072db3a call 0x1072a3e0 */
  push32(0x1072db3fu); f_1072a3e0();
  /* 1072db3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072db42 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072db46 jne 0x1072db53 */
  if (!C.zf) goto L_1072db53;
  /* 1072db48 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1072db4e mov dword ptr [0x1074f710], eax */
  w32((uint32_t)(0x1074f710), (EAX));
L_1072db53:;
  /* 1072db53 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072db57 jne 0x1072db65 */
  if (!C.zf) goto L_1072db65;
  /* 1072db59 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1072db5f mov dword ptr [0x1074f714], ecx */
  w32((uint32_t)(0x1074f714), (ECX));
L_1072db65:;
  /* 1072db65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072db68 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072db6b call dword ptr [edx + 0x1074e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1074e4e0))), 0x1072db71u);
  /* 1072db71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072db73 je 0x1072dbac */
  if (C.zf) goto L_1072dbac;
  /* 1072db75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072db78 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072db7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072db7e mov dword ptr [eax + 0x1074e4dc], ecx */
  w32((uint32_t)(EAX + 0x1074e4dc), (ECX));
  /* 1072db84 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072db86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072db89 push edx */
  push32((uint32_t)(EDX));
  /* 1072db8a call 0x10724590 */
  push32(0x1072db8fu); f_10724590();
  /* 1072db8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072db92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072db95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072db98 mov dword ptr [eax*4 + 0x1074f6f8], ecx */
  w32((uint32_t)(EAX*4 + 0x1074f6f8), (ECX));
  /* 1072db9f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072dba2 mov dword ptr [0x1074f710], edx */
  w32((uint32_t)(0x1074f710), (EDX));
  /* 1072dba8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072dbaa jmp 0x1072dbcf */
  goto L_1072dbcf;
L_1072dbac:;
  /* 1072dbac cmp dword ptr [ebp - 0xc], 0x1074e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1074e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dbb3 je 0x1072dbc3 */
  if (C.zf) goto L_1072dbc3;
  /* 1072dbb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072dbb7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072dbba push eax */
  push32((uint32_t)(EAX));
  /* 1072dbbb call 0x10724590 */
  push32(0x1072dbc0u); f_10724590();
  /* 1072dbc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072dbc3:;
  /* 1072dbc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dbc6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072dbc9 mov eax, dword ptr [ecx + 0x1074e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1074e4dc)));
L_1072dbcf:;
  /* 1072dbcf mov esp, ebp */
  ESP = (EBP);
  /* 1072dbd1 pop ebp */
  EBP = (pop32());
  /* 1072dbd2 ret  */
  ESPCHK(0x1072da40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbe0 @ 0x1072dbe0 (256 bytes, 72 insns) */
void f_1072dbe0(void) {
  FTRACE(0x1072dbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072dbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072dbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1072dbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072dbe6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1072dbed cmp dword ptr [0x1074e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dbf4 jne 0x1072dc14 */
  if (!C.zf) goto L_1072dc14;
  /* 1072dbf6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1072dbfb push 0x1074b0f8 */
  push32((uint32_t)(0x1074b0f8u));
  /* 1072dc00 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072dc02 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1072dc07 call 0x10723b00 */
  push32(0x1072dc0cu); f_10723b00();
  /* 1072dc0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dc0f mov dword ptr [0x1074e4dc], eax */
  w32((uint32_t)(0x1074e4dc), (EAX));
L_1072dc14:;
  /* 1072dc14 mov eax, dword ptr [0x1074e4dc] */
  EAX = (r32((uint32_t)(0x1074e4dc)));
  /* 1072dc19 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1072dc1c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1072dc23 jmp 0x1072dc2e */
  goto L_1072dc2e;
L_1072dc25:;
  /* 1072dc25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072dc28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dc2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1072dc2e:;
  /* 1072dc2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072dc31 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072dc34 mov eax, dword ptr [edx + 0x1074e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1074e4dc)));
  /* 1072dc3a push eax */
  push32((uint32_t)(EAX));
  /* 1072dc3b push 0x1074b104 */
  push32((uint32_t)(0x1074b104u));
  /* 1072dc40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072dc43 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072dc46 mov edx, dword ptr [ecx + 0x1074e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1074e4d8)));
  /* 1072dc4c push edx */
  push32((uint32_t)(EDX));
  /* 1072dc4d push 3 */
  push32((uint32_t)(0x3u));
  /* 1072dc4f mov eax, dword ptr [0x1074e4dc] */
  EAX = (r32((uint32_t)(0x1074e4dc)));
  /* 1072dc54 push eax */
  push32((uint32_t)(EAX));
  /* 1072dc55 call 0x1072de80 */
  push32(0x1072dc5au); f_1072de80();
  /* 1072dc5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dc5d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dc61 jge 0x1072dca9 */
  if ((C.sf==C.of)) goto L_1072dca9;
  /* 1072dc63 push 0x1074b0f0 */
  push32((uint32_t)(0x1074b0f0u));
  /* 1072dc68 mov ecx, dword ptr [0x1074e4dc] */
  ECX = (r32((uint32_t)(0x1074e4dc)));
  /* 1072dc6e push ecx */
  push32((uint32_t)(ECX));
  /* 1072dc6f call 0x10726ac0 */
  push32(0x1072dc74u); f_10726ac0();
  /* 1072dc74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dc77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072dc7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dc7d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072dc80 mov eax, dword ptr [edx + 0x1074e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1074e4dc)));
  /* 1072dc86 push eax */
  push32((uint32_t)(EAX));
  /* 1072dc87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072dc8a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072dc8d mov edx, dword ptr [ecx + 0x1074e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1074e4dc)));
  /* 1072dc93 push edx */
  push32((uint32_t)(EDX));
  /* 1072dc94 call 0x1072f790 */
  push32(0x1072dc99u); f_1072f790();
  /* 1072dc99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dc9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072dc9e je 0x1072dca7 */
  if (C.zf) goto L_1072dca7;
  /* 1072dca0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1072dca7:;
  /* 1072dca7 jmp 0x1072dcd7 */
  goto L_1072dcd7;
L_1072dca9:;
  /* 1072dca9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dcad jne 0x1072dcb6 */
  if (!C.zf) goto L_1072dcb6;
  /* 1072dcaf mov eax, dword ptr [0x1074e4dc] */
  EAX = (r32((uint32_t)(0x1074e4dc)));
  /* 1072dcb4 jmp 0x1072dcdc */
  goto L_1072dcdc;
L_1072dcb6:;
  /* 1072dcb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072dcb8 mov eax, dword ptr [0x1074e4dc] */
  EAX = (r32((uint32_t)(0x1074e4dc)));
  /* 1072dcbd push eax */
  push32((uint32_t)(EAX));
  /* 1072dcbe call 0x10724590 */
  push32(0x1072dcc3u); f_10724590();
  /* 1072dcc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dcc6 mov dword ptr [0x1074e4dc], 0 */
  w32((uint32_t)(0x1074e4dc), (0x0u));
  /* 1072dcd0 mov eax, dword ptr [0x1074e4f4] */
  EAX = (r32((uint32_t)(0x1074e4f4)));
  /* 1072dcd5 jmp 0x1072dcdc */
  goto L_1072dcdc;
L_1072dcd7:;
  /* 1072dcd7 jmp 0x1072dc25 */
  goto L_1072dc25;
L_1072dcdc:;
  /* 1072dcdc mov esp, ebp */
  ESP = (EBP);
  /* 1072dcde pop ebp */
  EBP = (pop32());
  /* 1072dcdf ret  */
  ESPCHK(0x1072dbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x1072dce0 (388 bytes, 115 insns) */
void f_1072dce0(void) {
  FTRACE(0x1072dce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072dce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072dce1 mov ebp, esp */
  EBP = (ESP);
  /* 1072dce3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072dce9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dced jne 0x1072dcf6 */
  if (!C.zf) goto L_1072dcf6;
  /* 1072dcef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072dcf1 jmp 0x1072de60 */
  goto L_1072de60;
L_1072dcf6:;
  /* 1072dcf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dcf9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072dcfc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dcff jne 0x1072dd50 */
  if (!C.zf) goto L_1072dd50;
  /* 1072dd01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dd04 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1072dd08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072dd0a jne 0x1072dd50 */
  if (!C.zf) goto L_1072dd50;
  /* 1072dd0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072dd0f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1072dd12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072dd15 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1072dd19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dd1d je 0x1072dd39 */
  if (C.zf) goto L_1072dd39;
  /* 1072dd1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072dd22 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1072dd27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072dd2a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1072dd30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072dd33 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1072dd39:;
  /* 1072dd39 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dd3d je 0x1072dd48 */
  if (C.zf) goto L_1072dd48;
  /* 1072dd3f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072dd42 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1072dd48:;
  /* 1072dd48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072dd4b jmp 0x1072de60 */
  goto L_1072de60;
L_1072dd50:;
  /* 1072dd50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dd53 push ecx */
  push32((uint32_t)(ECX));
  /* 1072dd54 push 0x1074e450 */
  push32((uint32_t)(0x1074e450u));
  /* 1072dd59 call 0x1072f790 */
  push32(0x1072dd5eu); f_1072f790();
  /* 1072dd5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dd61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072dd63 je 0x1072de18 */
  if (C.zf) goto L_1072de18;
  /* 1072dd69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dd6c push edx */
  push32((uint32_t)(EDX));
  /* 1072dd6d push 0x1074e3cc */
  push32((uint32_t)(0x1074e3ccu));
  /* 1072dd72 call 0x1072f790 */
  push32(0x1072dd77u); f_1072f790();
  /* 1072dd77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dd7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072dd7c je 0x1072de18 */
  if (C.zf) goto L_1072de18;
  /* 1072dd82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dd85 push eax */
  push32((uint32_t)(EAX));
  /* 1072dd86 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1072dd8c push ecx */
  push32((uint32_t)(ECX));
  /* 1072dd8d call 0x1072ded0 */
  push32(0x1072dd92u); f_1072ded0();
  /* 1072dd92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dd95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072dd97 je 0x1072dda0 */
  if (C.zf) goto L_1072dda0;
  /* 1072dd99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072dd9b jmp 0x1072de60 */
  goto L_1072de60;
L_1072dda0:;
  /* 1072dda0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1072dda6 push edx */
  push32((uint32_t)(EDX));
  /* 1072dda7 push 0x1074f720 */
  push32((uint32_t)(0x1074f720u));
  /* 1072ddac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1072ddb2 push eax */
  push32((uint32_t)(EAX));
  /* 1072ddb3 call 0x1072f8e0 */
  push32(0x1072ddb8u); f_1072f8e0();
  /* 1072ddb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ddbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072ddbd jne 0x1072ddc6 */
  if (!C.zf) goto L_1072ddc6;
  /* 1072ddbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072ddc1 jmp 0x1072de60 */
  goto L_1072de60;
L_1072ddc6:;
  /* 1072ddc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072ddc8 mov cx, word ptr [0x1074f724] */
  CX = (r16((uint32_t)(0x1074f724)));
  /* 1072ddcf mov dword ptr [0x1074f728], ecx */
  w32((uint32_t)(0x1074f728), (ECX));
  /* 1072ddd5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1072dddb push edx */
  push32((uint32_t)(EDX));
  /* 1072dddc push 0x1074e450 */
  push32((uint32_t)(0x1074e450u));
  /* 1072dde1 call 0x1072e030 */
  push32(0x1072dde6u); f_1072e030();
  /* 1072dde6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dde9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ddec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072ddef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072ddf1 je 0x1072de06 */
  if (C.zf) goto L_1072de06;
  /* 1072ddf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ddf6 push edx */
  push32((uint32_t)(EDX));
  /* 1072ddf7 push 0x1074e3cc */
  push32((uint32_t)(0x1074e3ccu));
  /* 1072ddfc call 0x10726ab0 */
  push32(0x1072de01u); f_10726ab0();
  /* 1072de01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072de04 jmp 0x1072de18 */
  goto L_1072de18;
L_1072de06:;
  /* 1072de06 push 0x1074e450 */
  push32((uint32_t)(0x1074e450u));
  /* 1072de0b push 0x1074e3cc */
  push32((uint32_t)(0x1074e3ccu));
  /* 1072de10 call 0x10726ab0 */
  push32(0x1072de15u); f_10726ab0();
  /* 1072de15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072de18:;
  /* 1072de18 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072de1c je 0x1072de31 */
  if (C.zf) goto L_1072de31;
  /* 1072de1e push 6 */
  push32((uint32_t)(0x6u));
  /* 1072de20 push 0x1074f720 */
  push32((uint32_t)(0x1074f720u));
  /* 1072de25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072de28 push eax */
  push32((uint32_t)(EAX));
  /* 1072de29 call 0x1072a3e0 */
  push32(0x1072de2eu); f_1072a3e0();
  /* 1072de2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072de31:;
  /* 1072de31 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072de35 je 0x1072de4a */
  if (C.zf) goto L_1072de4a;
  /* 1072de37 push 4 */
  push32((uint32_t)(0x4u));
  /* 1072de39 push 0x1074f728 */
  push32((uint32_t)(0x1074f728u));
  /* 1072de3e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1072de41 push ecx */
  push32((uint32_t)(ECX));
  /* 1072de42 call 0x1072a3e0 */
  push32(0x1072de47u); f_1072a3e0();
  /* 1072de47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072de4a:;
  /* 1072de4a push 0x1074e450 */
  push32((uint32_t)(0x1074e450u));
  /* 1072de4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072de52 push edx */
  push32((uint32_t)(EDX));
  /* 1072de53 call 0x10726ab0 */
  push32(0x1072de58u); f_10726ab0();
  /* 1072de58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072de5b mov eax, 0x1074e450 */
  EAX = (0x1074e450u);
L_1072de60:;
  /* 1072de60 mov esp, ebp */
  ESP = (EBP);
  /* 1072de62 pop ebp */
  EBP = (pop32());
  /* 1072de63 ret  */
  ESPCHK(0x1072dce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de70 @ 0x1072de70 (7 bytes, 5 insns) */
void f_1072de70(void) {
  FTRACE(0x1072de70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072de70 push ebp */
  push32((uint32_t)(EBP));
  /* 1072de71 mov ebp, esp */
  EBP = (ESP);
  /* 1072de73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072de75 pop ebp */
  EBP = (pop32());
  /* 1072de76 ret  */
  ESPCHK(0x1072de70u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1072de80 (79 bytes, 28 insns) */
void f_1072de80(void) {
  FTRACE(0x1072de80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072de80 push ebp */
  push32((uint32_t)(EBP));
  /* 1072de81 mov ebp, esp */
  EBP = (ESP);
  /* 1072de83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072de86 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1072de89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072de8c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1072de93 jmp 0x1072de9e */
  goto L_1072de9e;
L_1072de95:;
  /* 1072de95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072de98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072de9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1072de9e:;
  /* 1072de9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072dea1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dea4 jge 0x1072dec4 */
  if ((C.sf==C.of)) goto L_1072dec4;
  /* 1072dea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072dea9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072deac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072deaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072deb2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1072deb5 push edx */
  push32((uint32_t)(EDX));
  /* 1072deb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072deb9 push eax */
  push32((uint32_t)(EAX));
  /* 1072deba call 0x10726ac0 */
  push32(0x1072debfu); f_10726ac0();
  /* 1072debf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dec2 jmp 0x1072de95 */
  goto L_1072de95;
L_1072dec4:;
  /* 1072dec4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072decb mov esp, ebp */
  ESP = (EBP);
  /* 1072decd pop ebp */
  EBP = (pop32());
  /* 1072dece ret  */
  ESPCHK(0x1072de80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ded0 @ 0x1072ded0 (349 bytes, 122 insns) */
void f_1072ded0(void) {
  FTRACE(0x1072ded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072ded0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072ded1 mov ebp, esp */
  EBP = (ESP);
  /* 1072ded3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072ded6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1072dedb push 0 */
  push32((uint32_t)(0x0u));
  /* 1072dedd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dee0 push eax */
  push32((uint32_t)(EAX));
  /* 1072dee1 call 0x10727870 */
  push32(0x1072dee6u); f_10727870();
  /* 1072dee6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dee9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072deec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072deef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072def1 jne 0x1072defa */
  if (!C.zf) goto L_1072defa;
  /* 1072def3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072def5 jmp 0x1072e029 */
  goto L_1072e029;
L_1072defa:;
  /* 1072defa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072defd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072df00 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072df03 jne 0x1072df30 */
  if (!C.zf) goto L_1072df30;
  /* 1072df05 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072df08 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1072df0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072df0e je 0x1072df30 */
  if (C.zf) goto L_1072df30;
  /* 1072df10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072df13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072df16 push ecx */
  push32((uint32_t)(ECX));
  /* 1072df17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072df1a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072df20 push edx */
  push32((uint32_t)(EDX));
  /* 1072df21 call 0x10726ab0 */
  push32(0x1072df26u); f_10726ab0();
  /* 1072df26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072df29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072df2b jmp 0x1072e029 */
  goto L_1072e029;
L_1072df30:;
  /* 1072df30 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1072df37 jmp 0x1072df42 */
  goto L_1072df42;
L_1072df39:;
  /* 1072df39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072df3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072df3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072df42:;
  /* 1072df42 push 0x1074b108 */
  push32((uint32_t)(0x1074b108u));
  /* 1072df47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072df4a push ecx */
  push32((uint32_t)(ECX));
  /* 1072df4b call 0x1072f820 */
  push32(0x1072df50u); f_1072f820();
  /* 1072df50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072df53 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1072df56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072df5a jne 0x1072df64 */
  if (!C.zf) goto L_1072df64;
  /* 1072df5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072df5f jmp 0x1072e029 */
  goto L_1072e029;
L_1072df64:;
  /* 1072df64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072df67 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072df6a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1072df6c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1072df6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072df73 jne 0x1072df9a */
  if (!C.zf) goto L_1072df9a;
  /* 1072df75 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072df79 jge 0x1072df9a */
  if ((C.sf==C.of)) goto L_1072df9a;
  /* 1072df7b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1072df7f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072df82 je 0x1072df9a */
  if (C.zf) goto L_1072df9a;
  /* 1072df84 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072df87 push edx */
  push32((uint32_t)(EDX));
  /* 1072df88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072df8b push eax */
  push32((uint32_t)(EAX));
  /* 1072df8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072df8f push ecx */
  push32((uint32_t)(ECX));
  /* 1072df90 call 0x10727320 */
  push32(0x1072df95u); f_10727320();
  /* 1072df95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072df98 jmp 0x1072e000 */
  goto L_1072e000;
L_1072df9a:;
  /* 1072df9a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072df9e jne 0x1072dfc8 */
  if (!C.zf) goto L_1072dfc8;
  /* 1072dfa0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dfa4 jge 0x1072dfc8 */
  if ((C.sf==C.of)) goto L_1072dfc8;
  /* 1072dfa6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1072dfaa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dfad je 0x1072dfc8 */
  if (C.zf) goto L_1072dfc8;
  /* 1072dfaf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072dfb2 push eax */
  push32((uint32_t)(EAX));
  /* 1072dfb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072dfb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1072dfb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dfba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dfbd push edx */
  push32((uint32_t)(EDX));
  /* 1072dfbe call 0x10727320 */
  push32(0x1072dfc3u); f_10727320();
  /* 1072dfc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dfc6 jmp 0x1072e000 */
  goto L_1072e000;
L_1072dfc8:;
  /* 1072dfc8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dfcc jne 0x1072dffb */
  if (!C.zf) goto L_1072dffb;
  /* 1072dfce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1072dfd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072dfd4 je 0x1072dfdf */
  if (C.zf) goto L_1072dfdf;
  /* 1072dfd6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1072dfda cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072dfdd jne 0x1072dffb */
  if (!C.zf) goto L_1072dffb;
L_1072dfdf:;
  /* 1072dfdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072dfe2 push edx */
  push32((uint32_t)(EDX));
  /* 1072dfe3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072dfe6 push eax */
  push32((uint32_t)(EAX));
  /* 1072dfe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072dfea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dff0 push ecx */
  push32((uint32_t)(ECX));
  /* 1072dff1 call 0x10727320 */
  push32(0x1072dff6u); f_10727320();
  /* 1072dff6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072dff9 jmp 0x1072e000 */
  goto L_1072e000;
L_1072dffb:;
  /* 1072dffb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072dffe jmp 0x1072e029 */
  goto L_1072e029;
L_1072e000:;
  /* 1072e000 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1072e004 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e007 jne 0x1072e00b */
  if (!C.zf) goto L_1072e00b;
  /* 1072e009 jmp 0x1072e027 */
  goto L_1072e027;
L_1072e00b:;
  /* 1072e00b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1072e00f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072e011 jne 0x1072e015 */
  if (!C.zf) goto L_1072e015;
  /* 1072e013 jmp 0x1072e027 */
  goto L_1072e027;
L_1072e015:;
  /* 1072e015 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e018 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072e01b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1072e01f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1072e022 jmp 0x1072df39 */
  goto L_1072df39;
L_1072e027:;
  /* 1072e027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072e029:;
  /* 1072e029 mov esp, ebp */
  ESP = (EBP);
  /* 1072e02b pop ebp */
  EBP = (pop32());
  /* 1072e02c ret  */
  ESPCHK(0x1072ded0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1072e030 (101 bytes, 36 insns) */
void f_1072e030(void) {
  FTRACE(0x1072e030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072e030 push ebp */
  push32((uint32_t)(EBP));
  /* 1072e031 mov ebp, esp */
  EBP = (ESP);
  /* 1072e033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072e036 push eax */
  push32((uint32_t)(EAX));
  /* 1072e037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e03a push ecx */
  push32((uint32_t)(ECX));
  /* 1072e03b call 0x10726ab0 */
  push32(0x1072e040u); f_10726ab0();
  /* 1072e040 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e043 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072e046 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1072e04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072e04c je 0x1072e068 */
  if (C.zf) goto L_1072e068;
  /* 1072e04e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072e051 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e054 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e055 push 0x1074b110 */
  push32((uint32_t)(0x1074b110u));
  /* 1072e05a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e05c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e05f push edx */
  push32((uint32_t)(EDX));
  /* 1072e060 call 0x1072de80 */
  push32(0x1072e065u); f_1072de80();
  /* 1072e065 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072e068:;
  /* 1072e068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072e06b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1072e072 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072e074 je 0x1072e093 */
  if (C.zf) goto L_1072e093;
  /* 1072e076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072e079 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e07f push edx */
  push32((uint32_t)(EDX));
  /* 1072e080 push 0x1074b10c */
  push32((uint32_t)(0x1074b10cu));
  /* 1072e085 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e08a push eax */
  push32((uint32_t)(EAX));
  /* 1072e08b call 0x1072de80 */
  push32(0x1072e090u); f_1072de80();
  /* 1072e090 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072e093:;
  /* 1072e093 pop ebp */
  EBP = (pop32());
  /* 1072e094 ret  */
  ESPCHK(0x1072e030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0a0 @ 0x1072e0a0 (130 bytes, 50 insns) */
void f_1072e0a0(void) {
  FTRACE(0x1072e0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072e0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072e0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1072e0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e0a4 push ebx */
  push32((uint32_t)(EBX));
  /* 1072e0a5 push esi */
  push32((uint32_t)(ESI));
  /* 1072e0a6 push edi */
  push32((uint32_t)(EDI));
  /* 1072e0a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1072e0ae:;
  /* 1072e0ae cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e0b2 jne 0x1072e0d2 */
  if (!C.zf) goto L_1072e0d2;
  /* 1072e0b4 push 0x1074b120 */
  push32((uint32_t)(0x1074b120u));
  /* 1072e0b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072e0bb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1072e0bd push 0x1074b114 */
  push32((uint32_t)(0x1074b114u));
  /* 1072e0c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e0c4 call 0x10722bc0 */
  push32(0x1072e0c9u); f_10722bc0();
  /* 1072e0c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e0cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e0cf jne 0x1072e0d2 */
  if (!C.zf) goto L_1072e0d2;
  /* 1072e0d1 int3  */
  x86_unimpl("int3 @ 0x1072e0d1");
L_1072e0d2:;
  /* 1072e0d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072e0d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072e0d6 jne 0x1072e0ae */
  if (!C.zf) goto L_1072e0ae;
  /* 1072e0d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e0db mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072e0de and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1072e0e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072e0e3 je 0x1072e0f1 */
  if (C.zf) goto L_1072e0f1;
  /* 1072e0e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e0e8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1072e0ef jmp 0x1072e118 */
  goto L_1072e118;
L_1072e0f1:;
  /* 1072e0f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e0f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e0f5 call 0x1072c910 */
  push32(0x1072e0fau); f_1072c910();
  /* 1072e0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e0fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e100 push edx */
  push32((uint32_t)(EDX));
  /* 1072e101 call 0x1072e130 */
  push32(0x1072e106u); f_1072e130();
  /* 1072e106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072e10c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e10f push eax */
  push32((uint32_t)(EAX));
  /* 1072e110 call 0x1072c980 */
  push32(0x1072e115u); f_1072c980();
  /* 1072e115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072e118:;
  /* 1072e118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e11b pop edi */
  EDI = (pop32());
  /* 1072e11c pop esi */
  ESI = (pop32());
  /* 1072e11d pop ebx */
  EBX = (pop32());
  /* 1072e11e mov esp, ebp */
  ESP = (EBP);
  /* 1072e120 pop ebp */
  EBP = (pop32());
  /* 1072e121 ret  */
  ESPCHK(0x1072e0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e130 @ 0x1072e130 (190 bytes, 67 insns) */
void f_1072e130(void) {
  FTRACE(0x1072e130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072e130 push ebp */
  push32((uint32_t)(EBP));
  /* 1072e131 mov ebp, esp */
  EBP = (ESP);
  /* 1072e133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072e136 push ebx */
  push32((uint32_t)(EBX));
  /* 1072e137 push esi */
  push32((uint32_t)(ESI));
  /* 1072e138 push edi */
  push32((uint32_t)(EDI));
  /* 1072e139 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1072e140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e143 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1072e146:;
  /* 1072e146 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e14a jne 0x1072e16a */
  if (!C.zf) goto L_1072e16a;
  /* 1072e14c push 0x1074afc4 */
  push32((uint32_t)(0x1074afc4u));
  /* 1072e151 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072e153 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1072e155 push 0x1074b114 */
  push32((uint32_t)(0x1074b114u));
  /* 1072e15a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e15c call 0x10722bc0 */
  push32(0x1072e161u); f_10722bc0();
  /* 1072e161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e164 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e167 jne 0x1072e16a */
  if (!C.zf) goto L_1072e16a;
  /* 1072e169 int3  */
  x86_unimpl("int3 @ 0x1072e169");
L_1072e16a:;
  /* 1072e16a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e16c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072e16e jne 0x1072e146 */
  if (!C.zf) goto L_1072e146;
  /* 1072e170 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e173 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1072e176 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1072e17b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072e17d je 0x1072e1da */
  if (C.zf) goto L_1072e1da;
  /* 1072e17f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e182 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e183 call 0x1072d430 */
  push32(0x1072e188u); f_1072d430();
  /* 1072e188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e18b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072e18e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e191 push edx */
  push32((uint32_t)(EDX));
  /* 1072e192 call 0x107307b0 */
  push32(0x1072e197u); f_107307b0();
  /* 1072e197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e19a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e19d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1072e1a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e1a1 call 0x10730680 */
  push32(0x1072e1a6u); f_10730680();
  /* 1072e1a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e1a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072e1ab jge 0x1072e1b6 */
  if ((C.sf==C.of)) goto L_1072e1b6;
  /* 1072e1ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1072e1b4 jmp 0x1072e1da */
  goto L_1072e1da;
L_1072e1b6:;
  /* 1072e1b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e1b9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e1bd je 0x1072e1da */
  if (C.zf) goto L_1072e1da;
  /* 1072e1bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e1c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e1c4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1072e1c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e1c8 call 0x10724590 */
  push32(0x1072e1cdu); f_10724590();
  /* 1072e1cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e1d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e1d3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1072e1da:;
  /* 1072e1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e1dd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1072e1e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e1e7 pop edi */
  EDI = (pop32());
  /* 1072e1e8 pop esi */
  ESI = (pop32());
  /* 1072e1e9 pop ebx */
  EBX = (pop32());
  /* 1072e1ea mov esp, ebp */
  ESP = (EBP);
  /* 1072e1ec pop ebp */
  EBP = (pop32());
  /* 1072e1ed ret  */
  ESPCHK(0x1072e130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1f0 @ 0x1072e1f0 (210 bytes, 63 insns) */
void f_1072e1f0(void) {
  FTRACE(0x1072e1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072e1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072e1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1072e1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e1f7 cmp eax, dword ptr [0x1075101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1075101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e1fd jae 0x1072e221 */
  if (!C.cf) goto L_1072e221;
  /* 1072e1ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e202 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1072e205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e208 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1072e20b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072e20e mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 1072e215 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1072e21a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1072e21d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072e21f jne 0x1072e234 */
  if (!C.zf) goto L_1072e234;
L_1072e221:;
  /* 1072e221 call 0x1072b9d0 */
  push32(0x1072e226u); f_1072b9d0();
  /* 1072e226 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1072e22c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072e22f jmp 0x1072e2be */
  goto L_1072e2be;
L_1072e234:;
  /* 1072e234 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e237 push edx */
  push32((uint32_t)(EDX));
  /* 1072e238 call 0x1072d1f0 */
  push32(0x1072e23du); f_1072d1f0();
  /* 1072e23d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e243 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1072e246 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e249 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1072e24c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1072e24f mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 1072e256 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1072e25b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1072e25e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072e260 je 0x1072e29d */
  if (C.zf) goto L_1072e29d;
  /* 1072e262 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e265 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e266 call 0x1072d070 */
  push32(0x1072e26bu); f_1072d070();
  /* 1072e26b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e26e push eax */
  push32((uint32_t)(EAX));
  /* 1072e26f call dword ptr [0x107522b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522b4))), 0x1072e275u);
  /* 1072e275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072e277 jne 0x1072e284 */
  if (!C.zf) goto L_1072e284;
  /* 1072e279 call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x1072e27fu);
  /* 1072e27f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072e282 jmp 0x1072e28b */
  goto L_1072e28b;
L_1072e284:;
  /* 1072e284 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1072e28b:;
  /* 1072e28b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e28f jne 0x1072e293 */
  if (!C.zf) goto L_1072e293;
  /* 1072e291 jmp 0x1072e2af */
  goto L_1072e2af;
L_1072e293:;
  /* 1072e293 call 0x1072b9e0 */
  push32(0x1072e298u); f_1072b9e0();
  /* 1072e298 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e29b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1072e29d:;
  /* 1072e29d call 0x1072b9d0 */
  push32(0x1072e2a2u); f_1072b9d0();
  /* 1072e2a2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1072e2a8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1072e2af:;
  /* 1072e2af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e2b2 push eax */
  push32((uint32_t)(EAX));
  /* 1072e2b3 call 0x1072d280 */
  push32(0x1072e2b8u); f_1072d280();
  /* 1072e2b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e2bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1072e2be:;
  /* 1072e2be mov esp, ebp */
  ESP = (EBP);
  /* 1072e2c0 pop ebp */
  EBP = (pop32());
  /* 1072e2c1 ret  */
  ESPCHK(0x1072e1f0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1072e2d0 (219 bytes, 64 insns) */
void f_1072e2d0(void) {
  FTRACE(0x1072e2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072e2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072e2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1072e2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e2d4 cmp dword ptr [0x1074f70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e2db je 0x1072e371 */
  if (C.zf) goto L_1072e371;
  /* 1072e2e1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1072e2e3 push 0x1074b130 */
  push32((uint32_t)(0x1074b130u));
  /* 1072e2e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e2ea push 0xac */
  push32((uint32_t)(0xacu));
  /* 1072e2ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e2f1 call 0x10723f10 */
  push32(0x1072e2f6u); f_10723f10();
  /* 1072e2f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e2f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072e2fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e300 jne 0x1072e30c */
  if (!C.zf) goto L_1072e30c;
  /* 1072e302 mov eax, 1 */
  EAX = (0x1u);
  /* 1072e307 jmp 0x1072e3a7 */
  goto L_1072e3a7;
L_1072e30c:;
  /* 1072e30c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e30f push eax */
  push32((uint32_t)(EAX));
  /* 1072e310 call 0x1072e3b0 */
  push32(0x1072e315u); f_1072e3b0();
  /* 1072e315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072e31a je 0x1072e33d */
  if (C.zf) goto L_1072e33d;
  /* 1072e31c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e31f push ecx */
  push32((uint32_t)(ECX));
  /* 1072e320 call 0x1072e940 */
  push32(0x1072e325u); f_1072e940();
  /* 1072e325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e328 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e32a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e32d push edx */
  push32((uint32_t)(EDX));
  /* 1072e32e call 0x10724590 */
  push32(0x1072e333u); f_10724590();
  /* 1072e333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e336 mov eax, 1 */
  EAX = (0x1u);
  /* 1072e33b jmp 0x1072e3a7 */
  goto L_1072e3a7;
L_1072e33d:;
  /* 1072e33d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e340 mov dword ptr [0x1074ec98], eax */
  w32((uint32_t)(0x1074ec98), (EAX));
  /* 1072e345 mov ecx, dword ptr [0x1074f72c] */
  ECX = (r32((uint32_t)(0x1074f72c)));
  /* 1072e34b push ecx */
  push32((uint32_t)(ECX));
  /* 1072e34c call 0x1072e940 */
  push32(0x1072e351u); f_1072e940();
  /* 1072e351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e354 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e356 mov edx, dword ptr [0x1074f72c] */
  EDX = (r32((uint32_t)(0x1074f72c)));
  /* 1072e35c push edx */
  push32((uint32_t)(EDX));
  /* 1072e35d call 0x10724590 */
  push32(0x1072e362u); f_10724590();
  /* 1072e362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e368 mov dword ptr [0x1074f72c], eax */
  w32((uint32_t)(0x1074f72c), (EAX));
  /* 1072e36d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072e36f jmp 0x1072e3a7 */
  goto L_1072e3a7;
L_1072e371:;
  /* 1072e371 mov dword ptr [0x1074ec98], 0x1074eca0 */
  w32((uint32_t)(0x1074ec98), (0x1074eca0u));
  /* 1072e37b mov ecx, dword ptr [0x1074f72c] */
  ECX = (r32((uint32_t)(0x1074f72c)));
  /* 1072e381 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e382 call 0x1072e940 */
  push32(0x1072e387u); f_1072e940();
  /* 1072e387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e38a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e38c mov edx, dword ptr [0x1074f72c] */
  EDX = (r32((uint32_t)(0x1074f72c)));
  /* 1072e392 push edx */
  push32((uint32_t)(EDX));
  /* 1072e393 call 0x10724590 */
  push32(0x1072e398u); f_10724590();
  /* 1072e398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e39b mov dword ptr [0x1074f72c], 0 */
  w32((uint32_t)(0x1074f72c), (0x0u));
  /* 1072e3a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072e3a7:;
  /* 1072e3a7 mov esp, ebp */
  ESP = (EBP);
  /* 1072e3a9 pop ebp */
  EBP = (pop32());
  /* 1072e3aa ret  */
  ESPCHK(0x1072e2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3b0 @ 0x1072e3b0 (1423 bytes, 533 insns) */
void f_1072e3b0(void) {
  FTRACE(0x1072e3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072e3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072e3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1072e3b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072e3b6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1072e3bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072e3bf mov ax, word ptr [0x1074f766] */
  AX = (r16((uint32_t)(0x1074f766)));
  /* 1072e3c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072e3c8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e3ca mov cx, word ptr [0x1074f768] */
  CX = (r16((uint32_t)(0x1074f768)));
  /* 1072e3d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072e3d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e3d8 jne 0x1072e3e2 */
  if (!C.zf) goto L_1072e3e2;
  /* 1072e3da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072e3dd jmp 0x1072e93b */
  goto L_1072e93b;
L_1072e3e2:;
  /* 1072e3e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e3e5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e3e8 push edx */
  push32((uint32_t)(EDX));
  /* 1072e3e9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1072e3eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e3ee push eax */
  push32((uint32_t)(EAX));
  /* 1072e3ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e3f1 call 0x10731cc0 */
  push32(0x1072e3f6u); f_10731cc0();
  /* 1072e3f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e3f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e3fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e3fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e404 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e407 push edx */
  push32((uint32_t)(EDX));
  /* 1072e408 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1072e40a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e40d push eax */
  push32((uint32_t)(EAX));
  /* 1072e40e push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e410 call 0x10731cc0 */
  push32(0x1072e415u); f_10731cc0();
  /* 1072e415 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e418 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e41b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e41d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e420 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e423 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e426 push edx */
  push32((uint32_t)(EDX));
  /* 1072e427 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1072e429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e42c push eax */
  push32((uint32_t)(EAX));
  /* 1072e42d push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e42f call 0x10731cc0 */
  push32(0x1072e434u); f_10731cc0();
  /* 1072e434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e437 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e43a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e43c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e43f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e442 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e445 push edx */
  push32((uint32_t)(EDX));
  /* 1072e446 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1072e448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e44b push eax */
  push32((uint32_t)(EAX));
  /* 1072e44c push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e44e call 0x10731cc0 */
  push32(0x1072e453u); f_10731cc0();
  /* 1072e453 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e456 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e459 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e45b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e45e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e461 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e464 push edx */
  push32((uint32_t)(EDX));
  /* 1072e465 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1072e467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e46a push eax */
  push32((uint32_t)(EAX));
  /* 1072e46b push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e46d call 0x10731cc0 */
  push32(0x1072e472u); f_10731cc0();
  /* 1072e472 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e478 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e47a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e47d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e480 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e483 push edx */
  push32((uint32_t)(EDX));
  /* 1072e484 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1072e486 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e489 push eax */
  push32((uint32_t)(EAX));
  /* 1072e48a push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e48c call 0x10731cc0 */
  push32(0x1072e491u); f_10731cc0();
  /* 1072e491 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e497 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e499 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e49c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e49f push edx */
  push32((uint32_t)(EDX));
  /* 1072e4a0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1072e4a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e4a5 push eax */
  push32((uint32_t)(EAX));
  /* 1072e4a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e4a8 call 0x10731cc0 */
  push32(0x1072e4adu); f_10731cc0();
  /* 1072e4ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e4b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e4b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e4b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e4b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e4bb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e4be push edx */
  push32((uint32_t)(EDX));
  /* 1072e4bf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1072e4c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e4c4 push eax */
  push32((uint32_t)(EAX));
  /* 1072e4c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e4c7 call 0x10731cc0 */
  push32(0x1072e4ccu); f_10731cc0();
  /* 1072e4cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e4cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e4d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e4d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e4d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e4da add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e4dd push edx */
  push32((uint32_t)(EDX));
  /* 1072e4de push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1072e4e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e4e3 push eax */
  push32((uint32_t)(EAX));
  /* 1072e4e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e4e6 call 0x10731cc0 */
  push32(0x1072e4ebu); f_10731cc0();
  /* 1072e4eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e4ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e4f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e4f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e4f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e4f9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e4fc push edx */
  push32((uint32_t)(EDX));
  /* 1072e4fd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1072e4ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e502 push eax */
  push32((uint32_t)(EAX));
  /* 1072e503 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e505 call 0x10731cc0 */
  push32(0x1072e50au); f_10731cc0();
  /* 1072e50a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e50d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e510 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e512 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e515 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e518 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e51b push edx */
  push32((uint32_t)(EDX));
  /* 1072e51c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1072e51e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e521 push eax */
  push32((uint32_t)(EAX));
  /* 1072e522 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e524 call 0x10731cc0 */
  push32(0x1072e529u); f_10731cc0();
  /* 1072e529 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e52c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e52f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e531 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e537 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e53a push edx */
  push32((uint32_t)(EDX));
  /* 1072e53b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1072e53d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e540 push eax */
  push32((uint32_t)(EAX));
  /* 1072e541 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e543 call 0x10731cc0 */
  push32(0x1072e548u); f_10731cc0();
  /* 1072e548 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e54b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e54e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e550 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e553 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e556 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e559 push edx */
  push32((uint32_t)(EDX));
  /* 1072e55a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1072e55c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e55f push eax */
  push32((uint32_t)(EAX));
  /* 1072e560 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e562 call 0x10731cc0 */
  push32(0x1072e567u); f_10731cc0();
  /* 1072e567 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e56a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e56d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e56f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e572 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e575 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e578 push edx */
  push32((uint32_t)(EDX));
  /* 1072e579 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1072e57b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e57e push eax */
  push32((uint32_t)(EAX));
  /* 1072e57f push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e581 call 0x10731cc0 */
  push32(0x1072e586u); f_10731cc0();
  /* 1072e586 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e589 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e58c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e58e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e591 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e594 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e597 push edx */
  push32((uint32_t)(EDX));
  /* 1072e598 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1072e59a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e59d push eax */
  push32((uint32_t)(EAX));
  /* 1072e59e push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e5a0 call 0x10731cc0 */
  push32(0x1072e5a5u); f_10731cc0();
  /* 1072e5a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e5a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e5ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e5ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e5b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e5b3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e5b6 push edx */
  push32((uint32_t)(EDX));
  /* 1072e5b7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1072e5b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e5bc push eax */
  push32((uint32_t)(EAX));
  /* 1072e5bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e5bf call 0x10731cc0 */
  push32(0x1072e5c4u); f_10731cc0();
  /* 1072e5c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e5c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e5ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e5cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e5cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e5d2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e5d5 push edx */
  push32((uint32_t)(EDX));
  /* 1072e5d6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1072e5d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e5db push eax */
  push32((uint32_t)(EAX));
  /* 1072e5dc push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e5de call 0x10731cc0 */
  push32(0x1072e5e3u); f_10731cc0();
  /* 1072e5e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e5e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e5e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e5eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e5f1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e5f4 push edx */
  push32((uint32_t)(EDX));
  /* 1072e5f5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1072e5f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e5fa push eax */
  push32((uint32_t)(EAX));
  /* 1072e5fb push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e5fd call 0x10731cc0 */
  push32(0x1072e602u); f_10731cc0();
  /* 1072e602 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e605 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e608 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e60a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e610 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e613 push edx */
  push32((uint32_t)(EDX));
  /* 1072e614 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1072e616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e619 push eax */
  push32((uint32_t)(EAX));
  /* 1072e61a push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e61c call 0x10731cc0 */
  push32(0x1072e621u); f_10731cc0();
  /* 1072e621 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e624 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e627 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e629 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e62c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e62f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e632 push edx */
  push32((uint32_t)(EDX));
  /* 1072e633 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1072e635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e638 push eax */
  push32((uint32_t)(EAX));
  /* 1072e639 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e63b call 0x10731cc0 */
  push32(0x1072e640u); f_10731cc0();
  /* 1072e640 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e643 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e646 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e648 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e64b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e64e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e651 push edx */
  push32((uint32_t)(EDX));
  /* 1072e652 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1072e654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e657 push eax */
  push32((uint32_t)(EAX));
  /* 1072e658 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e65a call 0x10731cc0 */
  push32(0x1072e65fu); f_10731cc0();
  /* 1072e65f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e662 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e665 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e667 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e66a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e66d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e670 push edx */
  push32((uint32_t)(EDX));
  /* 1072e671 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1072e673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e676 push eax */
  push32((uint32_t)(EAX));
  /* 1072e677 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e679 call 0x10731cc0 */
  push32(0x1072e67eu); f_10731cc0();
  /* 1072e67e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e681 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e684 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e686 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e689 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e68c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e68f push edx */
  push32((uint32_t)(EDX));
  /* 1072e690 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1072e692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e695 push eax */
  push32((uint32_t)(EAX));
  /* 1072e696 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e698 call 0x10731cc0 */
  push32(0x1072e69du); f_10731cc0();
  /* 1072e69d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e6a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e6a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e6a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e6a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e6ab add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e6ae push edx */
  push32((uint32_t)(EDX));
  /* 1072e6af push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1072e6b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e6b4 push eax */
  push32((uint32_t)(EAX));
  /* 1072e6b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e6b7 call 0x10731cc0 */
  push32(0x1072e6bcu); f_10731cc0();
  /* 1072e6bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e6bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e6c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e6c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e6c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e6ca add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e6cd push edx */
  push32((uint32_t)(EDX));
  /* 1072e6ce push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1072e6d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e6d3 push eax */
  push32((uint32_t)(EAX));
  /* 1072e6d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e6d6 call 0x10731cc0 */
  push32(0x1072e6dbu); f_10731cc0();
  /* 1072e6db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e6de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e6e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e6e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e6e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e6e9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e6ec push edx */
  push32((uint32_t)(EDX));
  /* 1072e6ed push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1072e6ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1072e6f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e6f5 call 0x10731cc0 */
  push32(0x1072e6fau); f_10731cc0();
  /* 1072e6fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e6fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e700 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e702 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e705 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e708 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e70b push edx */
  push32((uint32_t)(EDX));
  /* 1072e70c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1072e70e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e711 push eax */
  push32((uint32_t)(EAX));
  /* 1072e712 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e714 call 0x10731cc0 */
  push32(0x1072e719u); f_10731cc0();
  /* 1072e719 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e71c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e71f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e721 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e724 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e727 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e72a push edx */
  push32((uint32_t)(EDX));
  /* 1072e72b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1072e72d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e730 push eax */
  push32((uint32_t)(EAX));
  /* 1072e731 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e733 call 0x10731cc0 */
  push32(0x1072e738u); f_10731cc0();
  /* 1072e738 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e73b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e73e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e740 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e746 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e749 push edx */
  push32((uint32_t)(EDX));
  /* 1072e74a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1072e74c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e74f push eax */
  push32((uint32_t)(EAX));
  /* 1072e750 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e752 call 0x10731cc0 */
  push32(0x1072e757u); f_10731cc0();
  /* 1072e757 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e75a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e75d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e75f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e762 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e765 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e768 push edx */
  push32((uint32_t)(EDX));
  /* 1072e769 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1072e76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e76e push eax */
  push32((uint32_t)(EAX));
  /* 1072e76f push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e771 call 0x10731cc0 */
  push32(0x1072e776u); f_10731cc0();
  /* 1072e776 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e779 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e77c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e77e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e784 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e787 push edx */
  push32((uint32_t)(EDX));
  /* 1072e788 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1072e78a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e78d push eax */
  push32((uint32_t)(EAX));
  /* 1072e78e push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e790 call 0x10731cc0 */
  push32(0x1072e795u); f_10731cc0();
  /* 1072e795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e798 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e79b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e79d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e7a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e7a3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e7a6 push edx */
  push32((uint32_t)(EDX));
  /* 1072e7a7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1072e7a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e7ac push eax */
  push32((uint32_t)(EAX));
  /* 1072e7ad push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e7af call 0x10731cc0 */
  push32(0x1072e7b4u); f_10731cc0();
  /* 1072e7b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e7b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e7ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e7bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e7bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e7c2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e7c8 push edx */
  push32((uint32_t)(EDX));
  /* 1072e7c9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1072e7cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e7ce push eax */
  push32((uint32_t)(EAX));
  /* 1072e7cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e7d1 call 0x10731cc0 */
  push32(0x1072e7d6u); f_10731cc0();
  /* 1072e7d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e7d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e7dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e7de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e7e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e7e4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e7ea push edx */
  push32((uint32_t)(EDX));
  /* 1072e7eb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1072e7ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e7f0 push eax */
  push32((uint32_t)(EAX));
  /* 1072e7f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e7f3 call 0x10731cc0 */
  push32(0x1072e7f8u); f_10731cc0();
  /* 1072e7f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e7fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e7fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e800 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e803 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e806 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e80c push edx */
  push32((uint32_t)(EDX));
  /* 1072e80d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1072e80f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e812 push eax */
  push32((uint32_t)(EAX));
  /* 1072e813 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e815 call 0x10731cc0 */
  push32(0x1072e81au); f_10731cc0();
  /* 1072e81a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e81d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e820 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e822 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e828 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e82e push edx */
  push32((uint32_t)(EDX));
  /* 1072e82f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1072e831 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e834 push eax */
  push32((uint32_t)(EAX));
  /* 1072e835 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e837 call 0x10731cc0 */
  push32(0x1072e83cu); f_10731cc0();
  /* 1072e83c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e83f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e842 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e844 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e847 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e84a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e850 push edx */
  push32((uint32_t)(EDX));
  /* 1072e851 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1072e853 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e856 push eax */
  push32((uint32_t)(EAX));
  /* 1072e857 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e859 call 0x10731cc0 */
  push32(0x1072e85eu); f_10731cc0();
  /* 1072e85e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e861 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e864 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e866 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e86c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e872 push edx */
  push32((uint32_t)(EDX));
  /* 1072e873 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1072e875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e878 push eax */
  push32((uint32_t)(EAX));
  /* 1072e879 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e87b call 0x10731cc0 */
  push32(0x1072e880u); f_10731cc0();
  /* 1072e880 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e883 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e886 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e888 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e88b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e88e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e894 push edx */
  push32((uint32_t)(EDX));
  /* 1072e895 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1072e897 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e89a push eax */
  push32((uint32_t)(EAX));
  /* 1072e89b push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e89d call 0x10731cc0 */
  push32(0x1072e8a2u); f_10731cc0();
  /* 1072e8a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e8a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e8a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e8aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e8ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e8b0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e8b6 push edx */
  push32((uint32_t)(EDX));
  /* 1072e8b7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1072e8b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072e8bc push eax */
  push32((uint32_t)(EAX));
  /* 1072e8bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e8bf call 0x10731cc0 */
  push32(0x1072e8c4u); f_10731cc0();
  /* 1072e8c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e8c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e8ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e8cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e8cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e8d2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e8d8 push edx */
  push32((uint32_t)(EDX));
  /* 1072e8d9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1072e8db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e8de push eax */
  push32((uint32_t)(EAX));
  /* 1072e8df push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e8e1 call 0x10731cc0 */
  push32(0x1072e8e6u); f_10731cc0();
  /* 1072e8e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e8e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e8ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e8ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e8f4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e8fa push edx */
  push32((uint32_t)(EDX));
  /* 1072e8fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1072e8fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e900 push eax */
  push32((uint32_t)(EAX));
  /* 1072e901 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e903 call 0x10731cc0 */
  push32(0x1072e908u); f_10731cc0();
  /* 1072e908 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e90b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e90e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e910 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e913 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e916 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e91c push edx */
  push32((uint32_t)(EDX));
  /* 1072e91d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1072e922 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072e925 push eax */
  push32((uint32_t)(EAX));
  /* 1072e926 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072e928 call 0x10731cc0 */
  push32(0x1072e92du); f_10731cc0();
  /* 1072e92d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e930 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072e933 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072e935 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1072e938 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1072e93b:;
  /* 1072e93b mov esp, ebp */
  ESP = (EBP);
  /* 1072e93d pop ebp */
  EBP = (pop32());
  /* 1072e93e ret  */
  ESPCHK(0x1072e3b0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1072e940 (779 bytes, 265 insns) */
void f_1072e940(void) {
  FTRACE(0x1072e940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072e940 push ebp */
  push32((uint32_t)(EBP));
  /* 1072e941 mov ebp, esp */
  EBP = (ESP);
  /* 1072e943 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072e947 jne 0x1072e94e */
  if (!C.zf) goto L_1072e94e;
  /* 1072e949 jmp 0x1072ec49 */
  goto L_1072ec49;
L_1072e94e:;
  /* 1072e94e push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e953 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1072e956 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e957 call 0x10724590 */
  push32(0x1072e95cu); f_10724590();
  /* 1072e95c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e95f push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e961 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e964 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1072e967 push eax */
  push32((uint32_t)(EAX));
  /* 1072e968 call 0x10724590 */
  push32(0x1072e96du); f_10724590();
  /* 1072e96d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e970 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e972 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e975 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072e978 push edx */
  push32((uint32_t)(EDX));
  /* 1072e979 call 0x10724590 */
  push32(0x1072e97eu); f_10724590();
  /* 1072e97e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e981 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e986 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1072e989 push ecx */
  push32((uint32_t)(ECX));
  /* 1072e98a call 0x10724590 */
  push32(0x1072e98fu); f_10724590();
  /* 1072e98f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e992 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e997 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1072e99a push eax */
  push32((uint32_t)(EAX));
  /* 1072e99b call 0x10724590 */
  push32(0x1072e9a0u); f_10724590();
  /* 1072e9a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e9a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e9a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e9a8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1072e9ab push edx */
  push32((uint32_t)(EDX));
  /* 1072e9ac call 0x10724590 */
  push32(0x1072e9b1u); f_10724590();
  /* 1072e9b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e9b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e9b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e9b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072e9bb push ecx */
  push32((uint32_t)(ECX));
  /* 1072e9bc call 0x10724590 */
  push32(0x1072e9c1u); f_10724590();
  /* 1072e9c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e9c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e9c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e9c9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1072e9cc push eax */
  push32((uint32_t)(EAX));
  /* 1072e9cd call 0x10724590 */
  push32(0x1072e9d2u); f_10724590();
  /* 1072e9d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e9d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e9da mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1072e9dd push edx */
  push32((uint32_t)(EDX));
  /* 1072e9de call 0x10724590 */
  push32(0x1072e9e3u); f_10724590();
  /* 1072e9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e9e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e9e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e9eb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1072e9ee push ecx */
  push32((uint32_t)(ECX));
  /* 1072e9ef call 0x10724590 */
  push32(0x1072e9f4u); f_10724590();
  /* 1072e9f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072e9f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072e9f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072e9fc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1072e9ff push eax */
  push32((uint32_t)(EAX));
  /* 1072ea00 call 0x10724590 */
  push32(0x1072ea05u); f_10724590();
  /* 1072ea05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ea08 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ea0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ea0d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1072ea10 push edx */
  push32((uint32_t)(EDX));
  /* 1072ea11 call 0x10724590 */
  push32(0x1072ea16u); f_10724590();
  /* 1072ea16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ea19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ea1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ea1e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1072ea21 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ea22 call 0x10724590 */
  push32(0x1072ea27u); f_10724590();
  /* 1072ea27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ea2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ea2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ea2f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1072ea32 push eax */
  push32((uint32_t)(EAX));
  /* 1072ea33 call 0x10724590 */
  push32(0x1072ea38u); f_10724590();
  /* 1072ea38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ea3b push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ea3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ea40 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1072ea43 push edx */
  push32((uint32_t)(EDX));
  /* 1072ea44 call 0x10724590 */
  push32(0x1072ea49u); f_10724590();
  /* 1072ea49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ea4c push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ea4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ea51 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1072ea54 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ea55 call 0x10724590 */
  push32(0x1072ea5au); f_10724590();
  /* 1072ea5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ea5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ea5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ea62 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1072ea65 push eax */
  push32((uint32_t)(EAX));
  /* 1072ea66 call 0x10724590 */
  push32(0x1072ea6bu); f_10724590();
  /* 1072ea6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ea6e push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ea70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ea73 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1072ea76 push edx */
  push32((uint32_t)(EDX));
  /* 1072ea77 call 0x10724590 */
  push32(0x1072ea7cu); f_10724590();
  /* 1072ea7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ea7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ea81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ea84 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1072ea87 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ea88 call 0x10724590 */
  push32(0x1072ea8du); f_10724590();
  /* 1072ea8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ea90 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ea92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ea95 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1072ea98 push eax */
  push32((uint32_t)(EAX));
  /* 1072ea99 call 0x10724590 */
  push32(0x1072ea9eu); f_10724590();
  /* 1072ea9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eaa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eaa3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eaa6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1072eaa9 push edx */
  push32((uint32_t)(EDX));
  /* 1072eaaa call 0x10724590 */
  push32(0x1072eaafu); f_10724590();
  /* 1072eaaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eab7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1072eaba push ecx */
  push32((uint32_t)(ECX));
  /* 1072eabb call 0x10724590 */
  push32(0x1072eac0u); f_10724590();
  /* 1072eac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eac5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eac8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1072eacb push eax */
  push32((uint32_t)(EAX));
  /* 1072eacc call 0x10724590 */
  push32(0x1072ead1u); f_10724590();
  /* 1072ead1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ead4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ead6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ead9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1072eadc push edx */
  push32((uint32_t)(EDX));
  /* 1072eadd call 0x10724590 */
  push32(0x1072eae2u); f_10724590();
  /* 1072eae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eae5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eae7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eaea mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1072eaed push ecx */
  push32((uint32_t)(ECX));
  /* 1072eaee call 0x10724590 */
  push32(0x1072eaf3u); f_10724590();
  /* 1072eaf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eaf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eaf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eafb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1072eafe push eax */
  push32((uint32_t)(EAX));
  /* 1072eaff call 0x10724590 */
  push32(0x1072eb04u); f_10724590();
  /* 1072eb04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eb07 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eb09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eb0c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1072eb0f push edx */
  push32((uint32_t)(EDX));
  /* 1072eb10 call 0x10724590 */
  push32(0x1072eb15u); f_10724590();
  /* 1072eb15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eb18 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eb1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eb1d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1072eb20 push ecx */
  push32((uint32_t)(ECX));
  /* 1072eb21 call 0x10724590 */
  push32(0x1072eb26u); f_10724590();
  /* 1072eb26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eb29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eb2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eb2e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1072eb31 push eax */
  push32((uint32_t)(EAX));
  /* 1072eb32 call 0x10724590 */
  push32(0x1072eb37u); f_10724590();
  /* 1072eb37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eb3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eb3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eb3f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1072eb42 push edx */
  push32((uint32_t)(EDX));
  /* 1072eb43 call 0x10724590 */
  push32(0x1072eb48u); f_10724590();
  /* 1072eb48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eb4b push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eb4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eb50 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1072eb53 push ecx */
  push32((uint32_t)(ECX));
  /* 1072eb54 call 0x10724590 */
  push32(0x1072eb59u); f_10724590();
  /* 1072eb59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eb5c push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eb5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eb61 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1072eb64 push eax */
  push32((uint32_t)(EAX));
  /* 1072eb65 call 0x10724590 */
  push32(0x1072eb6au); f_10724590();
  /* 1072eb6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eb6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eb6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eb72 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1072eb78 push edx */
  push32((uint32_t)(EDX));
  /* 1072eb79 call 0x10724590 */
  push32(0x1072eb7eu); f_10724590();
  /* 1072eb7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eb81 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eb83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eb86 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1072eb8c push ecx */
  push32((uint32_t)(ECX));
  /* 1072eb8d call 0x10724590 */
  push32(0x1072eb92u); f_10724590();
  /* 1072eb92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eb95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eb97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072eb9a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1072eba0 push eax */
  push32((uint32_t)(EAX));
  /* 1072eba1 call 0x10724590 */
  push32(0x1072eba6u); f_10724590();
  /* 1072eba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ebab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ebae mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1072ebb4 push edx */
  push32((uint32_t)(EDX));
  /* 1072ebb5 call 0x10724590 */
  push32(0x1072ebbau); f_10724590();
  /* 1072ebba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ebbd push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ebbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ebc2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1072ebc8 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ebc9 call 0x10724590 */
  push32(0x1072ebceu); f_10724590();
  /* 1072ebce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ebd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ebd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ebd6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1072ebdc push eax */
  push32((uint32_t)(EAX));
  /* 1072ebdd call 0x10724590 */
  push32(0x1072ebe2u); f_10724590();
  /* 1072ebe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ebe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ebe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ebea mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1072ebf0 push edx */
  push32((uint32_t)(EDX));
  /* 1072ebf1 call 0x10724590 */
  push32(0x1072ebf6u); f_10724590();
  /* 1072ebf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ebf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ebfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ebfe mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1072ec04 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ec05 call 0x10724590 */
  push32(0x1072ec0au); f_10724590();
  /* 1072ec0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ec0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ec0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ec12 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1072ec18 push eax */
  push32((uint32_t)(EAX));
  /* 1072ec19 call 0x10724590 */
  push32(0x1072ec1eu); f_10724590();
  /* 1072ec1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ec21 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ec23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ec26 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1072ec2c push edx */
  push32((uint32_t)(EDX));
  /* 1072ec2d call 0x10724590 */
  push32(0x1072ec32u); f_10724590();
  /* 1072ec32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ec35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ec37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ec3a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1072ec40 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ec41 call 0x10724590 */
  push32(0x1072ec46u); f_10724590();
  /* 1072ec46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072ec49:;
  /* 1072ec49 pop ebp */
  EBP = (pop32());
  /* 1072ec4a ret  */
  ESPCHK(0x1072e940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec50 @ 0x1072ec50 (678 bytes, 180 insns) */
void f_1072ec50(void) {
  FTRACE(0x1072ec50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072ec50 push ebp */
  push32((uint32_t)(EBP));
  /* 1072ec51 mov ebp, esp */
  EBP = (ESP);
  /* 1072ec53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072ec56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1072ec5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072ec5f mov ax, word ptr [0x1074f762] */
  AX = (r16((uint32_t)(0x1074f762)));
  /* 1072ec65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072ec68 cmp dword ptr [0x1074f708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ec6f je 0x1072edca */
  if (C.zf) goto L_1072edca;
  /* 1072ec75 push 0x1074f730 */
  push32((uint32_t)(0x1074f730u));
  /* 1072ec7a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1072ec7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ec7f push ecx */
  push32((uint32_t)(ECX));
  /* 1072ec80 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072ec82 call 0x10731cc0 */
  push32(0x1072ec87u); f_10731cc0();
  /* 1072ec87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ec8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072ec8d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1072ec8f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1072ec92 push 0x1074f734 */
  push32((uint32_t)(0x1074f734u));
  /* 1072ec97 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1072ec99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ec9c push eax */
  push32((uint32_t)(EAX));
  /* 1072ec9d push 1 */
  push32((uint32_t)(0x1u));
  /* 1072ec9f call 0x10731cc0 */
  push32(0x1072eca4u); f_10731cc0();
  /* 1072eca4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eca7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072ecaa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072ecac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072ecaf push 0x1074f738 */
  push32((uint32_t)(0x1074f738u));
  /* 1072ecb4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1072ecb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ecb9 push edx */
  push32((uint32_t)(EDX));
  /* 1072ecba push 1 */
  push32((uint32_t)(0x1u));
  /* 1072ecbc call 0x10731cc0 */
  push32(0x1072ecc1u); f_10731cc0();
  /* 1072ecc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ecc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072ecc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072ecc9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072eccc mov edx, dword ptr [0x1074f738] */
  EDX = (r32((uint32_t)(0x1074f738)));
  /* 1072ecd2 push edx */
  push32((uint32_t)(EDX));
  /* 1072ecd3 call 0x1072ef00 */
  push32(0x1072ecd8u); f_1072ef00();
  /* 1072ecd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ecdb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ecdf je 0x1072ed39 */
  if (C.zf) goto L_1072ed39;
  /* 1072ece1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ece3 mov eax, dword ptr [0x1074f730] */
  EAX = (r32((uint32_t)(0x1074f730)));
  /* 1072ece8 push eax */
  push32((uint32_t)(EAX));
  /* 1072ece9 call 0x10724590 */
  push32(0x1072eceeu); f_10724590();
  /* 1072ecee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ecf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ecf3 mov ecx, dword ptr [0x1074f734] */
  ECX = (r32((uint32_t)(0x1074f734)));
  /* 1072ecf9 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ecfa call 0x10724590 */
  push32(0x1072ecffu); f_10724590();
  /* 1072ecff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ed02 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ed04 mov edx, dword ptr [0x1074f738] */
  EDX = (r32((uint32_t)(0x1074f738)));
  /* 1072ed0a push edx */
  push32((uint32_t)(EDX));
  /* 1072ed0b call 0x10724590 */
  push32(0x1072ed10u); f_10724590();
  /* 1072ed10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ed13 mov dword ptr [0x1074f730], 0 */
  w32((uint32_t)(0x1074f730), (0x0u));
  /* 1072ed1d mov dword ptr [0x1074f734], 0 */
  w32((uint32_t)(0x1074f734), (0x0u));
  /* 1072ed27 mov dword ptr [0x1074f738], 0 */
  w32((uint32_t)(0x1074f738), (0x0u));
  /* 1072ed31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072ed34 jmp 0x1072eef2 */
  goto L_1072eef2;
L_1072ed39:;
  /* 1072ed39 mov eax, dword ptr [0x1074ed88] */
  EAX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ed3e cmp dword ptr [eax], 0x1074ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1074ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ed44 je 0x1072ed80 */
  if (C.zf) goto L_1072ed80;
  /* 1072ed46 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ed48 mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ed4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072ed50 push edx */
  push32((uint32_t)(EDX));
  /* 1072ed51 call 0x10724590 */
  push32(0x1072ed56u); f_10724590();
  /* 1072ed56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ed59 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ed5b mov eax, dword ptr [0x1074ed88] */
  EAX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ed60 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1072ed63 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ed64 call 0x10724590 */
  push32(0x1072ed69u); f_10724590();
  /* 1072ed69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ed6c push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ed6e mov edx, dword ptr [0x1074ed88] */
  EDX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ed74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1072ed77 push eax */
  push32((uint32_t)(EAX));
  /* 1072ed78 call 0x10724590 */
  push32(0x1072ed7du); f_10724590();
  /* 1072ed7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072ed80:;
  /* 1072ed80 mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ed86 mov edx, dword ptr [0x1074f730] */
  EDX = (r32((uint32_t)(0x1074f730)));
  /* 1072ed8c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1072ed8e mov eax, dword ptr [0x1074ed88] */
  EAX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ed93 mov ecx, dword ptr [0x1074f734] */
  ECX = (r32((uint32_t)(0x1074f734)));
  /* 1072ed99 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1072ed9c mov edx, dword ptr [0x1074ed88] */
  EDX = (r32((uint32_t)(0x1074ed88)));
  /* 1072eda2 mov eax, dword ptr [0x1074f738] */
  EAX = (r32((uint32_t)(0x1074f738)));
  /* 1072eda7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1072edaa mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072edb0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072edb2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1072edb4 mov byte ptr [0x1074dea8], al */
  w8((uint32_t)(0x1074dea8), (AL));
  /* 1072edb9 mov dword ptr [0x1074deac], 1 */
  w32((uint32_t)(0x1074deac), (0x1u));
  /* 1072edc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072edc5 jmp 0x1072eef2 */
  goto L_1072eef2;
L_1072edca:;
  /* 1072edca push 2 */
  push32((uint32_t)(0x2u));
  /* 1072edcc mov ecx, dword ptr [0x1074f730] */
  ECX = (r32((uint32_t)(0x1074f730)));
  /* 1072edd2 push ecx */
  push32((uint32_t)(ECX));
  /* 1072edd3 call 0x10724590 */
  push32(0x1072edd8u); f_10724590();
  /* 1072edd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eddb push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eddd mov edx, dword ptr [0x1074f734] */
  EDX = (r32((uint32_t)(0x1074f734)));
  /* 1072ede3 push edx */
  push32((uint32_t)(EDX));
  /* 1072ede4 call 0x10724590 */
  push32(0x1072ede9u); f_10724590();
  /* 1072ede9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072edec push 2 */
  push32((uint32_t)(0x2u));
  /* 1072edee mov eax, dword ptr [0x1074f738] */
  EAX = (r32((uint32_t)(0x1074f738)));
  /* 1072edf3 push eax */
  push32((uint32_t)(EAX));
  /* 1072edf4 call 0x10724590 */
  push32(0x1072edf9u); f_10724590();
  /* 1072edf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072edfc mov dword ptr [0x1074f730], 0 */
  w32((uint32_t)(0x1074f730), (0x0u));
  /* 1072ee06 mov dword ptr [0x1074f734], 0 */
  w32((uint32_t)(0x1074f734), (0x0u));
  /* 1072ee10 mov dword ptr [0x1074f738], 0 */
  w32((uint32_t)(0x1074f738), (0x0u));
  /* 1072ee1a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1072ee1f push 0x1074b13c */
  push32((uint32_t)(0x1074b13cu));
  /* 1072ee24 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ee26 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ee28 call 0x10723b00 */
  push32(0x1072ee2du); f_10723b00();
  /* 1072ee2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ee30 mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ee36 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1072ee38 mov edx, dword ptr [0x1074ed88] */
  EDX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ee3e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ee41 jne 0x1072ee4b */
  if (!C.zf) goto L_1072ee4b;
  /* 1072ee43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072ee46 jmp 0x1072eef2 */
  goto L_1072eef2;
L_1072ee4b:;
  /* 1072ee4b push 0x1074b10c */
  push32((uint32_t)(0x1074b10cu));
  /* 1072ee50 mov eax, dword ptr [0x1074ed88] */
  EAX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ee55 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1072ee57 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ee58 call 0x10726ab0 */
  push32(0x1072ee5du); f_10726ab0();
  /* 1072ee5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ee60 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1072ee65 push 0x1074b13c */
  push32((uint32_t)(0x1074b13cu));
  /* 1072ee6a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ee6c push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ee6e call 0x10723b00 */
  push32(0x1072ee73u); f_10723b00();
  /* 1072ee73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ee76 mov edx, dword ptr [0x1074ed88] */
  EDX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ee7c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1072ee7f mov eax, dword ptr [0x1074ed88] */
  EAX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ee84 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ee88 jne 0x1072ee8f */
  if (!C.zf) goto L_1072ee8f;
  /* 1072ee8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072ee8d jmp 0x1072eef2 */
  goto L_1072eef2;
L_1072ee8f:;
  /* 1072ee8f mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072ee95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072ee98 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1072ee9b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1072eea0 push 0x1074b13c */
  push32((uint32_t)(0x1074b13cu));
  /* 1072eea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072eea9 call 0x10723b00 */
  push32(0x1072eeaeu); f_10723b00();
  /* 1072eeae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072eeb1 mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072eeb7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1072eeba mov edx, dword ptr [0x1074ed88] */
  EDX = (r32((uint32_t)(0x1074ed88)));
  /* 1072eec0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072eec4 jne 0x1072eecb */
  if (!C.zf) goto L_1072eecb;
  /* 1072eec6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072eec9 jmp 0x1072eef2 */
  goto L_1072eef2;
L_1072eecb:;
  /* 1072eecb mov eax, dword ptr [0x1074ed88] */
  EAX = (r32((uint32_t)(0x1074ed88)));
  /* 1072eed0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1072eed3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1072eed6 mov edx, dword ptr [0x1074ed88] */
  EDX = (r32((uint32_t)(0x1074ed88)));
  /* 1072eedc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1072eede mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1072eee0 mov byte ptr [0x1074dea8], cl */
  w8((uint32_t)(0x1074dea8), (CL));
  /* 1072eee6 mov dword ptr [0x1074deac], 1 */
  w32((uint32_t)(0x1074deac), (0x1u));
  /* 1072eef0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072eef2:;
  /* 1072eef2 mov esp, ebp */
  ESP = (EBP);
  /* 1072eef4 pop ebp */
  EBP = (pop32());
  /* 1072eef5 ret  */
  ESPCHK(0x1072ec50u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1072ef00 (125 bytes, 49 insns) */
void f_1072ef00(void) {
  FTRACE(0x1072ef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072ef00 push ebp */
  push32((uint32_t)(EBP));
  /* 1072ef01 mov ebp, esp */
  EBP = (ESP);
  /* 1072ef03 push ecx */
  push32((uint32_t)(ECX));
L_1072ef04:;
  /* 1072ef04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ef07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072ef0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072ef0c je 0x1072ef79 */
  if (C.zf) goto L_1072ef79;
  /* 1072ef0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ef11 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1072ef14 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ef17 jl 0x1072ef3d */
  if ((C.sf!=C.of)) goto L_1072ef3d;
  /* 1072ef19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ef1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072ef1f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ef22 jg 0x1072ef3d */
  if ((!C.zf&&C.sf==C.of)) goto L_1072ef3d;
  /* 1072ef24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ef27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072ef2a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072ef2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ef30 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1072ef32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ef35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ef38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1072ef3b jmp 0x1072ef77 */
  goto L_1072ef77;
L_1072ef3d:;
  /* 1072ef3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ef40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072ef43 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ef46 jne 0x1072ef6e */
  if (!C.zf) goto L_1072ef6e;
  /* 1072ef48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ef4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072ef4e:;
  /* 1072ef4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ef51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ef54 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1072ef57 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1072ef59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ef5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ef5f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1072ef62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ef65 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1072ef68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072ef6a jne 0x1072ef4e */
  if (!C.zf) goto L_1072ef4e;
  /* 1072ef6c jmp 0x1072ef77 */
  goto L_1072ef77;
L_1072ef6e:;
  /* 1072ef6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ef71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ef74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1072ef77:;
  /* 1072ef77 jmp 0x1072ef04 */
  goto L_1072ef04;
L_1072ef79:;
  /* 1072ef79 mov esp, ebp */
  ESP = (EBP);
  /* 1072ef7b pop ebp */
  EBP = (pop32());
  /* 1072ef7c ret  */
  ESPCHK(0x1072ef00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x1072ef80 (304 bytes, 85 insns) */
void f_1072ef80(void) {
  FTRACE(0x1072ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 1072ef81 mov ebp, esp */
  EBP = (ESP);
  /* 1072ef83 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ef84 cmp dword ptr [0x1074f704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ef8b je 0x1072f04c */
  if (C.zf) goto L_1072f04c;
  /* 1072ef91 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1072ef93 push 0x1074b148 */
  push32((uint32_t)(0x1074b148u));
  /* 1072ef98 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072ef9a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1072ef9c push 1 */
  push32((uint32_t)(0x1u));
  /* 1072ef9e call 0x10723f10 */
  push32(0x1072efa3u); f_10723f10();
  /* 1072efa3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072efa6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072efa9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072efad jne 0x1072efb9 */
  if (!C.zf) goto L_1072efb9;
  /* 1072efaf mov eax, 1 */
  EAX = (0x1u);
  /* 1072efb4 jmp 0x1072f0ac */
  goto L_1072f0ac;
L_1072efb9:;
  /* 1072efb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072efbc push eax */
  push32((uint32_t)(EAX));
  /* 1072efbd call 0x1072f0b0 */
  push32(0x1072efc2u); f_1072f0b0();
  /* 1072efc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072efc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072efc7 je 0x1072efed */
  if (C.zf) goto L_1072efed;
  /* 1072efc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072efcc push ecx */
  push32((uint32_t)(ECX));
  /* 1072efcd call 0x1072f340 */
  push32(0x1072efd2u); f_1072f340();
  /* 1072efd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072efd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072efd7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072efda push edx */
  push32((uint32_t)(EDX));
  /* 1072efdb call 0x10724590 */
  push32(0x1072efe0u); f_10724590();
  /* 1072efe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072efe3 mov eax, 1 */
  EAX = (0x1u);
  /* 1072efe8 jmp 0x1072f0ac */
  goto L_1072f0ac;
L_1072efed:;
  /* 1072efed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072eff0 mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072eff6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072eff8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1072effa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072effd mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072f003 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1072f006 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1072f009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f00c mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072f012 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1072f015 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1072f018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f01b mov dword ptr [0x1074ed88], eax */
  w32((uint32_t)(0x1074ed88), (EAX));
  /* 1072f020 mov ecx, dword ptr [0x1074f73c] */
  ECX = (r32((uint32_t)(0x1074f73c)));
  /* 1072f026 push ecx */
  push32((uint32_t)(ECX));
  /* 1072f027 call 0x1072f340 */
  push32(0x1072f02cu); f_1072f340();
  /* 1072f02c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f02f push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f031 mov edx, dword ptr [0x1074f73c] */
  EDX = (r32((uint32_t)(0x1074f73c)));
  /* 1072f037 push edx */
  push32((uint32_t)(EDX));
  /* 1072f038 call 0x10724590 */
  push32(0x1072f03du); f_10724590();
  /* 1072f03d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f043 mov dword ptr [0x1074f73c], eax */
  w32((uint32_t)(0x1074f73c), (EAX));
  /* 1072f048 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f04a jmp 0x1072f0ac */
  goto L_1072f0ac;
L_1072f04c:;
  /* 1072f04c mov ecx, dword ptr [0x1074ed88] */
  ECX = (r32((uint32_t)(0x1074ed88)));
  /* 1072f052 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072f054 mov dword ptr [0x1074ed58], edx */
  w32((uint32_t)(0x1074ed58), (EDX));
  /* 1072f05a mov eax, dword ptr [0x1074ed88] */
  EAX = (r32((uint32_t)(0x1074ed88)));
  /* 1072f05f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1072f062 mov dword ptr [0x1074ed5c], ecx */
  w32((uint32_t)(0x1074ed5c), (ECX));
  /* 1072f068 mov edx, dword ptr [0x1074ed88] */
  EDX = (r32((uint32_t)(0x1074ed88)));
  /* 1072f06e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1072f071 mov dword ptr [0x1074ed60], eax */
  w32((uint32_t)(0x1074ed60), (EAX));
  /* 1072f076 mov dword ptr [0x1074ed88], 0x1074ed58 */
  w32((uint32_t)(0x1074ed88), (0x1074ed58u));
  /* 1072f080 mov ecx, dword ptr [0x1074f73c] */
  ECX = (r32((uint32_t)(0x1074f73c)));
  /* 1072f086 push ecx */
  push32((uint32_t)(ECX));
  /* 1072f087 call 0x1072f340 */
  push32(0x1072f08cu); f_1072f340();
  /* 1072f08c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f08f push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f091 mov edx, dword ptr [0x1074f73c] */
  EDX = (r32((uint32_t)(0x1074f73c)));
  /* 1072f097 push edx */
  push32((uint32_t)(EDX));
  /* 1072f098 call 0x10724590 */
  push32(0x1072f09du); f_10724590();
  /* 1072f09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f0a0 mov dword ptr [0x1074f73c], 0 */
  w32((uint32_t)(0x1074f73c), (0x0u));
  /* 1072f0aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072f0ac:;
  /* 1072f0ac mov esp, ebp */
  ESP = (EBP);
  /* 1072f0ae pop ebp */
  EBP = (pop32());
  /* 1072f0af ret  */
  ESPCHK(0x1072ef80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0b0 @ 0x1072f0b0 (525 bytes, 200 insns) */
void f_1072f0b0(void) {
  FTRACE(0x1072f0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072f0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1072f0b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072f0b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1072f0bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f0bf mov ax, word ptr [0x1074f75c] */
  AX = (r16((uint32_t)(0x1074f75c)));
  /* 1072f0c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072f0c8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f0cc jne 0x1072f0d6 */
  if (!C.zf) goto L_1072f0d6;
  /* 1072f0ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072f0d1 jmp 0x1072f2b9 */
  goto L_1072f2b9;
L_1072f0d6:;
  /* 1072f0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f0d9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f0dc push ecx */
  push32((uint32_t)(ECX));
  /* 1072f0dd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1072f0df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f0e2 push edx */
  push32((uint32_t)(EDX));
  /* 1072f0e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072f0e5 call 0x10731cc0 */
  push32(0x1072f0eau); f_10731cc0();
  /* 1072f0ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f0ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f0f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f0f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f0f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f0f8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f0fb push edx */
  push32((uint32_t)(EDX));
  /* 1072f0fc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1072f0fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f101 push eax */
  push32((uint32_t)(EAX));
  /* 1072f102 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072f104 call 0x10731cc0 */
  push32(0x1072f109u); f_10731cc0();
  /* 1072f109 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f10c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f10f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f111 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f117 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f11a push edx */
  push32((uint32_t)(EDX));
  /* 1072f11b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1072f11d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f120 push eax */
  push32((uint32_t)(EAX));
  /* 1072f121 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072f123 call 0x10731cc0 */
  push32(0x1072f128u); f_10731cc0();
  /* 1072f128 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f12b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f12e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f130 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f133 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f136 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f139 push edx */
  push32((uint32_t)(EDX));
  /* 1072f13a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1072f13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f13f push eax */
  push32((uint32_t)(EAX));
  /* 1072f140 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072f142 call 0x10731cc0 */
  push32(0x1072f147u); f_10731cc0();
  /* 1072f147 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f14a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f14d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f14f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f152 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f155 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f158 push edx */
  push32((uint32_t)(EDX));
  /* 1072f159 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1072f15b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f15e push eax */
  push32((uint32_t)(EAX));
  /* 1072f15f push 1 */
  push32((uint32_t)(0x1u));
  /* 1072f161 call 0x10731cc0 */
  push32(0x1072f166u); f_10731cc0();
  /* 1072f166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f169 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f16c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f16e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f174 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1072f177 push eax */
  push32((uint32_t)(EAX));
  /* 1072f178 call 0x1072f2c0 */
  push32(0x1072f17du); f_1072f2c0();
  /* 1072f17d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f180 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f183 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f186 push ecx */
  push32((uint32_t)(ECX));
  /* 1072f187 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1072f189 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f18c push edx */
  push32((uint32_t)(EDX));
  /* 1072f18d push 1 */
  push32((uint32_t)(0x1u));
  /* 1072f18f call 0x10731cc0 */
  push32(0x1072f194u); f_10731cc0();
  /* 1072f194 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f197 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f19a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f19c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f19f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f1a2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f1a5 push edx */
  push32((uint32_t)(EDX));
  /* 1072f1a6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1072f1a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f1ab push eax */
  push32((uint32_t)(EAX));
  /* 1072f1ac push 1 */
  push32((uint32_t)(0x1u));
  /* 1072f1ae call 0x10731cc0 */
  push32(0x1072f1b3u); f_10731cc0();
  /* 1072f1b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f1b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f1b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f1bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f1be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f1c1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f1c4 push edx */
  push32((uint32_t)(EDX));
  /* 1072f1c5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1072f1c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f1ca push eax */
  push32((uint32_t)(EAX));
  /* 1072f1cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f1cd call 0x10731cc0 */
  push32(0x1072f1d2u); f_10731cc0();
  /* 1072f1d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f1d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f1d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f1da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f1dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f1e0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f1e3 push edx */
  push32((uint32_t)(EDX));
  /* 1072f1e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1072f1e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f1e9 push eax */
  push32((uint32_t)(EAX));
  /* 1072f1ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f1ec call 0x10731cc0 */
  push32(0x1072f1f1u); f_10731cc0();
  /* 1072f1f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f1f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f1f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f1f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f1fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f1ff add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f202 push edx */
  push32((uint32_t)(EDX));
  /* 1072f203 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1072f205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f208 push eax */
  push32((uint32_t)(EAX));
  /* 1072f209 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f20b call 0x10731cc0 */
  push32(0x1072f210u); f_10731cc0();
  /* 1072f210 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f213 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f216 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f218 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f21b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f21e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f221 push edx */
  push32((uint32_t)(EDX));
  /* 1072f222 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1072f224 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f227 push eax */
  push32((uint32_t)(EAX));
  /* 1072f228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f22a call 0x10731cc0 */
  push32(0x1072f22fu); f_10731cc0();
  /* 1072f22f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f235 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f237 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f23a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f23d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f240 push edx */
  push32((uint32_t)(EDX));
  /* 1072f241 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1072f243 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f246 push eax */
  push32((uint32_t)(EAX));
  /* 1072f247 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f249 call 0x10731cc0 */
  push32(0x1072f24eu); f_10731cc0();
  /* 1072f24e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f251 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f254 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f256 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f259 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f25c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f25f push edx */
  push32((uint32_t)(EDX));
  /* 1072f260 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1072f262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f265 push eax */
  push32((uint32_t)(EAX));
  /* 1072f266 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f268 call 0x10731cc0 */
  push32(0x1072f26du); f_10731cc0();
  /* 1072f26d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f270 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f273 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f275 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f27b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f27e push edx */
  push32((uint32_t)(EDX));
  /* 1072f27f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1072f281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f284 push eax */
  push32((uint32_t)(EAX));
  /* 1072f285 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f287 call 0x10731cc0 */
  push32(0x1072f28cu); f_10731cc0();
  /* 1072f28c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f28f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f292 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f294 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f29a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f29d push edx */
  push32((uint32_t)(EDX));
  /* 1072f29e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1072f2a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f2a3 push eax */
  push32((uint32_t)(EAX));
  /* 1072f2a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f2a6 call 0x10731cc0 */
  push32(0x1072f2abu); f_10731cc0();
  /* 1072f2ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f2ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f2b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f2b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1072f2b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1072f2b9:;
  /* 1072f2b9 mov esp, ebp */
  ESP = (EBP);
  /* 1072f2bb pop ebp */
  EBP = (pop32());
  /* 1072f2bc ret  */
  ESPCHK(0x1072f0b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1072f2c0 (125 bytes, 49 insns) */
void f_1072f2c0(void) {
  FTRACE(0x1072f2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072f2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1072f2c3 push ecx */
  push32((uint32_t)(ECX));
L_1072f2c4:;
  /* 1072f2c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f2c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072f2ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072f2cc je 0x1072f339 */
  if (C.zf) goto L_1072f339;
  /* 1072f2ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f2d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1072f2d4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f2d7 jl 0x1072f2fd */
  if ((C.sf!=C.of)) goto L_1072f2fd;
  /* 1072f2d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f2dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072f2df cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f2e2 jg 0x1072f2fd */
  if ((!C.zf&&C.sf==C.of)) goto L_1072f2fd;
  /* 1072f2e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f2e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072f2ea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072f2ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f2f0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1072f2f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f2f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f2f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1072f2fb jmp 0x1072f337 */
  goto L_1072f337;
L_1072f2fd:;
  /* 1072f2fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f300 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072f303 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f306 jne 0x1072f32e */
  if (!C.zf) goto L_1072f32e;
  /* 1072f308 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f30b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072f30e:;
  /* 1072f30e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f314 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1072f317 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1072f319 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f31c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f31f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1072f322 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072f325 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1072f328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072f32a jne 0x1072f30e */
  if (!C.zf) goto L_1072f30e;
  /* 1072f32c jmp 0x1072f337 */
  goto L_1072f337;
L_1072f32e:;
  /* 1072f32e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f331 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f334 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1072f337:;
  /* 1072f337 jmp 0x1072f2c4 */
  goto L_1072f2c4;
L_1072f339:;
  /* 1072f339 mov esp, ebp */
  ESP = (EBP);
  /* 1072f33b pop ebp */
  EBP = (pop32());
  /* 1072f33c ret  */
  ESPCHK(0x1072f2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f340 @ 0x1072f340 (147 bytes, 52 insns) */
void f_1072f340(void) {
  FTRACE(0x1072f340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f340 push ebp */
  push32((uint32_t)(EBP));
  /* 1072f341 mov ebp, esp */
  EBP = (ESP);
  /* 1072f343 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f347 jne 0x1072f34e */
  if (!C.zf) goto L_1072f34e;
  /* 1072f349 jmp 0x1072f3d1 */
  goto L_1072f3d1;
L_1072f34e:;
  /* 1072f34e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f351 cmp dword ptr [eax + 0xc], 0x1074f798 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1074f798u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f358 je 0x1072f3d1 */
  if (C.zf) goto L_1072f3d1;
  /* 1072f35a push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f35c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f35f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1072f362 push edx */
  push32((uint32_t)(EDX));
  /* 1072f363 call 0x10724590 */
  push32(0x1072f368u); f_10724590();
  /* 1072f368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f36b push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f36d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f370 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1072f373 push ecx */
  push32((uint32_t)(ECX));
  /* 1072f374 call 0x10724590 */
  push32(0x1072f379u); f_10724590();
  /* 1072f379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f37c push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f37e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f381 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1072f384 push eax */
  push32((uint32_t)(EAX));
  /* 1072f385 call 0x10724590 */
  push32(0x1072f38au); f_10724590();
  /* 1072f38a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f38d push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f38f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f392 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1072f395 push edx */
  push32((uint32_t)(EDX));
  /* 1072f396 call 0x10724590 */
  push32(0x1072f39bu); f_10724590();
  /* 1072f39b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f39e push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f3a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f3a3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1072f3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1072f3a7 call 0x10724590 */
  push32(0x1072f3acu); f_10724590();
  /* 1072f3ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f3af push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f3b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f3b4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1072f3b7 push eax */
  push32((uint32_t)(EAX));
  /* 1072f3b8 call 0x10724590 */
  push32(0x1072f3bdu); f_10724590();
  /* 1072f3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f3c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f3c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f3c5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1072f3c8 push edx */
  push32((uint32_t)(EDX));
  /* 1072f3c9 call 0x10724590 */
  push32(0x1072f3ceu); f_10724590();
  /* 1072f3ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072f3d1:;
  /* 1072f3d1 pop ebp */
  EBP = (pop32());
  /* 1072f3d2 ret  */
  ESPCHK(0x1072f340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3e0 @ 0x1072f3e0 (928 bytes, 284 insns) */
void f_1072f3e0(void) {
  FTRACE(0x1072f3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072f3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1072f3e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072f3e6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1072f3ed mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1072f3f4 cmp dword ptr [0x1074f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f3fb je 0x1072f731 */
  if (C.zf) goto L_1072f731;
  /* 1072f401 cmp dword ptr [0x1074f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f408 jne 0x1072f430 */
  if (!C.zf) goto L_1072f430;
  /* 1072f40a push 0x1074f710 */
  push32((uint32_t)(0x1074f710u));
  /* 1072f40f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1072f414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f416 mov ax, word ptr [0x1074f754] */
  AX = (r16((uint32_t)(0x1074f754)));
  /* 1072f41c push eax */
  push32((uint32_t)(EAX));
  /* 1072f41d push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f41f call 0x10731cc0 */
  push32(0x1072f424u); f_10731cc0();
  /* 1072f424 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072f429 je 0x1072f430 */
  if (C.zf) goto L_1072f430;
  /* 1072f42b jmp 0x1072f6f2 */
  goto L_1072f6f2;
L_1072f430:;
  /* 1072f430 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1072f432 push 0x1074b154 */
  push32((uint32_t)(0x1074b154u));
  /* 1072f437 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f439 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1072f43e call 0x10723b00 */
  push32(0x1072f443u); f_10723b00();
  /* 1072f443 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f446 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1072f449 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1072f44b push 0x1074b154 */
  push32((uint32_t)(0x1074b154u));
  /* 1072f450 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f452 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1072f457 call 0x10723b00 */
  push32(0x1072f45cu); f_10723b00();
  /* 1072f45c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f45f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1072f462 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1072f464 push 0x1074b154 */
  push32((uint32_t)(0x1074b154u));
  /* 1072f469 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f46b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1072f470 call 0x10723b00 */
  push32(0x1072f475u); f_10723b00();
  /* 1072f475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f478 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1072f47b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1072f47d push 0x1074b154 */
  push32((uint32_t)(0x1074b154u));
  /* 1072f482 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f484 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1072f489 call 0x10723b00 */
  push32(0x1072f48eu); f_10723b00();
  /* 1072f48e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f491 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1072f494 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f498 je 0x1072f4ac */
  if (C.zf) goto L_1072f4ac;
  /* 1072f49a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f49e je 0x1072f4ac */
  if (C.zf) goto L_1072f4ac;
  /* 1072f4a0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f4a4 je 0x1072f4ac */
  if (C.zf) goto L_1072f4ac;
  /* 1072f4a6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f4aa jne 0x1072f4b1 */
  if (!C.zf) goto L_1072f4b1;
L_1072f4ac:;
  /* 1072f4ac jmp 0x1072f6f2 */
  goto L_1072f6f2;
L_1072f4b1:;
  /* 1072f4b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072f4b4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1072f4b7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1072f4be jmp 0x1072f4c9 */
  goto L_1072f4c9;
L_1072f4c0:;
  /* 1072f4c0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072f4c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f4c6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1072f4c9:;
  /* 1072f4c9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f4d0 jge 0x1072f4e5 */
  if ((C.sf==C.of)) goto L_1072f4e5;
  /* 1072f4d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f4d5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1072f4d8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1072f4da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f4dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f4e0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1072f4e3 jmp 0x1072f4c0 */
  goto L_1072f4c0;
L_1072f4e5:;
  /* 1072f4e5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1072f4e8 push eax */
  push32((uint32_t)(EAX));
  /* 1072f4e9 mov ecx, dword ptr [0x1074f710] */
  ECX = (r32((uint32_t)(0x1074f710)));
  /* 1072f4ef push ecx */
  push32((uint32_t)(ECX));
  /* 1072f4f0 call dword ptr [0x107522e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522e4))), 0x1072f4f6u);
  /* 1072f4f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072f4f8 jne 0x1072f4ff */
  if (!C.zf) goto L_1072f4ff;
  /* 1072f4fa jmp 0x1072f6f2 */
  goto L_1072f6f2;
L_1072f4ff:;
  /* 1072f4ff cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f503 jbe 0x1072f50a */
  if ((C.cf||C.zf)) goto L_1072f50a;
  /* 1072f505 jmp 0x1072f6f2 */
  goto L_1072f6f2;
L_1072f50a:;
  /* 1072f50a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1072f50d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1072f513 mov dword ptr [0x1074dea4], edx */
  w32((uint32_t)(0x1074dea4), (EDX));
  /* 1072f519 cmp dword ptr [0x1074dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f520 jle 0x1072f579 */
  if ((C.zf||C.sf!=C.of)) goto L_1072f579;
  /* 1072f522 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1072f525 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1072f528 jmp 0x1072f533 */
  goto L_1072f533;
L_1072f52a:;
  /* 1072f52a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f52d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f530 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1072f533:;
  /* 1072f533 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f538 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1072f53a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072f53c je 0x1072f579 */
  if (C.zf) goto L_1072f579;
  /* 1072f53e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f541 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072f543 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1072f546 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072f548 je 0x1072f579 */
  if (C.zf) goto L_1072f579;
  /* 1072f54a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f54d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f54f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1072f551 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1072f554 jmp 0x1072f55f */
  goto L_1072f55f;
L_1072f556:;
  /* 1072f556 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072f559 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f55c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1072f55f:;
  /* 1072f55f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f562 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f564 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1072f567 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f56a jg 0x1072f577 */
  if ((!C.zf&&C.sf==C.of)) goto L_1072f577;
  /* 1072f56c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072f56f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f572 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1072f575 jmp 0x1072f556 */
  goto L_1072f556;
L_1072f577:;
  /* 1072f577 jmp 0x1072f52a */
  goto L_1072f52a;
L_1072f579:;
  /* 1072f579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f57b push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f57d push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f57f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072f582 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f585 push eax */
  push32((uint32_t)(EAX));
  /* 1072f586 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072f58b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072f58e push ecx */
  push32((uint32_t)(ECX));
  /* 1072f58f push 1 */
  push32((uint32_t)(0x1u));
  /* 1072f591 call 0x1072bd30 */
  push32(0x1072f596u); f_1072bd30();
  /* 1072f596 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072f59b jne 0x1072f5a2 */
  if (!C.zf) goto L_1072f5a2;
  /* 1072f59d jmp 0x1072f6f2 */
  goto L_1072f6f2;
L_1072f5a2:;
  /* 1072f5a2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072f5a5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1072f5aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072f5ad mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1072f5b0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1072f5b7 jmp 0x1072f5c2 */
  goto L_1072f5c2;
L_1072f5b9:;
  /* 1072f5b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072f5bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f5bf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1072f5c2:;
  /* 1072f5c2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f5c9 jge 0x1072f5e0 */
  if ((C.sf==C.of)) goto L_1072f5e0;
  /* 1072f5cb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072f5ce mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1072f5d2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1072f5d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1072f5d8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f5db mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1072f5de jmp 0x1072f5b9 */
  goto L_1072f5b9;
L_1072f5e0:;
  /* 1072f5e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f5e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072f5e4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072f5e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f5ea push edx */
  push32((uint32_t)(EDX));
  /* 1072f5eb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1072f5f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072f5f3 push eax */
  push32((uint32_t)(EAX));
  /* 1072f5f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072f5f6 call 0x10731f60 */
  push32(0x1072f5fbu); f_10731f60();
  /* 1072f5fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f5fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072f600 jne 0x1072f607 */
  if (!C.zf) goto L_1072f607;
  /* 1072f602 jmp 0x1072f6f2 */
  goto L_1072f6f2;
L_1072f607:;
  /* 1072f607 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072f60a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1072f60f cmp dword ptr [0x1074dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1074dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f616 jle 0x1072f673 */
  if ((C.zf||C.sf!=C.of)) goto L_1072f673;
  /* 1072f618 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1072f61b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1072f61e jmp 0x1072f629 */
  goto L_1072f629;
L_1072f620:;
  /* 1072f620 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f623 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f626 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1072f629:;
  /* 1072f629 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f62c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1072f62e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1072f630 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072f632 je 0x1072f673 */
  if (C.zf) goto L_1072f673;
  /* 1072f634 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f637 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f639 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1072f63c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072f63e je 0x1072f673 */
  if (C.zf) goto L_1072f673;
  /* 1072f640 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f645 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1072f647 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1072f64a jmp 0x1072f655 */
  goto L_1072f655;
L_1072f64c:;
  /* 1072f64c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072f64f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f652 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1072f655:;
  /* 1072f655 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1072f658 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f65a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1072f65d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f660 jg 0x1072f671 */
  if ((!C.zf&&C.sf==C.of)) goto L_1072f671;
  /* 1072f662 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1072f665 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072f668 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1072f66f jmp 0x1072f64c */
  goto L_1072f64c;
L_1072f671:;
  /* 1072f671 jmp 0x1072f620 */
  goto L_1072f620;
L_1072f673:;
  /* 1072f673 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072f676 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f679 mov dword ptr [0x1074dc98], eax */
  w32((uint32_t)(0x1074dc98), (EAX));
  /* 1072f67e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072f681 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f684 mov dword ptr [0x1074dc9c], ecx */
  w32((uint32_t)(0x1074dc9c), (ECX));
  /* 1072f68a cmp dword ptr [0x1074f740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f691 je 0x1072f6a4 */
  if (C.zf) goto L_1072f6a4;
  /* 1072f693 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f695 mov edx, dword ptr [0x1074f740] */
  EDX = (r32((uint32_t)(0x1074f740)));
  /* 1072f69b push edx */
  push32((uint32_t)(EDX));
  /* 1072f69c call 0x10724590 */
  push32(0x1072f6a1u); f_10724590();
  /* 1072f6a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072f6a4:;
  /* 1072f6a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072f6a7 mov dword ptr [0x1074f740], eax */
  w32((uint32_t)(0x1074f740), (EAX));
  /* 1072f6ac cmp dword ptr [0x1074f744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f6b3 je 0x1072f6c6 */
  if (C.zf) goto L_1072f6c6;
  /* 1072f6b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f6b7 mov ecx, dword ptr [0x1074f744] */
  ECX = (r32((uint32_t)(0x1074f744)));
  /* 1072f6bd push ecx */
  push32((uint32_t)(ECX));
  /* 1072f6be call 0x10724590 */
  push32(0x1072f6c3u); f_10724590();
  /* 1072f6c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072f6c6:;
  /* 1072f6c6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072f6c9 mov dword ptr [0x1074f744], edx */
  w32((uint32_t)(0x1074f744), (EDX));
  /* 1072f6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f6d1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072f6d4 push eax */
  push32((uint32_t)(EAX));
  /* 1072f6d5 call 0x10724590 */
  push32(0x1072f6dau); f_10724590();
  /* 1072f6da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f6dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f6df mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072f6e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1072f6e3 call 0x10724590 */
  push32(0x1072f6e8u); f_10724590();
  /* 1072f6e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f6eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f6ed jmp 0x1072f77c */
  goto L_1072f77c;
L_1072f6f2:;
  /* 1072f6f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f6f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1072f6f7 push edx */
  push32((uint32_t)(EDX));
  /* 1072f6f8 call 0x10724590 */
  push32(0x1072f6fdu); f_10724590();
  /* 1072f6fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f700 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f702 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1072f705 push eax */
  push32((uint32_t)(EAX));
  /* 1072f706 call 0x10724590 */
  push32(0x1072f70bu); f_10724590();
  /* 1072f70b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f70e push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f710 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1072f713 push ecx */
  push32((uint32_t)(ECX));
  /* 1072f714 call 0x10724590 */
  push32(0x1072f719u); f_10724590();
  /* 1072f719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f71c push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f71e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1072f721 push edx */
  push32((uint32_t)(EDX));
  /* 1072f722 call 0x10724590 */
  push32(0x1072f727u); f_10724590();
  /* 1072f727 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f72a mov eax, 1 */
  EAX = (0x1u);
  /* 1072f72f jmp 0x1072f77c */
  goto L_1072f77c;
L_1072f731:;
  /* 1072f731 mov dword ptr [0x1074dc98], 0x1074dca2 */
  w32((uint32_t)(0x1074dc98), (0x1074dca2u));
  /* 1072f73b mov dword ptr [0x1074dc9c], 0x1074dca2 */
  w32((uint32_t)(0x1074dc9c), (0x1074dca2u));
  /* 1072f745 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f747 mov eax, dword ptr [0x1074f740] */
  EAX = (r32((uint32_t)(0x1074f740)));
  /* 1072f74c push eax */
  push32((uint32_t)(EAX));
  /* 1072f74d call 0x10724590 */
  push32(0x1072f752u); f_10724590();
  /* 1072f752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f755 push 2 */
  push32((uint32_t)(0x2u));
  /* 1072f757 mov ecx, dword ptr [0x1074f744] */
  ECX = (r32((uint32_t)(0x1074f744)));
  /* 1072f75d push ecx */
  push32((uint32_t)(ECX));
  /* 1072f75e call 0x10724590 */
  push32(0x1072f763u); f_10724590();
  /* 1072f763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f766 mov dword ptr [0x1074f740], 0 */
  w32((uint32_t)(0x1074f740), (0x0u));
  /* 1072f770 mov dword ptr [0x1074f744], 0 */
  w32((uint32_t)(0x1074f744), (0x0u));
  /* 1072f77a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1072f77c:;
  /* 1072f77c mov esp, ebp */
  ESP = (EBP);
  /* 1072f77e pop ebp */
  EBP = (pop32());
  /* 1072f77f ret  */
  ESPCHK(0x1072f3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f780 @ 0x1072f780 (7 bytes, 5 insns) */
void f_1072f780(void) {
  FTRACE(0x1072f780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f780 push ebp */
  push32((uint32_t)(EBP));
  /* 1072f781 mov ebp, esp */
  EBP = (ESP);
  /* 1072f783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f785 pop ebp */
  EBP = (pop32());
  /* 1072f786 ret  */
  ESPCHK(0x1072f780u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1072f790 (129 bytes, 56 insns) */
void f_1072f790(void) {
  FTRACE(0x1072f790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f790 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1072f794 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1072f798 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1072f79e jne 0x1072f7dc */
  if (!C.zf) goto L_1072f7dc;
L_1072f7a0:;
  /* 1072f7a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1072f7a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1072f7a4 jne 0x1072f7d4 */
  if (!C.zf) goto L_1072f7d4;
  /* 1072f7a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1072f7a8 je 0x1072f7d0 */
  if (C.zf) goto L_1072f7d0;
  /* 1072f7aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1072f7ad jne 0x1072f7d4 */
  if (!C.zf) goto L_1072f7d4;
  /* 1072f7af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1072f7b1 je 0x1072f7d0 */
  if (C.zf) goto L_1072f7d0;
  /* 1072f7b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1072f7b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1072f7b9 jne 0x1072f7d4 */
  if (!C.zf) goto L_1072f7d4;
  /* 1072f7bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1072f7bd je 0x1072f7d0 */
  if (C.zf) goto L_1072f7d0;
  /* 1072f7bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1072f7c2 jne 0x1072f7d4 */
  if (!C.zf) goto L_1072f7d4;
  /* 1072f7c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f7c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f7ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1072f7cc jne 0x1072f7a0 */
  if (!C.zf) goto L_1072f7a0;
  /* 1072f7ce mov edi, edi */
  EDI = (EDI);
L_1072f7d0:;
  /* 1072f7d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f7d2 ret  */
  ESPCHK(0x1072f790u, _esp0);
  ESP += 4; return;
  /* 1072f7d3 nop  */
  /* nop */
L_1072f7d4:;
  /* 1072f7d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072f7d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1072f7d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1072f7d9 ret  */
  ESPCHK(0x1072f790u, _esp0);
  ESP += 4; return;
  /* 1072f7da mov edi, edi */
  EDI = (EDI);
L_1072f7dc:;
  /* 1072f7dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1072f7e2 je 0x1072f7f8 */
  if (C.zf) goto L_1072f7f8;
  /* 1072f7e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1072f7e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1072f7e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1072f7e9 jne 0x1072f7d4 */
  if (!C.zf) goto L_1072f7d4;
  /* 1072f7eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1072f7ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1072f7ee je 0x1072f7d0 */
  if (C.zf) goto L_1072f7d0;
  /* 1072f7f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1072f7f6 je 0x1072f7a0 */
  if (C.zf) goto L_1072f7a0;
L_1072f7f8:;
  /* 1072f7f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1072f7fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f7fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1072f800 jne 0x1072f7d4 */
  if (!C.zf) goto L_1072f7d4;
  /* 1072f802 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1072f804 je 0x1072f7d0 */
  if (C.zf) goto L_1072f7d0;
  /* 1072f806 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1072f809 jne 0x1072f7d4 */
  if (!C.zf) goto L_1072f7d4;
  /* 1072f80b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1072f80d je 0x1072f7d0 */
  if (C.zf) goto L_1072f7d0;
  /* 1072f80f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f812 jmp 0x1072f7a0 */
  goto L_1072f7a0;
}

/* FUN_1000f820 @ 0x1072f820 (62 bytes, 35 insns) */
void f_1072f820(void) {
  FTRACE(0x1072f820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f820 push ebp */
  push32((uint32_t)(EBP));
  /* 1072f821 mov ebp, esp */
  EBP = (ESP);
  /* 1072f823 push esi */
  push32((uint32_t)(ESI));
  /* 1072f824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f826 push eax */
  push32((uint32_t)(EAX));
  /* 1072f827 push eax */
  push32((uint32_t)(EAX));
  /* 1072f828 push eax */
  push32((uint32_t)(EAX));
  /* 1072f829 push eax */
  push32((uint32_t)(EAX));
  /* 1072f82a push eax */
  push32((uint32_t)(EAX));
  /* 1072f82b push eax */
  push32((uint32_t)(EAX));
  /* 1072f82c push eax */
  push32((uint32_t)(EAX));
  /* 1072f82d push eax */
  push32((uint32_t)(EAX));
  /* 1072f82e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072f831 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072f834:;
  /* 1072f834 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1072f836 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1072f838 je 0x1072f841 */
  if (C.zf) goto L_1072f841;
  /* 1072f83a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1072f83b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1072f83b");
  /* 1072f83f jmp 0x1072f834 */
  goto L_1072f834;
L_1072f841:;
  /* 1072f841 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f844 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1072f847 nop  */
  /* nop */
L_1072f848:;
  /* 1072f848 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1072f849 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072f84b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1072f84d je 0x1072f856 */
  if (C.zf) goto L_1072f856;
  /* 1072f84f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1072f850 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1072f850");
  /* 1072f854 jae 0x1072f848 */
  if (!C.cf) goto L_1072f848;
L_1072f856:;
  /* 1072f856 mov eax, ecx */
  EAX = (ECX);
  /* 1072f858 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f85b pop esi */
  ESI = (pop32());
  /* 1072f85c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072f85d ret  */
  ESPCHK(0x1072f820u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1072f860 (56 bytes, 31 insns) */
void f_1072f860(void) {
  FTRACE(0x1072f860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f860 push ebp */
  push32((uint32_t)(EBP));
  /* 1072f861 mov ebp, esp */
  EBP = (ESP);
  /* 1072f863 push edi */
  push32((uint32_t)(EDI));
  /* 1072f864 push esi */
  push32((uint32_t)(ESI));
  /* 1072f865 push ebx */
  push32((uint32_t)(EBX));
  /* 1072f866 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072f869 jecxz 0x1072f891 */
  x86_unimpl("jecxz @ 0x1072f869");
  /* 1072f86b mov ebx, ecx */
  EBX = (ECX);
  /* 1072f86d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f870 mov esi, edi */
  ESI = (EDI);
  /* 1072f872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f874 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1072f876 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072f878 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f87a mov edi, esi */
  EDI = (ESI);
  /* 1072f87c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1072f87f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1072f881 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1072f884 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072f886 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1072f889 ja 0x1072f88f */
  if ((!C.cf&&!C.zf)) goto L_1072f88f;
  /* 1072f88b je 0x1072f891 */
  if (C.zf) goto L_1072f891;
  /* 1072f88d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1072f88e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1072f88f:;
  /* 1072f88f not ecx */
  ECX = (~(ECX));
L_1072f891:;
  /* 1072f891 mov eax, ecx */
  EAX = (ECX);
  /* 1072f893 pop ebx */
  EBX = (pop32());
  /* 1072f894 pop esi */
  ESI = (pop32());
  /* 1072f895 pop edi */
  EDI = (pop32());
  /* 1072f896 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072f897 ret  */
  ESPCHK(0x1072f860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8a0 @ 0x1072f8a0 (58 bytes, 32 insns) */
void f_1072f8a0(void) {
  FTRACE(0x1072f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072f8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1072f8a3 push esi */
  push32((uint32_t)(ESI));
  /* 1072f8a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f8a6 push eax */
  push32((uint32_t)(EAX));
  /* 1072f8a7 push eax */
  push32((uint32_t)(EAX));
  /* 1072f8a8 push eax */
  push32((uint32_t)(EAX));
  /* 1072f8a9 push eax */
  push32((uint32_t)(EAX));
  /* 1072f8aa push eax */
  push32((uint32_t)(EAX));
  /* 1072f8ab push eax */
  push32((uint32_t)(EAX));
  /* 1072f8ac push eax */
  push32((uint32_t)(EAX));
  /* 1072f8ad push eax */
  push32((uint32_t)(EAX));
  /* 1072f8ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072f8b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1072f8b4:;
  /* 1072f8b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1072f8b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1072f8b8 je 0x1072f8c1 */
  if (C.zf) goto L_1072f8c1;
  /* 1072f8ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1072f8bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1072f8bb");
  /* 1072f8bf jmp 0x1072f8b4 */
  goto L_1072f8b4;
L_1072f8c1:;
  /* 1072f8c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1072f8c4:;
  /* 1072f8c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1072f8c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1072f8c8 je 0x1072f8d4 */
  if (C.zf) goto L_1072f8d4;
  /* 1072f8ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1072f8cb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1072f8cb");
  /* 1072f8cf jae 0x1072f8c4 */
  if (!C.cf) goto L_1072f8c4;
  /* 1072f8d1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1072f8d4:;
  /* 1072f8d4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f8d7 pop esi */
  ESI = (pop32());
  /* 1072f8d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1072f8d9 ret  */
  ESPCHK(0x1072f8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8e0 @ 0x1072f8e0 (512 bytes, 147 insns) */
void f_1072f8e0(void) {
  FTRACE(0x1072f8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072f8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072f8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1072f8e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072f8e6 cmp dword ptr [0x1074f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f8ed jne 0x1072f912 */
  if (!C.zf) goto L_1072f912;
  /* 1072f8ef call 0x107303b0 */
  push32(0x1072f8f4u); f_107303b0();
  /* 1072f8f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072f8f6 je 0x1072f902 */
  if (C.zf) goto L_1072f902;
  /* 1072f8f8 mov eax, dword ptr [0x107522a8] */
  EAX = (r32((uint32_t)(0x107522a8)));
  /* 1072f8fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072f900 jmp 0x1072f909 */
  goto L_1072f909;
L_1072f902:;
  /* 1072f902 mov dword ptr [ebp - 8], 0x10730400 */
  w32((uint32_t)(EBP + -0x8), (0x10730400u));
L_1072f909:;
  /* 1072f909 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1072f90c mov dword ptr [0x1074f78c], ecx */
  w32((uint32_t)(0x1074f78c), (ECX));
L_1072f912:;
  /* 1072f912 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f916 jne 0x1072f922 */
  if (!C.zf) goto L_1072f922;
  /* 1072f918 call 0x10730200 */
  push32(0x1072f91du); f_10730200();
  /* 1072f91d jmp 0x1072f9ee */
  goto L_1072f9ee;
L_1072f922:;
  /* 1072f922 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f925 mov dword ptr [0x1074f77c], edx */
  w32((uint32_t)(0x1074f77c), (EDX));
  /* 1072f92b cmp dword ptr [0x1074f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f932 je 0x1072f954 */
  if (C.zf) goto L_1072f954;
  /* 1072f934 mov eax, dword ptr [0x1074f77c] */
  EAX = (r32((uint32_t)(0x1074f77c)));
  /* 1072f939 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072f93c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072f93e je 0x1072f954 */
  if (C.zf) goto L_1072f954;
  /* 1072f940 push 0x1074f77c */
  push32((uint32_t)(0x1074f77cu));
  /* 1072f945 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1072f947 push 0x1074ea90 */
  push32((uint32_t)(0x1074ea90u));
  /* 1072f94c call 0x1072fae0 */
  push32(0x1072f951u); f_1072fae0();
  /* 1072f951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072f954:;
  /* 1072f954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072f957 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072f95a mov dword ptr [0x1074f780], edx */
  w32((uint32_t)(0x1074f780), (EDX));
  /* 1072f960 cmp dword ptr [0x1074f780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f967 je 0x1072f989 */
  if (C.zf) goto L_1072f989;
  /* 1072f969 mov eax, dword ptr [0x1074f780] */
  EAX = (r32((uint32_t)(0x1074f780)));
  /* 1072f96e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072f971 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072f973 je 0x1072f989 */
  if (C.zf) goto L_1072f989;
  /* 1072f975 push 0x1074f780 */
  push32((uint32_t)(0x1074f780u));
  /* 1072f97a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1072f97c push 0x1074e9d8 */
  push32((uint32_t)(0x1074e9d8u));
  /* 1072f981 call 0x1072fae0 */
  push32(0x1072f986u); f_1072fae0();
  /* 1072f986 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072f989:;
  /* 1072f989 mov dword ptr [0x1074f784], 0 */
  w32((uint32_t)(0x1074f784), (0x0u));
  /* 1072f993 cmp dword ptr [0x1074f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f99a je 0x1072f9cd */
  if (C.zf) goto L_1072f9cd;
  /* 1072f99c mov edx, dword ptr [0x1074f77c] */
  EDX = (r32((uint32_t)(0x1074f77c)));
  /* 1072f9a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1072f9a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072f9a7 je 0x1072f9cd */
  if (C.zf) goto L_1072f9cd;
  /* 1072f9a9 cmp dword ptr [0x1074f780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f9b0 je 0x1072f9c6 */
  if (C.zf) goto L_1072f9c6;
  /* 1072f9b2 mov ecx, dword ptr [0x1074f780] */
  ECX = (r32((uint32_t)(0x1074f780)));
  /* 1072f9b8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1072f9bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072f9bd je 0x1072f9c6 */
  if (C.zf) goto L_1072f9c6;
  /* 1072f9bf call 0x1072fb70 */
  push32(0x1072f9c4u); f_1072fb70();
  /* 1072f9c4 jmp 0x1072f9cb */
  goto L_1072f9cb;
L_1072f9c6:;
  /* 1072f9c6 call 0x1072ff60 */
  push32(0x1072f9cbu); f_1072ff60();
L_1072f9cb:;
  /* 1072f9cb jmp 0x1072f9ee */
  goto L_1072f9ee;
L_1072f9cd:;
  /* 1072f9cd cmp dword ptr [0x1074f780], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f780))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f9d4 je 0x1072f9e9 */
  if (C.zf) goto L_1072f9e9;
  /* 1072f9d6 mov eax, dword ptr [0x1074f780] */
  EAX = (r32((uint32_t)(0x1074f780)));
  /* 1072f9db movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1072f9de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072f9e0 je 0x1072f9e9 */
  if (C.zf) goto L_1072f9e9;
  /* 1072f9e2 call 0x10730100 */
  push32(0x1072f9e7u); f_10730100();
  /* 1072f9e7 jmp 0x1072f9ee */
  goto L_1072f9ee;
L_1072f9e9:;
  /* 1072f9e9 call 0x10730200 */
  push32(0x1072f9eeu); f_10730200();
L_1072f9ee:;
  /* 1072f9ee cmp dword ptr [0x1074f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072f9f5 jne 0x1072f9fe */
  if (!C.zf) goto L_1072f9fe;
  /* 1072f9f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072f9f9 jmp 0x1072fadc */
  goto L_1072fadc;
L_1072f9fe:;
  /* 1072f9fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072fa01 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fa07 push edx */
  push32((uint32_t)(EDX));
  /* 1072fa08 call 0x10730230 */
  push32(0x1072fa0du); f_10730230();
  /* 1072fa0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fa10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072fa13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fa17 je 0x1072fa2c */
  if (C.zf) goto L_1072fa2c;
  /* 1072fa19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072fa1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1072fa21 push eax */
  push32((uint32_t)(EAX));
  /* 1072fa22 call dword ptr [0x107522ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522ac))), 0x1072fa28u);
  /* 1072fa28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fa2a jne 0x1072fa33 */
  if (!C.zf) goto L_1072fa33;
L_1072fa2c:;
  /* 1072fa2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072fa2e jmp 0x1072fadc */
  goto L_1072fadc;
L_1072fa33:;
  /* 1072fa33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072fa35 mov ecx, dword ptr [0x1074f76c] */
  ECX = (r32((uint32_t)(0x1074f76c)));
  /* 1072fa3b push ecx */
  push32((uint32_t)(ECX));
  /* 1072fa3c call dword ptr [0x107522bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522bc))), 0x1072fa42u);
  /* 1072fa42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fa44 jne 0x1072fa4d */
  if (!C.zf) goto L_1072fa4d;
  /* 1072fa46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072fa48 jmp 0x1072fadc */
  goto L_1072fadc;
L_1072fa4d:;
  /* 1072fa4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fa51 je 0x1072fa78 */
  if (C.zf) goto L_1072fa78;
  /* 1072fa53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072fa56 mov ax, word ptr [0x1074f76c] */
  AX = (r16((uint32_t)(0x1074f76c)));
  /* 1072fa5c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1072fa5f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072fa62 mov dx, word ptr [0x1074f788] */
  DX = (r16((uint32_t)(0x1074f788)));
  /* 1072fa69 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1072fa6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1072fa70 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1072fa74 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1072fa78:;
  /* 1072fa78 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fa7c je 0x1072fad7 */
  if (C.zf) goto L_1072fad7;
  /* 1072fa7e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1072fa80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072fa83 push edx */
  push32((uint32_t)(EDX));
  /* 1072fa84 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1072fa89 mov eax, dword ptr [0x1074f76c] */
  EAX = (r32((uint32_t)(0x1074f76c)));
  /* 1072fa8e push eax */
  push32((uint32_t)(EAX));
  /* 1072fa8f call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x1072fa95u);
  /* 1072fa95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fa97 jne 0x1072fa9d */
  if (!C.zf) goto L_1072fa9d;
  /* 1072fa99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072fa9b jmp 0x1072fadc */
  goto L_1072fadc;
L_1072fa9d:;
  /* 1072fa9d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1072fa9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072faa2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072faa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1072faa6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1072faab mov edx, dword ptr [0x1074f788] */
  EDX = (r32((uint32_t)(0x1074f788)));
  /* 1072fab1 push edx */
  push32((uint32_t)(EDX));
  /* 1072fab2 call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x1072fab8u);
  /* 1072fab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072faba jne 0x1072fac0 */
  if (!C.zf) goto L_1072fac0;
  /* 1072fabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1072fabe jmp 0x1072fadc */
  goto L_1072fadc;
L_1072fac0:;
  /* 1072fac0 push 0xa */
  push32((uint32_t)(0xau));
  /* 1072fac2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072fac5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072faca push eax */
  push32((uint32_t)(EAX));
  /* 1072facb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072face push ecx */
  push32((uint32_t)(ECX));
  /* 1072facf call 0x10726640 */
  push32(0x1072fad4u); f_10726640();
  /* 1072fad4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1072fad7:;
  /* 1072fad7 mov eax, 1 */
  EAX = (0x1u);
L_1072fadc:;
  /* 1072fadc mov esp, ebp */
  ESP = (EBP);
  /* 1072fade pop ebp */
  EBP = (pop32());
  /* 1072fadf ret  */
  ESPCHK(0x1072f8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fae0 @ 0x1072fae0 (130 bytes, 47 insns) */
void f_1072fae0(void) {
  FTRACE(0x1072fae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072fae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072fae1 mov ebp, esp */
  EBP = (ESP);
  /* 1072fae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072fae6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1072faed mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1072faf4:;
  /* 1072faf4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072faf7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fafa jg 0x1072fb5e */
  if ((!C.zf&&C.sf==C.of)) goto L_1072fb5e;
  /* 1072fafc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fb00 je 0x1072fb5e */
  if (C.zf) goto L_1072fb5e;
  /* 1072fb02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1072fb05 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fb08 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1072fb09 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072fb0b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1072fb0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1072fb10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072fb13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072fb16 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1072fb19 push eax */
  push32((uint32_t)(EAX));
  /* 1072fb1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072fb1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1072fb1f push edx */
  push32((uint32_t)(EDX));
  /* 1072fb20 call 0x107321d0 */
  push32(0x1072fb25u); f_107321d0();
  /* 1072fb25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fb28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1072fb2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fb2f jne 0x1072fb42 */
  if (!C.zf) goto L_1072fb42;
  /* 1072fb31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072fb34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072fb37 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1072fb3b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1072fb3e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1072fb40 jmp 0x1072fb5c */
  goto L_1072fb5c;
L_1072fb42:;
  /* 1072fb42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fb46 jge 0x1072fb53 */
  if ((C.sf==C.of)) goto L_1072fb53;
  /* 1072fb48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072fb4b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072fb4e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1072fb51 jmp 0x1072fb5c */
  goto L_1072fb5c;
L_1072fb53:;
  /* 1072fb53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072fb56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fb59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1072fb5c:;
  /* 1072fb5c jmp 0x1072faf4 */
  goto L_1072faf4;
L_1072fb5e:;
  /* 1072fb5e mov esp, ebp */
  ESP = (EBP);
  /* 1072fb60 pop ebp */
  EBP = (pop32());
  /* 1072fb61 ret  */
  ESPCHK(0x1072fae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x1072fb70 (186 bytes, 50 insns) */
void f_1072fb70(void) {
  FTRACE(0x1072fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1072fb71 mov ebp, esp */
  EBP = (ESP);
  /* 1072fb73 push ecx */
  push32((uint32_t)(ECX));
  /* 1072fb74 mov eax, dword ptr [0x1074f77c] */
  EAX = (r32((uint32_t)(0x1074f77c)));
  /* 1072fb79 push eax */
  push32((uint32_t)(EAX));
  /* 1072fb7a call 0x10726930 */
  push32(0x1072fb7fu); f_10726930();
  /* 1072fb7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fb82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072fb84 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fb87 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1072fb8a mov dword ptr [0x1074f778], ecx */
  w32((uint32_t)(0x1074f778), (ECX));
  /* 1072fb90 mov edx, dword ptr [0x1074f780] */
  EDX = (r32((uint32_t)(0x1074f780)));
  /* 1072fb96 push edx */
  push32((uint32_t)(EDX));
  /* 1072fb97 call 0x10726930 */
  push32(0x1072fb9cu); f_10726930();
  /* 1072fb9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fb9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072fba1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fba4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1072fba7 mov dword ptr [0x1074f770], ecx */
  w32((uint32_t)(0x1074f770), (ECX));
  /* 1072fbad mov dword ptr [0x1074f76c], 0 */
  w32((uint32_t)(0x1074f76c), (0x0u));
  /* 1072fbb7 cmp dword ptr [0x1074f778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fbbe je 0x1072fbc9 */
  if (C.zf) goto L_1072fbc9;
  /* 1072fbc0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1072fbc7 jmp 0x1072fbdb */
  goto L_1072fbdb;
L_1072fbc9:;
  /* 1072fbc9 mov edx, dword ptr [0x1074f77c] */
  EDX = (r32((uint32_t)(0x1074f77c)));
  /* 1072fbcf push edx */
  push32((uint32_t)(EDX));
  /* 1072fbd0 call 0x10730610 */
  push32(0x1072fbd5u); f_10730610();
  /* 1072fbd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fbd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072fbdb:;
  /* 1072fbdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072fbde mov dword ptr [0x1074f774], eax */
  w32((uint32_t)(0x1074f774), (EAX));
  /* 1072fbe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1072fbe5 push 0x1072fc30 */
  push32((uint32_t)(0x1072fc30u));
  /* 1072fbea call dword ptr [0x107522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522b0))), 0x1072fbf0u);
  /* 1072fbf0 mov ecx, dword ptr [0x1074f784] */
  ECX = (r32((uint32_t)(0x1074f784)));
  /* 1072fbf6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1072fbfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072fbfe je 0x1072fc1c */
  if (C.zf) goto L_1072fc1c;
  /* 1072fc00 mov edx, dword ptr [0x1074f784] */
  EDX = (r32((uint32_t)(0x1074f784)));
  /* 1072fc06 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1072fc0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072fc0e je 0x1072fc1c */
  if (C.zf) goto L_1072fc1c;
  /* 1072fc10 mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 1072fc15 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1072fc18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fc1a jne 0x1072fc26 */
  if (!C.zf) goto L_1072fc26;
L_1072fc1c:;
  /* 1072fc1c mov dword ptr [0x1074f784], 0 */
  w32((uint32_t)(0x1074f784), (0x0u));
L_1072fc26:;
  /* 1072fc26 mov esp, ebp */
  ESP = (EBP);
  /* 1072fc28 pop ebp */
  EBP = (pop32());
  /* 1072fc29 ret  */
  ESPCHK(0x1072fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc30 @ 0x1072fc30 (804 bytes, 220 insns) */
void f_1072fc30(void) {
  FTRACE(0x1072fc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072fc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1072fc31 mov ebp, esp */
  EBP = (ESP);
  /* 1072fc33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072fc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072fc39 push eax */
  push32((uint32_t)(EAX));
  /* 1072fc3a call 0x10730590 */
  push32(0x1072fc3fu); f_10730590();
  /* 1072fc3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fc42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1072fc45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1072fc47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1072fc4a push ecx */
  push32((uint32_t)(ECX));
  /* 1072fc4b mov edx, dword ptr [0x1074f770] */
  EDX = (r32((uint32_t)(0x1074f770)));
  /* 1072fc51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072fc53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072fc55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1072fc5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fc61 push edx */
  push32((uint32_t)(EDX));
  /* 1072fc62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fc65 push eax */
  push32((uint32_t)(EAX));
  /* 1072fc66 call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x1072fc6cu);
  /* 1072fc6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fc6e jne 0x1072fc84 */
  if (!C.zf) goto L_1072fc84;
  /* 1072fc70 mov dword ptr [0x1074f784], 0 */
  w32((uint32_t)(0x1074f784), (0x0u));
  /* 1072fc7a mov eax, 1 */
  EAX = (0x1u);
  /* 1072fc7f jmp 0x1072ff4e */
  goto L_1072ff4e;
L_1072fc84:;
  /* 1072fc84 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1072fc87 push ecx */
  push32((uint32_t)(ECX));
  /* 1072fc88 mov edx, dword ptr [0x1074f780] */
  EDX = (r32((uint32_t)(0x1074f780)));
  /* 1072fc8e push edx */
  push32((uint32_t)(EDX));
  /* 1072fc8f call 0x107321d0 */
  push32(0x1072fc94u); f_107321d0();
  /* 1072fc94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fc97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fc99 jne 0x1072fdbf */
  if (!C.zf) goto L_1072fdbf;
  /* 1072fc9f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1072fca1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1072fca4 push eax */
  push32((uint32_t)(EAX));
  /* 1072fca5 mov ecx, dword ptr [0x1074f778] */
  ECX = (r32((uint32_t)(0x1074f778)));
  /* 1072fcab neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072fcad sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072fcaf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1072fcb5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fcbb push ecx */
  push32((uint32_t)(ECX));
  /* 1072fcbc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fcbf push edx */
  push32((uint32_t)(EDX));
  /* 1072fcc0 call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x1072fcc6u);
  /* 1072fcc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fcc8 jne 0x1072fcde */
  if (!C.zf) goto L_1072fcde;
  /* 1072fcca mov dword ptr [0x1074f784], 0 */
  w32((uint32_t)(0x1074f784), (0x0u));
  /* 1072fcd4 mov eax, 1 */
  EAX = (0x1u);
  /* 1072fcd9 jmp 0x1072ff4e */
  goto L_1072ff4e;
L_1072fcde:;
  /* 1072fcde lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1072fce1 push eax */
  push32((uint32_t)(EAX));
  /* 1072fce2 mov ecx, dword ptr [0x1074f77c] */
  ECX = (r32((uint32_t)(0x1074f77c)));
  /* 1072fce8 push ecx */
  push32((uint32_t)(ECX));
  /* 1072fce9 call 0x107321d0 */
  push32(0x1072fceeu); f_107321d0();
  /* 1072fcee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fcf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fcf3 jne 0x1072fd20 */
  if (!C.zf) goto L_1072fd20;
  /* 1072fcf5 mov edx, dword ptr [0x1074f784] */
  EDX = (r32((uint32_t)(0x1074f784)));
  /* 1072fcfb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1072fd01 mov dword ptr [0x1074f784], edx */
  w32((uint32_t)(0x1074f784), (EDX));
  /* 1072fd07 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fd0a mov dword ptr [0x1074f788], eax */
  w32((uint32_t)(0x1074f788), (EAX));
  /* 1072fd0f mov ecx, dword ptr [0x1074f788] */
  ECX = (r32((uint32_t)(0x1074f788)));
  /* 1072fd15 mov dword ptr [0x1074f76c], ecx */
  w32((uint32_t)(0x1074f76c), (ECX));
  /* 1072fd1b jmp 0x1072fdbf */
  goto L_1072fdbf;
L_1072fd20:;
  /* 1072fd20 mov edx, dword ptr [0x1074f784] */
  EDX = (r32((uint32_t)(0x1074f784)));
  /* 1072fd26 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1072fd29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1072fd2b jne 0x1072fdbf */
  if (!C.zf) goto L_1072fdbf;
  /* 1072fd31 cmp dword ptr [0x1074f774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fd38 je 0x1072fd8d */
  if (C.zf) goto L_1072fd8d;
  /* 1072fd3a mov eax, dword ptr [0x1074f774] */
  EAX = (r32((uint32_t)(0x1074f774)));
  /* 1072fd3f push eax */
  push32((uint32_t)(EAX));
  /* 1072fd40 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1072fd43 push ecx */
  push32((uint32_t)(ECX));
  /* 1072fd44 mov edx, dword ptr [0x1074f77c] */
  EDX = (r32((uint32_t)(0x1074f77c)));
  /* 1072fd4a push edx */
  push32((uint32_t)(EDX));
  /* 1072fd4b call 0x107322a0 */
  push32(0x1072fd50u); f_107322a0();
  /* 1072fd50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fd53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fd55 jne 0x1072fd8d */
  if (!C.zf) goto L_1072fd8d;
  /* 1072fd57 mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 1072fd5c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1072fd5e mov dword ptr [0x1074f784], eax */
  w32((uint32_t)(0x1074f784), (EAX));
  /* 1072fd63 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fd66 mov dword ptr [0x1074f788], ecx */
  w32((uint32_t)(0x1074f788), (ECX));
  /* 1072fd6c mov edx, dword ptr [0x1074f77c] */
  EDX = (r32((uint32_t)(0x1074f77c)));
  /* 1072fd72 push edx */
  push32((uint32_t)(EDX));
  /* 1072fd73 call 0x10726930 */
  push32(0x1072fd78u); f_10726930();
  /* 1072fd78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fd7b cmp eax, dword ptr [0x1074f774] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074f774))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fd81 jne 0x1072fd8b */
  if (!C.zf) goto L_1072fd8b;
  /* 1072fd83 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fd86 mov dword ptr [0x1074f76c], eax */
  w32((uint32_t)(0x1074f76c), (EAX));
L_1072fd8b:;
  /* 1072fd8b jmp 0x1072fdbf */
  goto L_1072fdbf;
L_1072fd8d:;
  /* 1072fd8d mov ecx, dword ptr [0x1074f784] */
  ECX = (r32((uint32_t)(0x1074f784)));
  /* 1072fd93 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1072fd96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072fd98 jne 0x1072fdbf */
  if (!C.zf) goto L_1072fdbf;
  /* 1072fd9a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fd9d push edx */
  push32((uint32_t)(EDX));
  /* 1072fd9e call 0x107302d0 */
  push32(0x1072fda3u); f_107302d0();
  /* 1072fda3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fda6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fda8 je 0x1072fdbf */
  if (C.zf) goto L_1072fdbf;
  /* 1072fdaa mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 1072fdaf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1072fdb1 mov dword ptr [0x1074f784], eax */
  w32((uint32_t)(0x1074f784), (EAX));
  /* 1072fdb6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fdb9 mov dword ptr [0x1074f788], ecx */
  w32((uint32_t)(0x1074f788), (ECX));
L_1072fdbf:;
  /* 1072fdbf mov edx, dword ptr [0x1074f784] */
  EDX = (r32((uint32_t)(0x1074f784)));
  /* 1072fdc5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1072fdcb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fdd1 je 0x1072ff41 */
  if (C.zf) goto L_1072ff41;
  /* 1072fdd7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1072fdd9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1072fddc push eax */
  push32((uint32_t)(EAX));
  /* 1072fddd mov ecx, dword ptr [0x1074f778] */
  ECX = (r32((uint32_t)(0x1074f778)));
  /* 1072fde3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072fde5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072fde7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1072fded add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fdf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1072fdf4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fdf7 push edx */
  push32((uint32_t)(EDX));
  /* 1072fdf8 call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x1072fdfeu);
  /* 1072fdfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fe00 jne 0x1072fe16 */
  if (!C.zf) goto L_1072fe16;
  /* 1072fe02 mov dword ptr [0x1074f784], 0 */
  w32((uint32_t)(0x1074f784), (0x0u));
  /* 1072fe0c mov eax, 1 */
  EAX = (0x1u);
  /* 1072fe11 jmp 0x1072ff4e */
  goto L_1072ff4e;
L_1072fe16:;
  /* 1072fe16 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1072fe19 push eax */
  push32((uint32_t)(EAX));
  /* 1072fe1a mov ecx, dword ptr [0x1074f77c] */
  ECX = (r32((uint32_t)(0x1074f77c)));
  /* 1072fe20 push ecx */
  push32((uint32_t)(ECX));
  /* 1072fe21 call 0x107321d0 */
  push32(0x1072fe26u); f_107321d0();
  /* 1072fe26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fe29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fe2b jne 0x1072fee0 */
  if (!C.zf) goto L_1072fee0;
  /* 1072fe31 mov edx, dword ptr [0x1074f784] */
  EDX = (r32((uint32_t)(0x1074f784)));
  /* 1072fe37 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1072fe3a mov dword ptr [0x1074f784], edx */
  w32((uint32_t)(0x1074f784), (EDX));
  /* 1072fe40 cmp dword ptr [0x1074f778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fe47 je 0x1072fe6a */
  if (C.zf) goto L_1072fe6a;
  /* 1072fe49 mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 1072fe4e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1072fe51 mov dword ptr [0x1074f784], eax */
  w32((uint32_t)(0x1074f784), (EAX));
  /* 1072fe56 cmp dword ptr [0x1074f76c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f76c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fe5d jne 0x1072fe68 */
  if (!C.zf) goto L_1072fe68;
  /* 1072fe5f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fe62 mov dword ptr [0x1074f76c], ecx */
  w32((uint32_t)(0x1074f76c), (ECX));
L_1072fe68:;
  /* 1072fe68 jmp 0x1072fede */
  goto L_1072fede;
L_1072fe6a:;
  /* 1072fe6a cmp dword ptr [0x1074f774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fe71 je 0x1072febf */
  if (C.zf) goto L_1072febf;
  /* 1072fe73 mov edx, dword ptr [0x1074f77c] */
  EDX = (r32((uint32_t)(0x1074f77c)));
  /* 1072fe79 push edx */
  push32((uint32_t)(EDX));
  /* 1072fe7a call 0x10726930 */
  push32(0x1072fe7fu); f_10726930();
  /* 1072fe7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fe82 cmp eax, dword ptr [0x1074f774] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1074f774))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fe88 jne 0x1072febf */
  if (!C.zf) goto L_1072febf;
  /* 1072fe8a push 1 */
  push32((uint32_t)(0x1u));
  /* 1072fe8c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fe8f push eax */
  push32((uint32_t)(EAX));
  /* 1072fe90 call 0x10730320 */
  push32(0x1072fe95u); f_10730320();
  /* 1072fe95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fe98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072fe9a je 0x1072febd */
  if (C.zf) goto L_1072febd;
  /* 1072fe9c mov ecx, dword ptr [0x1074f784] */
  ECX = (r32((uint32_t)(0x1074f784)));
  /* 1072fea2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1072fea5 mov dword ptr [0x1074f784], ecx */
  w32((uint32_t)(0x1074f784), (ECX));
  /* 1072feab cmp dword ptr [0x1074f76c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f76c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072feb2 jne 0x1072febd */
  if (!C.zf) goto L_1072febd;
  /* 1072feb4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072feb7 mov dword ptr [0x1074f76c], edx */
  w32((uint32_t)(0x1074f76c), (EDX));
L_1072febd:;
  /* 1072febd jmp 0x1072fede */
  goto L_1072fede;
L_1072febf:;
  /* 1072febf mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 1072fec4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1072fec7 mov dword ptr [0x1074f784], eax */
  w32((uint32_t)(0x1074f784), (EAX));
  /* 1072fecc cmp dword ptr [0x1074f76c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f76c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fed3 jne 0x1072fede */
  if (!C.zf) goto L_1072fede;
  /* 1072fed5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072fed8 mov dword ptr [0x1074f76c], ecx */
  w32((uint32_t)(0x1074f76c), (ECX));
L_1072fede:;
  /* 1072fede jmp 0x1072ff41 */
  goto L_1072ff41;
L_1072fee0:;
  /* 1072fee0 cmp dword ptr [0x1074f778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fee7 jne 0x1072ff41 */
  if (!C.zf) goto L_1072ff41;
  /* 1072fee9 cmp dword ptr [0x1074f774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072fef0 je 0x1072ff41 */
  if (C.zf) goto L_1072ff41;
  /* 1072fef2 mov edx, dword ptr [0x1074f774] */
  EDX = (r32((uint32_t)(0x1074f774)));
  /* 1072fef8 push edx */
  push32((uint32_t)(EDX));
  /* 1072fef9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1072fefc push eax */
  push32((uint32_t)(EAX));
  /* 1072fefd mov ecx, dword ptr [0x1074f77c] */
  ECX = (r32((uint32_t)(0x1074f77c)));
  /* 1072ff03 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ff04 call 0x107322a0 */
  push32(0x1072ff09u); f_107322a0();
  /* 1072ff09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ff0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072ff0e jne 0x1072ff41 */
  if (!C.zf) goto L_1072ff41;
  /* 1072ff10 push 0 */
  push32((uint32_t)(0x0u));
  /* 1072ff12 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072ff15 push edx */
  push32((uint32_t)(EDX));
  /* 1072ff16 call 0x10730320 */
  push32(0x1072ff1bu); f_10730320();
  /* 1072ff1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ff1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1072ff20 je 0x1072ff41 */
  if (C.zf) goto L_1072ff41;
  /* 1072ff22 mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 1072ff27 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1072ff2a mov dword ptr [0x1074f784], eax */
  w32((uint32_t)(0x1074f784), (EAX));
  /* 1072ff2f cmp dword ptr [0x1074f76c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f76c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ff36 jne 0x1072ff41 */
  if (!C.zf) goto L_1072ff41;
  /* 1072ff38 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1072ff3b mov dword ptr [0x1074f76c], ecx */
  w32((uint32_t)(0x1074f76c), (ECX));
L_1072ff41:;
  /* 1072ff41 mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 1072ff46 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1072ff49 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1072ff4b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072ff4d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1072ff4e:;
  /* 1072ff4e mov esp, ebp */
  ESP = (EBP);
  /* 1072ff50 pop ebp */
  EBP = (pop32());
  /* 1072ff51 ret 4 */
  ESPCHK(0x1072fc30u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ff60 @ 0x1072ff60 (116 bytes, 33 insns) */
void f_1072ff60(void) {
  FTRACE(0x1072ff60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072ff60 push ebp */
  push32((uint32_t)(EBP));
  /* 1072ff61 mov ebp, esp */
  EBP = (ESP);
  /* 1072ff63 push ecx */
  push32((uint32_t)(ECX));
  /* 1072ff64 mov eax, dword ptr [0x1074f77c] */
  EAX = (r32((uint32_t)(0x1074f77c)));
  /* 1072ff69 push eax */
  push32((uint32_t)(EAX));
  /* 1072ff6a call 0x10726930 */
  push32(0x1072ff6fu); f_10726930();
  /* 1072ff6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ff72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1072ff74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ff77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1072ff7a mov dword ptr [0x1074f778], ecx */
  w32((uint32_t)(0x1074f778), (ECX));
  /* 1072ff80 cmp dword ptr [0x1074f778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1072ff87 je 0x1072ff92 */
  if (C.zf) goto L_1072ff92;
  /* 1072ff89 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1072ff90 jmp 0x1072ffa4 */
  goto L_1072ffa4;
L_1072ff92:;
  /* 1072ff92 mov edx, dword ptr [0x1074f77c] */
  EDX = (r32((uint32_t)(0x1074f77c)));
  /* 1072ff98 push edx */
  push32((uint32_t)(EDX));
  /* 1072ff99 call 0x10730610 */
  push32(0x1072ff9eu); f_10730610();
  /* 1072ff9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072ffa1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1072ffa4:;
  /* 1072ffa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1072ffa7 mov dword ptr [0x1074f774], eax */
  w32((uint32_t)(0x1074f774), (EAX));
  /* 1072ffac push 1 */
  push32((uint32_t)(0x1u));
  /* 1072ffae push 0x1072ffe0 */
  push32((uint32_t)(0x1072ffe0u));
  /* 1072ffb3 call dword ptr [0x107522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522b0))), 0x1072ffb9u);
  /* 1072ffb9 mov ecx, dword ptr [0x1074f784] */
  ECX = (r32((uint32_t)(0x1074f784)));
  /* 1072ffbf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1072ffc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1072ffc4 jne 0x1072ffd0 */
  if (!C.zf) goto L_1072ffd0;
  /* 1072ffc6 mov dword ptr [0x1074f784], 0 */
  w32((uint32_t)(0x1074f784), (0x0u));
L_1072ffd0:;
  /* 1072ffd0 mov esp, ebp */
  ESP = (EBP);
  /* 1072ffd2 pop ebp */
  EBP = (pop32());
  /* 1072ffd3 ret  */
  ESPCHK(0x1072ff60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffe0 @ 0x1072ffe0 (287 bytes, 86 insns) */
void f_1072ffe0(void) {
  FTRACE(0x1072ffe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1072ffe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1072ffe1 mov ebp, esp */
  EBP = (ESP);
  /* 1072ffe3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1072ffe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1072ffe9 push eax */
  push32((uint32_t)(EAX));
  /* 1072ffea call 0x10730590 */
  push32(0x1072ffefu); f_10730590();
  /* 1072ffef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1072fff2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1072fff5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1072fff7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1072fffa push ecx */
  push32((uint32_t)(ECX));
  /* 1072fffb mov edx, dword ptr [0x1074f778] */
  EDX = (r32((uint32_t)(0x1074f778)));
  /* 10730001 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10730003 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730005 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1073000b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730011 push edx */
  push32((uint32_t)(EDX));
  /* 10730012 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10730015 push eax */
  push32((uint32_t)(EAX));
  /* 10730016 call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x1073001cu);
  /* 1073001c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1073001e jne 0x10730034 */
  if (!C.zf) goto L_10730034;
  /* 10730020 mov dword ptr [0x1074f784], 0 */
  w32((uint32_t)(0x1074f784), (0x0u));
  /* 1073002a mov eax, 1 */
  EAX = (0x1u);
  /* 1073002f jmp 0x107300f9 */
  goto L_107300f9;
L_10730034:;
  /* 10730034 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10730037 push ecx */
  push32((uint32_t)(ECX));
  /* 10730038 mov edx, dword ptr [0x1074f77c] */
  EDX = (r32((uint32_t)(0x1074f77c)));
  /* 1073003e push edx */
  push32((uint32_t)(EDX));
  /* 1073003f call 0x107321d0 */
  push32(0x10730044u); f_107321d0();
  /* 10730044 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10730049 jne 0x10730089 */
  if (!C.zf) goto L_10730089;
  /* 1073004b cmp dword ptr [0x1074f778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730052 jne 0x10730066 */
  if (!C.zf) goto L_10730066;
  /* 10730054 push 1 */
  push32((uint32_t)(0x1u));
  /* 10730056 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10730059 push eax */
  push32((uint32_t)(EAX));
  /* 1073005a call 0x10730320 */
  push32(0x1073005fu); f_10730320();
  /* 1073005f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10730064 je 0x10730087 */
  if (C.zf) goto L_10730087;
L_10730066:;
  /* 10730066 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10730069 mov dword ptr [0x1074f788], ecx */
  w32((uint32_t)(0x1074f788), (ECX));
  /* 1073006f mov edx, dword ptr [0x1074f788] */
  EDX = (r32((uint32_t)(0x1074f788)));
  /* 10730075 mov dword ptr [0x1074f76c], edx */
  w32((uint32_t)(0x1074f76c), (EDX));
  /* 1073007b mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 10730080 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10730082 mov dword ptr [0x1074f784], eax */
  w32((uint32_t)(0x1074f784), (EAX));
L_10730087:;
  /* 10730087 jmp 0x107300ec */
  goto L_107300ec;
L_10730089:;
  /* 10730089 cmp dword ptr [0x1074f778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730090 jne 0x107300ec */
  if (!C.zf) goto L_107300ec;
  /* 10730092 cmp dword ptr [0x1074f774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1074f774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730099 je 0x107300ec */
  if (C.zf) goto L_107300ec;
  /* 1073009b mov ecx, dword ptr [0x1074f774] */
  ECX = (r32((uint32_t)(0x1074f774)));
  /* 107300a1 push ecx */
  push32((uint32_t)(ECX));
  /* 107300a2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 107300a5 push edx */
  push32((uint32_t)(EDX));
  /* 107300a6 mov eax, dword ptr [0x1074f77c] */
  EAX = (r32((uint32_t)(0x1074f77c)));
  /* 107300ab push eax */
  push32((uint32_t)(EAX));
  /* 107300ac call 0x107322a0 */
  push32(0x107300b1u); f_107322a0();
  /* 107300b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107300b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107300b6 jne 0x107300ec */
  if (!C.zf) goto L_107300ec;
  /* 107300b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 107300ba mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107300bd push ecx */
  push32((uint32_t)(ECX));
  /* 107300be call 0x10730320 */
  push32(0x107300c3u); f_10730320();
  /* 107300c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107300c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107300c8 je 0x107300ec */
  if (C.zf) goto L_107300ec;
  /* 107300ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107300cd mov dword ptr [0x1074f788], edx */
  w32((uint32_t)(0x1074f788), (EDX));
  /* 107300d3 mov eax, dword ptr [0x1074f788] */
  EAX = (r32((uint32_t)(0x1074f788)));
  /* 107300d8 mov dword ptr [0x1074f76c], eax */
  w32((uint32_t)(0x1074f76c), (EAX));
  /* 107300dd mov ecx, dword ptr [0x1074f784] */
  ECX = (r32((uint32_t)(0x1074f784)));
  /* 107300e3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 107300e6 mov dword ptr [0x1074f784], ecx */
  w32((uint32_t)(0x1074f784), (ECX));
L_107300ec:;
  /* 107300ec mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 107300f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107300f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107300f6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107300f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_107300f9:;
  /* 107300f9 mov esp, ebp */
  ESP = (EBP);
  /* 107300fb pop ebp */
  EBP = (pop32());
  /* 107300fc ret 4 */
  ESPCHK(0x1072ffe0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010100 @ 0x10730100 (69 bytes, 20 insns) */
void f_10730100(void) {
  FTRACE(0x10730100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730100 push ebp */
  push32((uint32_t)(EBP));
  /* 10730101 mov ebp, esp */
  EBP = (ESP);
  /* 10730103 mov eax, dword ptr [0x1074f780] */
  EAX = (r32((uint32_t)(0x1074f780)));
  /* 10730108 push eax */
  push32((uint32_t)(EAX));
  /* 10730109 call 0x10726930 */
  push32(0x1073010eu); f_10726930();
  /* 1073010e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730111 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10730113 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730116 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10730119 mov dword ptr [0x1074f770], ecx */
  w32((uint32_t)(0x1074f770), (ECX));
  /* 1073011f push 1 */
  push32((uint32_t)(0x1u));
  /* 10730121 push 0x10730150 */
  push32((uint32_t)(0x10730150u));
  /* 10730126 call dword ptr [0x107522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522b0))), 0x1073012cu);
  /* 1073012c mov edx, dword ptr [0x1074f784] */
  EDX = (r32((uint32_t)(0x1074f784)));
  /* 10730132 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10730135 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10730137 jne 0x10730143 */
  if (!C.zf) goto L_10730143;
  /* 10730139 mov dword ptr [0x1074f784], 0 */
  w32((uint32_t)(0x1074f784), (0x0u));
L_10730143:;
  /* 10730143 pop ebp */
  EBP = (pop32());
  /* 10730144 ret  */
  ESPCHK(0x10730100u, _esp0);
  ESP += 4; return;
}

/* FUN_10010150 @ 0x10730150 (172 bytes, 54 insns) */
void f_10730150(void) {
  FTRACE(0x10730150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730150 push ebp */
  push32((uint32_t)(EBP));
  /* 10730151 mov ebp, esp */
  EBP = (ESP);
  /* 10730153 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730159 push eax */
  push32((uint32_t)(EAX));
  /* 1073015a call 0x10730590 */
  push32(0x1073015fu); f_10730590();
  /* 1073015f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730162 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10730165 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10730167 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1073016a push ecx */
  push32((uint32_t)(ECX));
  /* 1073016b mov edx, dword ptr [0x1074f770] */
  EDX = (r32((uint32_t)(0x1074f770)));
  /* 10730171 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10730173 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730175 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1073017b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730181 push edx */
  push32((uint32_t)(EDX));
  /* 10730182 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10730185 push eax */
  push32((uint32_t)(EAX));
  /* 10730186 call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x1073018cu);
  /* 1073018c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1073018e jne 0x107301a1 */
  if (!C.zf) goto L_107301a1;
  /* 10730190 mov dword ptr [0x1074f784], 0 */
  w32((uint32_t)(0x1074f784), (0x0u));
  /* 1073019a mov eax, 1 */
  EAX = (0x1u);
  /* 1073019f jmp 0x107301f6 */
  goto L_107301f6;
L_107301a1:;
  /* 107301a1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 107301a4 push ecx */
  push32((uint32_t)(ECX));
  /* 107301a5 mov edx, dword ptr [0x1074f780] */
  EDX = (r32((uint32_t)(0x1074f780)));
  /* 107301ab push edx */
  push32((uint32_t)(EDX));
  /* 107301ac call 0x107321d0 */
  push32(0x107301b1u); f_107321d0();
  /* 107301b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107301b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107301b6 jne 0x107301e9 */
  if (!C.zf) goto L_107301e9;
  /* 107301b8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107301bb push eax */
  push32((uint32_t)(EAX));
  /* 107301bc call 0x107302d0 */
  push32(0x107301c1u); f_107302d0();
  /* 107301c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107301c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107301c6 je 0x107301e9 */
  if (C.zf) goto L_107301e9;
  /* 107301c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 107301cb mov dword ptr [0x1074f788], ecx */
  w32((uint32_t)(0x1074f788), (ECX));
  /* 107301d1 mov edx, dword ptr [0x1074f788] */
  EDX = (r32((uint32_t)(0x1074f788)));
  /* 107301d7 mov dword ptr [0x1074f76c], edx */
  w32((uint32_t)(0x1074f76c), (EDX));
  /* 107301dd mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 107301e2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 107301e4 mov dword ptr [0x1074f784], eax */
  w32((uint32_t)(0x1074f784), (EAX));
L_107301e9:;
  /* 107301e9 mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 107301ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 107301f1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 107301f3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107301f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_107301f6:;
  /* 107301f6 mov esp, ebp */
  ESP = (EBP);
  /* 107301f8 pop ebp */
  EBP = (pop32());
  /* 107301f9 ret 4 */
  ESPCHK(0x10730150u, _esp0);
  ESP += 8; return;
}

/* FUN_10010200 @ 0x10730200 (43 bytes, 11 insns) */
void f_10730200(void) {
  FTRACE(0x10730200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730200 push ebp */
  push32((uint32_t)(EBP));
  /* 10730201 mov ebp, esp */
  EBP = (ESP);
  /* 10730203 mov eax, dword ptr [0x1074f784] */
  EAX = (r32((uint32_t)(0x1074f784)));
  /* 10730208 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1073020d mov dword ptr [0x1074f784], eax */
  w32((uint32_t)(0x1074f784), (EAX));
  /* 10730212 call dword ptr [0x107522a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522a0))), 0x10730218u);
  /* 10730218 mov dword ptr [0x1074f788], eax */
  w32((uint32_t)(0x1074f788), (EAX));
  /* 1073021d mov ecx, dword ptr [0x1074f788] */
  ECX = (r32((uint32_t)(0x1074f788)));
  /* 10730223 mov dword ptr [0x1074f76c], ecx */
  w32((uint32_t)(0x1074f76c), (ECX));
  /* 10730229 pop ebp */
  EBP = (pop32());
  /* 1073022a ret  */
  ESPCHK(0x10730200u, _esp0);
  ESP += 4; return;
}

/* FUN_10010230 @ 0x10730230 (155 bytes, 57 insns) */
void f_10730230(void) {
  FTRACE(0x10730230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730230 push ebp */
  push32((uint32_t)(EBP));
  /* 10730231 mov ebp, esp */
  EBP = (ESP);
  /* 10730233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730236 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073023a je 0x1073025b */
  if (C.zf) goto L_1073025b;
  /* 1073023c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073023f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10730242 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10730244 je 0x1073025b */
  if (C.zf) goto L_1073025b;
  /* 10730246 push 0x1074b7e4 */
  push32((uint32_t)(0x1074b7e4u));
  /* 1073024b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073024e push edx */
  push32((uint32_t)(EDX));
  /* 1073024f call 0x1072f790 */
  push32(0x10730254u); f_1072f790();
  /* 10730254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10730259 jne 0x10730283 */
  if (!C.zf) goto L_10730283;
L_1073025b:;
  /* 1073025b push 8 */
  push32((uint32_t)(0x8u));
  /* 1073025d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10730260 push eax */
  push32((uint32_t)(EAX));
  /* 10730261 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10730266 mov ecx, dword ptr [0x1074f788] */
  ECX = (r32((uint32_t)(0x1074f788)));
  /* 1073026c push ecx */
  push32((uint32_t)(ECX));
  /* 1073026d call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x10730273u);
  /* 10730273 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10730275 jne 0x1073027b */
  if (!C.zf) goto L_1073027b;
  /* 10730277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10730279 jmp 0x107302c7 */
  goto L_107302c7;
L_1073027b:;
  /* 1073027b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1073027e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10730281 jmp 0x107302bb */
  goto L_107302bb;
L_10730283:;
  /* 10730283 push 0x1074b7e0 */
  push32((uint32_t)(0x1074b7e0u));
  /* 10730288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073028b push eax */
  push32((uint32_t)(EAX));
  /* 1073028c call 0x1072f790 */
  push32(0x10730291u); f_1072f790();
  /* 10730291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10730296 jne 0x107302bb */
  if (!C.zf) goto L_107302bb;
  /* 10730298 push 8 */
  push32((uint32_t)(0x8u));
  /* 1073029a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1073029d push ecx */
  push32((uint32_t)(ECX));
  /* 1073029e push 0xb */
  push32((uint32_t)(0xbu));
  /* 107302a0 mov edx, dword ptr [0x1074f788] */
  EDX = (r32((uint32_t)(0x1074f788)));
  /* 107302a6 push edx */
  push32((uint32_t)(EDX));
  /* 107302a7 call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x107302adu);
  /* 107302ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107302af jne 0x107302b5 */
  if (!C.zf) goto L_107302b5;
  /* 107302b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107302b3 jmp 0x107302c7 */
  goto L_107302c7;
L_107302b5:;
  /* 107302b5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107302b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107302bb:;
  /* 107302bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107302be push ecx */
  push32((uint32_t)(ECX));
  /* 107302bf call 0x107323b0 */
  push32(0x107302c4u); f_107323b0();
  /* 107302c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107302c7:;
  /* 107302c7 mov esp, ebp */
  ESP = (EBP);
  /* 107302c9 pop ebp */
  EBP = (pop32());
  /* 107302ca ret  */
  ESPCHK(0x10730230u, _esp0);
  ESP += 4; return;
}

/* FUN_100102d0 @ 0x107302d0 (79 bytes, 26 insns) */
void f_107302d0(void) {
  FTRACE(0x107302d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107302d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107302d1 mov ebp, esp */
  EBP = (ESP);
  /* 107302d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107302d6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 107302da mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 107302de mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107302e5 jmp 0x107302f0 */
  goto L_107302f0;
L_107302e7:;
  /* 107302e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107302ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107302ed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_107302f0:;
  /* 107302f0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107302f4 jae 0x10730316 */
  if (!C.cf) goto L_10730316;
  /* 107302f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107302f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 107302ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10730302 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10730304 mov cx, word ptr [eax*2 + 0x1074e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1074e9c4)));
  /* 1073030c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073030e jne 0x10730314 */
  if (!C.zf) goto L_10730314;
  /* 10730310 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10730312 jmp 0x1073031b */
  goto L_1073031b;
L_10730314:;
  /* 10730314 jmp 0x107302e7 */
  goto L_107302e7;
L_10730316:;
  /* 10730316 mov eax, 1 */
  EAX = (0x1u);
L_1073031b:;
  /* 1073031b mov esp, ebp */
  ESP = (EBP);
  /* 1073031d pop ebp */
  EBP = (pop32());
  /* 1073031e ret  */
  ESPCHK(0x107302d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010320 @ 0x10730320 (135 bytes, 48 insns) */
void f_10730320(void) {
  FTRACE(0x10730320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730320 push ebp */
  push32((uint32_t)(EBP));
  /* 10730321 mov ebp, esp */
  EBP = (ESP);
  /* 10730323 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730326 push esi */
  push32((uint32_t)(ESI));
  /* 10730327 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073032a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1073032f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10730334 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10730339 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1073033c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10730341 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10730344 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10730346 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10730349 push ecx */
  push32((uint32_t)(ECX));
  /* 1073034a push 1 */
  push32((uint32_t)(0x1u));
  /* 1073034c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1073034f push edx */
  push32((uint32_t)(EDX));
  /* 10730350 call dword ptr [0x1074f78c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1074f78c))), 0x10730356u);
  /* 10730356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10730358 jne 0x1073035e */
  if (!C.zf) goto L_1073035e;
  /* 1073035a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073035c jmp 0x107303a2 */
  goto L_107303a2;
L_1073035e:;
  /* 1073035e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10730361 push eax */
  push32((uint32_t)(EAX));
  /* 10730362 call 0x10730590 */
  push32(0x10730367u); f_10730590();
  /* 10730367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073036a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073036d je 0x1073039d */
  if (C.zf) goto L_1073039d;
  /* 1073036f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730373 je 0x1073039d */
  if (C.zf) goto L_1073039d;
  /* 10730375 mov ecx, dword ptr [0x1074f77c] */
  ECX = (r32((uint32_t)(0x1074f77c)));
  /* 1073037b push ecx */
  push32((uint32_t)(ECX));
  /* 1073037c call 0x10730610 */
  push32(0x10730381u); f_10730610();
  /* 10730381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730384 mov esi, eax */
  ESI = (EAX);
  /* 10730386 mov edx, dword ptr [0x1074f77c] */
  EDX = (r32((uint32_t)(0x1074f77c)));
  /* 1073038c push edx */
  push32((uint32_t)(EDX));
  /* 1073038d call 0x10726930 */
  push32(0x10730392u); f_10726930();
  /* 10730392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730395 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730397 jne 0x1073039d */
  if (!C.zf) goto L_1073039d;
  /* 10730399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1073039b jmp 0x107303a2 */
  goto L_107303a2;
L_1073039d:;
  /* 1073039d mov eax, 1 */
  EAX = (0x1u);
L_107303a2:;
  /* 107303a2 pop esi */
  ESI = (pop32());
  /* 107303a3 mov esp, ebp */
  ESP = (EBP);
  /* 107303a5 pop ebp */
  EBP = (pop32());
  /* 107303a6 ret  */
  ESPCHK(0x10730320u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x107303b0 (77 bytes, 18 insns) */
void f_107303b0(void) {
  FTRACE(0x107303b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107303b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107303b1 mov ebp, esp */
  EBP = (ESP);
  /* 107303b3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107303b9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 107303c3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 107303c9 push eax */
  push32((uint32_t)(EAX));
  /* 107303ca call dword ptr [0x1075229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1075229c))), 0x107303d0u);
  /* 107303d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107303d2 je 0x107303e9 */
  if (C.zf) goto L_107303e9;
  /* 107303d4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107303db jne 0x107303e9 */
  if (!C.zf) goto L_107303e9;
  /* 107303dd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 107303e7 jmp 0x107303f3 */
  goto L_107303f3;
L_107303e9:;
  /* 107303e9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_107303f3:;
  /* 107303f3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 107303f9 mov esp, ebp */
  ESP = (EBP);
  /* 107303fb pop ebp */
  EBP = (pop32());
  /* 107303fc ret  */
  ESPCHK(0x107303b0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10730400 (388 bytes, 118 insns) */
void f_10730400(void) {
  FTRACE(0x10730400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730400 push ebp */
  push32((uint32_t)(EBP));
  /* 10730401 mov ebp, esp */
  EBP = (ESP);
  /* 10730403 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730406 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1073040d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10730414 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1073041b:;
  /* 1073041b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1073041e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730421 jg 0x10730568 */
  if ((!C.zf&&C.sf==C.of)) goto L_10730568;
  /* 10730427 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1073042a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073042d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1073042e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730430 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10730432 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10730435 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730438 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1073043b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073043e cmp edx, dword ptr [ecx + 0x1074e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1074e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730444 jne 0x1073053e */
  if (!C.zf) goto L_1073053e;
  /* 1073044a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1073044d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10730450 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730454 ja 0x10730477 */
  if ((!C.cf&&!C.zf)) goto L_10730477;
  /* 10730456 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073045a je 0x107304e9 */
  if (C.zf) goto L_107304e9;
  /* 10730460 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730464 je 0x10730494 */
  if (C.zf) goto L_10730494;
  /* 10730466 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073046a je 0x107304b6 */
  if (C.zf) goto L_107304b6;
  /* 1073046c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730470 je 0x107304d8 */
  if (C.zf) goto L_107304d8;
  /* 10730472 jmp 0x10730508 */
  goto L_10730508;
L_10730477:;
  /* 10730477 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073047e je 0x107304a5 */
  if (C.zf) goto L_107304a5;
  /* 10730480 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730487 je 0x107304c7 */
  if (C.zf) goto L_107304c7;
  /* 10730489 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730490 je 0x107304fa */
  if (C.zf) goto L_107304fa;
  /* 10730492 jmp 0x10730508 */
  goto L_10730508;
L_10730494:;
  /* 10730494 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730497 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1073049a add ecx, 0x1074e524 */
  { uint32_t _a=(ECX),_b=(0x1074e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107304a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107304a3 jmp 0x10730508 */
  goto L_10730508;
L_107304a5:;
  /* 107304a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107304a8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107304ab mov eax, dword ptr [edx + 0x1074e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1074e52c)));
  /* 107304b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107304b4 jmp 0x10730508 */
  goto L_10730508;
L_107304b6:;
  /* 107304b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107304b9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107304bc add ecx, 0x1074e530 */
  { uint32_t _a=(ECX),_b=(0x1074e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107304c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107304c5 jmp 0x10730508 */
  goto L_10730508;
L_107304c7:;
  /* 107304c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107304ca imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107304cd mov eax, dword ptr [edx + 0x1074e534] */
  EAX = (r32((uint32_t)(EDX + 0x1074e534)));
  /* 107304d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107304d6 jmp 0x10730508 */
  goto L_10730508;
L_107304d8:;
  /* 107304d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107304db imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107304de add ecx, 0x1074e538 */
  { uint32_t _a=(ECX),_b=(0x1074e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107304e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107304e7 jmp 0x10730508 */
  goto L_10730508;
L_107304e9:;
  /* 107304e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107304ec imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107304ef add edx, 0x1074e53c */
  { uint32_t _a=(EDX),_b=(0x1074e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107304f5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 107304f8 jmp 0x10730508 */
  goto L_10730508;
L_107304fa:;
  /* 107304fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107304fd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10730500 add eax, 0x1074e544 */
  { uint32_t _a=(EAX),_b=(0x1074e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730505 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10730508:;
  /* 10730508 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073050c je 0x10730514 */
  if (C.zf) goto L_10730514;
  /* 1073050e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730512 jge 0x10730516 */
  if ((C.sf==C.of)) goto L_10730516;
L_10730514:;
  /* 10730514 jmp 0x10730568 */
  goto L_10730568;
L_10730516:;
  /* 10730516 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10730519 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1073051c push ecx */
  push32((uint32_t)(ECX));
  /* 1073051d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10730520 push edx */
  push32((uint32_t)(EDX));
  /* 10730521 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730524 push eax */
  push32((uint32_t)(EAX));
  /* 10730525 call 0x10727320 */
  push32(0x1073052au); f_10727320();
  /* 1073052a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073052d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10730530 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730533 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10730537 mov eax, 1 */
  EAX = (0x1u);
  /* 1073053c jmp 0x1073057e */
  goto L_1073057e;
L_1073053e:;
  /* 1073053e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730541 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10730544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730547 cmp eax, dword ptr [edx + 0x1074e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1074e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073054d jae 0x1073055a */
  if (!C.cf) goto L_1073055a;
  /* 1073054f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10730552 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730555 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10730558 jmp 0x10730563 */
  goto L_10730563;
L_1073055a:;
  /* 1073055a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1073055d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730560 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10730563:;
  /* 10730563 jmp 0x1073041b */
  goto L_1073041b;
L_10730568:;
  /* 10730568 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1073056b push eax */
  push32((uint32_t)(EAX));
  /* 1073056c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1073056f push ecx */
  push32((uint32_t)(ECX));
  /* 10730570 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10730573 push edx */
  push32((uint32_t)(EDX));
  /* 10730574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730577 push eax */
  push32((uint32_t)(EAX));
  /* 10730578 call dword ptr [0x107522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522a8))), 0x1073057eu);
L_1073057e:;
  /* 1073057e mov esp, ebp */
  ESP = (EBP);
  /* 10730580 pop ebp */
  EBP = (pop32());
  /* 10730581 ret 0x10 */
  ESPCHK(0x10730400u, _esp0);
  ESP += 20; return;
}

/* FUN_10010590 @ 0x10730590 (118 bytes, 42 insns) */
void f_10730590(void) {
  FTRACE(0x10730590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730590 push ebp */
  push32((uint32_t)(EBP));
  /* 10730591 mov ebp, esp */
  EBP = (ESP);
  /* 10730593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730596 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1073059d:;
  /* 1073059d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107305a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107305a2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 107305a5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107305a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107305ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107305af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107305b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107305b4 je 0x107305ff */
  if (C.zf) goto L_107305ff;
  /* 107305b6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107305ba cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107305bd jl 0x107305d2 */
  if ((C.sf!=C.of)) goto L_107305d2;
  /* 107305bf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107305c3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107305c6 jg 0x107305d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_107305d2;
  /* 107305c8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 107305cb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107305cd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 107305d0 jmp 0x107305ec */
  goto L_107305ec;
L_107305d2:;
  /* 107305d2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107305d6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107305d9 jl 0x107305ec */
  if ((C.sf!=C.of)) goto L_107305ec;
  /* 107305db movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107305df cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107305e2 jg 0x107305ec */
  if ((!C.zf&&C.sf==C.of)) goto L_107305ec;
  /* 107305e4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 107305e7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107305e9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_107305ec:;
  /* 107305ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107305ef shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 107305f2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107305f6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 107305fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107305fd jmp 0x1073059d */
  goto L_1073059d;
L_107305ff:;
  /* 107305ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10730602 mov esp, ebp */
  ESP = (EBP);
  /* 10730604 pop ebp */
  EBP = (pop32());
  /* 10730605 ret  */
  ESPCHK(0x10730590u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10730610 (101 bytes, 36 insns) */
void f_10730610(void) {
  FTRACE(0x10730610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730610 push ebp */
  push32((uint32_t)(EBP));
  /* 10730611 mov ebp, esp */
  EBP = (ESP);
  /* 10730613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10730616 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1073061d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730620 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10730622 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10730625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730628 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1073062b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1073062e:;
  /* 1073062e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10730632 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730635 jl 0x10730640 */
  if ((C.sf!=C.of)) goto L_10730640;
  /* 10730637 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1073063b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073063e jle 0x10730652 */
  if ((C.zf||C.sf!=C.of)) goto L_10730652;
L_10730640:;
  /* 10730640 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10730644 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730647 jl 0x1073066e */
  if ((C.sf!=C.of)) goto L_1073066e;
  /* 10730649 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1073064d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730650 jg 0x1073066e */
  if ((!C.zf&&C.sf==C.of)) goto L_1073066e;
L_10730652:;
  /* 10730652 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10730655 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730658 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1073065b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073065e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10730660 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10730663 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730666 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10730669 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1073066c jmp 0x1073062e */
  goto L_1073062e;
L_1073066e:;
  /* 1073066e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10730671 mov esp, ebp */
  ESP = (EBP);
  /* 10730673 pop ebp */
  EBP = (pop32());
  /* 10730674 ret  */
  ESPCHK(0x10730610u, _esp0);
  ESP += 4; return;
}

/* FUN_10010680 @ 0x10730680 (122 bytes, 39 insns) */
void f_10730680(void) {
  FTRACE(0x10730680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730680 push ebp */
  push32((uint32_t)(EBP));
  /* 10730681 mov ebp, esp */
  EBP = (ESP);
  /* 10730683 push ecx */
  push32((uint32_t)(ECX));
  /* 10730684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730687 cmp eax, dword ptr [0x1075101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1075101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073068d jae 0x107306b1 */
  if (!C.cf) goto L_107306b1;
  /* 1073068f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730692 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10730695 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730698 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1073069b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1073069e mov eax, dword ptr [ecx*4 + 0x10750ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10750ee0)));
  /* 107306a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107306aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107306ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107306af jne 0x107306cc */
  if (!C.zf) goto L_107306cc;
L_107306b1:;
  /* 107306b1 call 0x1072b9d0 */
  push32(0x107306b6u); f_1072b9d0();
  /* 107306b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107306bc call 0x1072b9e0 */
  push32(0x107306c1u); f_1072b9e0();
  /* 107306c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107306c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107306ca jmp 0x107306f6 */
  goto L_107306f6;
L_107306cc:;
  /* 107306cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107306cf push edx */
  push32((uint32_t)(EDX));
  /* 107306d0 call 0x1072d1f0 */
  push32(0x107306d5u); f_1072d1f0();
  /* 107306d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107306d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107306db push eax */
  push32((uint32_t)(EAX));
  /* 107306dc call 0x10730700 */
  push32(0x107306e1u); f_10730700();
  /* 107306e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107306e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 107306e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107306ea push ecx */
  push32((uint32_t)(ECX));
  /* 107306eb call 0x1072d280 */
  push32(0x107306f0u); f_1072d280();
  /* 107306f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107306f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_107306f6:;
  /* 107306f6 mov esp, ebp */
  ESP = (EBP);
  /* 107306f8 pop ebp */
  EBP = (pop32());
  /* 107306f9 ret  */
  ESPCHK(0x10730680u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10730700 (170 bytes, 59 insns) */
void f_10730700(void) {
  FTRACE(0x10730700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10730700 push ebp */
  push32((uint32_t)(EBP));
  /* 10730701 mov ebp, esp */
  EBP = (ESP);
  /* 10730703 push ecx */
  push32((uint32_t)(ECX));
  /* 10730704 push esi */
  push32((uint32_t)(ESI));
  /* 10730705 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730708 push eax */
  push32((uint32_t)(EAX));
  /* 10730709 call 0x1072d070 */
  push32(0x1073070eu); f_1072d070();
  /* 1073070e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730711 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730714 je 0x10730753 */
  if (C.zf) goto L_10730753;
  /* 10730716 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073071a je 0x10730722 */
  if (C.zf) goto L_10730722;
  /* 1073071c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730720 jne 0x1073073c */
  if (!C.zf) goto L_1073073c;
L_10730722:;
  /* 10730722 push 1 */
  push32((uint32_t)(0x1u));
  /* 10730724 call 0x1072d070 */
  push32(0x10730729u); f_1072d070();
  /* 10730729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073072c mov esi, eax */
  ESI = (EAX);
  /* 1073072e push 2 */
  push32((uint32_t)(0x2u));
  /* 10730730 call 0x1072d070 */
  push32(0x10730735u); f_1072d070();
  /* 10730735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730738 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1073073a je 0x10730753 */
  if (C.zf) goto L_10730753;
L_1073073c:;
  /* 1073073c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073073f push ecx */
  push32((uint32_t)(ECX));
  /* 10730740 call 0x1072d070 */
  push32(0x10730745u); f_1072d070();
  /* 10730745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730748 push eax */
  push32((uint32_t)(EAX));
  /* 10730749 call dword ptr [0x107522a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107522a4))), 0x1073074fu);
  /* 1073074f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10730751 je 0x1073075c */
  if (C.zf) goto L_1073075c;
L_10730753:;
  /* 10730753 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1073075a jmp 0x10730765 */
  goto L_10730765;
L_1073075c:;
  /* 1073075c call dword ptr [0x10752280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10752280))), 0x10730762u);
  /* 10730762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10730765:;
  /* 10730765 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730768 push edx */
  push32((uint32_t)(EDX));
  /* 10730769 call 0x1072cf90 */
  push32(0x1073076eu); f_1072cf90();
  /* 1073076e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10730771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730774 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10730777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073077a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1073077d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10730780 mov edx, dword ptr [eax*4 + 0x10750ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10750ee0)));
  /* 10730787 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1073078c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10730790 je 0x107307a3 */
  if (C.zf) goto L_107307a3;
  /* 10730792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10730795 push eax */
  push32((uint32_t)(EAX));
  /* 10730796 call 0x1072b930 */
  push32(0x1073079bu); f_1072b930();
  /* 1073079b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073079e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107307a1 jmp 0x107307a5 */
  goto L_107307a5;
L_107307a3:;
  /* 107307a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107307a5:;
  /* 107307a5 pop esi */
  ESI = (pop32());
  /* 107307a6 mov esp, ebp */
  ESP = (EBP);
  /* 107307a8 pop ebp */
  EBP = (pop32());
  /* 107307a9 ret  */
  ESPCHK(0x10730700u, _esp0);
  ESP += 4; return;
}

/* FUN_100107b0 @ 0x107307b0 (146 bytes, 52 insns) */
void f_107307b0(void) {
  FTRACE(0x107307b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107307b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107307b1 mov ebp, esp */
  EBP = (ESP);
  /* 107307b3 push ebx */
  push32((uint32_t)(EBX));
  /* 107307b4 push esi */
  push32((uint32_t)(ESI));
  /* 107307b5 push edi */
  push32((uint32_t)(EDI));
L_107307b6:;
  /* 107307b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107307ba jne 0x107307da */
  if (!C.zf) goto L_107307da;
  /* 107307bc push 0x1074b120 */
  push32((uint32_t)(0x1074b120u));
  /* 107307c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107307c3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 107307c5 push 0x1074b7e8 */
  push32((uint32_t)(0x1074b7e8u));
  /* 107307ca push 2 */
  push32((uint32_t)(0x2u));
  /* 107307cc call 0x10722bc0 */
  push32(0x107307d1u); f_10722bc0();
  /* 107307d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107307d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107307d7 jne 0x107307da */
  if (!C.zf) goto L_107307da;
  /* 107307d9 int3  */
  x86_unimpl("int3 @ 0x107307d9");
L_107307da:;
  /* 107307da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107307dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107307de jne 0x107307b6 */
  if (!C.zf) goto L_107307b6;
  /* 107307e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107307e3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107307e6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 107307ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107307ee je 0x1073083d */
  if (C.zf) goto L_1073083d;
  /* 107307f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107307f3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107307f6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 107307f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107307fb je 0x1073083d */
  if (C.zf) goto L_1073083d;
  /* 107307fd push 2 */
  push32((uint32_t)(0x2u));
  /* 107307ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730802 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10730805 push eax */
  push32((uint32_t)(EAX));
  /* 10730806 call 0x10724590 */
  push32(0x1073080bu); f_10724590();
  /* 1073080b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1073080e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730811 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10730814 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1073081a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073081d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10730820 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730823 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10730829 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1073082c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10730833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10730836 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1073083d:;
  /* 1073083d pop edi */
  EDI = (pop32());
  /* 1073083e pop esi */
  ESI = (pop32());
  /* 1073083f pop ebx */
  EBX = (pop32());
  /* 10730840 pop ebp */
  EBP = (pop32());
  /* 10730841 ret  */
  ESPCHK(0x107307b0u, _esp0);
  ESP += 4; return;
}

