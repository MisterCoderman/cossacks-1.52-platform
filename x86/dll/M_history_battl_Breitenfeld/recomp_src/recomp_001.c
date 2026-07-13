#include "recomp.h"

/* FUN_10006a00 @ 0x12826a00 (10 bytes, 5 insns) */
void f_12826a00(void) {
  FTRACE(0x12826a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12826a01 mov ebp, esp */
  EBP = (ESP);
  /* 12826a03 mov eax, 1 */
  EAX = (0x1u);
  /* 12826a08 pop ebp */
  EBP = (pop32());
  /* 12826a09 ret  */
  ESPCHK(0x12826a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a10 @ 0x12826a10 (173 bytes, 59 insns) */
void f_12826a10(void) {
  FTRACE(0x12826a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12826a11 mov ebp, esp */
  EBP = (ESP);
  /* 12826a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826a16 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826a1a jbe 0x12826a23 */
  if ((C.cf||C.zf)) goto L_12826a23;
  /* 12826a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12826a1e jmp 0x12826ab9 */
  goto L_12826ab9;
L_12826a23:;
  /* 12826a23 push 9 */
  push32((uint32_t)(0x9u));
  /* 12826a25 call 0x12826540 */
  push32(0x12826a2au); f_12826540();
  /* 12826a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826a30 push eax */
  push32((uint32_t)(EAX));
  /* 12826a31 call 0x12826e40 */
  push32(0x12826a36u); f_12826e40();
  /* 12826a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826a39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12826a3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826a40 je 0x12826a81 */
  if (C.zf) goto L_12826a81;
  /* 12826a42 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12826a49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826a4c cmp ecx, dword ptr [0x1284cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826a52 ja 0x12826a72 */
  if ((!C.cf&&!C.zf)) goto L_12826a72;
  /* 12826a54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826a57 push edx */
  push32((uint32_t)(EDX));
  /* 12826a58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826a5b push eax */
  push32((uint32_t)(EAX));
  /* 12826a5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826a5f push ecx */
  push32((uint32_t)(ECX));
  /* 12826a60 call 0x12827d10 */
  push32(0x12826a65u); f_12827d10();
  /* 12826a65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12826a6a je 0x12826a72 */
  if (C.zf) goto L_12826a72;
  /* 12826a6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826a6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12826a72:;
  /* 12826a72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12826a74 call 0x128265e0 */
  push32(0x12826a79u); f_128265e0();
  /* 12826a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826a7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826a7f jmp 0x12826ab9 */
  goto L_12826ab9;
L_12826a81:;
  /* 12826a81 push 9 */
  push32((uint32_t)(0x9u));
  /* 12826a83 call 0x128265e0 */
  push32(0x12826a88u); f_128265e0();
  /* 12826a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826a8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826a8f jne 0x12826a98 */
  if (!C.zf) goto L_12826a98;
  /* 12826a91 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12826a98:;
  /* 12826a98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826a9b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826a9e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12826aa0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12826aa3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 12826aa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826aaa push edx */
  push32((uint32_t)(EDX));
  /* 12826aab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12826aad mov eax, dword ptr [0x1284fe2c] */
  EAX = (r32((uint32_t)(0x1284fe2c)));
  /* 12826ab2 push eax */
  push32((uint32_t)(EAX));
  /* 12826ab3 call dword ptr [0x128502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502cc))), 0x12826ab9u);
L_12826ab9:;
  /* 12826ab9 mov esp, ebp */
  ESP = (EBP);
  /* 12826abb pop ebp */
  EBP = (pop32());
  /* 12826abc ret  */
  ESPCHK(0x12826a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x12826ac0 (490 bytes, 165 insns) */
void f_12826ac0(void) {
  FTRACE(0x12826ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12826ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12826ac3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826ac6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826aca jne 0x12826add */
  if (!C.zf) goto L_12826add;
  /* 12826acc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826acf push eax */
  push32((uint32_t)(EAX));
  /* 12826ad0 call 0x12826910 */
  push32(0x12826ad5u); f_12826910();
  /* 12826ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826ad8 jmp 0x12826ca6 */
  goto L_12826ca6;
L_12826add:;
  /* 12826add cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826ae1 jne 0x12826af6 */
  if (!C.zf) goto L_12826af6;
  /* 12826ae3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 12826ae7 call 0x12826cb0 */
  push32(0x12826aecu); f_12826cb0();
  /* 12826aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826aef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12826af1 jmp 0x12826ca6 */
  goto L_12826ca6;
L_12826af6:;
  /* 12826af6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12826afd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826b01 ja 0x12826c79 */
  if ((!C.cf&&!C.zf)) goto L_12826c79;
  /* 12826b07 push 9 */
  push32((uint32_t)(0x9u));
  /* 12826b09 call 0x12826540 */
  push32(0x12826b0eu); f_12826540();
  /* 12826b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826b11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826b14 push edx */
  push32((uint32_t)(EDX));
  /* 12826b15 call 0x12826e40 */
  push32(0x12826b1au); f_12826e40();
  /* 12826b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826b1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12826b20 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826b24 je 0x12826c3c */
  if (C.zf) goto L_12826c3c;
  /* 12826b2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826b2d cmp eax, dword ptr [0x1284cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826b33 ja 0x12826bb0 */
  if ((!C.cf&&!C.zf)) goto L_12826bb0;
  /* 12826b35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826b38 push ecx */
  push32((uint32_t)(ECX));
  /* 12826b39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826b3c push edx */
  push32((uint32_t)(EDX));
  /* 12826b3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12826b40 push eax */
  push32((uint32_t)(EAX));
  /* 12826b41 call 0x12827d10 */
  push32(0x12826b46u); f_12827d10();
  /* 12826b46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12826b4b je 0x12826b55 */
  if (C.zf) goto L_12826b55;
  /* 12826b4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826b50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12826b53 jmp 0x12826bb0 */
  goto L_12826bb0;
L_12826b55:;
  /* 12826b55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826b58 push edx */
  push32((uint32_t)(EDX));
  /* 12826b59 call 0x128274d0 */
  push32(0x12826b5eu); f_128274d0();
  /* 12826b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826b61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12826b64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826b68 je 0x12826bb0 */
  if (C.zf) goto L_12826bb0;
  /* 12826b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826b6d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12826b70 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826b73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12826b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826b79 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826b7c jae 0x12826b86 */
  if (!C.cf) goto L_12826b86;
  /* 12826b7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826b81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12826b84 jmp 0x12826b8c */
  goto L_12826b8c;
L_12826b86:;
  /* 12826b86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826b89 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12826b8c:;
  /* 12826b8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12826b8f push edx */
  push32((uint32_t)(EDX));
  /* 12826b90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826b93 push eax */
  push32((uint32_t)(EAX));
  /* 12826b94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826b97 push ecx */
  push32((uint32_t)(ECX));
  /* 12826b98 call 0x12829420 */
  push32(0x12826b9du); f_12829420();
  /* 12826b9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826ba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826ba3 push edx */
  push32((uint32_t)(EDX));
  /* 12826ba4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12826ba7 push eax */
  push32((uint32_t)(EAX));
  /* 12826ba8 call 0x12826f00 */
  push32(0x12826badu); f_12826f00();
  /* 12826bad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12826bb0:;
  /* 12826bb0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826bb4 jne 0x12826c30 */
  if (!C.zf) goto L_12826c30;
  /* 12826bb6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826bba jne 0x12826bc3 */
  if (!C.zf) goto L_12826bc3;
  /* 12826bbc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12826bc3:;
  /* 12826bc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826bc6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826bc9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12826bcc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12826bcf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826bd2 push edx */
  push32((uint32_t)(EDX));
  /* 12826bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12826bd5 mov eax, dword ptr [0x1284fe2c] */
  EAX = (r32((uint32_t)(0x1284fe2c)));
  /* 12826bda push eax */
  push32((uint32_t)(EAX));
  /* 12826bdb call dword ptr [0x12850304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850304))), 0x12826be1u);
  /* 12826be1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12826be4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826be8 je 0x12826c30 */
  if (C.zf) goto L_12826c30;
  /* 12826bea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826bed mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12826bf0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826bf3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12826bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826bf9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826bfc jae 0x12826c06 */
  if (!C.cf) goto L_12826c06;
  /* 12826bfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826c01 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12826c04 jmp 0x12826c0c */
  goto L_12826c0c;
L_12826c06:;
  /* 12826c06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826c09 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12826c0c:;
  /* 12826c0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12826c0f push eax */
  push32((uint32_t)(EAX));
  /* 12826c10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12826c14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826c17 push edx */
  push32((uint32_t)(EDX));
  /* 12826c18 call 0x12829420 */
  push32(0x12826c1du); f_12829420();
  /* 12826c1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826c20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826c23 push eax */
  push32((uint32_t)(EAX));
  /* 12826c24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12826c27 push ecx */
  push32((uint32_t)(ECX));
  /* 12826c28 call 0x12826f00 */
  push32(0x12826c2du); f_12826f00();
  /* 12826c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12826c30:;
  /* 12826c30 push 9 */
  push32((uint32_t)(0x9u));
  /* 12826c32 call 0x128265e0 */
  push32(0x12826c37u); f_128265e0();
  /* 12826c37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826c3a jmp 0x12826c79 */
  goto L_12826c79;
L_12826c3c:;
  /* 12826c3c push 9 */
  push32((uint32_t)(0x9u));
  /* 12826c3e call 0x128265e0 */
  push32(0x12826c43u); f_128265e0();
  /* 12826c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826c46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826c4a jne 0x12826c53 */
  if (!C.zf) goto L_12826c53;
  /* 12826c4c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12826c53:;
  /* 12826c53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826c56 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826c59 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12826c5c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12826c5f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826c62 push eax */
  push32((uint32_t)(EAX));
  /* 12826c63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826c66 push ecx */
  push32((uint32_t)(ECX));
  /* 12826c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12826c69 mov edx, dword ptr [0x1284fe2c] */
  EDX = (r32((uint32_t)(0x1284fe2c)));
  /* 12826c6f push edx */
  push32((uint32_t)(EDX));
  /* 12826c70 call dword ptr [0x128502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502cc))), 0x12826c76u);
  /* 12826c76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12826c79:;
  /* 12826c79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826c7d jne 0x12826c88 */
  if (!C.zf) goto L_12826c88;
  /* 12826c7f cmp dword ptr [0x1284e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826c86 jne 0x12826c8d */
  if (!C.zf) goto L_12826c8d;
L_12826c88:;
  /* 12826c88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826c8b jmp 0x12826ca6 */
  goto L_12826ca6;
L_12826c8d:;
  /* 12826c8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826c90 push eax */
  push32((uint32_t)(EAX));
  /* 12826c91 call 0x12826880 */
  push32(0x12826c96u); f_12826880();
  /* 12826c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12826c9b jne 0x12826ca1 */
  if (!C.zf) goto L_12826ca1;
  /* 12826c9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12826c9f jmp 0x12826ca6 */
  goto L_12826ca6;
L_12826ca1:;
  /* 12826ca1 jmp 0x12826af6 */
  goto L_12826af6;
L_12826ca6:;
  /* 12826ca6 mov esp, ebp */
  ESP = (EBP);
  /* 12826ca8 pop ebp */
  EBP = (pop32());
  /* 12826ca9 ret  */
  ESPCHK(0x12826ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x12826cb0 (104 bytes, 38 insns) */
void f_12826cb0(void) {
  FTRACE(0x12826cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12826cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12826cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12826cb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826cb8 jne 0x12826cbc */
  if (!C.zf) goto L_12826cbc;
  /* 12826cba jmp 0x12826d14 */
  goto L_12826d14;
L_12826cbc:;
  /* 12826cbc push 9 */
  push32((uint32_t)(0x9u));
  /* 12826cbe call 0x12826540 */
  push32(0x12826cc3u); f_12826540();
  /* 12826cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12826cca call 0x12826e40 */
  push32(0x12826ccfu); f_12826e40();
  /* 12826ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826cd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12826cd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826cd9 je 0x12826cf7 */
  if (C.zf) goto L_12826cf7;
  /* 12826cdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826cde push ecx */
  push32((uint32_t)(ECX));
  /* 12826cdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826ce2 push edx */
  push32((uint32_t)(EDX));
  /* 12826ce3 call 0x12826f00 */
  push32(0x12826ce8u); f_12826f00();
  /* 12826ce8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826ceb push 9 */
  push32((uint32_t)(0x9u));
  /* 12826ced call 0x128265e0 */
  push32(0x12826cf2u); f_128265e0();
  /* 12826cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826cf5 jmp 0x12826d14 */
  goto L_12826d14;
L_12826cf7:;
  /* 12826cf7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12826cf9 call 0x128265e0 */
  push32(0x12826cfeu); f_128265e0();
  /* 12826cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826d01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826d04 push eax */
  push32((uint32_t)(EAX));
  /* 12826d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12826d07 mov ecx, dword ptr [0x1284fe2c] */
  ECX = (r32((uint32_t)(0x1284fe2c)));
  /* 12826d0d push ecx */
  push32((uint32_t)(ECX));
  /* 12826d0e call dword ptr [0x128502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e4))), 0x12826d14u);
L_12826d14:;
  /* 12826d14 mov esp, ebp */
  ESP = (EBP);
  /* 12826d16 pop ebp */
  EBP = (pop32());
  /* 12826d17 ret  */
  ESPCHK(0x12826cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d20 @ 0x12826d20 (116 bytes, 34 insns) */
void f_12826d20(void) {
  FTRACE(0x12826d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12826d21 mov ebp, esp */
  EBP = (ESP);
  /* 12826d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12826d24 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12826d2b push 9 */
  push32((uint32_t)(0x9u));
  /* 12826d2d call 0x12826540 */
  push32(0x12826d32u); f_12826540();
  /* 12826d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826d35 call 0x12828430 */
  push32(0x12826d3au); f_12828430();
  /* 12826d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12826d3c jge 0x12826d45 */
  if ((C.sf==C.of)) goto L_12826d45;
  /* 12826d3e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12826d45:;
  /* 12826d45 push 9 */
  push32((uint32_t)(0x9u));
  /* 12826d47 call 0x128265e0 */
  push32(0x12826d4cu); f_128265e0();
  /* 12826d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12826d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12826d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12826d53 mov eax, dword ptr [0x1284fe2c] */
  EAX = (r32((uint32_t)(0x1284fe2c)));
  /* 12826d58 push eax */
  push32((uint32_t)(EAX));
  /* 12826d59 call dword ptr [0x128502c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502c4))), 0x12826d5fu);
  /* 12826d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12826d61 jne 0x12826d8d */
  if (!C.zf) goto L_12826d8d;
  /* 12826d63 call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x12826d69u);
  /* 12826d69 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826d6c jne 0x12826d86 */
  if (!C.zf) goto L_12826d86;
  /* 12826d6e call 0x1282aa20 */
  push32(0x12826d73u); f_1282aa20();
  /* 12826d73 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12826d79 call 0x1282aa10 */
  push32(0x12826d7eu); f_1282aa10();
  /* 12826d7e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12826d84 jmp 0x12826d8d */
  goto L_12826d8d;
L_12826d86:;
  /* 12826d86 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12826d8d:;
  /* 12826d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826d90 mov esp, ebp */
  ESP = (EBP);
  /* 12826d92 pop ebp */
  EBP = (pop32());
  /* 12826d93 ret  */
  ESPCHK(0x12826d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x12826da0 (10 bytes, 5 insns) */
void f_12826da0(void) {
  FTRACE(0x12826da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12826da1 mov ebp, esp */
  EBP = (ESP);
  /* 12826da3 call 0x12826d20 */
  push32(0x12826da8u); f_12826d20();
  /* 12826da8 pop ebp */
  EBP = (pop32());
  /* 12826da9 ret  */
  ESPCHK(0x12826da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x12826db0 (10 bytes, 5 insns) */
void f_12826db0(void) {
  FTRACE(0x12826db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12826db1 mov ebp, esp */
  EBP = (ESP);
  /* 12826db3 mov eax, dword ptr [0x1284cc94] */
  EAX = (r32((uint32_t)(0x1284cc94)));
  /* 12826db8 pop ebp */
  EBP = (pop32());
  /* 12826db9 ret  */
  ESPCHK(0x12826db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x12826dc0 (31 bytes, 11 insns) */
void f_12826dc0(void) {
  FTRACE(0x12826dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12826dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12826dc3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826dca jbe 0x12826dd0 */
  if ((C.cf||C.zf)) goto L_12826dd0;
  /* 12826dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12826dce jmp 0x12826ddd */
  goto L_12826ddd;
L_12826dd0:;
  /* 12826dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826dd3 mov dword ptr [0x1284cc94], eax */
  w32((uint32_t)(0x1284cc94), (EAX));
  /* 12826dd8 mov eax, 1 */
  EAX = (0x1u);
L_12826ddd:;
  /* 12826ddd pop ebp */
  EBP = (pop32());
  /* 12826dde ret  */
  ESPCHK(0x12826dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x12826de0 (89 bytes, 20 insns) */
void f_12826de0(void) {
  FTRACE(0x12826de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12826de1 mov ebp, esp */
  EBP = (ESP);
  /* 12826de3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12826de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12826dea mov eax, dword ptr [0x1284fe2c] */
  EAX = (r32((uint32_t)(0x1284fe2c)));
  /* 12826def push eax */
  push32((uint32_t)(EAX));
  /* 12826df0 call dword ptr [0x12850304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850304))), 0x12826df6u);
  /* 12826df6 mov dword ptr [0x1284fe28], eax */
  w32((uint32_t)(0x1284fe28), (EAX));
  /* 12826dfb cmp dword ptr [0x1284fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826e02 jne 0x12826e08 */
  if (!C.zf) goto L_12826e08;
  /* 12826e04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12826e06 jmp 0x12826e37 */
  goto L_12826e37;
L_12826e08:;
  /* 12826e08 mov ecx, dword ptr [0x1284fe28] */
  ECX = (r32((uint32_t)(0x1284fe28)));
  /* 12826e0e mov dword ptr [0x1284fe1c], ecx */
  w32((uint32_t)(0x1284fe1c), (ECX));
  /* 12826e14 mov dword ptr [0x1284fe20], 0 */
  w32((uint32_t)(0x1284fe20), (0x0u));
  /* 12826e1e mov dword ptr [0x1284fe24], 0 */
  w32((uint32_t)(0x1284fe24), (0x0u));
  /* 12826e28 mov dword ptr [0x1284fe08], 0x10 */
  w32((uint32_t)(0x1284fe08), (0x10u));
  /* 12826e32 mov eax, 1 */
  EAX = (0x1u);
L_12826e37:;
  /* 12826e37 pop ebp */
  EBP = (pop32());
  /* 12826e38 ret  */
  ESPCHK(0x12826de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e40 @ 0x12826e40 (85 bytes, 29 insns) */
void f_12826e40(void) {
  FTRACE(0x12826e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12826e41 mov ebp, esp */
  EBP = (ESP);
  /* 12826e43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826e46 mov eax, dword ptr [0x1284fe24] */
  EAX = (r32((uint32_t)(0x1284fe24)));
  /* 12826e4b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12826e4e mov ecx, dword ptr [0x1284fe28] */
  ECX = (r32((uint32_t)(0x1284fe28)));
  /* 12826e54 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826e56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12826e59 mov edx, dword ptr [0x1284fe28] */
  EDX = (r32((uint32_t)(0x1284fe28)));
  /* 12826e5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12826e62:;
  /* 12826e62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826e65 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826e68 jae 0x12826e8f */
  if (!C.cf) goto L_12826e8f;
  /* 12826e6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826e6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826e70 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826e73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12826e76 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826e7d jae 0x12826e84 */
  if (!C.cf) goto L_12826e84;
  /* 12826e7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826e82 jmp 0x12826e91 */
  goto L_12826e91;
L_12826e84:;
  /* 12826e84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826e87 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826e8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12826e8d jmp 0x12826e62 */
  goto L_12826e62;
L_12826e8f:;
  /* 12826e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12826e91:;
  /* 12826e91 mov esp, ebp */
  ESP = (EBP);
  /* 12826e93 pop ebp */
  EBP = (pop32());
  /* 12826e94 ret  */
  ESPCHK(0x12826e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x12826ea0 (95 bytes, 33 insns) */
void f_12826ea0(void) {
  FTRACE(0x12826ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12826ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12826ea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826ea9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826eac sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826eaf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12826eb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826eb5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12826eb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12826ebb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12826ec0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826ec3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12826ec5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826ec8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12826ecb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12826ecd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12826ecf jne 0x12826ef1 */
  if (!C.zf) goto L_12826ef1;
  /* 12826ed1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826ed4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12826ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12826ed9 jne 0x12826ef1 */
  if (!C.zf) goto L_12826ef1;
  /* 12826edb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12826ede and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12826ee4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12826ee6 je 0x12826ef1 */
  if (C.zf) goto L_12826ef1;
  /* 12826ee8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12826eef jmp 0x12826ef8 */
  goto L_12826ef8;
L_12826ef1:;
  /* 12826ef1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12826ef8:;
  /* 12826ef8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12826efb mov esp, ebp */
  ESP = (EBP);
  /* 12826efd pop ebp */
  EBP = (pop32());
  /* 12826efe ret  */
  ESPCHK(0x12826ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f00 @ 0x12826f00 (1485 bytes, 453 insns) */
void f_12826f00(void) {
  FTRACE(0x12826f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12826f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12826f01 mov ebp, esp */
  EBP = (ESP);
  /* 12826f03 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826f09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12826f0c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12826f0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826f12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826f15 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826f18 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12826f1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12826f1e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12826f21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12826f24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826f27 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12826f2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12826f30 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12826f37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12826f3a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12826f3d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826f40 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12826f43 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12826f46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12826f48 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826f4b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12826f4e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12826f51 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826f54 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12826f57 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12826f5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12826f5c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12826f5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12826f62 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12826f65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12826f68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12826f6b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12826f6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12826f70 jne 0x12827098 */
  if (!C.zf) goto L_12827098;
  /* 12826f76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12826f79 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12826f7c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12826f7f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12826f82 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826f86 jbe 0x12826f8f */
  if ((C.cf||C.zf)) goto L_12826f8f;
  /* 12826f88 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12826f8f:;
  /* 12826f8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12826f92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12826f95 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12826f98 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826f9b jne 0x12827071 */
  if (!C.zf) goto L_12827071;
  /* 12826fa1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12826fa5 jae 0x12827006 */
  if (!C.cf) goto L_12827006;
  /* 12826fa7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12826fac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12826faf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12826fb1 not eax */
  EAX = (~(EAX));
  /* 12826fb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826fb6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12826fb9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12826fbd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12826fbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12826fc2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12826fc5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12826fc9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12826fcc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826fcf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12826fd2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12826fd5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12826fd8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826fdb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12826fde mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12826fe1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12826fe4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12826fe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12826fea jne 0x12827004 */
  if (!C.zf) goto L_12827004;
  /* 12826fec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12826ff1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12826ff4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12826ff6 not eax */
  EAX = (~(EAX));
  /* 12826ff8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12826ffb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12826ffd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12826fff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827002 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12827004:;
  /* 12827004 jmp 0x12827071 */
  goto L_12827071;
L_12827006:;
  /* 12827006 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12827009 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282700c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827011 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827013 not edx */
  EDX = (~(EDX));
  /* 12827015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827018 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1282701b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12827022 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12827024 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827027 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1282702a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12827031 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827034 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827037 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1282703a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1282703d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827040 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827043 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12827046 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827049 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282704c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12827050 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12827052 jne 0x12827071 */
  if (!C.zf) goto L_12827071;
  /* 12827054 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12827057 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282705a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1282705f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827061 not edx */
  EDX = (~(EDX));
  /* 12827063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827066 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12827069 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1282706b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282706e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12827071:;
  /* 12827071 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827074 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12827077 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1282707a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1282707d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12827080 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827083 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12827086 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827089 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1282708c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1282708f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827092 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827095 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12827098:;
  /* 12827098 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282709b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1282709e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128270a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 128270a4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128270a8 jbe 0x128270b1 */
  if ((C.cf||C.zf)) goto L_128270b1;
  /* 128270aa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_128270b1:;
  /* 128270b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128270b4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 128270b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128270b9 jne 0x12827215 */
  if (!C.zf) goto L_12827215;
  /* 128270bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128270c2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128270c5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 128270c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128270cb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 128270ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128270d1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 128270d4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128270d8 jbe 0x128270e1 */
  if ((C.cf||C.zf)) goto L_128270e1;
  /* 128270da mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_128270e1:;
  /* 128270e1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 128270e4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128270e7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 128270ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 128270ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 128270f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128270f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 128270f6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128270fa jbe 0x12827103 */
  if ((C.cf||C.zf)) goto L_12827103;
  /* 128270fc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12827103:;
  /* 12827103 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827106 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827109 je 0x1282720f */
  if (C.zf) goto L_1282720f;
  /* 1282710f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12827112 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12827115 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12827118 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282711b jne 0x128271f1 */
  if (!C.zf) goto L_128271f1;
  /* 12827121 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827125 jae 0x12827186 */
  if (!C.cf) goto L_12827186;
  /* 12827127 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1282712c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282712f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827131 not edx */
  EDX = (~(EDX));
  /* 12827133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827136 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827139 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1282713d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1282713f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827142 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827145 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12827149 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1282714c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282714f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12827152 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12827155 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827158 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282715b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1282715e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827161 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827164 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12827168 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282716a jne 0x12827184 */
  if (!C.zf) goto L_12827184;
  /* 1282716c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827171 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827174 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827176 not edx */
  EDX = (~(EDX));
  /* 12827178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282717b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282717d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1282717f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827182 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12827184:;
  /* 12827184 jmp 0x128271f1 */
  goto L_128271f1;
L_12827186:;
  /* 12827186 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827189 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282718c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12827191 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12827193 not eax */
  EAX = (~(EAX));
  /* 12827195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827198 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1282719b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 128271a2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 128271a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128271a7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 128271aa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 128271b1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 128271b4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128271b7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 128271ba sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 128271bd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 128271c0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128271c3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 128271c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 128271c9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128271cc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 128271d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128271d2 jne 0x128271f1 */
  if (!C.zf) goto L_128271f1;
  /* 128271d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128271d7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128271da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 128271df shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 128271e1 not eax */
  EAX = (~(EAX));
  /* 128271e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128271e6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 128271e9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 128271eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128271ee mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_128271f1:;
  /* 128271f1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 128271f4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 128271f7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 128271fa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 128271fd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12827200 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12827203 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12827206 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12827209 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1282720c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1282720f:;
  /* 1282720f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12827212 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12827215:;
  /* 12827215 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12827218 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1282721b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282721d jne 0x1282722b */
  if (!C.zf) goto L_1282722b;
  /* 1282721f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827222 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827225 je 0x1282733b */
  if (C.zf) goto L_1282733b;
L_1282722b:;
  /* 1282722b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1282722e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12827231 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12827234 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12827237 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282723a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282723d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12827240 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12827243 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12827246 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827249 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1282724c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282724f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12827252 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12827255 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12827258 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1282725b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282725e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12827261 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12827264 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12827267 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1282726a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282726d jne 0x1282733b */
  if (!C.zf) goto L_1282733b;
  /* 12827273 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827277 jae 0x128272d4 */
  if (!C.cf) goto L_128272d4;
  /* 12827279 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1282727c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282727f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12827283 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827286 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827289 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1282728c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1282728f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827292 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827295 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12827298 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282729a jne 0x128272b2 */
  if (!C.zf) goto L_128272b2;
  /* 1282729c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 128272a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128272a4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 128272a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128272a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128272ab or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 128272ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128272b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_128272b2:;
  /* 128272b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 128272b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128272ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 128272bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128272bf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 128272c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 128272c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 128272c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128272cb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 128272ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 128272d2 jmp 0x1282733b */
  goto L_1282733b;
L_128272d4:;
  /* 128272d4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 128272d7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128272da movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 128272de mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 128272e1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128272e4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 128272e7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 128272ea mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 128272ed add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128272f0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 128272f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128272f5 jne 0x12827312 */
  if (!C.zf) goto L_12827312;
  /* 128272f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128272fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128272fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827302 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827307 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1282730a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1282730c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282730f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12827312:;
  /* 12827312 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12827315 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827318 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1282731d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1282731f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827322 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827325 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1282732c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282732e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827331 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12827334 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1282733b:;
  /* 1282733b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282733e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827341 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12827343 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12827346 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827349 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282734c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1282734f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12827352 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12827354 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827357 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282735a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1282735c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282735f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827362 jne 0x128274c9 */
  if (!C.zf) goto L_128274c9;
  /* 12827368 cmp dword ptr [0x1284fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282736f je 0x128274b8 */
  if (C.zf) goto L_128274b8;
  /* 12827375 mov eax, dword ptr [0x1284fe18] */
  EAX = (r32((uint32_t)(0x1284fe18)));
  /* 1282737a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1282737d mov ecx, dword ptr [0x1284fe20] */
  ECX = (r32((uint32_t)(0x1284fe20)));
  /* 12827383 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12827386 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827388 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1282738b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12827390 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12827395 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827398 push eax */
  push32((uint32_t)(EAX));
  /* 12827399 call dword ptr [0x128502e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e8))), 0x1282739fu);
  /* 1282739f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 128273a4 mov ecx, dword ptr [0x1284fe18] */
  ECX = (r32((uint32_t)(0x1284fe18)));
  /* 128273aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 128273ac mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 128273b1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 128273b4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 128273b6 mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 128273bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 128273bf mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 128273c4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 128273c7 mov edx, dword ptr [0x1284fe18] */
  EDX = (r32((uint32_t)(0x1284fe18)));
  /* 128273cd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 128273d8 mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 128273dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 128273e0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 128273e3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 128273e6 mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 128273eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 128273ee mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 128273f1 mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 128273f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 128273fa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 128273fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12827400 jne 0x12827416 */
  if (!C.zf) goto L_12827416;
  /* 12827402 mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 12827408 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1282740b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1282740d mov ecx, dword ptr [0x1284fe20] */
  ECX = (r32((uint32_t)(0x1284fe20)));
  /* 12827413 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12827416:;
  /* 12827416 mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 1282741c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827420 jne 0x128274b8 */
  if (!C.zf) goto L_128274b8;
  /* 12827426 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1282742b push 0 */
  push32((uint32_t)(0x0u));
  /* 1282742d mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 12827432 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12827435 push ecx */
  push32((uint32_t)(ECX));
  /* 12827436 call dword ptr [0x128502e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e8))), 0x1282743cu);
  /* 1282743c mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 12827442 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12827445 push eax */
  push32((uint32_t)(EAX));
  /* 12827446 push 0 */
  push32((uint32_t)(0x0u));
  /* 12827448 mov ecx, dword ptr [0x1284fe2c] */
  ECX = (r32((uint32_t)(0x1284fe2c)));
  /* 1282744e push ecx */
  push32((uint32_t)(ECX));
  /* 1282744f call dword ptr [0x128502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e4))), 0x12827455u);
  /* 12827455 mov edx, dword ptr [0x1284fe24] */
  EDX = (r32((uint32_t)(0x1284fe24)));
  /* 1282745b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282745e mov eax, dword ptr [0x1284fe28] */
  EAX = (r32((uint32_t)(0x1284fe28)));
  /* 12827463 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827465 mov ecx, dword ptr [0x1284fe20] */
  ECX = (r32((uint32_t)(0x1284fe20)));
  /* 1282746b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282746e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827470 push eax */
  push32((uint32_t)(EAX));
  /* 12827471 mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 12827477 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282747a push edx */
  push32((uint32_t)(EDX));
  /* 1282747b mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 12827480 push eax */
  push32((uint32_t)(EAX));
  /* 12827481 call 0x1282aa30 */
  push32(0x12827486u); f_1282aa30();
  /* 12827486 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12827489 mov ecx, dword ptr [0x1284fe24] */
  ECX = (r32((uint32_t)(0x1284fe24)));
  /* 1282748f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827492 mov dword ptr [0x1284fe24], ecx */
  w32((uint32_t)(0x1284fe24), (ECX));
  /* 12827498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282749b cmp edx, dword ptr [0x1284fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1284fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128274a1 jbe 0x128274ac */
  if ((C.cf||C.zf)) goto L_128274ac;
  /* 128274a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128274a6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128274a9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_128274ac:;
  /* 128274ac mov ecx, dword ptr [0x1284fe28] */
  ECX = (r32((uint32_t)(0x1284fe28)));
  /* 128274b2 mov dword ptr [0x1284fe1c], ecx */
  w32((uint32_t)(0x1284fe1c), (ECX));
L_128274b8:;
  /* 128274b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128274bb mov dword ptr [0x1284fe20], edx */
  w32((uint32_t)(0x1284fe20), (EDX));
  /* 128274c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128274c4 mov dword ptr [0x1284fe18], eax */
  w32((uint32_t)(0x1284fe18), (EAX));
L_128274c9:;
  /* 128274c9 mov esp, ebp */
  ESP = (EBP);
  /* 128274cb pop ebp */
  EBP = (pop32());
  /* 128274cc ret  */
  ESPCHK(0x12826f00u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x128274d0 (1334 bytes, 427 insns) */
void f_128274d0(void) {
  FTRACE(0x128274d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128274d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128274d1 mov ebp, esp */
  EBP = (ESP);
  /* 128274d3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128274d6 push esi */
  push32((uint32_t)(ESI));
  /* 128274d7 mov eax, dword ptr [0x1284fe24] */
  EAX = (r32((uint32_t)(0x1284fe24)));
  /* 128274dc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128274df mov ecx, dword ptr [0x1284fe28] */
  ECX = (r32((uint32_t)(0x1284fe28)));
  /* 128274e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128274e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 128274ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128274ed add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128274f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 128274f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 128274f6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 128274f9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 128274fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128274ff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12827502 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827506 jge 0x1282751c */
  if ((C.sf==C.of)) goto L_1282751c;
  /* 12827508 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1282750b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282750e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827510 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12827513 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1282751a jmp 0x12827531 */
  goto L_12827531;
L_1282751c:;
  /* 1282751c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12827523 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827526 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827529 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282752c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1282752e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12827531:;
  /* 12827531 mov ecx, dword ptr [0x1284fe1c] */
  ECX = (r32((uint32_t)(0x1284fe1c)));
  /* 12827537 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1282753a:;
  /* 1282753a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282753d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827540 jae 0x12827566 */
  if (!C.cf) goto L_12827566;
  /* 12827542 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827545 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12827548 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1282754a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282754d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12827550 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12827553 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12827555 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12827557 je 0x1282755b */
  if (C.zf) goto L_1282755b;
  /* 12827559 jmp 0x12827566 */
  goto L_12827566;
L_1282755b:;
  /* 1282755b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282755e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827561 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12827564 jmp 0x1282753a */
  goto L_1282753a;
L_12827566:;
  /* 12827566 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827569 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282756c jne 0x1282764d */
  if (!C.zf) goto L_1282764d;
  /* 12827572 mov eax, dword ptr [0x1284fe28] */
  EAX = (r32((uint32_t)(0x1284fe28)));
  /* 12827577 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1282757a:;
  /* 1282757a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282757d cmp ecx, dword ptr [0x1284fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827583 jae 0x128275a9 */
  if (!C.cf) goto L_128275a9;
  /* 12827585 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827588 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282758b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1282758d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827590 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12827593 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12827596 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12827598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282759a je 0x1282759e */
  if (C.zf) goto L_1282759e;
  /* 1282759c jmp 0x128275a9 */
  goto L_128275a9;
L_1282759e:;
  /* 1282759e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128275a1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128275a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 128275a7 jmp 0x1282757a */
  goto L_1282757a;
L_128275a9:;
  /* 128275a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128275ac cmp ecx, dword ptr [0x1284fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128275b2 jne 0x1282764d */
  if (!C.zf) goto L_1282764d;
L_128275b8:;
  /* 128275b8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 128275bb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128275be jae 0x128275d6 */
  if (!C.cf) goto L_128275d6;
  /* 128275c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128275c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128275c7 je 0x128275cb */
  if (C.zf) goto L_128275cb;
  /* 128275c9 jmp 0x128275d6 */
  goto L_128275d6;
L_128275cb:;
  /* 128275cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128275ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128275d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 128275d4 jmp 0x128275b8 */
  goto L_128275b8;
L_128275d6:;
  /* 128275d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 128275d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128275dc jne 0x12827627 */
  if (!C.zf) goto L_12827627;
  /* 128275de mov eax, dword ptr [0x1284fe28] */
  EAX = (r32((uint32_t)(0x1284fe28)));
  /* 128275e3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_128275e6:;
  /* 128275e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128275e9 cmp ecx, dword ptr [0x1284fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128275ef jae 0x12827607 */
  if (!C.cf) goto L_12827607;
  /* 128275f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 128275f4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128275f8 je 0x128275fc */
  if (C.zf) goto L_128275fc;
  /* 128275fa jmp 0x12827607 */
  goto L_12827607;
L_128275fc:;
  /* 128275fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128275ff add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827602 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12827605 jmp 0x128275e6 */
  goto L_128275e6;
L_12827607:;
  /* 12827607 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282760a cmp ecx, dword ptr [0x1284fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827610 jne 0x12827627 */
  if (!C.zf) goto L_12827627;
  /* 12827612 call 0x12827a10 */
  push32(0x12827617u); f_12827a10();
  /* 12827617 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1282761a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282761e jne 0x12827627 */
  if (!C.zf) goto L_12827627;
  /* 12827620 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12827622 jmp 0x12827a01 */
  goto L_12827a01;
L_12827627:;
  /* 12827627 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282762a push edx */
  push32((uint32_t)(EDX));
  /* 1282762b call 0x12827b20 */
  push32(0x12827630u); f_12827b20();
  /* 12827630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12827633 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827636 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12827639 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1282763b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282763e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12827641 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827644 jne 0x1282764d */
  if (!C.zf) goto L_1282764d;
  /* 12827646 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12827648 jmp 0x12827a01 */
  goto L_12827a01;
L_1282764d:;
  /* 1282764d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827650 mov dword ptr [0x1284fe1c], edx */
  w32((uint32_t)(0x1284fe1c), (EDX));
  /* 12827656 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1282765c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1282765f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827662 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12827664 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12827667 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282766b je 0x12827690 */
  if (C.zf) goto L_12827690;
  /* 1282766d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827670 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827673 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12827676 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1282767a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282767d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827680 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12827683 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1282768a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1282768c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282768e jne 0x128276c5 */
  if (!C.zf) goto L_128276c5;
L_12827690:;
  /* 12827690 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12827697:;
  /* 12827697 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282769a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1282769d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 128276a0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 128276a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 128276a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 128276aa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 128276ad and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 128276b4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 128276b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128276b8 jne 0x128276c5 */
  if (!C.zf) goto L_128276c5;
  /* 128276ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 128276bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128276c0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 128276c3 jmp 0x12827697 */
  goto L_12827697;
L_128276c5:;
  /* 128276c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 128276c8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128276ce mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 128276d1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 128276d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128276db mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 128276e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 128276e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 128276e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 128276eb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 128276ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 128276f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128276f6 jne 0x12827712 */
  if (!C.zf) goto L_12827712;
  /* 128276f8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 128276ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827702 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827705 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12827708 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1282770f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12827712:;
  /* 12827712 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827716 jl 0x1282772b */
  if ((C.sf!=C.of)) goto L_1282772b;
  /* 12827718 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282771b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1282771d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12827720 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827723 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827726 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12827729 jmp 0x12827712 */
  goto L_12827712;
L_1282772b:;
  /* 1282772b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282772e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827731 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12827735 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12827738 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282773b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1282773d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827740 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12827743 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12827746 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12827749 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282774c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1282774f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827753 jle 0x1282775c */
  if ((C.zf||C.sf!=C.of)) goto L_1282775c;
  /* 12827755 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1282775c:;
  /* 1282775c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282775f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827762 je 0x12827980 */
  if (C.zf) goto L_12827980;
  /* 12827768 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282776b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282776e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12827771 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827774 jne 0x1282784a */
  if (!C.zf) goto L_1282784a;
  /* 1282777a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282777e jge 0x128277df */
  if ((C.sf==C.of)) goto L_128277df;
  /* 12827780 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12827785 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827788 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1282778a not eax */
  EAX = (~(EAX));
  /* 1282778c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282778f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827792 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12827796 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12827798 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282779b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1282779e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 128277a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 128277a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128277a8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 128277ab sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 128277ae mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 128277b1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128277b4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 128277b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 128277ba add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128277bd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 128277c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128277c3 jne 0x128277dd */
  if (!C.zf) goto L_128277dd;
  /* 128277c5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 128277ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 128277cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 128277cf not eax */
  EAX = (~(EAX));
  /* 128277d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128277d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128277d6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 128277d8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128277db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_128277dd:;
  /* 128277dd jmp 0x1282784a */
  goto L_1282784a;
L_128277df:;
  /* 128277df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 128277e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128277e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 128277ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 128277ec not edx */
  EDX = (~(EDX));
  /* 128277ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 128277f1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 128277f4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 128277fb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 128277fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827800 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827803 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1282780a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1282780d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827810 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12827813 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12827816 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827819 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282781c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1282781f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827822 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827825 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12827829 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282782b jne 0x1282784a */
  if (!C.zf) goto L_1282784a;
  /* 1282782d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827830 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827833 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827838 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1282783a not edx */
  EDX = (~(EDX));
  /* 1282783c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282783f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12827842 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12827844 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827847 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1282784a:;
  /* 1282784a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282784d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12827850 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827853 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12827856 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12827859 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282785c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1282785f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827862 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12827865 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12827868 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282786c je 0x12827980 */
  if (C.zf) goto L_12827980;
  /* 12827872 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827878 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1282787b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282787e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827881 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12827884 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12827887 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1282788a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282788d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12827890 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12827893 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12827896 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827899 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1282789c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282789f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 128278a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128278a5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 128278a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128278ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128278ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 128278b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128278b4 jne 0x12827980 */
  if (!C.zf) goto L_12827980;
  /* 128278ba cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128278be jge 0x1282791a */
  if ((C.sf==C.of)) goto L_1282791a;
  /* 128278c0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 128278c3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128278c6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 128278ca mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 128278cd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128278d0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 128278d3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 128278d5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 128278d8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128278db mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 128278de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128278e0 jne 0x128278f8 */
  if (!C.zf) goto L_128278f8;
  /* 128278e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 128278e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128278ea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 128278ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128278ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128278f1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 128278f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128278f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_128278f8:;
  /* 128278f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 128278fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827900 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827902 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827905 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827908 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1282790c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1282790e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827911 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827914 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12827918 jmp 0x12827980 */
  goto L_12827980;
L_1282791a:;
  /* 1282791a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1282791d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827920 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12827924 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827927 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282792a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1282792d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1282792f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827932 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827935 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12827938 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282793a jne 0x12827957 */
  if (!C.zf) goto L_12827957;
  /* 1282793c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282793f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827942 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12827947 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12827949 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282794c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1282794f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12827951 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827954 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12827957:;
  /* 12827957 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282795a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282795d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827962 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827964 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827967 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1282796a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12827971 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12827973 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827976 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12827979 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12827980:;
  /* 12827980 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827984 je 0x1282799a */
  if (C.zf) goto L_1282799a;
  /* 12827986 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827989 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282798c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1282798e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827991 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827994 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12827997 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1282799a:;
  /* 1282799a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282799d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128279a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 128279a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 128279a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128279a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128279ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128279ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128279b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128279b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128279b7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128279ba mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 128279bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128279c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128279c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128279c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128279c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128279ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128279cd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 128279cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128279d1 jne 0x128279f3 */
  if (!C.zf) goto L_128279f3;
  /* 128279d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128279d6 cmp eax, dword ptr [0x1284fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128279dc jne 0x128279f3 */
  if (!C.zf) goto L_128279f3;
  /* 128279de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 128279e1 cmp ecx, dword ptr [0x1284fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128279e7 jne 0x128279f3 */
  if (!C.zf) goto L_128279f3;
  /* 128279e9 mov dword ptr [0x1284fe20], 0 */
  w32((uint32_t)(0x1284fe20), (0x0u));
L_128279f3:;
  /* 128279f3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 128279f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 128279f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 128279fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128279fe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12827a01:;
  /* 12827a01 pop esi */
  ESI = (pop32());
  /* 12827a02 mov esp, ebp */
  ESP = (EBP);
  /* 12827a04 pop ebp */
  EBP = (pop32());
  /* 12827a05 ret  */
  ESPCHK(0x128274d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a10 @ 0x12827a10 (271 bytes, 78 insns) */
void f_12827a10(void) {
  FTRACE(0x12827a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12827a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12827a11 mov ebp, esp */
  EBP = (ESP);
  /* 12827a13 push ecx */
  push32((uint32_t)(ECX));
  /* 12827a14 mov eax, dword ptr [0x1284fe24] */
  EAX = (r32((uint32_t)(0x1284fe24)));
  /* 12827a19 cmp eax, dword ptr [0x1284fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827a1f jne 0x12827a6b */
  if (!C.zf) goto L_12827a6b;
  /* 12827a21 mov ecx, dword ptr [0x1284fe08] */
  ECX = (r32((uint32_t)(0x1284fe08)));
  /* 12827a27 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827a2a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12827a2d push ecx */
  push32((uint32_t)(ECX));
  /* 12827a2e mov edx, dword ptr [0x1284fe28] */
  EDX = (r32((uint32_t)(0x1284fe28)));
  /* 12827a34 push edx */
  push32((uint32_t)(EDX));
  /* 12827a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12827a37 mov eax, dword ptr [0x1284fe2c] */
  EAX = (r32((uint32_t)(0x1284fe2c)));
  /* 12827a3c push eax */
  push32((uint32_t)(EAX));
  /* 12827a3d call dword ptr [0x128502cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502cc))), 0x12827a43u);
  /* 12827a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12827a46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827a4a jne 0x12827a53 */
  if (!C.zf) goto L_12827a53;
  /* 12827a4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12827a4e jmp 0x12827b1b */
  goto L_12827b1b;
L_12827a53:;
  /* 12827a53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827a56 mov dword ptr [0x1284fe28], ecx */
  w32((uint32_t)(0x1284fe28), (ECX));
  /* 12827a5c mov edx, dword ptr [0x1284fe08] */
  EDX = (r32((uint32_t)(0x1284fe08)));
  /* 12827a62 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827a65 mov dword ptr [0x1284fe08], edx */
  w32((uint32_t)(0x1284fe08), (EDX));
L_12827a6b:;
  /* 12827a6b mov eax, dword ptr [0x1284fe24] */
  EAX = (r32((uint32_t)(0x1284fe24)));
  /* 12827a70 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12827a73 mov ecx, dword ptr [0x1284fe28] */
  ECX = (r32((uint32_t)(0x1284fe28)));
  /* 12827a79 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827a7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12827a7e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12827a83 push 8 */
  push32((uint32_t)(0x8u));
  /* 12827a85 mov edx, dword ptr [0x1284fe2c] */
  EDX = (r32((uint32_t)(0x1284fe2c)));
  /* 12827a8b push edx */
  push32((uint32_t)(EDX));
  /* 12827a8c call dword ptr [0x12850304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850304))), 0x12827a92u);
  /* 12827a92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827a95 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12827a98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827a9b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827a9f jne 0x12827aa5 */
  if (!C.zf) goto L_12827aa5;
  /* 12827aa1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12827aa3 jmp 0x12827b1b */
  goto L_12827b1b;
L_12827aa5:;
  /* 12827aa5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12827aa7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12827aac push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12827ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12827ab3 call dword ptr [0x1285030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285030c))), 0x12827ab9u);
  /* 12827ab9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827abc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12827abf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827ac2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827ac6 jne 0x12827ae2 */
  if (!C.zf) goto L_12827ae2;
  /* 12827ac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827acb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12827ace push ecx */
  push32((uint32_t)(ECX));
  /* 12827acf push 0 */
  push32((uint32_t)(0x0u));
  /* 12827ad1 mov edx, dword ptr [0x1284fe2c] */
  EDX = (r32((uint32_t)(0x1284fe2c)));
  /* 12827ad7 push edx */
  push32((uint32_t)(EDX));
  /* 12827ad8 call dword ptr [0x128502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e4))), 0x12827adeu);
  /* 12827ade xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12827ae0 jmp 0x12827b1b */
  goto L_12827b1b;
L_12827ae2:;
  /* 12827ae2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827ae5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12827aeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827aee mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12827af5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827af8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12827aff mov eax, dword ptr [0x1284fe24] */
  EAX = (r32((uint32_t)(0x1284fe24)));
  /* 12827b04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827b07 mov dword ptr [0x1284fe24], eax */
  w32((uint32_t)(0x1284fe24), (EAX));
  /* 12827b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827b0f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12827b12 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12827b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12827b1b:;
  /* 12827b1b mov esp, ebp */
  ESP = (EBP);
  /* 12827b1d pop ebp */
  EBP = (pop32());
  /* 12827b1e ret  */
  ESPCHK(0x12827a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b20 @ 0x12827b20 (494 bytes, 149 insns) */
void f_12827b20(void) {
  FTRACE(0x12827b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12827b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12827b21 mov ebp, esp */
  EBP = (ESP);
  /* 12827b23 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827b29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12827b2c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12827b2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827b32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12827b35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12827b38 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12827b3f:;
  /* 12827b3f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827b43 jl 0x12827b58 */
  if ((C.sf!=C.of)) goto L_12827b58;
  /* 12827b45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12827b48 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12827b4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12827b4d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12827b50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827b53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12827b56 jmp 0x12827b3f */
  goto L_12827b3f;
L_12827b58:;
  /* 12827b58 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12827b5b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12827b61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827b64 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12827b6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12827b6e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12827b75 jmp 0x12827b80 */
  goto L_12827b80;
L_12827b77:;
  /* 12827b77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827b7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827b7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12827b80:;
  /* 12827b80 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827b84 jge 0x12827ba6 */
  if ((C.sf==C.of)) goto L_12827ba6;
  /* 12827b86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827b89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12827b8c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12827b8f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12827b92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827b95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827b98 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12827b9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827b9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827ba1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12827ba4 jmp 0x12827b77 */
  goto L_12827b77;
L_12827ba6:;
  /* 12827ba6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12827ba9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12827bac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827baf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12827bb2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827bb4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12827bb7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12827bb9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12827bbe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12827bc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827bc6 push edx */
  push32((uint32_t)(EDX));
  /* 12827bc7 call dword ptr [0x1285030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285030c))), 0x12827bcdu);
  /* 12827bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12827bcf jne 0x12827bd9 */
  if (!C.zf) goto L_12827bd9;
  /* 12827bd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12827bd4 jmp 0x12827d0a */
  goto L_12827d0a;
L_12827bd9:;
  /* 12827bd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827bdc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827be1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12827be4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827be7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12827bea jmp 0x12827bf8 */
  goto L_12827bf8;
L_12827bec:;
  /* 12827bec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827bef add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827bf5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12827bf8:;
  /* 12827bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827bfb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827bfe ja 0x12827c5d */
  if ((!C.cf&&!C.zf)) goto L_12827c5d;
  /* 12827c00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827c03 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12827c0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827c0d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12827c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827c1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827c1d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12827c20 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827c23 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12827c29 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827c2c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827c32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827c35 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12827c38 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827c3b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827c41 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827c44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12827c47 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827c4a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827c4f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12827c52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12827c55 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12827c5b jmp 0x12827bec */
  goto L_12827bec;
L_12827c5d:;
  /* 12827c5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12827c60 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827c66 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12827c69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827c6c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827c6f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827c72 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12827c75 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827c78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12827c7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12827c7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827c81 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827c84 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12827c87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12827c8a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827c8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827c90 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12827c93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827c96 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12827c99 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12827c9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827c9f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827ca2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12827ca5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12827ca8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827cab mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12827cb3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12827cb6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827cb9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12827cc4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827cc7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12827ccb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827cce mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12827cd1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12827cd4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827cd7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12827cda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12827cdc jne 0x12827ced */
  if (!C.zf) goto L_12827ced;
  /* 12827cde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827ce1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12827ce4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12827ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827cea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12827ced:;
  /* 12827ced mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827cf2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12827cf5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827cf7 not edx */
  EDX = (~(EDX));
  /* 12827cf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827cfc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12827cff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12827d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827d04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12827d07 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12827d0a:;
  /* 12827d0a mov esp, ebp */
  ESP = (EBP);
  /* 12827d0c pop ebp */
  EBP = (pop32());
  /* 12827d0d ret  */
  ESPCHK(0x12827b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d10 @ 0x12827d10 (1515 bytes, 489 insns) */
void f_12827d10(void) {
  FTRACE(0x12827d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12827d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12827d11 mov ebp, esp */
  EBP = (ESP);
  /* 12827d13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827d16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12827d19 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827d1c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12827d1e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12827d21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827d24 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12827d27 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12827d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827d2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12827d30 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827d33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12827d36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12827d39 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12827d3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12827d3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827d42 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12827d48 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827d4b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12827d52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12827d55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12827d58 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827d5b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12827d5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827d61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12827d63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827d66 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12827d69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827d6c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827d6f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12827d72 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827d75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12827d77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12827d7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12827d7d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827d80 jle 0x12828036 */
  if ((C.zf||C.sf!=C.of)) goto L_12828036;
  /* 12827d86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827d89 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12827d8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12827d8e jne 0x12827d9b */
  if (!C.zf) goto L_12827d9b;
  /* 12827d90 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12827d93 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827d96 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827d99 jle 0x12827da2 */
  if ((C.zf||C.sf!=C.of)) goto L_12827da2;
L_12827d9b:;
  /* 12827d9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12827d9d jmp 0x128282f7 */
  goto L_128282f7;
L_12827da2:;
  /* 12827da2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827da5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12827da8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827dab mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12827dae cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827db2 jbe 0x12827dbb */
  if ((C.cf||C.zf)) goto L_12827dbb;
  /* 12827db4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12827dbb:;
  /* 12827dbb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827dbe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827dc1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12827dc4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827dc7 jne 0x12827e9d */
  if (!C.zf) goto L_12827e9d;
  /* 12827dcd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827dd1 jae 0x12827e32 */
  if (!C.cf) goto L_12827e32;
  /* 12827dd3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827dd8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827ddb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827ddd not edx */
  EDX = (~(EDX));
  /* 12827ddf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827de2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827de5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12827de9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12827deb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827dee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827df1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12827df5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827df8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827dfb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12827dfe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12827e01 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827e04 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827e07 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12827e0a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827e0d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827e10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12827e14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12827e16 jne 0x12827e30 */
  if (!C.zf) goto L_12827e30;
  /* 12827e18 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827e1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827e20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827e22 not edx */
  EDX = (~(EDX));
  /* 12827e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827e27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12827e29 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12827e2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827e2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12827e30:;
  /* 12827e30 jmp 0x12827e9d */
  goto L_12827e9d;
L_12827e32:;
  /* 12827e32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827e35 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827e38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12827e3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12827e3f not eax */
  EAX = (~(EAX));
  /* 12827e41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827e44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827e47 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12827e4e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12827e50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827e53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827e56 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12827e5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827e60 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827e63 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12827e66 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12827e69 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827e6c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827e6f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12827e72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827e75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827e78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12827e7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12827e7e jne 0x12827e9d */
  if (!C.zf) goto L_12827e9d;
  /* 12827e80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827e83 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827e86 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12827e8b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12827e8d not eax */
  EAX = (~(EAX));
  /* 12827e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827e92 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12827e95 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12827e97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827e9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12827e9d:;
  /* 12827e9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827ea0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12827ea3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827ea6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12827ea9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12827eac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827eaf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12827eb2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827eb5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12827eb8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12827ebb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12827ebe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827ec1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827ec4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12827ec7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827ecb jle 0x12828017 */
  if ((C.zf||C.sf!=C.of)) goto L_12828017;
  /* 12827ed1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12827ed4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827ed7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12827eda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12827edd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12827ee0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827ee3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12827ee6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827eea jbe 0x12827ef3 */
  if ((C.cf||C.zf)) goto L_12827ef3;
  /* 12827eec mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12827ef3:;
  /* 12827ef3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827ef6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12827ef9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12827efc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12827eff mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827f02 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827f05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12827f08 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12827f0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827f0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827f11 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12827f14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12827f17 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827f1a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12827f1d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827f20 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12827f23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827f26 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12827f29 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827f2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12827f2f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12827f32 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827f35 jne 0x12828003 */
  if (!C.zf) goto L_12828003;
  /* 12827f3b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12827f3f jae 0x12827f9c */
  if (!C.cf) goto L_12827f9c;
  /* 12827f41 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827f44 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827f47 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12827f4b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827f4e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827f51 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12827f54 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12827f57 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827f5a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827f5d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12827f60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12827f62 jne 0x12827f7a */
  if (!C.zf) goto L_12827f7a;
  /* 12827f64 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827f69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827f6c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827f71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12827f73 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12827f75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827f78 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12827f7a:;
  /* 12827f7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12827f7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827f82 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12827f84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827f87 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827f8a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12827f8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12827f90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827f93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827f96 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12827f9a jmp 0x12828003 */
  goto L_12828003;
L_12827f9c:;
  /* 12827f9c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827f9f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827fa2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12827fa6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827fa9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827fac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12827faf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12827fb2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827fb5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12827fb8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12827fbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12827fbd jne 0x12827fda */
  if (!C.zf) goto L_12827fda;
  /* 12827fbf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827fc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827fc5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12827fca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12827fcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827fcf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12827fd2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12827fd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12827fd7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12827fda:;
  /* 12827fda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12827fdd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12827fe0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12827fe5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12827fe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827fea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827fed mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12827ff4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12827ff6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12827ff9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12827ffc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12828003:;
  /* 12828003 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12828006 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12828009 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1282800b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282800e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828011 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12828014 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12828017:;
  /* 12828017 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282801a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282801d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12828020 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12828022 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12828025 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828028 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282802b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282802e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12828031 jmp 0x128282f2 */
  goto L_128282f2;
L_12828036:;
  /* 12828036 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12828039 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282803c jge 0x128282f2 */
  if ((C.sf==C.of)) goto L_128282f2;
  /* 12828042 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12828045 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828048 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282804b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1282804d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12828050 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828053 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12828056 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828059 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1282805c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282805f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828062 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12828065 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12828068 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282806b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1282806e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12828071 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12828074 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828077 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1282807a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282807e jbe 0x12828087 */
  if ((C.cf||C.zf)) goto L_12828087;
  /* 12828080 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12828087:;
  /* 12828087 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282808a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1282808d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282808f jne 0x128281d0 */
  if (!C.zf) goto L_128281d0;
  /* 12828095 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12828098 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1282809b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282809e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 128280a1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128280a5 jbe 0x128280ae */
  if ((C.cf||C.zf)) goto L_128280ae;
  /* 128280a7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_128280ae:;
  /* 128280ae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128280b1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128280b4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 128280b7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128280ba jne 0x12828190 */
  if (!C.zf) goto L_12828190;
  /* 128280c0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128280c4 jae 0x12828125 */
  if (!C.cf) goto L_12828125;
  /* 128280c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 128280cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 128280ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 128280d0 not edx */
  EDX = (~(EDX));
  /* 128280d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128280d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 128280d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 128280dc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 128280de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128280e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 128280e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 128280e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 128280eb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128280ee mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 128280f1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 128280f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 128280f7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128280fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 128280fd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828100 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828103 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12828107 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12828109 jne 0x12828123 */
  if (!C.zf) goto L_12828123;
  /* 1282810b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12828110 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12828113 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12828115 not edx */
  EDX = (~(EDX));
  /* 12828117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282811a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282811c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1282811e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828121 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12828123:;
  /* 12828123 jmp 0x12828190 */
  goto L_12828190;
L_12828125:;
  /* 12828125 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12828128 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282812b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12828130 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12828132 not eax */
  EAX = (~(EAX));
  /* 12828134 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828137 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282813a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12828141 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12828143 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828146 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828149 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12828150 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828153 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828156 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12828159 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1282815c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282815f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828162 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12828165 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828168 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282816b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1282816f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12828171 jne 0x12828190 */
  if (!C.zf) goto L_12828190;
  /* 12828173 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12828176 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828179 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1282817e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12828180 not eax */
  EAX = (~(EAX));
  /* 12828182 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828185 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12828188 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1282818a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282818d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12828190:;
  /* 12828190 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12828193 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12828196 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12828199 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1282819c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1282819f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128281a2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 128281a5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128281a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 128281ab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 128281ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 128281b1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128281b4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 128281b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128281ba sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 128281bd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128281c0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 128281c3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128281c7 jbe 0x128281d0 */
  if ((C.cf||C.zf)) goto L_128281d0;
  /* 128281c9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_128281d0:;
  /* 128281d0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 128281d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128281d6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 128281d9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 128281dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128281df mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128281e2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 128281e5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 128281e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128281eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128281ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 128281f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128281f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128281f7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 128281fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128281fd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12828200 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12828203 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12828206 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12828209 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282820c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1282820f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828212 jne 0x128282de */
  if (!C.zf) goto L_128282de;
  /* 12828218 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282821c jae 0x12828278 */
  if (!C.cf) goto L_12828278;
  /* 1282821e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828221 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828224 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12828228 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282822b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282822e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12828231 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12828233 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828236 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828239 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1282823c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282823e jne 0x12828256 */
  if (!C.zf) goto L_12828256;
  /* 12828240 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12828245 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828248 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1282824a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282824d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282824f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12828251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828254 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12828256:;
  /* 12828256 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1282825b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282825e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12828260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828263 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828266 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1282826a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1282826c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282826f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828272 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12828276 jmp 0x128282de */
  goto L_128282de;
L_12828278:;
  /* 12828278 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282827b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282827e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12828282 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828285 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828288 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1282828b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1282828d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12828290 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828293 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12828296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12828298 jne 0x128282b5 */
  if (!C.zf) goto L_128282b5;
  /* 1282829a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282829d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128282a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 128282a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 128282a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128282aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 128282ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 128282af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128282b2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_128282b5:;
  /* 128282b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128282b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128282bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 128282c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 128282c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128282c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 128282c8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 128282cf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 128282d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128282d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 128282d7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_128282de:;
  /* 128282de mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128282e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128282e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 128282e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128282e9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128282ec mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 128282ef mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_128282f2:;
  /* 128282f2 mov eax, 1 */
  EAX = (0x1u);
L_128282f7:;
  /* 128282f7 mov esp, ebp */
  ESP = (EBP);
  /* 128282f9 pop ebp */
  EBP = (pop32());
  /* 128282fa ret  */
  ESPCHK(0x12827d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008300 @ 0x12828300 (304 bytes, 79 insns) */
void f_12828300(void) {
  FTRACE(0x12828300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12828300 push ebp */
  push32((uint32_t)(EBP));
  /* 12828301 mov ebp, esp */
  EBP = (ESP);
  /* 12828303 push ecx */
  push32((uint32_t)(ECX));
  /* 12828304 cmp dword ptr [0x1284fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282830b je 0x1282842c */
  if (C.zf) goto L_1282842c;
  /* 12828311 mov eax, dword ptr [0x1284fe18] */
  EAX = (r32((uint32_t)(0x1284fe18)));
  /* 12828316 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12828319 mov ecx, dword ptr [0x1284fe20] */
  ECX = (r32((uint32_t)(0x1284fe20)));
  /* 1282831f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12828322 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828324 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12828327 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1282832c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12828331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828334 push eax */
  push32((uint32_t)(EAX));
  /* 12828335 call dword ptr [0x128502e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e8))), 0x1282833bu);
  /* 1282833b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12828340 mov ecx, dword ptr [0x1284fe18] */
  ECX = (r32((uint32_t)(0x1284fe18)));
  /* 12828346 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12828348 mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 1282834d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12828350 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12828352 mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 12828358 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1282835b mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 12828360 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12828363 mov edx, dword ptr [0x1284fe18] */
  EDX = (r32((uint32_t)(0x1284fe18)));
  /* 12828369 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12828374 mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 12828379 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1282837c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1282837f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12828382 mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 12828387 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1282838a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1282838d mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 12828393 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12828396 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1282839a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282839c jne 0x128283b2 */
  if (!C.zf) goto L_128283b2;
  /* 1282839e mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 128283a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 128283a7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 128283a9 mov ecx, dword ptr [0x1284fe20] */
  ECX = (r32((uint32_t)(0x1284fe20)));
  /* 128283af mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_128283b2:;
  /* 128283b2 mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 128283b8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128283bc jne 0x12828422 */
  if (!C.zf) goto L_12828422;
  /* 128283be cmp dword ptr [0x1284fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128283c5 jle 0x12828422 */
  if ((C.zf||C.sf!=C.of)) goto L_12828422;
  /* 128283c7 mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 128283cc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 128283cf push ecx */
  push32((uint32_t)(ECX));
  /* 128283d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128283d2 mov edx, dword ptr [0x1284fe2c] */
  EDX = (r32((uint32_t)(0x1284fe2c)));
  /* 128283d8 push edx */
  push32((uint32_t)(EDX));
  /* 128283d9 call dword ptr [0x128502e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502e4))), 0x128283dfu);
  /* 128283df mov eax, dword ptr [0x1284fe24] */
  EAX = (r32((uint32_t)(0x1284fe24)));
  /* 128283e4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128283e7 mov ecx, dword ptr [0x1284fe28] */
  ECX = (r32((uint32_t)(0x1284fe28)));
  /* 128283ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128283ef mov edx, dword ptr [0x1284fe20] */
  EDX = (r32((uint32_t)(0x1284fe20)));
  /* 128283f5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128283f8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128283fa push ecx */
  push32((uint32_t)(ECX));
  /* 128283fb mov eax, dword ptr [0x1284fe20] */
  EAX = (r32((uint32_t)(0x1284fe20)));
  /* 12828400 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828403 push eax */
  push32((uint32_t)(EAX));
  /* 12828404 mov ecx, dword ptr [0x1284fe20] */
  ECX = (r32((uint32_t)(0x1284fe20)));
  /* 1282840a push ecx */
  push32((uint32_t)(ECX));
  /* 1282840b call 0x1282aa30 */
  push32(0x12828410u); f_1282aa30();
  /* 12828410 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828413 mov edx, dword ptr [0x1284fe24] */
  EDX = (r32((uint32_t)(0x1284fe24)));
  /* 12828419 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282841c mov dword ptr [0x1284fe24], edx */
  w32((uint32_t)(0x1284fe24), (EDX));
L_12828422:;
  /* 12828422 mov dword ptr [0x1284fe20], 0 */
  w32((uint32_t)(0x1284fe20), (0x0u));
L_1282842c:;
  /* 1282842c mov esp, ebp */
  ESP = (EBP);
  /* 1282842e pop ebp */
  EBP = (pop32());
  /* 1282842f ret  */
  ESPCHK(0x12828300u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x12828430 (1565 bytes, 343 insns) */
void f_12828430(void) {
  FTRACE(0x12828430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12828430 push ebp */
  push32((uint32_t)(EBP));
  /* 12828431 mov ebp, esp */
  EBP = (ESP);
  /* 12828433 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828439 mov eax, dword ptr [0x1284fe24] */
  EAX = (r32((uint32_t)(0x1284fe24)));
  /* 1282843e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12828441 push eax */
  push32((uint32_t)(EAX));
  /* 12828442 mov ecx, dword ptr [0x1284fe28] */
  ECX = (r32((uint32_t)(0x1284fe28)));
  /* 12828448 push ecx */
  push32((uint32_t)(ECX));
  /* 12828449 call dword ptr [0x128502bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502bc))), 0x1282844fu);
  /* 1282844f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12828451 je 0x1282845b */
  if (C.zf) goto L_1282845b;
  /* 12828453 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12828456 jmp 0x12828a49 */
  goto L_12828a49;
L_1282845b:;
  /* 1282845b mov edx, dword ptr [0x1284fe28] */
  EDX = (r32((uint32_t)(0x1284fe28)));
  /* 12828461 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12828467 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12828471 jmp 0x12828482 */
  goto L_12828482;
L_12828473:;
  /* 12828473 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12828479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282847c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12828482:;
  /* 12828482 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12828488 cmp ecx, dword ptr [0x1284fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282848e jge 0x12828a47 */
  if ((C.sf==C.of)) goto L_12828a47;
  /* 12828494 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1282849a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1282849d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 128284a3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 128284a8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 128284ae push ecx */
  push32((uint32_t)(ECX));
  /* 128284af call dword ptr [0x128502bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502bc))), 0x128284b5u);
  /* 128284b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128284b7 je 0x128284c3 */
  if (C.zf) goto L_128284c3;
  /* 128284b9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 128284be jmp 0x12828a49 */
  goto L_12828a49;
L_128284c3:;
  /* 128284c3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 128284c9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 128284cc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 128284d2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 128284d8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128284de mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 128284e1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 128284e7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 128284ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128284ed mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 128284f7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12828501 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12828508 jmp 0x12828513 */
  goto L_12828513;
L_1282850a:;
  /* 1282850a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282850d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828510 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12828513:;
  /* 12828513 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828517 jge 0x12828a0b */
  if ((C.sf==C.of)) goto L_12828a0b;
  /* 1282851d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12828527 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12828531 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1282853b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12828545 jmp 0x12828556 */
  goto L_12828556;
L_12828547:;
  /* 12828547 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1282854d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828550 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12828556:;
  /* 12828556 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282855d jge 0x12828572 */
  if ((C.sf==C.of)) goto L_12828572;
  /* 1282855f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12828565 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12828570 jmp 0x12828547 */
  goto L_12828547;
L_12828572:;
  /* 12828572 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828576 jl 0x128289ad */
  if ((C.sf!=C.of)) goto L_128289ad;
  /* 1282857c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12828581 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12828587 push ecx */
  push32((uint32_t)(ECX));
  /* 12828588 call dword ptr [0x128502bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502bc))), 0x1282858eu);
  /* 1282858e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12828590 je 0x1282859c */
  if (C.zf) goto L_1282859c;
  /* 12828592 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12828597 jmp 0x12828a49 */
  goto L_12828a49;
L_1282859c:;
  /* 1282859c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 128285a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128285a5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 128285af jmp 0x128285c0 */
  goto L_128285c0;
L_128285b1:;
  /* 128285b1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 128285b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128285ba mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_128285c0:;
  /* 128285c0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128285c7 jge 0x12828744 */
  if ((C.sf==C.of)) goto L_12828744;
  /* 128285cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128285d0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128285d3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 128285d9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 128285df add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128285e5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 128285eb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 128285f1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128285f5 jne 0x12828602 */
  if (!C.zf) goto L_12828602;
  /* 128285f7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 128285fd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828600 je 0x1282860c */
  if (C.zf) goto L_1282860c;
L_12828602:;
  /* 12828602 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12828607 jmp 0x12828a49 */
  goto L_12828a49;
L_1282860c:;
  /* 1282860c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12828612 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12828614 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1282861a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12828620 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12828626 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1282862c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1282862f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12828631 je 0x12828669 */
  if (C.zf) goto L_12828669;
  /* 12828633 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12828639 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282863c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12828642 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282864c jle 0x12828658 */
  if ((C.zf||C.sf!=C.of)) goto L_12828658;
  /* 1282864e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12828653 jmp 0x12828a49 */
  goto L_12828a49;
L_12828658:;
  /* 12828658 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1282865e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828661 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12828667 jmp 0x128286ab */
  goto L_128286ab;
L_12828669:;
  /* 12828669 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1282866f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12828672 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828675 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1282867b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828682 jle 0x1282868e */
  if ((C.zf||C.sf!=C.of)) goto L_1282868e;
  /* 12828684 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1282868e:;
  /* 1282868e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12828694 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1282869b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282869e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 128286a4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_128286ab:;
  /* 128286ab cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128286b2 jl 0x128286cd */
  if ((C.sf!=C.of)) goto L_128286cd;
  /* 128286b4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 128286ba and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 128286bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128286bf jne 0x128286cd */
  if (!C.zf) goto L_128286cd;
  /* 128286c1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128286cb jle 0x128286d7 */
  if ((C.zf||C.sf!=C.of)) goto L_128286d7;
L_128286cd:;
  /* 128286cd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 128286d2 jmp 0x12828a49 */
  goto L_12828a49;
L_128286d7:;
  /* 128286d7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 128286dd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128286e3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 128286e6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128286ec je 0x128286f8 */
  if (C.zf) goto L_128286f8;
  /* 128286ee mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 128286f3 jmp 0x12828a49 */
  goto L_12828a49;
L_128286f8:;
  /* 128286f8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 128286fe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828704 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1282870a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12828710 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828716 jb 0x1282860c */
  if (C.cf) goto L_1282860c;
  /* 1282871c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12828722 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828728 je 0x12828734 */
  if (C.zf) goto L_12828734;
  /* 1282872a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1282872f jmp 0x12828a49 */
  goto L_12828a49;
L_12828734:;
  /* 12828734 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12828737 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282873c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282873f jmp 0x128285b1 */
  goto L_128285b1;
L_12828744:;
  /* 12828744 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12828747 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12828749 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282874f je 0x1282875b */
  if (C.zf) goto L_1282875b;
  /* 12828751 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12828756 jmp 0x12828a49 */
  goto L_12828a49;
L_1282875b:;
  /* 1282875b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282875e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12828764 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1282876b jmp 0x12828776 */
  goto L_12828776;
L_1282876d:;
  /* 1282876d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12828770 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828773 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12828776:;
  /* 12828776 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282877a jge 0x128289ad */
  if ((C.sf==C.of)) goto L_128289ad;
  /* 12828780 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1282878a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12828790 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12828796:;
  /* 12828796 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1282879c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1282879f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 128287a5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 128287ab cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128287b1 je 0x128288da */
  if (C.zf) goto L_128288da;
  /* 128287b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128287ba mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 128287c0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128287c7 je 0x128288da */
  if (C.zf) goto L_128288da;
  /* 128287cd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 128287d3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128287d9 jb 0x128287ee */
  if (C.cf) goto L_128287ee;
  /* 128287db mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 128287e1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128287e6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128287ec jb 0x128287f8 */
  if (C.cf) goto L_128287f8;
L_128287ee:;
  /* 128287ee mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 128287f3 jmp 0x12828a49 */
  goto L_12828a49;
L_128287f8:;
  /* 128287f8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 128287fe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12828804 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1282880a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12828810 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828813 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12828816 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12828819 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282881e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12828824:;
  /* 12828824 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12828827 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282882d je 0x1282884e */
  if (C.zf) goto L_1282884e;
  /* 1282882f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12828832 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828838 jne 0x1282883c */
  if (!C.zf) goto L_1282883c;
  /* 1282883a jmp 0x1282884e */
  goto L_1282884e;
L_1282883c:;
  /* 1282883c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282883f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12828841 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12828844 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12828847 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828849 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1282884c jmp 0x12828824 */
  goto L_12828824;
L_1282884e:;
  /* 1282884e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12828851 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828857 jne 0x12828863 */
  if (!C.zf) goto L_12828863;
  /* 12828859 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1282885e jmp 0x12828a49 */
  goto L_12828a49;
L_12828863:;
  /* 12828863 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12828869 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282886b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1282886e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828871 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12828877 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282887e jle 0x1282888a */
  if ((C.zf||C.sf!=C.of)) goto L_1282888a;
  /* 12828880 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1282888a:;
  /* 1282888a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12828890 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828893 je 0x1282889f */
  if (C.zf) goto L_1282889f;
  /* 12828895 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1282889a jmp 0x12828a49 */
  goto L_12828a49;
L_1282889f:;
  /* 1282889f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 128288a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 128288a8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128288ae je 0x128288ba */
  if (C.zf) goto L_128288ba;
  /* 128288b0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 128288b5 jmp 0x12828a49 */
  goto L_12828a49;
L_128288ba:;
  /* 128288ba mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 128288c0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 128288c6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 128288cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128288cf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 128288d5 jmp 0x12828796 */
  goto L_12828796;
L_128288da:;
  /* 128288da cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128288e1 je 0x12828951 */
  if (C.zf) goto L_12828951;
  /* 128288e3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128288e7 jge 0x1282891b */
  if ((C.sf==C.of)) goto L_1282891b;
  /* 128288e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 128288ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128288f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 128288f3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 128288f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 128288fb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12828901 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12828906 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12828909 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1282890b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12828911 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12828913 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12828919 jmp 0x12828951 */
  goto L_12828951;
L_1282891b:;
  /* 1282891b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282891e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828921 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12828926 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12828928 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1282892e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12828930 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12828936 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12828939 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282893c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12828941 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12828943 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12828949 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1282894b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12828951:;
  /* 12828951 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12828957 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1282895a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828960 jne 0x12828974 */
  if (!C.zf) goto L_12828974;
  /* 12828962 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12828965 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1282896b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828972 je 0x1282897e */
  if (C.zf) goto L_1282897e;
L_12828974:;
  /* 12828974 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12828979 jmp 0x12828a49 */
  goto L_12828a49;
L_1282897e:;
  /* 1282897e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12828984 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12828987 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282898d je 0x12828999 */
  if (C.zf) goto L_12828999;
  /* 1282898f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12828994 jmp 0x12828a49 */
  goto L_12828a49;
L_12828999:;
  /* 12828999 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1282899f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128289a2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 128289a8 jmp 0x1282876d */
  goto L_1282876d;
L_128289ad:;
  /* 128289ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128289b0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 128289b6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 128289bc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128289c0 jne 0x128289da */
  if (!C.zf) goto L_128289da;
  /* 128289c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128289c5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 128289cb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 128289d1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128289d8 je 0x128289e1 */
  if (C.zf) goto L_128289e1;
L_128289da:;
  /* 128289da mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 128289df jmp 0x12828a49 */
  goto L_12828a49;
L_128289e1:;
  /* 128289e1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 128289e7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128289ed mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 128289f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128289f6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128289fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 128289fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828a01 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12828a03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12828a06 jmp 0x1282850a */
  goto L_1282850a;
L_12828a0b:;
  /* 12828a0b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12828a11 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12828a17 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828a19 jne 0x12828a2c */
  if (!C.zf) goto L_12828a2c;
  /* 12828a1b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12828a21 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12828a27 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828a2a je 0x12828a33 */
  if (C.zf) goto L_12828a33;
L_12828a2c:;
  /* 12828a2c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12828a31 jmp 0x12828a49 */
  goto L_12828a49;
L_12828a33:;
  /* 12828a33 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12828a39 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828a3c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12828a42 jmp 0x12828473 */
  goto L_12828473;
L_12828a47:;
  /* 12828a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12828a49:;
  /* 12828a49 mov esp, ebp */
  ESP = (EBP);
  /* 12828a4b pop ebp */
  EBP = (pop32());
  /* 12828a4c ret  */
  ESPCHK(0x12828430u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a50 @ 0x12828a50 (250 bytes, 92 insns) */
void f_12828a50(void) {
  FTRACE(0x12828a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12828a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12828a51 mov ebp, esp */
  EBP = (ESP);
  /* 12828a53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828a56 push ebx */
  push32((uint32_t)(EBX));
  /* 12828a57 push esi */
  push32((uint32_t)(ESI));
  /* 12828a58 push edi */
  push32((uint32_t)(EDI));
  /* 12828a59 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12828a5c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12828a5f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12828a62 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12828a65:;
  /* 12828a65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828a69 jne 0x12828a89 */
  if (!C.zf) goto L_12828a89;
  /* 12828a6b push 0x12849dd8 */
  push32((uint32_t)(0x12849dd8u));
  /* 12828a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12828a72 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12828a74 push 0x12849dcc */
  push32((uint32_t)(0x12849dccu));
  /* 12828a79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12828a7b call 0x12821c00 */
  push32(0x12828a80u); f_12821c00();
  /* 12828a80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828a86 jne 0x12828a89 */
  if (!C.zf) goto L_12828a89;
  /* 12828a88 int3  */
  x86_unimpl("int3 @ 0x12828a88");
L_12828a89:;
  /* 12828a89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12828a8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12828a8d jne 0x12828a65 */
  if (!C.zf) goto L_12828a65;
L_12828a8f:;
  /* 12828a8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828a93 jne 0x12828ab3 */
  if (!C.zf) goto L_12828ab3;
  /* 12828a95 push 0x12849dbc */
  push32((uint32_t)(0x12849dbcu));
  /* 12828a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12828a9c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12828a9e push 0x12849dcc */
  push32((uint32_t)(0x12849dccu));
  /* 12828aa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12828aa5 call 0x12821c00 */
  push32(0x12828aaau); f_12821c00();
  /* 12828aaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828aad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828ab0 jne 0x12828ab3 */
  if (!C.zf) goto L_12828ab3;
  /* 12828ab2 int3  */
  x86_unimpl("int3 @ 0x12828ab2");
L_12828ab3:;
  /* 12828ab3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12828ab7 jne 0x12828a8f */
  if (!C.zf) goto L_12828a8f;
  /* 12828ab9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828abc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12828ac3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828ac9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12828acc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828acf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828ad2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12828ad4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828ad7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12828ade mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12828ae1 push ecx */
  push32((uint32_t)(ECX));
  /* 12828ae2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12828ae5 push edx */
  push32((uint32_t)(EDX));
  /* 12828ae6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828ae9 push eax */
  push32((uint32_t)(EAX));
  /* 12828aea call 0x12829ad0 */
  push32(0x12828aefu); f_12829ad0();
  /* 12828aef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828af2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12828af5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828af8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12828afb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828afe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828b01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12828b04 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828b07 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828b0b jl 0x12828b2f */
  if ((C.sf!=C.of)) goto L_12828b2f;
  /* 12828b0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828b10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12828b12 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12828b15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12828b17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12828b1d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12828b20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828b23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12828b25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828b28 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828b2b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12828b2d jmp 0x12828b40 */
  goto L_12828b40;
L_12828b2f:;
  /* 12828b2f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828b32 push edx */
  push32((uint32_t)(EDX));
  /* 12828b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12828b35 call 0x12829850 */
  push32(0x12828b3au); f_12829850();
  /* 12828b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828b3d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12828b40:;
  /* 12828b40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12828b43 pop edi */
  EDI = (pop32());
  /* 12828b44 pop esi */
  ESI = (pop32());
  /* 12828b45 pop ebx */
  EBX = (pop32());
  /* 12828b46 mov esp, ebp */
  ESP = (EBP);
  /* 12828b48 pop ebp */
  EBP = (pop32());
  /* 12828b49 ret  */
  ESPCHK(0x12828a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b50 @ 0x12828b50 (183 bytes, 58 insns) */
void f_12828b50(void) {
  FTRACE(0x12828b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12828b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12828b51 mov ebp, esp */
  EBP = (ESP);
  /* 12828b53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828b59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828b5c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828b61 ja 0x12828b7a */
  if ((!C.cf&&!C.zf)) goto L_12828b7a;
  /* 12828b63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828b66 mov edx, dword ptr [0x1284cc98] */
  EDX = (r32((uint32_t)(0x1284cc98)));
  /* 12828b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828b6e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12828b72 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12828b75 jmp 0x12828c03 */
  goto L_12828c03;
L_12828b7a:;
  /* 12828b7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828b7d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12828b80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12828b86 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12828b8c mov edx, dword ptr [0x1284cc98] */
  EDX = (r32((uint32_t)(0x1284cc98)));
  /* 12828b92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828b94 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12828b98 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12828b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12828b9f je 0x12828bc3 */
  if (C.zf) goto L_12828bc3;
  /* 12828ba1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828ba4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12828ba7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12828bad mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12828bb0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12828bb3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12828bb6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12828bba mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12828bc1 jmp 0x12828bd4 */
  goto L_12828bd4;
L_12828bc3:;
  /* 12828bc3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12828bc6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12828bc9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12828bcd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12828bd4:;
  /* 12828bd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12828bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12828bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12828bda lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12828bdd push ecx */
  push32((uint32_t)(ECX));
  /* 12828bde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12828be1 push edx */
  push32((uint32_t)(EDX));
  /* 12828be2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12828be5 push eax */
  push32((uint32_t)(EAX));
  /* 12828be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12828be8 call 0x1282ad70 */
  push32(0x12828bedu); f_1282ad70();
  /* 12828bed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12828bf2 jne 0x12828bf8 */
  if (!C.zf) goto L_12828bf8;
  /* 12828bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828bf6 jmp 0x12828c03 */
  goto L_12828c03;
L_12828bf8:;
  /* 12828bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828bfb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12828c00 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12828c03:;
  /* 12828c03 mov esp, ebp */
  ESP = (EBP);
  /* 12828c05 pop ebp */
  EBP = (pop32());
  /* 12828c06 ret  */
  ESPCHK(0x12828b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c10 @ 0x12828c10 (836 bytes, 238 insns) */
void f_12828c10(void) {
  FTRACE(0x12828c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12828c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12828c11 mov ebp, esp */
  EBP = (ESP);
  /* 12828c13 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828c16 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12828c18 call 0x12826540 */
  push32(0x12828c1du); f_12826540();
  /* 12828c1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828c20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828c23 push eax */
  push32((uint32_t)(EAX));
  /* 12828c24 call 0x12828f60 */
  push32(0x12828c29u); f_12828f60();
  /* 12828c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828c2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12828c2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828c32 cmp ecx, dword ptr [0x1284fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828c38 jne 0x12828c4b */
  if (!C.zf) goto L_12828c4b;
  /* 12828c3a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12828c3c call 0x128265e0 */
  push32(0x12828c41u); f_128265e0();
  /* 12828c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828c46 jmp 0x12828f50 */
  goto L_12828f50;
L_12828c4b:;
  /* 12828c4b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828c4f jne 0x12828c6c */
  if (!C.zf) goto L_12828c6c;
  /* 12828c51 call 0x12829040 */
  push32(0x12828c56u); f_12829040();
  /* 12828c56 call 0x128290c0 */
  push32(0x12828c5bu); f_128290c0();
  /* 12828c5b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12828c5d call 0x128265e0 */
  push32(0x12828c62u); f_128265e0();
  /* 12828c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828c65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828c67 jmp 0x12828f50 */
  goto L_12828f50;
L_12828c6c:;
  /* 12828c6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12828c73 jmp 0x12828c7e */
  goto L_12828c7e;
L_12828c75:;
  /* 12828c75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828c78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828c7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12828c7e:;
  /* 12828c7e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828c82 jae 0x12828dcf */
  if (!C.cf) goto L_12828dcf;
  /* 12828c88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828c8b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12828c8e mov ecx, dword ptr [eax + 0x1284ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x1284ceb8)));
  /* 12828c94 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828c97 jne 0x12828dca */
  if (!C.zf) goto L_12828dca;
  /* 12828c9d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12828ca4 jmp 0x12828caf */
  goto L_12828caf;
L_12828ca6:;
  /* 12828ca6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828ca9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828cac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12828caf:;
  /* 12828caf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828cb6 jae 0x12828cc4 */
  if (!C.cf) goto L_12828cc4;
  /* 12828cb8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828cbb mov byte ptr [eax + 0x1284fd00], 0 */
  w8((uint32_t)(EAX + 0x1284fd00), (0x0u));
  /* 12828cc2 jmp 0x12828ca6 */
  goto L_12828ca6;
L_12828cc4:;
  /* 12828cc4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12828ccb jmp 0x12828cd6 */
  goto L_12828cd6;
L_12828ccd:;
  /* 12828ccd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12828cd0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828cd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12828cd6:;
  /* 12828cd6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828cda jae 0x12828d57 */
  if (!C.cf) goto L_12828d57;
  /* 12828cdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828cdf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12828ce2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12828ce5 lea ecx, [edx + eax*8 + 0x1284cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1284cec8));
  /* 12828cec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12828cef jmp 0x12828cfa */
  goto L_12828cfa;
L_12828cf1:;
  /* 12828cf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12828cf4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828cf7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12828cfa:;
  /* 12828cfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12828cfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12828cff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12828d01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12828d03 je 0x12828d52 */
  if (C.zf) goto L_12828d52;
  /* 12828d05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12828d08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828d0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12828d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12828d0f je 0x12828d52 */
  if (C.zf) goto L_12828d52;
  /* 12828d11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12828d14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12828d16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12828d18 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12828d1b jmp 0x12828d26 */
  goto L_12828d26;
L_12828d1d:;
  /* 12828d1d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828d20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828d23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12828d26:;
  /* 12828d26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12828d29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12828d2b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12828d2e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828d31 ja 0x12828d50 */
  if ((!C.cf&&!C.zf)) goto L_12828d50;
  /* 12828d33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828d36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12828d39 mov dl, byte ptr [eax + 0x1284fd01] */
  DL = (r8((uint32_t)(EAX + 0x1284fd01)));
  /* 12828d3f or dl, byte ptr [ecx + 0x1284ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1284ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 12828d45 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828d48 mov byte ptr [eax + 0x1284fd01], dl */
  w8((uint32_t)(EAX + 0x1284fd01), (DL));
  /* 12828d4e jmp 0x12828d1d */
  goto L_12828d1d;
L_12828d50:;
  /* 12828d50 jmp 0x12828cf1 */
  goto L_12828cf1;
L_12828d52:;
  /* 12828d52 jmp 0x12828ccd */
  goto L_12828ccd;
L_12828d57:;
  /* 12828d57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828d5a mov dword ptr [0x1284fb64], ecx */
  w32((uint32_t)(0x1284fb64), (ECX));
  /* 12828d60 mov dword ptr [0x1284fbec], 1 */
  w32((uint32_t)(0x1284fbec), (0x1u));
  /* 12828d6a mov edx, dword ptr [0x1284fb64] */
  EDX = (r32((uint32_t)(0x1284fb64)));
  /* 12828d70 push edx */
  push32((uint32_t)(EDX));
  /* 12828d71 call 0x12828fc0 */
  push32(0x12828d76u); f_12828fc0();
  /* 12828d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828d79 mov dword ptr [0x1284fe04], eax */
  w32((uint32_t)(0x1284fe04), (EAX));
  /* 12828d7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12828d85 jmp 0x12828d90 */
  goto L_12828d90;
L_12828d87:;
  /* 12828d87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12828d8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828d8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12828d90:;
  /* 12828d90 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828d94 jae 0x12828db4 */
  if (!C.cf) goto L_12828db4;
  /* 12828d96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828d99 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12828d9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12828d9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12828da2 mov cx, word ptr [ecx + eax*2 + 0x1284cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1284cebc)));
  /* 12828daa mov word ptr [edx*2 + 0x1284fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x1284fbe0), (CX));
  /* 12828db2 jmp 0x12828d87 */
  goto L_12828d87;
L_12828db4:;
  /* 12828db4 call 0x128290c0 */
  push32(0x12828db9u); f_128290c0();
  /* 12828db9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12828dbb call 0x128265e0 */
  push32(0x12828dc0u); f_128265e0();
  /* 12828dc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828dc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828dc5 jmp 0x12828f50 */
  goto L_12828f50;
L_12828dca:;
  /* 12828dca jmp 0x12828c75 */
  goto L_12828c75;
L_12828dcf:;
  /* 12828dcf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12828dd2 push edx */
  push32((uint32_t)(EDX));
  /* 12828dd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828dd6 push eax */
  push32((uint32_t)(EAX));
  /* 12828dd7 call dword ptr [0x12850310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850310))), 0x12828dddu);
  /* 12828ddd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828de0 jne 0x12828f22 */
  if (!C.zf) goto L_12828f22;
  /* 12828de6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12828ded jmp 0x12828df8 */
  goto L_12828df8;
L_12828def:;
  /* 12828def mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828df2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828df5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12828df8:;
  /* 12828df8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828dff jae 0x12828e0d */
  if (!C.cf) goto L_12828e0d;
  /* 12828e01 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828e04 mov byte ptr [edx + 0x1284fd00], 0 */
  w8((uint32_t)(EDX + 0x1284fd00), (0x0u));
  /* 12828e0b jmp 0x12828def */
  goto L_12828def;
L_12828e0d:;
  /* 12828e0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828e10 mov dword ptr [0x1284fb64], eax */
  w32((uint32_t)(0x1284fb64), (EAX));
  /* 12828e15 mov dword ptr [0x1284fe04], 0 */
  w32((uint32_t)(0x1284fe04), (0x0u));
  /* 12828e1f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828e23 jbe 0x12828ede */
  if ((C.cf||C.zf)) goto L_12828ede;
  /* 12828e29 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12828e2c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12828e2f jmp 0x12828e3a */
  goto L_12828e3a;
L_12828e31:;
  /* 12828e31 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12828e34 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828e37 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12828e3a:;
  /* 12828e3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12828e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12828e3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12828e41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12828e43 je 0x12828e8c */
  if (C.zf) goto L_12828e8c;
  /* 12828e45 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12828e48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828e4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12828e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12828e4f je 0x12828e8c */
  if (C.zf) goto L_12828e8c;
  /* 12828e51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12828e54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12828e56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12828e58 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12828e5b jmp 0x12828e66 */
  goto L_12828e66;
L_12828e5d:;
  /* 12828e5d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828e60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828e63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12828e66:;
  /* 12828e66 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12828e69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12828e6b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12828e6e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828e71 ja 0x12828e8a */
  if ((!C.cf&&!C.zf)) goto L_12828e8a;
  /* 12828e73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828e76 mov cl, byte ptr [eax + 0x1284fd01] */
  CL = (r8((uint32_t)(EAX + 0x1284fd01)));
  /* 12828e7c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12828e7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828e82 mov byte ptr [edx + 0x1284fd01], cl */
  w8((uint32_t)(EDX + 0x1284fd01), (CL));
  /* 12828e88 jmp 0x12828e5d */
  goto L_12828e5d;
L_12828e8a:;
  /* 12828e8a jmp 0x12828e31 */
  goto L_12828e31;
L_12828e8c:;
  /* 12828e8c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12828e93 jmp 0x12828e9e */
  goto L_12828e9e;
L_12828e95:;
  /* 12828e95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828e98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828e9b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12828e9e:;
  /* 12828e9e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828ea5 jae 0x12828ebe */
  if (!C.cf) goto L_12828ebe;
  /* 12828ea7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828eaa mov dl, byte ptr [ecx + 0x1284fd01] */
  DL = (r8((uint32_t)(ECX + 0x1284fd01)));
  /* 12828eb0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12828eb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12828eb6 mov byte ptr [eax + 0x1284fd01], dl */
  w8((uint32_t)(EAX + 0x1284fd01), (DL));
  /* 12828ebc jmp 0x12828e95 */
  goto L_12828e95;
L_12828ebe:;
  /* 12828ebe mov ecx, dword ptr [0x1284fb64] */
  ECX = (r32((uint32_t)(0x1284fb64)));
  /* 12828ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 12828ec5 call 0x12828fc0 */
  push32(0x12828ecau); f_12828fc0();
  /* 12828eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828ecd mov dword ptr [0x1284fe04], eax */
  w32((uint32_t)(0x1284fe04), (EAX));
  /* 12828ed2 mov dword ptr [0x1284fbec], 1 */
  w32((uint32_t)(0x1284fbec), (0x1u));
  /* 12828edc jmp 0x12828ee8 */
  goto L_12828ee8;
L_12828ede:;
  /* 12828ede mov dword ptr [0x1284fbec], 0 */
  w32((uint32_t)(0x1284fbec), (0x0u));
L_12828ee8:;
  /* 12828ee8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12828eef jmp 0x12828efa */
  goto L_12828efa;
L_12828ef1:;
  /* 12828ef1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12828ef4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12828ef7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12828efa:;
  /* 12828efa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828efe jae 0x12828f0f */
  if (!C.cf) goto L_12828f0f;
  /* 12828f00 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12828f03 mov word ptr [eax*2 + 0x1284fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1284fbe0), (0x0u));
  /* 12828f0d jmp 0x12828ef1 */
  goto L_12828ef1;
L_12828f0f:;
  /* 12828f0f call 0x128290c0 */
  push32(0x12828f14u); f_128290c0();
  /* 12828f14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12828f16 call 0x128265e0 */
  push32(0x12828f1bu); f_128265e0();
  /* 12828f1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828f1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828f20 jmp 0x12828f50 */
  goto L_12828f50;
L_12828f22:;
  /* 12828f22 cmp dword ptr [0x1284e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828f29 je 0x12828f43 */
  if (C.zf) goto L_12828f43;
  /* 12828f2b call 0x12829040 */
  push32(0x12828f30u); f_12829040();
  /* 12828f30 call 0x128290c0 */
  push32(0x12828f35u); f_128290c0();
  /* 12828f35 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12828f37 call 0x128265e0 */
  push32(0x12828f3cu); f_128265e0();
  /* 12828f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12828f41 jmp 0x12828f50 */
  goto L_12828f50;
L_12828f43:;
  /* 12828f43 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12828f45 call 0x128265e0 */
  push32(0x12828f4au); f_128265e0();
  /* 12828f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12828f4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12828f50:;
  /* 12828f50 mov esp, ebp */
  ESP = (EBP);
  /* 12828f52 pop ebp */
  EBP = (pop32());
  /* 12828f53 ret  */
  ESPCHK(0x12828c10u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12828f60 (89 bytes, 21 insns) */
void f_12828f60(void) {
  FTRACE(0x12828f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12828f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12828f61 mov ebp, esp */
  EBP = (ESP);
  /* 12828f63 mov dword ptr [0x1284e678], 0 */
  w32((uint32_t)(0x1284e678), (0x0u));
  /* 12828f6d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828f71 jne 0x12828f85 */
  if (!C.zf) goto L_12828f85;
  /* 12828f73 mov dword ptr [0x1284e678], 1 */
  w32((uint32_t)(0x1284e678), (0x1u));
  /* 12828f7d call dword ptr [0x12850318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850318))), 0x12828f83u);
  /* 12828f83 jmp 0x12828fb7 */
  goto L_12828fb7;
L_12828f85:;
  /* 12828f85 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828f89 jne 0x12828f9d */
  if (!C.zf) goto L_12828f9d;
  /* 12828f8b mov dword ptr [0x1284e678], 1 */
  w32((uint32_t)(0x1284e678), (0x1u));
  /* 12828f95 call dword ptr [0x12850314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850314))), 0x12828f9bu);
  /* 12828f9b jmp 0x12828fb7 */
  goto L_12828fb7;
L_12828f9d:;
  /* 12828f9d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828fa1 jne 0x12828fb4 */
  if (!C.zf) goto L_12828fb4;
  /* 12828fa3 mov dword ptr [0x1284e678], 1 */
  w32((uint32_t)(0x1284e678), (0x1u));
  /* 12828fad mov eax, dword ptr [0x1284e698] */
  EAX = (r32((uint32_t)(0x1284e698)));
  /* 12828fb2 jmp 0x12828fb7 */
  goto L_12828fb7;
L_12828fb4:;
  /* 12828fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12828fb7:;
  /* 12828fb7 pop ebp */
  EBP = (pop32());
  /* 12828fb8 ret  */
  ESPCHK(0x12828f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fc0 @ 0x12828fc0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12828fc0(void) {
  FTRACE(0x12828fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12828fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12828fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12828fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12828fc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12828fc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12828fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828fcd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12828fd3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12828fd6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12828fda ja 0x1282900a */
  if ((!C.cf&&!C.zf)) goto L_1282900a;
  /* 12828fdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12828fdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12828fe1 mov dl, byte ptr [eax + 0x12829024] */
  DL = (r8((uint32_t)(EAX + 0x12829024)));
  /* 12828fe7 jmp dword ptr [edx*4 + 0x12829010] */
  switch (EDX) {
    case 0: goto L_12828fee;
    case 1: goto L_12828ff5;
    case 2: goto L_12828ffc;
    case 3: goto L_12829003;
    case 4: goto L_1282900a;
    default: x86_unimpl("switch@0x12828fe7 out of table"); return;
  }
L_12828fee:;
  /* 12828fee mov eax, 0x411 */
  EAX = (0x411u);
  /* 12828ff3 jmp 0x1282900c */
  goto L_1282900c;
L_12828ff5:;
  /* 12828ff5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12828ffa jmp 0x1282900c */
  goto L_1282900c;
L_12828ffc:;
  /* 12828ffc mov eax, 0x412 */
  EAX = (0x412u);
  /* 12829001 jmp 0x1282900c */
  goto L_1282900c;
L_12829003:;
  /* 12829003 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12829008 jmp 0x1282900c */
  goto L_1282900c;
L_1282900a:;
  /* 1282900a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282900c:;
  /* 1282900c mov esp, ebp */
  ESP = (EBP);
  /* 1282900e pop ebp */
  EBP = (pop32());
  /* 1282900f ret  */
  ESPCHK(0x12828fc0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12829040 (116 bytes, 29 insns) */
void f_12829040(void) {
  FTRACE(0x12829040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12829040 push ebp */
  push32((uint32_t)(EBP));
  /* 12829041 mov ebp, esp */
  EBP = (ESP);
  /* 12829043 push ecx */
  push32((uint32_t)(ECX));
  /* 12829044 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282904b jmp 0x12829056 */
  goto L_12829056;
L_1282904d:;
  /* 1282904d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829050 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12829053 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12829056:;
  /* 12829056 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282905d jge 0x1282906b */
  if ((C.sf==C.of)) goto L_1282906b;
  /* 1282905f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829062 mov byte ptr [ecx + 0x1284fd00], 0 */
  w8((uint32_t)(ECX + 0x1284fd00), (0x0u));
  /* 12829069 jmp 0x1282904d */
  goto L_1282904d;
L_1282906b:;
  /* 1282906b mov dword ptr [0x1284fb64], 0 */
  w32((uint32_t)(0x1284fb64), (0x0u));
  /* 12829075 mov dword ptr [0x1284fbec], 0 */
  w32((uint32_t)(0x1284fbec), (0x0u));
  /* 1282907f mov dword ptr [0x1284fe04], 0 */
  w32((uint32_t)(0x1284fe04), (0x0u));
  /* 12829089 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12829090 jmp 0x1282909b */
  goto L_1282909b;
L_12829092:;
  /* 12829092 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829095 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12829098 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1282909b:;
  /* 1282909b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282909f jge 0x128290b0 */
  if ((C.sf==C.of)) goto L_128290b0;
  /* 128290a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128290a4 mov word ptr [eax*2 + 0x1284fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1284fbe0), (0x0u));
  /* 128290ae jmp 0x12829092 */
  goto L_12829092;
L_128290b0:;
  /* 128290b0 mov esp, ebp */
  ESP = (EBP);
  /* 128290b2 pop ebp */
  EBP = (pop32());
  /* 128290b3 ret  */
  ESPCHK(0x12829040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c0 @ 0x128290c0 (770 bytes, 175 insns) */
void f_128290c0(void) {
  FTRACE(0x128290c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128290c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128290c1 mov ebp, esp */
  EBP = (ESP);
  /* 128290c3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128290c9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 128290cf push eax */
  push32((uint32_t)(EAX));
  /* 128290d0 mov ecx, dword ptr [0x1284fb64] */
  ECX = (r32((uint32_t)(0x1284fb64)));
  /* 128290d6 push ecx */
  push32((uint32_t)(ECX));
  /* 128290d7 call dword ptr [0x12850310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850310))), 0x128290ddu);
  /* 128290dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128290e0 jne 0x128292f9 */
  if (!C.zf) goto L_128292f9;
  /* 128290e6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 128290f0 jmp 0x12829101 */
  goto L_12829101;
L_128290f2:;
  /* 128290f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 128290f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128290fb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12829101:;
  /* 12829101 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282910b jae 0x12829122 */
  if (!C.cf) goto L_12829122;
  /* 1282910d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12829113 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12829119 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12829120 jmp 0x128290f2 */
  goto L_128290f2;
L_12829122:;
  /* 12829122 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12829129 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1282912f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12829132 jmp 0x1282913d */
  goto L_1282913d;
L_12829134:;
  /* 12829134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829137 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282913a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282913d:;
  /* 1282913d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829140 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12829142 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12829144 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12829146 je 0x12829188 */
  if (C.zf) goto L_12829188;
  /* 12829148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282914b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282914d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1282914f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12829155 jmp 0x12829166 */
  goto L_12829166;
L_12829157:;
  /* 12829157 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1282915d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12829160 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12829166:;
  /* 12829166 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829169 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282916b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1282916e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829174 ja 0x12829186 */
  if ((!C.cf&&!C.zf)) goto L_12829186;
  /* 12829176 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1282917c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12829184 jmp 0x12829157 */
  goto L_12829157;
L_12829186:;
  /* 12829186 jmp 0x12829134 */
  goto L_12829134;
L_12829188:;
  /* 12829188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282918a mov eax, dword ptr [0x1284fe04] */
  EAX = (r32((uint32_t)(0x1284fe04)));
  /* 1282918f push eax */
  push32((uint32_t)(EAX));
  /* 12829190 mov ecx, dword ptr [0x1284fb64] */
  ECX = (r32((uint32_t)(0x1284fb64)));
  /* 12829196 push ecx */
  push32((uint32_t)(ECX));
  /* 12829197 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1282919d push edx */
  push32((uint32_t)(EDX));
  /* 1282919e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 128291a3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 128291a9 push eax */
  push32((uint32_t)(EAX));
  /* 128291aa push 1 */
  push32((uint32_t)(0x1u));
  /* 128291ac call 0x1282ad70 */
  push32(0x128291b1u); f_1282ad70();
  /* 128291b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128291b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128291b6 mov ecx, dword ptr [0x1284fb64] */
  ECX = (r32((uint32_t)(0x1284fb64)));
  /* 128291bc push ecx */
  push32((uint32_t)(ECX));
  /* 128291bd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 128291c2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 128291c8 push edx */
  push32((uint32_t)(EDX));
  /* 128291c9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 128291ce lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 128291d4 push eax */
  push32((uint32_t)(EAX));
  /* 128291d5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 128291da mov ecx, dword ptr [0x1284fe04] */
  ECX = (r32((uint32_t)(0x1284fe04)));
  /* 128291e0 push ecx */
  push32((uint32_t)(ECX));
  /* 128291e1 call 0x1282af30 */
  push32(0x128291e6u); f_1282af30();
  /* 128291e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128291e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 128291eb mov edx, dword ptr [0x1284fb64] */
  EDX = (r32((uint32_t)(0x1284fb64)));
  /* 128291f1 push edx */
  push32((uint32_t)(EDX));
  /* 128291f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 128291f7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 128291fd push eax */
  push32((uint32_t)(EAX));
  /* 128291fe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12829203 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12829209 push ecx */
  push32((uint32_t)(ECX));
  /* 1282920a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1282920f mov edx, dword ptr [0x1284fe04] */
  EDX = (r32((uint32_t)(0x1284fe04)));
  /* 12829215 push edx */
  push32((uint32_t)(EDX));
  /* 12829216 call 0x1282af30 */
  push32(0x1282921bu); f_1282af30();
  /* 1282921b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282921e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12829228 jmp 0x12829239 */
  goto L_12829239;
L_1282922a:;
  /* 1282922a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12829230 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12829233 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12829239:;
  /* 12829239 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829243 jae 0x128292f4 */
  if (!C.cf) goto L_128292f4;
  /* 12829249 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1282924f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12829251 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12829259 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1282925c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282925e je 0x12829296 */
  if (C.zf) goto L_12829296;
  /* 12829260 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12829266 mov cl, byte ptr [eax + 0x1284fd01] */
  CL = (r8((uint32_t)(EAX + 0x1284fd01)));
  /* 1282926c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1282926f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12829275 mov byte ptr [edx + 0x1284fd01], cl */
  w8((uint32_t)(EDX + 0x1284fd01), (CL));
  /* 1282927b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12829281 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12829287 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1282928e mov byte ptr [eax + 0x1284fc00], dl */
  w8((uint32_t)(EAX + 0x1284fc00), (DL));
  /* 12829294 jmp 0x128292ef */
  goto L_128292ef;
L_12829296:;
  /* 12829296 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1282929c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282929e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 128292a6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 128292a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128292ab je 0x128292e2 */
  if (C.zf) goto L_128292e2;
  /* 128292ad mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 128292b3 mov al, byte ptr [edx + 0x1284fd01] */
  AL = (r8((uint32_t)(EDX + 0x1284fd01)));
  /* 128292b9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 128292bb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 128292c1 mov byte ptr [ecx + 0x1284fd01], al */
  w8((uint32_t)(ECX + 0x1284fd01), (AL));
  /* 128292c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 128292cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 128292d3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 128292da mov byte ptr [edx + 0x1284fc00], cl */
  w8((uint32_t)(EDX + 0x1284fc00), (CL));
  /* 128292e0 jmp 0x128292ef */
  goto L_128292ef;
L_128292e2:;
  /* 128292e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 128292e8 mov byte ptr [edx + 0x1284fc00], 0 */
  w8((uint32_t)(EDX + 0x1284fc00), (0x0u));
L_128292ef:;
  /* 128292ef jmp 0x1282922a */
  goto L_1282922a;
L_128292f4:;
  /* 128292f4 jmp 0x128293be */
  goto L_128293be;
L_128292f9:;
  /* 128292f9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12829303 jmp 0x12829314 */
  goto L_12829314;
L_12829305:;
  /* 12829305 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1282930b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282930e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12829314:;
  /* 12829314 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282931e jae 0x128293be */
  if (!C.cf) goto L_128293be;
  /* 12829324 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282932b jb 0x12829368 */
  if (C.cf) goto L_12829368;
  /* 1282932d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829334 ja 0x12829368 */
  if ((!C.cf&&!C.zf)) goto L_12829368;
  /* 12829336 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1282933c mov dl, byte ptr [ecx + 0x1284fd01] */
  DL = (r8((uint32_t)(ECX + 0x1284fd01)));
  /* 12829342 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12829345 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1282934b mov byte ptr [eax + 0x1284fd01], dl */
  w8((uint32_t)(EAX + 0x1284fd01), (DL));
  /* 12829351 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12829357 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282935a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12829360 mov byte ptr [edx + 0x1284fc00], cl */
  w8((uint32_t)(EDX + 0x1284fc00), (CL));
  /* 12829366 jmp 0x128293b9 */
  goto L_128293b9;
L_12829368:;
  /* 12829368 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282936f jb 0x128293ac */
  if (C.cf) goto L_128293ac;
  /* 12829371 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829378 ja 0x128293ac */
  if ((!C.cf&&!C.zf)) goto L_128293ac;
  /* 1282937a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12829380 mov cl, byte ptr [eax + 0x1284fd01] */
  CL = (r8((uint32_t)(EAX + 0x1284fd01)));
  /* 12829386 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12829389 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1282938f mov byte ptr [edx + 0x1284fd01], cl */
  w8((uint32_t)(EDX + 0x1284fd01), (CL));
  /* 12829395 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1282939b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282939e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 128293a4 mov byte ptr [ecx + 0x1284fc00], al */
  w8((uint32_t)(ECX + 0x1284fc00), (AL));
  /* 128293aa jmp 0x128293b9 */
  goto L_128293b9;
L_128293ac:;
  /* 128293ac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 128293b2 mov byte ptr [edx + 0x1284fc00], 0 */
  w8((uint32_t)(EDX + 0x1284fc00), (0x0u));
L_128293b9:;
  /* 128293b9 jmp 0x12829305 */
  goto L_12829305;
L_128293be:;
  /* 128293be mov esp, ebp */
  ESP = (EBP);
  /* 128293c0 pop ebp */
  EBP = (pop32());
  /* 128293c1 ret  */
  ESPCHK(0x128290c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x128293d0 (23 bytes, 9 insns) */
void f_128293d0(void) {
  FTRACE(0x128293d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128293d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128293d1 mov ebp, esp */
  EBP = (ESP);
  /* 128293d3 cmp dword ptr [0x1284fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128293da je 0x128293e3 */
  if (C.zf) goto L_128293e3;
  /* 128293dc mov eax, dword ptr [0x1284fb64] */
  EAX = (r32((uint32_t)(0x1284fb64)));
  /* 128293e1 jmp 0x128293e5 */
  goto L_128293e5;
L_128293e3:;
  /* 128293e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128293e5:;
  /* 128293e5 pop ebp */
  EBP = (pop32());
  /* 128293e6 ret  */
  ESPCHK(0x128293d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093f0 @ 0x128293f0 (34 bytes, 10 insns) */
void f_128293f0(void) {
  FTRACE(0x128293f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128293f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128293f1 mov ebp, esp */
  EBP = (ESP);
  /* 128293f3 cmp dword ptr [0x1284ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128293fa jne 0x12829410 */
  if (!C.zf) goto L_12829410;
  /* 128293fc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 128293fe call 0x12828c10 */
  push32(0x12829403u); f_12828c10();
  /* 12829403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829406 mov dword ptr [0x1284ffb0], 1 */
  w32((uint32_t)(0x1284ffb0), (0x1u));
L_12829410:;
  /* 12829410 pop ebp */
  EBP = (pop32());
  /* 12829411 ret  */
  ESPCHK(0x128293f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x12829420 (664 bytes, 264 insns) [15 switch table(s)] */
void f_12829420(void) {
  FTRACE(0x12829420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12829420 push ebp */
  push32((uint32_t)(EBP));
  /* 12829421 mov ebp, esp */
  EBP = (ESP);
  /* 12829423 push edi */
  push32((uint32_t)(EDI));
  /* 12829424 push esi */
  push32((uint32_t)(ESI));
  /* 12829425 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12829428 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282942b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1282942e mov eax, ecx */
  EAX = (ECX);
  /* 12829430 mov edx, ecx */
  EDX = (ECX);
  /* 12829432 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12829434 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829436 jbe 0x12829440 */
  if ((C.cf||C.zf)) goto L_12829440;
  /* 12829438 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282943a jb 0x128295b8 */
  if (C.cf) goto L_128295b8;
L_12829440:;
  /* 12829440 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12829446 jne 0x1282945c */
  if (!C.zf) goto L_1282945c;
  /* 12829448 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282944b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1282944e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829451 jb 0x1282947c */
  if (C.cf) goto L_1282947c;
  /* 12829453 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12829455 jmp dword ptr [edx*4 + 0x12829568] */
  switch (EDX) {
    case 0: goto L_12829578;
    case 1: goto L_12829580;
    case 2: goto L_1282958c;
    case 3: goto L_128295a0;
    default: x86_unimpl("switch@0x12829455 out of table"); return;
  }
L_1282945c:;
  /* 1282945c mov eax, edi */
  EAX = (EDI);
  /* 1282945e mov edx, 3 */
  EDX = (0x3u);
  /* 12829463 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12829466 jb 0x12829474 */
  if (C.cf) goto L_12829474;
  /* 12829468 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1282946b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282946d jmp dword ptr [eax*4 + 0x12829480] */
  switch (EAX) {
    case 1: goto L_12829490;
    case 2: goto L_128294bc;
    case 3: goto L_128294e0;
    default: x86_unimpl("switch@0x1282946d out of table"); return;
  }
L_12829474:;
  /* 12829474 jmp dword ptr [ecx*4 + 0x12829578] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12829578)))); return;
  /* 1282947b nop  */
  /* nop */
L_1282947c:;
  /* 1282947c jmp dword ptr [ecx*4 + 0x128294fc] */
  switch (ECX) {
    case 0: goto L_1282955f;
    case 1: goto L_1282954c;
    case 2: goto L_12829544;
    case 3: goto L_1282953c;
    case 4: goto L_12829534;
    case 5: goto L_1282952c;
    case 6: goto L_12829524;
    case 7: goto L_1282951c;
    default: x86_unimpl("switch@0x1282947c out of table"); return;
  }
  /* 12829483 nop  */
  /* nop */
L_12829490:;
  /* 12829490 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12829492 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12829494 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12829496 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12829499 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1282949c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1282949f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128294a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 128294a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 128294a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 128294ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128294ae jb 0x1282947c */
  if (C.cf) goto L_1282947c;
  /* 128294b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 128294b2 jmp dword ptr [edx*4 + 0x12829568] */
  switch (EDX) {
    case 0: goto L_12829578;
    case 1: goto L_12829580;
    case 2: goto L_1282958c;
    case 3: goto L_128295a0;
    default: x86_unimpl("switch@0x128294b2 out of table"); return;
  }
  /* 128294b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_128294bc:;
  /* 128294bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 128294be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 128294c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128294c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 128294c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128294c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 128294cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 128294ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 128294d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128294d4 jb 0x1282947c */
  if (C.cf) goto L_1282947c;
  /* 128294d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 128294d8 jmp dword ptr [edx*4 + 0x12829568] */
  switch (EDX) {
    case 0: goto L_12829578;
    case 1: goto L_12829580;
    case 2: goto L_1282958c;
    case 3: goto L_128295a0;
    default: x86_unimpl("switch@0x128294d8 out of table"); return;
  }
  /* 128294df nop  */
  /* nop */
L_128294e0:;
  /* 128294e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 128294e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 128294e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128294e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 128294e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128294ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128294eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128294ee jb 0x1282947c */
  if (C.cf) goto L_1282947c;
  /* 128294f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 128294f2 jmp dword ptr [edx*4 + 0x12829568] */
  switch (EDX) {
    case 0: goto L_12829578;
    case 1: goto L_12829580;
    case 2: goto L_1282958c;
    case 3: goto L_128295a0;
    default: x86_unimpl("switch@0x128294f2 out of table"); return;
  }
  /* 128294f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1282951c:;
  /* 1282951c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12829520 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12829524:;
  /* 12829524 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12829528 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1282952c:;
  /* 1282952c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12829530 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12829534:;
  /* 12829534 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12829538 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1282953c:;
  /* 1282953c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12829540 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12829544:;
  /* 12829544 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12829548 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1282954c:;
  /* 1282954c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12829550 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12829554 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1282955b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1282955d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1282955f:;
  /* 1282955f jmp dword ptr [edx*4 + 0x12829568] */
  switch (EDX) {
    case 0: goto L_12829578;
    case 1: goto L_12829580;
    case 2: goto L_1282958c;
    case 3: goto L_128295a0;
    default: x86_unimpl("switch@0x1282955f out of table"); return;
  }
  /* 12829566 mov edi, edi */
  EDI = (EDI);
L_12829578:;
  /* 12829578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282957b pop esi */
  ESI = (pop32());
  /* 1282957c pop edi */
  EDI = (pop32());
  /* 1282957d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282957e ret  */
  ESPCHK(0x12829420u, _esp0);
  ESP += 4; return;
  /* 1282957f nop  */
  /* nop */
L_12829580:;
  /* 12829580 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12829582 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12829584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12829587 pop esi */
  ESI = (pop32());
  /* 12829588 pop edi */
  EDI = (pop32());
  /* 12829589 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282958a ret  */
  ESPCHK(0x12829420u, _esp0);
  ESP += 4; return;
  /* 1282958b nop  */
  /* nop */
L_1282958c:;
  /* 1282958c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1282958e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12829590 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12829593 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12829596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12829599 pop esi */
  ESI = (pop32());
  /* 1282959a pop edi */
  EDI = (pop32());
  /* 1282959b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282959c ret  */
  ESPCHK(0x12829420u, _esp0);
  ESP += 4; return;
  /* 1282959d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_128295a0:;
  /* 128295a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 128295a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 128295a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 128295a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 128295aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 128295ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 128295b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128295b3 pop esi */
  ESI = (pop32());
  /* 128295b4 pop edi */
  EDI = (pop32());
  /* 128295b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 128295b6 ret  */
  ESPCHK(0x12829420u, _esp0);
  ESP += 4; return;
  /* 128295b7 nop  */
  /* nop */
L_128295b8:;
  /* 128295b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 128295bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 128295c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 128295c6 jne 0x128295ec */
  if (!C.zf) goto L_128295ec;
  /* 128295c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 128295cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 128295ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128295d1 jb 0x128295e0 */
  if (C.cf) goto L_128295e0;
  /* 128295d3 std  */
  C.df=1;
  /* 128295d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 128295d6 cld  */
  C.df=0;
  /* 128295d7 jmp dword ptr [edx*4 + 0x12829700] */
  switch (EDX) {
    case 0: goto L_12829710;
    case 1: goto L_12829718;
    case 2: goto L_12829728;
    case 3: goto L_1282973c;
    default: x86_unimpl("switch@0x128295d7 out of table"); return;
  }
  /* 128295de mov edi, edi */
  EDI = (EDI);
L_128295e0:;
  /* 128295e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 128295e2 jmp dword ptr [ecx*4 + 0x128296b0] */
  switch (ECX) {
    case 0: goto L_128296f7;
    default: x86_unimpl("switch@0x128295e2 out of table"); return;
  }
  /* 128295e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_128295ec:;
  /* 128295ec mov eax, edi */
  EAX = (EDI);
  /* 128295ee mov edx, 3 */
  EDX = (0x3u);
  /* 128295f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128295f6 jb 0x12829604 */
  if (C.cf) goto L_12829604;
  /* 128295f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 128295fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128295fd jmp dword ptr [eax*4 + 0x12829608] */
  switch (EAX) {
    case 1: goto L_12829618;
    case 2: goto L_12829638;
    case 3: goto L_12829660;
    default: x86_unimpl("switch@0x128295fd out of table"); return;
  }
L_12829604:;
  /* 12829604 jmp dword ptr [ecx*4 + 0x12829700] */
  switch (ECX) {
    case 0: goto L_12829710;
    case 1: goto L_12829718;
    case 2: goto L_12829728;
    case 3: goto L_1282973c;
    default: x86_unimpl("switch@0x12829604 out of table"); return;
  }
  /* 1282960b nop  */
  /* nop */
L_12829618:;
  /* 12829618 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282961b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1282961d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12829620 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12829621 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12829624 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12829625 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829628 jb 0x128295e0 */
  if (C.cf) goto L_128295e0;
  /* 1282962a std  */
  C.df=1;
  /* 1282962b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1282962d cld  */
  C.df=0;
  /* 1282962e jmp dword ptr [edx*4 + 0x12829700] */
  switch (EDX) {
    case 0: goto L_12829710;
    case 1: goto L_12829718;
    case 2: goto L_12829728;
    case 3: goto L_1282973c;
    default: x86_unimpl("switch@0x1282962e out of table"); return;
  }
  /* 12829635 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12829638:;
  /* 12829638 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282963b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1282963d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12829640 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12829643 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12829646 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12829649 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282964c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282964f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829652 jb 0x128295e0 */
  if (C.cf) goto L_128295e0;
  /* 12829654 std  */
  C.df=1;
  /* 12829655 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12829657 cld  */
  C.df=0;
  /* 12829658 jmp dword ptr [edx*4 + 0x12829700] */
  switch (EDX) {
    case 0: goto L_12829710;
    case 1: goto L_12829718;
    case 2: goto L_12829728;
    case 3: goto L_1282973c;
    default: x86_unimpl("switch@0x12829658 out of table"); return;
  }
  /* 1282965f nop  */
  /* nop */
L_12829660:;
  /* 12829660 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12829663 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12829665 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12829668 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1282966b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1282966e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12829671 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12829674 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12829677 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282967a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282967d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829680 jb 0x128295e0 */
  if (C.cf) goto L_128295e0;
  /* 12829686 std  */
  C.df=1;
  /* 12829687 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12829689 cld  */
  C.df=0;
  /* 1282968a jmp dword ptr [edx*4 + 0x12829700] */
  switch (EDX) {
    case 0: goto L_12829710;
    case 1: goto L_12829718;
    case 2: goto L_12829728;
    case 3: goto L_1282973c;
    default: x86_unimpl("switch@0x1282968a out of table"); return;
  }
  /* 12829691 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12829694 mov ah, 0x96 */
  AH = (0x96u);
  /* 12829696 adc byte ptr [edx], 0xbc */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xbcu),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 12829699 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 1282969a adc byte ptr [edx], 0xc4 */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xc4u),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1282969d xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 1282969e adc byte ptr [edx], 0xcc */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xccu),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 128296a1 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 128296a2 adc byte ptr [edx], 0xd4 */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xd4u),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 128296a5 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 128296a6 adc byte ptr [edx], 0xdc */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xdcu),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 128296a9 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 128296aa adc byte ptr [edx], 0xe4 */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xe4u),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 128296ad xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 128296b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 128296b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 128296bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 128296c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 128296c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 128296c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 128296cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 128296d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 128296d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 128296d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 128296dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 128296e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 128296e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 128296e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 128296ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 128296f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 128296f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_128296f7:;
  /* 128296f7 jmp dword ptr [edx*4 + 0x12829700] */
  switch (EDX) {
    case 0: goto L_12829710;
    case 1: goto L_12829718;
    case 2: goto L_12829728;
    case 3: goto L_1282973c;
    default: x86_unimpl("switch@0x128296f7 out of table"); return;
  }
  /* 128296fe mov edi, edi */
  EDI = (EDI);
L_12829710:;
  /* 12829710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12829713 pop esi */
  ESI = (pop32());
  /* 12829714 pop edi */
  EDI = (pop32());
  /* 12829715 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12829716 ret  */
  ESPCHK(0x12829420u, _esp0);
  ESP += 4; return;
  /* 12829717 nop  */
  /* nop */
L_12829718:;
  /* 12829718 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282971b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1282971e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12829721 pop esi */
  ESI = (pop32());
  /* 12829722 pop edi */
  EDI = (pop32());
  /* 12829723 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12829724 ret  */
  ESPCHK(0x12829420u, _esp0);
  ESP += 4; return;
  /* 12829725 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12829728:;
  /* 12829728 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282972b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1282972e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12829731 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12829734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12829737 pop esi */
  ESI = (pop32());
  /* 12829738 pop edi */
  EDI = (pop32());
  /* 12829739 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282973a ret  */
  ESPCHK(0x12829420u, _esp0);
  ESP += 4; return;
  /* 1282973b nop  */
  /* nop */
L_1282973c:;
  /* 1282973c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282973f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12829742 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12829745 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12829748 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1282974b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1282974e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12829751 pop esi */
  ESI = (pop32());
  /* 12829752 pop edi */
  EDI = (pop32());
  /* 12829753 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12829754 ret  */
  ESPCHK(0x12829420u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12829760 (104 bytes, 43 insns) */
void f_12829760(void) {
  FTRACE(0x12829760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12829760 push ebx */
  push32((uint32_t)(EBX));
  /* 12829761 push esi */
  push32((uint32_t)(ESI));
  /* 12829762 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12829766 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12829768 jne 0x12829782 */
  if (!C.zf) goto L_12829782;
  /* 1282976a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1282976e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12829772 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12829774 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12829776 mov ebx, eax */
  EBX = (EAX);
  /* 12829778 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1282977c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1282977e mov edx, ebx */
  EDX = (EBX);
  /* 12829780 jmp 0x128297c3 */
  goto L_128297c3;
L_12829782:;
  /* 12829782 mov ecx, eax */
  ECX = (EAX);
  /* 12829784 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12829788 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1282978c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12829790:;
  /* 12829790 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12829792 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12829794 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12829796 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12829798 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282979a jne 0x12829790 */
  if (!C.zf) goto L_12829790;
  /* 1282979c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1282979e mov esi, eax */
  ESI = (EAX);
  /* 128297a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128297a4 mov ecx, eax */
  ECX = (EAX);
  /* 128297a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 128297aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128297ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128297ae jb 0x128297be */
  if (C.cf) goto L_128297be;
  /* 128297b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128297b4 ja 0x128297be */
  if ((!C.cf&&!C.zf)) goto L_128297be;
  /* 128297b6 jb 0x128297bf */
  if (C.cf) goto L_128297bf;
  /* 128297b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128297bc jbe 0x128297bf */
  if ((C.cf||C.zf)) goto L_128297bf;
L_128297be:;
  /* 128297be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_128297bf:;
  /* 128297bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128297c1 mov eax, esi */
  EAX = (ESI);
L_128297c3:;
  /* 128297c3 pop esi */
  ESI = (pop32());
  /* 128297c4 pop ebx */
  EBX = (pop32());
  /* 128297c5 ret 0x10 */
  ESPCHK(0x12829760u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x128297d0 (117 bytes, 44 insns) */
void f_128297d0(void) {
  FTRACE(0x128297d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128297d0 push ebx */
  push32((uint32_t)(EBX));
  /* 128297d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 128297d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128297d7 jne 0x128297f1 */
  if (!C.zf) goto L_128297f1;
  /* 128297d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 128297dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 128297e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128297e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128297e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128297e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128297eb mov eax, edx */
  EAX = (EDX);
  /* 128297ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128297ef jmp 0x12829841 */
  goto L_12829841;
L_128297f1:;
  /* 128297f1 mov ecx, eax */
  ECX = (EAX);
  /* 128297f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 128297f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 128297fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_128297ff:;
  /* 128297ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12829801 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12829803 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12829805 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12829807 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12829809 jne 0x128297ff */
  if (!C.zf) goto L_128297ff;
  /* 1282980b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1282980d mov ecx, eax */
  ECX = (EAX);
  /* 1282980f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12829813 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12829814 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12829818 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282981a jb 0x1282982a */
  if (C.cf) goto L_1282982a;
  /* 1282981c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829820 ja 0x1282982a */
  if ((!C.cf&&!C.zf)) goto L_1282982a;
  /* 12829822 jb 0x12829832 */
  if (C.cf) goto L_12829832;
  /* 12829824 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829828 jbe 0x12829832 */
  if ((C.cf||C.zf)) goto L_12829832;
L_1282982a:;
  /* 1282982a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282982e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12829832:;
  /* 12829832 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12829836 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282983a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282983c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282983e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12829841:;
  /* 12829841 pop ebx */
  EBX = (pop32());
  /* 12829842 ret 0x10 */
  ESPCHK(0x128297d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009850 @ 0x12829850 (628 bytes, 214 insns) */
void f_12829850(void) {
  FTRACE(0x12829850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12829850 push ebp */
  push32((uint32_t)(EBP));
  /* 12829851 mov ebp, esp */
  EBP = (ESP);
  /* 12829853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12829856 push ebx */
  push32((uint32_t)(EBX));
  /* 12829857 push esi */
  push32((uint32_t)(ESI));
  /* 12829858 push edi */
  push32((uint32_t)(EDI));
L_12829859:;
  /* 12829859 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282985d jne 0x1282987d */
  if (!C.zf) goto L_1282987d;
  /* 1282985f push 0x12849e84 */
  push32((uint32_t)(0x12849e84u));
  /* 12829864 push 0 */
  push32((uint32_t)(0x0u));
  /* 12829866 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12829868 push 0x12849e78 */
  push32((uint32_t)(0x12849e78u));
  /* 1282986d push 2 */
  push32((uint32_t)(0x2u));
  /* 1282986f call 0x12821c00 */
  push32(0x12829874u); f_12821c00();
  /* 12829874 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829877 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282987a jne 0x1282987d */
  if (!C.zf) goto L_1282987d;
  /* 1282987c int3  */
  x86_unimpl("int3 @ 0x1282987c");
L_1282987d:;
  /* 1282987d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282987f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12829881 jne 0x12829859 */
  if (!C.zf) goto L_12829859;
  /* 12829883 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12829886 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12829889 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282988c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1282988f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12829892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829895 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12829898 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1282989e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128298a0 je 0x128298af */
  if (C.zf) goto L_128298af;
  /* 128298a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128298a5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 128298a8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 128298ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128298ad je 0x128298c5 */
  if (C.zf) goto L_128298c5;
L_128298af:;
  /* 128298af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128298b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 128298b5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 128298b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128298ba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 128298bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128298c0 jmp 0x12829abd */
  goto L_12829abd;
L_128298c5:;
  /* 128298c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128298c8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 128298cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 128298ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128298d0 je 0x1282991c */
  if (C.zf) goto L_1282991c;
  /* 128298d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128298d5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 128298dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128298df mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 128298e2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 128298e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128298e7 je 0x12829905 */
  if (C.zf) goto L_12829905;
  /* 128298e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128298ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128298ef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 128298f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 128298f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128298f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 128298fa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 128298fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829900 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12829903 jmp 0x1282991c */
  goto L_1282991c;
L_12829905:;
  /* 12829905 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829908 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282990b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1282990e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829911 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12829914 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12829917 jmp 0x12829abd */
  goto L_12829abd;
L_1282991c:;
  /* 1282991c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282991f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12829922 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12829925 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829928 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1282992b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282992e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12829931 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12829934 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829937 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1282993a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282993d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12829944 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282994b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282994e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12829951 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829954 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12829957 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1282995d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282995f jne 0x1282998f */
  if (!C.zf) goto L_1282998f;
  /* 12829961 cmp dword ptr [ebp - 8], 0x1284d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1284d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829968 je 0x12829973 */
  if (C.zf) goto L_12829973;
  /* 1282996a cmp dword ptr [ebp - 8], 0x1284d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1284d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829971 jne 0x12829983 */
  if (!C.zf) goto L_12829983;
L_12829973:;
  /* 12829973 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12829976 push edx */
  push32((uint32_t)(EDX));
  /* 12829977 call 0x1282b7c0 */
  push32(0x1282997cu); f_1282b7c0();
  /* 1282997c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282997f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12829981 jne 0x1282998f */
  if (!C.zf) goto L_1282998f;
L_12829983:;
  /* 12829983 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829986 push eax */
  push32((uint32_t)(EAX));
  /* 12829987 call 0x1282b6f0 */
  push32(0x1282998cu); f_1282b6f0();
  /* 1282998c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282998f:;
  /* 1282998f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829992 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12829995 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1282999b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282999d je 0x12829a7b */
  if (C.zf) goto L_12829a7b;
L_128299a3:;
  /* 128299a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128299a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128299a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 128299ab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128299ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128299b0 jge 0x128299d3 */
  if ((C.sf==C.of)) goto L_128299d3;
  /* 128299b2 push 0x12849e38 */
  push32((uint32_t)(0x12849e38u));
  /* 128299b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128299b9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 128299be push 0x12849e78 */
  push32((uint32_t)(0x12849e78u));
  /* 128299c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 128299c5 call 0x12821c00 */
  push32(0x128299cau); f_12821c00();
  /* 128299ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128299cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128299d0 jne 0x128299d3 */
  if (!C.zf) goto L_128299d3;
  /* 128299d2 int3  */
  x86_unimpl("int3 @ 0x128299d2");
L_128299d3:;
  /* 128299d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128299d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128299d7 jne 0x128299a3 */
  if (!C.zf) goto L_128299a3;
  /* 128299d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128299dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128299df mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 128299e1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128299e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128299e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128299ea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 128299ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128299f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128299f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128299f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128299f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 128299fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128299fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829a01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12829a04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829a08 jle 0x12829a26 */
  if ((C.zf||C.sf!=C.of)) goto L_12829a26;
  /* 12829a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829a0d push ecx */
  push32((uint32_t)(ECX));
  /* 12829a0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829a11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12829a14 push eax */
  push32((uint32_t)(EAX));
  /* 12829a15 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12829a18 push ecx */
  push32((uint32_t)(ECX));
  /* 12829a19 call 0x1282b3e0 */
  push32(0x12829a1eu); f_1282b3e0();
  /* 12829a1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829a21 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12829a24 jmp 0x12829a6e */
  goto L_12829a6e;
L_12829a26:;
  /* 12829a26 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829a2a je 0x12829a49 */
  if (C.zf) goto L_12829a49;
  /* 12829a2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12829a2f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12829a32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12829a35 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12829a38 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12829a3b mov ecx, dword ptr [edx*4 + 0x1284fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1284fe60)));
  /* 12829a42 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12829a44 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12829a47 jmp 0x12829a50 */
  goto L_12829a50;
L_12829a49:;
  /* 12829a49 mov dword ptr [ebp - 0x14], 0x1284ca60 */
  w32((uint32_t)(EBP + -0x14), (0x1284ca60u));
L_12829a50:;
  /* 12829a50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12829a53 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12829a57 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12829a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12829a5c je 0x12829a6e */
  if (C.zf) goto L_12829a6e;
  /* 12829a5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12829a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12829a62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12829a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12829a66 call 0x1282b290 */
  push32(0x12829a6bu); f_1282b290();
  /* 12829a6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12829a6e:;
  /* 12829a6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829a71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12829a74 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12829a77 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12829a79 jmp 0x12829a99 */
  goto L_12829a99;
L_12829a7b:;
  /* 12829a7b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12829a82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829a85 push edx */
  push32((uint32_t)(EDX));
  /* 12829a86 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12829a89 push eax */
  push32((uint32_t)(EAX));
  /* 12829a8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12829a8d push ecx */
  push32((uint32_t)(ECX));
  /* 12829a8e call 0x1282b3e0 */
  push32(0x12829a93u); f_1282b3e0();
  /* 12829a93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829a96 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12829a99:;
  /* 12829a99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12829a9c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829a9f je 0x12829ab5 */
  if (C.zf) goto L_12829ab5;
  /* 12829aa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829aa4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12829aa7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12829aaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829aad mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12829ab0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12829ab3 jmp 0x12829abd */
  goto L_12829abd;
L_12829ab5:;
  /* 12829ab5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12829ab8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12829abd:;
  /* 12829abd pop edi */
  EDI = (pop32());
  /* 12829abe pop esi */
  ESI = (pop32());
  /* 12829abf pop ebx */
  EBX = (pop32());
  /* 12829ac0 mov esp, ebp */
  ESP = (EBP);
  /* 12829ac2 pop ebp */
  EBP = (pop32());
  /* 12829ac3 ret  */
  ESPCHK(0x12829850u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad0 @ 0x12829ad0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12829ad0(void) {
  FTRACE(0x12829ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12829ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12829ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12829ad3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12829ad9 push ebx */
  push32((uint32_t)(EBX));
  /* 12829ada push esi */
  push32((uint32_t)(ESI));
  /* 12829adb push edi */
  push32((uint32_t)(EDI));
  /* 12829adc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12829ae3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12829aed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12829af4:;
  /* 12829af4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12829af7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12829af9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12829afc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829b00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12829b03 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12829b06 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12829b09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12829b0b je 0x1282a6e7 */
  if (C.zf) goto L_1282a6e7;
  /* 12829b11 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829b18 jl 0x1282a6e7 */
  if ((C.sf!=C.of)) goto L_1282a6e7;
  /* 12829b1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829b22 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829b25 jl 0x12829b46 */
  if ((C.sf!=C.of)) goto L_12829b46;
  /* 12829b27 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829b2b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829b2e jg 0x12829b46 */
  if ((!C.zf&&C.sf==C.of)) goto L_12829b46;
  /* 12829b30 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829b34 movsx ecx, byte ptr [eax + 0x12849e70] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12849e70))));
  /* 12829b3b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12829b3e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12829b44 jmp 0x12829b50 */
  goto L_12829b50;
L_12829b46:;
  /* 12829b46 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12829b50:;
  /* 12829b50 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12829b56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12829b59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12829b5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12829b5f movsx edx, byte ptr [ecx + eax*8 + 0x12849e90] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12849e90))));
  /* 12829b67 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12829b6a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12829b6d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12829b70 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12829b76 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829b7d ja 0x1282a6e2 */
  if ((!C.cf&&!C.zf)) goto L_1282a6e2;
  /* 12829b83 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12829b89 jmp dword ptr [ecx*4 + 0x1282a6f4] */
  switch (ECX) {
    case 0: goto L_12829b90;
    case 1: goto L_12829c2a;
    case 2: goto L_12829c6c;
    case 3: goto L_12829cdb;
    case 4: goto L_12829d33;
    case 5: goto L_12829d42;
    case 6: goto L_12829d8e;
    case 7: goto L_12829e21;
    case 8: goto L_12829cb8;
    case 9: goto L_12829cc3;
    case 10: goto L_12829cae;
    case 11: goto L_12829ca3;
    case 12: goto L_12829cce;
    case 13: goto L_12829cd6;
    default: x86_unimpl("switch@0x12829b89 out of table"); return;
  }
L_12829b90:;
  /* 12829b90 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12829b97 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12829b9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12829ba0 mov eax, dword ptr [0x1284cc98] */
  EAX = (r32((uint32_t)(0x1284cc98)));
  /* 12829ba5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12829ba7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12829bab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12829bb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12829bb3 je 0x12829c0d */
  if (C.zf) goto L_12829c0d;
  /* 12829bb5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12829bbb push edx */
  push32((uint32_t)(EDX));
  /* 12829bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12829bbf push eax */
  push32((uint32_t)(EAX));
  /* 12829bc0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12829bc5 call 0x1282a800 */
  push32(0x12829bcau); f_1282a800();
  /* 12829bca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829bcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12829bd0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12829bd2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12829bd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12829bd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12829bdb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12829bde:;
  /* 12829bde movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829be2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12829be4 jne 0x12829c07 */
  if (!C.zf) goto L_12829c07;
  /* 12829be6 push 0x12849f10 */
  push32((uint32_t)(0x12849f10u));
  /* 12829beb push 0 */
  push32((uint32_t)(0x0u));
  /* 12829bed push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12829bf2 push 0x12849f04 */
  push32((uint32_t)(0x12849f04u));
  /* 12829bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12829bf9 call 0x12821c00 */
  push32(0x12829bfeu); f_12821c00();
  /* 12829bfe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829c01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829c04 jne 0x12829c07 */
  if (!C.zf) goto L_12829c07;
  /* 12829c06 int3  */
  x86_unimpl("int3 @ 0x12829c06");
L_12829c07:;
  /* 12829c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12829c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12829c0b jne 0x12829bde */
  if (!C.zf) goto L_12829bde;
L_12829c0d:;
  /* 12829c0d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12829c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12829c14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12829c17 push edx */
  push32((uint32_t)(EDX));
  /* 12829c18 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829c1c push eax */
  push32((uint32_t)(EAX));
  /* 12829c1d call 0x1282a800 */
  push32(0x12829c22u); f_1282a800();
  /* 12829c22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829c25 jmp 0x1282a6e2 */
  goto L_1282a6e2;
L_12829c2a:;
  /* 12829c2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12829c31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12829c34 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12829c3a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12829c40 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12829c46 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12829c4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12829c4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12829c56 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12829c60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12829c67 jmp 0x1282a6e2 */
  goto L_1282a6e2;
L_12829c6c:;
  /* 12829c6c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829c70 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12829c76 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12829c7c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12829c7f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12829c85 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829c8c ja 0x12829cd6 */
  if ((!C.cf&&!C.zf)) goto L_12829cd6;
  /* 12829c8e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12829c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12829c96 mov al, byte ptr [ecx + 0x1282a72c] */
  AL = (r8((uint32_t)(ECX + 0x1282a72c)));
  /* 12829c9c jmp dword ptr [eax*4 + 0x1282a714] */
  switch (EAX) {
    case 0: goto L_12829cb8;
    case 1: goto L_12829cc3;
    case 2: goto L_12829cae;
    case 3: goto L_12829ca3;
    case 4: goto L_12829cce;
    case 5: goto L_12829cd6;
    default: x86_unimpl("switch@0x12829c9c out of table"); return;
  }
L_12829ca3:;
  /* 12829ca3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829ca6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12829ca9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12829cac jmp 0x12829cd6 */
  goto L_12829cd6;
L_12829cae:;
  /* 12829cae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829cb1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12829cb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12829cb6 jmp 0x12829cd6 */
  goto L_12829cd6;
L_12829cb8:;
  /* 12829cb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829cbb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12829cbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12829cc1 jmp 0x12829cd6 */
  goto L_12829cd6;
L_12829cc3:;
  /* 12829cc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829cc6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12829cc9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12829ccc jmp 0x12829cd6 */
  goto L_12829cd6;
L_12829cce:;
  /* 12829cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829cd1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12829cd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12829cd6:;
  /* 12829cd6 jmp 0x1282a6e2 */
  goto L_1282a6e2;
L_12829cdb:;
  /* 12829cdb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829cdf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829ce2 jne 0x12829d17 */
  if (!C.zf) goto L_12829d17;
  /* 12829ce4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12829ce7 push edx */
  push32((uint32_t)(EDX));
  /* 12829ce8 call 0x1282a910 */
  push32(0x12829cedu); f_1282a910();
  /* 12829ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829cf0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12829cf6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829cfd jge 0x12829d15 */
  if ((C.sf==C.of)) goto L_12829d15;
  /* 12829cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829d02 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12829d04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12829d07 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12829d0d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12829d0f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12829d15:;
  /* 12829d15 jmp 0x12829d2e */
  goto L_12829d2e;
L_12829d17:;
  /* 12829d17 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12829d1d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12829d20 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829d24 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12829d28 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12829d2e:;
  /* 12829d2e jmp 0x1282a6e2 */
  goto L_1282a6e2;
L_12829d33:;
  /* 12829d33 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12829d3d jmp 0x1282a6e2 */
  goto L_1282a6e2;
L_12829d42:;
  /* 12829d42 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829d46 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829d49 jne 0x12829d72 */
  if (!C.zf) goto L_12829d72;
  /* 12829d4b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12829d4e push eax */
  push32((uint32_t)(EAX));
  /* 12829d4f call 0x1282a910 */
  push32(0x12829d54u); f_1282a910();
  /* 12829d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829d57 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12829d5d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829d64 jge 0x12829d70 */
  if ((C.sf==C.of)) goto L_12829d70;
  /* 12829d66 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12829d70:;
  /* 12829d70 jmp 0x12829d89 */
  goto L_12829d89;
L_12829d72:;
  /* 12829d72 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12829d78 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12829d7b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829d7f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12829d83 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12829d89:;
  /* 12829d89 jmp 0x1282a6e2 */
  goto L_1282a6e2;
L_12829d8e:;
  /* 12829d8e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829d92 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12829d98 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12829d9e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12829da1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12829da7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829dae ja 0x12829e1c */
  if ((!C.cf&&!C.zf)) goto L_12829e1c;
  /* 12829db0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12829db6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12829db8 mov al, byte ptr [ecx + 0x1282a751] */
  AL = (r8((uint32_t)(ECX + 0x1282a751)));
  /* 12829dbe jmp dword ptr [eax*4 + 0x1282a73d] */
  switch (EAX) {
    case 0: goto L_12829dd0;
    case 1: goto L_12829e09;
    case 2: goto L_12829dc5;
    case 3: goto L_12829e13;
    case 4: goto L_12829e1c;
    default: x86_unimpl("switch@0x12829dbe out of table"); return;
  }
L_12829dc5:;
  /* 12829dc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829dc8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12829dcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12829dce jmp 0x12829e1c */
  goto L_12829e1c;
L_12829dd0:;
  /* 12829dd0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12829dd3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12829dd6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829dd9 jne 0x12829dfb */
  if (!C.zf) goto L_12829dfb;
  /* 12829ddb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12829dde movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12829de2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829de5 jne 0x12829dfb */
  if (!C.zf) goto L_12829dfb;
  /* 12829de7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12829dea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12829ded mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12829df0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829df3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12829df6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12829df9 jmp 0x12829e07 */
  goto L_12829e07;
L_12829dfb:;
  /* 12829dfb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12829e02 jmp 0x12829b90 */
  goto L_12829b90;
L_12829e07:;
  /* 12829e07 jmp 0x12829e1c */
  goto L_12829e1c;
L_12829e09:;
  /* 12829e09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829e0c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12829e0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12829e11 jmp 0x12829e1c */
  goto L_12829e1c;
L_12829e13:;
  /* 12829e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829e16 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12829e19 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12829e1c:;
  /* 12829e1c jmp 0x1282a6e2 */
  goto L_1282a6e2;
L_12829e21:;
  /* 12829e21 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12829e25 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12829e2b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12829e31 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12829e34 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12829e3a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829e41 ja 0x1282a507 */
  if ((!C.cf&&!C.zf)) goto L_1282a507;
  /* 12829e47 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12829e4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12829e4f mov cl, byte ptr [edx + 0x1282a7bc] */
  CL = (r8((uint32_t)(EDX + 0x1282a7bc)));
  /* 12829e55 jmp dword ptr [ecx*4 + 0x1282a780] */
  switch (ECX) {
    case 0: goto L_12829e5c;
    case 1: goto L_1282a0f0;
    case 2: goto L_12829f80;
    case 3: goto L_1282a229;
    case 4: goto L_12829eeb;
    case 5: goto L_12829e71;
    case 6: goto L_1282a1fb;
    case 7: goto L_1282a100;
    case 8: goto L_1282a0a5;
    case 9: goto L_1282a275;
    case 10: goto L_1282a21f;
    case 11: goto L_12829f96;
    case 12: goto L_1282a213;
    case 13: goto L_1282a235;
    case 14: goto L_1282a507;
    default: x86_unimpl("switch@0x12829e55 out of table"); return;
  }
L_12829e5c:;
  /* 12829e5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829e5f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12829e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12829e66 jne 0x12829e71 */
  if (!C.zf) goto L_12829e71;
  /* 12829e68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829e6b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12829e6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12829e71:;
  /* 12829e71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829e74 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12829e7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12829e7c je 0x12829eb7 */
  if (C.zf) goto L_12829eb7;
  /* 12829e7e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12829e81 push eax */
  push32((uint32_t)(EAX));
  /* 12829e82 call 0x1282a950 */
  push32(0x12829e87u); f_1282a950();
  /* 12829e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829e8a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12829e8e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12829e92 push ecx */
  push32((uint32_t)(ECX));
  /* 12829e93 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12829e99 push edx */
  push32((uint32_t)(EDX));
  /* 12829e9a call 0x1282ba30 */
  push32(0x12829e9fu); f_1282ba30();
  /* 12829e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829ea2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12829ea5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829ea9 jge 0x12829eb5 */
  if ((C.sf==C.of)) goto L_12829eb5;
  /* 12829eab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12829eb5:;
  /* 12829eb5 jmp 0x12829edd */
  goto L_12829edd;
L_12829eb7:;
  /* 12829eb7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12829eba push eax */
  push32((uint32_t)(EAX));
  /* 12829ebb call 0x1282a910 */
  push32(0x12829ec0u); f_1282a910();
  /* 12829ec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829ec3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12829eca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12829ed0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12829ed6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12829edd:;
  /* 12829edd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12829ee3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12829ee6 jmp 0x1282a507 */
  goto L_1282a507;
L_12829eeb:;
  /* 12829eeb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12829eee push eax */
  push32((uint32_t)(EAX));
  /* 12829eef call 0x1282a910 */
  push32(0x12829ef4u); f_1282a910();
  /* 12829ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829ef7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12829efd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829f04 je 0x12829f12 */
  if (C.zf) goto L_12829f12;
  /* 12829f06 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12829f0c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829f10 jne 0x12829f2c */
  if (!C.zf) goto L_12829f2c;
L_12829f12:;
  /* 12829f12 mov edx, dword ptr [0x1284cfb0] */
  EDX = (r32((uint32_t)(0x1284cfb0)));
  /* 12829f18 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12829f1b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12829f1e push eax */
  push32((uint32_t)(EAX));
  /* 12829f1f call 0x12825970 */
  push32(0x12829f24u); f_12825970();
  /* 12829f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829f27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12829f2a jmp 0x12829f7b */
  goto L_12829f7b;
L_12829f2c:;
  /* 12829f2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829f2f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12829f35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12829f37 je 0x12829f5c */
  if (C.zf) goto L_12829f5c;
  /* 12829f39 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12829f3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12829f42 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12829f45 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12829f4b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12829f4e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12829f50 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12829f53 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12829f5a jmp 0x12829f7b */
  goto L_12829f7b;
L_12829f5c:;
  /* 12829f5c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12829f63 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12829f69 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12829f6c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12829f6f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12829f75 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12829f78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12829f7b:;
  /* 12829f7b jmp 0x1282a507 */
  goto L_1282a507;
L_12829f80:;
  /* 12829f80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829f83 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12829f89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12829f8b jne 0x12829f96 */
  if (!C.zf) goto L_12829f96;
  /* 12829f8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829f90 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12829f93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12829f96:;
  /* 12829f96 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829f9d jne 0x12829fab */
  if (!C.zf) goto L_12829fab;
  /* 12829f9f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12829fa9 jmp 0x12829fb7 */
  goto L_12829fb7;
L_12829fab:;
  /* 12829fab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12829fb1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12829fb7:;
  /* 12829fb7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12829fbd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12829fc3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12829fc6 push edx */
  push32((uint32_t)(EDX));
  /* 12829fc7 call 0x1282a910 */
  push32(0x12829fccu); f_1282a910();
  /* 12829fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12829fcf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12829fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12829fd5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12829fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12829fdc je 0x1282a046 */
  if (C.zf) goto L_1282a046;
  /* 12829fde cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12829fe2 jne 0x12829fed */
  if (!C.zf) goto L_12829fed;
  /* 12829fe4 mov ecx, dword ptr [0x1284cfb4] */
  ECX = (r32((uint32_t)(0x1284cfb4)));
  /* 12829fea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12829fed:;
  /* 12829fed mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12829ff4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12829ff7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12829ffd:;
  /* 12829ffd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1282a003 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1282a009 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a00c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1282a012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a014 je 0x1282a036 */
  if (C.zf) goto L_1282a036;
  /* 1282a016 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1282a01c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282a01e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1282a021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a023 je 0x1282a036 */
  if (C.zf) goto L_1282a036;
  /* 1282a025 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1282a02b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a02e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1282a034 jmp 0x12829ffd */
  goto L_12829ffd;
L_1282a036:;
  /* 1282a036 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1282a03c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a03f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1282a041 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1282a044 jmp 0x1282a0a0 */
  goto L_1282a0a0;
L_1282a046:;
  /* 1282a046 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a04a jne 0x1282a054 */
  if (!C.zf) goto L_1282a054;
  /* 1282a04c mov eax, dword ptr [0x1284cfb0] */
  EAX = (r32((uint32_t)(0x1284cfb0)));
  /* 1282a051 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1282a054:;
  /* 1282a054 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a057 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1282a05d:;
  /* 1282a05d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1282a063 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1282a069 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a06c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1282a072 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a074 je 0x1282a094 */
  if (C.zf) goto L_1282a094;
  /* 1282a076 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1282a07c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282a07f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a081 je 0x1282a094 */
  if (C.zf) goto L_1282a094;
  /* 1282a083 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1282a089 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a08c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1282a092 jmp 0x1282a05d */
  goto L_1282a05d;
L_1282a094:;
  /* 1282a094 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1282a09a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a09d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1282a0a0:;
  /* 1282a0a0 jmp 0x1282a507 */
  goto L_1282a507;
L_1282a0a5:;
  /* 1282a0a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1282a0a8 push edx */
  push32((uint32_t)(EDX));
  /* 1282a0a9 call 0x1282a910 */
  push32(0x1282a0aeu); f_1282a910();
  /* 1282a0ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a0b1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1282a0b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a0ba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1282a0bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a0bf je 0x1282a0d3 */
  if (C.zf) goto L_1282a0d3;
  /* 1282a0c1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1282a0c7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1282a0ce mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1282a0d1 jmp 0x1282a0e1 */
  goto L_1282a0e1;
L_1282a0d3:;
  /* 1282a0d3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1282a0d9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1282a0df mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1282a0e1:;
  /* 1282a0e1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1282a0eb jmp 0x1282a507 */
  goto L_1282a507;
L_1282a0f0:;
  /* 1282a0f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1282a0f7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1282a0fa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1282a0fd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1282a100:;
  /* 1282a100 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a103 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1282a105 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282a108 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1282a10e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1282a111 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a118 jge 0x1282a126 */
  if ((C.sf==C.of)) goto L_1282a126;
  /* 1282a11a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1282a124 jmp 0x1282a142 */
  goto L_1282a142;
L_1282a126:;
  /* 1282a126 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a12d jne 0x1282a142 */
  if (!C.zf) goto L_1282a142;
  /* 1282a12f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1282a133 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a136 jne 0x1282a142 */
  if (!C.zf) goto L_1282a142;
  /* 1282a138 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1282a142:;
  /* 1282a142 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282a145 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a148 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1282a14b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282a14e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a151 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282a153 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1282a156 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1282a15c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1282a162 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282a165 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a166 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1282a16c push edx */
  push32((uint32_t)(EDX));
  /* 1282a16d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1282a171 push eax */
  push32((uint32_t)(EAX));
  /* 1282a172 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a175 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a176 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1282a17c push edx */
  push32((uint32_t)(EDX));
  /* 1282a17d call dword ptr [0x1284d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284d3a0))), 0x1282a183u);
  /* 1282a183 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a189 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1282a18e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a190 je 0x1282a1a8 */
  if (C.zf) goto L_1282a1a8;
  /* 1282a192 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a199 jne 0x1282a1a8 */
  if (!C.zf) goto L_1282a1a8;
  /* 1282a19b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a19e push ecx */
  push32((uint32_t)(ECX));
  /* 1282a19f call dword ptr [0x1284d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284d3ac))), 0x1282a1a5u);
  /* 1282a1a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282a1a8:;
  /* 1282a1a8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1282a1ac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a1af jne 0x1282a1ca */
  if (!C.zf) goto L_1282a1ca;
  /* 1282a1b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a1b4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1282a1b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a1bb jne 0x1282a1ca */
  if (!C.zf) goto L_1282a1ca;
  /* 1282a1bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a1c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a1c1 call dword ptr [0x1284d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284d3a4))), 0x1282a1c7u);
  /* 1282a1c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282a1ca:;
  /* 1282a1ca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a1cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1282a1d0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a1d3 jne 0x1282a1e7 */
  if (!C.zf) goto L_1282a1e7;
  /* 1282a1d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a1d8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1282a1db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1282a1de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a1e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a1e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1282a1e7:;
  /* 1282a1e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a1ea push eax */
  push32((uint32_t)(EAX));
  /* 1282a1eb call 0x12825970 */
  push32(0x1282a1f0u); f_12825970();
  /* 1282a1f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a1f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1282a1f6 jmp 0x1282a507 */
  goto L_1282a507;
L_1282a1fb:;
  /* 1282a1fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a1fe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1282a201 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1282a204 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1282a20e jmp 0x1282a295 */
  goto L_1282a295;
L_1282a213:;
  /* 1282a213 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1282a21d jmp 0x1282a295 */
  goto L_1282a295;
L_1282a21f:;
  /* 1282a21f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1282a229:;
  /* 1282a229 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1282a233 jmp 0x1282a23f */
  goto L_1282a23f;
L_1282a235:;
  /* 1282a235 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1282a23f:;
  /* 1282a23f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1282a249 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a24c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1282a252 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a254 je 0x1282a273 */
  if (C.zf) goto L_1282a273;
  /* 1282a256 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1282a25d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1282a263 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a266 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1282a26c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1282a273:;
  /* 1282a273 jmp 0x1282a295 */
  goto L_1282a295;
L_1282a275:;
  /* 1282a275 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1282a27f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a282 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1282a288 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282a28a je 0x1282a295 */
  if (C.zf) goto L_1282a295;
  /* 1282a28c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a28f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1282a292 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1282a295:;
  /* 1282a295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a298 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1282a29d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a29f je 0x1282a2be */
  if (C.zf) goto L_1282a2be;
  /* 1282a2a1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1282a2a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a2a5 call 0x1282a930 */
  push32(0x1282a2aau); f_1282a930();
  /* 1282a2aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a2ad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1282a2b3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1282a2b9 jmp 0x1282a34f */
  goto L_1282a34f;
L_1282a2be:;
  /* 1282a2be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a2c1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1282a2c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a2c6 je 0x1282a310 */
  if (C.zf) goto L_1282a310;
  /* 1282a2c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a2cb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1282a2ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a2d0 je 0x1282a2f0 */
  if (C.zf) goto L_1282a2f0;
  /* 1282a2d2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1282a2d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a2d6 call 0x1282a910 */
  push32(0x1282a2dbu); f_1282a910();
  /* 1282a2db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a2de movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1282a2e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1282a2e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1282a2e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1282a2ee jmp 0x1282a30e */
  goto L_1282a30e;
L_1282a2f0:;
  /* 1282a2f0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1282a2f3 push edx */
  push32((uint32_t)(EDX));
  /* 1282a2f4 call 0x1282a910 */
  push32(0x1282a2f9u); f_1282a910();
  /* 1282a2f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a2fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282a301 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1282a302 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1282a308 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1282a30e:;
  /* 1282a30e jmp 0x1282a34f */
  goto L_1282a34f;
L_1282a310:;
  /* 1282a310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a313 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1282a316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a318 je 0x1282a335 */
  if (C.zf) goto L_1282a335;
  /* 1282a31a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1282a31d push ecx */
  push32((uint32_t)(ECX));
  /* 1282a31e call 0x1282a910 */
  push32(0x1282a323u); f_1282a910();
  /* 1282a323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a326 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1282a327 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1282a32d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1282a333 jmp 0x1282a34f */
  goto L_1282a34f;
L_1282a335:;
  /* 1282a335 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1282a338 push edx */
  push32((uint32_t)(EDX));
  /* 1282a339 call 0x1282a910 */
  push32(0x1282a33eu); f_1282a910();
  /* 1282a33e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a341 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282a343 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1282a349 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1282a34f:;
  /* 1282a34f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a352 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1282a355 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a357 je 0x1282a397 */
  if (C.zf) goto L_1282a397;
  /* 1282a359 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a360 jg 0x1282a397 */
  if ((!C.zf&&C.sf==C.of)) goto L_1282a397;
  /* 1282a362 jl 0x1282a36d */
  if ((C.sf!=C.of)) goto L_1282a36d;
  /* 1282a364 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a36b jae 0x1282a397 */
  if (!C.cf) goto L_1282a397;
L_1282a36d:;
  /* 1282a36d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1282a373 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282a375 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1282a37b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a37e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282a380 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1282a386 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1282a38c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a38f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1282a392 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282a395 jmp 0x1282a3af */
  goto L_1282a3af;
L_1282a397:;
  /* 1282a397 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1282a39d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1282a3a3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1282a3a9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1282a3af:;
  /* 1282a3af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a3b2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1282a3b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a3ba jne 0x1282a3d7 */
  if (!C.zf) goto L_1282a3d7;
  /* 1282a3bc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1282a3c2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1282a3c8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1282a3cb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1282a3d1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1282a3d7:;
  /* 1282a3d7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a3de jge 0x1282a3ec */
  if ((C.sf==C.of)) goto L_1282a3ec;
  /* 1282a3e0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1282a3ea jmp 0x1282a3f5 */
  goto L_1282a3f5;
L_1282a3ec:;
  /* 1282a3ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a3ef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1282a3f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1282a3f5:;
  /* 1282a3f5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1282a3fb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1282a401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a403 jne 0x1282a40c */
  if (!C.zf) goto L_1282a40c;
  /* 1282a405 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1282a40c:;
  /* 1282a40c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1282a40f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1282a412:;
  /* 1282a412 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1282a418 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1282a41e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a421 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1282a427 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a429 jg 0x1282a43f */
  if ((!C.zf&&C.sf==C.of)) goto L_1282a43f;
  /* 1282a42b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1282a431 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1282a437 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282a439 je 0x1282a4c0 */
  if (C.zf) goto L_1282a4c0;
L_1282a43f:;
  /* 1282a43f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1282a445 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1282a446 push edx */
  push32((uint32_t)(EDX));
  /* 1282a447 push eax */
  push32((uint32_t)(EAX));
  /* 1282a448 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1282a44e push edx */
  push32((uint32_t)(EDX));
  /* 1282a44f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1282a455 push eax */
  push32((uint32_t)(EAX));
  /* 1282a456 call 0x128297d0 */
  push32(0x1282a45bu); f_128297d0();
  /* 1282a45b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a45e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1282a464 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1282a46a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1282a46b push edx */
  push32((uint32_t)(EDX));
  /* 1282a46c push eax */
  push32((uint32_t)(EAX));
  /* 1282a46d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1282a473 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a474 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1282a47a push edx */
  push32((uint32_t)(EDX));
  /* 1282a47b call 0x12829760 */
  push32(0x1282a480u); f_12829760();
  /* 1282a480 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1282a486 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1282a48c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a493 jle 0x1282a4a7 */
  if ((C.zf||C.sf!=C.of)) goto L_1282a4a7;
  /* 1282a495 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1282a49b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a4a1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1282a4a7:;
  /* 1282a4a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a4aa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1282a4b0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1282a4b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a4b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a4b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1282a4bb jmp 0x1282a412 */
  goto L_1282a412;
L_1282a4c0:;
  /* 1282a4c0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1282a4c3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a4c6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1282a4c9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a4cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a4cf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1282a4d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a4d5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1282a4da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a4dc je 0x1282a507 */
  if (C.zf) goto L_1282a507;
  /* 1282a4de mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a4e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282a4e4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a4e7 jne 0x1282a4ef */
  if (!C.zf) goto L_1282a4ef;
  /* 1282a4e9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a4ed jne 0x1282a507 */
  if (!C.zf) goto L_1282a507;
L_1282a4ef:;
  /* 1282a4ef mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a4f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a4f5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1282a4f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a4fb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1282a4fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282a501 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a504 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1282a507:;
  /* 1282a507 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a50e jne 0x1282a6e2 */
  if (!C.zf) goto L_1282a6e2;
  /* 1282a514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a517 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1282a51a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a51c je 0x1282a56d */
  if (C.zf) goto L_1282a56d;
  /* 1282a51e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a521 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1282a527 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282a529 je 0x1282a53b */
  if (C.zf) goto L_1282a53b;
  /* 1282a52b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1282a532 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1282a539 jmp 0x1282a56d */
  goto L_1282a56d;
L_1282a53b:;
  /* 1282a53b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a53e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1282a541 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a543 je 0x1282a555 */
  if (C.zf) goto L_1282a555;
  /* 1282a545 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1282a54c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1282a553 jmp 0x1282a56d */
  goto L_1282a56d;
L_1282a555:;
  /* 1282a555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a558 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1282a55b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a55d je 0x1282a56d */
  if (C.zf) goto L_1282a56d;
  /* 1282a55f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1282a566 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1282a56d:;
  /* 1282a56d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1282a573 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a576 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a579 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1282a57f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a582 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1282a585 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a587 jne 0x1282a5a5 */
  if (!C.zf) goto L_1282a5a5;
  /* 1282a589 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1282a58f push eax */
  push32((uint32_t)(EAX));
  /* 1282a590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a593 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a594 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1282a59a push edx */
  push32((uint32_t)(EDX));
  /* 1282a59b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1282a59d call 0x1282a880 */
  push32(0x1282a5a2u); f_1282a880();
  /* 1282a5a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282a5a5:;
  /* 1282a5a5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1282a5ab push eax */
  push32((uint32_t)(EAX));
  /* 1282a5ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a5af push ecx */
  push32((uint32_t)(ECX));
  /* 1282a5b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282a5b3 push edx */
  push32((uint32_t)(EDX));
  /* 1282a5b4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1282a5ba push eax */
  push32((uint32_t)(EAX));
  /* 1282a5bb call 0x1282a8c0 */
  push32(0x1282a5c0u); f_1282a8c0();
  /* 1282a5c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a5c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a5c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1282a5c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282a5cb je 0x1282a5f3 */
  if (C.zf) goto L_1282a5f3;
  /* 1282a5cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a5d0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1282a5d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a5d5 jne 0x1282a5f3 */
  if (!C.zf) goto L_1282a5f3;
  /* 1282a5d7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1282a5dd push eax */
  push32((uint32_t)(EAX));
  /* 1282a5de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a5e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a5e2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1282a5e8 push edx */
  push32((uint32_t)(EDX));
  /* 1282a5e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1282a5eb call 0x1282a880 */
  push32(0x1282a5f0u); f_1282a880();
  /* 1282a5f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282a5f3:;
  /* 1282a5f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a5f7 je 0x1282a6a1 */
  if (C.zf) goto L_1282a6a1;
  /* 1282a5fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a601 jle 0x1282a6a1 */
  if ((C.zf||C.sf!=C.of)) goto L_1282a6a1;
  /* 1282a607 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a60a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1282a610 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282a613 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1282a619:;
  /* 1282a619 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1282a61f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1282a625 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a628 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1282a62e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a630 je 0x1282a69f */
  if (C.zf) goto L_1282a69f;
  /* 1282a632 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1282a638 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1282a63b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1282a642 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1282a649 push eax */
  push32((uint32_t)(EAX));
  /* 1282a64a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1282a650 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a651 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1282a657 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a65a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1282a660 call 0x1282ba30 */
  push32(0x1282a665u); f_1282ba30();
  /* 1282a665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a668 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1282a66e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a675 jg 0x1282a679 */
  if ((!C.zf&&C.sf==C.of)) goto L_1282a679;
  /* 1282a677 jmp 0x1282a69f */
  goto L_1282a69f;
L_1282a679:;
  /* 1282a679 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1282a67f push eax */
  push32((uint32_t)(EAX));
  /* 1282a680 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a683 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a684 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1282a68a push edx */
  push32((uint32_t)(EDX));
  /* 1282a68b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1282a691 push eax */
  push32((uint32_t)(EAX));
  /* 1282a692 call 0x1282a8c0 */
  push32(0x1282a697u); f_1282a8c0();
  /* 1282a697 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a69a jmp 0x1282a619 */
  goto L_1282a619;
L_1282a69f:;
  /* 1282a69f jmp 0x1282a6bc */
  goto L_1282a6bc;
L_1282a6a1:;
  /* 1282a6a1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1282a6a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a6a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a6ab push edx */
  push32((uint32_t)(EDX));
  /* 1282a6ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282a6af push eax */
  push32((uint32_t)(EAX));
  /* 1282a6b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282a6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a6b4 call 0x1282a8c0 */
  push32(0x1282a6b9u); f_1282a8c0();
  /* 1282a6b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282a6bc:;
  /* 1282a6bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a6bf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1282a6c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282a6c4 je 0x1282a6e2 */
  if (C.zf) goto L_1282a6e2;
  /* 1282a6c6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1282a6cc push eax */
  push32((uint32_t)(EAX));
  /* 1282a6cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a6d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a6d1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1282a6d7 push edx */
  push32((uint32_t)(EDX));
  /* 1282a6d8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1282a6da call 0x1282a880 */
  push32(0x1282a6dfu); f_1282a880();
  /* 1282a6df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282a6e2:;
  /* 1282a6e2 jmp 0x12829af4 */
  goto L_12829af4;
L_1282a6e7:;
  /* 1282a6e7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1282a6ed pop edi */
  EDI = (pop32());
  /* 1282a6ee pop esi */
  ESI = (pop32());
  /* 1282a6ef pop ebx */
  EBX = (pop32());
  /* 1282a6f0 mov esp, ebp */
  ESP = (EBP);
  /* 1282a6f2 pop ebp */
  EBP = (pop32());
  /* 1282a6f3 ret  */
  ESPCHK(0x12829ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x1282a800 (119 bytes, 44 insns) */
void f_1282a800(void) {
  FTRACE(0x1282a800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282a800 push ebp */
  push32((uint32_t)(EBP));
  /* 1282a801 mov ebp, esp */
  EBP = (ESP);
  /* 1282a803 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a804 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a807 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1282a80a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a80d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a810 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1282a813 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a816 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a81a jl 0x1282a842 */
  if ((C.sf!=C.of)) goto L_1282a842;
  /* 1282a81c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a81f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282a821 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1282a824 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1282a826 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1282a82a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1282a830 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1282a833 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a836 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1282a838 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a83b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a83e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1282a840 jmp 0x1282a855 */
  goto L_1282a855;
L_1282a842:;
  /* 1282a842 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a845 push edx */
  push32((uint32_t)(EDX));
  /* 1282a846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a849 push eax */
  push32((uint32_t)(EAX));
  /* 1282a84a call 0x12829850 */
  push32(0x1282a84fu); f_12829850();
  /* 1282a84f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a852 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282a855:;
  /* 1282a855 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a859 jne 0x1282a866 */
  if (!C.zf) goto L_1282a866;
  /* 1282a85b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282a85e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1282a864 jmp 0x1282a873 */
  goto L_1282a873;
L_1282a866:;
  /* 1282a866 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282a869 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1282a86b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a86e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282a871 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1282a873:;
  /* 1282a873 mov esp, ebp */
  ESP = (EBP);
  /* 1282a875 pop ebp */
  EBP = (pop32());
  /* 1282a876 ret  */
  ESPCHK(0x1282a800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x1282a880 (53 bytes, 23 insns) */
void f_1282a880(void) {
  FTRACE(0x1282a880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282a880 push ebp */
  push32((uint32_t)(EBP));
  /* 1282a881 mov ebp, esp */
  EBP = (ESP);
L_1282a883:;
  /* 1282a883 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a886 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a889 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a88c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1282a88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a891 jle 0x1282a8b3 */
  if ((C.zf||C.sf!=C.of)) goto L_1282a8b3;
  /* 1282a893 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282a896 push edx */
  push32((uint32_t)(EDX));
  /* 1282a897 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282a89a push eax */
  push32((uint32_t)(EAX));
  /* 1282a89b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a89e push ecx */
  push32((uint32_t)(ECX));
  /* 1282a89f call 0x1282a800 */
  push32(0x1282a8a4u); f_1282a800();
  /* 1282a8a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a8a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282a8aa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a8ad jne 0x1282a8b1 */
  if (!C.zf) goto L_1282a8b1;
  /* 1282a8af jmp 0x1282a8b3 */
  goto L_1282a8b3;
L_1282a8b1:;
  /* 1282a8b1 jmp 0x1282a883 */
  goto L_1282a883;
L_1282a8b3:;
  /* 1282a8b3 pop ebp */
  EBP = (pop32());
  /* 1282a8b4 ret  */
  ESPCHK(0x1282a880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x1282a8c0 (74 bytes, 31 insns) */
void f_1282a8c0(void) {
  FTRACE(0x1282a8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282a8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282a8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1282a8c3 push ecx */
  push32((uint32_t)(ECX));
L_1282a8c4:;
  /* 1282a8c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a8c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282a8ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a8cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1282a8d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282a8d2 jle 0x1282a906 */
  if ((C.zf||C.sf!=C.of)) goto L_1282a906;
  /* 1282a8d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282a8d7 push edx */
  push32((uint32_t)(EDX));
  /* 1282a8d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282a8db push eax */
  push32((uint32_t)(EAX));
  /* 1282a8dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a8df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282a8e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282a8e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a8e8 push eax */
  push32((uint32_t)(EAX));
  /* 1282a8e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a8ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a8ef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1282a8f2 call 0x1282a800 */
  push32(0x1282a8f7u); f_1282a800();
  /* 1282a8f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a8fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282a8fd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a900 jne 0x1282a904 */
  if (!C.zf) goto L_1282a904;
  /* 1282a902 jmp 0x1282a906 */
  goto L_1282a906;
L_1282a904:;
  /* 1282a904 jmp 0x1282a8c4 */
  goto L_1282a8c4;
L_1282a906:;
  /* 1282a906 mov esp, ebp */
  ESP = (EBP);
  /* 1282a908 pop ebp */
  EBP = (pop32());
  /* 1282a909 ret  */
  ESPCHK(0x1282a8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x1282a910 (26 bytes, 12 insns) */
void f_1282a910(void) {
  FTRACE(0x1282a910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282a910 push ebp */
  push32((uint32_t)(EBP));
  /* 1282a911 mov ebp, esp */
  EBP = (ESP);
  /* 1282a913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a916 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282a918 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a91b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a91e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1282a920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a923 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282a925 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1282a928 pop ebp */
  EBP = (pop32());
  /* 1282a929 ret  */
  ESPCHK(0x1282a910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a930 @ 0x1282a930 (31 bytes, 14 insns) */
void f_1282a930(void) {
  FTRACE(0x1282a930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282a930 push ebp */
  push32((uint32_t)(EBP));
  /* 1282a931 mov ebp, esp */
  EBP = (ESP);
  /* 1282a933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a936 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282a938 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a93b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a93e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1282a940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a943 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282a945 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282a948 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1282a94a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1282a94d pop ebp */
  EBP = (pop32());
  /* 1282a94e ret  */
  ESPCHK(0x1282a930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a950 @ 0x1282a950 (27 bytes, 12 insns) */
void f_1282a950(void) {
  FTRACE(0x1282a950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282a950 push ebp */
  push32((uint32_t)(EBP));
  /* 1282a951 mov ebp, esp */
  EBP = (ESP);
  /* 1282a953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a956 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282a958 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a95b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a95e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1282a960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a963 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282a965 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1282a969 pop ebp */
  EBP = (pop32());
  /* 1282a96a ret  */
  ESPCHK(0x1282a950u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1282a970 (145 bytes, 42 insns) */
void f_1282a970(void) {
  FTRACE(0x1282a970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282a970 push ebp */
  push32((uint32_t)(EBP));
  /* 1282a971 mov ebp, esp */
  EBP = (ESP);
  /* 1282a973 push ecx */
  push32((uint32_t)(ECX));
  /* 1282a974 call 0x1282aa20 */
  push32(0x1282a979u); f_1282aa20();
  /* 1282a979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a97c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1282a97e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282a985 jmp 0x1282a990 */
  goto L_1282a990;
L_1282a987:;
  /* 1282a987 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a98a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282a98d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1282a990:;
  /* 1282a990 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a994 jae 0x1282a9ba */
  if (!C.cf) goto L_1282a9ba;
  /* 1282a996 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a999 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282a99c cmp ecx, dword ptr [eax*8 + 0x1284cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1284cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a9a3 jne 0x1282a9b8 */
  if (!C.zf) goto L_1282a9b8;
  /* 1282a9a5 call 0x1282aa10 */
  push32(0x1282a9aau); f_1282aa10();
  /* 1282a9aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282a9ad mov ecx, dword ptr [edx*8 + 0x1284cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1284cfbc)));
  /* 1282a9b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1282a9b6 jmp 0x1282a9fd */
  goto L_1282a9fd;
L_1282a9b8:;
  /* 1282a9b8 jmp 0x1282a987 */
  goto L_1282a987;
L_1282a9ba:;
  /* 1282a9ba cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a9be jb 0x1282a9d3 */
  if (C.cf) goto L_1282a9d3;
  /* 1282a9c0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a9c4 ja 0x1282a9d3 */
  if ((!C.cf&&!C.zf)) goto L_1282a9d3;
  /* 1282a9c6 call 0x1282aa10 */
  push32(0x1282a9cbu); f_1282aa10();
  /* 1282a9cb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1282a9d1 jmp 0x1282a9fd */
  goto L_1282a9fd;
L_1282a9d3:;
  /* 1282a9d3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a9da jb 0x1282a9f2 */
  if (C.cf) goto L_1282a9f2;
  /* 1282a9dc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282a9e3 ja 0x1282a9f2 */
  if ((!C.cf&&!C.zf)) goto L_1282a9f2;
  /* 1282a9e5 call 0x1282aa10 */
  push32(0x1282a9eau); f_1282aa10();
  /* 1282a9ea mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1282a9f0 jmp 0x1282a9fd */
  goto L_1282a9fd;
L_1282a9f2:;
  /* 1282a9f2 call 0x1282aa10 */
  push32(0x1282a9f7u); f_1282aa10();
  /* 1282a9f7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1282a9fd:;
  /* 1282a9fd mov esp, ebp */
  ESP = (EBP);
  /* 1282a9ff pop ebp */
  EBP = (pop32());
  /* 1282aa00 ret  */
  ESPCHK(0x1282a970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa10 @ 0x1282aa10 (13 bytes, 6 insns) */
void f_1282aa10(void) {
  FTRACE(0x1282aa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282aa10 push ebp */
  push32((uint32_t)(EBP));
  /* 1282aa11 mov ebp, esp */
  EBP = (ESP);
  /* 1282aa13 call 0x12822580 */
  push32(0x1282aa18u); f_12822580();
  /* 1282aa18 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282aa1b pop ebp */
  EBP = (pop32());
  /* 1282aa1c ret  */
  ESPCHK(0x1282aa10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x1282aa20 (13 bytes, 6 insns) */
void f_1282aa20(void) {
  FTRACE(0x1282aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1282aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1282aa23 call 0x12822580 */
  push32(0x1282aa28u); f_12822580();
  /* 1282aa28 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282aa2b pop ebp */
  EBP = (pop32());
  /* 1282aa2c ret  */
  ESPCHK(0x1282aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa30 @ 0x1282aa30 (664 bytes, 262 insns) [15 switch table(s)] */
void f_1282aa30(void) {
  FTRACE(0x1282aa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282aa30 push ebp */
  push32((uint32_t)(EBP));
  /* 1282aa31 mov ebp, esp */
  EBP = (ESP);
  /* 1282aa33 push edi */
  push32((uint32_t)(EDI));
  /* 1282aa34 push esi */
  push32((uint32_t)(ESI));
  /* 1282aa35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1282aa38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282aa3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1282aa3e mov eax, ecx */
  EAX = (ECX);
  /* 1282aa40 mov edx, ecx */
  EDX = (ECX);
  /* 1282aa42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282aa44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282aa46 jbe 0x1282aa50 */
  if ((C.cf||C.zf)) goto L_1282aa50;
  /* 1282aa48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282aa4a jb 0x1282abc8 */
  if (C.cf) goto L_1282abc8;
L_1282aa50:;
  /* 1282aa50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1282aa56 jne 0x1282aa6c */
  if (!C.zf) goto L_1282aa6c;
  /* 1282aa58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282aa5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1282aa5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282aa61 jb 0x1282aa8c */
  if (C.cf) goto L_1282aa8c;
  /* 1282aa63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1282aa65 jmp dword ptr [edx*4 + 0x1282ab78] */
  switch (EDX) {
    case 0: goto L_1282ab88;
    case 1: goto L_1282ab90;
    case 2: goto L_1282ab9c;
    case 3: goto L_1282abb0;
    default: x86_unimpl("switch@0x1282aa65 out of table"); return;
  }
L_1282aa6c:;
  /* 1282aa6c mov eax, edi */
  EAX = (EDI);
  /* 1282aa6e mov edx, 3 */
  EDX = (0x3u);
  /* 1282aa73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282aa76 jb 0x1282aa84 */
  if (C.cf) goto L_1282aa84;
  /* 1282aa78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1282aa7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282aa7d jmp dword ptr [eax*4 + 0x1282aa90] */
  switch (EAX) {
    case 1: goto L_1282aaa0;
    case 2: goto L_1282aacc;
    case 3: goto L_1282aaf0;
    default: x86_unimpl("switch@0x1282aa7d out of table"); return;
  }
L_1282aa84:;
  /* 1282aa84 jmp dword ptr [ecx*4 + 0x1282ab88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1282ab88)))); return;
  /* 1282aa8b nop  */
  /* nop */
L_1282aa8c:;
  /* 1282aa8c jmp dword ptr [ecx*4 + 0x1282ab0c] */
  switch (ECX) {
    case 0: goto L_1282ab6f;
    case 1: goto L_1282ab5c;
    case 2: goto L_1282ab54;
    case 3: goto L_1282ab4c;
    case 4: goto L_1282ab44;
    case 5: goto L_1282ab3c;
    case 6: goto L_1282ab34;
    case 7: goto L_1282ab2c;
    default: x86_unimpl("switch@0x1282aa8c out of table"); return;
  }
  /* 1282aa93 nop  */
  /* nop */
L_1282aaa0:;
  /* 1282aaa0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1282aaa2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1282aaa4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1282aaa6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1282aaa9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1282aaac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1282aaaf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282aab2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1282aab5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1282aab8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1282aabb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282aabe jb 0x1282aa8c */
  if (C.cf) goto L_1282aa8c;
  /* 1282aac0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1282aac2 jmp dword ptr [edx*4 + 0x1282ab78] */
  switch (EDX) {
    case 0: goto L_1282ab88;
    case 1: goto L_1282ab90;
    case 2: goto L_1282ab9c;
    case 3: goto L_1282abb0;
    default: x86_unimpl("switch@0x1282aac2 out of table"); return;
  }
  /* 1282aac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1282aacc:;
  /* 1282aacc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1282aace mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1282aad0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1282aad2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1282aad5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282aad8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1282aadb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1282aade add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1282aae1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282aae4 jb 0x1282aa8c */
  if (C.cf) goto L_1282aa8c;
  /* 1282aae6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1282aae8 jmp dword ptr [edx*4 + 0x1282ab78] */
  switch (EDX) {
    case 0: goto L_1282ab88;
    case 1: goto L_1282ab90;
    case 2: goto L_1282ab9c;
    case 3: goto L_1282abb0;
    default: x86_unimpl("switch@0x1282aae8 out of table"); return;
  }
  /* 1282aaef nop  */
  /* nop */
L_1282aaf0:;
  /* 1282aaf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1282aaf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1282aaf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1282aaf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1282aaf7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282aafa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1282aafb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282aafe jb 0x1282aa8c */
  if (C.cf) goto L_1282aa8c;
  /* 1282ab00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1282ab02 jmp dword ptr [edx*4 + 0x1282ab78] */
  switch (EDX) {
    case 0: goto L_1282ab88;
    case 1: goto L_1282ab90;
    case 2: goto L_1282ab9c;
    case 3: goto L_1282abb0;
    default: x86_unimpl("switch@0x1282ab02 out of table"); return;
  }
  /* 1282ab09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1282ab2c:;
  /* 1282ab2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1282ab30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1282ab34:;
  /* 1282ab34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1282ab38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1282ab3c:;
  /* 1282ab3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1282ab40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1282ab44:;
  /* 1282ab44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1282ab48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1282ab4c:;
  /* 1282ab4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1282ab50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1282ab54:;
  /* 1282ab54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1282ab58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1282ab5c:;
  /* 1282ab5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1282ab60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1282ab64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1282ab6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ab6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1282ab6f:;
  /* 1282ab6f jmp dword ptr [edx*4 + 0x1282ab78] */
  switch (EDX) {
    case 0: goto L_1282ab88;
    case 1: goto L_1282ab90;
    case 2: goto L_1282ab9c;
    case 3: goto L_1282abb0;
    default: x86_unimpl("switch@0x1282ab6f out of table"); return;
  }
  /* 1282ab76 mov edi, edi */
  EDI = (EDI);
L_1282ab88:;
  /* 1282ab88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ab8b pop esi */
  ESI = (pop32());
  /* 1282ab8c pop edi */
  EDI = (pop32());
  /* 1282ab8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282ab8e ret  */
  ESPCHK(0x1282aa30u, _esp0);
  ESP += 4; return;
  /* 1282ab8f nop  */
  /* nop */
L_1282ab90:;
  /* 1282ab90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1282ab92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1282ab94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ab97 pop esi */
  ESI = (pop32());
  /* 1282ab98 pop edi */
  EDI = (pop32());
  /* 1282ab99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282ab9a ret  */
  ESPCHK(0x1282aa30u, _esp0);
  ESP += 4; return;
  /* 1282ab9b nop  */
  /* nop */
L_1282ab9c:;
  /* 1282ab9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1282ab9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1282aba0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1282aba3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1282aba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282aba9 pop esi */
  ESI = (pop32());
  /* 1282abaa pop edi */
  EDI = (pop32());
  /* 1282abab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282abac ret  */
  ESPCHK(0x1282aa30u, _esp0);
  ESP += 4; return;
  /* 1282abad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1282abb0:;
  /* 1282abb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1282abb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1282abb4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1282abb7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1282abba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1282abbd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1282abc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282abc3 pop esi */
  ESI = (pop32());
  /* 1282abc4 pop edi */
  EDI = (pop32());
  /* 1282abc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282abc6 ret  */
  ESPCHK(0x1282aa30u, _esp0);
  ESP += 4; return;
  /* 1282abc7 nop  */
  /* nop */
L_1282abc8:;
  /* 1282abc8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1282abcc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1282abd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1282abd6 jne 0x1282abfc */
  if (!C.zf) goto L_1282abfc;
  /* 1282abd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282abdb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1282abde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282abe1 jb 0x1282abf0 */
  if (C.cf) goto L_1282abf0;
  /* 1282abe3 std  */
  C.df=1;
  /* 1282abe4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1282abe6 cld  */
  C.df=0;
  /* 1282abe7 jmp dword ptr [edx*4 + 0x1282ad10] */
  switch (EDX) {
    case 0: goto L_1282ad20;
    case 1: goto L_1282ad28;
    case 2: goto L_1282ad38;
    case 3: goto L_1282ad4c;
    default: x86_unimpl("switch@0x1282abe7 out of table"); return;
  }
  /* 1282abee mov edi, edi */
  EDI = (EDI);
L_1282abf0:;
  /* 1282abf0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282abf2 jmp dword ptr [ecx*4 + 0x1282acc0] */
  switch (ECX) {
    case 0: goto L_1282ad07;
    default: x86_unimpl("switch@0x1282abf2 out of table"); return;
  }
  /* 1282abf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1282abfc:;
  /* 1282abfc mov eax, edi */
  EAX = (EDI);
  /* 1282abfe mov edx, 3 */
  EDX = (0x3u);
  /* 1282ac03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ac06 jb 0x1282ac14 */
  if (C.cf) goto L_1282ac14;
  /* 1282ac08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1282ac0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ac0d jmp dword ptr [eax*4 + 0x1282ac18] */
  switch (EAX) {
    case 1: goto L_1282ac28;
    case 2: goto L_1282ac48;
    case 3: goto L_1282ac70;
    default: x86_unimpl("switch@0x1282ac0d out of table"); return;
  }
L_1282ac14:;
  /* 1282ac14 jmp dword ptr [ecx*4 + 0x1282ad10] */
  switch (ECX) {
    case 0: goto L_1282ad20;
    case 1: goto L_1282ad28;
    case 2: goto L_1282ad38;
    case 3: goto L_1282ad4c;
    default: x86_unimpl("switch@0x1282ac14 out of table"); return;
  }
  /* 1282ac1b nop  */
  /* nop */
L_1282ac28:;
  /* 1282ac28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282ac2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1282ac2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1282ac30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1282ac31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282ac34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1282ac35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ac38 jb 0x1282abf0 */
  if (C.cf) goto L_1282abf0;
  /* 1282ac3a std  */
  C.df=1;
  /* 1282ac3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1282ac3d cld  */
  C.df=0;
  /* 1282ac3e jmp dword ptr [edx*4 + 0x1282ad10] */
  switch (EDX) {
    case 0: goto L_1282ad20;
    case 1: goto L_1282ad28;
    case 2: goto L_1282ad38;
    case 3: goto L_1282ad4c;
    default: x86_unimpl("switch@0x1282ac3e out of table"); return;
  }
  /* 1282ac45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1282ac48:;
  /* 1282ac48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282ac4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1282ac4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1282ac50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1282ac53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282ac56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1282ac59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ac5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ac5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ac62 jb 0x1282abf0 */
  if (C.cf) goto L_1282abf0;
  /* 1282ac64 std  */
  C.df=1;
  /* 1282ac65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1282ac67 cld  */
  C.df=0;
  /* 1282ac68 jmp dword ptr [edx*4 + 0x1282ad10] */
  switch (EDX) {
    case 0: goto L_1282ad20;
    case 1: goto L_1282ad28;
    case 2: goto L_1282ad38;
    case 3: goto L_1282ad4c;
    default: x86_unimpl("switch@0x1282ac68 out of table"); return;
  }
  /* 1282ac6f nop  */
  /* nop */
L_1282ac70:;
  /* 1282ac70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282ac73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1282ac75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1282ac78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1282ac7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1282ac7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1282ac81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1282ac84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1282ac87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ac8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ac8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ac90 jb 0x1282abf0 */
  if (C.cf) goto L_1282abf0;
  /* 1282ac96 std  */
  C.df=1;
  /* 1282ac97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1282ac99 cld  */
  C.df=0;
  /* 1282ac9a jmp dword ptr [edx*4 + 0x1282ad10] */
  switch (EDX) {
    case 0: goto L_1282ad20;
    case 1: goto L_1282ad28;
    case 2: goto L_1282ad38;
    case 3: goto L_1282ad4c;
    default: x86_unimpl("switch@0x1282ac9a out of table"); return;
  }
  /* 1282aca1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1282aca4 les ebp, ptr [edx + eax*4 - 0x7d5333ee] */
  x86_unimpl("les @ 0x1282aca4");
  /* 1282acab adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1282acad lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1282acae adc byte ptr [edx], 0xdc */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xdcu),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1282acb1 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1282acb2 adc byte ptr [edx], 0xe4 */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xe4u),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1282acb5 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1282acb6 adc byte ptr [edx], 0xec */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xecu),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1282acb9 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1282acba adc byte ptr [edx], 0xf4 */
  { uint32_t _a=(r8((uint32_t)(EDX))),_b=(0xf4u),_r=_a+_b+C.cf; w8((uint32_t)(EDX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1282acbd lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1282acc4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1282acc8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1282accc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1282acd0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1282acd4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1282acd8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1282acdc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1282ace0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1282ace4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1282ace8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1282acec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1282acf0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1282acf4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1282acf8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1282acfc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1282ad03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ad05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1282ad07:;
  /* 1282ad07 jmp dword ptr [edx*4 + 0x1282ad10] */
  switch (EDX) {
    case 0: goto L_1282ad20;
    case 1: goto L_1282ad28;
    case 2: goto L_1282ad38;
    case 3: goto L_1282ad4c;
    default: x86_unimpl("switch@0x1282ad07 out of table"); return;
  }
  /* 1282ad0e mov edi, edi */
  EDI = (EDI);
L_1282ad20:;
  /* 1282ad20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ad23 pop esi */
  ESI = (pop32());
  /* 1282ad24 pop edi */
  EDI = (pop32());
  /* 1282ad25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282ad26 ret  */
  ESPCHK(0x1282aa30u, _esp0);
  ESP += 4; return;
  /* 1282ad27 nop  */
  /* nop */
L_1282ad28:;
  /* 1282ad28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282ad2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1282ad2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ad31 pop esi */
  ESI = (pop32());
  /* 1282ad32 pop edi */
  EDI = (pop32());
  /* 1282ad33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282ad34 ret  */
  ESPCHK(0x1282aa30u, _esp0);
  ESP += 4; return;
  /* 1282ad35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1282ad38:;
  /* 1282ad38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282ad3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1282ad3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1282ad41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1282ad44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ad47 pop esi */
  ESI = (pop32());
  /* 1282ad48 pop edi */
  EDI = (pop32());
  /* 1282ad49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282ad4a ret  */
  ESPCHK(0x1282aa30u, _esp0);
  ESP += 4; return;
  /* 1282ad4b nop  */
  /* nop */
L_1282ad4c:;
  /* 1282ad4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1282ad4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1282ad52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1282ad55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1282ad58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1282ad5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1282ad5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ad61 pop esi */
  ESI = (pop32());
  /* 1282ad62 pop edi */
  EDI = (pop32());
  /* 1282ad63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282ad64 ret  */
  ESPCHK(0x1282aa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad70 @ 0x1282ad70 (421 bytes, 148 insns) */
void f_1282ad70(void) {
  FTRACE(0x1282ad70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282ad70 push ebp */
  push32((uint32_t)(EBP));
  /* 1282ad71 mov ebp, esp */
  EBP = (ESP);
  /* 1282ad73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1282ad75 push 0x12849f28 */
  push32((uint32_t)(0x12849f28u));
  /* 1282ad7a push 0x1282bc48 */
  push32((uint32_t)(0x1282bc48u));
  /* 1282ad7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1282ad85 push eax */
  push32((uint32_t)(EAX));
  /* 1282ad86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1282ad8d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ad90 push ebx */
  push32((uint32_t)(EBX));
  /* 1282ad91 push esi */
  push32((uint32_t)(ESI));
  /* 1282ad92 push edi */
  push32((uint32_t)(EDI));
  /* 1282ad93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1282ad96 cmp dword ptr [0x1284e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ad9d jne 0x1282adee */
  if (!C.zf) goto L_1282adee;
  /* 1282ad9f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1282ada2 push eax */
  push32((uint32_t)(EAX));
  /* 1282ada3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282ada5 push 0x12849f24 */
  push32((uint32_t)(0x12849f24u));
  /* 1282adaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1282adac call dword ptr [0x12850324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850324))), 0x1282adb2u);
  /* 1282adb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282adb4 je 0x1282adc2 */
  if (C.zf) goto L_1282adc2;
  /* 1282adb6 mov dword ptr [0x1284e67c], 1 */
  w32((uint32_t)(0x1284e67c), (0x1u));
  /* 1282adc0 jmp 0x1282adee */
  goto L_1282adee;
L_1282adc2:;
  /* 1282adc2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1282adc5 push ecx */
  push32((uint32_t)(ECX));
  /* 1282adc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282adc8 push 0x12849f20 */
  push32((uint32_t)(0x12849f20u));
  /* 1282adcd push 1 */
  push32((uint32_t)(0x1u));
  /* 1282adcf push 0 */
  push32((uint32_t)(0x0u));
  /* 1282add1 call dword ptr [0x12850320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850320))), 0x1282add7u);
  /* 1282add7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282add9 je 0x1282ade7 */
  if (C.zf) goto L_1282ade7;
  /* 1282addb mov dword ptr [0x1284e67c], 2 */
  w32((uint32_t)(0x1284e67c), (0x2u));
  /* 1282ade5 jmp 0x1282adee */
  goto L_1282adee;
L_1282ade7:;
  /* 1282ade7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282ade9 jmp 0x1282af18 */
  goto L_1282af18;
L_1282adee:;
  /* 1282adee cmp dword ptr [0x1284e67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1284e67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282adf5 jne 0x1282ae25 */
  if (!C.zf) goto L_1282ae25;
  /* 1282adf7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282adfb jne 0x1282ae06 */
  if (!C.zf) goto L_1282ae06;
  /* 1282adfd mov edx, dword ptr [0x1284e688] */
  EDX = (r32((uint32_t)(0x1284e688)));
  /* 1282ae03 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1282ae06:;
  /* 1282ae06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282ae09 push eax */
  push32((uint32_t)(EAX));
  /* 1282ae0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ae0d push ecx */
  push32((uint32_t)(ECX));
  /* 1282ae0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282ae11 push edx */
  push32((uint32_t)(EDX));
  /* 1282ae12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ae15 push eax */
  push32((uint32_t)(EAX));
  /* 1282ae16 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1282ae19 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ae1a call dword ptr [0x12850320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850320))), 0x1282ae20u);
  /* 1282ae20 jmp 0x1282af18 */
  goto L_1282af18;
L_1282ae25:;
  /* 1282ae25 cmp dword ptr [0x1284e67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ae2c jne 0x1282af16 */
  if (!C.zf) goto L_1282af16;
  /* 1282ae32 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ae36 jne 0x1282ae41 */
  if (!C.zf) goto L_1282ae41;
  /* 1282ae38 mov edx, dword ptr [0x1284e698] */
  EDX = (r32((uint32_t)(0x1284e698)));
  /* 1282ae3e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1282ae41:;
  /* 1282ae41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282ae43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282ae45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ae48 push eax */
  push32((uint32_t)(EAX));
  /* 1282ae49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282ae4c push ecx */
  push32((uint32_t)(ECX));
  /* 1282ae4d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1282ae50 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282ae52 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ae54 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1282ae57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ae5a push edx */
  push32((uint32_t)(EDX));
  /* 1282ae5b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282ae5e push eax */
  push32((uint32_t)(EAX));
  /* 1282ae5f call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x1282ae65u);
  /* 1282ae65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1282ae68 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ae6c jne 0x1282ae75 */
  if (!C.zf) goto L_1282ae75;
  /* 1282ae6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282ae70 jmp 0x1282af18 */
  goto L_1282af18;
L_1282ae75:;
  /* 1282ae75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282ae7c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282ae7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1282ae81 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ae84 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1282ae86 call 0x12825ce0 */
  push32(0x1282ae8bu); f_12825ce0();
  /* 1282ae8b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1282ae8e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1282ae91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282ae94 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1282ae97 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282ae9a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1282ae9c push edx */
  push32((uint32_t)(EDX));
  /* 1282ae9d push 0 */
  push32((uint32_t)(0x0u));
  /* 1282ae9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282aea2 push eax */
  push32((uint32_t)(EAX));
  /* 1282aea3 call 0x128268b0 */
  push32(0x1282aea8u); f_128268b0();
  /* 1282aea8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282aeab mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1282aeb2 jmp 0x1282aecb */
  goto L_1282aecb;
  /* 1282aeb4 mov eax, 1 */
  EAX = (0x1u);
  /* 1282aeb9 ret  */
  ESPCHK(0x1282ad70u, _esp0);
  ESP += 4; return;
  /* 1282aeba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1282aebd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1282aec4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1282aecb:;
  /* 1282aecb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282aecf jne 0x1282aed5 */
  if (!C.zf) goto L_1282aed5;
  /* 1282aed1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282aed3 jmp 0x1282af18 */
  goto L_1282af18;
L_1282aed5:;
  /* 1282aed5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282aed8 push ecx */
  push32((uint32_t)(ECX));
  /* 1282aed9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282aedc push edx */
  push32((uint32_t)(EDX));
  /* 1282aedd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282aee0 push eax */
  push32((uint32_t)(EAX));
  /* 1282aee1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282aee4 push ecx */
  push32((uint32_t)(ECX));
  /* 1282aee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282aee7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282aeea push edx */
  push32((uint32_t)(EDX));
  /* 1282aeeb call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x1282aef1u);
  /* 1282aef1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1282aef4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282aef8 jne 0x1282aefe */
  if (!C.zf) goto L_1282aefe;
  /* 1282aefa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282aefc jmp 0x1282af18 */
  goto L_1282af18;
L_1282aefe:;
  /* 1282aefe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282af01 push eax */
  push32((uint32_t)(EAX));
  /* 1282af02 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1282af05 push ecx */
  push32((uint32_t)(ECX));
  /* 1282af06 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282af09 push edx */
  push32((uint32_t)(EDX));
  /* 1282af0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282af0d push eax */
  push32((uint32_t)(EAX));
  /* 1282af0e call dword ptr [0x12850324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850324))), 0x1282af14u);
  /* 1282af14 jmp 0x1282af18 */
  goto L_1282af18;
L_1282af16:;
  /* 1282af16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282af18:;
  /* 1282af18 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1282af1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282af1e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1282af25 pop edi */
  EDI = (pop32());
  /* 1282af26 pop esi */
  ESI = (pop32());
  /* 1282af27 pop ebx */
  EBX = (pop32());
  /* 1282af28 mov esp, ebp */
  ESP = (EBP);
  /* 1282af2a pop ebp */
  EBP = (pop32());
  /* 1282af2b ret  */
  ESPCHK(0x1282ad70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af30 @ 0x1282af30 (727 bytes, 263 insns) */
void f_1282af30(void) {
  FTRACE(0x1282af30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282af30 push ebp */
  push32((uint32_t)(EBP));
  /* 1282af31 mov ebp, esp */
  EBP = (ESP);
  /* 1282af33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1282af35 push 0x12849f38 */
  push32((uint32_t)(0x12849f38u));
  /* 1282af3a push 0x1282bc48 */
  push32((uint32_t)(0x1282bc48u));
  /* 1282af3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1282af45 push eax */
  push32((uint32_t)(EAX));
  /* 1282af46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1282af4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282af50 push ebx */
  push32((uint32_t)(EBX));
  /* 1282af51 push esi */
  push32((uint32_t)(ESI));
  /* 1282af52 push edi */
  push32((uint32_t)(EDI));
  /* 1282af53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1282af56 cmp dword ptr [0x1284e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282af5d jne 0x1282afb6 */
  if (!C.zf) goto L_1282afb6;
  /* 1282af5f push 0 */
  push32((uint32_t)(0x0u));
  /* 1282af61 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282af63 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282af65 push 0x12849f24 */
  push32((uint32_t)(0x12849f24u));
  /* 1282af6a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1282af6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1282af71 call dword ptr [0x12850328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850328))), 0x1282af77u);
  /* 1282af77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282af79 je 0x1282af87 */
  if (C.zf) goto L_1282af87;
  /* 1282af7b mov dword ptr [0x1284e6a0], 1 */
  w32((uint32_t)(0x1284e6a0), (0x1u));
  /* 1282af85 jmp 0x1282afb6 */
  goto L_1282afb6;
L_1282af87:;
  /* 1282af87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282af89 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282af8b push 1 */
  push32((uint32_t)(0x1u));
  /* 1282af8d push 0x12849f20 */
  push32((uint32_t)(0x12849f20u));
  /* 1282af92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1282af97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282af99 call dword ptr [0x12850308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850308))), 0x1282af9fu);
  /* 1282af9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282afa1 je 0x1282afaf */
  if (C.zf) goto L_1282afaf;
  /* 1282afa3 mov dword ptr [0x1284e6a0], 2 */
  w32((uint32_t)(0x1284e6a0), (0x2u));
  /* 1282afad jmp 0x1282afb6 */
  goto L_1282afb6;
L_1282afaf:;
  /* 1282afaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282afb1 jmp 0x1282b221 */
  goto L_1282b221;
L_1282afb6:;
  /* 1282afb6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282afba jle 0x1282afcf */
  if ((C.zf||C.sf!=C.of)) goto L_1282afcf;
  /* 1282afbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282afbf push eax */
  push32((uint32_t)(EAX));
  /* 1282afc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282afc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282afc4 call 0x1282b240 */
  push32(0x1282afc9u); f_1282b240();
  /* 1282afc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282afcc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1282afcf:;
  /* 1282afcf cmp dword ptr [0x1284e6a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282afd6 jne 0x1282affb */
  if (!C.zf) goto L_1282affb;
  /* 1282afd8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1282afdb push edx */
  push32((uint32_t)(EDX));
  /* 1282afdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282afdf push eax */
  push32((uint32_t)(EAX));
  /* 1282afe0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282afe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282afe4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282afe7 push edx */
  push32((uint32_t)(EDX));
  /* 1282afe8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282afeb push eax */
  push32((uint32_t)(EAX));
  /* 1282afec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282afef push ecx */
  push32((uint32_t)(ECX));
  /* 1282aff0 call dword ptr [0x12850308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850308))), 0x1282aff6u);
  /* 1282aff6 jmp 0x1282b221 */
  goto L_1282b221;
L_1282affb:;
  /* 1282affb cmp dword ptr [0x1284e6a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b002 jne 0x1282b21f */
  if (!C.zf) goto L_1282b21f;
  /* 1282b008 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b00c jne 0x1282b017 */
  if (!C.zf) goto L_1282b017;
  /* 1282b00e mov edx, dword ptr [0x1284e698] */
  EDX = (r32((uint32_t)(0x1284e698)));
  /* 1282b014 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1282b017:;
  /* 1282b017 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b019 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b01b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282b01e push eax */
  push32((uint32_t)(EAX));
  /* 1282b01f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282b022 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b023 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1282b026 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282b028 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b02a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1282b02d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b030 push edx */
  push32((uint32_t)(EDX));
  /* 1282b031 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1282b034 push eax */
  push32((uint32_t)(EAX));
  /* 1282b035 call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x1282b03bu);
  /* 1282b03b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1282b03e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b042 jne 0x1282b04b */
  if (!C.zf) goto L_1282b04b;
  /* 1282b044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b046 jmp 0x1282b221 */
  goto L_1282b221;
L_1282b04b:;
  /* 1282b04b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282b052 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282b055 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1282b057 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b05a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1282b05c call 0x12825ce0 */
  push32(0x1282b061u); f_12825ce0();
  /* 1282b061 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1282b064 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1282b067 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282b06a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1282b06d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1282b074 jmp 0x1282b08d */
  goto L_1282b08d;
  /* 1282b076 mov eax, 1 */
  EAX = (0x1u);
  /* 1282b07b ret  */
  ESPCHK(0x1282af30u, _esp0);
  ESP += 4; return;
  /* 1282b07c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1282b07f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1282b086 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1282b08d:;
  /* 1282b08d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b091 jne 0x1282b09a */
  if (!C.zf) goto L_1282b09a;
  /* 1282b093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b095 jmp 0x1282b221 */
  goto L_1282b221;
L_1282b09a:;
  /* 1282b09a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282b09d push edx */
  push32((uint32_t)(EDX));
  /* 1282b09e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282b0a1 push eax */
  push32((uint32_t)(EAX));
  /* 1282b0a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282b0a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b0a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282b0a9 push edx */
  push32((uint32_t)(EDX));
  /* 1282b0aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1282b0ac mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1282b0af push eax */
  push32((uint32_t)(EAX));
  /* 1282b0b0 call dword ptr [0x1285031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285031c))), 0x1282b0b6u);
  /* 1282b0b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282b0b8 jne 0x1282b0c1 */
  if (!C.zf) goto L_1282b0c1;
  /* 1282b0ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b0bc jmp 0x1282b221 */
  goto L_1282b221;
L_1282b0c1:;
  /* 1282b0c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b0c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b0c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282b0c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b0c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282b0cc push edx */
  push32((uint32_t)(EDX));
  /* 1282b0cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b0d0 push eax */
  push32((uint32_t)(EAX));
  /* 1282b0d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b0d5 call dword ptr [0x12850328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850328))), 0x1282b0dbu);
  /* 1282b0db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1282b0de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b0e2 jne 0x1282b0eb */
  if (!C.zf) goto L_1282b0eb;
  /* 1282b0e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b0e6 jmp 0x1282b221 */
  goto L_1282b221;
L_1282b0eb:;
  /* 1282b0eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b0ee and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1282b0f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282b0f6 je 0x1282b13b */
  if (C.zf) goto L_1282b13b;
  /* 1282b0f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b0fc je 0x1282b136 */
  if (C.zf) goto L_1282b136;
  /* 1282b0fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1282b101 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b104 jle 0x1282b10d */
  if ((C.zf||C.sf!=C.of)) goto L_1282b10d;
  /* 1282b106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b108 jmp 0x1282b221 */
  goto L_1282b221;
L_1282b10d:;
  /* 1282b10d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1282b110 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b111 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282b114 push edx */
  push32((uint32_t)(EDX));
  /* 1282b115 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282b118 push eax */
  push32((uint32_t)(EAX));
  /* 1282b119 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282b11c push ecx */
  push32((uint32_t)(ECX));
  /* 1282b11d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b120 push edx */
  push32((uint32_t)(EDX));
  /* 1282b121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b124 push eax */
  push32((uint32_t)(EAX));
  /* 1282b125 call dword ptr [0x12850328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850328))), 0x1282b12bu);
  /* 1282b12b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282b12d jne 0x1282b136 */
  if (!C.zf) goto L_1282b136;
  /* 1282b12f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b131 jmp 0x1282b221 */
  goto L_1282b221;
L_1282b136:;
  /* 1282b136 jmp 0x1282b21a */
  goto L_1282b21a;
L_1282b13b:;
  /* 1282b13b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1282b13e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1282b141 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1282b148 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282b14b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1282b14d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b150 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1282b152 call 0x12825ce0 */
  push32(0x1282b157u); f_12825ce0();
  /* 1282b157 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1282b15a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1282b15d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1282b160 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1282b163 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1282b16a jmp 0x1282b183 */
  goto L_1282b183;
  /* 1282b16c mov eax, 1 */
  EAX = (0x1u);
  /* 1282b171 ret  */
  ESPCHK(0x1282af30u, _esp0);
  ESP += 4; return;
  /* 1282b172 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1282b175 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1282b17c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1282b183:;
  /* 1282b183 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b187 jne 0x1282b190 */
  if (!C.zf) goto L_1282b190;
  /* 1282b189 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b18b jmp 0x1282b221 */
  goto L_1282b221;
L_1282b190:;
  /* 1282b190 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282b193 push eax */
  push32((uint32_t)(EAX));
  /* 1282b194 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282b197 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b198 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282b19b push edx */
  push32((uint32_t)(EDX));
  /* 1282b19c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282b19f push eax */
  push32((uint32_t)(EAX));
  /* 1282b1a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b1a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b1a7 push edx */
  push32((uint32_t)(EDX));
  /* 1282b1a8 call dword ptr [0x12850328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850328))), 0x1282b1aeu);
  /* 1282b1ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282b1b0 jne 0x1282b1b6 */
  if (!C.zf) goto L_1282b1b6;
  /* 1282b1b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b1b4 jmp 0x1282b221 */
  goto L_1282b221;
L_1282b1b6:;
  /* 1282b1b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b1ba jne 0x1282b1ea */
  if (!C.zf) goto L_1282b1ea;
  /* 1282b1bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b1be push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b1c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b1c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b1c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282b1c7 push eax */
  push32((uint32_t)(EAX));
  /* 1282b1c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282b1cb push ecx */
  push32((uint32_t)(ECX));
  /* 1282b1cc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1282b1d1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1282b1d4 push edx */
  push32((uint32_t)(EDX));
  /* 1282b1d5 call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x1282b1dbu);
  /* 1282b1db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1282b1de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b1e2 jne 0x1282b1e8 */
  if (!C.zf) goto L_1282b1e8;
  /* 1282b1e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b1e6 jmp 0x1282b221 */
  goto L_1282b221;
L_1282b1e8:;
  /* 1282b1e8 jmp 0x1282b21a */
  goto L_1282b21a;
L_1282b1ea:;
  /* 1282b1ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b1ec push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b1ee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1282b1f1 push eax */
  push32((uint32_t)(EAX));
  /* 1282b1f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1282b1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b1f6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282b1f9 push edx */
  push32((uint32_t)(EDX));
  /* 1282b1fa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282b1fd push eax */
  push32((uint32_t)(EAX));
  /* 1282b1fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1282b203 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1282b206 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b207 call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x1282b20du);
  /* 1282b20d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1282b210 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b214 jne 0x1282b21a */
  if (!C.zf) goto L_1282b21a;
  /* 1282b216 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b218 jmp 0x1282b221 */
  goto L_1282b221;
L_1282b21a:;
  /* 1282b21a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1282b21d jmp 0x1282b221 */
  goto L_1282b221;
L_1282b21f:;
  /* 1282b21f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282b221:;
  /* 1282b221 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1282b224 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282b227 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1282b22e pop edi */
  EDI = (pop32());
  /* 1282b22f pop esi */
  ESI = (pop32());
  /* 1282b230 pop ebx */
  EBX = (pop32());
  /* 1282b231 mov esp, ebp */
  ESP = (EBP);
  /* 1282b233 pop ebp */
  EBP = (pop32());
  /* 1282b234 ret  */
  ESPCHK(0x1282af30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b240 @ 0x1282b240 (80 bytes, 32 insns) */
void f_1282b240(void) {
  FTRACE(0x1282b240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b240 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b241 mov ebp, esp */
  EBP = (ESP);
  /* 1282b243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b246 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b249 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282b24c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b24f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1282b252:;
  /* 1282b252 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282b255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282b258 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b25b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282b25e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282b260 je 0x1282b277 */
  if (C.zf) goto L_1282b277;
  /* 1282b262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b265 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282b268 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282b26a je 0x1282b277 */
  if (C.zf) goto L_1282b277;
  /* 1282b26c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b26f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b272 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282b275 jmp 0x1282b252 */
  goto L_1282b252;
L_1282b277:;
  /* 1282b277 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b27a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282b27d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282b27f jne 0x1282b289 */
  if (!C.zf) goto L_1282b289;
  /* 1282b281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b284 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b287 jmp 0x1282b28c */
  goto L_1282b28c;
L_1282b289:;
  /* 1282b289 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1282b28c:;
  /* 1282b28c mov esp, ebp */
  ESP = (EBP);
  /* 1282b28e pop ebp */
  EBP = (pop32());
  /* 1282b28f ret  */
  ESPCHK(0x1282b240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b290 @ 0x1282b290 (130 bytes, 43 insns) */
void f_1282b290(void) {
  FTRACE(0x1282b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b290 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b291 mov ebp, esp */
  EBP = (ESP);
  /* 1282b293 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b297 cmp eax, dword ptr [0x1284ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b29d jae 0x1282b2c1 */
  if (!C.cf) goto L_1282b2c1;
  /* 1282b29f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b2a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282b2a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b2a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282b2ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b2ae mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282b2b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1282b2ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1282b2bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282b2bf jne 0x1282b2dc */
  if (!C.zf) goto L_1282b2dc;
L_1282b2c1:;
  /* 1282b2c1 call 0x1282aa10 */
  push32(0x1282b2c6u); f_1282aa10();
  /* 1282b2c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282b2cc call 0x1282aa20 */
  push32(0x1282b2d1u); f_1282aa20();
  /* 1282b2d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1282b2d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282b2da jmp 0x1282b30e */
  goto L_1282b30e;
L_1282b2dc:;
  /* 1282b2dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b2df push edx */
  push32((uint32_t)(EDX));
  /* 1282b2e0 call 0x1282c230 */
  push32(0x1282b2e5u); f_1282c230();
  /* 1282b2e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b2e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282b2eb push eax */
  push32((uint32_t)(EAX));
  /* 1282b2ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b2ef push ecx */
  push32((uint32_t)(ECX));
  /* 1282b2f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b2f3 push edx */
  push32((uint32_t)(EDX));
  /* 1282b2f4 call 0x1282b320 */
  push32(0x1282b2f9u); f_1282b320();
  /* 1282b2f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b2fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282b2ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b302 push eax */
  push32((uint32_t)(EAX));
  /* 1282b303 call 0x1282c2c0 */
  push32(0x1282b308u); f_1282c2c0();
  /* 1282b308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b30b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1282b30e:;
  /* 1282b30e mov esp, ebp */
  ESP = (EBP);
  /* 1282b310 pop ebp */
  EBP = (pop32());
  /* 1282b311 ret  */
  ESPCHK(0x1282b290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x1282b320 (178 bytes, 56 insns) */
void f_1282b320(void) {
  FTRACE(0x1282b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b320 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b321 mov ebp, esp */
  EBP = (ESP);
  /* 1282b323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b329 push eax */
  push32((uint32_t)(EAX));
  /* 1282b32a call 0x1282c0b0 */
  push32(0x1282b32fu); f_1282c0b0();
  /* 1282b32f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b332 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1282b335 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b339 jne 0x1282b34e */
  if (!C.zf) goto L_1282b34e;
  /* 1282b33b call 0x1282aa10 */
  push32(0x1282b340u); f_1282aa10();
  /* 1282b340 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282b346 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282b349 jmp 0x1282b3ce */
  goto L_1282b3ce;
L_1282b34e:;
  /* 1282b34e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282b351 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b352 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b354 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b357 push edx */
  push32((uint32_t)(EDX));
  /* 1282b358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282b35b push eax */
  push32((uint32_t)(EAX));
  /* 1282b35c call dword ptr [0x1285032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285032c))), 0x1282b362u);
  /* 1282b362 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282b365 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b369 jne 0x1282b376 */
  if (!C.zf) goto L_1282b376;
  /* 1282b36b call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x1282b371u);
  /* 1282b371 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282b374 jmp 0x1282b37d */
  goto L_1282b37d;
L_1282b376:;
  /* 1282b376 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1282b37d:;
  /* 1282b37d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b381 je 0x1282b394 */
  if (C.zf) goto L_1282b394;
  /* 1282b383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b386 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b387 call 0x1282a970 */
  push32(0x1282b38cu); f_1282a970();
  /* 1282b38c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b38f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282b392 jmp 0x1282b3ce */
  goto L_1282b3ce;
L_1282b394:;
  /* 1282b394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b397 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1282b39a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b39d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1282b3a0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b3a3 mov ecx, dword ptr [edx*4 + 0x1284fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1284fe60)));
  /* 1282b3aa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1282b3ae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1282b3b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b3b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282b3b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b3ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282b3bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b3c0 mov eax, dword ptr [eax*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282b3c7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1282b3cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1282b3ce:;
  /* 1282b3ce mov esp, ebp */
  ESP = (EBP);
  /* 1282b3d0 pop ebp */
  EBP = (pop32());
  /* 1282b3d1 ret  */
  ESPCHK(0x1282b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3e0 @ 0x1282b3e0 (130 bytes, 43 insns) */
void f_1282b3e0(void) {
  FTRACE(0x1282b3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1282b3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b3e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b3e7 cmp eax, dword ptr [0x1284ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b3ed jae 0x1282b411 */
  if (!C.cf) goto L_1282b411;
  /* 1282b3ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b3f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282b3f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b3f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282b3fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b3fe mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282b405 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1282b40a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1282b40d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282b40f jne 0x1282b42c */
  if (!C.zf) goto L_1282b42c;
L_1282b411:;
  /* 1282b411 call 0x1282aa10 */
  push32(0x1282b416u); f_1282aa10();
  /* 1282b416 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282b41c call 0x1282aa20 */
  push32(0x1282b421u); f_1282aa20();
  /* 1282b421 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1282b427 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282b42a jmp 0x1282b45e */
  goto L_1282b45e;
L_1282b42c:;
  /* 1282b42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b42f push edx */
  push32((uint32_t)(EDX));
  /* 1282b430 call 0x1282c230 */
  push32(0x1282b435u); f_1282c230();
  /* 1282b435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b438 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282b43b push eax */
  push32((uint32_t)(EAX));
  /* 1282b43c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b43f push ecx */
  push32((uint32_t)(ECX));
  /* 1282b440 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b443 push edx */
  push32((uint32_t)(EDX));
  /* 1282b444 call 0x1282b470 */
  push32(0x1282b449u); f_1282b470();
  /* 1282b449 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b44c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282b44f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b452 push eax */
  push32((uint32_t)(EAX));
  /* 1282b453 call 0x1282c2c0 */
  push32(0x1282b458u); f_1282c2c0();
  /* 1282b458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b45b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1282b45e:;
  /* 1282b45e mov esp, ebp */
  ESP = (EBP);
  /* 1282b460 pop ebp */
  EBP = (pop32());
  /* 1282b461 ret  */
  ESPCHK(0x1282b3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b470 @ 0x1282b470 (627 bytes, 182 insns) */
void f_1282b470(void) {
  FTRACE(0x1282b470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b470 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b471 mov ebp, esp */
  EBP = (ESP);
  /* 1282b473 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b479 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282b480 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282b483 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1282b489 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b48d jne 0x1282b496 */
  if (!C.zf) goto L_1282b496;
  /* 1282b48f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b491 jmp 0x1282b6df */
  goto L_1282b6df;
L_1282b496:;
  /* 1282b496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b499 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282b49c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b49f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282b4a2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b4a5 mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282b4ac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1282b4b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1282b4b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282b4b6 je 0x1282b4c8 */
  if (C.zf) goto L_1282b4c8;
  /* 1282b4b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282b4ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b4bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b4bf push edx */
  push32((uint32_t)(EDX));
  /* 1282b4c0 call 0x1282b320 */
  push32(0x1282b4c5u); f_1282b320();
  /* 1282b4c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282b4c8:;
  /* 1282b4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b4cb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282b4ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b4d1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282b4d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b4d7 mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282b4de movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1282b4e3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1282b4e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282b4ea je 0x1282b5fc */
  if (C.zf) goto L_1282b5fc;
  /* 1282b4f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b4f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1282b4f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1282b4fd:;
  /* 1282b4fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b500 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b503 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b506 jae 0x1282b5fa */
  if (!C.cf) goto L_1282b5fa;
  /* 1282b50c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1282b512 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1282b515:;
  /* 1282b515 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282b518 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1282b51e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b520 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b526 jge 0x1282b587 */
  if ((C.sf==C.of)) goto L_1282b587;
  /* 1282b528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b52b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b52e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b531 jae 0x1282b587 */
  if (!C.cf) goto L_1282b587;
  /* 1282b533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b536 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1282b538 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1282b53e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b541 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b544 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282b547 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1282b54e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b551 jne 0x1282b571 */
  if (!C.zf) goto L_1282b571;
  /* 1282b553 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1282b559 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b55c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1282b562 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282b565 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1282b568 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282b56b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b56e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1282b571:;
  /* 1282b571 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282b574 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1282b57a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1282b57c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282b57f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b582 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282b585 jmp 0x1282b515 */
  goto L_1282b515;
L_1282b587:;
  /* 1282b587 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b589 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1282b58f push edx */
  push32((uint32_t)(EDX));
  /* 1282b590 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282b593 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1282b599 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b59b push eax */
  push32((uint32_t)(EAX));
  /* 1282b59c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1282b5a2 push edx */
  push32((uint32_t)(EDX));
  /* 1282b5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b5a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282b5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b5ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282b5af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b5b2 mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282b5b9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1282b5bc push eax */
  push32((uint32_t)(EAX));
  /* 1282b5bd call dword ptr [0x12850264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850264))), 0x1282b5c3u);
  /* 1282b5c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282b5c5 je 0x1282b5ea */
  if (C.zf) goto L_1282b5ea;
  /* 1282b5c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282b5ca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b5d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1282b5d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282b5d6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1282b5dc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b5de cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b5e4 jge 0x1282b5e8 */
  if ((C.sf==C.of)) goto L_1282b5e8;
  /* 1282b5e6 jmp 0x1282b5fa */
  goto L_1282b5fa;
L_1282b5e8:;
  /* 1282b5e8 jmp 0x1282b5f5 */
  goto L_1282b5f5;
L_1282b5ea:;
  /* 1282b5ea call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x1282b5f0u);
  /* 1282b5f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1282b5f3 jmp 0x1282b5fa */
  goto L_1282b5fa;
L_1282b5f5:;
  /* 1282b5f5 jmp 0x1282b4fd */
  goto L_1282b4fd;
L_1282b5fa:;
  /* 1282b5fa jmp 0x1282b64c */
  goto L_1282b64c;
L_1282b5fc:;
  /* 1282b5fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b5fe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1282b604 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b605 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282b608 push edx */
  push32((uint32_t)(EDX));
  /* 1282b609 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b60c push eax */
  push32((uint32_t)(EAX));
  /* 1282b60d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b610 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282b613 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b616 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282b619 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b61c mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282b623 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1282b626 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b627 call dword ptr [0x12850264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850264))), 0x1282b62du);
  /* 1282b62d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282b62f je 0x1282b643 */
  if (C.zf) goto L_1282b643;
  /* 1282b631 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1282b638 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1282b63e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1282b641 jmp 0x1282b64c */
  goto L_1282b64c;
L_1282b643:;
  /* 1282b643 call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x1282b649u);
  /* 1282b649 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1282b64c:;
  /* 1282b64c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b650 jne 0x1282b6d6 */
  if (!C.zf) goto L_1282b6d6;
  /* 1282b656 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b65a je 0x1282b68a */
  if (C.zf) goto L_1282b68a;
  /* 1282b65c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b660 jne 0x1282b679 */
  if (!C.zf) goto L_1282b679;
  /* 1282b662 call 0x1282aa10 */
  push32(0x1282b667u); f_1282aa10();
  /* 1282b667 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282b66d call 0x1282aa20 */
  push32(0x1282b672u); f_1282aa20();
  /* 1282b672 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282b675 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1282b677 jmp 0x1282b685 */
  goto L_1282b685;
L_1282b679:;
  /* 1282b679 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282b67c push edx */
  push32((uint32_t)(EDX));
  /* 1282b67d call 0x1282a970 */
  push32(0x1282b682u); f_1282a970();
  /* 1282b682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282b685:;
  /* 1282b685 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282b688 jmp 0x1282b6df */
  goto L_1282b6df;
L_1282b68a:;
  /* 1282b68a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b68d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282b690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b693 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282b696 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b699 mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282b6a0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1282b6a5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1282b6a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282b6aa je 0x1282b6bb */
  if (C.zf) goto L_1282b6bb;
  /* 1282b6ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b6af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282b6b2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b6b5 jne 0x1282b6bb */
  if (!C.zf) goto L_1282b6bb;
  /* 1282b6b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b6b9 jmp 0x1282b6df */
  goto L_1282b6df;
L_1282b6bb:;
  /* 1282b6bb call 0x1282aa10 */
  push32(0x1282b6c0u); f_1282aa10();
  /* 1282b6c0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1282b6c6 call 0x1282aa20 */
  push32(0x1282b6cbu); f_1282aa20();
  /* 1282b6cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1282b6d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282b6d4 jmp 0x1282b6df */
  goto L_1282b6df;
L_1282b6d6:;
  /* 1282b6d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282b6d9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1282b6df:;
  /* 1282b6df mov esp, ebp */
  ESP = (EBP);
  /* 1282b6e1 pop ebp */
  EBP = (pop32());
  /* 1282b6e2 ret  */
  ESPCHK(0x1282b470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x1282b6f0 (199 bytes, 68 insns) */
void f_1282b6f0(void) {
  FTRACE(0x1282b6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1282b6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b6f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1282b6f5 push esi */
  push32((uint32_t)(ESI));
  /* 1282b6f6 push edi */
  push32((uint32_t)(EDI));
L_1282b6f7:;
  /* 1282b6f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b6fb jne 0x1282b71b */
  if (!C.zf) goto L_1282b71b;
  /* 1282b6fd push 0x12849e84 */
  push32((uint32_t)(0x12849e84u));
  /* 1282b702 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282b704 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1282b706 push 0x12849f50 */
  push32((uint32_t)(0x12849f50u));
  /* 1282b70b push 2 */
  push32((uint32_t)(0x2u));
  /* 1282b70d call 0x12821c00 */
  push32(0x1282b712u); f_12821c00();
  /* 1282b712 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b715 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b718 jne 0x1282b71b */
  if (!C.zf) goto L_1282b71b;
  /* 1282b71a int3  */
  x86_unimpl("int3 @ 0x1282b71a");
L_1282b71b:;
  /* 1282b71b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b71d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282b71f jne 0x1282b6f7 */
  if (!C.zf) goto L_1282b6f7;
  /* 1282b721 mov ecx, dword ptr [0x1284e6a4] */
  ECX = (r32((uint32_t)(0x1284e6a4)));
  /* 1282b727 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b72a mov dword ptr [0x1284e6a4], ecx */
  w32((uint32_t)(0x1284e6a4), (ECX));
  /* 1282b730 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b733 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282b736 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1282b738 push 0x12849f50 */
  push32((uint32_t)(0x12849f50u));
  /* 1282b73d push 2 */
  push32((uint32_t)(0x2u));
  /* 1282b73f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1282b744 call 0x12822b40 */
  push32(0x1282b749u); f_12822b40();
  /* 1282b749 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b74c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b74f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1282b752 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b755 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b759 je 0x1282b776 */
  if (C.zf) goto L_1282b776;
  /* 1282b75b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b75e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1282b761 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1282b764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b767 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1282b76a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b76d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1282b774 jmp 0x1282b79b */
  goto L_1282b79b;
L_1282b776:;
  /* 1282b776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b779 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282b77c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1282b77f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b782 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1282b785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b788 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b78b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b78e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1282b791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b794 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1282b79b:;
  /* 1282b79b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b79e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b7a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1282b7a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1282b7a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b7a9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1282b7b0 pop edi */
  EDI = (pop32());
  /* 1282b7b1 pop esi */
  ESI = (pop32());
  /* 1282b7b2 pop ebx */
  EBX = (pop32());
  /* 1282b7b3 mov esp, ebp */
  ESP = (EBP);
  /* 1282b7b5 pop ebp */
  EBP = (pop32());
  /* 1282b7b6 ret  */
  ESPCHK(0x1282b6f0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1282b7c0 (50 bytes, 17 insns) */
void f_1282b7c0(void) {
  FTRACE(0x1282b7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1282b7c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b7c6 cmp eax, dword ptr [0x1284ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b7cc jb 0x1282b7d2 */
  if (C.cf) goto L_1282b7d2;
  /* 1282b7ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282b7d0 jmp 0x1282b7f0 */
  goto L_1282b7f0;
L_1282b7d2:;
  /* 1282b7d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b7d5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282b7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b7db and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282b7de imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b7e1 mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282b7e8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1282b7ed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1282b7f0:;
  /* 1282b7f0 pop ebp */
  EBP = (pop32());
  /* 1282b7f1 ret  */
  ESPCHK(0x1282b7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x1282b800 (300 bytes, 80 insns) */
void f_1282b800(void) {
  FTRACE(0x1282b800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b800 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b801 mov ebp, esp */
  EBP = (ESP);
  /* 1282b803 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b804 cmp dword ptr [0x1284fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b80b jne 0x1282b819 */
  if (!C.zf) goto L_1282b819;
  /* 1282b80d mov dword ptr [0x1284fb60], 0x200 */
  w32((uint32_t)(0x1284fb60), (0x200u));
  /* 1282b817 jmp 0x1282b82c */
  goto L_1282b82c;
L_1282b819:;
  /* 1282b819 cmp dword ptr [0x1284fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x1284fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b820 jge 0x1282b82c */
  if ((C.sf==C.of)) goto L_1282b82c;
  /* 1282b822 mov dword ptr [0x1284fb60], 0x14 */
  w32((uint32_t)(0x1284fb60), (0x14u));
L_1282b82c:;
  /* 1282b82c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1282b831 push 0x12849f5c */
  push32((uint32_t)(0x12849f5cu));
  /* 1282b836 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282b838 push 4 */
  push32((uint32_t)(0x4u));
  /* 1282b83a mov eax, dword ptr [0x1284fb60] */
  EAX = (r32((uint32_t)(0x1284fb60)));
  /* 1282b83f push eax */
  push32((uint32_t)(EAX));
  /* 1282b840 call 0x12822f50 */
  push32(0x1282b845u); f_12822f50();
  /* 1282b845 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b848 mov dword ptr [0x1284e818], eax */
  w32((uint32_t)(0x1284e818), (EAX));
  /* 1282b84d cmp dword ptr [0x1284e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b854 jne 0x1282b895 */
  if (!C.zf) goto L_1282b895;
  /* 1282b856 mov dword ptr [0x1284fb60], 0x14 */
  w32((uint32_t)(0x1284fb60), (0x14u));
  /* 1282b860 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1282b865 push 0x12849f5c */
  push32((uint32_t)(0x12849f5cu));
  /* 1282b86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1282b86c push 4 */
  push32((uint32_t)(0x4u));
  /* 1282b86e mov ecx, dword ptr [0x1284fb60] */
  ECX = (r32((uint32_t)(0x1284fb60)));
  /* 1282b874 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b875 call 0x12822f50 */
  push32(0x1282b87au); f_12822f50();
  /* 1282b87a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b87d mov dword ptr [0x1284e818], eax */
  w32((uint32_t)(0x1284e818), (EAX));
  /* 1282b882 cmp dword ptr [0x1284e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b889 jne 0x1282b895 */
  if (!C.zf) goto L_1282b895;
  /* 1282b88b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1282b88d call 0x12821ab0 */
  push32(0x1282b892u); f_12821ab0();
  /* 1282b892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282b895:;
  /* 1282b895 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282b89c jmp 0x1282b8a7 */
  goto L_1282b8a7;
L_1282b89e:;
  /* 1282b89e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b8a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b8a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1282b8a7:;
  /* 1282b8a7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b8ab jge 0x1282b8c6 */
  if ((C.sf==C.of)) goto L_1282b8c6;
  /* 1282b8ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b8b0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282b8b3 add eax, 0x1284d120 */
  { uint32_t _a=(EAX),_b=(0x1284d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b8b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b8bb mov edx, dword ptr [0x1284e818] */
  EDX = (r32((uint32_t)(0x1284e818)));
  /* 1282b8c1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1282b8c4 jmp 0x1282b89e */
  goto L_1282b89e;
L_1282b8c6:;
  /* 1282b8c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282b8cd jmp 0x1282b8d8 */
  goto L_1282b8d8;
L_1282b8cf:;
  /* 1282b8cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b8d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b8d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282b8d8:;
  /* 1282b8d8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b8dc jge 0x1282b928 */
  if ((C.sf==C.of)) goto L_1282b928;
  /* 1282b8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b8e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282b8e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b8e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282b8ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b8ed mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282b8f4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b8f8 je 0x1282b916 */
  if (C.zf) goto L_1282b916;
  /* 1282b8fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b8fd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282b900 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b903 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282b906 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282b909 mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282b910 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b914 jne 0x1282b926 */
  if (!C.zf) goto L_1282b926;
L_1282b916:;
  /* 1282b916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282b919 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282b91c mov dword ptr [ecx + 0x1284d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1284d130), (0xffffffffu));
L_1282b926:;
  /* 1282b926 jmp 0x1282b8cf */
  goto L_1282b8cf;
L_1282b928:;
  /* 1282b928 mov esp, ebp */
  ESP = (EBP);
  /* 1282b92a pop ebp */
  EBP = (pop32());
  /* 1282b92b ret  */
  ESPCHK(0x1282b800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b930 @ 0x1282b930 (26 bytes, 9 insns) */
void f_1282b930(void) {
  FTRACE(0x1282b930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b930 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b931 mov ebp, esp */
  EBP = (ESP);
  /* 1282b933 call 0x1282c530 */
  push32(0x1282b938u); f_1282c530();
  /* 1282b938 movsx eax, byte ptr [0x1284e4bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1284e4bc))));
  /* 1282b93f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282b941 je 0x1282b948 */
  if (C.zf) goto L_1282b948;
  /* 1282b943 call 0x1282c2f0 */
  push32(0x1282b948u); f_1282c2f0();
L_1282b948:;
  /* 1282b948 pop ebp */
  EBP = (pop32());
  /* 1282b949 ret  */
  ESPCHK(0x1282b930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x1282b950 (61 bytes, 20 insns) */
void f_1282b950(void) {
  FTRACE(0x1282b950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b950 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b951 mov ebp, esp */
  EBP = (ESP);
  /* 1282b953 cmp dword ptr [ebp + 8], 0x1284d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1284d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b95a jb 0x1282b97e */
  if (C.cf) goto L_1282b97e;
  /* 1282b95c cmp dword ptr [ebp + 8], 0x1284d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1284d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b963 ja 0x1282b97e */
  if ((!C.cf&&!C.zf)) goto L_1282b97e;
  /* 1282b965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b968 sub eax, 0x1284d120 */
  { uint32_t _a=(EAX),_b=(0x1284d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b96d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282b970 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b973 push eax */
  push32((uint32_t)(EAX));
  /* 1282b974 call 0x12826540 */
  push32(0x1282b979u); f_12826540();
  /* 1282b979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b97c jmp 0x1282b98b */
  goto L_1282b98b;
L_1282b97e:;
  /* 1282b97e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b981 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b984 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b985 call dword ptr [0x128502f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f4))), 0x1282b98bu);
L_1282b98b:;
  /* 1282b98b pop ebp */
  EBP = (pop32());
  /* 1282b98c ret  */
  ESPCHK(0x1282b950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b990 @ 0x1282b990 (41 bytes, 16 insns) */
void f_1282b990(void) {
  FTRACE(0x1282b990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b990 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b991 mov ebp, esp */
  EBP = (ESP);
  /* 1282b993 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b997 jge 0x1282b9aa */
  if ((C.sf==C.of)) goto L_1282b9aa;
  /* 1282b999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b99c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b99f push eax */
  push32((uint32_t)(EAX));
  /* 1282b9a0 call 0x12826540 */
  push32(0x1282b9a5u); f_12826540();
  /* 1282b9a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b9a8 jmp 0x1282b9b7 */
  goto L_1282b9b7;
L_1282b9aa:;
  /* 1282b9aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282b9ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b9b1 call dword ptr [0x128502f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f4))), 0x1282b9b7u);
L_1282b9b7:;
  /* 1282b9b7 pop ebp */
  EBP = (pop32());
  /* 1282b9b8 ret  */
  ESPCHK(0x1282b990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9c0 @ 0x1282b9c0 (61 bytes, 20 insns) */
void f_1282b9c0(void) {
  FTRACE(0x1282b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282b9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282b9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1282b9c3 cmp dword ptr [ebp + 8], 0x1284d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1284d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b9ca jb 0x1282b9ee */
  if (C.cf) goto L_1282b9ee;
  /* 1282b9cc cmp dword ptr [ebp + 8], 0x1284d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1284d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282b9d3 ja 0x1282b9ee */
  if ((!C.cf&&!C.zf)) goto L_1282b9ee;
  /* 1282b9d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b9d8 sub eax, 0x1284d120 */
  { uint32_t _a=(EAX),_b=(0x1284d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282b9dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282b9e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b9e3 push eax */
  push32((uint32_t)(EAX));
  /* 1282b9e4 call 0x128265e0 */
  push32(0x1282b9e9u); f_128265e0();
  /* 1282b9e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b9ec jmp 0x1282b9fb */
  goto L_1282b9fb;
L_1282b9ee:;
  /* 1282b9ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282b9f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282b9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1282b9f5 call dword ptr [0x128502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f8))), 0x1282b9fbu);
L_1282b9fb:;
  /* 1282b9fb pop ebp */
  EBP = (pop32());
  /* 1282b9fc ret  */
  ESPCHK(0x1282b9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba00 @ 0x1282ba00 (41 bytes, 16 insns) */
void f_1282ba00(void) {
  FTRACE(0x1282ba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282ba00 push ebp */
  push32((uint32_t)(EBP));
  /* 1282ba01 mov ebp, esp */
  EBP = (ESP);
  /* 1282ba03 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ba07 jge 0x1282ba1a */
  if ((C.sf==C.of)) goto L_1282ba1a;
  /* 1282ba09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ba0c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ba0f push eax */
  push32((uint32_t)(EAX));
  /* 1282ba10 call 0x128265e0 */
  push32(0x1282ba15u); f_128265e0();
  /* 1282ba15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ba18 jmp 0x1282ba27 */
  goto L_1282ba27;
L_1282ba1a:;
  /* 1282ba1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282ba1d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ba20 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ba21 call dword ptr [0x128502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f8))), 0x1282ba27u);
L_1282ba27:;
  /* 1282ba27 pop ebp */
  EBP = (pop32());
  /* 1282ba28 ret  */
  ESPCHK(0x1282ba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba30 @ 0x1282ba30 (119 bytes, 34 insns) */
void f_1282ba30(void) {
  FTRACE(0x1282ba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282ba30 push ebp */
  push32((uint32_t)(EBP));
  /* 1282ba31 mov ebp, esp */
  EBP = (ESP);
  /* 1282ba33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ba36 push 0x1284e814 */
  push32((uint32_t)(0x1284e814u));
  /* 1282ba3b call dword ptr [0x12850278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850278))), 0x1282ba41u);
  /* 1282ba41 cmp dword ptr [0x1284e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ba48 je 0x1282ba68 */
  if (C.zf) goto L_1282ba68;
  /* 1282ba4a push 0x1284e814 */
  push32((uint32_t)(0x1284e814u));
  /* 1282ba4f call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x1282ba55u);
  /* 1282ba55 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1282ba57 call 0x12826540 */
  push32(0x1282ba5cu); f_12826540();
  /* 1282ba5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ba5f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1282ba66 jmp 0x1282ba6f */
  goto L_1282ba6f;
L_1282ba68:;
  /* 1282ba68 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1282ba6f:;
  /* 1282ba6f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1282ba73 push eax */
  push32((uint32_t)(EAX));
  /* 1282ba74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ba77 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ba78 call 0x1282bab0 */
  push32(0x1282ba7du); f_1282bab0();
  /* 1282ba7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ba80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282ba83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ba87 je 0x1282ba95 */
  if (C.zf) goto L_1282ba95;
  /* 1282ba89 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1282ba8b call 0x128265e0 */
  push32(0x1282ba90u); f_128265e0();
  /* 1282ba90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ba93 jmp 0x1282baa0 */
  goto L_1282baa0;
L_1282ba95:;
  /* 1282ba95 push 0x1284e814 */
  push32((uint32_t)(0x1284e814u));
  /* 1282ba9a call dword ptr [0x12850268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850268))), 0x1282baa0u);
L_1282baa0:;
  /* 1282baa0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282baa3 mov esp, ebp */
  ESP = (EBP);
  /* 1282baa5 pop ebp */
  EBP = (pop32());
  /* 1282baa6 ret  */
  ESPCHK(0x1282ba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x1282bab0 (160 bytes, 50 insns) */
void f_1282bab0(void) {
  FTRACE(0x1282bab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282bab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282bab1 mov ebp, esp */
  EBP = (ESP);
  /* 1282bab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282bab6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282baba jne 0x1282bac3 */
  if (!C.zf) goto L_1282bac3;
  /* 1282babc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282babe jmp 0x1282bb4c */
  goto L_1282bb4c;
L_1282bac3:;
  /* 1282bac3 cmp dword ptr [0x1284e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282baca jne 0x1282bafa */
  if (!C.zf) goto L_1282bafa;
  /* 1282bacc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282bacf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282bad4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bad9 jle 0x1282baeb */
  if ((C.zf||C.sf!=C.of)) goto L_1282baeb;
  /* 1282badb call 0x1282aa10 */
  push32(0x1282bae0u); f_1282aa10();
  /* 1282bae0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1282bae6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282bae9 jmp 0x1282bb4c */
  goto L_1282bb4c;
L_1282baeb:;
  /* 1282baeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282baee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1282baf1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1282baf3 mov eax, 1 */
  EAX = (0x1u);
  /* 1282baf8 jmp 0x1282bb4c */
  goto L_1282bb4c;
L_1282bafa:;
  /* 1282bafa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282bb01 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1282bb04 push eax */
  push32((uint32_t)(EAX));
  /* 1282bb05 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282bb07 mov ecx, dword ptr [0x1284cea4] */
  ECX = (r32((uint32_t)(0x1284cea4)));
  /* 1282bb0d push ecx */
  push32((uint32_t)(ECX));
  /* 1282bb0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bb11 push edx */
  push32((uint32_t)(EDX));
  /* 1282bb12 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282bb14 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1282bb17 push eax */
  push32((uint32_t)(EAX));
  /* 1282bb18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1282bb1d mov ecx, dword ptr [0x1284e698] */
  ECX = (r32((uint32_t)(0x1284e698)));
  /* 1282bb23 push ecx */
  push32((uint32_t)(ECX));
  /* 1282bb24 call dword ptr [0x128502d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502d0))), 0x1282bb2au);
  /* 1282bb2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282bb2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bb31 je 0x1282bb39 */
  if (C.zf) goto L_1282bb39;
  /* 1282bb33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bb37 je 0x1282bb49 */
  if (C.zf) goto L_1282bb49;
L_1282bb39:;
  /* 1282bb39 call 0x1282aa10 */
  push32(0x1282bb3eu); f_1282aa10();
  /* 1282bb3e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1282bb44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282bb47 jmp 0x1282bb4c */
  goto L_1282bb4c;
L_1282bb49:;
  /* 1282bb49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1282bb4c:;
  /* 1282bb4c mov esp, ebp */
  ESP = (EBP);
  /* 1282bb4e pop ebp */
  EBP = (pop32());
  /* 1282bb4f ret  */
  ESPCHK(0x1282bab0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1282bb50 (32 bytes, 18 insns) */
void f_1282bb50(void) {
  FTRACE(0x1282bb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282bb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1282bb51 mov ebp, esp */
  EBP = (ESP);
  /* 1282bb53 push ebx */
  push32((uint32_t)(EBX));
  /* 1282bb54 push esi */
  push32((uint32_t)(ESI));
  /* 1282bb55 push edi */
  push32((uint32_t)(EDI));
  /* 1282bb56 push ebp */
  push32((uint32_t)(EBP));
  /* 1282bb57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282bb59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282bb5b push 0x1282bb68 */
  push32((uint32_t)(0x1282bb68u));
  /* 1282bb60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1282bb63 call 0x1283329c */
  push32(0x1282bb68u); f_1283329c();
  /* 1282bb68 pop ebp */
  EBP = (pop32());
  /* 1282bb69 pop edi */
  EDI = (pop32());
  /* 1282bb6a pop esi */
  ESI = (pop32());
  /* 1282bb6b pop ebx */
  EBX = (pop32());
  /* 1282bb6c mov esp, ebp */
  ESP = (EBP);
  /* 1282bb6e pop ebp */
  EBP = (pop32());
  /* 1282bb6f ret  */
  ESPCHK(0x1282bb50u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1282bb92 (104 bytes, 33 insns) */
void f_1282bb92(void) {
  FTRACE(0x1282bb92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282bb92 push ebx */
  push32((uint32_t)(EBX));
  /* 1282bb93 push esi */
  push32((uint32_t)(ESI));
  /* 1282bb94 push edi */
  push32((uint32_t)(EDI));
  /* 1282bb95 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1282bb99 push eax */
  push32((uint32_t)(EAX));
  /* 1282bb9a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1282bb9c push 0x1282bb70 */
  push32((uint32_t)(0x1282bb70u));
  /* 1282bba1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1282bba8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1282bbaf:;
  /* 1282bbaf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1282bbb3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1282bbb6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1282bbb9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bbbc je 0x1282bbec */
  if (C.zf) goto L_1282bbec;
  /* 1282bbbe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bbc2 je 0x1282bbec */
  if (C.zf) goto L_1282bbec;
  /* 1282bbc4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1282bbc7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1282bbca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1282bbce mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1282bbd1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bbd6 jne 0x1282bbea */
  if (!C.zf) goto L_1282bbea;
  /* 1282bbd8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1282bbdd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1282bbe1 call 0x1282bc26 */
  push32(0x1282bbe6u); f_1282bc26();
  /* 1282bbe6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1282bbeau);
L_1282bbea:;
  /* 1282bbea jmp 0x1282bbaf */
  goto L_1282bbaf;
L_1282bbec:;
  /* 1282bbec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1282bbf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bbf6 pop edi */
  EDI = (pop32());
  /* 1282bbf7 pop esi */
  ESI = (pop32());
  /* 1282bbf8 pop ebx */
  EBX = (pop32());
  /* 1282bbf9 ret  */
  ESPCHK(0x1282bb92u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc26 @ 0x1282bc26 (24 bytes, 10 insns) */
void f_1282bc26(void) {
  FTRACE(0x1282bc26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282bc26 push ebx */
  push32((uint32_t)(EBX));
  /* 1282bc27 push ecx */
  push32((uint32_t)(ECX));
  /* 1282bc28 mov ebx, 0x1284d3b8 */
  EBX = (0x1284d3b8u);
  /* 1282bc2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bc30 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1282bc33 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1282bc36 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1282bc39 pop ecx */
  ECX = (pop32());
  /* 1282bc3a pop ebx */
  EBX = (pop32());
  /* 1282bc3b ret 4 */
  ESPCHK(0x1282bc26u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bd05 @ 0x1282bd05 (27 bytes, 11 insns) */
void f_1282bd05(void) {
  FTRACE(0x1282bd05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282bd05 push ebp */
  push32((uint32_t)(EBP));
  /* 1282bd06 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1282bd0a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1282bd0c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1282bd0f push eax */
  push32((uint32_t)(EAX));
  /* 1282bd10 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1282bd13 push eax */
  push32((uint32_t)(EAX));
  /* 1282bd14 call 0x1282bb92 */
  push32(0x1282bd19u); f_1282bb92();
  /* 1282bd19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bd1c pop ebp */
  EBP = (pop32());
  /* 1282bd1d ret 4 */
  ESPCHK(0x1282bd05u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bd20 @ 0x1282bd20 (482 bytes, 138 insns) */
void f_1282bd20(void) {
  FTRACE(0x1282bd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282bd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1282bd21 mov ebp, esp */
  EBP = (ESP);
  /* 1282bd23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282bd26 push esi */
  push32((uint32_t)(ESI));
  /* 1282bd27 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1282bd2e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1282bd30 call 0x12826540 */
  push32(0x1282bd35u); f_12826540();
  /* 1282bd35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bd38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1282bd3f jmp 0x1282bd4a */
  goto L_1282bd4a;
L_1282bd41:;
  /* 1282bd41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282bd44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bd47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1282bd4a:;
  /* 1282bd4a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bd4e jge 0x1282bef0 */
  if ((C.sf==C.of)) goto L_1282bef0;
  /* 1282bd54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282bd57 cmp dword ptr [ecx*4 + 0x1284fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1284fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bd5f je 0x1282be56 */
  if (C.zf) goto L_1282be56;
  /* 1282bd65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282bd68 mov eax, dword ptr [edx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284fe60)));
  /* 1282bd6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282bd72 jmp 0x1282bd7d */
  goto L_1282bd7d;
L_1282bd74:;
  /* 1282bd74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bd77 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bd7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1282bd7d:;
  /* 1282bd7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282bd80 mov eax, dword ptr [edx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284fe60)));
  /* 1282bd87 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bd8c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bd8f jae 0x1282be46 */
  if (!C.cf) goto L_1282be46;
  /* 1282bd95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bd98 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1282bd9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1282bd9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282bda1 jne 0x1282be41 */
  if (!C.zf) goto L_1282be41;
  /* 1282bda7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bdaa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bdae jne 0x1282bde9 */
  if (!C.zf) goto L_1282bde9;
  /* 1282bdb0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1282bdb2 call 0x12826540 */
  push32(0x1282bdb7u); f_12826540();
  /* 1282bdb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bdba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bdbd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bdc1 jne 0x1282bddf */
  if (!C.zf) goto L_1282bddf;
  /* 1282bdc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bdc6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bdc9 push edx */
  push32((uint32_t)(EDX));
  /* 1282bdca call dword ptr [0x128502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f0))), 0x1282bdd0u);
  /* 1282bdd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bdd3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1282bdd6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bdd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bddc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1282bddf:;
  /* 1282bddf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1282bde1 call 0x128265e0 */
  push32(0x1282bde6u); f_128265e0();
  /* 1282bde6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282bde9:;
  /* 1282bde9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bdec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282bdef push eax */
  push32((uint32_t)(EAX));
  /* 1282bdf0 call dword ptr [0x128502f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f4))), 0x1282bdf6u);
  /* 1282bdf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bdf9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1282bdfd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1282be00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282be02 je 0x1282be16 */
  if (C.zf) goto L_1282be16;
  /* 1282be04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282be07 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282be0a push eax */
  push32((uint32_t)(EAX));
  /* 1282be0b call dword ptr [0x128502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f8))), 0x1282be11u);
  /* 1282be11 jmp 0x1282bd74 */
  goto L_1282bd74;
L_1282be16:;
  /* 1282be16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282be19 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1282be1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282be22 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282be25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282be28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282be2b sub eax, dword ptr [edx*4 + 0x1284fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1284fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282be32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1282be33 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1282be38 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1282be3a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282be3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282be3f jmp 0x1282be46 */
  goto L_1282be46;
L_1282be41:;
  /* 1282be41 jmp 0x1282bd74 */
  goto L_1282bd74;
L_1282be46:;
  /* 1282be46 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282be4a je 0x1282be51 */
  if (C.zf) goto L_1282be51;
  /* 1282be4c jmp 0x1282bef0 */
  goto L_1282bef0;
L_1282be51:;
  /* 1282be51 jmp 0x1282beeb */
  goto L_1282beeb;
L_1282be56:;
  /* 1282be56 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1282be58 push 0x12849f64 */
  push32((uint32_t)(0x12849f64u));
  /* 1282be5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1282be5f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1282be64 call 0x12822b40 */
  push32(0x1282be69u); f_12822b40();
  /* 1282be69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282be6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282be6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282be73 je 0x1282bee9 */
  if (C.zf) goto L_1282bee9;
  /* 1282be75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282be78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282be7b mov dword ptr [eax*4 + 0x1284fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1284fe60), (ECX));
  /* 1282be82 mov edx, dword ptr [0x1284ff9c] */
  EDX = (r32((uint32_t)(0x1284ff9c)));
  /* 1282be88 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282be8b mov dword ptr [0x1284ff9c], edx */
  w32((uint32_t)(0x1284ff9c), (EDX));
  /* 1282be91 jmp 0x1282be9c */
  goto L_1282be9c;
L_1282be93:;
  /* 1282be93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282be96 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282be99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282be9c:;
  /* 1282be9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282be9f mov edx, dword ptr [ecx*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282bea6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282beac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282beaf jae 0x1282bed4 */
  if (!C.cf) goto L_1282bed4;
  /* 1282beb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282beb4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1282beb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bebb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1282bec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282bec4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1282bec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282becb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1282bed2 jmp 0x1282be93 */
  goto L_1282be93;
L_1282bed4:;
  /* 1282bed4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282bed7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282beda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282bedd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282bee0 push edx */
  push32((uint32_t)(EDX));
  /* 1282bee1 call 0x1282c230 */
  push32(0x1282bee6u); f_1282c230();
  /* 1282bee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282bee9:;
  /* 1282bee9 jmp 0x1282bef0 */
  goto L_1282bef0;
L_1282beeb:;
  /* 1282beeb jmp 0x1282bd41 */
  goto L_1282bd41;
L_1282bef0:;
  /* 1282bef0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1282bef2 call 0x128265e0 */
  push32(0x1282bef7u); f_128265e0();
  /* 1282bef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282befa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282befd pop esi */
  ESI = (pop32());
  /* 1282befe mov esp, ebp */
  ESP = (EBP);
  /* 1282bf00 pop ebp */
  EBP = (pop32());
  /* 1282bf01 ret  */
  ESPCHK(0x1282bd20u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1282bf10 (183 bytes, 57 insns) */
void f_1282bf10(void) {
  FTRACE(0x1282bf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282bf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1282bf11 mov ebp, esp */
  EBP = (ESP);
  /* 1282bf13 push ecx */
  push32((uint32_t)(ECX));
  /* 1282bf14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bf17 cmp eax, dword ptr [0x1284ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bf1d jae 0x1282bfaa */
  if (!C.cf) goto L_1282bfaa;
  /* 1282bf23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bf26 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282bf29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bf2c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282bf2f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282bf32 mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282bf39 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bf3d jne 0x1282bfaa */
  if (!C.zf) goto L_1282bfaa;
  /* 1282bf3f cmp dword ptr [0x1284e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bf46 jne 0x1282bf8a */
  if (!C.zf) goto L_1282bf8a;
  /* 1282bf48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bf4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1282bf4e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bf52 je 0x1282bf62 */
  if (C.zf) goto L_1282bf62;
  /* 1282bf54 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bf58 je 0x1282bf70 */
  if (C.zf) goto L_1282bf70;
  /* 1282bf5a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bf5e je 0x1282bf7e */
  if (C.zf) goto L_1282bf7e;
  /* 1282bf60 jmp 0x1282bf8a */
  goto L_1282bf8a;
L_1282bf62:;
  /* 1282bf62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282bf65 push edx */
  push32((uint32_t)(EDX));
  /* 1282bf66 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1282bf68 call dword ptr [0x12850334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850334))), 0x1282bf6eu);
  /* 1282bf6e jmp 0x1282bf8a */
  goto L_1282bf8a;
L_1282bf70:;
  /* 1282bf70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282bf73 push eax */
  push32((uint32_t)(EAX));
  /* 1282bf74 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1282bf76 call dword ptr [0x12850334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850334))), 0x1282bf7cu);
  /* 1282bf7c jmp 0x1282bf8a */
  goto L_1282bf8a;
L_1282bf7e:;
  /* 1282bf7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282bf81 push ecx */
  push32((uint32_t)(ECX));
  /* 1282bf82 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1282bf84 call dword ptr [0x12850334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850334))), 0x1282bf8au);
L_1282bf8a:;
  /* 1282bf8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bf8d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1282bf90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bf93 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1282bf96 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282bf99 mov ecx, dword ptr [edx*4 + 0x1284fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1284fe60)));
  /* 1282bfa0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282bfa3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1282bfa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282bfa8 jmp 0x1282bfc3 */
  goto L_1282bfc3;
L_1282bfaa:;
  /* 1282bfaa call 0x1282aa10 */
  push32(0x1282bfafu); f_1282aa10();
  /* 1282bfaf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282bfb5 call 0x1282aa20 */
  push32(0x1282bfbau); f_1282aa20();
  /* 1282bfba mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1282bfc0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1282bfc3:;
  /* 1282bfc3 mov esp, ebp */
  ESP = (EBP);
  /* 1282bfc5 pop ebp */
  EBP = (pop32());
  /* 1282bfc6 ret  */
  ESPCHK(0x1282bf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfd0 @ 0x1282bfd0 (216 bytes, 63 insns) */
void f_1282bfd0(void) {
  FTRACE(0x1282bfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282bfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282bfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1282bfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282bfd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bfd7 cmp eax, dword ptr [0x1284ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282bfdd jae 0x1282c08b */
  if (!C.cf) goto L_1282c08b;
  /* 1282bfe3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bfe6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282bfe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282bfec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282bfef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282bff2 mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282bff9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1282bffe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1282c001 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282c003 je 0x1282c08b */
  if (C.zf) goto L_1282c08b;
  /* 1282c009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c00c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1282c00f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c012 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1282c015 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c018 mov ecx, dword ptr [edx*4 + 0x1284fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1284fe60)));
  /* 1282c01f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c023 je 0x1282c08b */
  if (C.zf) goto L_1282c08b;
  /* 1282c025 cmp dword ptr [0x1284e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c02c jne 0x1282c06a */
  if (!C.zf) goto L_1282c06a;
  /* 1282c02e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c031 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282c034 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c038 je 0x1282c048 */
  if (C.zf) goto L_1282c048;
  /* 1282c03a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c03e je 0x1282c054 */
  if (C.zf) goto L_1282c054;
  /* 1282c040 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c044 je 0x1282c060 */
  if (C.zf) goto L_1282c060;
  /* 1282c046 jmp 0x1282c06a */
  goto L_1282c06a;
L_1282c048:;
  /* 1282c048 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282c04a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1282c04c call dword ptr [0x12850334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850334))), 0x1282c052u);
  /* 1282c052 jmp 0x1282c06a */
  goto L_1282c06a;
L_1282c054:;
  /* 1282c054 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282c056 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1282c058 call dword ptr [0x12850334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850334))), 0x1282c05eu);
  /* 1282c05e jmp 0x1282c06a */
  goto L_1282c06a;
L_1282c060:;
  /* 1282c060 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282c062 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1282c064 call dword ptr [0x12850334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850334))), 0x1282c06au);
L_1282c06a:;
  /* 1282c06a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c06d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282c070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c073 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282c076 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c079 mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282c080 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1282c087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282c089 jmp 0x1282c0a4 */
  goto L_1282c0a4;
L_1282c08b:;
  /* 1282c08b call 0x1282aa10 */
  push32(0x1282c090u); f_1282aa10();
  /* 1282c090 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282c096 call 0x1282aa20 */
  push32(0x1282c09bu); f_1282aa20();
  /* 1282c09b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1282c0a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1282c0a4:;
  /* 1282c0a4 mov esp, ebp */
  ESP = (EBP);
  /* 1282c0a6 pop ebp */
  EBP = (pop32());
  /* 1282c0a7 ret  */
  ESPCHK(0x1282bfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0b0 @ 0x1282c0b0 (102 bytes, 30 insns) */
void f_1282c0b0(void) {
  FTRACE(0x1282c0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1282c0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c0b6 cmp eax, dword ptr [0x1284ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c0bc jae 0x1282c0fb */
  if (!C.cf) goto L_1282c0fb;
  /* 1282c0be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c0c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282c0c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c0c7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282c0ca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c0cd mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282c0d4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1282c0d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1282c0dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282c0de je 0x1282c0fb */
  if (C.zf) goto L_1282c0fb;
  /* 1282c0e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c0e3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1282c0e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c0e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1282c0ec imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c0ef mov ecx, dword ptr [edx*4 + 0x1284fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1284fe60)));
  /* 1282c0f6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1282c0f9 jmp 0x1282c114 */
  goto L_1282c114;
L_1282c0fb:;
  /* 1282c0fb call 0x1282aa10 */
  push32(0x1282c100u); f_1282aa10();
  /* 1282c100 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282c106 call 0x1282aa20 */
  push32(0x1282c10bu); f_1282aa20();
  /* 1282c10b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1282c111 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1282c114:;
  /* 1282c114 pop ebp */
  EBP = (pop32());
  /* 1282c115 ret  */
  ESPCHK(0x1282c0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x1282c120 (260 bytes, 83 insns) */
void f_1282c120(void) {
  FTRACE(0x1282c120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c120 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c121 mov ebp, esp */
  EBP = (ESP);
  /* 1282c123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c126 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1282c12a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282c12d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1282c130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282c132 je 0x1282c13d */
  if (C.zf) goto L_1282c13d;
  /* 1282c134 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1282c137 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1282c13a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1282c13d:;
  /* 1282c13d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282c140 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1282c146 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282c148 je 0x1282c152 */
  if (C.zf) goto L_1282c152;
  /* 1282c14a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1282c14d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1282c14f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1282c152:;
  /* 1282c152 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282c155 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1282c15b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282c15d je 0x1282c168 */
  if (C.zf) goto L_1282c168;
  /* 1282c15f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1282c162 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1282c165 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1282c168:;
  /* 1282c168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c16b push eax */
  push32((uint32_t)(EAX));
  /* 1282c16c call dword ptr [0x128502b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b0))), 0x1282c172u);
  /* 1282c172 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282c175 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c179 jne 0x1282c192 */
  if (!C.zf) goto L_1282c192;
  /* 1282c17b call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x1282c181u);
  /* 1282c181 push eax */
  push32((uint32_t)(EAX));
  /* 1282c182 call 0x1282a970 */
  push32(0x1282c187u); f_1282a970();
  /* 1282c187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c18a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282c18d jmp 0x1282c220 */
  goto L_1282c220;
L_1282c192:;
  /* 1282c192 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c196 jne 0x1282c1a3 */
  if (!C.zf) goto L_1282c1a3;
  /* 1282c198 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1282c19b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1282c19e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1282c1a1 jmp 0x1282c1b2 */
  goto L_1282c1b2;
L_1282c1a3:;
  /* 1282c1a3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c1a7 jne 0x1282c1b2 */
  if (!C.zf) goto L_1282c1b2;
  /* 1282c1a9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1282c1ac or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1282c1af mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1282c1b2:;
  /* 1282c1b2 call 0x1282bd20 */
  push32(0x1282c1b7u); f_1282bd20();
  /* 1282c1b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282c1ba cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c1be jne 0x1282c1db */
  if (!C.zf) goto L_1282c1db;
  /* 1282c1c0 call 0x1282aa10 */
  push32(0x1282c1c5u); f_1282aa10();
  /* 1282c1c5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1282c1cb call 0x1282aa20 */
  push32(0x1282c1d0u); f_1282aa20();
  /* 1282c1d0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1282c1d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282c1d9 jmp 0x1282c220 */
  goto L_1282c220;
L_1282c1db:;
  /* 1282c1db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c1de push eax */
  push32((uint32_t)(EAX));
  /* 1282c1df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c1e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c1e3 call 0x1282bf10 */
  push32(0x1282c1e8u); f_1282bf10();
  /* 1282c1e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c1eb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1282c1ee or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1282c1f1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1282c1f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c1f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282c1fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c1fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282c200 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c203 mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282c20a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1282c20d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1282c211 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c214 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c215 call 0x1282c2c0 */
  push32(0x1282c21au); f_1282c2c0();
  /* 1282c21a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c21d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1282c220:;
  /* 1282c220 mov esp, ebp */
  ESP = (EBP);
  /* 1282c222 pop ebp */
  EBP = (pop32());
  /* 1282c223 ret  */
  ESPCHK(0x1282c120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c230 @ 0x1282c230 (134 bytes, 44 insns) */
void f_1282c230(void) {
  FTRACE(0x1282c230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c230 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c231 mov ebp, esp */
  EBP = (ESP);
  /* 1282c233 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c237 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282c23a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c23d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282c240 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c243 mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282c24a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c24c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1282c24f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c252 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c256 jne 0x1282c291 */
  if (!C.zf) goto L_1282c291;
  /* 1282c258 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1282c25a call 0x12826540 */
  push32(0x1282c25fu); f_12826540();
  /* 1282c25f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c265 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c269 jne 0x1282c287 */
  if (!C.zf) goto L_1282c287;
  /* 1282c26b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c26e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c271 push edx */
  push32((uint32_t)(EDX));
  /* 1282c272 call dword ptr [0x128502f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f0))), 0x1282c278u);
  /* 1282c278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c27b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1282c27e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c284 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1282c287:;
  /* 1282c287 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1282c289 call 0x128265e0 */
  push32(0x1282c28eu); f_128265e0();
  /* 1282c28e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282c291:;
  /* 1282c291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c294 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282c297 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c29a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282c29d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c2a0 mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282c2a7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1282c2ab push eax */
  push32((uint32_t)(EAX));
  /* 1282c2ac call dword ptr [0x128502f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f4))), 0x1282c2b2u);
  /* 1282c2b2 mov esp, ebp */
  ESP = (EBP);
  /* 1282c2b4 pop ebp */
  EBP = (pop32());
  /* 1282c2b5 ret  */
  ESPCHK(0x1282c230u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1282c2c0 (38 bytes, 13 insns) */
void f_1282c2c0(void) {
  FTRACE(0x1282c2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1282c2c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c2c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282c2c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c2cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282c2cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c2d2 mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282c2d9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1282c2dd push eax */
  push32((uint32_t)(EAX));
  /* 1282c2de call dword ptr [0x128502f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502f8))), 0x1282c2e4u);
  /* 1282c2e4 pop ebp */
  EBP = (pop32());
  /* 1282c2e5 ret  */
  ESPCHK(0x1282c2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2f0 @ 0x1282c2f0 (218 bytes, 63 insns) */
void f_1282c2f0(void) {
  FTRACE(0x1282c2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1282c2f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c2f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282c2fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1282c2ff call 0x12826540 */
  push32(0x1282c304u); f_12826540();
  /* 1282c304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c307 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1282c30e jmp 0x1282c319 */
  goto L_1282c319;
L_1282c310:;
  /* 1282c310 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c313 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c316 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1282c319:;
  /* 1282c319 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c31c cmp ecx, dword ptr [0x1284fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c322 jge 0x1282c3b9 */
  if ((C.sf==C.of)) goto L_1282c3b9;
  /* 1282c328 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c32b mov eax, dword ptr [0x1284e818] */
  EAX = (r32((uint32_t)(0x1284e818)));
  /* 1282c330 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c334 je 0x1282c3b4 */
  if (C.zf) goto L_1282c3b4;
  /* 1282c336 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c339 mov edx, dword ptr [0x1284e818] */
  EDX = (r32((uint32_t)(0x1284e818)));
  /* 1282c33f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1282c342 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1282c345 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1282c34b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282c34d je 0x1282c371 */
  if (C.zf) goto L_1282c371;
  /* 1282c34f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c352 mov eax, dword ptr [0x1284e818] */
  EAX = (r32((uint32_t)(0x1284e818)));
  /* 1282c357 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1282c35a push ecx */
  push32((uint32_t)(ECX));
  /* 1282c35b call 0x1282d0e0 */
  push32(0x1282c360u); f_1282d0e0();
  /* 1282c360 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c363 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c366 je 0x1282c371 */
  if (C.zf) goto L_1282c371;
  /* 1282c368 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c36b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c36e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1282c371:;
  /* 1282c371 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c375 jl 0x1282c3b4 */
  if ((C.sf!=C.of)) goto L_1282c3b4;
  /* 1282c377 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c37a mov ecx, dword ptr [0x1284e818] */
  ECX = (r32((uint32_t)(0x1284e818)));
  /* 1282c380 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1282c383 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c386 push edx */
  push32((uint32_t)(EDX));
  /* 1282c387 call dword ptr [0x128502b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502b8))), 0x1282c38du);
  /* 1282c38d push 2 */
  push32((uint32_t)(0x2u));
  /* 1282c38f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c392 mov ecx, dword ptr [0x1284e818] */
  ECX = (r32((uint32_t)(0x1284e818)));
  /* 1282c398 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1282c39b push edx */
  push32((uint32_t)(EDX));
  /* 1282c39c call 0x128235d0 */
  push32(0x1282c3a1u); f_128235d0();
  /* 1282c3a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c3a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c3a7 mov ecx, dword ptr [0x1284e818] */
  ECX = (r32((uint32_t)(0x1284e818)));
  /* 1282c3ad mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1282c3b4:;
  /* 1282c3b4 jmp 0x1282c310 */
  goto L_1282c310;
L_1282c3b9:;
  /* 1282c3b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282c3bb call 0x128265e0 */
  push32(0x1282c3c0u); f_128265e0();
  /* 1282c3c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c3c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c3c6 mov esp, ebp */
  ESP = (EBP);
  /* 1282c3c8 pop ebp */
  EBP = (pop32());
  /* 1282c3c9 ret  */
  ESPCHK(0x1282c2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3d0 @ 0x1282c3d0 (68 bytes, 26 insns) */
void f_1282c3d0(void) {
  FTRACE(0x1282c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1282c3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c3d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c3d8 jne 0x1282c3e6 */
  if (!C.zf) goto L_1282c3e6;
  /* 1282c3da push 0 */
  push32((uint32_t)(0x0u));
  /* 1282c3dc call 0x1282c540 */
  push32(0x1282c3e1u); f_1282c540();
  /* 1282c3e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c3e4 jmp 0x1282c410 */
  goto L_1282c410;
L_1282c3e6:;
  /* 1282c3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c3e9 push eax */
  push32((uint32_t)(EAX));
  /* 1282c3ea call 0x1282b950 */
  push32(0x1282c3efu); f_1282b950();
  /* 1282c3ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c3f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c3f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c3f6 call 0x1282c420 */
  push32(0x1282c3fbu); f_1282c420();
  /* 1282c3fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c3fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282c401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c404 push edx */
  push32((uint32_t)(EDX));
  /* 1282c405 call 0x1282b9c0 */
  push32(0x1282c40au); f_1282b9c0();
  /* 1282c40a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c40d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1282c410:;
  /* 1282c410 mov esp, ebp */
  ESP = (EBP);
  /* 1282c412 pop ebp */
  EBP = (pop32());
  /* 1282c413 ret  */
  ESPCHK(0x1282c3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c420 @ 0x1282c420 (65 bytes, 26 insns) */
void f_1282c420(void) {
  FTRACE(0x1282c420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c420 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c421 mov ebp, esp */
  EBP = (ESP);
  /* 1282c423 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c426 push eax */
  push32((uint32_t)(EAX));
  /* 1282c427 call 0x1282c470 */
  push32(0x1282c42cu); f_1282c470();
  /* 1282c42c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c42f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282c431 je 0x1282c438 */
  if (C.zf) goto L_1282c438;
  /* 1282c433 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282c436 jmp 0x1282c45f */
  goto L_1282c45f;
L_1282c438:;
  /* 1282c438 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c43b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282c43e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1282c444 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282c446 je 0x1282c45d */
  if (C.zf) goto L_1282c45d;
  /* 1282c448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c44b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1282c44e push ecx */
  push32((uint32_t)(ECX));
  /* 1282c44f call 0x1282d230 */
  push32(0x1282c454u); f_1282d230();
  /* 1282c454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c457 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282c459 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c45b jmp 0x1282c45f */
  goto L_1282c45f;
L_1282c45d:;
  /* 1282c45d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282c45f:;
  /* 1282c45f pop ebp */
  EBP = (pop32());
  /* 1282c460 ret  */
  ESPCHK(0x1282c420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c470 @ 0x1282c470 (183 bytes, 62 insns) */
void f_1282c470(void) {
  FTRACE(0x1282c470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c470 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c471 mov ebp, esp */
  EBP = (ESP);
  /* 1282c473 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c476 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282c47d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c480 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282c483 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c486 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282c489 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1282c48c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c48f jne 0x1282c50b */
  if (!C.zf) goto L_1282c50b;
  /* 1282c491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c494 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1282c497 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1282c49d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282c49f je 0x1282c50b */
  if (C.zf) goto L_1282c50b;
  /* 1282c4a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c4a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c4a7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1282c4a9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c4ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282c4af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c4b3 jle 0x1282c50b */
  if ((C.zf||C.sf!=C.of)) goto L_1282c50b;
  /* 1282c4b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c4b8 push edx */
  push32((uint32_t)(EDX));
  /* 1282c4b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c4bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1282c4bf push ecx */
  push32((uint32_t)(ECX));
  /* 1282c4c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c4c3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1282c4c6 push eax */
  push32((uint32_t)(EAX));
  /* 1282c4c7 call 0x1282b3e0 */
  push32(0x1282c4ccu); f_1282b3e0();
  /* 1282c4cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c4cf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c4d2 jne 0x1282c4f5 */
  if (!C.zf) goto L_1282c4f5;
  /* 1282c4d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c4d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282c4da and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1282c4e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282c4e2 je 0x1282c4f3 */
  if (C.zf) goto L_1282c4f3;
  /* 1282c4e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c4e7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1282c4ea and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1282c4ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c4f0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1282c4f3:;
  /* 1282c4f3 jmp 0x1282c50b */
  goto L_1282c50b;
L_1282c4f5:;
  /* 1282c4f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c4f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1282c4fb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1282c4fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c501 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1282c504 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1282c50b:;
  /* 1282c50b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c50e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c511 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1282c514 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1282c516 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282c519 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1282c520 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c523 mov esp, ebp */
  ESP = (EBP);
  /* 1282c525 pop ebp */
  EBP = (pop32());
  /* 1282c526 ret  */
  ESPCHK(0x1282c470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c530 @ 0x1282c530 (15 bytes, 7 insns) */
void f_1282c530(void) {
  FTRACE(0x1282c530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c530 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c531 mov ebp, esp */
  EBP = (ESP);
  /* 1282c533 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282c535 call 0x1282c540 */
  push32(0x1282c53au); f_1282c540();
  /* 1282c53a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c53d pop ebp */
  EBP = (pop32());
  /* 1282c53e ret  */
  ESPCHK(0x1282c530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c540 @ 0x1282c540 (319 bytes, 94 insns) */
void f_1282c540(void) {
  FTRACE(0x1282c540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c540 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c541 mov ebp, esp */
  EBP = (ESP);
  /* 1282c543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c546 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282c54d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282c554 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282c556 call 0x12826540 */
  push32(0x1282c55bu); f_12826540();
  /* 1282c55b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c55e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1282c565 jmp 0x1282c570 */
  goto L_1282c570;
L_1282c567:;
  /* 1282c567 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c56a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c56d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1282c570:;
  /* 1282c570 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c573 cmp ecx, dword ptr [0x1284fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1284fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c579 jge 0x1282c663 */
  if ((C.sf==C.of)) goto L_1282c663;
  /* 1282c57f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c582 mov eax, dword ptr [0x1284e818] */
  EAX = (r32((uint32_t)(0x1284e818)));
  /* 1282c587 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c58b je 0x1282c65e */
  if (C.zf) goto L_1282c65e;
  /* 1282c591 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c594 mov edx, dword ptr [0x1284e818] */
  EDX = (r32((uint32_t)(0x1284e818)));
  /* 1282c59a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1282c59d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1282c5a0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1282c5a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282c5a8 je 0x1282c65e */
  if (C.zf) goto L_1282c65e;
  /* 1282c5ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c5b1 mov eax, dword ptr [0x1284e818] */
  EAX = (r32((uint32_t)(0x1284e818)));
  /* 1282c5b6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1282c5b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c5ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c5bd push edx */
  push32((uint32_t)(EDX));
  /* 1282c5be call 0x1282b990 */
  push32(0x1282c5c3u); f_1282b990();
  /* 1282c5c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c5c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c5c9 mov ecx, dword ptr [0x1284e818] */
  ECX = (r32((uint32_t)(0x1284e818)));
  /* 1282c5cf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1282c5d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1282c5d5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1282c5da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282c5dc je 0x1282c645 */
  if (C.zf) goto L_1282c645;
  /* 1282c5de cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c5e2 jne 0x1282c609 */
  if (!C.zf) goto L_1282c609;
  /* 1282c5e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c5e7 mov edx, dword ptr [0x1284e818] */
  EDX = (r32((uint32_t)(0x1284e818)));
  /* 1282c5ed mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1282c5f0 push eax */
  push32((uint32_t)(EAX));
  /* 1282c5f1 call 0x1282c420 */
  push32(0x1282c5f6u); f_1282c420();
  /* 1282c5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c5f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c5fc je 0x1282c607 */
  if (C.zf) goto L_1282c607;
  /* 1282c5fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c601 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c604 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1282c607:;
  /* 1282c607 jmp 0x1282c645 */
  goto L_1282c645;
L_1282c609:;
  /* 1282c609 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c60d jne 0x1282c645 */
  if (!C.zf) goto L_1282c645;
  /* 1282c60f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c612 mov eax, dword ptr [0x1284e818] */
  EAX = (r32((uint32_t)(0x1284e818)));
  /* 1282c617 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1282c61a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282c61d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1282c620 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282c622 je 0x1282c645 */
  if (C.zf) goto L_1282c645;
  /* 1282c624 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c627 mov ecx, dword ptr [0x1284e818] */
  ECX = (r32((uint32_t)(0x1284e818)));
  /* 1282c62d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1282c630 push edx */
  push32((uint32_t)(EDX));
  /* 1282c631 call 0x1282c420 */
  push32(0x1282c636u); f_1282c420();
  /* 1282c636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c639 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c63c jne 0x1282c645 */
  if (!C.zf) goto L_1282c645;
  /* 1282c63e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1282c645:;
  /* 1282c645 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c648 mov ecx, dword ptr [0x1284e818] */
  ECX = (r32((uint32_t)(0x1284e818)));
  /* 1282c64e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1282c651 push edx */
  push32((uint32_t)(EDX));
  /* 1282c652 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c655 push eax */
  push32((uint32_t)(EAX));
  /* 1282c656 call 0x1282ba00 */
  push32(0x1282c65bu); f_1282ba00();
  /* 1282c65b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282c65e:;
  /* 1282c65e jmp 0x1282c567 */
  goto L_1282c567;
L_1282c663:;
  /* 1282c663 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282c665 call 0x128265e0 */
  push32(0x1282c66au); f_128265e0();
  /* 1282c66a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c66d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c671 jne 0x1282c678 */
  if (!C.zf) goto L_1282c678;
  /* 1282c673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282c676 jmp 0x1282c67b */
  goto L_1282c67b;
L_1282c678:;
  /* 1282c678 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1282c67b:;
  /* 1282c67b mov esp, ebp */
  ESP = (EBP);
  /* 1282c67d pop ebp */
  EBP = (pop32());
  /* 1282c67e ret  */
  ESPCHK(0x1282c540u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1282c680 (15 bytes, 7 insns) */
void f_1282c680(void) {
  FTRACE(0x1282c680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c680 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c681 mov ebp, esp */
  EBP = (ESP);
  /* 1282c683 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282c685 call 0x12821ab0 */
  push32(0x1282c68au); f_12821ab0();
  /* 1282c68a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c68d pop ebp */
  EBP = (pop32());
  /* 1282c68e ret  */
  ESPCHK(0x1282c680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c690 @ 0x1282c690 (1007 bytes, 269 insns) */
void f_1282c690(void) {
  FTRACE(0x1282c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282c690 push ebp */
  push32((uint32_t)(EBP));
  /* 1282c691 mov ebp, esp */
  EBP = (ESP);
  /* 1282c693 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c699 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c69d jl 0x1282c6a5 */
  if ((C.sf!=C.of)) goto L_1282c6a5;
  /* 1282c69f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c6a3 jle 0x1282c6ac */
  if ((C.zf||C.sf!=C.of)) goto L_1282c6ac;
L_1282c6a5:;
  /* 1282c6a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282c6a7 jmp 0x1282ca7b */
  goto L_1282ca7b;
L_1282c6ac:;
  /* 1282c6ac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1282c6ae call 0x12826540 */
  push32(0x1282c6b3u); f_12826540();
  /* 1282c6b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c6b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1282c6bd mov eax, dword ptr [0x1284e804] */
  EAX = (r32((uint32_t)(0x1284e804)));
  /* 1282c6c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c6c5 mov dword ptr [0x1284e804], eax */
  w32((uint32_t)(0x1284e804), (EAX));
L_1282c6ca:;
  /* 1282c6ca cmp dword ptr [0x1284e814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c6d1 je 0x1282c6dd */
  if (C.zf) goto L_1282c6dd;
  /* 1282c6d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282c6d5 call dword ptr [0x12850338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850338))), 0x1282c6dbu);
  /* 1282c6db jmp 0x1282c6ca */
  goto L_1282c6ca;
L_1282c6dd:;
  /* 1282c6dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c6e1 je 0x1282c721 */
  if (C.zf) goto L_1282c721;
  /* 1282c6e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c6e7 je 0x1282c701 */
  if (C.zf) goto L_1282c701;
  /* 1282c6e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282c6ec push ecx */
  push32((uint32_t)(ECX));
  /* 1282c6ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c6f0 push edx */
  push32((uint32_t)(EDX));
  /* 1282c6f1 call 0x1282ca80 */
  push32(0x1282c6f6u); f_1282ca80();
  /* 1282c6f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c6f9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1282c6ff jmp 0x1282c713 */
  goto L_1282c713;
L_1282c701:;
  /* 1282c701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c704 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c707 mov ecx, dword ptr [eax + 0x1284d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1284d4dc)));
  /* 1282c70d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1282c713:;
  /* 1282c713 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1282c719 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1282c71c jmp 0x1282ca5b */
  goto L_1282ca5b;
L_1282c721:;
  /* 1282c721 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1282c728 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1282c72f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c733 je 0x1282ca53 */
  if (C.zf) goto L_1282ca53;
  /* 1282c739 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282c73c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282c73f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c742 jne 0x1282c964 */
  if (!C.zf) goto L_1282c964;
  /* 1282c748 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282c74b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1282c74f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c752 jne 0x1282c964 */
  if (!C.zf) goto L_1282c964;
  /* 1282c758 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282c75b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1282c75f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c762 jne 0x1282c964 */
  if (!C.zf) goto L_1282c964;
  /* 1282c768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282c76b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1282c771:;
  /* 1282c771 push 0x12849fb4 */
  push32((uint32_t)(0x12849fb4u));
  /* 1282c776 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1282c77c push ecx */
  push32((uint32_t)(ECX));
  /* 1282c77d call 0x1282e8e0 */
  push32(0x1282c782u); f_1282e8e0();
  /* 1282c782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c785 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1282c78b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c792 je 0x1282c7bd */
  if (C.zf) goto L_1282c7bd;
  /* 1282c794 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1282c79a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c7a0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1282c7a6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c7ad je 0x1282c7bd */
  if (C.zf) goto L_1282c7bd;
  /* 1282c7af mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1282c7b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282c7b8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c7bb jne 0x1282c7e3 */
  if (!C.zf) goto L_1282c7e3;
L_1282c7bd:;
  /* 1282c7bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c7c1 je 0x1282c7dc */
  if (C.zf) goto L_1282c7dc;
  /* 1282c7c3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1282c7c5 call 0x128265e0 */
  push32(0x1282c7cau); f_128265e0();
  /* 1282c7ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c7cd mov edx, dword ptr [0x1284e804] */
  EDX = (r32((uint32_t)(0x1284e804)));
  /* 1282c7d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c7d6 mov dword ptr [0x1284e804], edx */
  w32((uint32_t)(0x1284e804), (EDX));
L_1282c7dc:;
  /* 1282c7dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282c7de jmp 0x1282ca7b */
  goto L_1282ca7b;
L_1282c7e3:;
  /* 1282c7e3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1282c7ea jmp 0x1282c7f5 */
  goto L_1282c7f5;
L_1282c7ec:;
  /* 1282c7ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282c7ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c7f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1282c7f5:;
  /* 1282c7f5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c7f9 jg 0x1282c843 */
  if ((!C.zf&&C.sf==C.of)) goto L_1282c843;
  /* 1282c7fb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1282c801 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c802 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1282c808 push edx */
  push32((uint32_t)(EDX));
  /* 1282c809 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282c80c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c80f mov ecx, dword ptr [eax + 0x1284d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1284d4d8)));
  /* 1282c815 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c816 call 0x1282e8a0 */
  push32(0x1282c81bu); f_1282e8a0();
  /* 1282c81b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c81e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282c820 jne 0x1282c841 */
  if (!C.zf) goto L_1282c841;
  /* 1282c822 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282c825 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c828 mov eax, dword ptr [edx + 0x1284d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1284d4d8)));
  /* 1282c82e push eax */
  push32((uint32_t)(EAX));
  /* 1282c82f call 0x12825970 */
  push32(0x1282c834u); f_12825970();
  /* 1282c834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c837 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c83d jne 0x1282c841 */
  if (!C.zf) goto L_1282c841;
  /* 1282c83f jmp 0x1282c843 */
  goto L_1282c843;
L_1282c841:;
  /* 1282c841 jmp 0x1282c7ec */
  goto L_1282c7ec;
L_1282c843:;
  /* 1282c843 push 0x12849fb0 */
  push32((uint32_t)(0x12849fb0u));
  /* 1282c848 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1282c84e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c851 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1282c857 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1282c85d push edx */
  push32((uint32_t)(EDX));
  /* 1282c85e call 0x1282e860 */
  push32(0x1282c863u); f_1282e860();
  /* 1282c863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c866 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1282c86c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c873 jne 0x1282c8a9 */
  if (!C.zf) goto L_1282c8a9;
  /* 1282c875 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1282c87b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282c87e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c881 je 0x1282c8a9 */
  if (C.zf) goto L_1282c8a9;
  /* 1282c883 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c887 je 0x1282c8a2 */
  if (C.zf) goto L_1282c8a2;
  /* 1282c889 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1282c88b call 0x128265e0 */
  push32(0x1282c890u); f_128265e0();
  /* 1282c890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c893 mov edx, dword ptr [0x1284e804] */
  EDX = (r32((uint32_t)(0x1284e804)));
  /* 1282c899 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282c89c mov dword ptr [0x1284e804], edx */
  w32((uint32_t)(0x1284e804), (EDX));
L_1282c8a2:;
  /* 1282c8a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282c8a4 jmp 0x1282ca7b */
  goto L_1282ca7b;
L_1282c8a9:;
  /* 1282c8a9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c8ad jg 0x1282c8fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1282c8fa;
  /* 1282c8af mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1282c8b5 push eax */
  push32((uint32_t)(EAX));
  /* 1282c8b6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1282c8bc push ecx */
  push32((uint32_t)(ECX));
  /* 1282c8bd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1282c8c3 push edx */
  push32((uint32_t)(EDX));
  /* 1282c8c4 call 0x12826360 */
  push32(0x1282c8c9u); f_12826360();
  /* 1282c8c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c8cc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1282c8d2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1282c8da lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1282c8e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c8e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282c8e4 push edx */
  push32((uint32_t)(EDX));
  /* 1282c8e5 call 0x1282ca80 */
  push32(0x1282c8eau); f_1282ca80();
  /* 1282c8ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c8ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282c8ef je 0x1282c8fa */
  if (C.zf) goto L_1282c8fa;
  /* 1282c8f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c8f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c8f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1282c8fa:;
  /* 1282c8fa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1282c900 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c906 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1282c90c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1282c912 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1282c915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282c917 je 0x1282c928 */
  if (C.zf) goto L_1282c928;
  /* 1282c919 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1282c91f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c922 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1282c928:;
  /* 1282c928 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1282c92e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1282c931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282c933 jne 0x1282c771 */
  if (!C.zf) goto L_1282c771;
  /* 1282c939 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c93d je 0x1282c94c */
  if (C.zf) goto L_1282c94c;
  /* 1282c93f call 0x1282cc20 */
  push32(0x1282c944u); f_1282cc20();
  /* 1282c944 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1282c94a jmp 0x1282c956 */
  goto L_1282c956;
L_1282c94c:;
  /* 1282c94c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1282c956:;
  /* 1282c956 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1282c95c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282c95f jmp 0x1282ca51 */
  goto L_1282ca51;
L_1282c964:;
  /* 1282c964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282c967 push edx */
  push32((uint32_t)(EDX));
  /* 1282c968 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282c96a push 0 */
  push32((uint32_t)(0x0u));
  /* 1282c96c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1282c972 push eax */
  push32((uint32_t)(EAX));
  /* 1282c973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282c976 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c977 call 0x1282cd20 */
  push32(0x1282c97cu); f_1282cd20();
  /* 1282c97c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c97f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282c982 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c986 je 0x1282ca51 */
  if (C.zf) goto L_1282ca51;
  /* 1282c98c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282c993 jmp 0x1282c99e */
  goto L_1282c99e;
L_1282c995:;
  /* 1282c995 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282c998 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c99b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1282c99e:;
  /* 1282c99e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c9a2 jg 0x1282ca00 */
  if ((!C.zf&&C.sf==C.of)) goto L_1282ca00;
  /* 1282c9a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282c9a8 je 0x1282c9fe */
  if (C.zf) goto L_1282c9fe;
  /* 1282c9aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282c9ad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282c9b0 mov ecx, dword ptr [eax + 0x1284d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1284d4dc)));
  /* 1282c9b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c9b7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1282c9bd push edx */
  push32((uint32_t)(EDX));
  /* 1282c9be call 0x1282e7d0 */
  push32(0x1282c9c3u); f_1282e7d0();
  /* 1282c9c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c9c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282c9c8 je 0x1282c9f5 */
  if (C.zf) goto L_1282c9f5;
  /* 1282c9ca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1282c9d0 push eax */
  push32((uint32_t)(EAX));
  /* 1282c9d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282c9d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1282c9d5 call 0x1282ca80 */
  push32(0x1282c9dau); f_1282ca80();
  /* 1282c9da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c9dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282c9df je 0x1282c9ec */
  if (C.zf) goto L_1282c9ec;
  /* 1282c9e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c9e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c9e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1282c9ea jmp 0x1282c9f3 */
  goto L_1282c9f3;
L_1282c9ec:;
  /* 1282c9ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1282c9f3:;
  /* 1282c9f3 jmp 0x1282c9fe */
  goto L_1282c9fe;
L_1282c9f5:;
  /* 1282c9f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282c9f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282c9fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1282c9fe:;
  /* 1282c9fe jmp 0x1282c995 */
  goto L_1282c995;
L_1282ca00:;
  /* 1282ca00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ca04 je 0x1282ca2b */
  if (C.zf) goto L_1282ca2b;
  /* 1282ca06 call 0x1282cc20 */
  push32(0x1282ca0bu); f_1282cc20();
  /* 1282ca0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282ca0e push 2 */
  push32((uint32_t)(0x2u));
  /* 1282ca10 mov ecx, dword ptr [0x1284d4dc] */
  ECX = (r32((uint32_t)(0x1284d4dc)));
  /* 1282ca16 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ca17 call 0x128235d0 */
  push32(0x1282ca1cu); f_128235d0();
  /* 1282ca1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ca1f mov dword ptr [0x1284d4dc], 0 */
  w32((uint32_t)(0x1284d4dc), (0x0u));
  /* 1282ca29 jmp 0x1282ca51 */
  goto L_1282ca51;
L_1282ca2b:;
  /* 1282ca2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ca2f je 0x1282ca3e */
  if (C.zf) goto L_1282ca3e;
  /* 1282ca31 call 0x1282cc20 */
  push32(0x1282ca36u); f_1282cc20();
  /* 1282ca36 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1282ca3c jmp 0x1282ca48 */
  goto L_1282ca48;
L_1282ca3e:;
  /* 1282ca3e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1282ca48:;
  /* 1282ca48 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1282ca4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1282ca51:;
  /* 1282ca51 jmp 0x1282ca5b */
  goto L_1282ca5b;
L_1282ca53:;
  /* 1282ca53 call 0x1282cc20 */
  push32(0x1282ca58u); f_1282cc20();
  /* 1282ca58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1282ca5b:;
  /* 1282ca5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ca5f je 0x1282ca78 */
  if (C.zf) goto L_1282ca78;
  /* 1282ca61 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1282ca63 call 0x128265e0 */
  push32(0x1282ca68u); f_128265e0();
  /* 1282ca68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ca6b mov eax, dword ptr [0x1284e804] */
  EAX = (r32((uint32_t)(0x1284e804)));
  /* 1282ca70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ca73 mov dword ptr [0x1284e804], eax */
  w32((uint32_t)(0x1284e804), (EAX));
L_1282ca78:;
  /* 1282ca78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1282ca7b:;
  /* 1282ca7b mov esp, ebp */
  ESP = (EBP);
  /* 1282ca7d pop ebp */
  EBP = (pop32());
  /* 1282ca7e ret  */
  ESPCHK(0x1282c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca80 @ 0x1282ca80 (403 bytes, 117 insns) */
void f_1282ca80(void) {
  FTRACE(0x1282ca80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282ca80 push ebp */
  push32((uint32_t)(EBP));
  /* 1282ca81 mov ebp, esp */
  EBP = (ESP);
  /* 1282ca83 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ca89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ca8c push eax */
  push32((uint32_t)(EAX));
  /* 1282ca8d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1282ca93 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ca94 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1282ca9a push edx */
  push32((uint32_t)(EDX));
  /* 1282ca9b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1282caa1 push eax */
  push32((uint32_t)(EAX));
  /* 1282caa2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282caa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1282caa6 call 0x1282cd20 */
  push32(0x1282caabu); f_1282cd20();
  /* 1282caab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282caae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282cab0 jne 0x1282cab9 */
  if (!C.zf) goto L_1282cab9;
  /* 1282cab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282cab4 jmp 0x1282cc0f */
  goto L_1282cc0f;
L_1282cab9:;
  /* 1282cab9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1282cabe push 0x12849fb8 */
  push32((uint32_t)(0x12849fb8u));
  /* 1282cac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282cac5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1282cacb push edx */
  push32((uint32_t)(EDX));
  /* 1282cacc call 0x12825970 */
  push32(0x1282cad1u); f_12825970();
  /* 1282cad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cad4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cad7 push eax */
  push32((uint32_t)(EAX));
  /* 1282cad8 call 0x12822b40 */
  push32(0x1282caddu); f_12822b40();
  /* 1282cadd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cae0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282cae3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cae7 jne 0x1282caf0 */
  if (!C.zf) goto L_1282caf0;
  /* 1282cae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282caeb jmp 0x1282cc0f */
  goto L_1282cc0f;
L_1282caf0:;
  /* 1282caf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282caf3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282caf6 mov ecx, dword ptr [eax + 0x1284d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1284d4dc)));
  /* 1282cafc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282caff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cb02 mov eax, dword ptr [edx*4 + 0x1284e680] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1284e680)));
  /* 1282cb09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282cb0c push 6 */
  push32((uint32_t)(0x6u));
  /* 1282cb0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cb11 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282cb14 add ecx, 0x1284e6d0 */
  { uint32_t _a=(ECX),_b=(0x1284e6d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cb1a push ecx */
  push32((uint32_t)(ECX));
  /* 1282cb1b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1282cb1e push edx */
  push32((uint32_t)(EDX));
  /* 1282cb1f call 0x12829420 */
  push32(0x1282cb24u); f_12829420();
  /* 1282cb24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cb27 mov eax, dword ptr [0x1284e698] */
  EAX = (r32((uint32_t)(0x1284e698)));
  /* 1282cb2c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1282cb2f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1282cb35 push ecx */
  push32((uint32_t)(ECX));
  /* 1282cb36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282cb39 push edx */
  push32((uint32_t)(EDX));
  /* 1282cb3a call 0x12825af0 */
  push32(0x1282cb3fu); f_12825af0();
  /* 1282cb3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cb42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cb45 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282cb48 mov dword ptr [ecx + 0x1284d4dc], eax */
  w32((uint32_t)(ECX + 0x1284d4dc), (EAX));
  /* 1282cb4e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1282cb54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1282cb5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cb5d mov dword ptr [eax*4 + 0x1284e680], edx */
  w32((uint32_t)(EAX*4 + 0x1284e680), (EDX));
  /* 1282cb64 push 6 */
  push32((uint32_t)(0x6u));
  /* 1282cb66 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1282cb6c push ecx */
  push32((uint32_t)(ECX));
  /* 1282cb6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cb70 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282cb73 add edx, 0x1284e6d0 */
  { uint32_t _a=(EDX),_b=(0x1284e6d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cb79 push edx */
  push32((uint32_t)(EDX));
  /* 1282cb7a call 0x12829420 */
  push32(0x1282cb7fu); f_12829420();
  /* 1282cb7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cb82 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cb86 jne 0x1282cb93 */
  if (!C.zf) goto L_1282cb93;
  /* 1282cb88 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1282cb8e mov dword ptr [0x1284e698], eax */
  w32((uint32_t)(0x1284e698), (EAX));
L_1282cb93:;
  /* 1282cb93 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cb97 jne 0x1282cba5 */
  if (!C.zf) goto L_1282cba5;
  /* 1282cb99 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1282cb9f mov dword ptr [0x1284e69c], ecx */
  w32((uint32_t)(0x1284e69c), (ECX));
L_1282cba5:;
  /* 1282cba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cba8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282cbab call dword ptr [edx + 0x1284d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1284d4e0))), 0x1282cbb1u);
  /* 1282cbb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282cbb3 je 0x1282cbec */
  if (C.zf) goto L_1282cbec;
  /* 1282cbb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cbb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282cbbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282cbbe mov dword ptr [eax + 0x1284d4dc], ecx */
  w32((uint32_t)(EAX + 0x1284d4dc), (ECX));
  /* 1282cbc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282cbc6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282cbc9 push edx */
  push32((uint32_t)(EDX));
  /* 1282cbca call 0x128235d0 */
  push32(0x1282cbcfu); f_128235d0();
  /* 1282cbcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cbd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cbd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282cbd8 mov dword ptr [eax*4 + 0x1284e680], ecx */
  w32((uint32_t)(EAX*4 + 0x1284e680), (ECX));
  /* 1282cbdf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282cbe2 mov dword ptr [0x1284e698], edx */
  w32((uint32_t)(0x1284e698), (EDX));
  /* 1282cbe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282cbea jmp 0x1282cc0f */
  goto L_1282cc0f;
L_1282cbec:;
  /* 1282cbec cmp dword ptr [ebp - 0xc], 0x1284d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1284d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cbf3 je 0x1282cc03 */
  if (C.zf) goto L_1282cc03;
  /* 1282cbf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282cbf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282cbfa push eax */
  push32((uint32_t)(EAX));
  /* 1282cbfb call 0x128235d0 */
  push32(0x1282cc00u); f_128235d0();
  /* 1282cc00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282cc03:;
  /* 1282cc03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cc06 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282cc09 mov eax, dword ptr [ecx + 0x1284d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1284d4dc)));
L_1282cc0f:;
  /* 1282cc0f mov esp, ebp */
  ESP = (EBP);
  /* 1282cc11 pop ebp */
  EBP = (pop32());
  /* 1282cc12 ret  */
  ESPCHK(0x1282ca80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x1282cc20 (256 bytes, 72 insns) */
void f_1282cc20(void) {
  FTRACE(0x1282cc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282cc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1282cc21 mov ebp, esp */
  EBP = (ESP);
  /* 1282cc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282cc26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1282cc2d cmp dword ptr [0x1284d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cc34 jne 0x1282cc54 */
  if (!C.zf) goto L_1282cc54;
  /* 1282cc36 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1282cc3b push 0x12849fb8 */
  push32((uint32_t)(0x12849fb8u));
  /* 1282cc40 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282cc42 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1282cc47 call 0x12822b40 */
  push32(0x1282cc4cu); f_12822b40();
  /* 1282cc4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cc4f mov dword ptr [0x1284d4dc], eax */
  w32((uint32_t)(0x1284d4dc), (EAX));
L_1282cc54:;
  /* 1282cc54 mov eax, dword ptr [0x1284d4dc] */
  EAX = (r32((uint32_t)(0x1284d4dc)));
  /* 1282cc59 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1282cc5c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1282cc63 jmp 0x1282cc6e */
  goto L_1282cc6e;
L_1282cc65:;
  /* 1282cc65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282cc68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cc6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1282cc6e:;
  /* 1282cc6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282cc71 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282cc74 mov eax, dword ptr [edx + 0x1284d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1284d4dc)));
  /* 1282cc7a push eax */
  push32((uint32_t)(EAX));
  /* 1282cc7b push 0x12849fc4 */
  push32((uint32_t)(0x12849fc4u));
  /* 1282cc80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282cc83 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282cc86 mov edx, dword ptr [ecx + 0x1284d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1284d4d8)));
  /* 1282cc8c push edx */
  push32((uint32_t)(EDX));
  /* 1282cc8d push 3 */
  push32((uint32_t)(0x3u));
  /* 1282cc8f mov eax, dword ptr [0x1284d4dc] */
  EAX = (r32((uint32_t)(0x1284d4dc)));
  /* 1282cc94 push eax */
  push32((uint32_t)(EAX));
  /* 1282cc95 call 0x1282cec0 */
  push32(0x1282cc9au); f_1282cec0();
  /* 1282cc9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cc9d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cca1 jge 0x1282cce9 */
  if ((C.sf==C.of)) goto L_1282cce9;
  /* 1282cca3 push 0x12849fb0 */
  push32((uint32_t)(0x12849fb0u));
  /* 1282cca8 mov ecx, dword ptr [0x1284d4dc] */
  ECX = (r32((uint32_t)(0x1284d4dc)));
  /* 1282ccae push ecx */
  push32((uint32_t)(ECX));
  /* 1282ccaf call 0x12825b00 */
  push32(0x1282ccb4u); f_12825b00();
  /* 1282ccb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ccb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282ccba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ccbd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282ccc0 mov eax, dword ptr [edx + 0x1284d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1284d4dc)));
  /* 1282ccc6 push eax */
  push32((uint32_t)(EAX));
  /* 1282ccc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282ccca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282cccd mov edx, dword ptr [ecx + 0x1284d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1284d4dc)));
  /* 1282ccd3 push edx */
  push32((uint32_t)(EDX));
  /* 1282ccd4 call 0x1282e7d0 */
  push32(0x1282ccd9u); f_1282e7d0();
  /* 1282ccd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ccdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ccde je 0x1282cce7 */
  if (C.zf) goto L_1282cce7;
  /* 1282cce0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1282cce7:;
  /* 1282cce7 jmp 0x1282cd17 */
  goto L_1282cd17;
L_1282cce9:;
  /* 1282cce9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cced jne 0x1282ccf6 */
  if (!C.zf) goto L_1282ccf6;
  /* 1282ccef mov eax, dword ptr [0x1284d4dc] */
  EAX = (r32((uint32_t)(0x1284d4dc)));
  /* 1282ccf4 jmp 0x1282cd1c */
  goto L_1282cd1c;
L_1282ccf6:;
  /* 1282ccf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282ccf8 mov eax, dword ptr [0x1284d4dc] */
  EAX = (r32((uint32_t)(0x1284d4dc)));
  /* 1282ccfd push eax */
  push32((uint32_t)(EAX));
  /* 1282ccfe call 0x128235d0 */
  push32(0x1282cd03u); f_128235d0();
  /* 1282cd03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cd06 mov dword ptr [0x1284d4dc], 0 */
  w32((uint32_t)(0x1284d4dc), (0x0u));
  /* 1282cd10 mov eax, dword ptr [0x1284d4f4] */
  EAX = (r32((uint32_t)(0x1284d4f4)));
  /* 1282cd15 jmp 0x1282cd1c */
  goto L_1282cd1c;
L_1282cd17:;
  /* 1282cd17 jmp 0x1282cc65 */
  goto L_1282cc65;
L_1282cd1c:;
  /* 1282cd1c mov esp, ebp */
  ESP = (EBP);
  /* 1282cd1e pop ebp */
  EBP = (pop32());
  /* 1282cd1f ret  */
  ESPCHK(0x1282cc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd20 @ 0x1282cd20 (388 bytes, 115 insns) */
void f_1282cd20(void) {
  FTRACE(0x1282cd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282cd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1282cd21 mov ebp, esp */
  EBP = (ESP);
  /* 1282cd23 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282cd29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cd2d jne 0x1282cd36 */
  if (!C.zf) goto L_1282cd36;
  /* 1282cd2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282cd31 jmp 0x1282cea0 */
  goto L_1282cea0;
L_1282cd36:;
  /* 1282cd36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cd39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282cd3c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cd3f jne 0x1282cd90 */
  if (!C.zf) goto L_1282cd90;
  /* 1282cd41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cd44 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1282cd48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282cd4a jne 0x1282cd90 */
  if (!C.zf) goto L_1282cd90;
  /* 1282cd4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cd4f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1282cd52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cd55 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1282cd59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cd5d je 0x1282cd79 */
  if (C.zf) goto L_1282cd79;
  /* 1282cd5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282cd62 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1282cd67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282cd6a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1282cd70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282cd73 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1282cd79:;
  /* 1282cd79 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cd7d je 0x1282cd88 */
  if (C.zf) goto L_1282cd88;
  /* 1282cd7f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282cd82 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1282cd88:;
  /* 1282cd88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cd8b jmp 0x1282cea0 */
  goto L_1282cea0;
L_1282cd90:;
  /* 1282cd90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cd93 push ecx */
  push32((uint32_t)(ECX));
  /* 1282cd94 push 0x1284d450 */
  push32((uint32_t)(0x1284d450u));
  /* 1282cd99 call 0x1282e7d0 */
  push32(0x1282cd9eu); f_1282e7d0();
  /* 1282cd9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cda1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282cda3 je 0x1282ce58 */
  if (C.zf) goto L_1282ce58;
  /* 1282cda9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cdac push edx */
  push32((uint32_t)(EDX));
  /* 1282cdad push 0x1284d3cc */
  push32((uint32_t)(0x1284d3ccu));
  /* 1282cdb2 call 0x1282e7d0 */
  push32(0x1282cdb7u); f_1282e7d0();
  /* 1282cdb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cdba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282cdbc je 0x1282ce58 */
  if (C.zf) goto L_1282ce58;
  /* 1282cdc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cdc5 push eax */
  push32((uint32_t)(EAX));
  /* 1282cdc6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1282cdcc push ecx */
  push32((uint32_t)(ECX));
  /* 1282cdcd call 0x1282cf10 */
  push32(0x1282cdd2u); f_1282cf10();
  /* 1282cdd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cdd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282cdd7 je 0x1282cde0 */
  if (C.zf) goto L_1282cde0;
  /* 1282cdd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282cddb jmp 0x1282cea0 */
  goto L_1282cea0;
L_1282cde0:;
  /* 1282cde0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1282cde6 push edx */
  push32((uint32_t)(EDX));
  /* 1282cde7 push 0x1284e6a8 */
  push32((uint32_t)(0x1284e6a8u));
  /* 1282cdec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1282cdf2 push eax */
  push32((uint32_t)(EAX));
  /* 1282cdf3 call 0x1282e920 */
  push32(0x1282cdf8u); f_1282e920();
  /* 1282cdf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cdfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282cdfd jne 0x1282ce06 */
  if (!C.zf) goto L_1282ce06;
  /* 1282cdff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282ce01 jmp 0x1282cea0 */
  goto L_1282cea0;
L_1282ce06:;
  /* 1282ce06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282ce08 mov cx, word ptr [0x1284e6ac] */
  CX = (r16((uint32_t)(0x1284e6ac)));
  /* 1282ce0f mov dword ptr [0x1284e6b0], ecx */
  w32((uint32_t)(0x1284e6b0), (ECX));
  /* 1282ce15 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1282ce1b push edx */
  push32((uint32_t)(EDX));
  /* 1282ce1c push 0x1284d450 */
  push32((uint32_t)(0x1284d450u));
  /* 1282ce21 call 0x1282d070 */
  push32(0x1282ce26u); f_1282d070();
  /* 1282ce26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ce29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ce2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282ce2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282ce31 je 0x1282ce46 */
  if (C.zf) goto L_1282ce46;
  /* 1282ce33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ce36 push edx */
  push32((uint32_t)(EDX));
  /* 1282ce37 push 0x1284d3cc */
  push32((uint32_t)(0x1284d3ccu));
  /* 1282ce3c call 0x12825af0 */
  push32(0x1282ce41u); f_12825af0();
  /* 1282ce41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ce44 jmp 0x1282ce58 */
  goto L_1282ce58;
L_1282ce46:;
  /* 1282ce46 push 0x1284d450 */
  push32((uint32_t)(0x1284d450u));
  /* 1282ce4b push 0x1284d3cc */
  push32((uint32_t)(0x1284d3ccu));
  /* 1282ce50 call 0x12825af0 */
  push32(0x1282ce55u); f_12825af0();
  /* 1282ce55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282ce58:;
  /* 1282ce58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ce5c je 0x1282ce71 */
  if (C.zf) goto L_1282ce71;
  /* 1282ce5e push 6 */
  push32((uint32_t)(0x6u));
  /* 1282ce60 push 0x1284e6a8 */
  push32((uint32_t)(0x1284e6a8u));
  /* 1282ce65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282ce68 push eax */
  push32((uint32_t)(EAX));
  /* 1282ce69 call 0x12829420 */
  push32(0x1282ce6eu); f_12829420();
  /* 1282ce6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282ce71:;
  /* 1282ce71 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ce75 je 0x1282ce8a */
  if (C.zf) goto L_1282ce8a;
  /* 1282ce77 push 4 */
  push32((uint32_t)(0x4u));
  /* 1282ce79 push 0x1284e6b0 */
  push32((uint32_t)(0x1284e6b0u));
  /* 1282ce7e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282ce81 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ce82 call 0x12829420 */
  push32(0x1282ce87u); f_12829420();
  /* 1282ce87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282ce8a:;
  /* 1282ce8a push 0x1284d450 */
  push32((uint32_t)(0x1284d450u));
  /* 1282ce8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282ce92 push edx */
  push32((uint32_t)(EDX));
  /* 1282ce93 call 0x12825af0 */
  push32(0x1282ce98u); f_12825af0();
  /* 1282ce98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ce9b mov eax, 0x1284d450 */
  EAX = (0x1284d450u);
L_1282cea0:;
  /* 1282cea0 mov esp, ebp */
  ESP = (EBP);
  /* 1282cea2 pop ebp */
  EBP = (pop32());
  /* 1282cea3 ret  */
  ESPCHK(0x1282cd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ceb0 @ 0x1282ceb0 (7 bytes, 5 insns) */
void f_1282ceb0(void) {
  FTRACE(0x1282ceb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282ceb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282ceb1 mov ebp, esp */
  EBP = (ESP);
  /* 1282ceb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282ceb5 pop ebp */
  EBP = (pop32());
  /* 1282ceb6 ret  */
  ESPCHK(0x1282ceb0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1282cec0 (79 bytes, 28 insns) */
void f_1282cec0(void) {
  FTRACE(0x1282cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282cec1 mov ebp, esp */
  EBP = (ESP);
  /* 1282cec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282cec6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1282cec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282cecc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282ced3 jmp 0x1282cede */
  goto L_1282cede;
L_1282ced5:;
  /* 1282ced5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282ced8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cedb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1282cede:;
  /* 1282cede mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282cee1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cee4 jge 0x1282cf04 */
  if ((C.sf==C.of)) goto L_1282cf04;
  /* 1282cee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282cee9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ceec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282ceef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282cef2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1282cef5 push edx */
  push32((uint32_t)(EDX));
  /* 1282cef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cef9 push eax */
  push32((uint32_t)(EAX));
  /* 1282cefa call 0x12825b00 */
  push32(0x1282ceffu); f_12825b00();
  /* 1282ceff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cf02 jmp 0x1282ced5 */
  goto L_1282ced5;
L_1282cf04:;
  /* 1282cf04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282cf0b mov esp, ebp */
  ESP = (EBP);
  /* 1282cf0d pop ebp */
  EBP = (pop32());
  /* 1282cf0e ret  */
  ESPCHK(0x1282cec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf10 @ 0x1282cf10 (349 bytes, 122 insns) */
void f_1282cf10(void) {
  FTRACE(0x1282cf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282cf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1282cf11 mov ebp, esp */
  EBP = (ESP);
  /* 1282cf13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282cf16 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1282cf1b push 0 */
  push32((uint32_t)(0x0u));
  /* 1282cf1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cf20 push eax */
  push32((uint32_t)(EAX));
  /* 1282cf21 call 0x128268b0 */
  push32(0x1282cf26u); f_128268b0();
  /* 1282cf26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cf29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cf2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282cf2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282cf31 jne 0x1282cf3a */
  if (!C.zf) goto L_1282cf3a;
  /* 1282cf33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282cf35 jmp 0x1282d069 */
  goto L_1282d069;
L_1282cf3a:;
  /* 1282cf3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cf3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282cf40 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cf43 jne 0x1282cf70 */
  if (!C.zf) goto L_1282cf70;
  /* 1282cf45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cf48 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1282cf4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282cf4e je 0x1282cf70 */
  if (C.zf) goto L_1282cf70;
  /* 1282cf50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cf53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cf56 push ecx */
  push32((uint32_t)(ECX));
  /* 1282cf57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cf5a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cf60 push edx */
  push32((uint32_t)(EDX));
  /* 1282cf61 call 0x12825af0 */
  push32(0x1282cf66u); f_12825af0();
  /* 1282cf66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cf69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282cf6b jmp 0x1282d069 */
  goto L_1282d069;
L_1282cf70:;
  /* 1282cf70 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1282cf77 jmp 0x1282cf82 */
  goto L_1282cf82;
L_1282cf79:;
  /* 1282cf79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282cf7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cf7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282cf82:;
  /* 1282cf82 push 0x12849fc8 */
  push32((uint32_t)(0x12849fc8u));
  /* 1282cf87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cf8a push ecx */
  push32((uint32_t)(ECX));
  /* 1282cf8b call 0x1282e860 */
  push32(0x1282cf90u); f_1282e860();
  /* 1282cf90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cf93 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1282cf96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cf9a jne 0x1282cfa4 */
  if (!C.zf) goto L_1282cfa4;
  /* 1282cf9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282cf9f jmp 0x1282d069 */
  goto L_1282d069;
L_1282cfa4:;
  /* 1282cfa4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cfa7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cfaa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282cfac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1282cfaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cfb3 jne 0x1282cfda */
  if (!C.zf) goto L_1282cfda;
  /* 1282cfb5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cfb9 jge 0x1282cfda */
  if ((C.sf==C.of)) goto L_1282cfda;
  /* 1282cfbb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282cfbf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cfc2 je 0x1282cfda */
  if (C.zf) goto L_1282cfda;
  /* 1282cfc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282cfc7 push edx */
  push32((uint32_t)(EDX));
  /* 1282cfc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cfcb push eax */
  push32((uint32_t)(EAX));
  /* 1282cfcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cfcf push ecx */
  push32((uint32_t)(ECX));
  /* 1282cfd0 call 0x12826360 */
  push32(0x1282cfd5u); f_12826360();
  /* 1282cfd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cfd8 jmp 0x1282d040 */
  goto L_1282d040;
L_1282cfda:;
  /* 1282cfda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cfde jne 0x1282d008 */
  if (!C.zf) goto L_1282d008;
  /* 1282cfe0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cfe4 jge 0x1282d008 */
  if ((C.sf==C.of)) goto L_1282d008;
  /* 1282cfe6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282cfea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282cfed je 0x1282d008 */
  if (C.zf) goto L_1282d008;
  /* 1282cfef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282cff2 push eax */
  push32((uint32_t)(EAX));
  /* 1282cff3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282cff6 push ecx */
  push32((uint32_t)(ECX));
  /* 1282cff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282cffa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282cffd push edx */
  push32((uint32_t)(EDX));
  /* 1282cffe call 0x12826360 */
  push32(0x1282d003u); f_12826360();
  /* 1282d003 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d006 jmp 0x1282d040 */
  goto L_1282d040;
L_1282d008:;
  /* 1282d008 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d00c jne 0x1282d03b */
  if (!C.zf) goto L_1282d03b;
  /* 1282d00e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282d012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282d014 je 0x1282d01f */
  if (C.zf) goto L_1282d01f;
  /* 1282d016 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282d01a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d01d jne 0x1282d03b */
  if (!C.zf) goto L_1282d03b;
L_1282d01f:;
  /* 1282d01f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d022 push edx */
  push32((uint32_t)(EDX));
  /* 1282d023 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282d026 push eax */
  push32((uint32_t)(EAX));
  /* 1282d027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d02a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d030 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d031 call 0x12826360 */
  push32(0x1282d036u); f_12826360();
  /* 1282d036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d039 jmp 0x1282d040 */
  goto L_1282d040;
L_1282d03b:;
  /* 1282d03b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282d03e jmp 0x1282d069 */
  goto L_1282d069;
L_1282d040:;
  /* 1282d040 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282d044 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d047 jne 0x1282d04b */
  if (!C.zf) goto L_1282d04b;
  /* 1282d049 jmp 0x1282d067 */
  goto L_1282d067;
L_1282d04b:;
  /* 1282d04b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282d04f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282d051 jne 0x1282d055 */
  if (!C.zf) goto L_1282d055;
  /* 1282d053 jmp 0x1282d067 */
  goto L_1282d067;
L_1282d055:;
  /* 1282d055 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d058 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282d05b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1282d05f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1282d062 jmp 0x1282cf79 */
  goto L_1282cf79;
L_1282d067:;
  /* 1282d067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282d069:;
  /* 1282d069 mov esp, ebp */
  ESP = (EBP);
  /* 1282d06b pop ebp */
  EBP = (pop32());
  /* 1282d06c ret  */
  ESPCHK(0x1282cf10u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1282d070 (101 bytes, 36 insns) */
void f_1282d070(void) {
  FTRACE(0x1282d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282d070 push ebp */
  push32((uint32_t)(EBP));
  /* 1282d071 mov ebp, esp */
  EBP = (ESP);
  /* 1282d073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282d076 push eax */
  push32((uint32_t)(EAX));
  /* 1282d077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d07a push ecx */
  push32((uint32_t)(ECX));
  /* 1282d07b call 0x12825af0 */
  push32(0x1282d080u); f_12825af0();
  /* 1282d080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d083 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282d086 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1282d08a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282d08c je 0x1282d0a8 */
  if (C.zf) goto L_1282d0a8;
  /* 1282d08e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282d091 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d094 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d095 push 0x12849fd0 */
  push32((uint32_t)(0x12849fd0u));
  /* 1282d09a push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d09c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d09f push edx */
  push32((uint32_t)(EDX));
  /* 1282d0a0 call 0x1282cec0 */
  push32(0x1282d0a5u); f_1282cec0();
  /* 1282d0a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282d0a8:;
  /* 1282d0a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282d0ab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1282d0b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282d0b4 je 0x1282d0d3 */
  if (C.zf) goto L_1282d0d3;
  /* 1282d0b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282d0b9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d0bf push edx */
  push32((uint32_t)(EDX));
  /* 1282d0c0 push 0x12849fcc */
  push32((uint32_t)(0x12849fccu));
  /* 1282d0c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d0c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d0ca push eax */
  push32((uint32_t)(EAX));
  /* 1282d0cb call 0x1282cec0 */
  push32(0x1282d0d0u); f_1282cec0();
  /* 1282d0d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282d0d3:;
  /* 1282d0d3 pop ebp */
  EBP = (pop32());
  /* 1282d0d4 ret  */
  ESPCHK(0x1282d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0e0 @ 0x1282d0e0 (130 bytes, 50 insns) */
void f_1282d0e0(void) {
  FTRACE(0x1282d0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282d0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282d0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1282d0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d0e4 push ebx */
  push32((uint32_t)(EBX));
  /* 1282d0e5 push esi */
  push32((uint32_t)(ESI));
  /* 1282d0e6 push edi */
  push32((uint32_t)(EDI));
  /* 1282d0e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1282d0ee:;
  /* 1282d0ee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d0f2 jne 0x1282d112 */
  if (!C.zf) goto L_1282d112;
  /* 1282d0f4 push 0x12849fe0 */
  push32((uint32_t)(0x12849fe0u));
  /* 1282d0f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282d0fb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1282d0fd push 0x12849fd4 */
  push32((uint32_t)(0x12849fd4u));
  /* 1282d102 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d104 call 0x12821c00 */
  push32(0x1282d109u); f_12821c00();
  /* 1282d109 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d10c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d10f jne 0x1282d112 */
  if (!C.zf) goto L_1282d112;
  /* 1282d111 int3  */
  x86_unimpl("int3 @ 0x1282d111");
L_1282d112:;
  /* 1282d112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282d114 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282d116 jne 0x1282d0ee */
  if (!C.zf) goto L_1282d0ee;
  /* 1282d118 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d11b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282d11e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1282d121 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282d123 je 0x1282d131 */
  if (C.zf) goto L_1282d131;
  /* 1282d125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d128 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1282d12f jmp 0x1282d158 */
  goto L_1282d158;
L_1282d131:;
  /* 1282d131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d134 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d135 call 0x1282b950 */
  push32(0x1282d13au); f_1282b950();
  /* 1282d13a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d13d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d140 push edx */
  push32((uint32_t)(EDX));
  /* 1282d141 call 0x1282d170 */
  push32(0x1282d146u); f_1282d170();
  /* 1282d146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d149 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282d14c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d14f push eax */
  push32((uint32_t)(EAX));
  /* 1282d150 call 0x1282b9c0 */
  push32(0x1282d155u); f_1282b9c0();
  /* 1282d155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282d158:;
  /* 1282d158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d15b pop edi */
  EDI = (pop32());
  /* 1282d15c pop esi */
  ESI = (pop32());
  /* 1282d15d pop ebx */
  EBX = (pop32());
  /* 1282d15e mov esp, ebp */
  ESP = (EBP);
  /* 1282d160 pop ebp */
  EBP = (pop32());
  /* 1282d161 ret  */
  ESPCHK(0x1282d0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d170 @ 0x1282d170 (190 bytes, 67 insns) */
void f_1282d170(void) {
  FTRACE(0x1282d170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282d170 push ebp */
  push32((uint32_t)(EBP));
  /* 1282d171 mov ebp, esp */
  EBP = (ESP);
  /* 1282d173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282d176 push ebx */
  push32((uint32_t)(EBX));
  /* 1282d177 push esi */
  push32((uint32_t)(ESI));
  /* 1282d178 push edi */
  push32((uint32_t)(EDI));
  /* 1282d179 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1282d180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d183 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1282d186:;
  /* 1282d186 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d18a jne 0x1282d1aa */
  if (!C.zf) goto L_1282d1aa;
  /* 1282d18c push 0x12849e84 */
  push32((uint32_t)(0x12849e84u));
  /* 1282d191 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282d193 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1282d195 push 0x12849fd4 */
  push32((uint32_t)(0x12849fd4u));
  /* 1282d19a push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d19c call 0x12821c00 */
  push32(0x1282d1a1u); f_12821c00();
  /* 1282d1a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d1a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d1a7 jne 0x1282d1aa */
  if (!C.zf) goto L_1282d1aa;
  /* 1282d1a9 int3  */
  x86_unimpl("int3 @ 0x1282d1a9");
L_1282d1aa:;
  /* 1282d1aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d1ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282d1ae jne 0x1282d186 */
  if (!C.zf) goto L_1282d186;
  /* 1282d1b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d1b3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1282d1b6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1282d1bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282d1bd je 0x1282d21a */
  if (C.zf) goto L_1282d21a;
  /* 1282d1bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d1c2 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d1c3 call 0x1282c470 */
  push32(0x1282d1c8u); f_1282c470();
  /* 1282d1c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d1cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282d1ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d1d1 push edx */
  push32((uint32_t)(EDX));
  /* 1282d1d2 call 0x1282f7f0 */
  push32(0x1282d1d7u); f_1282f7f0();
  /* 1282d1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d1dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1282d1e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d1e1 call 0x1282f6c0 */
  push32(0x1282d1e6u); f_1282f6c0();
  /* 1282d1e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d1e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282d1eb jge 0x1282d1f6 */
  if ((C.sf==C.of)) goto L_1282d1f6;
  /* 1282d1ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1282d1f4 jmp 0x1282d21a */
  goto L_1282d21a;
L_1282d1f6:;
  /* 1282d1f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d1f9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d1fd je 0x1282d21a */
  if (C.zf) goto L_1282d21a;
  /* 1282d1ff push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d201 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d204 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1282d207 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d208 call 0x128235d0 */
  push32(0x1282d20du); f_128235d0();
  /* 1282d20d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d210 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d213 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1282d21a:;
  /* 1282d21a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d21d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1282d224 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d227 pop edi */
  EDI = (pop32());
  /* 1282d228 pop esi */
  ESI = (pop32());
  /* 1282d229 pop ebx */
  EBX = (pop32());
  /* 1282d22a mov esp, ebp */
  ESP = (EBP);
  /* 1282d22c pop ebp */
  EBP = (pop32());
  /* 1282d22d ret  */
  ESPCHK(0x1282d170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d230 @ 0x1282d230 (210 bytes, 63 insns) */
void f_1282d230(void) {
  FTRACE(0x1282d230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282d230 push ebp */
  push32((uint32_t)(EBP));
  /* 1282d231 mov ebp, esp */
  EBP = (ESP);
  /* 1282d233 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d237 cmp eax, dword ptr [0x1284ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d23d jae 0x1282d261 */
  if (!C.cf) goto L_1282d261;
  /* 1282d23f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d242 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282d245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d248 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282d24b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282d24e mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282d255 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1282d25a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1282d25d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282d25f jne 0x1282d274 */
  if (!C.zf) goto L_1282d274;
L_1282d261:;
  /* 1282d261 call 0x1282aa10 */
  push32(0x1282d266u); f_1282aa10();
  /* 1282d266 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282d26c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282d26f jmp 0x1282d2fe */
  goto L_1282d2fe;
L_1282d274:;
  /* 1282d274 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d277 push edx */
  push32((uint32_t)(EDX));
  /* 1282d278 call 0x1282c230 */
  push32(0x1282d27du); f_1282c230();
  /* 1282d27d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d283 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1282d286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d289 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1282d28c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282d28f mov edx, dword ptr [eax*4 + 0x1284fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1284fe60)));
  /* 1282d296 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1282d29b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1282d29e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282d2a0 je 0x1282d2dd */
  if (C.zf) goto L_1282d2dd;
  /* 1282d2a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d2a6 call 0x1282c0b0 */
  push32(0x1282d2abu); f_1282c0b0();
  /* 1282d2ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d2ae push eax */
  push32((uint32_t)(EAX));
  /* 1282d2af call dword ptr [0x1285033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285033c))), 0x1282d2b5u);
  /* 1282d2b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282d2b7 jne 0x1282d2c4 */
  if (!C.zf) goto L_1282d2c4;
  /* 1282d2b9 call dword ptr [0x128502a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502a4))), 0x1282d2bfu);
  /* 1282d2bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282d2c2 jmp 0x1282d2cb */
  goto L_1282d2cb;
L_1282d2c4:;
  /* 1282d2c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1282d2cb:;
  /* 1282d2cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d2cf jne 0x1282d2d3 */
  if (!C.zf) goto L_1282d2d3;
  /* 1282d2d1 jmp 0x1282d2ef */
  goto L_1282d2ef;
L_1282d2d3:;
  /* 1282d2d3 call 0x1282aa20 */
  push32(0x1282d2d8u); f_1282aa20();
  /* 1282d2d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d2db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1282d2dd:;
  /* 1282d2dd call 0x1282aa10 */
  push32(0x1282d2e2u); f_1282aa10();
  /* 1282d2e2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282d2e8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1282d2ef:;
  /* 1282d2ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d2f2 push eax */
  push32((uint32_t)(EAX));
  /* 1282d2f3 call 0x1282c2c0 */
  push32(0x1282d2f8u); f_1282c2c0();
  /* 1282d2f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d2fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1282d2fe:;
  /* 1282d2fe mov esp, ebp */
  ESP = (EBP);
  /* 1282d300 pop ebp */
  EBP = (pop32());
  /* 1282d301 ret  */
  ESPCHK(0x1282d230u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1282d310 (219 bytes, 64 insns) */
void f_1282d310(void) {
  FTRACE(0x1282d310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282d310 push ebp */
  push32((uint32_t)(EBP));
  /* 1282d311 mov ebp, esp */
  EBP = (ESP);
  /* 1282d313 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d314 cmp dword ptr [0x1284e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d31b je 0x1282d3b1 */
  if (C.zf) goto L_1282d3b1;
  /* 1282d321 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1282d323 push 0x12849ff0 */
  push32((uint32_t)(0x12849ff0u));
  /* 1282d328 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d32a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1282d32f push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d331 call 0x12822f50 */
  push32(0x1282d336u); f_12822f50();
  /* 1282d336 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282d33c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d340 jne 0x1282d34c */
  if (!C.zf) goto L_1282d34c;
  /* 1282d342 mov eax, 1 */
  EAX = (0x1u);
  /* 1282d347 jmp 0x1282d3e7 */
  goto L_1282d3e7;
L_1282d34c:;
  /* 1282d34c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d34f push eax */
  push32((uint32_t)(EAX));
  /* 1282d350 call 0x1282d3f0 */
  push32(0x1282d355u); f_1282d3f0();
  /* 1282d355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282d35a je 0x1282d37d */
  if (C.zf) goto L_1282d37d;
  /* 1282d35c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d35f push ecx */
  push32((uint32_t)(ECX));
  /* 1282d360 call 0x1282d980 */
  push32(0x1282d365u); f_1282d980();
  /* 1282d365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d368 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d36a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d36d push edx */
  push32((uint32_t)(EDX));
  /* 1282d36e call 0x128235d0 */
  push32(0x1282d373u); f_128235d0();
  /* 1282d373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d376 mov eax, 1 */
  EAX = (0x1u);
  /* 1282d37b jmp 0x1282d3e7 */
  goto L_1282d3e7;
L_1282d37d:;
  /* 1282d37d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d380 mov dword ptr [0x1284dc98], eax */
  w32((uint32_t)(0x1284dc98), (EAX));
  /* 1282d385 mov ecx, dword ptr [0x1284e6b4] */
  ECX = (r32((uint32_t)(0x1284e6b4)));
  /* 1282d38b push ecx */
  push32((uint32_t)(ECX));
  /* 1282d38c call 0x1282d980 */
  push32(0x1282d391u); f_1282d980();
  /* 1282d391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d394 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d396 mov edx, dword ptr [0x1284e6b4] */
  EDX = (r32((uint32_t)(0x1284e6b4)));
  /* 1282d39c push edx */
  push32((uint32_t)(EDX));
  /* 1282d39d call 0x128235d0 */
  push32(0x1282d3a2u); f_128235d0();
  /* 1282d3a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d3a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d3a8 mov dword ptr [0x1284e6b4], eax */
  w32((uint32_t)(0x1284e6b4), (EAX));
  /* 1282d3ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282d3af jmp 0x1282d3e7 */
  goto L_1282d3e7;
L_1282d3b1:;
  /* 1282d3b1 mov dword ptr [0x1284dc98], 0x1284dca0 */
  w32((uint32_t)(0x1284dc98), (0x1284dca0u));
  /* 1282d3bb mov ecx, dword ptr [0x1284e6b4] */
  ECX = (r32((uint32_t)(0x1284e6b4)));
  /* 1282d3c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d3c2 call 0x1282d980 */
  push32(0x1282d3c7u); f_1282d980();
  /* 1282d3c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d3ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d3cc mov edx, dword ptr [0x1284e6b4] */
  EDX = (r32((uint32_t)(0x1284e6b4)));
  /* 1282d3d2 push edx */
  push32((uint32_t)(EDX));
  /* 1282d3d3 call 0x128235d0 */
  push32(0x1282d3d8u); f_128235d0();
  /* 1282d3d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d3db mov dword ptr [0x1284e6b4], 0 */
  w32((uint32_t)(0x1284e6b4), (0x0u));
  /* 1282d3e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282d3e7:;
  /* 1282d3e7 mov esp, ebp */
  ESP = (EBP);
  /* 1282d3e9 pop ebp */
  EBP = (pop32());
  /* 1282d3ea ret  */
  ESPCHK(0x1282d310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1282d3f0 (1423 bytes, 533 insns) */
void f_1282d3f0(void) {
  FTRACE(0x1282d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1282d3f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282d3f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1282d3fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282d3ff mov ax, word ptr [0x1284e6ee] */
  AX = (r16((uint32_t)(0x1284e6ee)));
  /* 1282d405 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282d408 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d40a mov cx, word ptr [0x1284e6f0] */
  CX = (r16((uint32_t)(0x1284e6f0)));
  /* 1282d411 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282d414 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d418 jne 0x1282d422 */
  if (!C.zf) goto L_1282d422;
  /* 1282d41a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282d41d jmp 0x1282d97b */
  goto L_1282d97b;
L_1282d422:;
  /* 1282d422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d425 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d428 push edx */
  push32((uint32_t)(EDX));
  /* 1282d429 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1282d42b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d42e push eax */
  push32((uint32_t)(EAX));
  /* 1282d42f push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d431 call 0x12830d00 */
  push32(0x1282d436u); f_12830d00();
  /* 1282d436 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d439 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d43c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d43e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d444 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d447 push edx */
  push32((uint32_t)(EDX));
  /* 1282d448 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1282d44a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d44d push eax */
  push32((uint32_t)(EAX));
  /* 1282d44e push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d450 call 0x12830d00 */
  push32(0x1282d455u); f_12830d00();
  /* 1282d455 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d458 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d45b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d45d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d460 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d463 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d466 push edx */
  push32((uint32_t)(EDX));
  /* 1282d467 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1282d469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d46c push eax */
  push32((uint32_t)(EAX));
  /* 1282d46d push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d46f call 0x12830d00 */
  push32(0x1282d474u); f_12830d00();
  /* 1282d474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d477 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d47a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d47c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d47f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d482 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d485 push edx */
  push32((uint32_t)(EDX));
  /* 1282d486 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1282d488 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d48b push eax */
  push32((uint32_t)(EAX));
  /* 1282d48c push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d48e call 0x12830d00 */
  push32(0x1282d493u); f_12830d00();
  /* 1282d493 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d496 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d499 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d49b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d49e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d4a1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d4a4 push edx */
  push32((uint32_t)(EDX));
  /* 1282d4a5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1282d4a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d4aa push eax */
  push32((uint32_t)(EAX));
  /* 1282d4ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d4ad call 0x12830d00 */
  push32(0x1282d4b2u); f_12830d00();
  /* 1282d4b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d4b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d4b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d4ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d4bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d4c0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d4c3 push edx */
  push32((uint32_t)(EDX));
  /* 1282d4c4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1282d4c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d4c9 push eax */
  push32((uint32_t)(EAX));
  /* 1282d4ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d4cc call 0x12830d00 */
  push32(0x1282d4d1u); f_12830d00();
  /* 1282d4d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d4d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d4d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d4d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d4dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d4df push edx */
  push32((uint32_t)(EDX));
  /* 1282d4e0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1282d4e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d4e5 push eax */
  push32((uint32_t)(EAX));
  /* 1282d4e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d4e8 call 0x12830d00 */
  push32(0x1282d4edu); f_12830d00();
  /* 1282d4ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d4f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d4f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d4f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d4f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d4fb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d4fe push edx */
  push32((uint32_t)(EDX));
  /* 1282d4ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1282d501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d504 push eax */
  push32((uint32_t)(EAX));
  /* 1282d505 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d507 call 0x12830d00 */
  push32(0x1282d50cu); f_12830d00();
  /* 1282d50c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d50f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d512 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d514 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d517 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d51a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d51d push edx */
  push32((uint32_t)(EDX));
  /* 1282d51e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1282d520 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d523 push eax */
  push32((uint32_t)(EAX));
  /* 1282d524 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d526 call 0x12830d00 */
  push32(0x1282d52bu); f_12830d00();
  /* 1282d52b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d52e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d531 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d533 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d536 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d539 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d53c push edx */
  push32((uint32_t)(EDX));
  /* 1282d53d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1282d53f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d542 push eax */
  push32((uint32_t)(EAX));
  /* 1282d543 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d545 call 0x12830d00 */
  push32(0x1282d54au); f_12830d00();
  /* 1282d54a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d54d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d550 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d552 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d558 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d55b push edx */
  push32((uint32_t)(EDX));
  /* 1282d55c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1282d55e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d561 push eax */
  push32((uint32_t)(EAX));
  /* 1282d562 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d564 call 0x12830d00 */
  push32(0x1282d569u); f_12830d00();
  /* 1282d569 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d56c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d56f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d571 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d577 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d57a push edx */
  push32((uint32_t)(EDX));
  /* 1282d57b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1282d57d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d580 push eax */
  push32((uint32_t)(EAX));
  /* 1282d581 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d583 call 0x12830d00 */
  push32(0x1282d588u); f_12830d00();
  /* 1282d588 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d58b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d58e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d590 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d593 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d596 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d599 push edx */
  push32((uint32_t)(EDX));
  /* 1282d59a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1282d59c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d59f push eax */
  push32((uint32_t)(EAX));
  /* 1282d5a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d5a2 call 0x12830d00 */
  push32(0x1282d5a7u); f_12830d00();
  /* 1282d5a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d5aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d5ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d5af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d5b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d5b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d5b8 push edx */
  push32((uint32_t)(EDX));
  /* 1282d5b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1282d5bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d5be push eax */
  push32((uint32_t)(EAX));
  /* 1282d5bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d5c1 call 0x12830d00 */
  push32(0x1282d5c6u); f_12830d00();
  /* 1282d5c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d5c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d5cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d5ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d5d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d5d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d5d7 push edx */
  push32((uint32_t)(EDX));
  /* 1282d5d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1282d5da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d5dd push eax */
  push32((uint32_t)(EAX));
  /* 1282d5de push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d5e0 call 0x12830d00 */
  push32(0x1282d5e5u); f_12830d00();
  /* 1282d5e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d5e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d5eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d5ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d5f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d5f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d5f6 push edx */
  push32((uint32_t)(EDX));
  /* 1282d5f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1282d5f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d5fc push eax */
  push32((uint32_t)(EAX));
  /* 1282d5fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d5ff call 0x12830d00 */
  push32(0x1282d604u); f_12830d00();
  /* 1282d604 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d607 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d60a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d60c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d60f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d612 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d615 push edx */
  push32((uint32_t)(EDX));
  /* 1282d616 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1282d618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d61b push eax */
  push32((uint32_t)(EAX));
  /* 1282d61c push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d61e call 0x12830d00 */
  push32(0x1282d623u); f_12830d00();
  /* 1282d623 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d626 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d629 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d62b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d62e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d631 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d634 push edx */
  push32((uint32_t)(EDX));
  /* 1282d635 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1282d637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d63a push eax */
  push32((uint32_t)(EAX));
  /* 1282d63b push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d63d call 0x12830d00 */
  push32(0x1282d642u); f_12830d00();
  /* 1282d642 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d645 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d648 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d64a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d64d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d650 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d653 push edx */
  push32((uint32_t)(EDX));
  /* 1282d654 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1282d656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d659 push eax */
  push32((uint32_t)(EAX));
  /* 1282d65a push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d65c call 0x12830d00 */
  push32(0x1282d661u); f_12830d00();
  /* 1282d661 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d664 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d667 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d669 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d66c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d66f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d672 push edx */
  push32((uint32_t)(EDX));
  /* 1282d673 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1282d675 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d678 push eax */
  push32((uint32_t)(EAX));
  /* 1282d679 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d67b call 0x12830d00 */
  push32(0x1282d680u); f_12830d00();
  /* 1282d680 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d683 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d686 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d688 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d68b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d68e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d691 push edx */
  push32((uint32_t)(EDX));
  /* 1282d692 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1282d694 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d697 push eax */
  push32((uint32_t)(EAX));
  /* 1282d698 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d69a call 0x12830d00 */
  push32(0x1282d69fu); f_12830d00();
  /* 1282d69f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d6a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d6a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d6a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d6aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d6ad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d6b0 push edx */
  push32((uint32_t)(EDX));
  /* 1282d6b1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1282d6b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d6b6 push eax */
  push32((uint32_t)(EAX));
  /* 1282d6b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d6b9 call 0x12830d00 */
  push32(0x1282d6beu); f_12830d00();
  /* 1282d6be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d6c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d6c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d6c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d6c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d6cc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d6cf push edx */
  push32((uint32_t)(EDX));
  /* 1282d6d0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1282d6d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d6d5 push eax */
  push32((uint32_t)(EAX));
  /* 1282d6d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d6d8 call 0x12830d00 */
  push32(0x1282d6ddu); f_12830d00();
  /* 1282d6dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d6e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d6e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d6e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d6e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d6eb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d6ee push edx */
  push32((uint32_t)(EDX));
  /* 1282d6ef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1282d6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d6f4 push eax */
  push32((uint32_t)(EAX));
  /* 1282d6f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d6f7 call 0x12830d00 */
  push32(0x1282d6fcu); f_12830d00();
  /* 1282d6fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d6ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d702 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d704 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d70a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d70d push edx */
  push32((uint32_t)(EDX));
  /* 1282d70e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1282d710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d713 push eax */
  push32((uint32_t)(EAX));
  /* 1282d714 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d716 call 0x12830d00 */
  push32(0x1282d71bu); f_12830d00();
  /* 1282d71b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d71e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d721 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d723 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d726 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d729 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d72c push edx */
  push32((uint32_t)(EDX));
  /* 1282d72d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1282d72f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d732 push eax */
  push32((uint32_t)(EAX));
  /* 1282d733 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d735 call 0x12830d00 */
  push32(0x1282d73au); f_12830d00();
  /* 1282d73a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d73d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d740 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d742 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d748 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d74b push edx */
  push32((uint32_t)(EDX));
  /* 1282d74c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1282d74e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d751 push eax */
  push32((uint32_t)(EAX));
  /* 1282d752 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d754 call 0x12830d00 */
  push32(0x1282d759u); f_12830d00();
  /* 1282d759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d75c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d75f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d761 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d767 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d76a push edx */
  push32((uint32_t)(EDX));
  /* 1282d76b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1282d76d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d770 push eax */
  push32((uint32_t)(EAX));
  /* 1282d771 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d773 call 0x12830d00 */
  push32(0x1282d778u); f_12830d00();
  /* 1282d778 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d77b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d77e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d780 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d783 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d786 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d789 push edx */
  push32((uint32_t)(EDX));
  /* 1282d78a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1282d78c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d78f push eax */
  push32((uint32_t)(EAX));
  /* 1282d790 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d792 call 0x12830d00 */
  push32(0x1282d797u); f_12830d00();
  /* 1282d797 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d79a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d79d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d79f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d7a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d7a5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d7a8 push edx */
  push32((uint32_t)(EDX));
  /* 1282d7a9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1282d7ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d7ae push eax */
  push32((uint32_t)(EAX));
  /* 1282d7af push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d7b1 call 0x12830d00 */
  push32(0x1282d7b6u); f_12830d00();
  /* 1282d7b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d7b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d7bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d7be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d7c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d7c4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d7c7 push edx */
  push32((uint32_t)(EDX));
  /* 1282d7c8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1282d7ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d7cd push eax */
  push32((uint32_t)(EAX));
  /* 1282d7ce push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d7d0 call 0x12830d00 */
  push32(0x1282d7d5u); f_12830d00();
  /* 1282d7d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d7d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d7db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d7dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d7e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d7e3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d7e6 push edx */
  push32((uint32_t)(EDX));
  /* 1282d7e7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1282d7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d7ec push eax */
  push32((uint32_t)(EAX));
  /* 1282d7ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d7ef call 0x12830d00 */
  push32(0x1282d7f4u); f_12830d00();
  /* 1282d7f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d7f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d7fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d7fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d802 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d808 push edx */
  push32((uint32_t)(EDX));
  /* 1282d809 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1282d80b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d80e push eax */
  push32((uint32_t)(EAX));
  /* 1282d80f push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d811 call 0x12830d00 */
  push32(0x1282d816u); f_12830d00();
  /* 1282d816 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d819 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d81c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d81e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d824 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d82a push edx */
  push32((uint32_t)(EDX));
  /* 1282d82b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1282d82d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d830 push eax */
  push32((uint32_t)(EAX));
  /* 1282d831 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d833 call 0x12830d00 */
  push32(0x1282d838u); f_12830d00();
  /* 1282d838 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d83b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d83e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d840 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d846 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d84c push edx */
  push32((uint32_t)(EDX));
  /* 1282d84d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1282d84f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d852 push eax */
  push32((uint32_t)(EAX));
  /* 1282d853 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d855 call 0x12830d00 */
  push32(0x1282d85au); f_12830d00();
  /* 1282d85a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d85d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d860 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d862 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d865 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d868 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d86e push edx */
  push32((uint32_t)(EDX));
  /* 1282d86f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1282d871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d874 push eax */
  push32((uint32_t)(EAX));
  /* 1282d875 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d877 call 0x12830d00 */
  push32(0x1282d87cu); f_12830d00();
  /* 1282d87c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d87f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d882 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d884 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d88a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d890 push edx */
  push32((uint32_t)(EDX));
  /* 1282d891 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1282d893 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d896 push eax */
  push32((uint32_t)(EAX));
  /* 1282d897 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d899 call 0x12830d00 */
  push32(0x1282d89eu); f_12830d00();
  /* 1282d89e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d8a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d8a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d8a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d8a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d8ac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d8b2 push edx */
  push32((uint32_t)(EDX));
  /* 1282d8b3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1282d8b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d8b8 push eax */
  push32((uint32_t)(EAX));
  /* 1282d8b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d8bb call 0x12830d00 */
  push32(0x1282d8c0u); f_12830d00();
  /* 1282d8c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d8c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d8c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d8c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d8ce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d8d4 push edx */
  push32((uint32_t)(EDX));
  /* 1282d8d5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1282d8d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d8da push eax */
  push32((uint32_t)(EAX));
  /* 1282d8db push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d8dd call 0x12830d00 */
  push32(0x1282d8e2u); f_12830d00();
  /* 1282d8e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d8e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d8e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d8ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d8ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d8f0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d8f6 push edx */
  push32((uint32_t)(EDX));
  /* 1282d8f7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1282d8f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282d8fc push eax */
  push32((uint32_t)(EAX));
  /* 1282d8fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d8ff call 0x12830d00 */
  push32(0x1282d904u); f_12830d00();
  /* 1282d904 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d907 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d90a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d90c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d90f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d912 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d918 push edx */
  push32((uint32_t)(EDX));
  /* 1282d919 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1282d91b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d91e push eax */
  push32((uint32_t)(EAX));
  /* 1282d91f push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d921 call 0x12830d00 */
  push32(0x1282d926u); f_12830d00();
  /* 1282d926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d929 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d92c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d92e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d934 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d93a push edx */
  push32((uint32_t)(EDX));
  /* 1282d93b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1282d93d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d940 push eax */
  push32((uint32_t)(EAX));
  /* 1282d941 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d943 call 0x12830d00 */
  push32(0x1282d948u); f_12830d00();
  /* 1282d948 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d94b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d94e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d950 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d953 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d956 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d95c push edx */
  push32((uint32_t)(EDX));
  /* 1282d95d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1282d962 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282d965 push eax */
  push32((uint32_t)(EAX));
  /* 1282d966 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282d968 call 0x12830d00 */
  push32(0x1282d96du); f_12830d00();
  /* 1282d96d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d970 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282d973 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282d975 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1282d978 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1282d97b:;
  /* 1282d97b mov esp, ebp */
  ESP = (EBP);
  /* 1282d97d pop ebp */
  EBP = (pop32());
  /* 1282d97e ret  */
  ESPCHK(0x1282d3f0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1282d980 (779 bytes, 265 insns) */
void f_1282d980(void) {
  FTRACE(0x1282d980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282d980 push ebp */
  push32((uint32_t)(EBP));
  /* 1282d981 mov ebp, esp */
  EBP = (ESP);
  /* 1282d983 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282d987 jne 0x1282d98e */
  if (!C.zf) goto L_1282d98e;
  /* 1282d989 jmp 0x1282dc89 */
  goto L_1282dc89;
L_1282d98e:;
  /* 1282d98e push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d993 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1282d996 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d997 call 0x128235d0 */
  push32(0x1282d99cu); f_128235d0();
  /* 1282d99c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d99f push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d9a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d9a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1282d9a7 push eax */
  push32((uint32_t)(EAX));
  /* 1282d9a8 call 0x128235d0 */
  push32(0x1282d9adu); f_128235d0();
  /* 1282d9ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d9b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d9b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d9b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282d9b8 push edx */
  push32((uint32_t)(EDX));
  /* 1282d9b9 call 0x128235d0 */
  push32(0x1282d9beu); f_128235d0();
  /* 1282d9be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d9c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d9c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1282d9c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1282d9ca call 0x128235d0 */
  push32(0x1282d9cfu); f_128235d0();
  /* 1282d9cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d9d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d9d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d9d7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1282d9da push eax */
  push32((uint32_t)(EAX));
  /* 1282d9db call 0x128235d0 */
  push32(0x1282d9e0u); f_128235d0();
  /* 1282d9e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d9e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d9e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d9e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1282d9eb push edx */
  push32((uint32_t)(EDX));
  /* 1282d9ec call 0x128235d0 */
  push32(0x1282d9f1u); f_128235d0();
  /* 1282d9f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282d9f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282d9f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282d9f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282d9fb push ecx */
  push32((uint32_t)(ECX));
  /* 1282d9fc call 0x128235d0 */
  push32(0x1282da01u); f_128235d0();
  /* 1282da01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da04 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282da09 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1282da0c push eax */
  push32((uint32_t)(EAX));
  /* 1282da0d call 0x128235d0 */
  push32(0x1282da12u); f_128235d0();
  /* 1282da12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da15 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282da1a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1282da1d push edx */
  push32((uint32_t)(EDX));
  /* 1282da1e call 0x128235d0 */
  push32(0x1282da23u); f_128235d0();
  /* 1282da23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da26 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282da2b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1282da2e push ecx */
  push32((uint32_t)(ECX));
  /* 1282da2f call 0x128235d0 */
  push32(0x1282da34u); f_128235d0();
  /* 1282da34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da37 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282da3c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1282da3f push eax */
  push32((uint32_t)(EAX));
  /* 1282da40 call 0x128235d0 */
  push32(0x1282da45u); f_128235d0();
  /* 1282da45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da48 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282da4d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1282da50 push edx */
  push32((uint32_t)(EDX));
  /* 1282da51 call 0x128235d0 */
  push32(0x1282da56u); f_128235d0();
  /* 1282da56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da59 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282da5e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1282da61 push ecx */
  push32((uint32_t)(ECX));
  /* 1282da62 call 0x128235d0 */
  push32(0x1282da67u); f_128235d0();
  /* 1282da67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da6a push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282da6f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1282da72 push eax */
  push32((uint32_t)(EAX));
  /* 1282da73 call 0x128235d0 */
  push32(0x1282da78u); f_128235d0();
  /* 1282da78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da7b push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282da80 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1282da83 push edx */
  push32((uint32_t)(EDX));
  /* 1282da84 call 0x128235d0 */
  push32(0x1282da89u); f_128235d0();
  /* 1282da89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da8c push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282da91 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1282da94 push ecx */
  push32((uint32_t)(ECX));
  /* 1282da95 call 0x128235d0 */
  push32(0x1282da9au); f_128235d0();
  /* 1282da9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282da9d push 2 */
  push32((uint32_t)(0x2u));
  /* 1282da9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282daa2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1282daa5 push eax */
  push32((uint32_t)(EAX));
  /* 1282daa6 call 0x128235d0 */
  push32(0x1282daabu); f_128235d0();
  /* 1282daab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282daae push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dab3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1282dab6 push edx */
  push32((uint32_t)(EDX));
  /* 1282dab7 call 0x128235d0 */
  push32(0x1282dabcu); f_128235d0();
  /* 1282dabc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dabf push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dac4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1282dac7 push ecx */
  push32((uint32_t)(ECX));
  /* 1282dac8 call 0x128235d0 */
  push32(0x1282dacdu); f_128235d0();
  /* 1282dacd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dad0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dad2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dad5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1282dad8 push eax */
  push32((uint32_t)(EAX));
  /* 1282dad9 call 0x128235d0 */
  push32(0x1282dadeu); f_128235d0();
  /* 1282dade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dae1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dae3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dae6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1282dae9 push edx */
  push32((uint32_t)(EDX));
  /* 1282daea call 0x128235d0 */
  push32(0x1282daefu); f_128235d0();
  /* 1282daef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282daf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282daf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282daf7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1282dafa push ecx */
  push32((uint32_t)(ECX));
  /* 1282dafb call 0x128235d0 */
  push32(0x1282db00u); f_128235d0();
  /* 1282db00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db03 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282db08 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1282db0b push eax */
  push32((uint32_t)(EAX));
  /* 1282db0c call 0x128235d0 */
  push32(0x1282db11u); f_128235d0();
  /* 1282db11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db14 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282db19 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1282db1c push edx */
  push32((uint32_t)(EDX));
  /* 1282db1d call 0x128235d0 */
  push32(0x1282db22u); f_128235d0();
  /* 1282db22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282db2a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1282db2d push ecx */
  push32((uint32_t)(ECX));
  /* 1282db2e call 0x128235d0 */
  push32(0x1282db33u); f_128235d0();
  /* 1282db33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db36 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282db3b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1282db3e push eax */
  push32((uint32_t)(EAX));
  /* 1282db3f call 0x128235d0 */
  push32(0x1282db44u); f_128235d0();
  /* 1282db44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db47 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282db4c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1282db4f push edx */
  push32((uint32_t)(EDX));
  /* 1282db50 call 0x128235d0 */
  push32(0x1282db55u); f_128235d0();
  /* 1282db55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db58 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282db5d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1282db60 push ecx */
  push32((uint32_t)(ECX));
  /* 1282db61 call 0x128235d0 */
  push32(0x1282db66u); f_128235d0();
  /* 1282db66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db69 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282db6e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1282db71 push eax */
  push32((uint32_t)(EAX));
  /* 1282db72 call 0x128235d0 */
  push32(0x1282db77u); f_128235d0();
  /* 1282db77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db7a push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282db7f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1282db82 push edx */
  push32((uint32_t)(EDX));
  /* 1282db83 call 0x128235d0 */
  push32(0x1282db88u); f_128235d0();
  /* 1282db88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db8b push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282db90 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1282db93 push ecx */
  push32((uint32_t)(ECX));
  /* 1282db94 call 0x128235d0 */
  push32(0x1282db99u); f_128235d0();
  /* 1282db99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282db9c push 2 */
  push32((uint32_t)(0x2u));
  /* 1282db9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dba1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1282dba4 push eax */
  push32((uint32_t)(EAX));
  /* 1282dba5 call 0x128235d0 */
  push32(0x1282dbaau); f_128235d0();
  /* 1282dbaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dbad push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dbaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dbb2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1282dbb8 push edx */
  push32((uint32_t)(EDX));
  /* 1282dbb9 call 0x128235d0 */
  push32(0x1282dbbeu); f_128235d0();
  /* 1282dbbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dbc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dbc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dbc6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1282dbcc push ecx */
  push32((uint32_t)(ECX));
  /* 1282dbcd call 0x128235d0 */
  push32(0x1282dbd2u); f_128235d0();
  /* 1282dbd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dbd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dbd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dbda mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1282dbe0 push eax */
  push32((uint32_t)(EAX));
  /* 1282dbe1 call 0x128235d0 */
  push32(0x1282dbe6u); f_128235d0();
  /* 1282dbe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dbe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dbeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dbee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1282dbf4 push edx */
  push32((uint32_t)(EDX));
  /* 1282dbf5 call 0x128235d0 */
  push32(0x1282dbfau); f_128235d0();
  /* 1282dbfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dbfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dbff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dc02 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1282dc08 push ecx */
  push32((uint32_t)(ECX));
  /* 1282dc09 call 0x128235d0 */
  push32(0x1282dc0eu); f_128235d0();
  /* 1282dc0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dc11 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dc13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dc16 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1282dc1c push eax */
  push32((uint32_t)(EAX));
  /* 1282dc1d call 0x128235d0 */
  push32(0x1282dc22u); f_128235d0();
  /* 1282dc22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dc25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dc27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dc2a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1282dc30 push edx */
  push32((uint32_t)(EDX));
  /* 1282dc31 call 0x128235d0 */
  push32(0x1282dc36u); f_128235d0();
  /* 1282dc36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dc39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dc3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dc3e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1282dc44 push ecx */
  push32((uint32_t)(ECX));
  /* 1282dc45 call 0x128235d0 */
  push32(0x1282dc4au); f_128235d0();
  /* 1282dc4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dc4d push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dc4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dc52 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1282dc58 push eax */
  push32((uint32_t)(EAX));
  /* 1282dc59 call 0x128235d0 */
  push32(0x1282dc5eu); f_128235d0();
  /* 1282dc5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dc61 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dc63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dc66 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1282dc6c push edx */
  push32((uint32_t)(EDX));
  /* 1282dc6d call 0x128235d0 */
  push32(0x1282dc72u); f_128235d0();
  /* 1282dc72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dc75 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dc77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dc7a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1282dc80 push ecx */
  push32((uint32_t)(ECX));
  /* 1282dc81 call 0x128235d0 */
  push32(0x1282dc86u); f_128235d0();
  /* 1282dc86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282dc89:;
  /* 1282dc89 pop ebp */
  EBP = (pop32());
  /* 1282dc8a ret  */
  ESPCHK(0x1282d980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc90 @ 0x1282dc90 (678 bytes, 180 insns) */
void f_1282dc90(void) {
  FTRACE(0x1282dc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282dc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1282dc91 mov ebp, esp */
  EBP = (ESP);
  /* 1282dc93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282dc96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282dc9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282dc9f mov ax, word ptr [0x1284e6ea] */
  AX = (r16((uint32_t)(0x1284e6ea)));
  /* 1282dca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282dca8 cmp dword ptr [0x1284e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282dcaf je 0x1282de0a */
  if (C.zf) goto L_1282de0a;
  /* 1282dcb5 push 0x1284e6b8 */
  push32((uint32_t)(0x1284e6b8u));
  /* 1282dcba push 0xe */
  push32((uint32_t)(0xeu));
  /* 1282dcbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282dcbf push ecx */
  push32((uint32_t)(ECX));
  /* 1282dcc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282dcc2 call 0x12830d00 */
  push32(0x1282dcc7u); f_12830d00();
  /* 1282dcc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dcca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282dccd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1282dccf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1282dcd2 push 0x1284e6bc */
  push32((uint32_t)(0x1284e6bcu));
  /* 1282dcd7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1282dcd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282dcdc push eax */
  push32((uint32_t)(EAX));
  /* 1282dcdd push 1 */
  push32((uint32_t)(0x1u));
  /* 1282dcdf call 0x12830d00 */
  push32(0x1282dce4u); f_12830d00();
  /* 1282dce4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dce7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282dcea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282dcec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282dcef push 0x1284e6c0 */
  push32((uint32_t)(0x1284e6c0u));
  /* 1282dcf4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1282dcf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282dcf9 push edx */
  push32((uint32_t)(EDX));
  /* 1282dcfa push 1 */
  push32((uint32_t)(0x1u));
  /* 1282dcfc call 0x12830d00 */
  push32(0x1282dd01u); f_12830d00();
  /* 1282dd01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dd04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282dd07 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282dd09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282dd0c mov edx, dword ptr [0x1284e6c0] */
  EDX = (r32((uint32_t)(0x1284e6c0)));
  /* 1282dd12 push edx */
  push32((uint32_t)(EDX));
  /* 1282dd13 call 0x1282df40 */
  push32(0x1282dd18u); f_1282df40();
  /* 1282dd18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dd1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282dd1f je 0x1282dd79 */
  if (C.zf) goto L_1282dd79;
  /* 1282dd21 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dd23 mov eax, dword ptr [0x1284e6b8] */
  EAX = (r32((uint32_t)(0x1284e6b8)));
  /* 1282dd28 push eax */
  push32((uint32_t)(EAX));
  /* 1282dd29 call 0x128235d0 */
  push32(0x1282dd2eu); f_128235d0();
  /* 1282dd2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dd31 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dd33 mov ecx, dword ptr [0x1284e6bc] */
  ECX = (r32((uint32_t)(0x1284e6bc)));
  /* 1282dd39 push ecx */
  push32((uint32_t)(ECX));
  /* 1282dd3a call 0x128235d0 */
  push32(0x1282dd3fu); f_128235d0();
  /* 1282dd3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dd42 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dd44 mov edx, dword ptr [0x1284e6c0] */
  EDX = (r32((uint32_t)(0x1284e6c0)));
  /* 1282dd4a push edx */
  push32((uint32_t)(EDX));
  /* 1282dd4b call 0x128235d0 */
  push32(0x1282dd50u); f_128235d0();
  /* 1282dd50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dd53 mov dword ptr [0x1284e6b8], 0 */
  w32((uint32_t)(0x1284e6b8), (0x0u));
  /* 1282dd5d mov dword ptr [0x1284e6bc], 0 */
  w32((uint32_t)(0x1284e6bc), (0x0u));
  /* 1282dd67 mov dword ptr [0x1284e6c0], 0 */
  w32((uint32_t)(0x1284e6c0), (0x0u));
  /* 1282dd71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282dd74 jmp 0x1282df32 */
  goto L_1282df32;
L_1282dd79:;
  /* 1282dd79 mov eax, dword ptr [0x1284dd88] */
  EAX = (r32((uint32_t)(0x1284dd88)));
  /* 1282dd7e cmp dword ptr [eax], 0x1284dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1284dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282dd84 je 0x1282ddc0 */
  if (C.zf) goto L_1282ddc0;
  /* 1282dd86 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dd88 mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282dd8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282dd90 push edx */
  push32((uint32_t)(EDX));
  /* 1282dd91 call 0x128235d0 */
  push32(0x1282dd96u); f_128235d0();
  /* 1282dd96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dd99 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dd9b mov eax, dword ptr [0x1284dd88] */
  EAX = (r32((uint32_t)(0x1284dd88)));
  /* 1282dda0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1282dda3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282dda4 call 0x128235d0 */
  push32(0x1282dda9u); f_128235d0();
  /* 1282dda9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ddac push 2 */
  push32((uint32_t)(0x2u));
  /* 1282ddae mov edx, dword ptr [0x1284dd88] */
  EDX = (r32((uint32_t)(0x1284dd88)));
  /* 1282ddb4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1282ddb7 push eax */
  push32((uint32_t)(EAX));
  /* 1282ddb8 call 0x128235d0 */
  push32(0x1282ddbdu); f_128235d0();
  /* 1282ddbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282ddc0:;
  /* 1282ddc0 mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282ddc6 mov edx, dword ptr [0x1284e6b8] */
  EDX = (r32((uint32_t)(0x1284e6b8)));
  /* 1282ddcc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1282ddce mov eax, dword ptr [0x1284dd88] */
  EAX = (r32((uint32_t)(0x1284dd88)));
  /* 1282ddd3 mov ecx, dword ptr [0x1284e6bc] */
  ECX = (r32((uint32_t)(0x1284e6bc)));
  /* 1282ddd9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1282dddc mov edx, dword ptr [0x1284dd88] */
  EDX = (r32((uint32_t)(0x1284dd88)));
  /* 1282dde2 mov eax, dword ptr [0x1284e6c0] */
  EAX = (r32((uint32_t)(0x1284e6c0)));
  /* 1282dde7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1282ddea mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282ddf0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282ddf2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282ddf4 mov byte ptr [0x1284cea8], al */
  w8((uint32_t)(0x1284cea8), (AL));
  /* 1282ddf9 mov dword ptr [0x1284ceac], 1 */
  w32((uint32_t)(0x1284ceac), (0x1u));
  /* 1282de03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282de05 jmp 0x1282df32 */
  goto L_1282df32;
L_1282de0a:;
  /* 1282de0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1282de0c mov ecx, dword ptr [0x1284e6b8] */
  ECX = (r32((uint32_t)(0x1284e6b8)));
  /* 1282de12 push ecx */
  push32((uint32_t)(ECX));
  /* 1282de13 call 0x128235d0 */
  push32(0x1282de18u); f_128235d0();
  /* 1282de18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282de1b push 2 */
  push32((uint32_t)(0x2u));
  /* 1282de1d mov edx, dword ptr [0x1284e6bc] */
  EDX = (r32((uint32_t)(0x1284e6bc)));
  /* 1282de23 push edx */
  push32((uint32_t)(EDX));
  /* 1282de24 call 0x128235d0 */
  push32(0x1282de29u); f_128235d0();
  /* 1282de29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282de2c push 2 */
  push32((uint32_t)(0x2u));
  /* 1282de2e mov eax, dword ptr [0x1284e6c0] */
  EAX = (r32((uint32_t)(0x1284e6c0)));
  /* 1282de33 push eax */
  push32((uint32_t)(EAX));
  /* 1282de34 call 0x128235d0 */
  push32(0x1282de39u); f_128235d0();
  /* 1282de39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282de3c mov dword ptr [0x1284e6b8], 0 */
  w32((uint32_t)(0x1284e6b8), (0x0u));
  /* 1282de46 mov dword ptr [0x1284e6bc], 0 */
  w32((uint32_t)(0x1284e6bc), (0x0u));
  /* 1282de50 mov dword ptr [0x1284e6c0], 0 */
  w32((uint32_t)(0x1284e6c0), (0x0u));
  /* 1282de5a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1282de5f push 0x12849ffc */
  push32((uint32_t)(0x12849ffcu));
  /* 1282de64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282de66 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282de68 call 0x12822b40 */
  push32(0x1282de6du); f_12822b40();
  /* 1282de6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282de70 mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282de76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1282de78 mov edx, dword ptr [0x1284dd88] */
  EDX = (r32((uint32_t)(0x1284dd88)));
  /* 1282de7e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282de81 jne 0x1282de8b */
  if (!C.zf) goto L_1282de8b;
  /* 1282de83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282de86 jmp 0x1282df32 */
  goto L_1282df32;
L_1282de8b:;
  /* 1282de8b push 0x12849fcc */
  push32((uint32_t)(0x12849fccu));
  /* 1282de90 mov eax, dword ptr [0x1284dd88] */
  EAX = (r32((uint32_t)(0x1284dd88)));
  /* 1282de95 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1282de97 push ecx */
  push32((uint32_t)(ECX));
  /* 1282de98 call 0x12825af0 */
  push32(0x1282de9du); f_12825af0();
  /* 1282de9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dea0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1282dea5 push 0x12849ffc */
  push32((uint32_t)(0x12849ffcu));
  /* 1282deaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1282deac push 2 */
  push32((uint32_t)(0x2u));
  /* 1282deae call 0x12822b40 */
  push32(0x1282deb3u); f_12822b40();
  /* 1282deb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282deb6 mov edx, dword ptr [0x1284dd88] */
  EDX = (r32((uint32_t)(0x1284dd88)));
  /* 1282debc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1282debf mov eax, dword ptr [0x1284dd88] */
  EAX = (r32((uint32_t)(0x1284dd88)));
  /* 1282dec4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282dec8 jne 0x1282decf */
  if (!C.zf) goto L_1282decf;
  /* 1282deca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282decd jmp 0x1282df32 */
  goto L_1282df32;
L_1282decf:;
  /* 1282decf mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282ded5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1282ded8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1282dedb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1282dee0 push 0x12849ffc */
  push32((uint32_t)(0x12849ffcu));
  /* 1282dee5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dee7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dee9 call 0x12822b40 */
  push32(0x1282deeeu); f_12822b40();
  /* 1282deee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282def1 mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282def7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1282defa mov edx, dword ptr [0x1284dd88] */
  EDX = (r32((uint32_t)(0x1284dd88)));
  /* 1282df00 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282df04 jne 0x1282df0b */
  if (!C.zf) goto L_1282df0b;
  /* 1282df06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282df09 jmp 0x1282df32 */
  goto L_1282df32;
L_1282df0b:;
  /* 1282df0b mov eax, dword ptr [0x1284dd88] */
  EAX = (r32((uint32_t)(0x1284dd88)));
  /* 1282df10 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1282df13 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1282df16 mov edx, dword ptr [0x1284dd88] */
  EDX = (r32((uint32_t)(0x1284dd88)));
  /* 1282df1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1282df1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1282df20 mov byte ptr [0x1284cea8], cl */
  w8((uint32_t)(0x1284cea8), (CL));
  /* 1282df26 mov dword ptr [0x1284ceac], 1 */
  w32((uint32_t)(0x1284ceac), (0x1u));
  /* 1282df30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282df32:;
  /* 1282df32 mov esp, ebp */
  ESP = (EBP);
  /* 1282df34 pop ebp */
  EBP = (pop32());
  /* 1282df35 ret  */
  ESPCHK(0x1282dc90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1282df40 (125 bytes, 49 insns) */
void f_1282df40(void) {
  FTRACE(0x1282df40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282df40 push ebp */
  push32((uint32_t)(EBP));
  /* 1282df41 mov ebp, esp */
  EBP = (ESP);
  /* 1282df43 push ecx */
  push32((uint32_t)(ECX));
L_1282df44:;
  /* 1282df44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282df47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282df4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282df4c je 0x1282dfb9 */
  if (C.zf) goto L_1282dfb9;
  /* 1282df4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282df51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1282df54 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282df57 jl 0x1282df7d */
  if ((C.sf!=C.of)) goto L_1282df7d;
  /* 1282df59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282df5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282df5f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282df62 jg 0x1282df7d */
  if ((!C.zf&&C.sf==C.of)) goto L_1282df7d;
  /* 1282df64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282df67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282df6a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282df6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282df70 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1282df72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282df75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282df78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1282df7b jmp 0x1282dfb7 */
  goto L_1282dfb7;
L_1282df7d:;
  /* 1282df7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282df80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282df83 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282df86 jne 0x1282dfae */
  if (!C.zf) goto L_1282dfae;
  /* 1282df88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282df8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282df8e:;
  /* 1282df8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282df91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282df94 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1282df97 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1282df99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282df9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282df9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1282dfa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282dfa5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1282dfa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282dfaa jne 0x1282df8e */
  if (!C.zf) goto L_1282df8e;
  /* 1282dfac jmp 0x1282dfb7 */
  goto L_1282dfb7;
L_1282dfae:;
  /* 1282dfae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282dfb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dfb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1282dfb7:;
  /* 1282dfb7 jmp 0x1282df44 */
  goto L_1282df44;
L_1282dfb9:;
  /* 1282dfb9 mov esp, ebp */
  ESP = (EBP);
  /* 1282dfbb pop ebp */
  EBP = (pop32());
  /* 1282dfbc ret  */
  ESPCHK(0x1282df40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfc0 @ 0x1282dfc0 (304 bytes, 85 insns) */
void f_1282dfc0(void) {
  FTRACE(0x1282dfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282dfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282dfc1 mov ebp, esp */
  EBP = (ESP);
  /* 1282dfc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282dfc4 cmp dword ptr [0x1284e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282dfcb je 0x1282e08c */
  if (C.zf) goto L_1282e08c;
  /* 1282dfd1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1282dfd3 push 0x1284a008 */
  push32((uint32_t)(0x1284a008u));
  /* 1282dfd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282dfda push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1282dfdc push 1 */
  push32((uint32_t)(0x1u));
  /* 1282dfde call 0x12822f50 */
  push32(0x1282dfe3u); f_12822f50();
  /* 1282dfe3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282dfe6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282dfe9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282dfed jne 0x1282dff9 */
  if (!C.zf) goto L_1282dff9;
  /* 1282dfef mov eax, 1 */
  EAX = (0x1u);
  /* 1282dff4 jmp 0x1282e0ec */
  goto L_1282e0ec;
L_1282dff9:;
  /* 1282dff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282dffc push eax */
  push32((uint32_t)(EAX));
  /* 1282dffd call 0x1282e0f0 */
  push32(0x1282e002u); f_1282e0f0();
  /* 1282e002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282e007 je 0x1282e02d */
  if (C.zf) goto L_1282e02d;
  /* 1282e009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e00c push ecx */
  push32((uint32_t)(ECX));
  /* 1282e00d call 0x1282e380 */
  push32(0x1282e012u); f_1282e380();
  /* 1282e012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e015 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e017 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e01a push edx */
  push32((uint32_t)(EDX));
  /* 1282e01b call 0x128235d0 */
  push32(0x1282e020u); f_128235d0();
  /* 1282e020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e023 mov eax, 1 */
  EAX = (0x1u);
  /* 1282e028 jmp 0x1282e0ec */
  goto L_1282e0ec;
L_1282e02d:;
  /* 1282e02d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e030 mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282e036 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282e038 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1282e03a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e03d mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282e043 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1282e046 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1282e049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e04c mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282e052 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1282e055 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1282e058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e05b mov dword ptr [0x1284dd88], eax */
  w32((uint32_t)(0x1284dd88), (EAX));
  /* 1282e060 mov ecx, dword ptr [0x1284e6c4] */
  ECX = (r32((uint32_t)(0x1284e6c4)));
  /* 1282e066 push ecx */
  push32((uint32_t)(ECX));
  /* 1282e067 call 0x1282e380 */
  push32(0x1282e06cu); f_1282e380();
  /* 1282e06c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e06f push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e071 mov edx, dword ptr [0x1284e6c4] */
  EDX = (r32((uint32_t)(0x1284e6c4)));
  /* 1282e077 push edx */
  push32((uint32_t)(EDX));
  /* 1282e078 call 0x128235d0 */
  push32(0x1282e07du); f_128235d0();
  /* 1282e07d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e080 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e083 mov dword ptr [0x1284e6c4], eax */
  w32((uint32_t)(0x1284e6c4), (EAX));
  /* 1282e088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e08a jmp 0x1282e0ec */
  goto L_1282e0ec;
L_1282e08c:;
  /* 1282e08c mov ecx, dword ptr [0x1284dd88] */
  ECX = (r32((uint32_t)(0x1284dd88)));
  /* 1282e092 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282e094 mov dword ptr [0x1284dd58], edx */
  w32((uint32_t)(0x1284dd58), (EDX));
  /* 1282e09a mov eax, dword ptr [0x1284dd88] */
  EAX = (r32((uint32_t)(0x1284dd88)));
  /* 1282e09f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1282e0a2 mov dword ptr [0x1284dd5c], ecx */
  w32((uint32_t)(0x1284dd5c), (ECX));
  /* 1282e0a8 mov edx, dword ptr [0x1284dd88] */
  EDX = (r32((uint32_t)(0x1284dd88)));
  /* 1282e0ae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1282e0b1 mov dword ptr [0x1284dd60], eax */
  w32((uint32_t)(0x1284dd60), (EAX));
  /* 1282e0b6 mov dword ptr [0x1284dd88], 0x1284dd58 */
  w32((uint32_t)(0x1284dd88), (0x1284dd58u));
  /* 1282e0c0 mov ecx, dword ptr [0x1284e6c4] */
  ECX = (r32((uint32_t)(0x1284e6c4)));
  /* 1282e0c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1282e0c7 call 0x1282e380 */
  push32(0x1282e0ccu); f_1282e380();
  /* 1282e0cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e0cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e0d1 mov edx, dword ptr [0x1284e6c4] */
  EDX = (r32((uint32_t)(0x1284e6c4)));
  /* 1282e0d7 push edx */
  push32((uint32_t)(EDX));
  /* 1282e0d8 call 0x128235d0 */
  push32(0x1282e0ddu); f_128235d0();
  /* 1282e0dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e0e0 mov dword ptr [0x1284e6c4], 0 */
  w32((uint32_t)(0x1284e6c4), (0x0u));
  /* 1282e0ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282e0ec:;
  /* 1282e0ec mov esp, ebp */
  ESP = (EBP);
  /* 1282e0ee pop ebp */
  EBP = (pop32());
  /* 1282e0ef ret  */
  ESPCHK(0x1282dfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0f0 @ 0x1282e0f0 (525 bytes, 200 insns) */
void f_1282e0f0(void) {
  FTRACE(0x1282e0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282e0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1282e0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282e0f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282e0fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e0ff mov ax, word ptr [0x1284e6e4] */
  AX = (r16((uint32_t)(0x1284e6e4)));
  /* 1282e105 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282e108 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e10c jne 0x1282e116 */
  if (!C.zf) goto L_1282e116;
  /* 1282e10e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282e111 jmp 0x1282e2f9 */
  goto L_1282e2f9;
L_1282e116:;
  /* 1282e116 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e119 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e11c push ecx */
  push32((uint32_t)(ECX));
  /* 1282e11d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1282e11f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e122 push edx */
  push32((uint32_t)(EDX));
  /* 1282e123 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282e125 call 0x12830d00 */
  push32(0x1282e12au); f_12830d00();
  /* 1282e12a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e12d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e130 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e132 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e138 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e13b push edx */
  push32((uint32_t)(EDX));
  /* 1282e13c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1282e13e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e141 push eax */
  push32((uint32_t)(EAX));
  /* 1282e142 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282e144 call 0x12830d00 */
  push32(0x1282e149u); f_12830d00();
  /* 1282e149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e14c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e14f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e151 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e157 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e15a push edx */
  push32((uint32_t)(EDX));
  /* 1282e15b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1282e15d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e160 push eax */
  push32((uint32_t)(EAX));
  /* 1282e161 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282e163 call 0x12830d00 */
  push32(0x1282e168u); f_12830d00();
  /* 1282e168 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e16b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e16e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e170 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e173 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e176 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e179 push edx */
  push32((uint32_t)(EDX));
  /* 1282e17a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1282e17c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e17f push eax */
  push32((uint32_t)(EAX));
  /* 1282e180 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282e182 call 0x12830d00 */
  push32(0x1282e187u); f_12830d00();
  /* 1282e187 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e18a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e18d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e18f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e192 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e195 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e198 push edx */
  push32((uint32_t)(EDX));
  /* 1282e199 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1282e19b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e19e push eax */
  push32((uint32_t)(EAX));
  /* 1282e19f push 1 */
  push32((uint32_t)(0x1u));
  /* 1282e1a1 call 0x12830d00 */
  push32(0x1282e1a6u); f_12830d00();
  /* 1282e1a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e1a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e1ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e1ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e1b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e1b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1282e1b7 push eax */
  push32((uint32_t)(EAX));
  /* 1282e1b8 call 0x1282e300 */
  push32(0x1282e1bdu); f_1282e300();
  /* 1282e1bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e1c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e1c3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1282e1c7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1282e1c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e1cc push edx */
  push32((uint32_t)(EDX));
  /* 1282e1cd push 1 */
  push32((uint32_t)(0x1u));
  /* 1282e1cf call 0x12830d00 */
  push32(0x1282e1d4u); f_12830d00();
  /* 1282e1d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e1d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e1da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e1dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e1df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e1e2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e1e5 push edx */
  push32((uint32_t)(EDX));
  /* 1282e1e6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1282e1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e1eb push eax */
  push32((uint32_t)(EAX));
  /* 1282e1ec push 1 */
  push32((uint32_t)(0x1u));
  /* 1282e1ee call 0x12830d00 */
  push32(0x1282e1f3u); f_12830d00();
  /* 1282e1f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e1f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e1f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e1fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e1fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e201 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e204 push edx */
  push32((uint32_t)(EDX));
  /* 1282e205 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1282e207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e20a push eax */
  push32((uint32_t)(EAX));
  /* 1282e20b push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e20d call 0x12830d00 */
  push32(0x1282e212u); f_12830d00();
  /* 1282e212 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e215 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e218 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e21a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e21d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e220 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e223 push edx */
  push32((uint32_t)(EDX));
  /* 1282e224 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1282e226 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e229 push eax */
  push32((uint32_t)(EAX));
  /* 1282e22a push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e22c call 0x12830d00 */
  push32(0x1282e231u); f_12830d00();
  /* 1282e231 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e234 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e237 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e239 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e23c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e23f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e242 push edx */
  push32((uint32_t)(EDX));
  /* 1282e243 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1282e245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e248 push eax */
  push32((uint32_t)(EAX));
  /* 1282e249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e24b call 0x12830d00 */
  push32(0x1282e250u); f_12830d00();
  /* 1282e250 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e253 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e256 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e258 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e25b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e25e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e261 push edx */
  push32((uint32_t)(EDX));
  /* 1282e262 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1282e264 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e267 push eax */
  push32((uint32_t)(EAX));
  /* 1282e268 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e26a call 0x12830d00 */
  push32(0x1282e26fu); f_12830d00();
  /* 1282e26f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e272 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e275 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e277 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e27a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e27d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e280 push edx */
  push32((uint32_t)(EDX));
  /* 1282e281 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1282e283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e286 push eax */
  push32((uint32_t)(EAX));
  /* 1282e287 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e289 call 0x12830d00 */
  push32(0x1282e28eu); f_12830d00();
  /* 1282e28e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e291 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e294 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e296 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e299 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e29c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e29f push edx */
  push32((uint32_t)(EDX));
  /* 1282e2a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1282e2a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e2a5 push eax */
  push32((uint32_t)(EAX));
  /* 1282e2a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e2a8 call 0x12830d00 */
  push32(0x1282e2adu); f_12830d00();
  /* 1282e2ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e2b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e2b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e2b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e2b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e2bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e2be push edx */
  push32((uint32_t)(EDX));
  /* 1282e2bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1282e2c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e2c4 push eax */
  push32((uint32_t)(EAX));
  /* 1282e2c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e2c7 call 0x12830d00 */
  push32(0x1282e2ccu); f_12830d00();
  /* 1282e2cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e2cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e2d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e2d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e2d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e2da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e2dd push edx */
  push32((uint32_t)(EDX));
  /* 1282e2de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1282e2e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e2e3 push eax */
  push32((uint32_t)(EAX));
  /* 1282e2e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e2e6 call 0x12830d00 */
  push32(0x1282e2ebu); f_12830d00();
  /* 1282e2eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e2ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e2f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e2f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282e2f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1282e2f9:;
  /* 1282e2f9 mov esp, ebp */
  ESP = (EBP);
  /* 1282e2fb pop ebp */
  EBP = (pop32());
  /* 1282e2fc ret  */
  ESPCHK(0x1282e0f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1282e300 (125 bytes, 49 insns) */
void f_1282e300(void) {
  FTRACE(0x1282e300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e300 push ebp */
  push32((uint32_t)(EBP));
  /* 1282e301 mov ebp, esp */
  EBP = (ESP);
  /* 1282e303 push ecx */
  push32((uint32_t)(ECX));
L_1282e304:;
  /* 1282e304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e307 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282e30a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282e30c je 0x1282e379 */
  if (C.zf) goto L_1282e379;
  /* 1282e30e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e311 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1282e314 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e317 jl 0x1282e33d */
  if ((C.sf!=C.of)) goto L_1282e33d;
  /* 1282e319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e31c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282e31f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e322 jg 0x1282e33d */
  if ((!C.zf&&C.sf==C.of)) goto L_1282e33d;
  /* 1282e324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e327 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282e32a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282e32d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e330 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1282e332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e335 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e338 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1282e33b jmp 0x1282e377 */
  goto L_1282e377;
L_1282e33d:;
  /* 1282e33d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e340 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282e343 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e346 jne 0x1282e36e */
  if (!C.zf) goto L_1282e36e;
  /* 1282e348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e34b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282e34e:;
  /* 1282e34e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e351 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e354 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1282e357 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1282e359 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e35c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e35f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1282e362 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282e365 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1282e368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282e36a jne 0x1282e34e */
  if (!C.zf) goto L_1282e34e;
  /* 1282e36c jmp 0x1282e377 */
  goto L_1282e377;
L_1282e36e:;
  /* 1282e36e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e371 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e374 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1282e377:;
  /* 1282e377 jmp 0x1282e304 */
  goto L_1282e304;
L_1282e379:;
  /* 1282e379 mov esp, ebp */
  ESP = (EBP);
  /* 1282e37b pop ebp */
  EBP = (pop32());
  /* 1282e37c ret  */
  ESPCHK(0x1282e300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e380 @ 0x1282e380 (147 bytes, 52 insns) */
void f_1282e380(void) {
  FTRACE(0x1282e380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e380 push ebp */
  push32((uint32_t)(EBP));
  /* 1282e381 mov ebp, esp */
  EBP = (ESP);
  /* 1282e383 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e387 jne 0x1282e38e */
  if (!C.zf) goto L_1282e38e;
  /* 1282e389 jmp 0x1282e411 */
  goto L_1282e411;
L_1282e38e:;
  /* 1282e38e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e391 cmp dword ptr [eax + 0xc], 0x1284e720 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1284e720u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e398 je 0x1282e411 */
  if (C.zf) goto L_1282e411;
  /* 1282e39a push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e39c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e39f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1282e3a2 push edx */
  push32((uint32_t)(EDX));
  /* 1282e3a3 call 0x128235d0 */
  push32(0x1282e3a8u); f_128235d0();
  /* 1282e3a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e3ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e3ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e3b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1282e3b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282e3b4 call 0x128235d0 */
  push32(0x1282e3b9u); f_128235d0();
  /* 1282e3b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e3bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e3be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e3c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1282e3c4 push eax */
  push32((uint32_t)(EAX));
  /* 1282e3c5 call 0x128235d0 */
  push32(0x1282e3cau); f_128235d0();
  /* 1282e3ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e3cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e3cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e3d2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1282e3d5 push edx */
  push32((uint32_t)(EDX));
  /* 1282e3d6 call 0x128235d0 */
  push32(0x1282e3dbu); f_128235d0();
  /* 1282e3db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e3de push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e3e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e3e3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1282e3e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1282e3e7 call 0x128235d0 */
  push32(0x1282e3ecu); f_128235d0();
  /* 1282e3ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e3ef push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e3f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e3f4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1282e3f7 push eax */
  push32((uint32_t)(EAX));
  /* 1282e3f8 call 0x128235d0 */
  push32(0x1282e3fdu); f_128235d0();
  /* 1282e3fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e400 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e405 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1282e408 push edx */
  push32((uint32_t)(EDX));
  /* 1282e409 call 0x128235d0 */
  push32(0x1282e40eu); f_128235d0();
  /* 1282e40e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282e411:;
  /* 1282e411 pop ebp */
  EBP = (pop32());
  /* 1282e412 ret  */
  ESPCHK(0x1282e380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x1282e420 (928 bytes, 284 insns) */
void f_1282e420(void) {
  FTRACE(0x1282e420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e420 push ebp */
  push32((uint32_t)(EBP));
  /* 1282e421 mov ebp, esp */
  EBP = (ESP);
  /* 1282e423 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282e426 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1282e42d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1282e434 cmp dword ptr [0x1284e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e43b je 0x1282e771 */
  if (C.zf) goto L_1282e771;
  /* 1282e441 cmp dword ptr [0x1284e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e448 jne 0x1282e470 */
  if (!C.zf) goto L_1282e470;
  /* 1282e44a push 0x1284e698 */
  push32((uint32_t)(0x1284e698u));
  /* 1282e44f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1282e454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e456 mov ax, word ptr [0x1284e6dc] */
  AX = (r16((uint32_t)(0x1284e6dc)));
  /* 1282e45c push eax */
  push32((uint32_t)(EAX));
  /* 1282e45d push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e45f call 0x12830d00 */
  push32(0x1282e464u); f_12830d00();
  /* 1282e464 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282e469 je 0x1282e470 */
  if (C.zf) goto L_1282e470;
  /* 1282e46b jmp 0x1282e732 */
  goto L_1282e732;
L_1282e470:;
  /* 1282e470 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1282e472 push 0x1284a014 */
  push32((uint32_t)(0x1284a014u));
  /* 1282e477 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e479 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1282e47e call 0x12822b40 */
  push32(0x1282e483u); f_12822b40();
  /* 1282e483 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e486 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1282e489 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1282e48b push 0x1284a014 */
  push32((uint32_t)(0x1284a014u));
  /* 1282e490 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e492 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1282e497 call 0x12822b40 */
  push32(0x1282e49cu); f_12822b40();
  /* 1282e49c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e49f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1282e4a2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1282e4a4 push 0x1284a014 */
  push32((uint32_t)(0x1284a014u));
  /* 1282e4a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e4ab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1282e4b0 call 0x12822b40 */
  push32(0x1282e4b5u); f_12822b40();
  /* 1282e4b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e4b8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1282e4bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1282e4bd push 0x1284a014 */
  push32((uint32_t)(0x1284a014u));
  /* 1282e4c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e4c4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1282e4c9 call 0x12822b40 */
  push32(0x1282e4ceu); f_12822b40();
  /* 1282e4ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e4d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1282e4d4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e4d8 je 0x1282e4ec */
  if (C.zf) goto L_1282e4ec;
  /* 1282e4da cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e4de je 0x1282e4ec */
  if (C.zf) goto L_1282e4ec;
  /* 1282e4e0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e4e4 je 0x1282e4ec */
  if (C.zf) goto L_1282e4ec;
  /* 1282e4e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e4ea jne 0x1282e4f1 */
  if (!C.zf) goto L_1282e4f1;
L_1282e4ec:;
  /* 1282e4ec jmp 0x1282e732 */
  goto L_1282e732;
L_1282e4f1:;
  /* 1282e4f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282e4f4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1282e4f7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1282e4fe jmp 0x1282e509 */
  goto L_1282e509;
L_1282e500:;
  /* 1282e500 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282e503 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e506 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1282e509:;
  /* 1282e509 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e510 jge 0x1282e525 */
  if ((C.sf==C.of)) goto L_1282e525;
  /* 1282e512 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e515 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1282e518 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1282e51a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e51d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e520 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1282e523 jmp 0x1282e500 */
  goto L_1282e500;
L_1282e525:;
  /* 1282e525 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1282e528 push eax */
  push32((uint32_t)(EAX));
  /* 1282e529 mov ecx, dword ptr [0x1284e698] */
  ECX = (r32((uint32_t)(0x1284e698)));
  /* 1282e52f push ecx */
  push32((uint32_t)(ECX));
  /* 1282e530 call dword ptr [0x12850310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850310))), 0x1282e536u);
  /* 1282e536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282e538 jne 0x1282e53f */
  if (!C.zf) goto L_1282e53f;
  /* 1282e53a jmp 0x1282e732 */
  goto L_1282e732;
L_1282e53f:;
  /* 1282e53f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e543 jbe 0x1282e54a */
  if ((C.cf||C.zf)) goto L_1282e54a;
  /* 1282e545 jmp 0x1282e732 */
  goto L_1282e732;
L_1282e54a:;
  /* 1282e54a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1282e54d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1282e553 mov dword ptr [0x1284cea4], edx */
  w32((uint32_t)(0x1284cea4), (EDX));
  /* 1282e559 cmp dword ptr [0x1284cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e560 jle 0x1282e5b9 */
  if ((C.zf||C.sf!=C.of)) goto L_1282e5b9;
  /* 1282e562 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1282e565 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1282e568 jmp 0x1282e573 */
  goto L_1282e573;
L_1282e56a:;
  /* 1282e56a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e56d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e570 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1282e573:;
  /* 1282e573 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e578 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282e57a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282e57c je 0x1282e5b9 */
  if (C.zf) goto L_1282e5b9;
  /* 1282e57e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e581 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282e583 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1282e586 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282e588 je 0x1282e5b9 */
  if (C.zf) goto L_1282e5b9;
  /* 1282e58a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e58d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e58f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1282e591 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1282e594 jmp 0x1282e59f */
  goto L_1282e59f;
L_1282e596:;
  /* 1282e596 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282e599 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e59c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1282e59f:;
  /* 1282e59f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e5a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e5a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1282e5a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e5aa jg 0x1282e5b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1282e5b7;
  /* 1282e5ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282e5af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e5b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1282e5b5 jmp 0x1282e596 */
  goto L_1282e596;
L_1282e5b7:;
  /* 1282e5b7 jmp 0x1282e56a */
  goto L_1282e56a;
L_1282e5b9:;
  /* 1282e5b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e5bb push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e5bd push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e5bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282e5c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e5c5 push eax */
  push32((uint32_t)(EAX));
  /* 1282e5c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1282e5cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282e5ce push ecx */
  push32((uint32_t)(ECX));
  /* 1282e5cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1282e5d1 call 0x1282ad70 */
  push32(0x1282e5d6u); f_1282ad70();
  /* 1282e5d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e5d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282e5db jne 0x1282e5e2 */
  if (!C.zf) goto L_1282e5e2;
  /* 1282e5dd jmp 0x1282e732 */
  goto L_1282e732;
L_1282e5e2:;
  /* 1282e5e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282e5e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1282e5ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1282e5ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1282e5f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1282e5f7 jmp 0x1282e602 */
  goto L_1282e602;
L_1282e5f9:;
  /* 1282e5f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282e5fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e5ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1282e602:;
  /* 1282e602 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e609 jge 0x1282e620 */
  if ((C.sf==C.of)) goto L_1282e620;
  /* 1282e60b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282e60e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1282e612 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1282e615 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1282e618 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e61b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1282e61e jmp 0x1282e5f9 */
  goto L_1282e5f9;
L_1282e620:;
  /* 1282e620 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e622 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282e624 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282e627 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e62a push edx */
  push32((uint32_t)(EDX));
  /* 1282e62b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1282e630 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1282e633 push eax */
  push32((uint32_t)(EAX));
  /* 1282e634 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282e636 call 0x12830fa0 */
  push32(0x1282e63bu); f_12830fa0();
  /* 1282e63b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e63e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282e640 jne 0x1282e647 */
  if (!C.zf) goto L_1282e647;
  /* 1282e642 jmp 0x1282e732 */
  goto L_1282e732;
L_1282e647:;
  /* 1282e647 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282e64a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1282e64f cmp dword ptr [0x1284cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1284cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e656 jle 0x1282e6b3 */
  if ((C.zf||C.sf!=C.of)) goto L_1282e6b3;
  /* 1282e658 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1282e65b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1282e65e jmp 0x1282e669 */
  goto L_1282e669;
L_1282e660:;
  /* 1282e660 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e663 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e666 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1282e669:;
  /* 1282e669 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e66c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1282e66e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1282e670 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282e672 je 0x1282e6b3 */
  if (C.zf) goto L_1282e6b3;
  /* 1282e674 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e677 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e679 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1282e67c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282e67e je 0x1282e6b3 */
  if (C.zf) goto L_1282e6b3;
  /* 1282e680 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e685 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282e687 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1282e68a jmp 0x1282e695 */
  goto L_1282e695;
L_1282e68c:;
  /* 1282e68c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282e68f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e692 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1282e695:;
  /* 1282e695 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1282e698 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e69a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1282e69d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e6a0 jg 0x1282e6b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1282e6b1;
  /* 1282e6a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1282e6a5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282e6a8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1282e6af jmp 0x1282e68c */
  goto L_1282e68c;
L_1282e6b1:;
  /* 1282e6b1 jmp 0x1282e660 */
  goto L_1282e660;
L_1282e6b3:;
  /* 1282e6b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282e6b6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e6b9 mov dword ptr [0x1284cc98], eax */
  w32((uint32_t)(0x1284cc98), (EAX));
  /* 1282e6be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282e6c1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e6c4 mov dword ptr [0x1284cc9c], ecx */
  w32((uint32_t)(0x1284cc9c), (ECX));
  /* 1282e6ca cmp dword ptr [0x1284e6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e6d1 je 0x1282e6e4 */
  if (C.zf) goto L_1282e6e4;
  /* 1282e6d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e6d5 mov edx, dword ptr [0x1284e6c8] */
  EDX = (r32((uint32_t)(0x1284e6c8)));
  /* 1282e6db push edx */
  push32((uint32_t)(EDX));
  /* 1282e6dc call 0x128235d0 */
  push32(0x1282e6e1u); f_128235d0();
  /* 1282e6e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282e6e4:;
  /* 1282e6e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282e6e7 mov dword ptr [0x1284e6c8], eax */
  w32((uint32_t)(0x1284e6c8), (EAX));
  /* 1282e6ec cmp dword ptr [0x1284e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e6f3 je 0x1282e706 */
  if (C.zf) goto L_1282e706;
  /* 1282e6f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e6f7 mov ecx, dword ptr [0x1284e6cc] */
  ECX = (r32((uint32_t)(0x1284e6cc)));
  /* 1282e6fd push ecx */
  push32((uint32_t)(ECX));
  /* 1282e6fe call 0x128235d0 */
  push32(0x1282e703u); f_128235d0();
  /* 1282e703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282e706:;
  /* 1282e706 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282e709 mov dword ptr [0x1284e6cc], edx */
  w32((uint32_t)(0x1284e6cc), (EDX));
  /* 1282e70f push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e711 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282e714 push eax */
  push32((uint32_t)(EAX));
  /* 1282e715 call 0x128235d0 */
  push32(0x1282e71au); f_128235d0();
  /* 1282e71a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e71d push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e71f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1282e722 push ecx */
  push32((uint32_t)(ECX));
  /* 1282e723 call 0x128235d0 */
  push32(0x1282e728u); f_128235d0();
  /* 1282e728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e72b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e72d jmp 0x1282e7bc */
  goto L_1282e7bc;
L_1282e732:;
  /* 1282e732 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e734 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1282e737 push edx */
  push32((uint32_t)(EDX));
  /* 1282e738 call 0x128235d0 */
  push32(0x1282e73du); f_128235d0();
  /* 1282e73d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e740 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e742 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1282e745 push eax */
  push32((uint32_t)(EAX));
  /* 1282e746 call 0x128235d0 */
  push32(0x1282e74bu); f_128235d0();
  /* 1282e74b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e74e push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e750 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1282e753 push ecx */
  push32((uint32_t)(ECX));
  /* 1282e754 call 0x128235d0 */
  push32(0x1282e759u); f_128235d0();
  /* 1282e759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e75c push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e75e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1282e761 push edx */
  push32((uint32_t)(EDX));
  /* 1282e762 call 0x128235d0 */
  push32(0x1282e767u); f_128235d0();
  /* 1282e767 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e76a mov eax, 1 */
  EAX = (0x1u);
  /* 1282e76f jmp 0x1282e7bc */
  goto L_1282e7bc;
L_1282e771:;
  /* 1282e771 mov dword ptr [0x1284cc98], 0x1284cca2 */
  w32((uint32_t)(0x1284cc98), (0x1284cca2u));
  /* 1282e77b mov dword ptr [0x1284cc9c], 0x1284cca2 */
  w32((uint32_t)(0x1284cc9c), (0x1284cca2u));
  /* 1282e785 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e787 mov eax, dword ptr [0x1284e6c8] */
  EAX = (r32((uint32_t)(0x1284e6c8)));
  /* 1282e78c push eax */
  push32((uint32_t)(EAX));
  /* 1282e78d call 0x128235d0 */
  push32(0x1282e792u); f_128235d0();
  /* 1282e792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e795 push 2 */
  push32((uint32_t)(0x2u));
  /* 1282e797 mov ecx, dword ptr [0x1284e6cc] */
  ECX = (r32((uint32_t)(0x1284e6cc)));
  /* 1282e79d push ecx */
  push32((uint32_t)(ECX));
  /* 1282e79e call 0x128235d0 */
  push32(0x1282e7a3u); f_128235d0();
  /* 1282e7a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e7a6 mov dword ptr [0x1284e6c8], 0 */
  w32((uint32_t)(0x1284e6c8), (0x0u));
  /* 1282e7b0 mov dword ptr [0x1284e6cc], 0 */
  w32((uint32_t)(0x1284e6cc), (0x0u));
  /* 1282e7ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1282e7bc:;
  /* 1282e7bc mov esp, ebp */
  ESP = (EBP);
  /* 1282e7be pop ebp */
  EBP = (pop32());
  /* 1282e7bf ret  */
  ESPCHK(0x1282e420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7c0 @ 0x1282e7c0 (7 bytes, 5 insns) */
void f_1282e7c0(void) {
  FTRACE(0x1282e7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282e7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1282e7c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e7c5 pop ebp */
  EBP = (pop32());
  /* 1282e7c6 ret  */
  ESPCHK(0x1282e7c0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1282e7d0 (129 bytes, 56 insns) */
void f_1282e7d0(void) {
  FTRACE(0x1282e7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e7d0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1282e7d4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1282e7d8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1282e7de jne 0x1282e81c */
  if (!C.zf) goto L_1282e81c;
L_1282e7e0:;
  /* 1282e7e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1282e7e2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282e7e4 jne 0x1282e814 */
  if (!C.zf) goto L_1282e814;
  /* 1282e7e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1282e7e8 je 0x1282e810 */
  if (C.zf) goto L_1282e810;
  /* 1282e7ea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282e7ed jne 0x1282e814 */
  if (!C.zf) goto L_1282e814;
  /* 1282e7ef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1282e7f1 je 0x1282e810 */
  if (C.zf) goto L_1282e810;
  /* 1282e7f3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1282e7f6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282e7f9 jne 0x1282e814 */
  if (!C.zf) goto L_1282e814;
  /* 1282e7fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1282e7fd je 0x1282e810 */
  if (C.zf) goto L_1282e810;
  /* 1282e7ff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282e802 jne 0x1282e814 */
  if (!C.zf) goto L_1282e814;
  /* 1282e804 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e807 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e80a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1282e80c jne 0x1282e7e0 */
  if (!C.zf) goto L_1282e7e0;
  /* 1282e80e mov edi, edi */
  EDI = (EDI);
L_1282e810:;
  /* 1282e810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e812 ret  */
  ESPCHK(0x1282e7d0u, _esp0);
  ESP += 4; return;
  /* 1282e813 nop  */
  /* nop */
L_1282e814:;
  /* 1282e814 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282e816 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1282e818 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1282e819 ret  */
  ESPCHK(0x1282e7d0u, _esp0);
  ESP += 4; return;
  /* 1282e81a mov edi, edi */
  EDI = (EDI);
L_1282e81c:;
  /* 1282e81c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1282e822 je 0x1282e838 */
  if (C.zf) goto L_1282e838;
  /* 1282e824 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282e826 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1282e827 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282e829 jne 0x1282e814 */
  if (!C.zf) goto L_1282e814;
  /* 1282e82b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1282e82c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1282e82e je 0x1282e810 */
  if (C.zf) goto L_1282e810;
  /* 1282e830 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1282e836 je 0x1282e7e0 */
  if (C.zf) goto L_1282e7e0;
L_1282e838:;
  /* 1282e838 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1282e83b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e83e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282e840 jne 0x1282e814 */
  if (!C.zf) goto L_1282e814;
  /* 1282e842 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1282e844 je 0x1282e810 */
  if (C.zf) goto L_1282e810;
  /* 1282e846 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282e849 jne 0x1282e814 */
  if (!C.zf) goto L_1282e814;
  /* 1282e84b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1282e84d je 0x1282e810 */
  if (C.zf) goto L_1282e810;
  /* 1282e84f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e852 jmp 0x1282e7e0 */
  goto L_1282e7e0;
}

/* FUN_1000e860 @ 0x1282e860 (62 bytes, 35 insns) */
void f_1282e860(void) {
  FTRACE(0x1282e860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e860 push ebp */
  push32((uint32_t)(EBP));
  /* 1282e861 mov ebp, esp */
  EBP = (ESP);
  /* 1282e863 push esi */
  push32((uint32_t)(ESI));
  /* 1282e864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e866 push eax */
  push32((uint32_t)(EAX));
  /* 1282e867 push eax */
  push32((uint32_t)(EAX));
  /* 1282e868 push eax */
  push32((uint32_t)(EAX));
  /* 1282e869 push eax */
  push32((uint32_t)(EAX));
  /* 1282e86a push eax */
  push32((uint32_t)(EAX));
  /* 1282e86b push eax */
  push32((uint32_t)(EAX));
  /* 1282e86c push eax */
  push32((uint32_t)(EAX));
  /* 1282e86d push eax */
  push32((uint32_t)(EAX));
  /* 1282e86e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282e871 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1282e874:;
  /* 1282e874 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282e876 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1282e878 je 0x1282e881 */
  if (C.zf) goto L_1282e881;
  /* 1282e87a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1282e87b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1282e87b");
  /* 1282e87f jmp 0x1282e874 */
  goto L_1282e874;
L_1282e881:;
  /* 1282e881 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e884 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1282e887 nop  */
  /* nop */
L_1282e888:;
  /* 1282e888 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1282e889 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1282e88b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1282e88d je 0x1282e896 */
  if (C.zf) goto L_1282e896;
  /* 1282e88f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1282e890 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1282e890");
  /* 1282e894 jae 0x1282e888 */
  if (!C.cf) goto L_1282e888;
L_1282e896:;
  /* 1282e896 mov eax, ecx */
  EAX = (ECX);
  /* 1282e898 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e89b pop esi */
  ESI = (pop32());
  /* 1282e89c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282e89d ret  */
  ESPCHK(0x1282e860u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1282e8a0 (56 bytes, 31 insns) */
void f_1282e8a0(void) {
  FTRACE(0x1282e8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282e8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1282e8a3 push edi */
  push32((uint32_t)(EDI));
  /* 1282e8a4 push esi */
  push32((uint32_t)(ESI));
  /* 1282e8a5 push ebx */
  push32((uint32_t)(EBX));
  /* 1282e8a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282e8a9 jecxz 0x1282e8d1 */
  x86_unimpl("jecxz @ 0x1282e8a9");
  /* 1282e8ab mov ebx, ecx */
  EBX = (ECX);
  /* 1282e8ad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e8b0 mov esi, edi */
  ESI = (EDI);
  /* 1282e8b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e8b4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1282e8b6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282e8b8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e8ba mov edi, esi */
  EDI = (ESI);
  /* 1282e8bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1282e8bf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1282e8c1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1282e8c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282e8c6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1282e8c9 ja 0x1282e8cf */
  if ((!C.cf&&!C.zf)) goto L_1282e8cf;
  /* 1282e8cb je 0x1282e8d1 */
  if (C.zf) goto L_1282e8d1;
  /* 1282e8cd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1282e8ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1282e8cf:;
  /* 1282e8cf not ecx */
  ECX = (~(ECX));
L_1282e8d1:;
  /* 1282e8d1 mov eax, ecx */
  EAX = (ECX);
  /* 1282e8d3 pop ebx */
  EBX = (pop32());
  /* 1282e8d4 pop esi */
  ESI = (pop32());
  /* 1282e8d5 pop edi */
  EDI = (pop32());
  /* 1282e8d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282e8d7 ret  */
  ESPCHK(0x1282e8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8e0 @ 0x1282e8e0 (58 bytes, 32 insns) */
void f_1282e8e0(void) {
  FTRACE(0x1282e8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282e8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1282e8e3 push esi */
  push32((uint32_t)(ESI));
  /* 1282e8e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282e8e6 push eax */
  push32((uint32_t)(EAX));
  /* 1282e8e7 push eax */
  push32((uint32_t)(EAX));
  /* 1282e8e8 push eax */
  push32((uint32_t)(EAX));
  /* 1282e8e9 push eax */
  push32((uint32_t)(EAX));
  /* 1282e8ea push eax */
  push32((uint32_t)(EAX));
  /* 1282e8eb push eax */
  push32((uint32_t)(EAX));
  /* 1282e8ec push eax */
  push32((uint32_t)(EAX));
  /* 1282e8ed push eax */
  push32((uint32_t)(EAX));
  /* 1282e8ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282e8f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1282e8f4:;
  /* 1282e8f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282e8f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1282e8f8 je 0x1282e901 */
  if (C.zf) goto L_1282e901;
  /* 1282e8fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1282e8fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1282e8fb");
  /* 1282e8ff jmp 0x1282e8f4 */
  goto L_1282e8f4;
L_1282e901:;
  /* 1282e901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1282e904:;
  /* 1282e904 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1282e906 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1282e908 je 0x1282e914 */
  if (C.zf) goto L_1282e914;
  /* 1282e90a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1282e90b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1282e90b");
  /* 1282e90f jae 0x1282e904 */
  if (!C.cf) goto L_1282e904;
  /* 1282e911 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1282e914:;
  /* 1282e914 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e917 pop esi */
  ESI = (pop32());
  /* 1282e918 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1282e919 ret  */
  ESPCHK(0x1282e8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e920 @ 0x1282e920 (512 bytes, 147 insns) */
void f_1282e920(void) {
  FTRACE(0x1282e920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282e920 push ebp */
  push32((uint32_t)(EBP));
  /* 1282e921 mov ebp, esp */
  EBP = (ESP);
  /* 1282e923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282e926 cmp dword ptr [0x1284e714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e92d jne 0x1282e952 */
  if (!C.zf) goto L_1282e952;
  /* 1282e92f call 0x1282f3f0 */
  push32(0x1282e934u); f_1282f3f0();
  /* 1282e934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282e936 je 0x1282e942 */
  if (C.zf) goto L_1282e942;
  /* 1282e938 mov eax, dword ptr [0x12850250] */
  EAX = (r32((uint32_t)(0x12850250)));
  /* 1282e93d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282e940 jmp 0x1282e949 */
  goto L_1282e949;
L_1282e942:;
  /* 1282e942 mov dword ptr [ebp - 8], 0x1282f440 */
  w32((uint32_t)(EBP + -0x8), (0x1282f440u));
L_1282e949:;
  /* 1282e949 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282e94c mov dword ptr [0x1284e714], ecx */
  w32((uint32_t)(0x1284e714), (ECX));
L_1282e952:;
  /* 1282e952 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e956 jne 0x1282e962 */
  if (!C.zf) goto L_1282e962;
  /* 1282e958 call 0x1282f240 */
  push32(0x1282e95du); f_1282f240();
  /* 1282e95d jmp 0x1282ea2e */
  goto L_1282ea2e;
L_1282e962:;
  /* 1282e962 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e965 mov dword ptr [0x1284e704], edx */
  w32((uint32_t)(0x1284e704), (EDX));
  /* 1282e96b cmp dword ptr [0x1284e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e972 je 0x1282e994 */
  if (C.zf) goto L_1282e994;
  /* 1282e974 mov eax, dword ptr [0x1284e704] */
  EAX = (r32((uint32_t)(0x1284e704)));
  /* 1282e979 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282e97c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282e97e je 0x1282e994 */
  if (C.zf) goto L_1282e994;
  /* 1282e980 push 0x1284e704 */
  push32((uint32_t)(0x1284e704u));
  /* 1282e985 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1282e987 push 0x1284da90 */
  push32((uint32_t)(0x1284da90u));
  /* 1282e98c call 0x1282eb20 */
  push32(0x1282e991u); f_1282eb20();
  /* 1282e991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282e994:;
  /* 1282e994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282e997 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282e99a mov dword ptr [0x1284e708], edx */
  w32((uint32_t)(0x1284e708), (EDX));
  /* 1282e9a0 cmp dword ptr [0x1284e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e9a7 je 0x1282e9c9 */
  if (C.zf) goto L_1282e9c9;
  /* 1282e9a9 mov eax, dword ptr [0x1284e708] */
  EAX = (r32((uint32_t)(0x1284e708)));
  /* 1282e9ae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282e9b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282e9b3 je 0x1282e9c9 */
  if (C.zf) goto L_1282e9c9;
  /* 1282e9b5 push 0x1284e708 */
  push32((uint32_t)(0x1284e708u));
  /* 1282e9ba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1282e9bc push 0x1284d9d8 */
  push32((uint32_t)(0x1284d9d8u));
  /* 1282e9c1 call 0x1282eb20 */
  push32(0x1282e9c6u); f_1282eb20();
  /* 1282e9c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282e9c9:;
  /* 1282e9c9 mov dword ptr [0x1284e70c], 0 */
  w32((uint32_t)(0x1284e70c), (0x0u));
  /* 1282e9d3 cmp dword ptr [0x1284e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e9da je 0x1282ea0d */
  if (C.zf) goto L_1282ea0d;
  /* 1282e9dc mov edx, dword ptr [0x1284e704] */
  EDX = (r32((uint32_t)(0x1284e704)));
  /* 1282e9e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1282e9e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282e9e7 je 0x1282ea0d */
  if (C.zf) goto L_1282ea0d;
  /* 1282e9e9 cmp dword ptr [0x1284e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282e9f0 je 0x1282ea06 */
  if (C.zf) goto L_1282ea06;
  /* 1282e9f2 mov ecx, dword ptr [0x1284e708] */
  ECX = (r32((uint32_t)(0x1284e708)));
  /* 1282e9f8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1282e9fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282e9fd je 0x1282ea06 */
  if (C.zf) goto L_1282ea06;
  /* 1282e9ff call 0x1282ebb0 */
  push32(0x1282ea04u); f_1282ebb0();
  /* 1282ea04 jmp 0x1282ea0b */
  goto L_1282ea0b;
L_1282ea06:;
  /* 1282ea06 call 0x1282efa0 */
  push32(0x1282ea0bu); f_1282efa0();
L_1282ea0b:;
  /* 1282ea0b jmp 0x1282ea2e */
  goto L_1282ea2e;
L_1282ea0d:;
  /* 1282ea0d cmp dword ptr [0x1284e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ea14 je 0x1282ea29 */
  if (C.zf) goto L_1282ea29;
  /* 1282ea16 mov eax, dword ptr [0x1284e708] */
  EAX = (r32((uint32_t)(0x1284e708)));
  /* 1282ea1b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282ea1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282ea20 je 0x1282ea29 */
  if (C.zf) goto L_1282ea29;
  /* 1282ea22 call 0x1282f140 */
  push32(0x1282ea27u); f_1282f140();
  /* 1282ea27 jmp 0x1282ea2e */
  goto L_1282ea2e;
L_1282ea29:;
  /* 1282ea29 call 0x1282f240 */
  push32(0x1282ea2eu); f_1282f240();
L_1282ea2e:;
  /* 1282ea2e cmp dword ptr [0x1284e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ea35 jne 0x1282ea3e */
  if (!C.zf) goto L_1282ea3e;
  /* 1282ea37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282ea39 jmp 0x1282eb1c */
  goto L_1282eb1c;
L_1282ea3e:;
  /* 1282ea3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ea41 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ea47 push edx */
  push32((uint32_t)(EDX));
  /* 1282ea48 call 0x1282f270 */
  push32(0x1282ea4du); f_1282f270();
  /* 1282ea4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ea50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282ea53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ea57 je 0x1282ea6c */
  if (C.zf) goto L_1282ea6c;
  /* 1282ea59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282ea5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282ea61 push eax */
  push32((uint32_t)(EAX));
  /* 1282ea62 call dword ptr [0x128502c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128502c8))), 0x1282ea68u);
  /* 1282ea68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ea6a jne 0x1282ea73 */
  if (!C.zf) goto L_1282ea73;
L_1282ea6c:;
  /* 1282ea6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282ea6e jmp 0x1282eb1c */
  goto L_1282eb1c;
L_1282ea73:;
  /* 1282ea73 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282ea75 mov ecx, dword ptr [0x1284e6f4] */
  ECX = (r32((uint32_t)(0x1284e6f4)));
  /* 1282ea7b push ecx */
  push32((uint32_t)(ECX));
  /* 1282ea7c call dword ptr [0x12850340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850340))), 0x1282ea82u);
  /* 1282ea82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ea84 jne 0x1282ea8d */
  if (!C.zf) goto L_1282ea8d;
  /* 1282ea86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282ea88 jmp 0x1282eb1c */
  goto L_1282eb1c;
L_1282ea8d:;
  /* 1282ea8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ea91 je 0x1282eab8 */
  if (C.zf) goto L_1282eab8;
  /* 1282ea93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282ea96 mov ax, word ptr [0x1284e6f4] */
  AX = (r16((uint32_t)(0x1284e6f4)));
  /* 1282ea9c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1282ea9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282eaa2 mov dx, word ptr [0x1284e710] */
  DX = (r16((uint32_t)(0x1284e710)));
  /* 1282eaa9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1282eaad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282eab0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1282eab4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1282eab8:;
  /* 1282eab8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282eabc je 0x1282eb17 */
  if (C.zf) goto L_1282eb17;
  /* 1282eabe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1282eac0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282eac3 push edx */
  push32((uint32_t)(EDX));
  /* 1282eac4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1282eac9 mov eax, dword ptr [0x1284e6f4] */
  EAX = (r32((uint32_t)(0x1284e6f4)));
  /* 1282eace push eax */
  push32((uint32_t)(EAX));
  /* 1282eacf call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282ead5u);
  /* 1282ead5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ead7 jne 0x1282eadd */
  if (!C.zf) goto L_1282eadd;
  /* 1282ead9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282eadb jmp 0x1282eb1c */
  goto L_1282eb1c;
L_1282eadd:;
  /* 1282eadd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1282eadf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282eae2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282eae5 push ecx */
  push32((uint32_t)(ECX));
  /* 1282eae6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1282eaeb mov edx, dword ptr [0x1284e710] */
  EDX = (r32((uint32_t)(0x1284e710)));
  /* 1282eaf1 push edx */
  push32((uint32_t)(EDX));
  /* 1282eaf2 call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282eaf8u);
  /* 1282eaf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282eafa jne 0x1282eb00 */
  if (!C.zf) goto L_1282eb00;
  /* 1282eafc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282eafe jmp 0x1282eb1c */
  goto L_1282eb1c;
L_1282eb00:;
  /* 1282eb00 push 0xa */
  push32((uint32_t)(0xau));
  /* 1282eb02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282eb05 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282eb0a push eax */
  push32((uint32_t)(EAX));
  /* 1282eb0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282eb0e push ecx */
  push32((uint32_t)(ECX));
  /* 1282eb0f call 0x12825680 */
  push32(0x1282eb14u); f_12825680();
  /* 1282eb14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282eb17:;
  /* 1282eb17 mov eax, 1 */
  EAX = (0x1u);
L_1282eb1c:;
  /* 1282eb1c mov esp, ebp */
  ESP = (EBP);
  /* 1282eb1e pop ebp */
  EBP = (pop32());
  /* 1282eb1f ret  */
  ESPCHK(0x1282e920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x1282eb20 (130 bytes, 47 insns) */
void f_1282eb20(void) {
  FTRACE(0x1282eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1282eb21 mov ebp, esp */
  EBP = (ESP);
  /* 1282eb23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282eb26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1282eb2d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1282eb34:;
  /* 1282eb34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282eb37 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282eb3a jg 0x1282eb9e */
  if ((!C.zf&&C.sf==C.of)) goto L_1282eb9e;
  /* 1282eb3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282eb40 je 0x1282eb9e */
  if (C.zf) goto L_1282eb9e;
  /* 1282eb42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282eb45 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282eb48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1282eb49 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282eb4b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1282eb4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282eb50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282eb53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282eb56 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1282eb59 push eax */
  push32((uint32_t)(EAX));
  /* 1282eb5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282eb5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1282eb5f push edx */
  push32((uint32_t)(EDX));
  /* 1282eb60 call 0x12831210 */
  push32(0x1282eb65u); f_12831210();
  /* 1282eb65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282eb68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282eb6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282eb6f jne 0x1282eb82 */
  if (!C.zf) goto L_1282eb82;
  /* 1282eb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282eb74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282eb77 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1282eb7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282eb7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1282eb80 jmp 0x1282eb9c */
  goto L_1282eb9c;
L_1282eb82:;
  /* 1282eb82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282eb86 jge 0x1282eb93 */
  if ((C.sf==C.of)) goto L_1282eb93;
  /* 1282eb88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282eb8b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282eb8e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1282eb91 jmp 0x1282eb9c */
  goto L_1282eb9c;
L_1282eb93:;
  /* 1282eb93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282eb96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282eb99 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1282eb9c:;
  /* 1282eb9c jmp 0x1282eb34 */
  goto L_1282eb34;
L_1282eb9e:;
  /* 1282eb9e mov esp, ebp */
  ESP = (EBP);
  /* 1282eba0 pop ebp */
  EBP = (pop32());
  /* 1282eba1 ret  */
  ESPCHK(0x1282eb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebb0 @ 0x1282ebb0 (186 bytes, 50 insns) */
void f_1282ebb0(void) {
  FTRACE(0x1282ebb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282ebb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282ebb1 mov ebp, esp */
  EBP = (ESP);
  /* 1282ebb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ebb4 mov eax, dword ptr [0x1284e704] */
  EAX = (r32((uint32_t)(0x1284e704)));
  /* 1282ebb9 push eax */
  push32((uint32_t)(EAX));
  /* 1282ebba call 0x12825970 */
  push32(0x1282ebbfu); f_12825970();
  /* 1282ebbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ebc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282ebc4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ebc7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1282ebca mov dword ptr [0x1284e700], ecx */
  w32((uint32_t)(0x1284e700), (ECX));
  /* 1282ebd0 mov edx, dword ptr [0x1284e708] */
  EDX = (r32((uint32_t)(0x1284e708)));
  /* 1282ebd6 push edx */
  push32((uint32_t)(EDX));
  /* 1282ebd7 call 0x12825970 */
  push32(0x1282ebdcu); f_12825970();
  /* 1282ebdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ebdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282ebe1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ebe4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1282ebe7 mov dword ptr [0x1284e6f8], ecx */
  w32((uint32_t)(0x1284e6f8), (ECX));
  /* 1282ebed mov dword ptr [0x1284e6f4], 0 */
  w32((uint32_t)(0x1284e6f4), (0x0u));
  /* 1282ebf7 cmp dword ptr [0x1284e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ebfe je 0x1282ec09 */
  if (C.zf) goto L_1282ec09;
  /* 1282ec00 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1282ec07 jmp 0x1282ec1b */
  goto L_1282ec1b;
L_1282ec09:;
  /* 1282ec09 mov edx, dword ptr [0x1284e704] */
  EDX = (r32((uint32_t)(0x1284e704)));
  /* 1282ec0f push edx */
  push32((uint32_t)(EDX));
  /* 1282ec10 call 0x1282f650 */
  push32(0x1282ec15u); f_1282f650();
  /* 1282ec15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ec18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282ec1b:;
  /* 1282ec1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282ec1e mov dword ptr [0x1284e6fc], eax */
  w32((uint32_t)(0x1284e6fc), (EAX));
  /* 1282ec23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282ec25 push 0x1282ec70 */
  push32((uint32_t)(0x1282ec70u));
  /* 1282ec2a call dword ptr [0x1285024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285024c))), 0x1282ec30u);
  /* 1282ec30 mov ecx, dword ptr [0x1284e70c] */
  ECX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ec36 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1282ec3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282ec3e je 0x1282ec5c */
  if (C.zf) goto L_1282ec5c;
  /* 1282ec40 mov edx, dword ptr [0x1284e70c] */
  EDX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ec46 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1282ec4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282ec4e je 0x1282ec5c */
  if (C.zf) goto L_1282ec5c;
  /* 1282ec50 mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ec55 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1282ec58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ec5a jne 0x1282ec66 */
  if (!C.zf) goto L_1282ec66;
L_1282ec5c:;
  /* 1282ec5c mov dword ptr [0x1284e70c], 0 */
  w32((uint32_t)(0x1284e70c), (0x0u));
L_1282ec66:;
  /* 1282ec66 mov esp, ebp */
  ESP = (EBP);
  /* 1282ec68 pop ebp */
  EBP = (pop32());
  /* 1282ec69 ret  */
  ESPCHK(0x1282ebb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec70 @ 0x1282ec70 (804 bytes, 220 insns) */
void f_1282ec70(void) {
  FTRACE(0x1282ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 1282ec71 mov ebp, esp */
  EBP = (ESP);
  /* 1282ec73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ec76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282ec79 push eax */
  push32((uint32_t)(EAX));
  /* 1282ec7a call 0x1282f5d0 */
  push32(0x1282ec7fu); f_1282f5d0();
  /* 1282ec7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ec82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1282ec85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1282ec87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1282ec8a push ecx */
  push32((uint32_t)(ECX));
  /* 1282ec8b mov edx, dword ptr [0x1284e6f8] */
  EDX = (r32((uint32_t)(0x1284e6f8)));
  /* 1282ec91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282ec93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ec95 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1282ec9b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282eca1 push edx */
  push32((uint32_t)(EDX));
  /* 1282eca2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282eca5 push eax */
  push32((uint32_t)(EAX));
  /* 1282eca6 call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282ecacu);
  /* 1282ecac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ecae jne 0x1282ecc4 */
  if (!C.zf) goto L_1282ecc4;
  /* 1282ecb0 mov dword ptr [0x1284e70c], 0 */
  w32((uint32_t)(0x1284e70c), (0x0u));
  /* 1282ecba mov eax, 1 */
  EAX = (0x1u);
  /* 1282ecbf jmp 0x1282ef8e */
  goto L_1282ef8e;
L_1282ecc4:;
  /* 1282ecc4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1282ecc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ecc8 mov edx, dword ptr [0x1284e708] */
  EDX = (r32((uint32_t)(0x1284e708)));
  /* 1282ecce push edx */
  push32((uint32_t)(EDX));
  /* 1282eccf call 0x12831210 */
  push32(0x1282ecd4u); f_12831210();
  /* 1282ecd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ecd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ecd9 jne 0x1282edff */
  if (!C.zf) goto L_1282edff;
  /* 1282ecdf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1282ece1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1282ece4 push eax */
  push32((uint32_t)(EAX));
  /* 1282ece5 mov ecx, dword ptr [0x1284e700] */
  ECX = (r32((uint32_t)(0x1284e700)));
  /* 1282eceb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282eced sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ecef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1282ecf5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ecfb push ecx */
  push32((uint32_t)(ECX));
  /* 1282ecfc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282ecff push edx */
  push32((uint32_t)(EDX));
  /* 1282ed00 call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282ed06u);
  /* 1282ed06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ed08 jne 0x1282ed1e */
  if (!C.zf) goto L_1282ed1e;
  /* 1282ed0a mov dword ptr [0x1284e70c], 0 */
  w32((uint32_t)(0x1284e70c), (0x0u));
  /* 1282ed14 mov eax, 1 */
  EAX = (0x1u);
  /* 1282ed19 jmp 0x1282ef8e */
  goto L_1282ef8e;
L_1282ed1e:;
  /* 1282ed1e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1282ed21 push eax */
  push32((uint32_t)(EAX));
  /* 1282ed22 mov ecx, dword ptr [0x1284e704] */
  ECX = (r32((uint32_t)(0x1284e704)));
  /* 1282ed28 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ed29 call 0x12831210 */
  push32(0x1282ed2eu); f_12831210();
  /* 1282ed2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ed31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ed33 jne 0x1282ed60 */
  if (!C.zf) goto L_1282ed60;
  /* 1282ed35 mov edx, dword ptr [0x1284e70c] */
  EDX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ed3b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1282ed41 mov dword ptr [0x1284e70c], edx */
  w32((uint32_t)(0x1284e70c), (EDX));
  /* 1282ed47 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282ed4a mov dword ptr [0x1284e710], eax */
  w32((uint32_t)(0x1284e710), (EAX));
  /* 1282ed4f mov ecx, dword ptr [0x1284e710] */
  ECX = (r32((uint32_t)(0x1284e710)));
  /* 1282ed55 mov dword ptr [0x1284e6f4], ecx */
  w32((uint32_t)(0x1284e6f4), (ECX));
  /* 1282ed5b jmp 0x1282edff */
  goto L_1282edff;
L_1282ed60:;
  /* 1282ed60 mov edx, dword ptr [0x1284e70c] */
  EDX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ed66 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1282ed69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282ed6b jne 0x1282edff */
  if (!C.zf) goto L_1282edff;
  /* 1282ed71 cmp dword ptr [0x1284e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ed78 je 0x1282edcd */
  if (C.zf) goto L_1282edcd;
  /* 1282ed7a mov eax, dword ptr [0x1284e6fc] */
  EAX = (r32((uint32_t)(0x1284e6fc)));
  /* 1282ed7f push eax */
  push32((uint32_t)(EAX));
  /* 1282ed80 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1282ed83 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ed84 mov edx, dword ptr [0x1284e704] */
  EDX = (r32((uint32_t)(0x1284e704)));
  /* 1282ed8a push edx */
  push32((uint32_t)(EDX));
  /* 1282ed8b call 0x128312e0 */
  push32(0x1282ed90u); f_128312e0();
  /* 1282ed90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ed93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ed95 jne 0x1282edcd */
  if (!C.zf) goto L_1282edcd;
  /* 1282ed97 mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ed9c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1282ed9e mov dword ptr [0x1284e70c], eax */
  w32((uint32_t)(0x1284e70c), (EAX));
  /* 1282eda3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282eda6 mov dword ptr [0x1284e710], ecx */
  w32((uint32_t)(0x1284e710), (ECX));
  /* 1282edac mov edx, dword ptr [0x1284e704] */
  EDX = (r32((uint32_t)(0x1284e704)));
  /* 1282edb2 push edx */
  push32((uint32_t)(EDX));
  /* 1282edb3 call 0x12825970 */
  push32(0x1282edb8u); f_12825970();
  /* 1282edb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282edbb cmp eax, dword ptr [0x1284e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282edc1 jne 0x1282edcb */
  if (!C.zf) goto L_1282edcb;
  /* 1282edc3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282edc6 mov dword ptr [0x1284e6f4], eax */
  w32((uint32_t)(0x1284e6f4), (EAX));
L_1282edcb:;
  /* 1282edcb jmp 0x1282edff */
  goto L_1282edff;
L_1282edcd:;
  /* 1282edcd mov ecx, dword ptr [0x1284e70c] */
  ECX = (r32((uint32_t)(0x1284e70c)));
  /* 1282edd3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1282edd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282edd8 jne 0x1282edff */
  if (!C.zf) goto L_1282edff;
  /* 1282edda mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282eddd push edx */
  push32((uint32_t)(EDX));
  /* 1282edde call 0x1282f310 */
  push32(0x1282ede3u); f_1282f310();
  /* 1282ede3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ede6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ede8 je 0x1282edff */
  if (C.zf) goto L_1282edff;
  /* 1282edea mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282edef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1282edf1 mov dword ptr [0x1284e70c], eax */
  w32((uint32_t)(0x1284e70c), (EAX));
  /* 1282edf6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282edf9 mov dword ptr [0x1284e710], ecx */
  w32((uint32_t)(0x1284e710), (ECX));
L_1282edff:;
  /* 1282edff mov edx, dword ptr [0x1284e70c] */
  EDX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ee05 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1282ee0b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ee11 je 0x1282ef81 */
  if (C.zf) goto L_1282ef81;
  /* 1282ee17 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1282ee19 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1282ee1c push eax */
  push32((uint32_t)(EAX));
  /* 1282ee1d mov ecx, dword ptr [0x1284e700] */
  ECX = (r32((uint32_t)(0x1284e700)));
  /* 1282ee23 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282ee25 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ee27 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1282ee2d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ee33 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ee34 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282ee37 push edx */
  push32((uint32_t)(EDX));
  /* 1282ee38 call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282ee3eu);
  /* 1282ee3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ee40 jne 0x1282ee56 */
  if (!C.zf) goto L_1282ee56;
  /* 1282ee42 mov dword ptr [0x1284e70c], 0 */
  w32((uint32_t)(0x1284e70c), (0x0u));
  /* 1282ee4c mov eax, 1 */
  EAX = (0x1u);
  /* 1282ee51 jmp 0x1282ef8e */
  goto L_1282ef8e;
L_1282ee56:;
  /* 1282ee56 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1282ee59 push eax */
  push32((uint32_t)(EAX));
  /* 1282ee5a mov ecx, dword ptr [0x1284e704] */
  ECX = (r32((uint32_t)(0x1284e704)));
  /* 1282ee60 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ee61 call 0x12831210 */
  push32(0x1282ee66u); f_12831210();
  /* 1282ee66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ee69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ee6b jne 0x1282ef20 */
  if (!C.zf) goto L_1282ef20;
  /* 1282ee71 mov edx, dword ptr [0x1284e70c] */
  EDX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ee77 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1282ee7a mov dword ptr [0x1284e70c], edx */
  w32((uint32_t)(0x1284e70c), (EDX));
  /* 1282ee80 cmp dword ptr [0x1284e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ee87 je 0x1282eeaa */
  if (C.zf) goto L_1282eeaa;
  /* 1282ee89 mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ee8e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1282ee91 mov dword ptr [0x1284e70c], eax */
  w32((uint32_t)(0x1284e70c), (EAX));
  /* 1282ee96 cmp dword ptr [0x1284e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ee9d jne 0x1282eea8 */
  if (!C.zf) goto L_1282eea8;
  /* 1282ee9f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282eea2 mov dword ptr [0x1284e6f4], ecx */
  w32((uint32_t)(0x1284e6f4), (ECX));
L_1282eea8:;
  /* 1282eea8 jmp 0x1282ef1e */
  goto L_1282ef1e;
L_1282eeaa:;
  /* 1282eeaa cmp dword ptr [0x1284e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282eeb1 je 0x1282eeff */
  if (C.zf) goto L_1282eeff;
  /* 1282eeb3 mov edx, dword ptr [0x1284e704] */
  EDX = (r32((uint32_t)(0x1284e704)));
  /* 1282eeb9 push edx */
  push32((uint32_t)(EDX));
  /* 1282eeba call 0x12825970 */
  push32(0x1282eebfu); f_12825970();
  /* 1282eebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282eec2 cmp eax, dword ptr [0x1284e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282eec8 jne 0x1282eeff */
  if (!C.zf) goto L_1282eeff;
  /* 1282eeca push 1 */
  push32((uint32_t)(0x1u));
  /* 1282eecc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282eecf push eax */
  push32((uint32_t)(EAX));
  /* 1282eed0 call 0x1282f360 */
  push32(0x1282eed5u); f_1282f360();
  /* 1282eed5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282eed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282eeda je 0x1282eefd */
  if (C.zf) goto L_1282eefd;
  /* 1282eedc mov ecx, dword ptr [0x1284e70c] */
  ECX = (r32((uint32_t)(0x1284e70c)));
  /* 1282eee2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1282eee5 mov dword ptr [0x1284e70c], ecx */
  w32((uint32_t)(0x1284e70c), (ECX));
  /* 1282eeeb cmp dword ptr [0x1284e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282eef2 jne 0x1282eefd */
  if (!C.zf) goto L_1282eefd;
  /* 1282eef4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282eef7 mov dword ptr [0x1284e6f4], edx */
  w32((uint32_t)(0x1284e6f4), (EDX));
L_1282eefd:;
  /* 1282eefd jmp 0x1282ef1e */
  goto L_1282ef1e;
L_1282eeff:;
  /* 1282eeff mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ef04 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1282ef07 mov dword ptr [0x1284e70c], eax */
  w32((uint32_t)(0x1284e70c), (EAX));
  /* 1282ef0c cmp dword ptr [0x1284e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ef13 jne 0x1282ef1e */
  if (!C.zf) goto L_1282ef1e;
  /* 1282ef15 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282ef18 mov dword ptr [0x1284e6f4], ecx */
  w32((uint32_t)(0x1284e6f4), (ECX));
L_1282ef1e:;
  /* 1282ef1e jmp 0x1282ef81 */
  goto L_1282ef81;
L_1282ef20:;
  /* 1282ef20 cmp dword ptr [0x1284e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ef27 jne 0x1282ef81 */
  if (!C.zf) goto L_1282ef81;
  /* 1282ef29 cmp dword ptr [0x1284e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ef30 je 0x1282ef81 */
  if (C.zf) goto L_1282ef81;
  /* 1282ef32 mov edx, dword ptr [0x1284e6fc] */
  EDX = (r32((uint32_t)(0x1284e6fc)));
  /* 1282ef38 push edx */
  push32((uint32_t)(EDX));
  /* 1282ef39 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1282ef3c push eax */
  push32((uint32_t)(EAX));
  /* 1282ef3d mov ecx, dword ptr [0x1284e704] */
  ECX = (r32((uint32_t)(0x1284e704)));
  /* 1282ef43 push ecx */
  push32((uint32_t)(ECX));
  /* 1282ef44 call 0x128312e0 */
  push32(0x1282ef49u); f_128312e0();
  /* 1282ef49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ef4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ef4e jne 0x1282ef81 */
  if (!C.zf) goto L_1282ef81;
  /* 1282ef50 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282ef52 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282ef55 push edx */
  push32((uint32_t)(EDX));
  /* 1282ef56 call 0x1282f360 */
  push32(0x1282ef5bu); f_1282f360();
  /* 1282ef5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282ef5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282ef60 je 0x1282ef81 */
  if (C.zf) goto L_1282ef81;
  /* 1282ef62 mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ef67 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1282ef6a mov dword ptr [0x1284e70c], eax */
  w32((uint32_t)(0x1284e70c), (EAX));
  /* 1282ef6f cmp dword ptr [0x1284e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282ef76 jne 0x1282ef81 */
  if (!C.zf) goto L_1282ef81;
  /* 1282ef78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282ef7b mov dword ptr [0x1284e6f4], ecx */
  w32((uint32_t)(0x1284e6f4), (ECX));
L_1282ef81:;
  /* 1282ef81 mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282ef86 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1282ef89 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282ef8b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282ef8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1282ef8e:;
  /* 1282ef8e mov esp, ebp */
  ESP = (EBP);
  /* 1282ef90 pop ebp */
  EBP = (pop32());
  /* 1282ef91 ret 4 */
  ESPCHK(0x1282ec70u, _esp0);
  ESP += 8; return;
}

/* FUN_1000efa0 @ 0x1282efa0 (116 bytes, 33 insns) */
void f_1282efa0(void) {
  FTRACE(0x1282efa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282efa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282efa1 mov ebp, esp */
  EBP = (ESP);
  /* 1282efa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282efa4 mov eax, dword ptr [0x1284e704] */
  EAX = (r32((uint32_t)(0x1284e704)));
  /* 1282efa9 push eax */
  push32((uint32_t)(EAX));
  /* 1282efaa call 0x12825970 */
  push32(0x1282efafu); f_12825970();
  /* 1282efaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282efb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282efb4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282efb7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1282efba mov dword ptr [0x1284e700], ecx */
  w32((uint32_t)(0x1284e700), (ECX));
  /* 1282efc0 cmp dword ptr [0x1284e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282efc7 je 0x1282efd2 */
  if (C.zf) goto L_1282efd2;
  /* 1282efc9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1282efd0 jmp 0x1282efe4 */
  goto L_1282efe4;
L_1282efd2:;
  /* 1282efd2 mov edx, dword ptr [0x1284e704] */
  EDX = (r32((uint32_t)(0x1284e704)));
  /* 1282efd8 push edx */
  push32((uint32_t)(EDX));
  /* 1282efd9 call 0x1282f650 */
  push32(0x1282efdeu); f_1282f650();
  /* 1282efde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282efe1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1282efe4:;
  /* 1282efe4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282efe7 mov dword ptr [0x1284e6fc], eax */
  w32((uint32_t)(0x1284e6fc), (EAX));
  /* 1282efec push 1 */
  push32((uint32_t)(0x1u));
  /* 1282efee push 0x1282f020 */
  push32((uint32_t)(0x1282f020u));
  /* 1282eff3 call dword ptr [0x1285024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285024c))), 0x1282eff9u);
  /* 1282eff9 mov ecx, dword ptr [0x1284e70c] */
  ECX = (r32((uint32_t)(0x1284e70c)));
  /* 1282efff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1282f002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282f004 jne 0x1282f010 */
  if (!C.zf) goto L_1282f010;
  /* 1282f006 mov dword ptr [0x1284e70c], 0 */
  w32((uint32_t)(0x1284e70c), (0x0u));
L_1282f010:;
  /* 1282f010 mov esp, ebp */
  ESP = (EBP);
  /* 1282f012 pop ebp */
  EBP = (pop32());
  /* 1282f013 ret  */
  ESPCHK(0x1282efa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f020 @ 0x1282f020 (287 bytes, 86 insns) */
void f_1282f020(void) {
  FTRACE(0x1282f020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f020 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f021 mov ebp, esp */
  EBP = (ESP);
  /* 1282f023 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f029 push eax */
  push32((uint32_t)(EAX));
  /* 1282f02a call 0x1282f5d0 */
  push32(0x1282f02fu); f_1282f5d0();
  /* 1282f02f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f032 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1282f035 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1282f037 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1282f03a push ecx */
  push32((uint32_t)(ECX));
  /* 1282f03b mov edx, dword ptr [0x1284e700] */
  EDX = (r32((uint32_t)(0x1284e700)));
  /* 1282f041 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282f043 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f045 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1282f04b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f051 push edx */
  push32((uint32_t)(EDX));
  /* 1282f052 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282f055 push eax */
  push32((uint32_t)(EAX));
  /* 1282f056 call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282f05cu);
  /* 1282f05c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f05e jne 0x1282f074 */
  if (!C.zf) goto L_1282f074;
  /* 1282f060 mov dword ptr [0x1284e70c], 0 */
  w32((uint32_t)(0x1284e70c), (0x0u));
  /* 1282f06a mov eax, 1 */
  EAX = (0x1u);
  /* 1282f06f jmp 0x1282f139 */
  goto L_1282f139;
L_1282f074:;
  /* 1282f074 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1282f077 push ecx */
  push32((uint32_t)(ECX));
  /* 1282f078 mov edx, dword ptr [0x1284e704] */
  EDX = (r32((uint32_t)(0x1284e704)));
  /* 1282f07e push edx */
  push32((uint32_t)(EDX));
  /* 1282f07f call 0x12831210 */
  push32(0x1282f084u); f_12831210();
  /* 1282f084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f087 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f089 jne 0x1282f0c9 */
  if (!C.zf) goto L_1282f0c9;
  /* 1282f08b cmp dword ptr [0x1284e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f092 jne 0x1282f0a6 */
  if (!C.zf) goto L_1282f0a6;
  /* 1282f094 push 1 */
  push32((uint32_t)(0x1u));
  /* 1282f096 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282f099 push eax */
  push32((uint32_t)(EAX));
  /* 1282f09a call 0x1282f360 */
  push32(0x1282f09fu); f_1282f360();
  /* 1282f09f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f0a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f0a4 je 0x1282f0c7 */
  if (C.zf) goto L_1282f0c7;
L_1282f0a6:;
  /* 1282f0a6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282f0a9 mov dword ptr [0x1284e710], ecx */
  w32((uint32_t)(0x1284e710), (ECX));
  /* 1282f0af mov edx, dword ptr [0x1284e710] */
  EDX = (r32((uint32_t)(0x1284e710)));
  /* 1282f0b5 mov dword ptr [0x1284e6f4], edx */
  w32((uint32_t)(0x1284e6f4), (EDX));
  /* 1282f0bb mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282f0c0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1282f0c2 mov dword ptr [0x1284e70c], eax */
  w32((uint32_t)(0x1284e70c), (EAX));
L_1282f0c7:;
  /* 1282f0c7 jmp 0x1282f12c */
  goto L_1282f12c;
L_1282f0c9:;
  /* 1282f0c9 cmp dword ptr [0x1284e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f0d0 jne 0x1282f12c */
  if (!C.zf) goto L_1282f12c;
  /* 1282f0d2 cmp dword ptr [0x1284e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1284e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f0d9 je 0x1282f12c */
  if (C.zf) goto L_1282f12c;
  /* 1282f0db mov ecx, dword ptr [0x1284e6fc] */
  ECX = (r32((uint32_t)(0x1284e6fc)));
  /* 1282f0e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1282f0e2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1282f0e5 push edx */
  push32((uint32_t)(EDX));
  /* 1282f0e6 mov eax, dword ptr [0x1284e704] */
  EAX = (r32((uint32_t)(0x1284e704)));
  /* 1282f0eb push eax */
  push32((uint32_t)(EAX));
  /* 1282f0ec call 0x128312e0 */
  push32(0x1282f0f1u); f_128312e0();
  /* 1282f0f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f0f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f0f6 jne 0x1282f12c */
  if (!C.zf) goto L_1282f12c;
  /* 1282f0f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1282f0fa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282f0fd push ecx */
  push32((uint32_t)(ECX));
  /* 1282f0fe call 0x1282f360 */
  push32(0x1282f103u); f_1282f360();
  /* 1282f103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f108 je 0x1282f12c */
  if (C.zf) goto L_1282f12c;
  /* 1282f10a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282f10d mov dword ptr [0x1284e710], edx */
  w32((uint32_t)(0x1284e710), (EDX));
  /* 1282f113 mov eax, dword ptr [0x1284e710] */
  EAX = (r32((uint32_t)(0x1284e710)));
  /* 1282f118 mov dword ptr [0x1284e6f4], eax */
  w32((uint32_t)(0x1284e6f4), (EAX));
  /* 1282f11d mov ecx, dword ptr [0x1284e70c] */
  ECX = (r32((uint32_t)(0x1284e70c)));
  /* 1282f123 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1282f126 mov dword ptr [0x1284e70c], ecx */
  w32((uint32_t)(0x1284e70c), (ECX));
L_1282f12c:;
  /* 1282f12c mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282f131 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1282f134 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282f136 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f138 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1282f139:;
  /* 1282f139 mov esp, ebp */
  ESP = (EBP);
  /* 1282f13b pop ebp */
  EBP = (pop32());
  /* 1282f13c ret 4 */
  ESPCHK(0x1282f020u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f140 @ 0x1282f140 (69 bytes, 20 insns) */
void f_1282f140(void) {
  FTRACE(0x1282f140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f140 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f141 mov ebp, esp */
  EBP = (ESP);
  /* 1282f143 mov eax, dword ptr [0x1284e708] */
  EAX = (r32((uint32_t)(0x1284e708)));
  /* 1282f148 push eax */
  push32((uint32_t)(EAX));
  /* 1282f149 call 0x12825970 */
  push32(0x1282f14eu); f_12825970();
  /* 1282f14e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f151 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282f153 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f156 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1282f159 mov dword ptr [0x1284e6f8], ecx */
  w32((uint32_t)(0x1284e6f8), (ECX));
  /* 1282f15f push 1 */
  push32((uint32_t)(0x1u));
  /* 1282f161 push 0x1282f190 */
  push32((uint32_t)(0x1282f190u));
  /* 1282f166 call dword ptr [0x1285024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1285024c))), 0x1282f16cu);
  /* 1282f16c mov edx, dword ptr [0x1284e70c] */
  EDX = (r32((uint32_t)(0x1284e70c)));
  /* 1282f172 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1282f175 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282f177 jne 0x1282f183 */
  if (!C.zf) goto L_1282f183;
  /* 1282f179 mov dword ptr [0x1284e70c], 0 */
  w32((uint32_t)(0x1284e70c), (0x0u));
L_1282f183:;
  /* 1282f183 pop ebp */
  EBP = (pop32());
  /* 1282f184 ret  */
  ESPCHK(0x1282f140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f190 @ 0x1282f190 (172 bytes, 54 insns) */
void f_1282f190(void) {
  FTRACE(0x1282f190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f190 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f191 mov ebp, esp */
  EBP = (ESP);
  /* 1282f193 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f199 push eax */
  push32((uint32_t)(EAX));
  /* 1282f19a call 0x1282f5d0 */
  push32(0x1282f19fu); f_1282f5d0();
  /* 1282f19f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f1a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1282f1a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1282f1a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1282f1aa push ecx */
  push32((uint32_t)(ECX));
  /* 1282f1ab mov edx, dword ptr [0x1284e6f8] */
  EDX = (r32((uint32_t)(0x1284e6f8)));
  /* 1282f1b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282f1b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f1b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1282f1bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f1c1 push edx */
  push32((uint32_t)(EDX));
  /* 1282f1c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282f1c5 push eax */
  push32((uint32_t)(EAX));
  /* 1282f1c6 call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282f1ccu);
  /* 1282f1cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f1ce jne 0x1282f1e1 */
  if (!C.zf) goto L_1282f1e1;
  /* 1282f1d0 mov dword ptr [0x1284e70c], 0 */
  w32((uint32_t)(0x1284e70c), (0x0u));
  /* 1282f1da mov eax, 1 */
  EAX = (0x1u);
  /* 1282f1df jmp 0x1282f236 */
  goto L_1282f236;
L_1282f1e1:;
  /* 1282f1e1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1282f1e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1282f1e5 mov edx, dword ptr [0x1284e708] */
  EDX = (r32((uint32_t)(0x1284e708)));
  /* 1282f1eb push edx */
  push32((uint32_t)(EDX));
  /* 1282f1ec call 0x12831210 */
  push32(0x1282f1f1u); f_12831210();
  /* 1282f1f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f1f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f1f6 jne 0x1282f229 */
  if (!C.zf) goto L_1282f229;
  /* 1282f1f8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282f1fb push eax */
  push32((uint32_t)(EAX));
  /* 1282f1fc call 0x1282f310 */
  push32(0x1282f201u); f_1282f310();
  /* 1282f201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f206 je 0x1282f229 */
  if (C.zf) goto L_1282f229;
  /* 1282f208 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1282f20b mov dword ptr [0x1284e710], ecx */
  w32((uint32_t)(0x1284e710), (ECX));
  /* 1282f211 mov edx, dword ptr [0x1284e710] */
  EDX = (r32((uint32_t)(0x1284e710)));
  /* 1282f217 mov dword ptr [0x1284e6f4], edx */
  w32((uint32_t)(0x1284e6f4), (EDX));
  /* 1282f21d mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282f222 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1282f224 mov dword ptr [0x1284e70c], eax */
  w32((uint32_t)(0x1284e70c), (EAX));
L_1282f229:;
  /* 1282f229 mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282f22e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1282f231 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1282f233 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f235 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1282f236:;
  /* 1282f236 mov esp, ebp */
  ESP = (EBP);
  /* 1282f238 pop ebp */
  EBP = (pop32());
  /* 1282f239 ret 4 */
  ESPCHK(0x1282f190u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f240 @ 0x1282f240 (43 bytes, 11 insns) */
void f_1282f240(void) {
  FTRACE(0x1282f240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f240 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f241 mov ebp, esp */
  EBP = (ESP);
  /* 1282f243 mov eax, dword ptr [0x1284e70c] */
  EAX = (r32((uint32_t)(0x1284e70c)));
  /* 1282f248 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1282f24d mov dword ptr [0x1284e70c], eax */
  w32((uint32_t)(0x1284e70c), (EAX));
  /* 1282f252 call dword ptr [0x12850248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850248))), 0x1282f258u);
  /* 1282f258 mov dword ptr [0x1284e710], eax */
  w32((uint32_t)(0x1284e710), (EAX));
  /* 1282f25d mov ecx, dword ptr [0x1284e710] */
  ECX = (r32((uint32_t)(0x1284e710)));
  /* 1282f263 mov dword ptr [0x1284e6f4], ecx */
  w32((uint32_t)(0x1284e6f4), (ECX));
  /* 1282f269 pop ebp */
  EBP = (pop32());
  /* 1282f26a ret  */
  ESPCHK(0x1282f240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f270 @ 0x1282f270 (155 bytes, 57 insns) */
void f_1282f270(void) {
  FTRACE(0x1282f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f271 mov ebp, esp */
  EBP = (ESP);
  /* 1282f273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f276 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f27a je 0x1282f29b */
  if (C.zf) goto L_1282f29b;
  /* 1282f27c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f27f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1282f282 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282f284 je 0x1282f29b */
  if (C.zf) goto L_1282f29b;
  /* 1282f286 push 0x1284a6a4 */
  push32((uint32_t)(0x1284a6a4u));
  /* 1282f28b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f28e push edx */
  push32((uint32_t)(EDX));
  /* 1282f28f call 0x1282e7d0 */
  push32(0x1282f294u); f_1282e7d0();
  /* 1282f294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f299 jne 0x1282f2c3 */
  if (!C.zf) goto L_1282f2c3;
L_1282f29b:;
  /* 1282f29b push 8 */
  push32((uint32_t)(0x8u));
  /* 1282f29d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1282f2a0 push eax */
  push32((uint32_t)(EAX));
  /* 1282f2a1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1282f2a6 mov ecx, dword ptr [0x1284e710] */
  ECX = (r32((uint32_t)(0x1284e710)));
  /* 1282f2ac push ecx */
  push32((uint32_t)(ECX));
  /* 1282f2ad call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282f2b3u);
  /* 1282f2b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f2b5 jne 0x1282f2bb */
  if (!C.zf) goto L_1282f2bb;
  /* 1282f2b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282f2b9 jmp 0x1282f307 */
  goto L_1282f307;
L_1282f2bb:;
  /* 1282f2bb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1282f2be mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1282f2c1 jmp 0x1282f2fb */
  goto L_1282f2fb;
L_1282f2c3:;
  /* 1282f2c3 push 0x1284a6a0 */
  push32((uint32_t)(0x1284a6a0u));
  /* 1282f2c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f2cb push eax */
  push32((uint32_t)(EAX));
  /* 1282f2cc call 0x1282e7d0 */
  push32(0x1282f2d1u); f_1282e7d0();
  /* 1282f2d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f2d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f2d6 jne 0x1282f2fb */
  if (!C.zf) goto L_1282f2fb;
  /* 1282f2d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 1282f2da lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1282f2dd push ecx */
  push32((uint32_t)(ECX));
  /* 1282f2de push 0xb */
  push32((uint32_t)(0xbu));
  /* 1282f2e0 mov edx, dword ptr [0x1284e710] */
  EDX = (r32((uint32_t)(0x1284e710)));
  /* 1282f2e6 push edx */
  push32((uint32_t)(EDX));
  /* 1282f2e7 call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282f2edu);
  /* 1282f2ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f2ef jne 0x1282f2f5 */
  if (!C.zf) goto L_1282f2f5;
  /* 1282f2f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282f2f3 jmp 0x1282f307 */
  goto L_1282f307;
L_1282f2f5:;
  /* 1282f2f5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1282f2f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1282f2fb:;
  /* 1282f2fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f2fe push ecx */
  push32((uint32_t)(ECX));
  /* 1282f2ff call 0x128313f0 */
  push32(0x1282f304u); f_128313f0();
  /* 1282f304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1282f307:;
  /* 1282f307 mov esp, ebp */
  ESP = (EBP);
  /* 1282f309 pop ebp */
  EBP = (pop32());
  /* 1282f30a ret  */
  ESPCHK(0x1282f270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f310 @ 0x1282f310 (79 bytes, 26 insns) */
void f_1282f310(void) {
  FTRACE(0x1282f310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f310 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f311 mov ebp, esp */
  EBP = (ESP);
  /* 1282f313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f316 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1282f31a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1282f31e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282f325 jmp 0x1282f330 */
  goto L_1282f330;
L_1282f327:;
  /* 1282f327 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282f32a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f32d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1282f330:;
  /* 1282f330 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f334 jae 0x1282f356 */
  if (!C.cf) goto L_1282f356;
  /* 1282f336 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282f339 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1282f33f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282f342 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1282f344 mov cx, word ptr [eax*2 + 0x1284d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1284d9c4)));
  /* 1282f34c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f34e jne 0x1282f354 */
  if (!C.zf) goto L_1282f354;
  /* 1282f350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282f352 jmp 0x1282f35b */
  goto L_1282f35b;
L_1282f354:;
  /* 1282f354 jmp 0x1282f327 */
  goto L_1282f327;
L_1282f356:;
  /* 1282f356 mov eax, 1 */
  EAX = (0x1u);
L_1282f35b:;
  /* 1282f35b mov esp, ebp */
  ESP = (EBP);
  /* 1282f35d pop ebp */
  EBP = (pop32());
  /* 1282f35e ret  */
  ESPCHK(0x1282f310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f360 @ 0x1282f360 (135 bytes, 48 insns) */
void f_1282f360(void) {
  FTRACE(0x1282f360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f360 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f361 mov ebp, esp */
  EBP = (ESP);
  /* 1282f363 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f366 push esi */
  push32((uint32_t)(ESI));
  /* 1282f367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f36a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282f36f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282f374 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282f379 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1282f37c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282f381 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282f384 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1282f386 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1282f389 push ecx */
  push32((uint32_t)(ECX));
  /* 1282f38a push 1 */
  push32((uint32_t)(0x1u));
  /* 1282f38c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282f38f push edx */
  push32((uint32_t)(EDX));
  /* 1282f390 call dword ptr [0x1284e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1284e714))), 0x1282f396u);
  /* 1282f396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f398 jne 0x1282f39e */
  if (!C.zf) goto L_1282f39e;
  /* 1282f39a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282f39c jmp 0x1282f3e2 */
  goto L_1282f3e2;
L_1282f39e:;
  /* 1282f39e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1282f3a1 push eax */
  push32((uint32_t)(EAX));
  /* 1282f3a2 call 0x1282f5d0 */
  push32(0x1282f3a7u); f_1282f5d0();
  /* 1282f3a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f3aa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f3ad je 0x1282f3dd */
  if (C.zf) goto L_1282f3dd;
  /* 1282f3af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f3b3 je 0x1282f3dd */
  if (C.zf) goto L_1282f3dd;
  /* 1282f3b5 mov ecx, dword ptr [0x1284e704] */
  ECX = (r32((uint32_t)(0x1284e704)));
  /* 1282f3bb push ecx */
  push32((uint32_t)(ECX));
  /* 1282f3bc call 0x1282f650 */
  push32(0x1282f3c1u); f_1282f650();
  /* 1282f3c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f3c4 mov esi, eax */
  ESI = (EAX);
  /* 1282f3c6 mov edx, dword ptr [0x1284e704] */
  EDX = (r32((uint32_t)(0x1284e704)));
  /* 1282f3cc push edx */
  push32((uint32_t)(EDX));
  /* 1282f3cd call 0x12825970 */
  push32(0x1282f3d2u); f_12825970();
  /* 1282f3d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f3d5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f3d7 jne 0x1282f3dd */
  if (!C.zf) goto L_1282f3dd;
  /* 1282f3d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1282f3db jmp 0x1282f3e2 */
  goto L_1282f3e2;
L_1282f3dd:;
  /* 1282f3dd mov eax, 1 */
  EAX = (0x1u);
L_1282f3e2:;
  /* 1282f3e2 pop esi */
  ESI = (pop32());
  /* 1282f3e3 mov esp, ebp */
  ESP = (EBP);
  /* 1282f3e5 pop ebp */
  EBP = (pop32());
  /* 1282f3e6 ret  */
  ESPCHK(0x1282f360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3f0 @ 0x1282f3f0 (77 bytes, 18 insns) */
void f_1282f3f0(void) {
  FTRACE(0x1282f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1282f3f3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f3f9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1282f403 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1282f409 push eax */
  push32((uint32_t)(EAX));
  /* 1282f40a call dword ptr [0x12850244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850244))), 0x1282f410u);
  /* 1282f410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1282f412 je 0x1282f429 */
  if (C.zf) goto L_1282f429;
  /* 1282f414 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f41b jne 0x1282f429 */
  if (!C.zf) goto L_1282f429;
  /* 1282f41d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1282f427 jmp 0x1282f433 */
  goto L_1282f433;
L_1282f429:;
  /* 1282f429 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1282f433:;
  /* 1282f433 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1282f439 mov esp, ebp */
  ESP = (EBP);
  /* 1282f43b pop ebp */
  EBP = (pop32());
  /* 1282f43c ret  */
  ESPCHK(0x1282f3f0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1282f440 (388 bytes, 118 insns) */
void f_1282f440(void) {
  FTRACE(0x1282f440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f440 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f441 mov ebp, esp */
  EBP = (ESP);
  /* 1282f443 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f446 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1282f44d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1282f454 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1282f45b:;
  /* 1282f45b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f45e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f461 jg 0x1282f5a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_1282f5a8;
  /* 1282f467 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1282f46a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f46d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1282f46e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f470 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1282f472 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1282f475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f478 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f47b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f47e cmp edx, dword ptr [ecx + 0x1284d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1284d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f484 jne 0x1282f57e */
  if (!C.zf) goto L_1282f57e;
  /* 1282f48a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282f48d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1282f490 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f494 ja 0x1282f4b7 */
  if ((!C.cf&&!C.zf)) goto L_1282f4b7;
  /* 1282f496 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f49a je 0x1282f529 */
  if (C.zf) goto L_1282f529;
  /* 1282f4a0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f4a4 je 0x1282f4d4 */
  if (C.zf) goto L_1282f4d4;
  /* 1282f4a6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f4aa je 0x1282f4f6 */
  if (C.zf) goto L_1282f4f6;
  /* 1282f4ac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f4b0 je 0x1282f518 */
  if (C.zf) goto L_1282f518;
  /* 1282f4b2 jmp 0x1282f548 */
  goto L_1282f548;
L_1282f4b7:;
  /* 1282f4b7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f4be je 0x1282f4e5 */
  if (C.zf) goto L_1282f4e5;
  /* 1282f4c0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f4c7 je 0x1282f507 */
  if (C.zf) goto L_1282f507;
  /* 1282f4c9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f4d0 je 0x1282f53a */
  if (C.zf) goto L_1282f53a;
  /* 1282f4d2 jmp 0x1282f548 */
  goto L_1282f548;
L_1282f4d4:;
  /* 1282f4d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f4d7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f4da add ecx, 0x1284d524 */
  { uint32_t _a=(ECX),_b=(0x1284d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f4e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282f4e3 jmp 0x1282f548 */
  goto L_1282f548;
L_1282f4e5:;
  /* 1282f4e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f4e8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f4eb mov eax, dword ptr [edx + 0x1284d52c] */
  EAX = (r32((uint32_t)(EDX + 0x1284d52c)));
  /* 1282f4f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282f4f4 jmp 0x1282f548 */
  goto L_1282f548;
L_1282f4f6:;
  /* 1282f4f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f4f9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f4fc add ecx, 0x1284d530 */
  { uint32_t _a=(ECX),_b=(0x1284d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f502 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282f505 jmp 0x1282f548 */
  goto L_1282f548;
L_1282f507:;
  /* 1282f507 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f50a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f50d mov eax, dword ptr [edx + 0x1284d534] */
  EAX = (r32((uint32_t)(EDX + 0x1284d534)));
  /* 1282f513 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1282f516 jmp 0x1282f548 */
  goto L_1282f548;
L_1282f518:;
  /* 1282f518 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f51b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f51e add ecx, 0x1284d538 */
  { uint32_t _a=(ECX),_b=(0x1284d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f524 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282f527 jmp 0x1282f548 */
  goto L_1282f548;
L_1282f529:;
  /* 1282f529 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f52c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f52f add edx, 0x1284d53c */
  { uint32_t _a=(EDX),_b=(0x1284d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f535 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1282f538 jmp 0x1282f548 */
  goto L_1282f548;
L_1282f53a:;
  /* 1282f53a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f53d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f540 add eax, 0x1284d544 */
  { uint32_t _a=(EAX),_b=(0x1284d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f545 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1282f548:;
  /* 1282f548 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f54c je 0x1282f554 */
  if (C.zf) goto L_1282f554;
  /* 1282f54e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f552 jge 0x1282f556 */
  if ((C.sf==C.of)) goto L_1282f556;
L_1282f554:;
  /* 1282f554 jmp 0x1282f5a8 */
  goto L_1282f5a8;
L_1282f556:;
  /* 1282f556 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282f559 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f55c push ecx */
  push32((uint32_t)(ECX));
  /* 1282f55d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282f560 push edx */
  push32((uint32_t)(EDX));
  /* 1282f561 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282f564 push eax */
  push32((uint32_t)(EAX));
  /* 1282f565 call 0x12826360 */
  push32(0x1282f56au); f_12826360();
  /* 1282f56a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f56d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282f570 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f573 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1282f577 mov eax, 1 */
  EAX = (0x1u);
  /* 1282f57c jmp 0x1282f5be */
  goto L_1282f5be;
L_1282f57e:;
  /* 1282f57e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f581 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f587 cmp eax, dword ptr [edx + 0x1284d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1284d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f58d jae 0x1282f59a */
  if (!C.cf) goto L_1282f59a;
  /* 1282f58f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f592 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f595 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1282f598 jmp 0x1282f5a3 */
  goto L_1282f5a3;
L_1282f59a:;
  /* 1282f59a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1282f59d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f5a0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1282f5a3:;
  /* 1282f5a3 jmp 0x1282f45b */
  goto L_1282f45b;
L_1282f5a8:;
  /* 1282f5a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1282f5ab push eax */
  push32((uint32_t)(EAX));
  /* 1282f5ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1282f5af push ecx */
  push32((uint32_t)(ECX));
  /* 1282f5b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1282f5b3 push edx */
  push32((uint32_t)(EDX));
  /* 1282f5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f5b7 push eax */
  push32((uint32_t)(EAX));
  /* 1282f5b8 call dword ptr [0x12850250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12850250))), 0x1282f5beu);
L_1282f5be:;
  /* 1282f5be mov esp, ebp */
  ESP = (EBP);
  /* 1282f5c0 pop ebp */
  EBP = (pop32());
  /* 1282f5c1 ret 0x10 */
  ESPCHK(0x1282f440u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f5d0 @ 0x1282f5d0 (118 bytes, 42 insns) */
void f_1282f5d0(void) {
  FTRACE(0x1282f5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f5d1 mov ebp, esp */
  EBP = (ESP);
  /* 1282f5d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f5d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1282f5dd:;
  /* 1282f5dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f5e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1282f5e2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1282f5e5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282f5e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f5ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f5ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1282f5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1282f5f4 je 0x1282f63f */
  if (C.zf) goto L_1282f63f;
  /* 1282f5f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282f5fa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f5fd jl 0x1282f612 */
  if ((C.sf!=C.of)) goto L_1282f612;
  /* 1282f5ff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282f603 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f606 jg 0x1282f612 */
  if ((!C.zf&&C.sf==C.of)) goto L_1282f612;
  /* 1282f608 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1282f60b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1282f60d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1282f610 jmp 0x1282f62c */
  goto L_1282f62c;
L_1282f612:;
  /* 1282f612 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282f616 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f619 jl 0x1282f62c */
  if ((C.sf!=C.of)) goto L_1282f62c;
  /* 1282f61b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282f61f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f622 jg 0x1282f62c */
  if ((!C.zf&&C.sf==C.of)) goto L_1282f62c;
  /* 1282f624 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1282f627 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1282f629 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1282f62c:;
  /* 1282f62c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282f62f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1282f632 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1282f636 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1282f63a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282f63d jmp 0x1282f5dd */
  goto L_1282f5dd;
L_1282f63f:;
  /* 1282f63f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1282f642 mov esp, ebp */
  ESP = (EBP);
  /* 1282f644 pop ebp */
  EBP = (pop32());
  /* 1282f645 ret  */
  ESPCHK(0x1282f5d0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x1282f650 (101 bytes, 36 insns) */
void f_1282f650(void) {
  FTRACE(0x1282f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f650 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f651 mov ebp, esp */
  EBP = (ESP);
  /* 1282f653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1282f656 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1282f65d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f660 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1282f662 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1282f665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f668 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f66b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1282f66e:;
  /* 1282f66e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1282f672 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f675 jl 0x1282f680 */
  if ((C.sf!=C.of)) goto L_1282f680;
  /* 1282f677 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1282f67b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f67e jle 0x1282f692 */
  if ((C.zf||C.sf!=C.of)) goto L_1282f692;
L_1282f680:;
  /* 1282f680 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1282f684 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f687 jl 0x1282f6ae */
  if ((C.sf!=C.of)) goto L_1282f6ae;
  /* 1282f689 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1282f68d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f690 jg 0x1282f6ae */
  if ((!C.zf&&C.sf==C.of)) goto L_1282f6ae;
L_1282f692:;
  /* 1282f692 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282f695 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f698 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1282f69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f69e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1282f6a0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1282f6a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f6a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f6a9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1282f6ac jmp 0x1282f66e */
  goto L_1282f66e;
L_1282f6ae:;
  /* 1282f6ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1282f6b1 mov esp, ebp */
  ESP = (EBP);
  /* 1282f6b3 pop ebp */
  EBP = (pop32());
  /* 1282f6b4 ret  */
  ESPCHK(0x1282f650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6c0 @ 0x1282f6c0 (122 bytes, 39 insns) */
void f_1282f6c0(void) {
  FTRACE(0x1282f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1282f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1282f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1282f6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1282f6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f6c7 cmp eax, dword ptr [0x1284ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1284ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1282f6cd jae 0x1282f6f1 */
  if (!C.cf) goto L_1282f6f1;
  /* 1282f6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f6d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1282f6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f6d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1282f6db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1282f6de mov eax, dword ptr [ecx*4 + 0x1284fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1284fe60)));
  /* 1282f6e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1282f6ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1282f6ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1282f6ef jne 0x1282f70c */
  if (!C.zf) goto L_1282f70c;
L_1282f6f1:;
  /* 1282f6f1 call 0x1282aa10 */
  push32(0x1282f6f6u); f_1282aa10();
  /* 1282f6f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1282f6fc call 0x1282aa20 */
  push32(0x1282f701u); f_1282aa20();
  /* 1282f701 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1282f707 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1282f70a jmp 0x1282f736 */
  goto L_1282f736;
L_1282f70c:;
  /* 1282f70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f70f push edx */
  push32((uint32_t)(EDX));
  /* 1282f710 call 0x1282c230 */
  push32(0x1282f715u); f_1282c230();
  /* 1282f715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f718 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f71b push eax */
  push32((uint32_t)(EAX));
  /* 1282f71c call 0x1282f740 */
  push32(0x1282f721u); f_1282f740();
  /* 1282f721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f724 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1282f727 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1282f72a push ecx */
  push32((uint32_t)(ECX));
  /* 1282f72b call 0x1282c2c0 */
  push32(0x1282f730u); f_1282c2c0();
  /* 1282f730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1282f733 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1282f736:;
  /* 1282f736 mov esp, ebp */
  ESP = (EBP);
  /* 1282f738 pop ebp */
  EBP = (pop32());
  /* 1282f739 ret  */
  ESPCHK(0x1282f6c0u, _esp0);
  ESP += 4; return;
}

