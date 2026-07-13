#include "recomp.h"

/* FUN_10006a00 @ 0x12906a00 (10 bytes, 5 insns) */
void f_12906a00(void) {
  FTRACE(0x12906a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12906a01 mov ebp, esp */
  EBP = (ESP);
  /* 12906a03 mov eax, 1 */
  EAX = (0x1u);
  /* 12906a08 pop ebp */
  EBP = (pop32());
  /* 12906a09 ret  */
  ESPCHK(0x12906a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a10 @ 0x12906a10 (173 bytes, 59 insns) */
void f_12906a10(void) {
  FTRACE(0x12906a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12906a11 mov ebp, esp */
  EBP = (ESP);
  /* 12906a13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906a16 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906a1a jbe 0x12906a23 */
  if ((C.cf||C.zf)) goto L_12906a23;
  /* 12906a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12906a1e jmp 0x12906ab9 */
  goto L_12906ab9;
L_12906a23:;
  /* 12906a23 push 9 */
  push32((uint32_t)(0x9u));
  /* 12906a25 call 0x12906540 */
  push32(0x12906a2au); f_12906540();
  /* 12906a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906a2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906a30 push eax */
  push32((uint32_t)(EAX));
  /* 12906a31 call 0x12906e40 */
  push32(0x12906a36u); f_12906e40();
  /* 12906a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906a39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12906a3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906a40 je 0x12906a81 */
  if (C.zf) goto L_12906a81;
  /* 12906a42 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12906a49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906a4c cmp ecx, dword ptr [0x1292cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906a52 ja 0x12906a72 */
  if ((!C.cf&&!C.zf)) goto L_12906a72;
  /* 12906a54 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906a57 push edx */
  push32((uint32_t)(EDX));
  /* 12906a58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906a5b push eax */
  push32((uint32_t)(EAX));
  /* 12906a5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906a5f push ecx */
  push32((uint32_t)(ECX));
  /* 12906a60 call 0x12907d10 */
  push32(0x12906a65u); f_12907d10();
  /* 12906a65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12906a6a je 0x12906a72 */
  if (C.zf) goto L_12906a72;
  /* 12906a6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906a6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12906a72:;
  /* 12906a72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12906a74 call 0x129065e0 */
  push32(0x12906a79u); f_129065e0();
  /* 12906a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906a7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906a7f jmp 0x12906ab9 */
  goto L_12906ab9;
L_12906a81:;
  /* 12906a81 push 9 */
  push32((uint32_t)(0x9u));
  /* 12906a83 call 0x129065e0 */
  push32(0x12906a88u); f_129065e0();
  /* 12906a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906a8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906a8f jne 0x12906a98 */
  if (!C.zf) goto L_12906a98;
  /* 12906a91 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12906a98:;
  /* 12906a98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906a9b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906a9e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12906aa0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12906aa3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 12906aa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906aaa push edx */
  push32((uint32_t)(EDX));
  /* 12906aab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12906aad mov eax, dword ptr [0x1292fe2c] */
  EAX = (r32((uint32_t)(0x1292fe2c)));
  /* 12906ab2 push eax */
  push32((uint32_t)(EAX));
  /* 12906ab3 call dword ptr [0x129302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302cc))), 0x12906ab9u);
L_12906ab9:;
  /* 12906ab9 mov esp, ebp */
  ESP = (EBP);
  /* 12906abb pop ebp */
  EBP = (pop32());
  /* 12906abc ret  */
  ESPCHK(0x12906a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x12906ac0 (490 bytes, 165 insns) */
void f_12906ac0(void) {
  FTRACE(0x12906ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12906ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12906ac3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906ac6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906aca jne 0x12906add */
  if (!C.zf) goto L_12906add;
  /* 12906acc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906acf push eax */
  push32((uint32_t)(EAX));
  /* 12906ad0 call 0x12906910 */
  push32(0x12906ad5u); f_12906910();
  /* 12906ad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906ad8 jmp 0x12906ca6 */
  goto L_12906ca6;
L_12906add:;
  /* 12906add cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906ae1 jne 0x12906af6 */
  if (!C.zf) goto L_12906af6;
  /* 12906ae3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 12906ae7 call 0x12906cb0 */
  push32(0x12906aecu); f_12906cb0();
  /* 12906aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906aef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12906af1 jmp 0x12906ca6 */
  goto L_12906ca6;
L_12906af6:;
  /* 12906af6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12906afd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906b01 ja 0x12906c79 */
  if ((!C.cf&&!C.zf)) goto L_12906c79;
  /* 12906b07 push 9 */
  push32((uint32_t)(0x9u));
  /* 12906b09 call 0x12906540 */
  push32(0x12906b0eu); f_12906540();
  /* 12906b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906b11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906b14 push edx */
  push32((uint32_t)(EDX));
  /* 12906b15 call 0x12906e40 */
  push32(0x12906b1au); f_12906e40();
  /* 12906b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906b1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12906b20 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906b24 je 0x12906c3c */
  if (C.zf) goto L_12906c3c;
  /* 12906b2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906b2d cmp eax, dword ptr [0x1292cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906b33 ja 0x12906bb0 */
  if ((!C.cf&&!C.zf)) goto L_12906bb0;
  /* 12906b35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906b38 push ecx */
  push32((uint32_t)(ECX));
  /* 12906b39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906b3c push edx */
  push32((uint32_t)(EDX));
  /* 12906b3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12906b40 push eax */
  push32((uint32_t)(EAX));
  /* 12906b41 call 0x12907d10 */
  push32(0x12906b46u); f_12907d10();
  /* 12906b46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12906b4b je 0x12906b55 */
  if (C.zf) goto L_12906b55;
  /* 12906b4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906b50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12906b53 jmp 0x12906bb0 */
  goto L_12906bb0;
L_12906b55:;
  /* 12906b55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906b58 push edx */
  push32((uint32_t)(EDX));
  /* 12906b59 call 0x129074d0 */
  push32(0x12906b5eu); f_129074d0();
  /* 12906b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906b61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12906b64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906b68 je 0x12906bb0 */
  if (C.zf) goto L_12906bb0;
  /* 12906b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906b6d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12906b70 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906b73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12906b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906b79 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906b7c jae 0x12906b86 */
  if (!C.cf) goto L_12906b86;
  /* 12906b7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906b81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12906b84 jmp 0x12906b8c */
  goto L_12906b8c;
L_12906b86:;
  /* 12906b86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906b89 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12906b8c:;
  /* 12906b8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12906b8f push edx */
  push32((uint32_t)(EDX));
  /* 12906b90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906b93 push eax */
  push32((uint32_t)(EAX));
  /* 12906b94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906b97 push ecx */
  push32((uint32_t)(ECX));
  /* 12906b98 call 0x12909420 */
  push32(0x12906b9du); f_12909420();
  /* 12906b9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906ba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906ba3 push edx */
  push32((uint32_t)(EDX));
  /* 12906ba4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12906ba7 push eax */
  push32((uint32_t)(EAX));
  /* 12906ba8 call 0x12906f00 */
  push32(0x12906badu); f_12906f00();
  /* 12906bad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12906bb0:;
  /* 12906bb0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906bb4 jne 0x12906c30 */
  if (!C.zf) goto L_12906c30;
  /* 12906bb6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906bba jne 0x12906bc3 */
  if (!C.zf) goto L_12906bc3;
  /* 12906bbc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12906bc3:;
  /* 12906bc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906bc6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906bc9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12906bcc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12906bcf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906bd2 push edx */
  push32((uint32_t)(EDX));
  /* 12906bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12906bd5 mov eax, dword ptr [0x1292fe2c] */
  EAX = (r32((uint32_t)(0x1292fe2c)));
  /* 12906bda push eax */
  push32((uint32_t)(EAX));
  /* 12906bdb call dword ptr [0x12930304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930304))), 0x12906be1u);
  /* 12906be1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12906be4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906be8 je 0x12906c30 */
  if (C.zf) goto L_12906c30;
  /* 12906bea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906bed mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12906bf0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906bf3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12906bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906bf9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906bfc jae 0x12906c06 */
  if (!C.cf) goto L_12906c06;
  /* 12906bfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906c01 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12906c04 jmp 0x12906c0c */
  goto L_12906c0c;
L_12906c06:;
  /* 12906c06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906c09 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12906c0c:;
  /* 12906c0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12906c0f push eax */
  push32((uint32_t)(EAX));
  /* 12906c10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12906c14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906c17 push edx */
  push32((uint32_t)(EDX));
  /* 12906c18 call 0x12909420 */
  push32(0x12906c1du); f_12909420();
  /* 12906c1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906c20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906c23 push eax */
  push32((uint32_t)(EAX));
  /* 12906c24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12906c27 push ecx */
  push32((uint32_t)(ECX));
  /* 12906c28 call 0x12906f00 */
  push32(0x12906c2du); f_12906f00();
  /* 12906c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12906c30:;
  /* 12906c30 push 9 */
  push32((uint32_t)(0x9u));
  /* 12906c32 call 0x129065e0 */
  push32(0x12906c37u); f_129065e0();
  /* 12906c37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906c3a jmp 0x12906c79 */
  goto L_12906c79;
L_12906c3c:;
  /* 12906c3c push 9 */
  push32((uint32_t)(0x9u));
  /* 12906c3e call 0x129065e0 */
  push32(0x12906c43u); f_129065e0();
  /* 12906c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906c46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906c4a jne 0x12906c53 */
  if (!C.zf) goto L_12906c53;
  /* 12906c4c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12906c53:;
  /* 12906c53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906c56 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906c59 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12906c5c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12906c5f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906c62 push eax */
  push32((uint32_t)(EAX));
  /* 12906c63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906c66 push ecx */
  push32((uint32_t)(ECX));
  /* 12906c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12906c69 mov edx, dword ptr [0x1292fe2c] */
  EDX = (r32((uint32_t)(0x1292fe2c)));
  /* 12906c6f push edx */
  push32((uint32_t)(EDX));
  /* 12906c70 call dword ptr [0x129302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302cc))), 0x12906c76u);
  /* 12906c76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12906c79:;
  /* 12906c79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906c7d jne 0x12906c88 */
  if (!C.zf) goto L_12906c88;
  /* 12906c7f cmp dword ptr [0x1292e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906c86 jne 0x12906c8d */
  if (!C.zf) goto L_12906c8d;
L_12906c88:;
  /* 12906c88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906c8b jmp 0x12906ca6 */
  goto L_12906ca6;
L_12906c8d:;
  /* 12906c8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906c90 push eax */
  push32((uint32_t)(EAX));
  /* 12906c91 call 0x12906880 */
  push32(0x12906c96u); f_12906880();
  /* 12906c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12906c9b jne 0x12906ca1 */
  if (!C.zf) goto L_12906ca1;
  /* 12906c9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12906c9f jmp 0x12906ca6 */
  goto L_12906ca6;
L_12906ca1:;
  /* 12906ca1 jmp 0x12906af6 */
  goto L_12906af6;
L_12906ca6:;
  /* 12906ca6 mov esp, ebp */
  ESP = (EBP);
  /* 12906ca8 pop ebp */
  EBP = (pop32());
  /* 12906ca9 ret  */
  ESPCHK(0x12906ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x12906cb0 (104 bytes, 38 insns) */
void f_12906cb0(void) {
  FTRACE(0x12906cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12906cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12906cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12906cb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906cb8 jne 0x12906cbc */
  if (!C.zf) goto L_12906cbc;
  /* 12906cba jmp 0x12906d14 */
  goto L_12906d14;
L_12906cbc:;
  /* 12906cbc push 9 */
  push32((uint32_t)(0x9u));
  /* 12906cbe call 0x12906540 */
  push32(0x12906cc3u); f_12906540();
  /* 12906cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12906cca call 0x12906e40 */
  push32(0x12906ccfu); f_12906e40();
  /* 12906ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906cd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12906cd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906cd9 je 0x12906cf7 */
  if (C.zf) goto L_12906cf7;
  /* 12906cdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906cde push ecx */
  push32((uint32_t)(ECX));
  /* 12906cdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906ce2 push edx */
  push32((uint32_t)(EDX));
  /* 12906ce3 call 0x12906f00 */
  push32(0x12906ce8u); f_12906f00();
  /* 12906ce8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906ceb push 9 */
  push32((uint32_t)(0x9u));
  /* 12906ced call 0x129065e0 */
  push32(0x12906cf2u); f_129065e0();
  /* 12906cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906cf5 jmp 0x12906d14 */
  goto L_12906d14;
L_12906cf7:;
  /* 12906cf7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12906cf9 call 0x129065e0 */
  push32(0x12906cfeu); f_129065e0();
  /* 12906cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906d01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906d04 push eax */
  push32((uint32_t)(EAX));
  /* 12906d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12906d07 mov ecx, dword ptr [0x1292fe2c] */
  ECX = (r32((uint32_t)(0x1292fe2c)));
  /* 12906d0d push ecx */
  push32((uint32_t)(ECX));
  /* 12906d0e call dword ptr [0x129302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e4))), 0x12906d14u);
L_12906d14:;
  /* 12906d14 mov esp, ebp */
  ESP = (EBP);
  /* 12906d16 pop ebp */
  EBP = (pop32());
  /* 12906d17 ret  */
  ESPCHK(0x12906cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d20 @ 0x12906d20 (116 bytes, 34 insns) */
void f_12906d20(void) {
  FTRACE(0x12906d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12906d21 mov ebp, esp */
  EBP = (ESP);
  /* 12906d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12906d24 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12906d2b push 9 */
  push32((uint32_t)(0x9u));
  /* 12906d2d call 0x12906540 */
  push32(0x12906d32u); f_12906540();
  /* 12906d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906d35 call 0x12908430 */
  push32(0x12906d3au); f_12908430();
  /* 12906d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12906d3c jge 0x12906d45 */
  if ((C.sf==C.of)) goto L_12906d45;
  /* 12906d3e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12906d45:;
  /* 12906d45 push 9 */
  push32((uint32_t)(0x9u));
  /* 12906d47 call 0x129065e0 */
  push32(0x12906d4cu); f_129065e0();
  /* 12906d4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12906d4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12906d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12906d53 mov eax, dword ptr [0x1292fe2c] */
  EAX = (r32((uint32_t)(0x1292fe2c)));
  /* 12906d58 push eax */
  push32((uint32_t)(EAX));
  /* 12906d59 call dword ptr [0x129302c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302c4))), 0x12906d5fu);
  /* 12906d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12906d61 jne 0x12906d8d */
  if (!C.zf) goto L_12906d8d;
  /* 12906d63 call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x12906d69u);
  /* 12906d69 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906d6c jne 0x12906d86 */
  if (!C.zf) goto L_12906d86;
  /* 12906d6e call 0x1290aa20 */
  push32(0x12906d73u); f_1290aa20();
  /* 12906d73 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12906d79 call 0x1290aa10 */
  push32(0x12906d7eu); f_1290aa10();
  /* 12906d7e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12906d84 jmp 0x12906d8d */
  goto L_12906d8d;
L_12906d86:;
  /* 12906d86 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12906d8d:;
  /* 12906d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906d90 mov esp, ebp */
  ESP = (EBP);
  /* 12906d92 pop ebp */
  EBP = (pop32());
  /* 12906d93 ret  */
  ESPCHK(0x12906d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x12906da0 (10 bytes, 5 insns) */
void f_12906da0(void) {
  FTRACE(0x12906da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12906da1 mov ebp, esp */
  EBP = (ESP);
  /* 12906da3 call 0x12906d20 */
  push32(0x12906da8u); f_12906d20();
  /* 12906da8 pop ebp */
  EBP = (pop32());
  /* 12906da9 ret  */
  ESPCHK(0x12906da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x12906db0 (10 bytes, 5 insns) */
void f_12906db0(void) {
  FTRACE(0x12906db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12906db1 mov ebp, esp */
  EBP = (ESP);
  /* 12906db3 mov eax, dword ptr [0x1292cc94] */
  EAX = (r32((uint32_t)(0x1292cc94)));
  /* 12906db8 pop ebp */
  EBP = (pop32());
  /* 12906db9 ret  */
  ESPCHK(0x12906db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x12906dc0 (31 bytes, 11 insns) */
void f_12906dc0(void) {
  FTRACE(0x12906dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12906dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12906dc3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906dca jbe 0x12906dd0 */
  if ((C.cf||C.zf)) goto L_12906dd0;
  /* 12906dcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12906dce jmp 0x12906ddd */
  goto L_12906ddd;
L_12906dd0:;
  /* 12906dd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906dd3 mov dword ptr [0x1292cc94], eax */
  w32((uint32_t)(0x1292cc94), (EAX));
  /* 12906dd8 mov eax, 1 */
  EAX = (0x1u);
L_12906ddd:;
  /* 12906ddd pop ebp */
  EBP = (pop32());
  /* 12906dde ret  */
  ESPCHK(0x12906dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x12906de0 (89 bytes, 20 insns) */
void f_12906de0(void) {
  FTRACE(0x12906de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12906de1 mov ebp, esp */
  EBP = (ESP);
  /* 12906de3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12906de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12906dea mov eax, dword ptr [0x1292fe2c] */
  EAX = (r32((uint32_t)(0x1292fe2c)));
  /* 12906def push eax */
  push32((uint32_t)(EAX));
  /* 12906df0 call dword ptr [0x12930304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930304))), 0x12906df6u);
  /* 12906df6 mov dword ptr [0x1292fe28], eax */
  w32((uint32_t)(0x1292fe28), (EAX));
  /* 12906dfb cmp dword ptr [0x1292fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906e02 jne 0x12906e08 */
  if (!C.zf) goto L_12906e08;
  /* 12906e04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12906e06 jmp 0x12906e37 */
  goto L_12906e37;
L_12906e08:;
  /* 12906e08 mov ecx, dword ptr [0x1292fe28] */
  ECX = (r32((uint32_t)(0x1292fe28)));
  /* 12906e0e mov dword ptr [0x1292fe1c], ecx */
  w32((uint32_t)(0x1292fe1c), (ECX));
  /* 12906e14 mov dword ptr [0x1292fe20], 0 */
  w32((uint32_t)(0x1292fe20), (0x0u));
  /* 12906e1e mov dword ptr [0x1292fe24], 0 */
  w32((uint32_t)(0x1292fe24), (0x0u));
  /* 12906e28 mov dword ptr [0x1292fe08], 0x10 */
  w32((uint32_t)(0x1292fe08), (0x10u));
  /* 12906e32 mov eax, 1 */
  EAX = (0x1u);
L_12906e37:;
  /* 12906e37 pop ebp */
  EBP = (pop32());
  /* 12906e38 ret  */
  ESPCHK(0x12906de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e40 @ 0x12906e40 (85 bytes, 29 insns) */
void f_12906e40(void) {
  FTRACE(0x12906e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12906e41 mov ebp, esp */
  EBP = (ESP);
  /* 12906e43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906e46 mov eax, dword ptr [0x1292fe24] */
  EAX = (r32((uint32_t)(0x1292fe24)));
  /* 12906e4b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12906e4e mov ecx, dword ptr [0x1292fe28] */
  ECX = (r32((uint32_t)(0x1292fe28)));
  /* 12906e54 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906e56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12906e59 mov edx, dword ptr [0x1292fe28] */
  EDX = (r32((uint32_t)(0x1292fe28)));
  /* 12906e5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12906e62:;
  /* 12906e62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906e65 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906e68 jae 0x12906e8f */
  if (!C.cf) goto L_12906e8f;
  /* 12906e6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906e6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906e70 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906e73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12906e76 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906e7d jae 0x12906e84 */
  if (!C.cf) goto L_12906e84;
  /* 12906e7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906e82 jmp 0x12906e91 */
  goto L_12906e91;
L_12906e84:;
  /* 12906e84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906e87 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906e8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12906e8d jmp 0x12906e62 */
  goto L_12906e62;
L_12906e8f:;
  /* 12906e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12906e91:;
  /* 12906e91 mov esp, ebp */
  ESP = (EBP);
  /* 12906e93 pop ebp */
  EBP = (pop32());
  /* 12906e94 ret  */
  ESPCHK(0x12906e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x12906ea0 (95 bytes, 33 insns) */
void f_12906ea0(void) {
  FTRACE(0x12906ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12906ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12906ea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906ea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906ea9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906eac sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906eaf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12906eb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906eb5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12906eb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12906ebb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12906ec0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906ec3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12906ec5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906ec8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12906ecb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12906ecd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12906ecf jne 0x12906ef1 */
  if (!C.zf) goto L_12906ef1;
  /* 12906ed1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906ed4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12906ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12906ed9 jne 0x12906ef1 */
  if (!C.zf) goto L_12906ef1;
  /* 12906edb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12906ede and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12906ee4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12906ee6 je 0x12906ef1 */
  if (C.zf) goto L_12906ef1;
  /* 12906ee8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12906eef jmp 0x12906ef8 */
  goto L_12906ef8;
L_12906ef1:;
  /* 12906ef1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12906ef8:;
  /* 12906ef8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12906efb mov esp, ebp */
  ESP = (EBP);
  /* 12906efd pop ebp */
  EBP = (pop32());
  /* 12906efe ret  */
  ESPCHK(0x12906ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f00 @ 0x12906f00 (1485 bytes, 453 insns) */
void f_12906f00(void) {
  FTRACE(0x12906f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12906f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12906f01 mov ebp, esp */
  EBP = (ESP);
  /* 12906f03 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906f09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12906f0c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12906f0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906f12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906f15 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906f18 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12906f1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12906f1e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12906f21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12906f24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906f27 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12906f2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12906f30 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12906f37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12906f3a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12906f3d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906f40 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12906f43 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12906f46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12906f48 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906f4b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12906f4e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12906f51 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906f54 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12906f57 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12906f5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12906f5c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12906f5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12906f62 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12906f65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12906f68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12906f6b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12906f6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12906f70 jne 0x12907098 */
  if (!C.zf) goto L_12907098;
  /* 12906f76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12906f79 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12906f7c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12906f7f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12906f82 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906f86 jbe 0x12906f8f */
  if ((C.cf||C.zf)) goto L_12906f8f;
  /* 12906f88 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12906f8f:;
  /* 12906f8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12906f92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12906f95 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12906f98 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906f9b jne 0x12907071 */
  if (!C.zf) goto L_12907071;
  /* 12906fa1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12906fa5 jae 0x12907006 */
  if (!C.cf) goto L_12907006;
  /* 12906fa7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12906fac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12906faf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12906fb1 not eax */
  EAX = (~(EAX));
  /* 12906fb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906fb6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12906fb9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12906fbd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12906fbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12906fc2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12906fc5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12906fc9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12906fcc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906fcf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12906fd2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12906fd5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12906fd8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906fdb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12906fde mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12906fe1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12906fe4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12906fe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12906fea jne 0x12907004 */
  if (!C.zf) goto L_12907004;
  /* 12906fec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12906ff1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12906ff4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12906ff6 not eax */
  EAX = (~(EAX));
  /* 12906ff8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12906ffb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12906ffd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12906fff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907002 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12907004:;
  /* 12907004 jmp 0x12907071 */
  goto L_12907071;
L_12907006:;
  /* 12907006 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12907009 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290700c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907011 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907013 not edx */
  EDX = (~(EDX));
  /* 12907015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907018 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1290701b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12907022 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12907024 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907027 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1290702a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12907031 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907034 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907037 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1290703a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1290703d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907040 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907043 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12907046 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907049 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290704c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12907050 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12907052 jne 0x12907071 */
  if (!C.zf) goto L_12907071;
  /* 12907054 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12907057 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290705a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1290705f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907061 not edx */
  EDX = (~(EDX));
  /* 12907063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907066 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12907069 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1290706b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290706e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12907071:;
  /* 12907071 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907074 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12907077 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1290707a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1290707d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12907080 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907083 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12907086 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907089 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1290708c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1290708f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907092 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907095 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12907098:;
  /* 12907098 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290709b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1290709e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129070a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129070a4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129070a8 jbe 0x129070b1 */
  if ((C.cf||C.zf)) goto L_129070b1;
  /* 129070aa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_129070b1:;
  /* 129070b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 129070b4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 129070b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129070b9 jne 0x12907215 */
  if (!C.zf) goto L_12907215;
  /* 129070bf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129070c2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129070c5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 129070c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129070cb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129070ce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129070d1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 129070d4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129070d8 jbe 0x129070e1 */
  if ((C.cf||C.zf)) goto L_129070e1;
  /* 129070da mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_129070e1:;
  /* 129070e1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129070e4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129070e7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 129070ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129070ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129070f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129070f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 129070f6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129070fa jbe 0x12907103 */
  if ((C.cf||C.zf)) goto L_12907103;
  /* 129070fc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12907103:;
  /* 12907103 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907106 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907109 je 0x1290720f */
  if (C.zf) goto L_1290720f;
  /* 1290710f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12907112 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12907115 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12907118 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290711b jne 0x129071f1 */
  if (!C.zf) goto L_129071f1;
  /* 12907121 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907125 jae 0x12907186 */
  if (!C.cf) goto L_12907186;
  /* 12907127 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1290712c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290712f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907131 not edx */
  EDX = (~(EDX));
  /* 12907133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907136 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907139 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1290713d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1290713f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907142 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907145 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12907149 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1290714c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290714f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12907152 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12907155 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907158 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290715b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1290715e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907161 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907164 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12907168 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290716a jne 0x12907184 */
  if (!C.zf) goto L_12907184;
  /* 1290716c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907171 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907174 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907176 not edx */
  EDX = (~(EDX));
  /* 12907178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290717b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290717d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1290717f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907182 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12907184:;
  /* 12907184 jmp 0x129071f1 */
  goto L_129071f1;
L_12907186:;
  /* 12907186 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907189 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290718c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12907191 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12907193 not eax */
  EAX = (~(EAX));
  /* 12907195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907198 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1290719b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 129071a2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129071a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129071a7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129071aa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 129071b1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129071b4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129071b7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 129071ba sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129071bd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129071c0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129071c3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 129071c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129071c9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129071cc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129071d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129071d2 jne 0x129071f1 */
  if (!C.zf) goto L_129071f1;
  /* 129071d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129071d7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129071da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129071df shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129071e1 not eax */
  EAX = (~(EAX));
  /* 129071e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129071e6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129071e9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129071eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129071ee mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129071f1:;
  /* 129071f1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 129071f4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129071f7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 129071fa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129071fd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12907200 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12907203 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12907206 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12907209 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1290720c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1290720f:;
  /* 1290720f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12907212 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12907215:;
  /* 12907215 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12907218 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1290721b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290721d jne 0x1290722b */
  if (!C.zf) goto L_1290722b;
  /* 1290721f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907222 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907225 je 0x1290733b */
  if (C.zf) goto L_1290733b;
L_1290722b:;
  /* 1290722b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1290722e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12907231 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12907234 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12907237 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290723a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290723d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12907240 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12907243 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12907246 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907249 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1290724c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290724f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12907252 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12907255 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12907258 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1290725b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290725e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12907261 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12907264 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12907267 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1290726a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290726d jne 0x1290733b */
  if (!C.zf) goto L_1290733b;
  /* 12907273 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907277 jae 0x129072d4 */
  if (!C.cf) goto L_129072d4;
  /* 12907279 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1290727c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290727f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12907283 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907286 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907289 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1290728c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1290728f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907292 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907295 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12907298 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290729a jne 0x129072b2 */
  if (!C.zf) goto L_129072b2;
  /* 1290729c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129072a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129072a4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129072a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129072a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129072ab or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129072ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129072b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_129072b2:;
  /* 129072b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129072b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129072ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129072bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129072bf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129072c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 129072c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129072c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129072cb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129072ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 129072d2 jmp 0x1290733b */
  goto L_1290733b;
L_129072d4:;
  /* 129072d4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129072d7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129072da movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129072de mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129072e1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129072e4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129072e7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 129072ea mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129072ed add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129072f0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 129072f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129072f5 jne 0x12907312 */
  if (!C.zf) goto L_12907312;
  /* 129072f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129072fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129072fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907302 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907307 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1290730a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1290730c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290730f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12907312:;
  /* 12907312 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12907315 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907318 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1290731d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1290731f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907322 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907325 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1290732c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290732e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907331 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12907334 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1290733b:;
  /* 1290733b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290733e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907341 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12907343 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12907346 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907349 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290734c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1290734f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12907352 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12907354 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907357 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290735a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1290735c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290735f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907362 jne 0x129074c9 */
  if (!C.zf) goto L_129074c9;
  /* 12907368 cmp dword ptr [0x1292fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290736f je 0x129074b8 */
  if (C.zf) goto L_129074b8;
  /* 12907375 mov eax, dword ptr [0x1292fe18] */
  EAX = (r32((uint32_t)(0x1292fe18)));
  /* 1290737a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1290737d mov ecx, dword ptr [0x1292fe20] */
  ECX = (r32((uint32_t)(0x1292fe20)));
  /* 12907383 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12907386 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907388 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1290738b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12907390 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12907395 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907398 push eax */
  push32((uint32_t)(EAX));
  /* 12907399 call dword ptr [0x129302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e8))), 0x1290739fu);
  /* 1290739f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129073a4 mov ecx, dword ptr [0x1292fe18] */
  ECX = (r32((uint32_t)(0x1292fe18)));
  /* 129073aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129073ac mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 129073b1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129073b4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129073b6 mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 129073bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129073bf mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 129073c4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129073c7 mov edx, dword ptr [0x1292fe18] */
  EDX = (r32((uint32_t)(0x1292fe18)));
  /* 129073cd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 129073d8 mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 129073dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129073e0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 129073e3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129073e6 mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 129073eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129073ee mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 129073f1 mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 129073f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129073fa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 129073fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12907400 jne 0x12907416 */
  if (!C.zf) goto L_12907416;
  /* 12907402 mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 12907408 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1290740b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1290740d mov ecx, dword ptr [0x1292fe20] */
  ECX = (r32((uint32_t)(0x1292fe20)));
  /* 12907413 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12907416:;
  /* 12907416 mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 1290741c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907420 jne 0x129074b8 */
  if (!C.zf) goto L_129074b8;
  /* 12907426 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1290742b push 0 */
  push32((uint32_t)(0x0u));
  /* 1290742d mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 12907432 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12907435 push ecx */
  push32((uint32_t)(ECX));
  /* 12907436 call dword ptr [0x129302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e8))), 0x1290743cu);
  /* 1290743c mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 12907442 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12907445 push eax */
  push32((uint32_t)(EAX));
  /* 12907446 push 0 */
  push32((uint32_t)(0x0u));
  /* 12907448 mov ecx, dword ptr [0x1292fe2c] */
  ECX = (r32((uint32_t)(0x1292fe2c)));
  /* 1290744e push ecx */
  push32((uint32_t)(ECX));
  /* 1290744f call dword ptr [0x129302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e4))), 0x12907455u);
  /* 12907455 mov edx, dword ptr [0x1292fe24] */
  EDX = (r32((uint32_t)(0x1292fe24)));
  /* 1290745b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290745e mov eax, dword ptr [0x1292fe28] */
  EAX = (r32((uint32_t)(0x1292fe28)));
  /* 12907463 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907465 mov ecx, dword ptr [0x1292fe20] */
  ECX = (r32((uint32_t)(0x1292fe20)));
  /* 1290746b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290746e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907470 push eax */
  push32((uint32_t)(EAX));
  /* 12907471 mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 12907477 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290747a push edx */
  push32((uint32_t)(EDX));
  /* 1290747b mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 12907480 push eax */
  push32((uint32_t)(EAX));
  /* 12907481 call 0x1290aa30 */
  push32(0x12907486u); f_1290aa30();
  /* 12907486 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12907489 mov ecx, dword ptr [0x1292fe24] */
  ECX = (r32((uint32_t)(0x1292fe24)));
  /* 1290748f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907492 mov dword ptr [0x1292fe24], ecx */
  w32((uint32_t)(0x1292fe24), (ECX));
  /* 12907498 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290749b cmp edx, dword ptr [0x1292fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1292fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129074a1 jbe 0x129074ac */
  if ((C.cf||C.zf)) goto L_129074ac;
  /* 129074a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129074a6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129074a9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_129074ac:;
  /* 129074ac mov ecx, dword ptr [0x1292fe28] */
  ECX = (r32((uint32_t)(0x1292fe28)));
  /* 129074b2 mov dword ptr [0x1292fe1c], ecx */
  w32((uint32_t)(0x1292fe1c), (ECX));
L_129074b8:;
  /* 129074b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129074bb mov dword ptr [0x1292fe20], edx */
  w32((uint32_t)(0x1292fe20), (EDX));
  /* 129074c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129074c4 mov dword ptr [0x1292fe18], eax */
  w32((uint32_t)(0x1292fe18), (EAX));
L_129074c9:;
  /* 129074c9 mov esp, ebp */
  ESP = (EBP);
  /* 129074cb pop ebp */
  EBP = (pop32());
  /* 129074cc ret  */
  ESPCHK(0x12906f00u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x129074d0 (1334 bytes, 427 insns) */
void f_129074d0(void) {
  FTRACE(0x129074d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129074d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129074d1 mov ebp, esp */
  EBP = (ESP);
  /* 129074d3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129074d6 push esi */
  push32((uint32_t)(ESI));
  /* 129074d7 mov eax, dword ptr [0x1292fe24] */
  EAX = (r32((uint32_t)(0x1292fe24)));
  /* 129074dc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129074df mov ecx, dword ptr [0x1292fe28] */
  ECX = (r32((uint32_t)(0x1292fe28)));
  /* 129074e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129074e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 129074ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129074ed add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129074f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 129074f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 129074f6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129074f9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 129074fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129074ff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12907502 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907506 jge 0x1290751c */
  if ((C.sf==C.of)) goto L_1290751c;
  /* 12907508 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1290750b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290750e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907510 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12907513 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1290751a jmp 0x12907531 */
  goto L_12907531;
L_1290751c:;
  /* 1290751c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12907523 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907526 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907529 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290752c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1290752e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12907531:;
  /* 12907531 mov ecx, dword ptr [0x1292fe1c] */
  ECX = (r32((uint32_t)(0x1292fe1c)));
  /* 12907537 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1290753a:;
  /* 1290753a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290753d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907540 jae 0x12907566 */
  if (!C.cf) goto L_12907566;
  /* 12907542 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907545 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12907548 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1290754a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290754d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12907550 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12907553 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12907555 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12907557 je 0x1290755b */
  if (C.zf) goto L_1290755b;
  /* 12907559 jmp 0x12907566 */
  goto L_12907566;
L_1290755b:;
  /* 1290755b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290755e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907561 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12907564 jmp 0x1290753a */
  goto L_1290753a;
L_12907566:;
  /* 12907566 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907569 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290756c jne 0x1290764d */
  if (!C.zf) goto L_1290764d;
  /* 12907572 mov eax, dword ptr [0x1292fe28] */
  EAX = (r32((uint32_t)(0x1292fe28)));
  /* 12907577 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1290757a:;
  /* 1290757a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290757d cmp ecx, dword ptr [0x1292fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907583 jae 0x129075a9 */
  if (!C.cf) goto L_129075a9;
  /* 12907585 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907588 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290758b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1290758d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907590 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12907593 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12907596 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12907598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290759a je 0x1290759e */
  if (C.zf) goto L_1290759e;
  /* 1290759c jmp 0x129075a9 */
  goto L_129075a9;
L_1290759e:;
  /* 1290759e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129075a1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129075a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129075a7 jmp 0x1290757a */
  goto L_1290757a;
L_129075a9:;
  /* 129075a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129075ac cmp ecx, dword ptr [0x1292fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129075b2 jne 0x1290764d */
  if (!C.zf) goto L_1290764d;
L_129075b8:;
  /* 129075b8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129075bb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129075be jae 0x129075d6 */
  if (!C.cf) goto L_129075d6;
  /* 129075c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129075c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129075c7 je 0x129075cb */
  if (C.zf) goto L_129075cb;
  /* 129075c9 jmp 0x129075d6 */
  goto L_129075d6;
L_129075cb:;
  /* 129075cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129075ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129075d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129075d4 jmp 0x129075b8 */
  goto L_129075b8;
L_129075d6:;
  /* 129075d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129075d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129075dc jne 0x12907627 */
  if (!C.zf) goto L_12907627;
  /* 129075de mov eax, dword ptr [0x1292fe28] */
  EAX = (r32((uint32_t)(0x1292fe28)));
  /* 129075e3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_129075e6:;
  /* 129075e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129075e9 cmp ecx, dword ptr [0x1292fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129075ef jae 0x12907607 */
  if (!C.cf) goto L_12907607;
  /* 129075f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129075f4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129075f8 je 0x129075fc */
  if (C.zf) goto L_129075fc;
  /* 129075fa jmp 0x12907607 */
  goto L_12907607;
L_129075fc:;
  /* 129075fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129075ff add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907602 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12907605 jmp 0x129075e6 */
  goto L_129075e6;
L_12907607:;
  /* 12907607 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290760a cmp ecx, dword ptr [0x1292fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907610 jne 0x12907627 */
  if (!C.zf) goto L_12907627;
  /* 12907612 call 0x12907a10 */
  push32(0x12907617u); f_12907a10();
  /* 12907617 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1290761a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290761e jne 0x12907627 */
  if (!C.zf) goto L_12907627;
  /* 12907620 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12907622 jmp 0x12907a01 */
  goto L_12907a01;
L_12907627:;
  /* 12907627 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290762a push edx */
  push32((uint32_t)(EDX));
  /* 1290762b call 0x12907b20 */
  push32(0x12907630u); f_12907b20();
  /* 12907630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12907633 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907636 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12907639 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1290763b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290763e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12907641 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907644 jne 0x1290764d */
  if (!C.zf) goto L_1290764d;
  /* 12907646 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12907648 jmp 0x12907a01 */
  goto L_12907a01;
L_1290764d:;
  /* 1290764d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907650 mov dword ptr [0x1292fe1c], edx */
  w32((uint32_t)(0x1292fe1c), (EDX));
  /* 12907656 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1290765c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1290765f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907662 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12907664 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12907667 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290766b je 0x12907690 */
  if (C.zf) goto L_12907690;
  /* 1290766d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907670 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907673 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12907676 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1290767a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290767d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907680 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12907683 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1290768a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1290768c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290768e jne 0x129076c5 */
  if (!C.zf) goto L_129076c5;
L_12907690:;
  /* 12907690 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12907697:;
  /* 12907697 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290769a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1290769d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129076a0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 129076a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129076a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129076aa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 129076ad and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 129076b4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 129076b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129076b8 jne 0x129076c5 */
  if (!C.zf) goto L_129076c5;
  /* 129076ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129076bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129076c0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 129076c3 jmp 0x12907697 */
  goto L_12907697;
L_129076c5:;
  /* 129076c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129076c8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129076ce mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129076d1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 129076d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 129076db mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129076e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129076e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129076e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129076eb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 129076ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 129076f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129076f6 jne 0x12907712 */
  if (!C.zf) goto L_12907712;
  /* 129076f8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 129076ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907702 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907705 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12907708 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1290770f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12907712:;
  /* 12907712 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907716 jl 0x1290772b */
  if ((C.sf!=C.of)) goto L_1290772b;
  /* 12907718 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290771b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1290771d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12907720 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907723 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907726 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12907729 jmp 0x12907712 */
  goto L_12907712;
L_1290772b:;
  /* 1290772b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290772e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907731 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12907735 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12907738 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290773b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1290773d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907740 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12907743 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12907746 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12907749 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290774c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1290774f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907753 jle 0x1290775c */
  if ((C.zf||C.sf!=C.of)) goto L_1290775c;
  /* 12907755 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1290775c:;
  /* 1290775c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290775f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907762 je 0x12907980 */
  if (C.zf) goto L_12907980;
  /* 12907768 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290776b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290776e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12907771 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907774 jne 0x1290784a */
  if (!C.zf) goto L_1290784a;
  /* 1290777a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290777e jge 0x129077df */
  if ((C.sf==C.of)) goto L_129077df;
  /* 12907780 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12907785 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907788 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1290778a not eax */
  EAX = (~(EAX));
  /* 1290778c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290778f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907792 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12907796 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12907798 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290779b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1290779e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 129077a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129077a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129077a8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 129077ab sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129077ae mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129077b1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129077b4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 129077b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129077ba add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129077bd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 129077c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129077c3 jne 0x129077dd */
  if (!C.zf) goto L_129077dd;
  /* 129077c5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129077ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129077cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129077cf not eax */
  EAX = (~(EAX));
  /* 129077d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129077d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129077d6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129077d8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129077db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129077dd:;
  /* 129077dd jmp 0x1290784a */
  goto L_1290784a;
L_129077df:;
  /* 129077df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129077e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129077e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129077ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129077ec not edx */
  EDX = (~(EDX));
  /* 129077ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129077f1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129077f4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 129077fb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129077fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907800 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907803 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1290780a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1290780d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907810 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12907813 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12907816 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907819 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290781c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1290781f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907822 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907825 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12907829 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290782b jne 0x1290784a */
  if (!C.zf) goto L_1290784a;
  /* 1290782d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907830 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907833 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907838 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1290783a not edx */
  EDX = (~(EDX));
  /* 1290783c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290783f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12907842 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12907844 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907847 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1290784a:;
  /* 1290784a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290784d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12907850 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907853 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12907856 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12907859 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290785c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1290785f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907862 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12907865 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12907868 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290786c je 0x12907980 */
  if (C.zf) goto L_12907980;
  /* 12907872 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907875 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907878 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1290787b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290787e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907881 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12907884 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12907887 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1290788a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290788d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12907890 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12907893 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12907896 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907899 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1290789c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290789f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129078a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129078a5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 129078a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129078ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129078ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 129078b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129078b4 jne 0x12907980 */
  if (!C.zf) goto L_12907980;
  /* 129078ba cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129078be jge 0x1290791a */
  if ((C.sf==C.of)) goto L_1290791a;
  /* 129078c0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 129078c3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129078c6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 129078ca mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129078cd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129078d0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 129078d3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 129078d5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129078d8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129078db mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 129078de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129078e0 jne 0x129078f8 */
  if (!C.zf) goto L_129078f8;
  /* 129078e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129078e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129078ea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129078ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129078ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129078f1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129078f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129078f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_129078f8:;
  /* 129078f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129078fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907900 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907902 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907905 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907908 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1290790c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1290790e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907911 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907914 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12907918 jmp 0x12907980 */
  goto L_12907980;
L_1290791a:;
  /* 1290791a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1290791d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907920 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12907924 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907927 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290792a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1290792d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1290792f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907932 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907935 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12907938 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290793a jne 0x12907957 */
  if (!C.zf) goto L_12907957;
  /* 1290793c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290793f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907942 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12907947 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12907949 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290794c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1290794f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12907951 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907954 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12907957:;
  /* 12907957 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290795a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290795d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907962 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907964 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907967 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1290796a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12907971 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12907973 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907976 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12907979 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12907980:;
  /* 12907980 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907984 je 0x1290799a */
  if (C.zf) goto L_1290799a;
  /* 12907986 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907989 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290798c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1290798e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907991 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907994 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12907997 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1290799a:;
  /* 1290799a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290799d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129079a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129079a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129079a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129079a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129079ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129079ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129079b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129079b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129079b7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129079ba mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 129079bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129079c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129079c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129079c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129079c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129079ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129079cd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129079cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129079d1 jne 0x129079f3 */
  if (!C.zf) goto L_129079f3;
  /* 129079d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129079d6 cmp eax, dword ptr [0x1292fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129079dc jne 0x129079f3 */
  if (!C.zf) goto L_129079f3;
  /* 129079de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129079e1 cmp ecx, dword ptr [0x1292fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129079e7 jne 0x129079f3 */
  if (!C.zf) goto L_129079f3;
  /* 129079e9 mov dword ptr [0x1292fe20], 0 */
  w32((uint32_t)(0x1292fe20), (0x0u));
L_129079f3:;
  /* 129079f3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129079f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129079f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129079fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129079fe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12907a01:;
  /* 12907a01 pop esi */
  ESI = (pop32());
  /* 12907a02 mov esp, ebp */
  ESP = (EBP);
  /* 12907a04 pop ebp */
  EBP = (pop32());
  /* 12907a05 ret  */
  ESPCHK(0x129074d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a10 @ 0x12907a10 (271 bytes, 78 insns) */
void f_12907a10(void) {
  FTRACE(0x12907a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12907a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12907a11 mov ebp, esp */
  EBP = (ESP);
  /* 12907a13 push ecx */
  push32((uint32_t)(ECX));
  /* 12907a14 mov eax, dword ptr [0x1292fe24] */
  EAX = (r32((uint32_t)(0x1292fe24)));
  /* 12907a19 cmp eax, dword ptr [0x1292fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907a1f jne 0x12907a6b */
  if (!C.zf) goto L_12907a6b;
  /* 12907a21 mov ecx, dword ptr [0x1292fe08] */
  ECX = (r32((uint32_t)(0x1292fe08)));
  /* 12907a27 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907a2a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12907a2d push ecx */
  push32((uint32_t)(ECX));
  /* 12907a2e mov edx, dword ptr [0x1292fe28] */
  EDX = (r32((uint32_t)(0x1292fe28)));
  /* 12907a34 push edx */
  push32((uint32_t)(EDX));
  /* 12907a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12907a37 mov eax, dword ptr [0x1292fe2c] */
  EAX = (r32((uint32_t)(0x1292fe2c)));
  /* 12907a3c push eax */
  push32((uint32_t)(EAX));
  /* 12907a3d call dword ptr [0x129302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302cc))), 0x12907a43u);
  /* 12907a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12907a46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907a4a jne 0x12907a53 */
  if (!C.zf) goto L_12907a53;
  /* 12907a4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12907a4e jmp 0x12907b1b */
  goto L_12907b1b;
L_12907a53:;
  /* 12907a53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907a56 mov dword ptr [0x1292fe28], ecx */
  w32((uint32_t)(0x1292fe28), (ECX));
  /* 12907a5c mov edx, dword ptr [0x1292fe08] */
  EDX = (r32((uint32_t)(0x1292fe08)));
  /* 12907a62 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907a65 mov dword ptr [0x1292fe08], edx */
  w32((uint32_t)(0x1292fe08), (EDX));
L_12907a6b:;
  /* 12907a6b mov eax, dword ptr [0x1292fe24] */
  EAX = (r32((uint32_t)(0x1292fe24)));
  /* 12907a70 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12907a73 mov ecx, dword ptr [0x1292fe28] */
  ECX = (r32((uint32_t)(0x1292fe28)));
  /* 12907a79 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907a7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12907a7e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12907a83 push 8 */
  push32((uint32_t)(0x8u));
  /* 12907a85 mov edx, dword ptr [0x1292fe2c] */
  EDX = (r32((uint32_t)(0x1292fe2c)));
  /* 12907a8b push edx */
  push32((uint32_t)(EDX));
  /* 12907a8c call dword ptr [0x12930304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930304))), 0x12907a92u);
  /* 12907a92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907a95 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12907a98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907a9b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907a9f jne 0x12907aa5 */
  if (!C.zf) goto L_12907aa5;
  /* 12907aa1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12907aa3 jmp 0x12907b1b */
  goto L_12907b1b;
L_12907aa5:;
  /* 12907aa5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12907aa7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12907aac push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12907ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12907ab3 call dword ptr [0x1293030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293030c))), 0x12907ab9u);
  /* 12907ab9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907abc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12907abf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907ac2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907ac6 jne 0x12907ae2 */
  if (!C.zf) goto L_12907ae2;
  /* 12907ac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907acb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12907ace push ecx */
  push32((uint32_t)(ECX));
  /* 12907acf push 0 */
  push32((uint32_t)(0x0u));
  /* 12907ad1 mov edx, dword ptr [0x1292fe2c] */
  EDX = (r32((uint32_t)(0x1292fe2c)));
  /* 12907ad7 push edx */
  push32((uint32_t)(EDX));
  /* 12907ad8 call dword ptr [0x129302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e4))), 0x12907adeu);
  /* 12907ade xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12907ae0 jmp 0x12907b1b */
  goto L_12907b1b;
L_12907ae2:;
  /* 12907ae2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907ae5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12907aeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907aee mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12907af5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907af8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12907aff mov eax, dword ptr [0x1292fe24] */
  EAX = (r32((uint32_t)(0x1292fe24)));
  /* 12907b04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907b07 mov dword ptr [0x1292fe24], eax */
  w32((uint32_t)(0x1292fe24), (EAX));
  /* 12907b0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907b0f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12907b12 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12907b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12907b1b:;
  /* 12907b1b mov esp, ebp */
  ESP = (EBP);
  /* 12907b1d pop ebp */
  EBP = (pop32());
  /* 12907b1e ret  */
  ESPCHK(0x12907a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b20 @ 0x12907b20 (494 bytes, 149 insns) */
void f_12907b20(void) {
  FTRACE(0x12907b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12907b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12907b21 mov ebp, esp */
  EBP = (ESP);
  /* 12907b23 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907b29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12907b2c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12907b2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907b32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12907b35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12907b38 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12907b3f:;
  /* 12907b3f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907b43 jl 0x12907b58 */
  if ((C.sf!=C.of)) goto L_12907b58;
  /* 12907b45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12907b48 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12907b4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12907b4d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12907b50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907b53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12907b56 jmp 0x12907b3f */
  goto L_12907b3f;
L_12907b58:;
  /* 12907b58 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12907b5b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12907b61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907b64 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12907b6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12907b6e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12907b75 jmp 0x12907b80 */
  goto L_12907b80;
L_12907b77:;
  /* 12907b77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907b7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907b7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12907b80:;
  /* 12907b80 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907b84 jge 0x12907ba6 */
  if ((C.sf==C.of)) goto L_12907ba6;
  /* 12907b86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907b89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12907b8c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12907b8f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12907b92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907b95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907b98 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12907b9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907b9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907ba1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12907ba4 jmp 0x12907b77 */
  goto L_12907b77;
L_12907ba6:;
  /* 12907ba6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12907ba9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12907bac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907baf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12907bb2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907bb4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12907bb7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12907bb9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12907bbe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12907bc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907bc6 push edx */
  push32((uint32_t)(EDX));
  /* 12907bc7 call dword ptr [0x1293030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293030c))), 0x12907bcdu);
  /* 12907bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12907bcf jne 0x12907bd9 */
  if (!C.zf) goto L_12907bd9;
  /* 12907bd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12907bd4 jmp 0x12907d0a */
  goto L_12907d0a;
L_12907bd9:;
  /* 12907bd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907bdc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907be1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12907be4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907be7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12907bea jmp 0x12907bf8 */
  goto L_12907bf8;
L_12907bec:;
  /* 12907bec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907bef add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907bf5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12907bf8:;
  /* 12907bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907bfb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907bfe ja 0x12907c5d */
  if ((!C.cf&&!C.zf)) goto L_12907c5d;
  /* 12907c00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907c03 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12907c0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907c0d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12907c17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907c1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907c1d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12907c20 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907c23 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12907c29 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907c2c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907c32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907c35 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12907c38 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907c3b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907c41 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907c44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12907c47 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907c4a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907c4f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12907c52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12907c55 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12907c5b jmp 0x12907bec */
  goto L_12907bec;
L_12907c5d:;
  /* 12907c5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12907c60 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907c66 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12907c69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907c6c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907c6f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907c72 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12907c75 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907c78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12907c7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12907c7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907c81 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907c84 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12907c87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12907c8a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907c8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907c90 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12907c93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907c96 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12907c99 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12907c9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907c9f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907ca2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12907ca5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12907ca8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907cab mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12907cb3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12907cb6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907cb9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12907cc4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907cc7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12907ccb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907cce mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12907cd1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12907cd4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907cd7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12907cda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12907cdc jne 0x12907ced */
  if (!C.zf) goto L_12907ced;
  /* 12907cde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907ce1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12907ce4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12907ce7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907cea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12907ced:;
  /* 12907ced mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907cf2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12907cf5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907cf7 not edx */
  EDX = (~(EDX));
  /* 12907cf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907cfc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12907cff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12907d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907d04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12907d07 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12907d0a:;
  /* 12907d0a mov esp, ebp */
  ESP = (EBP);
  /* 12907d0c pop ebp */
  EBP = (pop32());
  /* 12907d0d ret  */
  ESPCHK(0x12907b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d10 @ 0x12907d10 (1515 bytes, 489 insns) */
void f_12907d10(void) {
  FTRACE(0x12907d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12907d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12907d11 mov ebp, esp */
  EBP = (ESP);
  /* 12907d13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907d16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12907d19 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907d1c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12907d1e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12907d21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907d24 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12907d27 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12907d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907d2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12907d30 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907d33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12907d36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12907d39 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12907d3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12907d3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907d42 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12907d48 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907d4b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12907d52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12907d55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12907d58 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907d5b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12907d5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907d61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12907d63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907d66 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12907d69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907d6c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907d6f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12907d72 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907d75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12907d77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12907d7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12907d7d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907d80 jle 0x12908036 */
  if ((C.zf||C.sf!=C.of)) goto L_12908036;
  /* 12907d86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907d89 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12907d8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12907d8e jne 0x12907d9b */
  if (!C.zf) goto L_12907d9b;
  /* 12907d90 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12907d93 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907d96 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907d99 jle 0x12907da2 */
  if ((C.zf||C.sf!=C.of)) goto L_12907da2;
L_12907d9b:;
  /* 12907d9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12907d9d jmp 0x129082f7 */
  goto L_129082f7;
L_12907da2:;
  /* 12907da2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907da5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12907da8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907dab mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12907dae cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907db2 jbe 0x12907dbb */
  if ((C.cf||C.zf)) goto L_12907dbb;
  /* 12907db4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12907dbb:;
  /* 12907dbb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907dbe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907dc1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12907dc4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907dc7 jne 0x12907e9d */
  if (!C.zf) goto L_12907e9d;
  /* 12907dcd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907dd1 jae 0x12907e32 */
  if (!C.cf) goto L_12907e32;
  /* 12907dd3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907dd8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907ddb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907ddd not edx */
  EDX = (~(EDX));
  /* 12907ddf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907de2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907de5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12907de9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12907deb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907dee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907df1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12907df5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907df8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907dfb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12907dfe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12907e01 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907e04 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907e07 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12907e0a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907e0d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907e10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12907e14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12907e16 jne 0x12907e30 */
  if (!C.zf) goto L_12907e30;
  /* 12907e18 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907e1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907e20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907e22 not edx */
  EDX = (~(EDX));
  /* 12907e24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907e27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12907e29 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12907e2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907e2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12907e30:;
  /* 12907e30 jmp 0x12907e9d */
  goto L_12907e9d;
L_12907e32:;
  /* 12907e32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907e35 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907e38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12907e3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12907e3f not eax */
  EAX = (~(EAX));
  /* 12907e41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907e44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907e47 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12907e4e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12907e50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907e53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907e56 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12907e5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907e60 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907e63 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12907e66 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12907e69 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907e6c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907e6f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12907e72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907e75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907e78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12907e7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12907e7e jne 0x12907e9d */
  if (!C.zf) goto L_12907e9d;
  /* 12907e80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907e83 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907e86 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12907e8b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12907e8d not eax */
  EAX = (~(EAX));
  /* 12907e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907e92 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12907e95 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12907e97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907e9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12907e9d:;
  /* 12907e9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907ea0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12907ea3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907ea6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12907ea9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12907eac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907eaf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12907eb2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907eb5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12907eb8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12907ebb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12907ebe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907ec1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907ec4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12907ec7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907ecb jle 0x12908017 */
  if ((C.zf||C.sf!=C.of)) goto L_12908017;
  /* 12907ed1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12907ed4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907ed7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12907eda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12907edd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12907ee0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907ee3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12907ee6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907eea jbe 0x12907ef3 */
  if ((C.cf||C.zf)) goto L_12907ef3;
  /* 12907eec mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12907ef3:;
  /* 12907ef3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907ef6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12907ef9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12907efc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12907eff mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907f02 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907f05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12907f08 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12907f0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907f0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907f11 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12907f14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12907f17 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907f1a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12907f1d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907f20 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12907f23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907f26 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12907f29 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907f2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12907f2f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12907f32 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907f35 jne 0x12908003 */
  if (!C.zf) goto L_12908003;
  /* 12907f3b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12907f3f jae 0x12907f9c */
  if (!C.cf) goto L_12907f9c;
  /* 12907f41 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907f44 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907f47 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12907f4b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907f4e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907f51 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12907f54 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12907f57 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907f5a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907f5d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12907f60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12907f62 jne 0x12907f7a */
  if (!C.zf) goto L_12907f7a;
  /* 12907f64 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907f69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907f6c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907f6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907f71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12907f73 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12907f75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907f78 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12907f7a:;
  /* 12907f7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12907f7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907f82 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12907f84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907f87 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907f8a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12907f8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12907f90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907f93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907f96 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12907f9a jmp 0x12908003 */
  goto L_12908003;
L_12907f9c:;
  /* 12907f9c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907f9f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907fa2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12907fa6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907fa9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907fac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12907faf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12907fb2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907fb5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12907fb8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12907fbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12907fbd jne 0x12907fda */
  if (!C.zf) goto L_12907fda;
  /* 12907fbf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907fc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907fc5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12907fca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12907fcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907fcf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12907fd2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12907fd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12907fd7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12907fda:;
  /* 12907fda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12907fdd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12907fe0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12907fe5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12907fe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907fea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907fed mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12907ff4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12907ff6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12907ff9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12907ffc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12908003:;
  /* 12908003 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12908006 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12908009 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1290800b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290800e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908011 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12908014 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12908017:;
  /* 12908017 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290801a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290801d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12908020 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12908022 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12908025 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908028 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290802b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290802e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12908031 jmp 0x129082f2 */
  goto L_129082f2;
L_12908036:;
  /* 12908036 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12908039 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290803c jge 0x129082f2 */
  if ((C.sf==C.of)) goto L_129082f2;
  /* 12908042 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12908045 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908048 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290804b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1290804d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12908050 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908053 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12908056 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908059 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1290805c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290805f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908062 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12908065 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12908068 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290806b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1290806e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12908071 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12908074 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908077 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1290807a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290807e jbe 0x12908087 */
  if ((C.cf||C.zf)) goto L_12908087;
  /* 12908080 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12908087:;
  /* 12908087 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290808a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1290808d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290808f jne 0x129081d0 */
  if (!C.zf) goto L_129081d0;
  /* 12908095 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12908098 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1290809b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290809e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 129080a1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129080a5 jbe 0x129080ae */
  if ((C.cf||C.zf)) goto L_129080ae;
  /* 129080a7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_129080ae:;
  /* 129080ae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129080b1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129080b4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 129080b7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129080ba jne 0x12908190 */
  if (!C.zf) goto L_12908190;
  /* 129080c0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129080c4 jae 0x12908125 */
  if (!C.cf) goto L_12908125;
  /* 129080c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129080cb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129080ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129080d0 not edx */
  EDX = (~(EDX));
  /* 129080d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129080d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129080d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 129080dc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129080de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129080e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129080e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 129080e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129080eb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129080ee mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 129080f1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129080f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129080f7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129080fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 129080fd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908100 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908103 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12908107 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12908109 jne 0x12908123 */
  if (!C.zf) goto L_12908123;
  /* 1290810b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12908110 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12908113 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12908115 not edx */
  EDX = (~(EDX));
  /* 12908117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290811a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290811c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1290811e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908121 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12908123:;
  /* 12908123 jmp 0x12908190 */
  goto L_12908190;
L_12908125:;
  /* 12908125 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12908128 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290812b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12908130 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12908132 not eax */
  EAX = (~(EAX));
  /* 12908134 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908137 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290813a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12908141 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12908143 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908146 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908149 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12908150 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908153 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908156 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12908159 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1290815c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290815f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908162 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12908165 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908168 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290816b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1290816f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12908171 jne 0x12908190 */
  if (!C.zf) goto L_12908190;
  /* 12908173 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12908176 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908179 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1290817e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12908180 not eax */
  EAX = (~(EAX));
  /* 12908182 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908185 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12908188 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1290818a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290818d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12908190:;
  /* 12908190 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12908193 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12908196 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12908199 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1290819c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1290819f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129081a2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129081a5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129081a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129081ab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 129081ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129081b1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129081b4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 129081b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129081ba sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 129081bd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129081c0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 129081c3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129081c7 jbe 0x129081d0 */
  if ((C.cf||C.zf)) goto L_129081d0;
  /* 129081c9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_129081d0:;
  /* 129081d0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129081d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129081d6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 129081d9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129081dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129081df mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129081e2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129081e5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129081e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129081eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129081ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 129081f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129081f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129081f7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 129081fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129081fd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12908200 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12908203 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12908206 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12908209 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290820c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1290820f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908212 jne 0x129082de */
  if (!C.zf) goto L_129082de;
  /* 12908218 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290821c jae 0x12908278 */
  if (!C.cf) goto L_12908278;
  /* 1290821e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908221 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908224 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12908228 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290822b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290822e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12908231 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12908233 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908236 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908239 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1290823c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290823e jne 0x12908256 */
  if (!C.zf) goto L_12908256;
  /* 12908240 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12908245 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908248 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1290824a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290824d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290824f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12908251 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908254 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12908256:;
  /* 12908256 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1290825b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290825e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12908260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908263 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908266 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1290826a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1290826c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290826f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908272 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12908276 jmp 0x129082de */
  goto L_129082de;
L_12908278:;
  /* 12908278 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290827b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290827e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12908282 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908285 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908288 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1290828b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1290828d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12908290 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908293 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12908296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12908298 jne 0x129082b5 */
  if (!C.zf) goto L_129082b5;
  /* 1290829a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290829d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129082a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129082a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129082a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129082aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129082ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129082af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129082b2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129082b5:;
  /* 129082b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129082b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129082bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129082c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129082c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129082c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129082c8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 129082cf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129082d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129082d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129082d7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_129082de:;
  /* 129082de mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129082e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 129082e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129082e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129082e9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129082ec mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129082ef mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_129082f2:;
  /* 129082f2 mov eax, 1 */
  EAX = (0x1u);
L_129082f7:;
  /* 129082f7 mov esp, ebp */
  ESP = (EBP);
  /* 129082f9 pop ebp */
  EBP = (pop32());
  /* 129082fa ret  */
  ESPCHK(0x12907d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008300 @ 0x12908300 (304 bytes, 79 insns) */
void f_12908300(void) {
  FTRACE(0x12908300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12908300 push ebp */
  push32((uint32_t)(EBP));
  /* 12908301 mov ebp, esp */
  EBP = (ESP);
  /* 12908303 push ecx */
  push32((uint32_t)(ECX));
  /* 12908304 cmp dword ptr [0x1292fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290830b je 0x1290842c */
  if (C.zf) goto L_1290842c;
  /* 12908311 mov eax, dword ptr [0x1292fe18] */
  EAX = (r32((uint32_t)(0x1292fe18)));
  /* 12908316 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12908319 mov ecx, dword ptr [0x1292fe20] */
  ECX = (r32((uint32_t)(0x1292fe20)));
  /* 1290831f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12908322 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908324 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12908327 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1290832c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12908331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908334 push eax */
  push32((uint32_t)(EAX));
  /* 12908335 call dword ptr [0x129302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e8))), 0x1290833bu);
  /* 1290833b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12908340 mov ecx, dword ptr [0x1292fe18] */
  ECX = (r32((uint32_t)(0x1292fe18)));
  /* 12908346 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12908348 mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 1290834d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12908350 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12908352 mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 12908358 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1290835b mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 12908360 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12908363 mov edx, dword ptr [0x1292fe18] */
  EDX = (r32((uint32_t)(0x1292fe18)));
  /* 12908369 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12908374 mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 12908379 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1290837c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1290837f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12908382 mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 12908387 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1290838a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1290838d mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 12908393 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12908396 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1290839a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290839c jne 0x129083b2 */
  if (!C.zf) goto L_129083b2;
  /* 1290839e mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 129083a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129083a7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 129083a9 mov ecx, dword ptr [0x1292fe20] */
  ECX = (r32((uint32_t)(0x1292fe20)));
  /* 129083af mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_129083b2:;
  /* 129083b2 mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 129083b8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129083bc jne 0x12908422 */
  if (!C.zf) goto L_12908422;
  /* 129083be cmp dword ptr [0x1292fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129083c5 jle 0x12908422 */
  if ((C.zf||C.sf!=C.of)) goto L_12908422;
  /* 129083c7 mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 129083cc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129083cf push ecx */
  push32((uint32_t)(ECX));
  /* 129083d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129083d2 mov edx, dword ptr [0x1292fe2c] */
  EDX = (r32((uint32_t)(0x1292fe2c)));
  /* 129083d8 push edx */
  push32((uint32_t)(EDX));
  /* 129083d9 call dword ptr [0x129302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302e4))), 0x129083dfu);
  /* 129083df mov eax, dword ptr [0x1292fe24] */
  EAX = (r32((uint32_t)(0x1292fe24)));
  /* 129083e4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129083e7 mov ecx, dword ptr [0x1292fe28] */
  ECX = (r32((uint32_t)(0x1292fe28)));
  /* 129083ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129083ef mov edx, dword ptr [0x1292fe20] */
  EDX = (r32((uint32_t)(0x1292fe20)));
  /* 129083f5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129083f8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129083fa push ecx */
  push32((uint32_t)(ECX));
  /* 129083fb mov eax, dword ptr [0x1292fe20] */
  EAX = (r32((uint32_t)(0x1292fe20)));
  /* 12908400 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908403 push eax */
  push32((uint32_t)(EAX));
  /* 12908404 mov ecx, dword ptr [0x1292fe20] */
  ECX = (r32((uint32_t)(0x1292fe20)));
  /* 1290840a push ecx */
  push32((uint32_t)(ECX));
  /* 1290840b call 0x1290aa30 */
  push32(0x12908410u); f_1290aa30();
  /* 12908410 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908413 mov edx, dword ptr [0x1292fe24] */
  EDX = (r32((uint32_t)(0x1292fe24)));
  /* 12908419 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290841c mov dword ptr [0x1292fe24], edx */
  w32((uint32_t)(0x1292fe24), (EDX));
L_12908422:;
  /* 12908422 mov dword ptr [0x1292fe20], 0 */
  w32((uint32_t)(0x1292fe20), (0x0u));
L_1290842c:;
  /* 1290842c mov esp, ebp */
  ESP = (EBP);
  /* 1290842e pop ebp */
  EBP = (pop32());
  /* 1290842f ret  */
  ESPCHK(0x12908300u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x12908430 (1565 bytes, 343 insns) */
void f_12908430(void) {
  FTRACE(0x12908430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12908430 push ebp */
  push32((uint32_t)(EBP));
  /* 12908431 mov ebp, esp */
  EBP = (ESP);
  /* 12908433 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908439 mov eax, dword ptr [0x1292fe24] */
  EAX = (r32((uint32_t)(0x1292fe24)));
  /* 1290843e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12908441 push eax */
  push32((uint32_t)(EAX));
  /* 12908442 mov ecx, dword ptr [0x1292fe28] */
  ECX = (r32((uint32_t)(0x1292fe28)));
  /* 12908448 push ecx */
  push32((uint32_t)(ECX));
  /* 12908449 call dword ptr [0x129302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302bc))), 0x1290844fu);
  /* 1290844f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12908451 je 0x1290845b */
  if (C.zf) goto L_1290845b;
  /* 12908453 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12908456 jmp 0x12908a49 */
  goto L_12908a49;
L_1290845b:;
  /* 1290845b mov edx, dword ptr [0x1292fe28] */
  EDX = (r32((uint32_t)(0x1292fe28)));
  /* 12908461 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12908467 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12908471 jmp 0x12908482 */
  goto L_12908482;
L_12908473:;
  /* 12908473 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12908479 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290847c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12908482:;
  /* 12908482 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12908488 cmp ecx, dword ptr [0x1292fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290848e jge 0x12908a47 */
  if ((C.sf==C.of)) goto L_12908a47;
  /* 12908494 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1290849a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1290849d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 129084a3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 129084a8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 129084ae push ecx */
  push32((uint32_t)(ECX));
  /* 129084af call dword ptr [0x129302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302bc))), 0x129084b5u);
  /* 129084b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129084b7 je 0x129084c3 */
  if (C.zf) goto L_129084c3;
  /* 129084b9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 129084be jmp 0x12908a49 */
  goto L_12908a49;
L_129084c3:;
  /* 129084c3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129084c9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129084cc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 129084d2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 129084d8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129084de mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129084e1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129084e7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129084ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129084ed mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 129084f7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12908501 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12908508 jmp 0x12908513 */
  goto L_12908513;
L_1290850a:;
  /* 1290850a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290850d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908510 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12908513:;
  /* 12908513 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908517 jge 0x12908a0b */
  if ((C.sf==C.of)) goto L_12908a0b;
  /* 1290851d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12908527 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12908531 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1290853b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12908545 jmp 0x12908556 */
  goto L_12908556;
L_12908547:;
  /* 12908547 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1290854d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908550 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12908556:;
  /* 12908556 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290855d jge 0x12908572 */
  if ((C.sf==C.of)) goto L_12908572;
  /* 1290855f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12908565 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12908570 jmp 0x12908547 */
  goto L_12908547;
L_12908572:;
  /* 12908572 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908576 jl 0x129089ad */
  if ((C.sf!=C.of)) goto L_129089ad;
  /* 1290857c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12908581 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12908587 push ecx */
  push32((uint32_t)(ECX));
  /* 12908588 call dword ptr [0x129302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302bc))), 0x1290858eu);
  /* 1290858e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12908590 je 0x1290859c */
  if (C.zf) goto L_1290859c;
  /* 12908592 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12908597 jmp 0x12908a49 */
  goto L_12908a49;
L_1290859c:;
  /* 1290859c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 129085a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 129085a5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 129085af jmp 0x129085c0 */
  goto L_129085c0;
L_129085b1:;
  /* 129085b1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 129085b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129085ba mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_129085c0:;
  /* 129085c0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129085c7 jge 0x12908744 */
  if ((C.sf==C.of)) goto L_12908744;
  /* 129085cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129085d0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129085d3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 129085d9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 129085df add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129085e5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 129085eb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 129085f1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129085f5 jne 0x12908602 */
  if (!C.zf) goto L_12908602;
  /* 129085f7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 129085fd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908600 je 0x1290860c */
  if (C.zf) goto L_1290860c;
L_12908602:;
  /* 12908602 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12908607 jmp 0x12908a49 */
  goto L_12908a49;
L_1290860c:;
  /* 1290860c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12908612 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12908614 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1290861a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12908620 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12908626 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1290862c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1290862f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12908631 je 0x12908669 */
  if (C.zf) goto L_12908669;
  /* 12908633 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12908639 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290863c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12908642 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290864c jle 0x12908658 */
  if ((C.zf||C.sf!=C.of)) goto L_12908658;
  /* 1290864e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12908653 jmp 0x12908a49 */
  goto L_12908a49;
L_12908658:;
  /* 12908658 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1290865e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908661 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12908667 jmp 0x129086ab */
  goto L_129086ab;
L_12908669:;
  /* 12908669 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1290866f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12908672 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908675 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1290867b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908682 jle 0x1290868e */
  if ((C.zf||C.sf!=C.of)) goto L_1290868e;
  /* 12908684 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1290868e:;
  /* 1290868e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12908694 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1290869b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290869e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129086a4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_129086ab:;
  /* 129086ab cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129086b2 jl 0x129086cd */
  if ((C.sf!=C.of)) goto L_129086cd;
  /* 129086b4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 129086ba and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 129086bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129086bf jne 0x129086cd */
  if (!C.zf) goto L_129086cd;
  /* 129086c1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129086cb jle 0x129086d7 */
  if ((C.zf||C.sf!=C.of)) goto L_129086d7;
L_129086cd:;
  /* 129086cd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 129086d2 jmp 0x12908a49 */
  goto L_12908a49;
L_129086d7:;
  /* 129086d7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 129086dd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129086e3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 129086e6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129086ec je 0x129086f8 */
  if (C.zf) goto L_129086f8;
  /* 129086ee mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 129086f3 jmp 0x12908a49 */
  goto L_12908a49;
L_129086f8:;
  /* 129086f8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 129086fe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908704 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1290870a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12908710 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908716 jb 0x1290860c */
  if (C.cf) goto L_1290860c;
  /* 1290871c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12908722 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908728 je 0x12908734 */
  if (C.zf) goto L_12908734;
  /* 1290872a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1290872f jmp 0x12908a49 */
  goto L_12908a49;
L_12908734:;
  /* 12908734 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12908737 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290873c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290873f jmp 0x129085b1 */
  goto L_129085b1;
L_12908744:;
  /* 12908744 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12908747 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12908749 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290874f je 0x1290875b */
  if (C.zf) goto L_1290875b;
  /* 12908751 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12908756 jmp 0x12908a49 */
  goto L_12908a49;
L_1290875b:;
  /* 1290875b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290875e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12908764 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1290876b jmp 0x12908776 */
  goto L_12908776;
L_1290876d:;
  /* 1290876d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12908770 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908773 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12908776:;
  /* 12908776 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290877a jge 0x129089ad */
  if ((C.sf==C.of)) goto L_129089ad;
  /* 12908780 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1290878a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12908790 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12908796:;
  /* 12908796 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1290879c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1290879f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 129087a5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129087ab cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129087b1 je 0x129088da */
  if (C.zf) goto L_129088da;
  /* 129087b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129087ba mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 129087c0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129087c7 je 0x129088da */
  if (C.zf) goto L_129088da;
  /* 129087cd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129087d3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129087d9 jb 0x129087ee */
  if (C.cf) goto L_129087ee;
  /* 129087db mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 129087e1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129087e6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129087ec jb 0x129087f8 */
  if (C.cf) goto L_129087f8;
L_129087ee:;
  /* 129087ee mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 129087f3 jmp 0x12908a49 */
  goto L_12908a49;
L_129087f8:;
  /* 129087f8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129087fe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12908804 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1290880a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12908810 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908813 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12908816 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12908819 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290881e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12908824:;
  /* 12908824 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12908827 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290882d je 0x1290884e */
  if (C.zf) goto L_1290884e;
  /* 1290882f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12908832 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908838 jne 0x1290883c */
  if (!C.zf) goto L_1290883c;
  /* 1290883a jmp 0x1290884e */
  goto L_1290884e;
L_1290883c:;
  /* 1290883c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290883f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12908841 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12908844 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12908847 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908849 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1290884c jmp 0x12908824 */
  goto L_12908824;
L_1290884e:;
  /* 1290884e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12908851 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908857 jne 0x12908863 */
  if (!C.zf) goto L_12908863;
  /* 12908859 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1290885e jmp 0x12908a49 */
  goto L_12908a49;
L_12908863:;
  /* 12908863 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12908869 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290886b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1290886e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908871 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12908877 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290887e jle 0x1290888a */
  if ((C.zf||C.sf!=C.of)) goto L_1290888a;
  /* 12908880 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1290888a:;
  /* 1290888a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12908890 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908893 je 0x1290889f */
  if (C.zf) goto L_1290889f;
  /* 12908895 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1290889a jmp 0x12908a49 */
  goto L_12908a49;
L_1290889f:;
  /* 1290889f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129088a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129088a8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129088ae je 0x129088ba */
  if (C.zf) goto L_129088ba;
  /* 129088b0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 129088b5 jmp 0x12908a49 */
  goto L_12908a49;
L_129088ba:;
  /* 129088ba mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129088c0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 129088c6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 129088cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129088cf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 129088d5 jmp 0x12908796 */
  goto L_12908796;
L_129088da:;
  /* 129088da cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129088e1 je 0x12908951 */
  if (C.zf) goto L_12908951;
  /* 129088e3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129088e7 jge 0x1290891b */
  if ((C.sf==C.of)) goto L_1290891b;
  /* 129088e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129088ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129088f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129088f3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 129088f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129088fb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12908901 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12908906 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12908909 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1290890b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12908911 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12908913 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12908919 jmp 0x12908951 */
  goto L_12908951;
L_1290891b:;
  /* 1290891b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290891e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908921 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12908926 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12908928 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1290892e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12908930 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12908936 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12908939 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290893c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12908941 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12908943 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12908949 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1290894b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12908951:;
  /* 12908951 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12908957 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1290895a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908960 jne 0x12908974 */
  if (!C.zf) goto L_12908974;
  /* 12908962 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12908965 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1290896b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908972 je 0x1290897e */
  if (C.zf) goto L_1290897e;
L_12908974:;
  /* 12908974 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12908979 jmp 0x12908a49 */
  goto L_12908a49;
L_1290897e:;
  /* 1290897e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12908984 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12908987 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290898d je 0x12908999 */
  if (C.zf) goto L_12908999;
  /* 1290898f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12908994 jmp 0x12908a49 */
  goto L_12908a49;
L_12908999:;
  /* 12908999 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1290899f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129089a2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 129089a8 jmp 0x1290876d */
  goto L_1290876d;
L_129089ad:;
  /* 129089ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129089b0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 129089b6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 129089bc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129089c0 jne 0x129089da */
  if (!C.zf) goto L_129089da;
  /* 129089c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129089c5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 129089cb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 129089d1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129089d8 je 0x129089e1 */
  if (C.zf) goto L_129089e1;
L_129089da:;
  /* 129089da mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 129089df jmp 0x12908a49 */
  goto L_12908a49;
L_129089e1:;
  /* 129089e1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 129089e7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129089ed mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 129089f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129089f6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129089fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129089fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908a01 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12908a03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12908a06 jmp 0x1290850a */
  goto L_1290850a;
L_12908a0b:;
  /* 12908a0b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12908a11 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12908a17 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908a19 jne 0x12908a2c */
  if (!C.zf) goto L_12908a2c;
  /* 12908a1b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12908a21 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12908a27 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908a2a je 0x12908a33 */
  if (C.zf) goto L_12908a33;
L_12908a2c:;
  /* 12908a2c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12908a31 jmp 0x12908a49 */
  goto L_12908a49;
L_12908a33:;
  /* 12908a33 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12908a39 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908a3c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12908a42 jmp 0x12908473 */
  goto L_12908473;
L_12908a47:;
  /* 12908a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12908a49:;
  /* 12908a49 mov esp, ebp */
  ESP = (EBP);
  /* 12908a4b pop ebp */
  EBP = (pop32());
  /* 12908a4c ret  */
  ESPCHK(0x12908430u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a50 @ 0x12908a50 (250 bytes, 92 insns) */
void f_12908a50(void) {
  FTRACE(0x12908a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12908a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12908a51 mov ebp, esp */
  EBP = (ESP);
  /* 12908a53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908a56 push ebx */
  push32((uint32_t)(EBX));
  /* 12908a57 push esi */
  push32((uint32_t)(ESI));
  /* 12908a58 push edi */
  push32((uint32_t)(EDI));
  /* 12908a59 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12908a5c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12908a5f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12908a62 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12908a65:;
  /* 12908a65 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908a69 jne 0x12908a89 */
  if (!C.zf) goto L_12908a89;
  /* 12908a6b push 0x12929dd8 */
  push32((uint32_t)(0x12929dd8u));
  /* 12908a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12908a72 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12908a74 push 0x12929dcc */
  push32((uint32_t)(0x12929dccu));
  /* 12908a79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12908a7b call 0x12901c00 */
  push32(0x12908a80u); f_12901c00();
  /* 12908a80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908a83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908a86 jne 0x12908a89 */
  if (!C.zf) goto L_12908a89;
  /* 12908a88 int3  */
  x86_unimpl("int3 @ 0x12908a88");
L_12908a89:;
  /* 12908a89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12908a8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12908a8d jne 0x12908a65 */
  if (!C.zf) goto L_12908a65;
L_12908a8f:;
  /* 12908a8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908a93 jne 0x12908ab3 */
  if (!C.zf) goto L_12908ab3;
  /* 12908a95 push 0x12929dbc */
  push32((uint32_t)(0x12929dbcu));
  /* 12908a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12908a9c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12908a9e push 0x12929dcc */
  push32((uint32_t)(0x12929dccu));
  /* 12908aa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12908aa5 call 0x12901c00 */
  push32(0x12908aaau); f_12901c00();
  /* 12908aaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908aad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908ab0 jne 0x12908ab3 */
  if (!C.zf) goto L_12908ab3;
  /* 12908ab2 int3  */
  x86_unimpl("int3 @ 0x12908ab2");
L_12908ab3:;
  /* 12908ab3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12908ab7 jne 0x12908a8f */
  if (!C.zf) goto L_12908a8f;
  /* 12908ab9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908abc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12908ac3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908ac9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12908acc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908acf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908ad2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12908ad4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908ad7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12908ade mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12908ae1 push ecx */
  push32((uint32_t)(ECX));
  /* 12908ae2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12908ae5 push edx */
  push32((uint32_t)(EDX));
  /* 12908ae6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908ae9 push eax */
  push32((uint32_t)(EAX));
  /* 12908aea call 0x12909ad0 */
  push32(0x12908aefu); f_12909ad0();
  /* 12908aef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908af2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12908af5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908af8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12908afb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908afe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908b01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12908b04 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908b07 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908b0b jl 0x12908b2f */
  if ((C.sf!=C.of)) goto L_12908b2f;
  /* 12908b0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908b10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12908b12 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12908b15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12908b17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12908b1d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12908b20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908b23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12908b25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908b28 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908b2b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12908b2d jmp 0x12908b40 */
  goto L_12908b40;
L_12908b2f:;
  /* 12908b2f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908b32 push edx */
  push32((uint32_t)(EDX));
  /* 12908b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12908b35 call 0x12909850 */
  push32(0x12908b3au); f_12909850();
  /* 12908b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908b3d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12908b40:;
  /* 12908b40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12908b43 pop edi */
  EDI = (pop32());
  /* 12908b44 pop esi */
  ESI = (pop32());
  /* 12908b45 pop ebx */
  EBX = (pop32());
  /* 12908b46 mov esp, ebp */
  ESP = (EBP);
  /* 12908b48 pop ebp */
  EBP = (pop32());
  /* 12908b49 ret  */
  ESPCHK(0x12908a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b50 @ 0x12908b50 (183 bytes, 58 insns) */
void f_12908b50(void) {
  FTRACE(0x12908b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12908b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12908b51 mov ebp, esp */
  EBP = (ESP);
  /* 12908b53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908b59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908b5c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908b61 ja 0x12908b7a */
  if ((!C.cf&&!C.zf)) goto L_12908b7a;
  /* 12908b63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908b66 mov edx, dword ptr [0x1292cc98] */
  EDX = (r32((uint32_t)(0x1292cc98)));
  /* 12908b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908b6e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12908b72 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12908b75 jmp 0x12908c03 */
  goto L_12908c03;
L_12908b7a:;
  /* 12908b7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908b7d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12908b80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12908b86 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12908b8c mov edx, dword ptr [0x1292cc98] */
  EDX = (r32((uint32_t)(0x1292cc98)));
  /* 12908b92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908b94 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12908b98 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12908b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12908b9f je 0x12908bc3 */
  if (C.zf) goto L_12908bc3;
  /* 12908ba1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908ba4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12908ba7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12908bad mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12908bb0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12908bb3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12908bb6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12908bba mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12908bc1 jmp 0x12908bd4 */
  goto L_12908bd4;
L_12908bc3:;
  /* 12908bc3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12908bc6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12908bc9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12908bcd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12908bd4:;
  /* 12908bd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12908bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12908bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12908bda lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12908bdd push ecx */
  push32((uint32_t)(ECX));
  /* 12908bde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12908be1 push edx */
  push32((uint32_t)(EDX));
  /* 12908be2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12908be5 push eax */
  push32((uint32_t)(EAX));
  /* 12908be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12908be8 call 0x1290ad70 */
  push32(0x12908bedu); f_1290ad70();
  /* 12908bed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12908bf2 jne 0x12908bf8 */
  if (!C.zf) goto L_12908bf8;
  /* 12908bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908bf6 jmp 0x12908c03 */
  goto L_12908c03;
L_12908bf8:;
  /* 12908bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908bfb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12908c00 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12908c03:;
  /* 12908c03 mov esp, ebp */
  ESP = (EBP);
  /* 12908c05 pop ebp */
  EBP = (pop32());
  /* 12908c06 ret  */
  ESPCHK(0x12908b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c10 @ 0x12908c10 (836 bytes, 238 insns) */
void f_12908c10(void) {
  FTRACE(0x12908c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12908c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12908c11 mov ebp, esp */
  EBP = (ESP);
  /* 12908c13 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908c16 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12908c18 call 0x12906540 */
  push32(0x12908c1du); f_12906540();
  /* 12908c1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908c20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908c23 push eax */
  push32((uint32_t)(EAX));
  /* 12908c24 call 0x12908f60 */
  push32(0x12908c29u); f_12908f60();
  /* 12908c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908c2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12908c2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908c32 cmp ecx, dword ptr [0x1292fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908c38 jne 0x12908c4b */
  if (!C.zf) goto L_12908c4b;
  /* 12908c3a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12908c3c call 0x129065e0 */
  push32(0x12908c41u); f_129065e0();
  /* 12908c41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908c46 jmp 0x12908f50 */
  goto L_12908f50;
L_12908c4b:;
  /* 12908c4b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908c4f jne 0x12908c6c */
  if (!C.zf) goto L_12908c6c;
  /* 12908c51 call 0x12909040 */
  push32(0x12908c56u); f_12909040();
  /* 12908c56 call 0x129090c0 */
  push32(0x12908c5bu); f_129090c0();
  /* 12908c5b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12908c5d call 0x129065e0 */
  push32(0x12908c62u); f_129065e0();
  /* 12908c62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908c65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908c67 jmp 0x12908f50 */
  goto L_12908f50;
L_12908c6c:;
  /* 12908c6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12908c73 jmp 0x12908c7e */
  goto L_12908c7e;
L_12908c75:;
  /* 12908c75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908c78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908c7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12908c7e:;
  /* 12908c7e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908c82 jae 0x12908dcf */
  if (!C.cf) goto L_12908dcf;
  /* 12908c88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908c8b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12908c8e mov ecx, dword ptr [eax + 0x1292ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x1292ceb8)));
  /* 12908c94 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908c97 jne 0x12908dca */
  if (!C.zf) goto L_12908dca;
  /* 12908c9d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12908ca4 jmp 0x12908caf */
  goto L_12908caf;
L_12908ca6:;
  /* 12908ca6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908ca9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908cac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12908caf:;
  /* 12908caf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908cb6 jae 0x12908cc4 */
  if (!C.cf) goto L_12908cc4;
  /* 12908cb8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908cbb mov byte ptr [eax + 0x1292fd00], 0 */
  w8((uint32_t)(EAX + 0x1292fd00), (0x0u));
  /* 12908cc2 jmp 0x12908ca6 */
  goto L_12908ca6;
L_12908cc4:;
  /* 12908cc4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12908ccb jmp 0x12908cd6 */
  goto L_12908cd6;
L_12908ccd:;
  /* 12908ccd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12908cd0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908cd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12908cd6:;
  /* 12908cd6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908cda jae 0x12908d57 */
  if (!C.cf) goto L_12908d57;
  /* 12908cdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908cdf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12908ce2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12908ce5 lea ecx, [edx + eax*8 + 0x1292cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1292cec8));
  /* 12908cec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12908cef jmp 0x12908cfa */
  goto L_12908cfa;
L_12908cf1:;
  /* 12908cf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12908cf4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908cf7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12908cfa:;
  /* 12908cfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12908cfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12908cff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12908d01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12908d03 je 0x12908d52 */
  if (C.zf) goto L_12908d52;
  /* 12908d05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12908d08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908d0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12908d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12908d0f je 0x12908d52 */
  if (C.zf) goto L_12908d52;
  /* 12908d11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12908d14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12908d16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12908d18 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12908d1b jmp 0x12908d26 */
  goto L_12908d26;
L_12908d1d:;
  /* 12908d1d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908d20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908d23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12908d26:;
  /* 12908d26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12908d29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12908d2b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12908d2e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908d31 ja 0x12908d50 */
  if ((!C.cf&&!C.zf)) goto L_12908d50;
  /* 12908d33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908d36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12908d39 mov dl, byte ptr [eax + 0x1292fd01] */
  DL = (r8((uint32_t)(EAX + 0x1292fd01)));
  /* 12908d3f or dl, byte ptr [ecx + 0x1292ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1292ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 12908d45 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908d48 mov byte ptr [eax + 0x1292fd01], dl */
  w8((uint32_t)(EAX + 0x1292fd01), (DL));
  /* 12908d4e jmp 0x12908d1d */
  goto L_12908d1d;
L_12908d50:;
  /* 12908d50 jmp 0x12908cf1 */
  goto L_12908cf1;
L_12908d52:;
  /* 12908d52 jmp 0x12908ccd */
  goto L_12908ccd;
L_12908d57:;
  /* 12908d57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908d5a mov dword ptr [0x1292fb64], ecx */
  w32((uint32_t)(0x1292fb64), (ECX));
  /* 12908d60 mov dword ptr [0x1292fbec], 1 */
  w32((uint32_t)(0x1292fbec), (0x1u));
  /* 12908d6a mov edx, dword ptr [0x1292fb64] */
  EDX = (r32((uint32_t)(0x1292fb64)));
  /* 12908d70 push edx */
  push32((uint32_t)(EDX));
  /* 12908d71 call 0x12908fc0 */
  push32(0x12908d76u); f_12908fc0();
  /* 12908d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908d79 mov dword ptr [0x1292fe04], eax */
  w32((uint32_t)(0x1292fe04), (EAX));
  /* 12908d7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12908d85 jmp 0x12908d90 */
  goto L_12908d90;
L_12908d87:;
  /* 12908d87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12908d8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908d8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12908d90:;
  /* 12908d90 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908d94 jae 0x12908db4 */
  if (!C.cf) goto L_12908db4;
  /* 12908d96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908d99 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12908d9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12908d9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12908da2 mov cx, word ptr [ecx + eax*2 + 0x1292cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1292cebc)));
  /* 12908daa mov word ptr [edx*2 + 0x1292fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x1292fbe0), (CX));
  /* 12908db2 jmp 0x12908d87 */
  goto L_12908d87;
L_12908db4:;
  /* 12908db4 call 0x129090c0 */
  push32(0x12908db9u); f_129090c0();
  /* 12908db9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12908dbb call 0x129065e0 */
  push32(0x12908dc0u); f_129065e0();
  /* 12908dc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908dc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908dc5 jmp 0x12908f50 */
  goto L_12908f50;
L_12908dca:;
  /* 12908dca jmp 0x12908c75 */
  goto L_12908c75;
L_12908dcf:;
  /* 12908dcf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12908dd2 push edx */
  push32((uint32_t)(EDX));
  /* 12908dd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908dd6 push eax */
  push32((uint32_t)(EAX));
  /* 12908dd7 call dword ptr [0x12930310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930310))), 0x12908dddu);
  /* 12908ddd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908de0 jne 0x12908f22 */
  if (!C.zf) goto L_12908f22;
  /* 12908de6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12908ded jmp 0x12908df8 */
  goto L_12908df8;
L_12908def:;
  /* 12908def mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908df2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908df5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12908df8:;
  /* 12908df8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908dff jae 0x12908e0d */
  if (!C.cf) goto L_12908e0d;
  /* 12908e01 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908e04 mov byte ptr [edx + 0x1292fd00], 0 */
  w8((uint32_t)(EDX + 0x1292fd00), (0x0u));
  /* 12908e0b jmp 0x12908def */
  goto L_12908def;
L_12908e0d:;
  /* 12908e0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908e10 mov dword ptr [0x1292fb64], eax */
  w32((uint32_t)(0x1292fb64), (EAX));
  /* 12908e15 mov dword ptr [0x1292fe04], 0 */
  w32((uint32_t)(0x1292fe04), (0x0u));
  /* 12908e1f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908e23 jbe 0x12908ede */
  if ((C.cf||C.zf)) goto L_12908ede;
  /* 12908e29 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12908e2c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12908e2f jmp 0x12908e3a */
  goto L_12908e3a;
L_12908e31:;
  /* 12908e31 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12908e34 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908e37 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12908e3a:;
  /* 12908e3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12908e3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12908e3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12908e41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12908e43 je 0x12908e8c */
  if (C.zf) goto L_12908e8c;
  /* 12908e45 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12908e48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908e4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12908e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12908e4f je 0x12908e8c */
  if (C.zf) goto L_12908e8c;
  /* 12908e51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12908e54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12908e56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12908e58 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12908e5b jmp 0x12908e66 */
  goto L_12908e66;
L_12908e5d:;
  /* 12908e5d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908e60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908e63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12908e66:;
  /* 12908e66 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12908e69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12908e6b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12908e6e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908e71 ja 0x12908e8a */
  if ((!C.cf&&!C.zf)) goto L_12908e8a;
  /* 12908e73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908e76 mov cl, byte ptr [eax + 0x1292fd01] */
  CL = (r8((uint32_t)(EAX + 0x1292fd01)));
  /* 12908e7c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12908e7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908e82 mov byte ptr [edx + 0x1292fd01], cl */
  w8((uint32_t)(EDX + 0x1292fd01), (CL));
  /* 12908e88 jmp 0x12908e5d */
  goto L_12908e5d;
L_12908e8a:;
  /* 12908e8a jmp 0x12908e31 */
  goto L_12908e31;
L_12908e8c:;
  /* 12908e8c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12908e93 jmp 0x12908e9e */
  goto L_12908e9e;
L_12908e95:;
  /* 12908e95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908e98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908e9b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12908e9e:;
  /* 12908e9e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908ea5 jae 0x12908ebe */
  if (!C.cf) goto L_12908ebe;
  /* 12908ea7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908eaa mov dl, byte ptr [ecx + 0x1292fd01] */
  DL = (r8((uint32_t)(ECX + 0x1292fd01)));
  /* 12908eb0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12908eb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12908eb6 mov byte ptr [eax + 0x1292fd01], dl */
  w8((uint32_t)(EAX + 0x1292fd01), (DL));
  /* 12908ebc jmp 0x12908e95 */
  goto L_12908e95;
L_12908ebe:;
  /* 12908ebe mov ecx, dword ptr [0x1292fb64] */
  ECX = (r32((uint32_t)(0x1292fb64)));
  /* 12908ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 12908ec5 call 0x12908fc0 */
  push32(0x12908ecau); f_12908fc0();
  /* 12908eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908ecd mov dword ptr [0x1292fe04], eax */
  w32((uint32_t)(0x1292fe04), (EAX));
  /* 12908ed2 mov dword ptr [0x1292fbec], 1 */
  w32((uint32_t)(0x1292fbec), (0x1u));
  /* 12908edc jmp 0x12908ee8 */
  goto L_12908ee8;
L_12908ede:;
  /* 12908ede mov dword ptr [0x1292fbec], 0 */
  w32((uint32_t)(0x1292fbec), (0x0u));
L_12908ee8:;
  /* 12908ee8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12908eef jmp 0x12908efa */
  goto L_12908efa;
L_12908ef1:;
  /* 12908ef1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12908ef4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12908ef7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12908efa:;
  /* 12908efa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908efe jae 0x12908f0f */
  if (!C.cf) goto L_12908f0f;
  /* 12908f00 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12908f03 mov word ptr [eax*2 + 0x1292fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1292fbe0), (0x0u));
  /* 12908f0d jmp 0x12908ef1 */
  goto L_12908ef1;
L_12908f0f:;
  /* 12908f0f call 0x129090c0 */
  push32(0x12908f14u); f_129090c0();
  /* 12908f14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12908f16 call 0x129065e0 */
  push32(0x12908f1bu); f_129065e0();
  /* 12908f1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908f1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908f20 jmp 0x12908f50 */
  goto L_12908f50;
L_12908f22:;
  /* 12908f22 cmp dword ptr [0x1292e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908f29 je 0x12908f43 */
  if (C.zf) goto L_12908f43;
  /* 12908f2b call 0x12909040 */
  push32(0x12908f30u); f_12909040();
  /* 12908f30 call 0x129090c0 */
  push32(0x12908f35u); f_129090c0();
  /* 12908f35 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12908f37 call 0x129065e0 */
  push32(0x12908f3cu); f_129065e0();
  /* 12908f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12908f41 jmp 0x12908f50 */
  goto L_12908f50;
L_12908f43:;
  /* 12908f43 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12908f45 call 0x129065e0 */
  push32(0x12908f4au); f_129065e0();
  /* 12908f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12908f4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12908f50:;
  /* 12908f50 mov esp, ebp */
  ESP = (EBP);
  /* 12908f52 pop ebp */
  EBP = (pop32());
  /* 12908f53 ret  */
  ESPCHK(0x12908c10u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12908f60 (89 bytes, 21 insns) */
void f_12908f60(void) {
  FTRACE(0x12908f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12908f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12908f61 mov ebp, esp */
  EBP = (ESP);
  /* 12908f63 mov dword ptr [0x1292e678], 0 */
  w32((uint32_t)(0x1292e678), (0x0u));
  /* 12908f6d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908f71 jne 0x12908f85 */
  if (!C.zf) goto L_12908f85;
  /* 12908f73 mov dword ptr [0x1292e678], 1 */
  w32((uint32_t)(0x1292e678), (0x1u));
  /* 12908f7d call dword ptr [0x12930318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930318))), 0x12908f83u);
  /* 12908f83 jmp 0x12908fb7 */
  goto L_12908fb7;
L_12908f85:;
  /* 12908f85 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908f89 jne 0x12908f9d */
  if (!C.zf) goto L_12908f9d;
  /* 12908f8b mov dword ptr [0x1292e678], 1 */
  w32((uint32_t)(0x1292e678), (0x1u));
  /* 12908f95 call dword ptr [0x12930314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930314))), 0x12908f9bu);
  /* 12908f9b jmp 0x12908fb7 */
  goto L_12908fb7;
L_12908f9d:;
  /* 12908f9d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908fa1 jne 0x12908fb4 */
  if (!C.zf) goto L_12908fb4;
  /* 12908fa3 mov dword ptr [0x1292e678], 1 */
  w32((uint32_t)(0x1292e678), (0x1u));
  /* 12908fad mov eax, dword ptr [0x1292e698] */
  EAX = (r32((uint32_t)(0x1292e698)));
  /* 12908fb2 jmp 0x12908fb7 */
  goto L_12908fb7;
L_12908fb4:;
  /* 12908fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12908fb7:;
  /* 12908fb7 pop ebp */
  EBP = (pop32());
  /* 12908fb8 ret  */
  ESPCHK(0x12908f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fc0 @ 0x12908fc0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12908fc0(void) {
  FTRACE(0x12908fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12908fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12908fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12908fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12908fc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12908fc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12908fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908fcd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12908fd3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12908fd6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12908fda ja 0x1290900a */
  if ((!C.cf&&!C.zf)) goto L_1290900a;
  /* 12908fdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12908fdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12908fe1 mov dl, byte ptr [eax + 0x12909024] */
  DL = (r8((uint32_t)(EAX + 0x12909024)));
  /* 12908fe7 jmp dword ptr [edx*4 + 0x12909010] */
  switch (EDX) {
    case 0: goto L_12908fee;
    case 1: goto L_12908ff5;
    case 2: goto L_12908ffc;
    case 3: goto L_12909003;
    case 4: goto L_1290900a;
    default: x86_unimpl("switch@0x12908fe7 out of table"); return;
  }
L_12908fee:;
  /* 12908fee mov eax, 0x411 */
  EAX = (0x411u);
  /* 12908ff3 jmp 0x1290900c */
  goto L_1290900c;
L_12908ff5:;
  /* 12908ff5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12908ffa jmp 0x1290900c */
  goto L_1290900c;
L_12908ffc:;
  /* 12908ffc mov eax, 0x412 */
  EAX = (0x412u);
  /* 12909001 jmp 0x1290900c */
  goto L_1290900c;
L_12909003:;
  /* 12909003 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12909008 jmp 0x1290900c */
  goto L_1290900c;
L_1290900a:;
  /* 1290900a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290900c:;
  /* 1290900c mov esp, ebp */
  ESP = (EBP);
  /* 1290900e pop ebp */
  EBP = (pop32());
  /* 1290900f ret  */
  ESPCHK(0x12908fc0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12909040 (116 bytes, 29 insns) */
void f_12909040(void) {
  FTRACE(0x12909040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12909040 push ebp */
  push32((uint32_t)(EBP));
  /* 12909041 mov ebp, esp */
  EBP = (ESP);
  /* 12909043 push ecx */
  push32((uint32_t)(ECX));
  /* 12909044 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290904b jmp 0x12909056 */
  goto L_12909056;
L_1290904d:;
  /* 1290904d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909050 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12909053 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12909056:;
  /* 12909056 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290905d jge 0x1290906b */
  if ((C.sf==C.of)) goto L_1290906b;
  /* 1290905f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909062 mov byte ptr [ecx + 0x1292fd00], 0 */
  w8((uint32_t)(ECX + 0x1292fd00), (0x0u));
  /* 12909069 jmp 0x1290904d */
  goto L_1290904d;
L_1290906b:;
  /* 1290906b mov dword ptr [0x1292fb64], 0 */
  w32((uint32_t)(0x1292fb64), (0x0u));
  /* 12909075 mov dword ptr [0x1292fbec], 0 */
  w32((uint32_t)(0x1292fbec), (0x0u));
  /* 1290907f mov dword ptr [0x1292fe04], 0 */
  w32((uint32_t)(0x1292fe04), (0x0u));
  /* 12909089 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12909090 jmp 0x1290909b */
  goto L_1290909b;
L_12909092:;
  /* 12909092 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909095 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12909098 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1290909b:;
  /* 1290909b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290909f jge 0x129090b0 */
  if ((C.sf==C.of)) goto L_129090b0;
  /* 129090a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129090a4 mov word ptr [eax*2 + 0x1292fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x1292fbe0), (0x0u));
  /* 129090ae jmp 0x12909092 */
  goto L_12909092;
L_129090b0:;
  /* 129090b0 mov esp, ebp */
  ESP = (EBP);
  /* 129090b2 pop ebp */
  EBP = (pop32());
  /* 129090b3 ret  */
  ESPCHK(0x12909040u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c0 @ 0x129090c0 (770 bytes, 175 insns) */
void f_129090c0(void) {
  FTRACE(0x129090c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129090c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129090c1 mov ebp, esp */
  EBP = (ESP);
  /* 129090c3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129090c9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 129090cf push eax */
  push32((uint32_t)(EAX));
  /* 129090d0 mov ecx, dword ptr [0x1292fb64] */
  ECX = (r32((uint32_t)(0x1292fb64)));
  /* 129090d6 push ecx */
  push32((uint32_t)(ECX));
  /* 129090d7 call dword ptr [0x12930310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930310))), 0x129090ddu);
  /* 129090dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129090e0 jne 0x129092f9 */
  if (!C.zf) goto L_129092f9;
  /* 129090e6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 129090f0 jmp 0x12909101 */
  goto L_12909101;
L_129090f2:;
  /* 129090f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129090f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129090fb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12909101:;
  /* 12909101 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290910b jae 0x12909122 */
  if (!C.cf) goto L_12909122;
  /* 1290910d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12909113 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12909119 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12909120 jmp 0x129090f2 */
  goto L_129090f2;
L_12909122:;
  /* 12909122 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12909129 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1290912f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12909132 jmp 0x1290913d */
  goto L_1290913d;
L_12909134:;
  /* 12909134 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909137 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290913a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290913d:;
  /* 1290913d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909140 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12909142 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12909144 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12909146 je 0x12909188 */
  if (C.zf) goto L_12909188;
  /* 12909148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290914b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290914d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1290914f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12909155 jmp 0x12909166 */
  goto L_12909166;
L_12909157:;
  /* 12909157 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1290915d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12909160 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12909166:;
  /* 12909166 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909169 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290916b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1290916e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909174 ja 0x12909186 */
  if ((!C.cf&&!C.zf)) goto L_12909186;
  /* 12909176 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1290917c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12909184 jmp 0x12909157 */
  goto L_12909157;
L_12909186:;
  /* 12909186 jmp 0x12909134 */
  goto L_12909134;
L_12909188:;
  /* 12909188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290918a mov eax, dword ptr [0x1292fe04] */
  EAX = (r32((uint32_t)(0x1292fe04)));
  /* 1290918f push eax */
  push32((uint32_t)(EAX));
  /* 12909190 mov ecx, dword ptr [0x1292fb64] */
  ECX = (r32((uint32_t)(0x1292fb64)));
  /* 12909196 push ecx */
  push32((uint32_t)(ECX));
  /* 12909197 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1290919d push edx */
  push32((uint32_t)(EDX));
  /* 1290919e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129091a3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 129091a9 push eax */
  push32((uint32_t)(EAX));
  /* 129091aa push 1 */
  push32((uint32_t)(0x1u));
  /* 129091ac call 0x1290ad70 */
  push32(0x129091b1u); f_1290ad70();
  /* 129091b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129091b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129091b6 mov ecx, dword ptr [0x1292fb64] */
  ECX = (r32((uint32_t)(0x1292fb64)));
  /* 129091bc push ecx */
  push32((uint32_t)(ECX));
  /* 129091bd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129091c2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 129091c8 push edx */
  push32((uint32_t)(EDX));
  /* 129091c9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129091ce lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 129091d4 push eax */
  push32((uint32_t)(EAX));
  /* 129091d5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129091da mov ecx, dword ptr [0x1292fe04] */
  ECX = (r32((uint32_t)(0x1292fe04)));
  /* 129091e0 push ecx */
  push32((uint32_t)(ECX));
  /* 129091e1 call 0x1290af30 */
  push32(0x129091e6u); f_1290af30();
  /* 129091e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129091e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 129091eb mov edx, dword ptr [0x1292fb64] */
  EDX = (r32((uint32_t)(0x1292fb64)));
  /* 129091f1 push edx */
  push32((uint32_t)(EDX));
  /* 129091f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 129091f7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 129091fd push eax */
  push32((uint32_t)(EAX));
  /* 129091fe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12909203 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12909209 push ecx */
  push32((uint32_t)(ECX));
  /* 1290920a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1290920f mov edx, dword ptr [0x1292fe04] */
  EDX = (r32((uint32_t)(0x1292fe04)));
  /* 12909215 push edx */
  push32((uint32_t)(EDX));
  /* 12909216 call 0x1290af30 */
  push32(0x1290921bu); f_1290af30();
  /* 1290921b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290921e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12909228 jmp 0x12909239 */
  goto L_12909239;
L_1290922a:;
  /* 1290922a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12909230 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12909233 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12909239:;
  /* 12909239 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909243 jae 0x129092f4 */
  if (!C.cf) goto L_129092f4;
  /* 12909249 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1290924f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12909251 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12909259 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1290925c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290925e je 0x12909296 */
  if (C.zf) goto L_12909296;
  /* 12909260 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12909266 mov cl, byte ptr [eax + 0x1292fd01] */
  CL = (r8((uint32_t)(EAX + 0x1292fd01)));
  /* 1290926c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1290926f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12909275 mov byte ptr [edx + 0x1292fd01], cl */
  w8((uint32_t)(EDX + 0x1292fd01), (CL));
  /* 1290927b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12909281 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12909287 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1290928e mov byte ptr [eax + 0x1292fc00], dl */
  w8((uint32_t)(EAX + 0x1292fc00), (DL));
  /* 12909294 jmp 0x129092ef */
  goto L_129092ef;
L_12909296:;
  /* 12909296 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1290929c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290929e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 129092a6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 129092a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129092ab je 0x129092e2 */
  if (C.zf) goto L_129092e2;
  /* 129092ad mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129092b3 mov al, byte ptr [edx + 0x1292fd01] */
  AL = (r8((uint32_t)(EDX + 0x1292fd01)));
  /* 129092b9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 129092bb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129092c1 mov byte ptr [ecx + 0x1292fd01], al */
  w8((uint32_t)(ECX + 0x1292fd01), (AL));
  /* 129092c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129092cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129092d3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 129092da mov byte ptr [edx + 0x1292fc00], cl */
  w8((uint32_t)(EDX + 0x1292fc00), (CL));
  /* 129092e0 jmp 0x129092ef */
  goto L_129092ef;
L_129092e2:;
  /* 129092e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129092e8 mov byte ptr [edx + 0x1292fc00], 0 */
  w8((uint32_t)(EDX + 0x1292fc00), (0x0u));
L_129092ef:;
  /* 129092ef jmp 0x1290922a */
  goto L_1290922a;
L_129092f4:;
  /* 129092f4 jmp 0x129093be */
  goto L_129093be;
L_129092f9:;
  /* 129092f9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12909303 jmp 0x12909314 */
  goto L_12909314;
L_12909305:;
  /* 12909305 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1290930b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290930e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12909314:;
  /* 12909314 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290931e jae 0x129093be */
  if (!C.cf) goto L_129093be;
  /* 12909324 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290932b jb 0x12909368 */
  if (C.cf) goto L_12909368;
  /* 1290932d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909334 ja 0x12909368 */
  if ((!C.cf&&!C.zf)) goto L_12909368;
  /* 12909336 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1290933c mov dl, byte ptr [ecx + 0x1292fd01] */
  DL = (r8((uint32_t)(ECX + 0x1292fd01)));
  /* 12909342 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12909345 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1290934b mov byte ptr [eax + 0x1292fd01], dl */
  w8((uint32_t)(EAX + 0x1292fd01), (DL));
  /* 12909351 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12909357 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290935a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12909360 mov byte ptr [edx + 0x1292fc00], cl */
  w8((uint32_t)(EDX + 0x1292fc00), (CL));
  /* 12909366 jmp 0x129093b9 */
  goto L_129093b9;
L_12909368:;
  /* 12909368 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290936f jb 0x129093ac */
  if (C.cf) goto L_129093ac;
  /* 12909371 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909378 ja 0x129093ac */
  if ((!C.cf&&!C.zf)) goto L_129093ac;
  /* 1290937a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12909380 mov cl, byte ptr [eax + 0x1292fd01] */
  CL = (r8((uint32_t)(EAX + 0x1292fd01)));
  /* 12909386 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12909389 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1290938f mov byte ptr [edx + 0x1292fd01], cl */
  w8((uint32_t)(EDX + 0x1292fd01), (CL));
  /* 12909395 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1290939b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290939e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129093a4 mov byte ptr [ecx + 0x1292fc00], al */
  w8((uint32_t)(ECX + 0x1292fc00), (AL));
  /* 129093aa jmp 0x129093b9 */
  goto L_129093b9;
L_129093ac:;
  /* 129093ac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129093b2 mov byte ptr [edx + 0x1292fc00], 0 */
  w8((uint32_t)(EDX + 0x1292fc00), (0x0u));
L_129093b9:;
  /* 129093b9 jmp 0x12909305 */
  goto L_12909305;
L_129093be:;
  /* 129093be mov esp, ebp */
  ESP = (EBP);
  /* 129093c0 pop ebp */
  EBP = (pop32());
  /* 129093c1 ret  */
  ESPCHK(0x129090c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x129093d0 (23 bytes, 9 insns) */
void f_129093d0(void) {
  FTRACE(0x129093d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129093d0 push ebp */
  push32((uint32_t)(EBP));
  /* 129093d1 mov ebp, esp */
  EBP = (ESP);
  /* 129093d3 cmp dword ptr [0x1292fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129093da je 0x129093e3 */
  if (C.zf) goto L_129093e3;
  /* 129093dc mov eax, dword ptr [0x1292fb64] */
  EAX = (r32((uint32_t)(0x1292fb64)));
  /* 129093e1 jmp 0x129093e5 */
  goto L_129093e5;
L_129093e3:;
  /* 129093e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129093e5:;
  /* 129093e5 pop ebp */
  EBP = (pop32());
  /* 129093e6 ret  */
  ESPCHK(0x129093d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093f0 @ 0x129093f0 (34 bytes, 10 insns) */
void f_129093f0(void) {
  FTRACE(0x129093f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129093f0 push ebp */
  push32((uint32_t)(EBP));
  /* 129093f1 mov ebp, esp */
  EBP = (ESP);
  /* 129093f3 cmp dword ptr [0x1292ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129093fa jne 0x12909410 */
  if (!C.zf) goto L_12909410;
  /* 129093fc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 129093fe call 0x12908c10 */
  push32(0x12909403u); f_12908c10();
  /* 12909403 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909406 mov dword ptr [0x1292ffb0], 1 */
  w32((uint32_t)(0x1292ffb0), (0x1u));
L_12909410:;
  /* 12909410 pop ebp */
  EBP = (pop32());
  /* 12909411 ret  */
  ESPCHK(0x129093f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x12909420 (664 bytes, 267 insns) [15 switch table(s)] */
void f_12909420(void) {
  FTRACE(0x12909420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12909420 push ebp */
  push32((uint32_t)(EBP));
  /* 12909421 mov ebp, esp */
  EBP = (ESP);
  /* 12909423 push edi */
  push32((uint32_t)(EDI));
  /* 12909424 push esi */
  push32((uint32_t)(ESI));
  /* 12909425 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12909428 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290942b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1290942e mov eax, ecx */
  EAX = (ECX);
  /* 12909430 mov edx, ecx */
  EDX = (ECX);
  /* 12909432 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12909434 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909436 jbe 0x12909440 */
  if ((C.cf||C.zf)) goto L_12909440;
  /* 12909438 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290943a jb 0x129095b8 */
  if (C.cf) goto L_129095b8;
L_12909440:;
  /* 12909440 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12909446 jne 0x1290945c */
  if (!C.zf) goto L_1290945c;
  /* 12909448 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290944b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1290944e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909451 jb 0x1290947c */
  if (C.cf) goto L_1290947c;
  /* 12909453 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12909455 jmp dword ptr [edx*4 + 0x12909568] */
  switch (EDX) {
    case 0: goto L_12909578;
    case 1: goto L_12909580;
    case 2: goto L_1290958c;
    case 3: goto L_129095a0;
    default: x86_unimpl("switch@0x12909455 out of table"); return;
  }
L_1290945c:;
  /* 1290945c mov eax, edi */
  EAX = (EDI);
  /* 1290945e mov edx, 3 */
  EDX = (0x3u);
  /* 12909463 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12909466 jb 0x12909474 */
  if (C.cf) goto L_12909474;
  /* 12909468 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1290946b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290946d jmp dword ptr [eax*4 + 0x12909480] */
  switch (EAX) {
    case 1: goto L_12909490;
    case 2: goto L_129094bc;
    case 3: goto L_129094e0;
    default: x86_unimpl("switch@0x1290946d out of table"); return;
  }
L_12909474:;
  /* 12909474 jmp dword ptr [ecx*4 + 0x12909578] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12909578)))); return;
  /* 1290947b nop  */
  /* nop */
L_1290947c:;
  /* 1290947c jmp dword ptr [ecx*4 + 0x129094fc] */
  switch (ECX) {
    case 0: goto L_1290955f;
    case 1: goto L_1290954c;
    case 2: goto L_12909544;
    case 3: goto L_1290953c;
    case 4: goto L_12909534;
    case 5: goto L_1290952c;
    case 6: goto L_12909524;
    case 7: goto L_1290951c;
    default: x86_unimpl("switch@0x1290947c out of table"); return;
  }
  /* 12909483 nop  */
  /* nop */
L_12909490:;
  /* 12909490 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12909492 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12909494 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12909496 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12909499 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1290949c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1290949f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129094a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129094a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129094a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129094ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129094ae jb 0x1290947c */
  if (C.cf) goto L_1290947c;
  /* 129094b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129094b2 jmp dword ptr [edx*4 + 0x12909568] */
  switch (EDX) {
    case 0: goto L_12909578;
    case 1: goto L_12909580;
    case 2: goto L_1290958c;
    case 3: goto L_129095a0;
    default: x86_unimpl("switch@0x129094b2 out of table"); return;
  }
  /* 129094b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129094bc:;
  /* 129094bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129094be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129094c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129094c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129094c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129094c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129094cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129094ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 129094d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129094d4 jb 0x1290947c */
  if (C.cf) goto L_1290947c;
  /* 129094d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129094d8 jmp dword ptr [edx*4 + 0x12909568] */
  switch (EDX) {
    case 0: goto L_12909578;
    case 1: goto L_12909580;
    case 2: goto L_1290958c;
    case 3: goto L_129095a0;
    default: x86_unimpl("switch@0x129094d8 out of table"); return;
  }
  /* 129094df nop  */
  /* nop */
L_129094e0:;
  /* 129094e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129094e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129094e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129094e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 129094e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129094ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 129094eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129094ee jb 0x1290947c */
  if (C.cf) goto L_1290947c;
  /* 129094f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129094f2 jmp dword ptr [edx*4 + 0x12909568] */
  switch (EDX) {
    case 0: goto L_12909578;
    case 1: goto L_12909580;
    case 2: goto L_1290958c;
    case 3: goto L_129095a0;
    default: x86_unimpl("switch@0x129094f2 out of table"); return;
  }
  /* 129094f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1290951c:;
  /* 1290951c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12909520 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12909524:;
  /* 12909524 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12909528 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1290952c:;
  /* 1290952c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12909530 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12909534:;
  /* 12909534 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12909538 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1290953c:;
  /* 1290953c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12909540 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12909544:;
  /* 12909544 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12909548 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1290954c:;
  /* 1290954c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12909550 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12909554 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1290955b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1290955d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1290955f:;
  /* 1290955f jmp dword ptr [edx*4 + 0x12909568] */
  switch (EDX) {
    case 0: goto L_12909578;
    case 1: goto L_12909580;
    case 2: goto L_1290958c;
    case 3: goto L_129095a0;
    default: x86_unimpl("switch@0x1290955f out of table"); return;
  }
  /* 12909566 mov edi, edi */
  EDI = (EDI);
L_12909578:;
  /* 12909578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290957b pop esi */
  ESI = (pop32());
  /* 1290957c pop edi */
  EDI = (pop32());
  /* 1290957d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290957e ret  */
  ESPCHK(0x12909420u, _esp0);
  ESP += 4; return;
  /* 1290957f nop  */
  /* nop */
L_12909580:;
  /* 12909580 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12909582 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12909584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12909587 pop esi */
  ESI = (pop32());
  /* 12909588 pop edi */
  EDI = (pop32());
  /* 12909589 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290958a ret  */
  ESPCHK(0x12909420u, _esp0);
  ESP += 4; return;
  /* 1290958b nop  */
  /* nop */
L_1290958c:;
  /* 1290958c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1290958e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12909590 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12909593 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12909596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12909599 pop esi */
  ESI = (pop32());
  /* 1290959a pop edi */
  EDI = (pop32());
  /* 1290959b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290959c ret  */
  ESPCHK(0x12909420u, _esp0);
  ESP += 4; return;
  /* 1290959d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129095a0:;
  /* 129095a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129095a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129095a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129095a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129095aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129095ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129095b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129095b3 pop esi */
  ESI = (pop32());
  /* 129095b4 pop edi */
  EDI = (pop32());
  /* 129095b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129095b6 ret  */
  ESPCHK(0x12909420u, _esp0);
  ESP += 4; return;
  /* 129095b7 nop  */
  /* nop */
L_129095b8:;
  /* 129095b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 129095bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 129095c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129095c6 jne 0x129095ec */
  if (!C.zf) goto L_129095ec;
  /* 129095c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129095cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129095ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129095d1 jb 0x129095e0 */
  if (C.cf) goto L_129095e0;
  /* 129095d3 std  */
  C.df=1;
  /* 129095d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129095d6 cld  */
  C.df=0;
  /* 129095d7 jmp dword ptr [edx*4 + 0x12909700] */
  switch (EDX) {
    case 0: goto L_12909710;
    case 1: goto L_12909718;
    case 2: goto L_12909728;
    case 3: goto L_1290973c;
    default: x86_unimpl("switch@0x129095d7 out of table"); return;
  }
  /* 129095de mov edi, edi */
  EDI = (EDI);
L_129095e0:;
  /* 129095e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 129095e2 jmp dword ptr [ecx*4 + 0x129096b0] */
  switch (ECX) {
    case 0: goto L_129096f7;
    default: x86_unimpl("switch@0x129095e2 out of table"); return;
  }
  /* 129095e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129095ec:;
  /* 129095ec mov eax, edi */
  EAX = (EDI);
  /* 129095ee mov edx, 3 */
  EDX = (0x3u);
  /* 129095f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129095f6 jb 0x12909604 */
  if (C.cf) goto L_12909604;
  /* 129095f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 129095fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129095fd jmp dword ptr [eax*4 + 0x12909608] */
  switch (EAX) {
    case 1: goto L_12909618;
    case 2: goto L_12909638;
    case 3: goto L_12909660;
    default: x86_unimpl("switch@0x129095fd out of table"); return;
  }
L_12909604:;
  /* 12909604 jmp dword ptr [ecx*4 + 0x12909700] */
  switch (ECX) {
    case 0: goto L_12909710;
    case 1: goto L_12909718;
    case 2: goto L_12909728;
    case 3: goto L_1290973c;
    default: x86_unimpl("switch@0x12909604 out of table"); return;
  }
  /* 1290960b nop  */
  /* nop */
L_12909618:;
  /* 12909618 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290961b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1290961d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12909620 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12909621 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12909624 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12909625 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909628 jb 0x129095e0 */
  if (C.cf) goto L_129095e0;
  /* 1290962a std  */
  C.df=1;
  /* 1290962b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1290962d cld  */
  C.df=0;
  /* 1290962e jmp dword ptr [edx*4 + 0x12909700] */
  switch (EDX) {
    case 0: goto L_12909710;
    case 1: goto L_12909718;
    case 2: goto L_12909728;
    case 3: goto L_1290973c;
    default: x86_unimpl("switch@0x1290962e out of table"); return;
  }
  /* 12909635 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12909638:;
  /* 12909638 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290963b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1290963d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12909640 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12909643 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12909646 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12909649 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290964c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290964f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909652 jb 0x129095e0 */
  if (C.cf) goto L_129095e0;
  /* 12909654 std  */
  C.df=1;
  /* 12909655 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12909657 cld  */
  C.df=0;
  /* 12909658 jmp dword ptr [edx*4 + 0x12909700] */
  switch (EDX) {
    case 0: goto L_12909710;
    case 1: goto L_12909718;
    case 2: goto L_12909728;
    case 3: goto L_1290973c;
    default: x86_unimpl("switch@0x12909658 out of table"); return;
  }
  /* 1290965f nop  */
  /* nop */
L_12909660:;
  /* 12909660 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12909663 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12909665 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12909668 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1290966b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1290966e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12909671 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12909674 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12909677 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290967a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290967d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909680 jb 0x129095e0 */
  if (C.cf) goto L_129095e0;
  /* 12909686 std  */
  C.df=1;
  /* 12909687 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12909689 cld  */
  C.df=0;
  /* 1290968a jmp dword ptr [edx*4 + 0x12909700] */
  switch (EDX) {
    case 0: goto L_12909710;
    case 1: goto L_12909718;
    case 2: goto L_12909728;
    case 3: goto L_1290973c;
    default: x86_unimpl("switch@0x1290968a out of table"); return;
  }
  /* 12909691 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12909694 mov ah, 0x96 */
  AH = (0x96u);
  /* 12909696 nop  */
  /* nop */
  /* 12909697 adc bh, byte ptr [esi + edx*4 - 0x693bed70] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(ESI + EDX*4 + -0x693bed70))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1290969e nop  */
  /* nop */
  /* 1290969f adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 129096a1 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 129096a2 nop  */
  /* nop */
  /* 129096a3 adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 129096a5 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 129096a6 nop  */
  /* nop */
  /* 129096a7 adc bl, ah */
  { uint32_t _a=(BL),_b=(AH),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 129096a9 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 129096aa nop  */
  /* nop */
  /* 129096ab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 129096ad xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 129096ae nop  */
  /* nop */
  /* 129096b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 129096b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 129096bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 129096c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 129096c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 129096c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 129096cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 129096d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 129096d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 129096d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 129096dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 129096e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 129096e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 129096e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 129096ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 129096f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129096f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_129096f7:;
  /* 129096f7 jmp dword ptr [edx*4 + 0x12909700] */
  switch (EDX) {
    case 0: goto L_12909710;
    case 1: goto L_12909718;
    case 2: goto L_12909728;
    case 3: goto L_1290973c;
    default: x86_unimpl("switch@0x129096f7 out of table"); return;
  }
  /* 129096fe mov edi, edi */
  EDI = (EDI);
L_12909710:;
  /* 12909710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12909713 pop esi */
  ESI = (pop32());
  /* 12909714 pop edi */
  EDI = (pop32());
  /* 12909715 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12909716 ret  */
  ESPCHK(0x12909420u, _esp0);
  ESP += 4; return;
  /* 12909717 nop  */
  /* nop */
L_12909718:;
  /* 12909718 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290971b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1290971e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12909721 pop esi */
  ESI = (pop32());
  /* 12909722 pop edi */
  EDI = (pop32());
  /* 12909723 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12909724 ret  */
  ESPCHK(0x12909420u, _esp0);
  ESP += 4; return;
  /* 12909725 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12909728:;
  /* 12909728 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290972b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1290972e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12909731 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12909734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12909737 pop esi */
  ESI = (pop32());
  /* 12909738 pop edi */
  EDI = (pop32());
  /* 12909739 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290973a ret  */
  ESPCHK(0x12909420u, _esp0);
  ESP += 4; return;
  /* 1290973b nop  */
  /* nop */
L_1290973c:;
  /* 1290973c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290973f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12909742 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12909745 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12909748 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1290974b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1290974e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12909751 pop esi */
  ESI = (pop32());
  /* 12909752 pop edi */
  EDI = (pop32());
  /* 12909753 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12909754 ret  */
  ESPCHK(0x12909420u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12909760 (104 bytes, 43 insns) */
void f_12909760(void) {
  FTRACE(0x12909760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12909760 push ebx */
  push32((uint32_t)(EBX));
  /* 12909761 push esi */
  push32((uint32_t)(ESI));
  /* 12909762 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12909766 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12909768 jne 0x12909782 */
  if (!C.zf) goto L_12909782;
  /* 1290976a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1290976e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12909772 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12909774 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12909776 mov ebx, eax */
  EBX = (EAX);
  /* 12909778 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1290977c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1290977e mov edx, ebx */
  EDX = (EBX);
  /* 12909780 jmp 0x129097c3 */
  goto L_129097c3;
L_12909782:;
  /* 12909782 mov ecx, eax */
  ECX = (EAX);
  /* 12909784 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12909788 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1290978c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12909790:;
  /* 12909790 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12909792 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12909794 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12909796 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12909798 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290979a jne 0x12909790 */
  if (!C.zf) goto L_12909790;
  /* 1290979c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1290979e mov esi, eax */
  ESI = (EAX);
  /* 129097a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129097a4 mov ecx, eax */
  ECX = (EAX);
  /* 129097a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 129097aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 129097ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129097ae jb 0x129097be */
  if (C.cf) goto L_129097be;
  /* 129097b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129097b4 ja 0x129097be */
  if ((!C.cf&&!C.zf)) goto L_129097be;
  /* 129097b6 jb 0x129097bf */
  if (C.cf) goto L_129097bf;
  /* 129097b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129097bc jbe 0x129097bf */
  if ((C.cf||C.zf)) goto L_129097bf;
L_129097be:;
  /* 129097be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_129097bf:;
  /* 129097bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129097c1 mov eax, esi */
  EAX = (ESI);
L_129097c3:;
  /* 129097c3 pop esi */
  ESI = (pop32());
  /* 129097c4 pop ebx */
  EBX = (pop32());
  /* 129097c5 ret 0x10 */
  ESPCHK(0x12909760u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x129097d0 (117 bytes, 44 insns) */
void f_129097d0(void) {
  FTRACE(0x129097d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129097d0 push ebx */
  push32((uint32_t)(EBX));
  /* 129097d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 129097d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129097d7 jne 0x129097f1 */
  if (!C.zf) goto L_129097f1;
  /* 129097d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 129097dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 129097e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129097e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129097e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 129097e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129097eb mov eax, edx */
  EAX = (EDX);
  /* 129097ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129097ef jmp 0x12909841 */
  goto L_12909841;
L_129097f1:;
  /* 129097f1 mov ecx, eax */
  ECX = (EAX);
  /* 129097f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 129097f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 129097fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_129097ff:;
  /* 129097ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12909801 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12909803 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12909805 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12909807 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12909809 jne 0x129097ff */
  if (!C.zf) goto L_129097ff;
  /* 1290980b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1290980d mov ecx, eax */
  ECX = (EAX);
  /* 1290980f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12909813 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12909814 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12909818 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290981a jb 0x1290982a */
  if (C.cf) goto L_1290982a;
  /* 1290981c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909820 ja 0x1290982a */
  if ((!C.cf&&!C.zf)) goto L_1290982a;
  /* 12909822 jb 0x12909832 */
  if (C.cf) goto L_12909832;
  /* 12909824 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909828 jbe 0x12909832 */
  if ((C.cf||C.zf)) goto L_12909832;
L_1290982a:;
  /* 1290982a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290982e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12909832:;
  /* 12909832 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12909836 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290983a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290983c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290983e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12909841:;
  /* 12909841 pop ebx */
  EBX = (pop32());
  /* 12909842 ret 0x10 */
  ESPCHK(0x129097d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009850 @ 0x12909850 (628 bytes, 214 insns) */
void f_12909850(void) {
  FTRACE(0x12909850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12909850 push ebp */
  push32((uint32_t)(EBP));
  /* 12909851 mov ebp, esp */
  EBP = (ESP);
  /* 12909853 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12909856 push ebx */
  push32((uint32_t)(EBX));
  /* 12909857 push esi */
  push32((uint32_t)(ESI));
  /* 12909858 push edi */
  push32((uint32_t)(EDI));
L_12909859:;
  /* 12909859 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290985d jne 0x1290987d */
  if (!C.zf) goto L_1290987d;
  /* 1290985f push 0x12929e84 */
  push32((uint32_t)(0x12929e84u));
  /* 12909864 push 0 */
  push32((uint32_t)(0x0u));
  /* 12909866 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12909868 push 0x12929e78 */
  push32((uint32_t)(0x12929e78u));
  /* 1290986d push 2 */
  push32((uint32_t)(0x2u));
  /* 1290986f call 0x12901c00 */
  push32(0x12909874u); f_12901c00();
  /* 12909874 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909877 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290987a jne 0x1290987d */
  if (!C.zf) goto L_1290987d;
  /* 1290987c int3  */
  x86_unimpl("int3 @ 0x1290987c");
L_1290987d:;
  /* 1290987d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290987f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12909881 jne 0x12909859 */
  if (!C.zf) goto L_12909859;
  /* 12909883 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12909886 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12909889 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290988c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1290988f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12909892 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909895 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12909898 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1290989e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129098a0 je 0x129098af */
  if (C.zf) goto L_129098af;
  /* 129098a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129098a5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129098a8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 129098ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129098ad je 0x129098c5 */
  if (C.zf) goto L_129098c5;
L_129098af:;
  /* 129098af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129098b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129098b5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 129098b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129098ba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 129098bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129098c0 jmp 0x12909abd */
  goto L_12909abd;
L_129098c5:;
  /* 129098c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129098c8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129098cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 129098ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129098d0 je 0x1290991c */
  if (C.zf) goto L_1290991c;
  /* 129098d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129098d5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 129098dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129098df mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 129098e2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 129098e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129098e7 je 0x12909905 */
  if (C.zf) goto L_12909905;
  /* 129098e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129098ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129098ef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129098f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129098f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129098f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129098fa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 129098fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909900 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12909903 jmp 0x1290991c */
  goto L_1290991c;
L_12909905:;
  /* 12909905 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909908 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290990b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1290990e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909911 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12909914 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12909917 jmp 0x12909abd */
  goto L_12909abd;
L_1290991c:;
  /* 1290991c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290991f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12909922 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12909925 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909928 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1290992b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290992e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12909931 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12909934 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909937 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1290993a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290993d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12909944 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290994b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290994e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12909951 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909954 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12909957 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1290995d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290995f jne 0x1290998f */
  if (!C.zf) goto L_1290998f;
  /* 12909961 cmp dword ptr [ebp - 8], 0x1292d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1292d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909968 je 0x12909973 */
  if (C.zf) goto L_12909973;
  /* 1290996a cmp dword ptr [ebp - 8], 0x1292d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1292d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909971 jne 0x12909983 */
  if (!C.zf) goto L_12909983;
L_12909973:;
  /* 12909973 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12909976 push edx */
  push32((uint32_t)(EDX));
  /* 12909977 call 0x1290b7c0 */
  push32(0x1290997cu); f_1290b7c0();
  /* 1290997c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290997f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12909981 jne 0x1290998f */
  if (!C.zf) goto L_1290998f;
L_12909983:;
  /* 12909983 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909986 push eax */
  push32((uint32_t)(EAX));
  /* 12909987 call 0x1290b6f0 */
  push32(0x1290998cu); f_1290b6f0();
  /* 1290998c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290998f:;
  /* 1290998f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909992 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12909995 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1290999b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290999d je 0x12909a7b */
  if (C.zf) goto L_12909a7b;
L_129099a3:;
  /* 129099a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129099a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129099a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 129099ab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129099ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129099b0 jge 0x129099d3 */
  if ((C.sf==C.of)) goto L_129099d3;
  /* 129099b2 push 0x12929e38 */
  push32((uint32_t)(0x12929e38u));
  /* 129099b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129099b9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 129099be push 0x12929e78 */
  push32((uint32_t)(0x12929e78u));
  /* 129099c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 129099c5 call 0x12901c00 */
  push32(0x129099cau); f_12901c00();
  /* 129099ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129099cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129099d0 jne 0x129099d3 */
  if (!C.zf) goto L_129099d3;
  /* 129099d2 int3  */
  x86_unimpl("int3 @ 0x129099d2");
L_129099d3:;
  /* 129099d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129099d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129099d7 jne 0x129099a3 */
  if (!C.zf) goto L_129099a3;
  /* 129099d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129099dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129099df mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 129099e1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129099e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129099e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129099ea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 129099ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129099f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129099f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 129099f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129099f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 129099fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129099fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909a01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12909a04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909a08 jle 0x12909a26 */
  if ((C.zf||C.sf!=C.of)) goto L_12909a26;
  /* 12909a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909a0d push ecx */
  push32((uint32_t)(ECX));
  /* 12909a0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909a11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12909a14 push eax */
  push32((uint32_t)(EAX));
  /* 12909a15 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12909a18 push ecx */
  push32((uint32_t)(ECX));
  /* 12909a19 call 0x1290b3e0 */
  push32(0x12909a1eu); f_1290b3e0();
  /* 12909a1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909a21 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12909a24 jmp 0x12909a6e */
  goto L_12909a6e;
L_12909a26:;
  /* 12909a26 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909a2a je 0x12909a49 */
  if (C.zf) goto L_12909a49;
  /* 12909a2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12909a2f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12909a32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12909a35 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12909a38 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12909a3b mov ecx, dword ptr [edx*4 + 0x1292fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1292fe60)));
  /* 12909a42 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12909a44 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12909a47 jmp 0x12909a50 */
  goto L_12909a50;
L_12909a49:;
  /* 12909a49 mov dword ptr [ebp - 0x14], 0x1292ca60 */
  w32((uint32_t)(EBP + -0x14), (0x1292ca60u));
L_12909a50:;
  /* 12909a50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12909a53 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12909a57 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12909a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12909a5c je 0x12909a6e */
  if (C.zf) goto L_12909a6e;
  /* 12909a5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12909a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12909a62 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12909a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12909a66 call 0x1290b290 */
  push32(0x12909a6bu); f_1290b290();
  /* 12909a6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12909a6e:;
  /* 12909a6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909a71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12909a74 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12909a77 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12909a79 jmp 0x12909a99 */
  goto L_12909a99;
L_12909a7b:;
  /* 12909a7b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12909a82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909a85 push edx */
  push32((uint32_t)(EDX));
  /* 12909a86 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12909a89 push eax */
  push32((uint32_t)(EAX));
  /* 12909a8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12909a8d push ecx */
  push32((uint32_t)(ECX));
  /* 12909a8e call 0x1290b3e0 */
  push32(0x12909a93u); f_1290b3e0();
  /* 12909a93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909a96 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12909a99:;
  /* 12909a99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12909a9c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909a9f je 0x12909ab5 */
  if (C.zf) goto L_12909ab5;
  /* 12909aa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909aa4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12909aa7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12909aaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909aad mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12909ab0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12909ab3 jmp 0x12909abd */
  goto L_12909abd;
L_12909ab5:;
  /* 12909ab5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12909ab8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12909abd:;
  /* 12909abd pop edi */
  EDI = (pop32());
  /* 12909abe pop esi */
  ESI = (pop32());
  /* 12909abf pop ebx */
  EBX = (pop32());
  /* 12909ac0 mov esp, ebp */
  ESP = (EBP);
  /* 12909ac2 pop ebp */
  EBP = (pop32());
  /* 12909ac3 ret  */
  ESPCHK(0x12909850u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ad0 @ 0x12909ad0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12909ad0(void) {
  FTRACE(0x12909ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12909ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12909ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12909ad3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12909ad9 push ebx */
  push32((uint32_t)(EBX));
  /* 12909ada push esi */
  push32((uint32_t)(ESI));
  /* 12909adb push edi */
  push32((uint32_t)(EDI));
  /* 12909adc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12909ae3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12909aed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12909af4:;
  /* 12909af4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12909af7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12909af9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12909afc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909b00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12909b03 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12909b06 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12909b09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12909b0b je 0x1290a6e7 */
  if (C.zf) goto L_1290a6e7;
  /* 12909b11 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909b18 jl 0x1290a6e7 */
  if ((C.sf!=C.of)) goto L_1290a6e7;
  /* 12909b1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909b22 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909b25 jl 0x12909b46 */
  if ((C.sf!=C.of)) goto L_12909b46;
  /* 12909b27 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909b2b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909b2e jg 0x12909b46 */
  if ((!C.zf&&C.sf==C.of)) goto L_12909b46;
  /* 12909b30 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909b34 movsx ecx, byte ptr [eax + 0x12929e70] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12929e70))));
  /* 12909b3b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12909b3e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12909b44 jmp 0x12909b50 */
  goto L_12909b50;
L_12909b46:;
  /* 12909b46 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12909b50:;
  /* 12909b50 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12909b56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12909b59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12909b5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12909b5f movsx edx, byte ptr [ecx + eax*8 + 0x12929e90] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12929e90))));
  /* 12909b67 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12909b6a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12909b6d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12909b70 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12909b76 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909b7d ja 0x1290a6e2 */
  if ((!C.cf&&!C.zf)) goto L_1290a6e2;
  /* 12909b83 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12909b89 jmp dword ptr [ecx*4 + 0x1290a6f4] */
  switch (ECX) {
    case 0: goto L_12909b90;
    case 1: goto L_12909c2a;
    case 2: goto L_12909c6c;
    case 3: goto L_12909cdb;
    case 4: goto L_12909d33;
    case 5: goto L_12909d42;
    case 6: goto L_12909d8e;
    case 7: goto L_12909e21;
    case 8: goto L_12909cb8;
    case 9: goto L_12909cc3;
    case 10: goto L_12909cae;
    case 11: goto L_12909ca3;
    case 12: goto L_12909cce;
    case 13: goto L_12909cd6;
    default: x86_unimpl("switch@0x12909b89 out of table"); return;
  }
L_12909b90:;
  /* 12909b90 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12909b97 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12909b9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12909ba0 mov eax, dword ptr [0x1292cc98] */
  EAX = (r32((uint32_t)(0x1292cc98)));
  /* 12909ba5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12909ba7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12909bab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12909bb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12909bb3 je 0x12909c0d */
  if (C.zf) goto L_12909c0d;
  /* 12909bb5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12909bbb push edx */
  push32((uint32_t)(EDX));
  /* 12909bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12909bbf push eax */
  push32((uint32_t)(EAX));
  /* 12909bc0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12909bc5 call 0x1290a800 */
  push32(0x12909bcau); f_1290a800();
  /* 12909bca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909bcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12909bd0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12909bd2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12909bd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12909bd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12909bdb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12909bde:;
  /* 12909bde movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909be2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12909be4 jne 0x12909c07 */
  if (!C.zf) goto L_12909c07;
  /* 12909be6 push 0x12929f10 */
  push32((uint32_t)(0x12929f10u));
  /* 12909beb push 0 */
  push32((uint32_t)(0x0u));
  /* 12909bed push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12909bf2 push 0x12929f04 */
  push32((uint32_t)(0x12929f04u));
  /* 12909bf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12909bf9 call 0x12901c00 */
  push32(0x12909bfeu); f_12901c00();
  /* 12909bfe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909c01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909c04 jne 0x12909c07 */
  if (!C.zf) goto L_12909c07;
  /* 12909c06 int3  */
  x86_unimpl("int3 @ 0x12909c06");
L_12909c07:;
  /* 12909c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12909c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12909c0b jne 0x12909bde */
  if (!C.zf) goto L_12909bde;
L_12909c0d:;
  /* 12909c0d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12909c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12909c14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12909c17 push edx */
  push32((uint32_t)(EDX));
  /* 12909c18 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909c1c push eax */
  push32((uint32_t)(EAX));
  /* 12909c1d call 0x1290a800 */
  push32(0x12909c22u); f_1290a800();
  /* 12909c22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909c25 jmp 0x1290a6e2 */
  goto L_1290a6e2;
L_12909c2a:;
  /* 12909c2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12909c31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12909c34 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12909c3a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12909c40 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12909c46 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12909c4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12909c4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12909c56 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12909c60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12909c67 jmp 0x1290a6e2 */
  goto L_1290a6e2;
L_12909c6c:;
  /* 12909c6c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909c70 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12909c76 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12909c7c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12909c7f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12909c85 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909c8c ja 0x12909cd6 */
  if ((!C.cf&&!C.zf)) goto L_12909cd6;
  /* 12909c8e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12909c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12909c96 mov al, byte ptr [ecx + 0x1290a72c] */
  AL = (r8((uint32_t)(ECX + 0x1290a72c)));
  /* 12909c9c jmp dword ptr [eax*4 + 0x1290a714] */
  switch (EAX) {
    case 0: goto L_12909cb8;
    case 1: goto L_12909cc3;
    case 2: goto L_12909cae;
    case 3: goto L_12909ca3;
    case 4: goto L_12909cce;
    case 5: goto L_12909cd6;
    default: x86_unimpl("switch@0x12909c9c out of table"); return;
  }
L_12909ca3:;
  /* 12909ca3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909ca6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12909ca9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12909cac jmp 0x12909cd6 */
  goto L_12909cd6;
L_12909cae:;
  /* 12909cae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909cb1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12909cb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12909cb6 jmp 0x12909cd6 */
  goto L_12909cd6;
L_12909cb8:;
  /* 12909cb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909cbb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12909cbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12909cc1 jmp 0x12909cd6 */
  goto L_12909cd6;
L_12909cc3:;
  /* 12909cc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909cc6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12909cc9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12909ccc jmp 0x12909cd6 */
  goto L_12909cd6;
L_12909cce:;
  /* 12909cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909cd1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12909cd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12909cd6:;
  /* 12909cd6 jmp 0x1290a6e2 */
  goto L_1290a6e2;
L_12909cdb:;
  /* 12909cdb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909cdf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909ce2 jne 0x12909d17 */
  if (!C.zf) goto L_12909d17;
  /* 12909ce4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12909ce7 push edx */
  push32((uint32_t)(EDX));
  /* 12909ce8 call 0x1290a910 */
  push32(0x12909cedu); f_1290a910();
  /* 12909ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909cf0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12909cf6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909cfd jge 0x12909d15 */
  if ((C.sf==C.of)) goto L_12909d15;
  /* 12909cff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909d02 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12909d04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12909d07 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12909d0d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12909d0f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12909d15:;
  /* 12909d15 jmp 0x12909d2e */
  goto L_12909d2e;
L_12909d17:;
  /* 12909d17 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12909d1d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12909d20 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909d24 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12909d28 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12909d2e:;
  /* 12909d2e jmp 0x1290a6e2 */
  goto L_1290a6e2;
L_12909d33:;
  /* 12909d33 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12909d3d jmp 0x1290a6e2 */
  goto L_1290a6e2;
L_12909d42:;
  /* 12909d42 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909d46 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909d49 jne 0x12909d72 */
  if (!C.zf) goto L_12909d72;
  /* 12909d4b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12909d4e push eax */
  push32((uint32_t)(EAX));
  /* 12909d4f call 0x1290a910 */
  push32(0x12909d54u); f_1290a910();
  /* 12909d54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909d57 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12909d5d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909d64 jge 0x12909d70 */
  if ((C.sf==C.of)) goto L_12909d70;
  /* 12909d66 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12909d70:;
  /* 12909d70 jmp 0x12909d89 */
  goto L_12909d89;
L_12909d72:;
  /* 12909d72 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12909d78 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12909d7b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909d7f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12909d83 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12909d89:;
  /* 12909d89 jmp 0x1290a6e2 */
  goto L_1290a6e2;
L_12909d8e:;
  /* 12909d8e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909d92 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12909d98 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12909d9e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12909da1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12909da7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909dae ja 0x12909e1c */
  if ((!C.cf&&!C.zf)) goto L_12909e1c;
  /* 12909db0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12909db6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12909db8 mov al, byte ptr [ecx + 0x1290a751] */
  AL = (r8((uint32_t)(ECX + 0x1290a751)));
  /* 12909dbe jmp dword ptr [eax*4 + 0x1290a73d] */
  switch (EAX) {
    case 0: goto L_12909dd0;
    case 1: goto L_12909e09;
    case 2: goto L_12909dc5;
    case 3: goto L_12909e13;
    case 4: goto L_12909e1c;
    default: x86_unimpl("switch@0x12909dbe out of table"); return;
  }
L_12909dc5:;
  /* 12909dc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909dc8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12909dcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12909dce jmp 0x12909e1c */
  goto L_12909e1c;
L_12909dd0:;
  /* 12909dd0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12909dd3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12909dd6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909dd9 jne 0x12909dfb */
  if (!C.zf) goto L_12909dfb;
  /* 12909ddb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12909dde movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12909de2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909de5 jne 0x12909dfb */
  if (!C.zf) goto L_12909dfb;
  /* 12909de7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12909dea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12909ded mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12909df0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909df3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12909df6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12909df9 jmp 0x12909e07 */
  goto L_12909e07;
L_12909dfb:;
  /* 12909dfb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12909e02 jmp 0x12909b90 */
  goto L_12909b90;
L_12909e07:;
  /* 12909e07 jmp 0x12909e1c */
  goto L_12909e1c;
L_12909e09:;
  /* 12909e09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909e0c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12909e0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12909e11 jmp 0x12909e1c */
  goto L_12909e1c;
L_12909e13:;
  /* 12909e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909e16 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12909e19 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12909e1c:;
  /* 12909e1c jmp 0x1290a6e2 */
  goto L_1290a6e2;
L_12909e21:;
  /* 12909e21 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12909e25 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12909e2b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12909e31 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12909e34 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12909e3a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909e41 ja 0x1290a507 */
  if ((!C.cf&&!C.zf)) goto L_1290a507;
  /* 12909e47 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12909e4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12909e4f mov cl, byte ptr [edx + 0x1290a7bc] */
  CL = (r8((uint32_t)(EDX + 0x1290a7bc)));
  /* 12909e55 jmp dword ptr [ecx*4 + 0x1290a780] */
  switch (ECX) {
    case 0: goto L_12909e5c;
    case 1: goto L_1290a0f0;
    case 2: goto L_12909f80;
    case 3: goto L_1290a229;
    case 4: goto L_12909eeb;
    case 5: goto L_12909e71;
    case 6: goto L_1290a1fb;
    case 7: goto L_1290a100;
    case 8: goto L_1290a0a5;
    case 9: goto L_1290a275;
    case 10: goto L_1290a21f;
    case 11: goto L_12909f96;
    case 12: goto L_1290a213;
    case 13: goto L_1290a235;
    case 14: goto L_1290a507;
    default: x86_unimpl("switch@0x12909e55 out of table"); return;
  }
L_12909e5c:;
  /* 12909e5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909e5f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12909e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12909e66 jne 0x12909e71 */
  if (!C.zf) goto L_12909e71;
  /* 12909e68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909e6b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12909e6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12909e71:;
  /* 12909e71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909e74 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12909e7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12909e7c je 0x12909eb7 */
  if (C.zf) goto L_12909eb7;
  /* 12909e7e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12909e81 push eax */
  push32((uint32_t)(EAX));
  /* 12909e82 call 0x1290a950 */
  push32(0x12909e87u); f_1290a950();
  /* 12909e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909e8a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12909e8e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12909e92 push ecx */
  push32((uint32_t)(ECX));
  /* 12909e93 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12909e99 push edx */
  push32((uint32_t)(EDX));
  /* 12909e9a call 0x1290ba30 */
  push32(0x12909e9fu); f_1290ba30();
  /* 12909e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909ea2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12909ea5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909ea9 jge 0x12909eb5 */
  if ((C.sf==C.of)) goto L_12909eb5;
  /* 12909eab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12909eb5:;
  /* 12909eb5 jmp 0x12909edd */
  goto L_12909edd;
L_12909eb7:;
  /* 12909eb7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12909eba push eax */
  push32((uint32_t)(EAX));
  /* 12909ebb call 0x1290a910 */
  push32(0x12909ec0u); f_1290a910();
  /* 12909ec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909ec3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12909eca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12909ed0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12909ed6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12909edd:;
  /* 12909edd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12909ee3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12909ee6 jmp 0x1290a507 */
  goto L_1290a507;
L_12909eeb:;
  /* 12909eeb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12909eee push eax */
  push32((uint32_t)(EAX));
  /* 12909eef call 0x1290a910 */
  push32(0x12909ef4u); f_1290a910();
  /* 12909ef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909ef7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12909efd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909f04 je 0x12909f12 */
  if (C.zf) goto L_12909f12;
  /* 12909f06 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12909f0c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909f10 jne 0x12909f2c */
  if (!C.zf) goto L_12909f2c;
L_12909f12:;
  /* 12909f12 mov edx, dword ptr [0x1292cfb0] */
  EDX = (r32((uint32_t)(0x1292cfb0)));
  /* 12909f18 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12909f1b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12909f1e push eax */
  push32((uint32_t)(EAX));
  /* 12909f1f call 0x12905970 */
  push32(0x12909f24u); f_12905970();
  /* 12909f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909f27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12909f2a jmp 0x12909f7b */
  goto L_12909f7b;
L_12909f2c:;
  /* 12909f2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909f2f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12909f35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12909f37 je 0x12909f5c */
  if (C.zf) goto L_12909f5c;
  /* 12909f39 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12909f3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12909f42 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12909f45 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12909f4b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12909f4e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12909f50 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12909f53 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12909f5a jmp 0x12909f7b */
  goto L_12909f7b;
L_12909f5c:;
  /* 12909f5c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12909f63 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12909f69 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12909f6c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12909f6f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12909f75 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12909f78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12909f7b:;
  /* 12909f7b jmp 0x1290a507 */
  goto L_1290a507;
L_12909f80:;
  /* 12909f80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909f83 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12909f89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12909f8b jne 0x12909f96 */
  if (!C.zf) goto L_12909f96;
  /* 12909f8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909f90 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12909f93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12909f96:;
  /* 12909f96 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909f9d jne 0x12909fab */
  if (!C.zf) goto L_12909fab;
  /* 12909f9f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12909fa9 jmp 0x12909fb7 */
  goto L_12909fb7;
L_12909fab:;
  /* 12909fab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12909fb1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12909fb7:;
  /* 12909fb7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12909fbd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12909fc3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12909fc6 push edx */
  push32((uint32_t)(EDX));
  /* 12909fc7 call 0x1290a910 */
  push32(0x12909fccu); f_1290a910();
  /* 12909fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12909fcf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12909fd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12909fd5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12909fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12909fdc je 0x1290a046 */
  if (C.zf) goto L_1290a046;
  /* 12909fde cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12909fe2 jne 0x12909fed */
  if (!C.zf) goto L_12909fed;
  /* 12909fe4 mov ecx, dword ptr [0x1292cfb4] */
  ECX = (r32((uint32_t)(0x1292cfb4)));
  /* 12909fea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12909fed:;
  /* 12909fed mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12909ff4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12909ff7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12909ffd:;
  /* 12909ffd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1290a003 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1290a009 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a00c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1290a012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a014 je 0x1290a036 */
  if (C.zf) goto L_1290a036;
  /* 1290a016 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1290a01c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290a01e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1290a021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a023 je 0x1290a036 */
  if (C.zf) goto L_1290a036;
  /* 1290a025 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1290a02b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a02e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1290a034 jmp 0x12909ffd */
  goto L_12909ffd;
L_1290a036:;
  /* 1290a036 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1290a03c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a03f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1290a041 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1290a044 jmp 0x1290a0a0 */
  goto L_1290a0a0;
L_1290a046:;
  /* 1290a046 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a04a jne 0x1290a054 */
  if (!C.zf) goto L_1290a054;
  /* 1290a04c mov eax, dword ptr [0x1292cfb0] */
  EAX = (r32((uint32_t)(0x1292cfb0)));
  /* 1290a051 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1290a054:;
  /* 1290a054 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a057 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1290a05d:;
  /* 1290a05d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1290a063 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1290a069 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a06c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1290a072 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a074 je 0x1290a094 */
  if (C.zf) goto L_1290a094;
  /* 1290a076 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1290a07c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290a07f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a081 je 0x1290a094 */
  if (C.zf) goto L_1290a094;
  /* 1290a083 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1290a089 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a08c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1290a092 jmp 0x1290a05d */
  goto L_1290a05d;
L_1290a094:;
  /* 1290a094 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1290a09a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a09d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1290a0a0:;
  /* 1290a0a0 jmp 0x1290a507 */
  goto L_1290a507;
L_1290a0a5:;
  /* 1290a0a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1290a0a8 push edx */
  push32((uint32_t)(EDX));
  /* 1290a0a9 call 0x1290a910 */
  push32(0x1290a0aeu); f_1290a910();
  /* 1290a0ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a0b1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1290a0b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a0ba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1290a0bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a0bf je 0x1290a0d3 */
  if (C.zf) goto L_1290a0d3;
  /* 1290a0c1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1290a0c7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1290a0ce mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1290a0d1 jmp 0x1290a0e1 */
  goto L_1290a0e1;
L_1290a0d3:;
  /* 1290a0d3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1290a0d9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1290a0df mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1290a0e1:;
  /* 1290a0e1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1290a0eb jmp 0x1290a507 */
  goto L_1290a507;
L_1290a0f0:;
  /* 1290a0f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1290a0f7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1290a0fa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1290a0fd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1290a100:;
  /* 1290a100 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a103 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1290a105 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290a108 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1290a10e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1290a111 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a118 jge 0x1290a126 */
  if ((C.sf==C.of)) goto L_1290a126;
  /* 1290a11a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1290a124 jmp 0x1290a142 */
  goto L_1290a142;
L_1290a126:;
  /* 1290a126 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a12d jne 0x1290a142 */
  if (!C.zf) goto L_1290a142;
  /* 1290a12f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1290a133 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a136 jne 0x1290a142 */
  if (!C.zf) goto L_1290a142;
  /* 1290a138 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1290a142:;
  /* 1290a142 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290a145 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a148 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1290a14b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290a14e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a151 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290a153 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1290a156 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1290a15c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1290a162 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290a165 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a166 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1290a16c push edx */
  push32((uint32_t)(EDX));
  /* 1290a16d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1290a171 push eax */
  push32((uint32_t)(EAX));
  /* 1290a172 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a175 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a176 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1290a17c push edx */
  push32((uint32_t)(EDX));
  /* 1290a17d call dword ptr [0x1292d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292d3a0))), 0x1290a183u);
  /* 1290a183 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a189 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1290a18e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a190 je 0x1290a1a8 */
  if (C.zf) goto L_1290a1a8;
  /* 1290a192 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a199 jne 0x1290a1a8 */
  if (!C.zf) goto L_1290a1a8;
  /* 1290a19b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a19e push ecx */
  push32((uint32_t)(ECX));
  /* 1290a19f call dword ptr [0x1292d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292d3ac))), 0x1290a1a5u);
  /* 1290a1a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290a1a8:;
  /* 1290a1a8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1290a1ac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a1af jne 0x1290a1ca */
  if (!C.zf) goto L_1290a1ca;
  /* 1290a1b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a1b4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1290a1b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a1bb jne 0x1290a1ca */
  if (!C.zf) goto L_1290a1ca;
  /* 1290a1bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a1c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a1c1 call dword ptr [0x1292d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292d3a4))), 0x1290a1c7u);
  /* 1290a1c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290a1ca:;
  /* 1290a1ca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a1cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1290a1d0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a1d3 jne 0x1290a1e7 */
  if (!C.zf) goto L_1290a1e7;
  /* 1290a1d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a1d8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1290a1db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1290a1de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a1e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a1e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1290a1e7:;
  /* 1290a1e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a1ea push eax */
  push32((uint32_t)(EAX));
  /* 1290a1eb call 0x12905970 */
  push32(0x1290a1f0u); f_12905970();
  /* 1290a1f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a1f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1290a1f6 jmp 0x1290a507 */
  goto L_1290a507;
L_1290a1fb:;
  /* 1290a1fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a1fe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1290a201 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1290a204 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1290a20e jmp 0x1290a295 */
  goto L_1290a295;
L_1290a213:;
  /* 1290a213 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1290a21d jmp 0x1290a295 */
  goto L_1290a295;
L_1290a21f:;
  /* 1290a21f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1290a229:;
  /* 1290a229 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1290a233 jmp 0x1290a23f */
  goto L_1290a23f;
L_1290a235:;
  /* 1290a235 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1290a23f:;
  /* 1290a23f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1290a249 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a24c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1290a252 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a254 je 0x1290a273 */
  if (C.zf) goto L_1290a273;
  /* 1290a256 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1290a25d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1290a263 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a266 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1290a26c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1290a273:;
  /* 1290a273 jmp 0x1290a295 */
  goto L_1290a295;
L_1290a275:;
  /* 1290a275 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1290a27f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a282 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1290a288 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290a28a je 0x1290a295 */
  if (C.zf) goto L_1290a295;
  /* 1290a28c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a28f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1290a292 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1290a295:;
  /* 1290a295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a298 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1290a29d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a29f je 0x1290a2be */
  if (C.zf) goto L_1290a2be;
  /* 1290a2a1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1290a2a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a2a5 call 0x1290a930 */
  push32(0x1290a2aau); f_1290a930();
  /* 1290a2aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a2ad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1290a2b3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1290a2b9 jmp 0x1290a34f */
  goto L_1290a34f;
L_1290a2be:;
  /* 1290a2be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a2c1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1290a2c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a2c6 je 0x1290a310 */
  if (C.zf) goto L_1290a310;
  /* 1290a2c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a2cb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1290a2ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a2d0 je 0x1290a2f0 */
  if (C.zf) goto L_1290a2f0;
  /* 1290a2d2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1290a2d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a2d6 call 0x1290a910 */
  push32(0x1290a2dbu); f_1290a910();
  /* 1290a2db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a2de movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1290a2e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1290a2e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1290a2e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1290a2ee jmp 0x1290a30e */
  goto L_1290a30e;
L_1290a2f0:;
  /* 1290a2f0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1290a2f3 push edx */
  push32((uint32_t)(EDX));
  /* 1290a2f4 call 0x1290a910 */
  push32(0x1290a2f9u); f_1290a910();
  /* 1290a2f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a2fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290a301 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1290a302 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1290a308 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1290a30e:;
  /* 1290a30e jmp 0x1290a34f */
  goto L_1290a34f;
L_1290a310:;
  /* 1290a310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a313 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1290a316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a318 je 0x1290a335 */
  if (C.zf) goto L_1290a335;
  /* 1290a31a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1290a31d push ecx */
  push32((uint32_t)(ECX));
  /* 1290a31e call 0x1290a910 */
  push32(0x1290a323u); f_1290a910();
  /* 1290a323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a326 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1290a327 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1290a32d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1290a333 jmp 0x1290a34f */
  goto L_1290a34f;
L_1290a335:;
  /* 1290a335 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1290a338 push edx */
  push32((uint32_t)(EDX));
  /* 1290a339 call 0x1290a910 */
  push32(0x1290a33eu); f_1290a910();
  /* 1290a33e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a341 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290a343 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1290a349 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1290a34f:;
  /* 1290a34f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a352 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1290a355 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a357 je 0x1290a397 */
  if (C.zf) goto L_1290a397;
  /* 1290a359 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a360 jg 0x1290a397 */
  if ((!C.zf&&C.sf==C.of)) goto L_1290a397;
  /* 1290a362 jl 0x1290a36d */
  if ((C.sf!=C.of)) goto L_1290a36d;
  /* 1290a364 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a36b jae 0x1290a397 */
  if (!C.cf) goto L_1290a397;
L_1290a36d:;
  /* 1290a36d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1290a373 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290a375 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1290a37b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a37e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290a380 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1290a386 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1290a38c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a38f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1290a392 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290a395 jmp 0x1290a3af */
  goto L_1290a3af;
L_1290a397:;
  /* 1290a397 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1290a39d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1290a3a3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1290a3a9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1290a3af:;
  /* 1290a3af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a3b2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1290a3b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a3ba jne 0x1290a3d7 */
  if (!C.zf) goto L_1290a3d7;
  /* 1290a3bc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1290a3c2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1290a3c8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1290a3cb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1290a3d1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1290a3d7:;
  /* 1290a3d7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a3de jge 0x1290a3ec */
  if ((C.sf==C.of)) goto L_1290a3ec;
  /* 1290a3e0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1290a3ea jmp 0x1290a3f5 */
  goto L_1290a3f5;
L_1290a3ec:;
  /* 1290a3ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a3ef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1290a3f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1290a3f5:;
  /* 1290a3f5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1290a3fb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1290a401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a403 jne 0x1290a40c */
  if (!C.zf) goto L_1290a40c;
  /* 1290a405 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1290a40c:;
  /* 1290a40c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1290a40f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1290a412:;
  /* 1290a412 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1290a418 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1290a41e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a421 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1290a427 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a429 jg 0x1290a43f */
  if ((!C.zf&&C.sf==C.of)) goto L_1290a43f;
  /* 1290a42b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1290a431 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1290a437 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290a439 je 0x1290a4c0 */
  if (C.zf) goto L_1290a4c0;
L_1290a43f:;
  /* 1290a43f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1290a445 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1290a446 push edx */
  push32((uint32_t)(EDX));
  /* 1290a447 push eax */
  push32((uint32_t)(EAX));
  /* 1290a448 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1290a44e push edx */
  push32((uint32_t)(EDX));
  /* 1290a44f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1290a455 push eax */
  push32((uint32_t)(EAX));
  /* 1290a456 call 0x129097d0 */
  push32(0x1290a45bu); f_129097d0();
  /* 1290a45b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a45e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1290a464 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1290a46a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1290a46b push edx */
  push32((uint32_t)(EDX));
  /* 1290a46c push eax */
  push32((uint32_t)(EAX));
  /* 1290a46d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1290a473 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a474 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1290a47a push edx */
  push32((uint32_t)(EDX));
  /* 1290a47b call 0x12909760 */
  push32(0x1290a480u); f_12909760();
  /* 1290a480 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1290a486 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1290a48c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a493 jle 0x1290a4a7 */
  if ((C.zf||C.sf!=C.of)) goto L_1290a4a7;
  /* 1290a495 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1290a49b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a4a1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1290a4a7:;
  /* 1290a4a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a4aa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1290a4b0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1290a4b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a4b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a4b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1290a4bb jmp 0x1290a412 */
  goto L_1290a412;
L_1290a4c0:;
  /* 1290a4c0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1290a4c3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a4c6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1290a4c9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a4cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a4cf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1290a4d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a4d5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1290a4da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a4dc je 0x1290a507 */
  if (C.zf) goto L_1290a507;
  /* 1290a4de mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a4e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290a4e4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a4e7 jne 0x1290a4ef */
  if (!C.zf) goto L_1290a4ef;
  /* 1290a4e9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a4ed jne 0x1290a507 */
  if (!C.zf) goto L_1290a507;
L_1290a4ef:;
  /* 1290a4ef mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a4f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a4f5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1290a4f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a4fb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1290a4fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290a501 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a504 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1290a507:;
  /* 1290a507 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a50e jne 0x1290a6e2 */
  if (!C.zf) goto L_1290a6e2;
  /* 1290a514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a517 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1290a51a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a51c je 0x1290a56d */
  if (C.zf) goto L_1290a56d;
  /* 1290a51e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a521 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1290a527 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290a529 je 0x1290a53b */
  if (C.zf) goto L_1290a53b;
  /* 1290a52b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1290a532 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1290a539 jmp 0x1290a56d */
  goto L_1290a56d;
L_1290a53b:;
  /* 1290a53b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a53e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1290a541 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a543 je 0x1290a555 */
  if (C.zf) goto L_1290a555;
  /* 1290a545 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1290a54c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1290a553 jmp 0x1290a56d */
  goto L_1290a56d;
L_1290a555:;
  /* 1290a555 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a558 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1290a55b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a55d je 0x1290a56d */
  if (C.zf) goto L_1290a56d;
  /* 1290a55f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1290a566 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1290a56d:;
  /* 1290a56d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1290a573 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a576 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a579 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1290a57f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a582 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1290a585 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a587 jne 0x1290a5a5 */
  if (!C.zf) goto L_1290a5a5;
  /* 1290a589 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1290a58f push eax */
  push32((uint32_t)(EAX));
  /* 1290a590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a593 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a594 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1290a59a push edx */
  push32((uint32_t)(EDX));
  /* 1290a59b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1290a59d call 0x1290a880 */
  push32(0x1290a5a2u); f_1290a880();
  /* 1290a5a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290a5a5:;
  /* 1290a5a5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1290a5ab push eax */
  push32((uint32_t)(EAX));
  /* 1290a5ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a5af push ecx */
  push32((uint32_t)(ECX));
  /* 1290a5b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290a5b3 push edx */
  push32((uint32_t)(EDX));
  /* 1290a5b4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1290a5ba push eax */
  push32((uint32_t)(EAX));
  /* 1290a5bb call 0x1290a8c0 */
  push32(0x1290a5c0u); f_1290a8c0();
  /* 1290a5c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a5c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a5c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1290a5c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290a5cb je 0x1290a5f3 */
  if (C.zf) goto L_1290a5f3;
  /* 1290a5cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a5d0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1290a5d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a5d5 jne 0x1290a5f3 */
  if (!C.zf) goto L_1290a5f3;
  /* 1290a5d7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1290a5dd push eax */
  push32((uint32_t)(EAX));
  /* 1290a5de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a5e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a5e2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1290a5e8 push edx */
  push32((uint32_t)(EDX));
  /* 1290a5e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1290a5eb call 0x1290a880 */
  push32(0x1290a5f0u); f_1290a880();
  /* 1290a5f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290a5f3:;
  /* 1290a5f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a5f7 je 0x1290a6a1 */
  if (C.zf) goto L_1290a6a1;
  /* 1290a5fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a601 jle 0x1290a6a1 */
  if ((C.zf||C.sf!=C.of)) goto L_1290a6a1;
  /* 1290a607 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a60a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1290a610 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290a613 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1290a619:;
  /* 1290a619 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1290a61f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1290a625 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a628 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1290a62e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a630 je 0x1290a69f */
  if (C.zf) goto L_1290a69f;
  /* 1290a632 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1290a638 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1290a63b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1290a642 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1290a649 push eax */
  push32((uint32_t)(EAX));
  /* 1290a64a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1290a650 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a651 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1290a657 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a65a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1290a660 call 0x1290ba30 */
  push32(0x1290a665u); f_1290ba30();
  /* 1290a665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a668 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1290a66e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a675 jg 0x1290a679 */
  if ((!C.zf&&C.sf==C.of)) goto L_1290a679;
  /* 1290a677 jmp 0x1290a69f */
  goto L_1290a69f;
L_1290a679:;
  /* 1290a679 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1290a67f push eax */
  push32((uint32_t)(EAX));
  /* 1290a680 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a683 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a684 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1290a68a push edx */
  push32((uint32_t)(EDX));
  /* 1290a68b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1290a691 push eax */
  push32((uint32_t)(EAX));
  /* 1290a692 call 0x1290a8c0 */
  push32(0x1290a697u); f_1290a8c0();
  /* 1290a697 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a69a jmp 0x1290a619 */
  goto L_1290a619;
L_1290a69f:;
  /* 1290a69f jmp 0x1290a6bc */
  goto L_1290a6bc;
L_1290a6a1:;
  /* 1290a6a1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1290a6a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a6a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a6ab push edx */
  push32((uint32_t)(EDX));
  /* 1290a6ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290a6af push eax */
  push32((uint32_t)(EAX));
  /* 1290a6b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290a6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a6b4 call 0x1290a8c0 */
  push32(0x1290a6b9u); f_1290a8c0();
  /* 1290a6b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290a6bc:;
  /* 1290a6bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a6bf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1290a6c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290a6c4 je 0x1290a6e2 */
  if (C.zf) goto L_1290a6e2;
  /* 1290a6c6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1290a6cc push eax */
  push32((uint32_t)(EAX));
  /* 1290a6cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a6d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a6d1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1290a6d7 push edx */
  push32((uint32_t)(EDX));
  /* 1290a6d8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1290a6da call 0x1290a880 */
  push32(0x1290a6dfu); f_1290a880();
  /* 1290a6df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290a6e2:;
  /* 1290a6e2 jmp 0x12909af4 */
  goto L_12909af4;
L_1290a6e7:;
  /* 1290a6e7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1290a6ed pop edi */
  EDI = (pop32());
  /* 1290a6ee pop esi */
  ESI = (pop32());
  /* 1290a6ef pop ebx */
  EBX = (pop32());
  /* 1290a6f0 mov esp, ebp */
  ESP = (EBP);
  /* 1290a6f2 pop ebp */
  EBP = (pop32());
  /* 1290a6f3 ret  */
  ESPCHK(0x12909ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x1290a800 (119 bytes, 44 insns) */
void f_1290a800(void) {
  FTRACE(0x1290a800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290a800 push ebp */
  push32((uint32_t)(EBP));
  /* 1290a801 mov ebp, esp */
  EBP = (ESP);
  /* 1290a803 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a804 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a807 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1290a80a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a80d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a810 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1290a813 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a816 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a81a jl 0x1290a842 */
  if ((C.sf!=C.of)) goto L_1290a842;
  /* 1290a81c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a81f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290a821 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1290a824 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1290a826 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1290a82a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1290a830 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1290a833 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a836 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1290a838 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a83b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a83e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1290a840 jmp 0x1290a855 */
  goto L_1290a855;
L_1290a842:;
  /* 1290a842 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a845 push edx */
  push32((uint32_t)(EDX));
  /* 1290a846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a849 push eax */
  push32((uint32_t)(EAX));
  /* 1290a84a call 0x12909850 */
  push32(0x1290a84fu); f_12909850();
  /* 1290a84f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a852 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290a855:;
  /* 1290a855 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a859 jne 0x1290a866 */
  if (!C.zf) goto L_1290a866;
  /* 1290a85b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290a85e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1290a864 jmp 0x1290a873 */
  goto L_1290a873;
L_1290a866:;
  /* 1290a866 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290a869 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1290a86b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a86e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290a871 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1290a873:;
  /* 1290a873 mov esp, ebp */
  ESP = (EBP);
  /* 1290a875 pop ebp */
  EBP = (pop32());
  /* 1290a876 ret  */
  ESPCHK(0x1290a800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x1290a880 (53 bytes, 23 insns) */
void f_1290a880(void) {
  FTRACE(0x1290a880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290a880 push ebp */
  push32((uint32_t)(EBP));
  /* 1290a881 mov ebp, esp */
  EBP = (ESP);
L_1290a883:;
  /* 1290a883 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a886 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a889 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a88c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1290a88f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a891 jle 0x1290a8b3 */
  if ((C.zf||C.sf!=C.of)) goto L_1290a8b3;
  /* 1290a893 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290a896 push edx */
  push32((uint32_t)(EDX));
  /* 1290a897 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290a89a push eax */
  push32((uint32_t)(EAX));
  /* 1290a89b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a89e push ecx */
  push32((uint32_t)(ECX));
  /* 1290a89f call 0x1290a800 */
  push32(0x1290a8a4u); f_1290a800();
  /* 1290a8a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a8a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290a8aa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a8ad jne 0x1290a8b1 */
  if (!C.zf) goto L_1290a8b1;
  /* 1290a8af jmp 0x1290a8b3 */
  goto L_1290a8b3;
L_1290a8b1:;
  /* 1290a8b1 jmp 0x1290a883 */
  goto L_1290a883;
L_1290a8b3:;
  /* 1290a8b3 pop ebp */
  EBP = (pop32());
  /* 1290a8b4 ret  */
  ESPCHK(0x1290a880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x1290a8c0 (74 bytes, 31 insns) */
void f_1290a8c0(void) {
  FTRACE(0x1290a8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290a8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290a8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1290a8c3 push ecx */
  push32((uint32_t)(ECX));
L_1290a8c4:;
  /* 1290a8c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a8c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290a8ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a8cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1290a8d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290a8d2 jle 0x1290a906 */
  if ((C.zf||C.sf!=C.of)) goto L_1290a906;
  /* 1290a8d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290a8d7 push edx */
  push32((uint32_t)(EDX));
  /* 1290a8d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290a8db push eax */
  push32((uint32_t)(EAX));
  /* 1290a8dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a8df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290a8e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290a8e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a8e8 push eax */
  push32((uint32_t)(EAX));
  /* 1290a8e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a8ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a8ef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1290a8f2 call 0x1290a800 */
  push32(0x1290a8f7u); f_1290a800();
  /* 1290a8f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a8fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290a8fd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a900 jne 0x1290a904 */
  if (!C.zf) goto L_1290a904;
  /* 1290a902 jmp 0x1290a906 */
  goto L_1290a906;
L_1290a904:;
  /* 1290a904 jmp 0x1290a8c4 */
  goto L_1290a8c4;
L_1290a906:;
  /* 1290a906 mov esp, ebp */
  ESP = (EBP);
  /* 1290a908 pop ebp */
  EBP = (pop32());
  /* 1290a909 ret  */
  ESPCHK(0x1290a8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x1290a910 (26 bytes, 12 insns) */
void f_1290a910(void) {
  FTRACE(0x1290a910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290a910 push ebp */
  push32((uint32_t)(EBP));
  /* 1290a911 mov ebp, esp */
  EBP = (ESP);
  /* 1290a913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a916 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290a918 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a91b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a91e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1290a920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a923 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290a925 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1290a928 pop ebp */
  EBP = (pop32());
  /* 1290a929 ret  */
  ESPCHK(0x1290a910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a930 @ 0x1290a930 (31 bytes, 14 insns) */
void f_1290a930(void) {
  FTRACE(0x1290a930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290a930 push ebp */
  push32((uint32_t)(EBP));
  /* 1290a931 mov ebp, esp */
  EBP = (ESP);
  /* 1290a933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a936 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290a938 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a93b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a93e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1290a940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a943 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290a945 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290a948 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1290a94a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1290a94d pop ebp */
  EBP = (pop32());
  /* 1290a94e ret  */
  ESPCHK(0x1290a930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a950 @ 0x1290a950 (27 bytes, 12 insns) */
void f_1290a950(void) {
  FTRACE(0x1290a950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290a950 push ebp */
  push32((uint32_t)(EBP));
  /* 1290a951 mov ebp, esp */
  EBP = (ESP);
  /* 1290a953 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a956 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290a958 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a95b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a95e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1290a960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a963 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290a965 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1290a969 pop ebp */
  EBP = (pop32());
  /* 1290a96a ret  */
  ESPCHK(0x1290a950u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1290a970 (145 bytes, 42 insns) */
void f_1290a970(void) {
  FTRACE(0x1290a970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290a970 push ebp */
  push32((uint32_t)(EBP));
  /* 1290a971 mov ebp, esp */
  EBP = (ESP);
  /* 1290a973 push ecx */
  push32((uint32_t)(ECX));
  /* 1290a974 call 0x1290aa20 */
  push32(0x1290a979u); f_1290aa20();
  /* 1290a979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a97c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1290a97e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290a985 jmp 0x1290a990 */
  goto L_1290a990;
L_1290a987:;
  /* 1290a987 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a98a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290a98d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1290a990:;
  /* 1290a990 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a994 jae 0x1290a9ba */
  if (!C.cf) goto L_1290a9ba;
  /* 1290a996 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a999 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290a99c cmp ecx, dword ptr [eax*8 + 0x1292cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1292cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a9a3 jne 0x1290a9b8 */
  if (!C.zf) goto L_1290a9b8;
  /* 1290a9a5 call 0x1290aa10 */
  push32(0x1290a9aau); f_1290aa10();
  /* 1290a9aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290a9ad mov ecx, dword ptr [edx*8 + 0x1292cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1292cfbc)));
  /* 1290a9b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1290a9b6 jmp 0x1290a9fd */
  goto L_1290a9fd;
L_1290a9b8:;
  /* 1290a9b8 jmp 0x1290a987 */
  goto L_1290a987;
L_1290a9ba:;
  /* 1290a9ba cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a9be jb 0x1290a9d3 */
  if (C.cf) goto L_1290a9d3;
  /* 1290a9c0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a9c4 ja 0x1290a9d3 */
  if ((!C.cf&&!C.zf)) goto L_1290a9d3;
  /* 1290a9c6 call 0x1290aa10 */
  push32(0x1290a9cbu); f_1290aa10();
  /* 1290a9cb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1290a9d1 jmp 0x1290a9fd */
  goto L_1290a9fd;
L_1290a9d3:;
  /* 1290a9d3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a9da jb 0x1290a9f2 */
  if (C.cf) goto L_1290a9f2;
  /* 1290a9dc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290a9e3 ja 0x1290a9f2 */
  if ((!C.cf&&!C.zf)) goto L_1290a9f2;
  /* 1290a9e5 call 0x1290aa10 */
  push32(0x1290a9eau); f_1290aa10();
  /* 1290a9ea mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1290a9f0 jmp 0x1290a9fd */
  goto L_1290a9fd;
L_1290a9f2:;
  /* 1290a9f2 call 0x1290aa10 */
  push32(0x1290a9f7u); f_1290aa10();
  /* 1290a9f7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1290a9fd:;
  /* 1290a9fd mov esp, ebp */
  ESP = (EBP);
  /* 1290a9ff pop ebp */
  EBP = (pop32());
  /* 1290aa00 ret  */
  ESPCHK(0x1290a970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa10 @ 0x1290aa10 (13 bytes, 6 insns) */
void f_1290aa10(void) {
  FTRACE(0x1290aa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290aa10 push ebp */
  push32((uint32_t)(EBP));
  /* 1290aa11 mov ebp, esp */
  EBP = (ESP);
  /* 1290aa13 call 0x12902580 */
  push32(0x1290aa18u); f_12902580();
  /* 1290aa18 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290aa1b pop ebp */
  EBP = (pop32());
  /* 1290aa1c ret  */
  ESPCHK(0x1290aa10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x1290aa20 (13 bytes, 6 insns) */
void f_1290aa20(void) {
  FTRACE(0x1290aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1290aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1290aa23 call 0x12902580 */
  push32(0x1290aa28u); f_12902580();
  /* 1290aa28 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290aa2b pop ebp */
  EBP = (pop32());
  /* 1290aa2c ret  */
  ESPCHK(0x1290aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa30 @ 0x1290aa30 (664 bytes, 267 insns) [15 switch table(s)] */
void f_1290aa30(void) {
  FTRACE(0x1290aa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290aa30 push ebp */
  push32((uint32_t)(EBP));
  /* 1290aa31 mov ebp, esp */
  EBP = (ESP);
  /* 1290aa33 push edi */
  push32((uint32_t)(EDI));
  /* 1290aa34 push esi */
  push32((uint32_t)(ESI));
  /* 1290aa35 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1290aa38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290aa3b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1290aa3e mov eax, ecx */
  EAX = (ECX);
  /* 1290aa40 mov edx, ecx */
  EDX = (ECX);
  /* 1290aa42 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290aa44 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290aa46 jbe 0x1290aa50 */
  if ((C.cf||C.zf)) goto L_1290aa50;
  /* 1290aa48 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290aa4a jb 0x1290abc8 */
  if (C.cf) goto L_1290abc8;
L_1290aa50:;
  /* 1290aa50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1290aa56 jne 0x1290aa6c */
  if (!C.zf) goto L_1290aa6c;
  /* 1290aa58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290aa5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1290aa5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290aa61 jb 0x1290aa8c */
  if (C.cf) goto L_1290aa8c;
  /* 1290aa63 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1290aa65 jmp dword ptr [edx*4 + 0x1290ab78] */
  switch (EDX) {
    case 0: goto L_1290ab88;
    case 1: goto L_1290ab90;
    case 2: goto L_1290ab9c;
    case 3: goto L_1290abb0;
    default: x86_unimpl("switch@0x1290aa65 out of table"); return;
  }
L_1290aa6c:;
  /* 1290aa6c mov eax, edi */
  EAX = (EDI);
  /* 1290aa6e mov edx, 3 */
  EDX = (0x3u);
  /* 1290aa73 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290aa76 jb 0x1290aa84 */
  if (C.cf) goto L_1290aa84;
  /* 1290aa78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1290aa7b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290aa7d jmp dword ptr [eax*4 + 0x1290aa90] */
  switch (EAX) {
    case 1: goto L_1290aaa0;
    case 2: goto L_1290aacc;
    case 3: goto L_1290aaf0;
    default: x86_unimpl("switch@0x1290aa7d out of table"); return;
  }
L_1290aa84:;
  /* 1290aa84 jmp dword ptr [ecx*4 + 0x1290ab88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1290ab88)))); return;
  /* 1290aa8b nop  */
  /* nop */
L_1290aa8c:;
  /* 1290aa8c jmp dword ptr [ecx*4 + 0x1290ab0c] */
  switch (ECX) {
    case 0: goto L_1290ab6f;
    case 1: goto L_1290ab5c;
    case 2: goto L_1290ab54;
    case 3: goto L_1290ab4c;
    case 4: goto L_1290ab44;
    case 5: goto L_1290ab3c;
    case 6: goto L_1290ab34;
    case 7: goto L_1290ab2c;
    default: x86_unimpl("switch@0x1290aa8c out of table"); return;
  }
  /* 1290aa93 nop  */
  /* nop */
L_1290aaa0:;
  /* 1290aaa0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1290aaa2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1290aaa4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1290aaa6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1290aaa9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1290aaac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1290aaaf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290aab2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1290aab5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1290aab8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1290aabb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290aabe jb 0x1290aa8c */
  if (C.cf) goto L_1290aa8c;
  /* 1290aac0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1290aac2 jmp dword ptr [edx*4 + 0x1290ab78] */
  switch (EDX) {
    case 0: goto L_1290ab88;
    case 1: goto L_1290ab90;
    case 2: goto L_1290ab9c;
    case 3: goto L_1290abb0;
    default: x86_unimpl("switch@0x1290aac2 out of table"); return;
  }
  /* 1290aac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1290aacc:;
  /* 1290aacc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1290aace mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1290aad0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1290aad2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1290aad5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290aad8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1290aadb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1290aade add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1290aae1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290aae4 jb 0x1290aa8c */
  if (C.cf) goto L_1290aa8c;
  /* 1290aae6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1290aae8 jmp dword ptr [edx*4 + 0x1290ab78] */
  switch (EDX) {
    case 0: goto L_1290ab88;
    case 1: goto L_1290ab90;
    case 2: goto L_1290ab9c;
    case 3: goto L_1290abb0;
    default: x86_unimpl("switch@0x1290aae8 out of table"); return;
  }
  /* 1290aaef nop  */
  /* nop */
L_1290aaf0:;
  /* 1290aaf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1290aaf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1290aaf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1290aaf6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1290aaf7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290aafa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1290aafb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290aafe jb 0x1290aa8c */
  if (C.cf) goto L_1290aa8c;
  /* 1290ab00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1290ab02 jmp dword ptr [edx*4 + 0x1290ab78] */
  switch (EDX) {
    case 0: goto L_1290ab88;
    case 1: goto L_1290ab90;
    case 2: goto L_1290ab9c;
    case 3: goto L_1290abb0;
    default: x86_unimpl("switch@0x1290ab02 out of table"); return;
  }
  /* 1290ab09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1290ab2c:;
  /* 1290ab2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1290ab30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1290ab34:;
  /* 1290ab34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1290ab38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1290ab3c:;
  /* 1290ab3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1290ab40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1290ab44:;
  /* 1290ab44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1290ab48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1290ab4c:;
  /* 1290ab4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1290ab50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1290ab54:;
  /* 1290ab54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1290ab58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1290ab5c:;
  /* 1290ab5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1290ab60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1290ab64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1290ab6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ab6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1290ab6f:;
  /* 1290ab6f jmp dword ptr [edx*4 + 0x1290ab78] */
  switch (EDX) {
    case 0: goto L_1290ab88;
    case 1: goto L_1290ab90;
    case 2: goto L_1290ab9c;
    case 3: goto L_1290abb0;
    default: x86_unimpl("switch@0x1290ab6f out of table"); return;
  }
  /* 1290ab76 mov edi, edi */
  EDI = (EDI);
L_1290ab88:;
  /* 1290ab88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ab8b pop esi */
  ESI = (pop32());
  /* 1290ab8c pop edi */
  EDI = (pop32());
  /* 1290ab8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290ab8e ret  */
  ESPCHK(0x1290aa30u, _esp0);
  ESP += 4; return;
  /* 1290ab8f nop  */
  /* nop */
L_1290ab90:;
  /* 1290ab90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1290ab92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1290ab94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ab97 pop esi */
  ESI = (pop32());
  /* 1290ab98 pop edi */
  EDI = (pop32());
  /* 1290ab99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290ab9a ret  */
  ESPCHK(0x1290aa30u, _esp0);
  ESP += 4; return;
  /* 1290ab9b nop  */
  /* nop */
L_1290ab9c:;
  /* 1290ab9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1290ab9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1290aba0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1290aba3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1290aba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290aba9 pop esi */
  ESI = (pop32());
  /* 1290abaa pop edi */
  EDI = (pop32());
  /* 1290abab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290abac ret  */
  ESPCHK(0x1290aa30u, _esp0);
  ESP += 4; return;
  /* 1290abad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1290abb0:;
  /* 1290abb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1290abb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1290abb4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1290abb7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1290abba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1290abbd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1290abc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290abc3 pop esi */
  ESI = (pop32());
  /* 1290abc4 pop edi */
  EDI = (pop32());
  /* 1290abc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290abc6 ret  */
  ESPCHK(0x1290aa30u, _esp0);
  ESP += 4; return;
  /* 1290abc7 nop  */
  /* nop */
L_1290abc8:;
  /* 1290abc8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1290abcc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1290abd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1290abd6 jne 0x1290abfc */
  if (!C.zf) goto L_1290abfc;
  /* 1290abd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290abdb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1290abde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290abe1 jb 0x1290abf0 */
  if (C.cf) goto L_1290abf0;
  /* 1290abe3 std  */
  C.df=1;
  /* 1290abe4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1290abe6 cld  */
  C.df=0;
  /* 1290abe7 jmp dword ptr [edx*4 + 0x1290ad10] */
  switch (EDX) {
    case 0: goto L_1290ad20;
    case 1: goto L_1290ad28;
    case 2: goto L_1290ad38;
    case 3: goto L_1290ad4c;
    default: x86_unimpl("switch@0x1290abe7 out of table"); return;
  }
  /* 1290abee mov edi, edi */
  EDI = (EDI);
L_1290abf0:;
  /* 1290abf0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290abf2 jmp dword ptr [ecx*4 + 0x1290acc0] */
  switch (ECX) {
    case 0: goto L_1290ad07;
    default: x86_unimpl("switch@0x1290abf2 out of table"); return;
  }
  /* 1290abf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1290abfc:;
  /* 1290abfc mov eax, edi */
  EAX = (EDI);
  /* 1290abfe mov edx, 3 */
  EDX = (0x3u);
  /* 1290ac03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ac06 jb 0x1290ac14 */
  if (C.cf) goto L_1290ac14;
  /* 1290ac08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1290ac0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ac0d jmp dword ptr [eax*4 + 0x1290ac18] */
  switch (EAX) {
    case 1: goto L_1290ac28;
    case 2: goto L_1290ac48;
    case 3: goto L_1290ac70;
    default: x86_unimpl("switch@0x1290ac0d out of table"); return;
  }
L_1290ac14:;
  /* 1290ac14 jmp dword ptr [ecx*4 + 0x1290ad10] */
  switch (ECX) {
    case 0: goto L_1290ad20;
    case 1: goto L_1290ad28;
    case 2: goto L_1290ad38;
    case 3: goto L_1290ad4c;
    default: x86_unimpl("switch@0x1290ac14 out of table"); return;
  }
  /* 1290ac1b nop  */
  /* nop */
L_1290ac28:;
  /* 1290ac28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290ac2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1290ac2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1290ac30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1290ac31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290ac34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1290ac35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ac38 jb 0x1290abf0 */
  if (C.cf) goto L_1290abf0;
  /* 1290ac3a std  */
  C.df=1;
  /* 1290ac3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1290ac3d cld  */
  C.df=0;
  /* 1290ac3e jmp dword ptr [edx*4 + 0x1290ad10] */
  switch (EDX) {
    case 0: goto L_1290ad20;
    case 1: goto L_1290ad28;
    case 2: goto L_1290ad38;
    case 3: goto L_1290ad4c;
    default: x86_unimpl("switch@0x1290ac3e out of table"); return;
  }
  /* 1290ac45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1290ac48:;
  /* 1290ac48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290ac4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1290ac4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1290ac50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1290ac53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290ac56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1290ac59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ac5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ac5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ac62 jb 0x1290abf0 */
  if (C.cf) goto L_1290abf0;
  /* 1290ac64 std  */
  C.df=1;
  /* 1290ac65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1290ac67 cld  */
  C.df=0;
  /* 1290ac68 jmp dword ptr [edx*4 + 0x1290ad10] */
  switch (EDX) {
    case 0: goto L_1290ad20;
    case 1: goto L_1290ad28;
    case 2: goto L_1290ad38;
    case 3: goto L_1290ad4c;
    default: x86_unimpl("switch@0x1290ac68 out of table"); return;
  }
  /* 1290ac6f nop  */
  /* nop */
L_1290ac70:;
  /* 1290ac70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290ac73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1290ac75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1290ac78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1290ac7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1290ac7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1290ac81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1290ac84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1290ac87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ac8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ac8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ac90 jb 0x1290abf0 */
  if (C.cf) goto L_1290abf0;
  /* 1290ac96 std  */
  C.df=1;
  /* 1290ac97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1290ac99 cld  */
  C.df=0;
  /* 1290ac9a jmp dword ptr [edx*4 + 0x1290ad10] */
  switch (EDX) {
    case 0: goto L_1290ad20;
    case 1: goto L_1290ad28;
    case 2: goto L_1290ad38;
    case 3: goto L_1290ad4c;
    default: x86_unimpl("switch@0x1290ac9a out of table"); return;
  }
  /* 1290aca1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1290aca4 les ebp, ptr [eax + edx*4 - 0x6f5333ee] */
  x86_unimpl("les @ 0x1290aca4");
  /* 1290acab adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1290acad lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1290acae nop  */
  /* nop */
  /* 1290acaf adc bl, ah */
  { uint32_t _a=(BL),_b=(AH),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1290acb1 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1290acb2 nop  */
  /* nop */
  /* 1290acb3 adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1290acb5 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1290acb6 nop  */
  /* nop */
  /* 1290acb7 adc ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1290acb9 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1290acba nop  */
  /* nop */
  /* 1290acbb adc dh, ah */
  { uint32_t _a=(C.d.b.h),_b=(AH),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1290acbd lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1290acbe nop  */
  /* nop */
  /* 1290acc4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1290acc8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1290accc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1290acd0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1290acd4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1290acd8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1290acdc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1290ace0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1290ace4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1290ace8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1290acec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1290acf0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1290acf4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1290acf8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1290acfc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1290ad03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ad05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1290ad07:;
  /* 1290ad07 jmp dword ptr [edx*4 + 0x1290ad10] */
  switch (EDX) {
    case 0: goto L_1290ad20;
    case 1: goto L_1290ad28;
    case 2: goto L_1290ad38;
    case 3: goto L_1290ad4c;
    default: x86_unimpl("switch@0x1290ad07 out of table"); return;
  }
  /* 1290ad0e mov edi, edi */
  EDI = (EDI);
L_1290ad20:;
  /* 1290ad20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ad23 pop esi */
  ESI = (pop32());
  /* 1290ad24 pop edi */
  EDI = (pop32());
  /* 1290ad25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290ad26 ret  */
  ESPCHK(0x1290aa30u, _esp0);
  ESP += 4; return;
  /* 1290ad27 nop  */
  /* nop */
L_1290ad28:;
  /* 1290ad28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290ad2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1290ad2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ad31 pop esi */
  ESI = (pop32());
  /* 1290ad32 pop edi */
  EDI = (pop32());
  /* 1290ad33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290ad34 ret  */
  ESPCHK(0x1290aa30u, _esp0);
  ESP += 4; return;
  /* 1290ad35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1290ad38:;
  /* 1290ad38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290ad3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1290ad3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1290ad41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1290ad44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ad47 pop esi */
  ESI = (pop32());
  /* 1290ad48 pop edi */
  EDI = (pop32());
  /* 1290ad49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290ad4a ret  */
  ESPCHK(0x1290aa30u, _esp0);
  ESP += 4; return;
  /* 1290ad4b nop  */
  /* nop */
L_1290ad4c:;
  /* 1290ad4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1290ad4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1290ad52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1290ad55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1290ad58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1290ad5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1290ad5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ad61 pop esi */
  ESI = (pop32());
  /* 1290ad62 pop edi */
  EDI = (pop32());
  /* 1290ad63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290ad64 ret  */
  ESPCHK(0x1290aa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad70 @ 0x1290ad70 (421 bytes, 148 insns) */
void f_1290ad70(void) {
  FTRACE(0x1290ad70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290ad70 push ebp */
  push32((uint32_t)(EBP));
  /* 1290ad71 mov ebp, esp */
  EBP = (ESP);
  /* 1290ad73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1290ad75 push 0x12929f28 */
  push32((uint32_t)(0x12929f28u));
  /* 1290ad7a push 0x1290bc48 */
  push32((uint32_t)(0x1290bc48u));
  /* 1290ad7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1290ad85 push eax */
  push32((uint32_t)(EAX));
  /* 1290ad86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1290ad8d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ad90 push ebx */
  push32((uint32_t)(EBX));
  /* 1290ad91 push esi */
  push32((uint32_t)(ESI));
  /* 1290ad92 push edi */
  push32((uint32_t)(EDI));
  /* 1290ad93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1290ad96 cmp dword ptr [0x1292e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ad9d jne 0x1290adee */
  if (!C.zf) goto L_1290adee;
  /* 1290ad9f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1290ada2 push eax */
  push32((uint32_t)(EAX));
  /* 1290ada3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290ada5 push 0x12929f24 */
  push32((uint32_t)(0x12929f24u));
  /* 1290adaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1290adac call dword ptr [0x12930324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930324))), 0x1290adb2u);
  /* 1290adb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290adb4 je 0x1290adc2 */
  if (C.zf) goto L_1290adc2;
  /* 1290adb6 mov dword ptr [0x1292e67c], 1 */
  w32((uint32_t)(0x1292e67c), (0x1u));
  /* 1290adc0 jmp 0x1290adee */
  goto L_1290adee;
L_1290adc2:;
  /* 1290adc2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1290adc5 push ecx */
  push32((uint32_t)(ECX));
  /* 1290adc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290adc8 push 0x12929f20 */
  push32((uint32_t)(0x12929f20u));
  /* 1290adcd push 1 */
  push32((uint32_t)(0x1u));
  /* 1290adcf push 0 */
  push32((uint32_t)(0x0u));
  /* 1290add1 call dword ptr [0x12930320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930320))), 0x1290add7u);
  /* 1290add7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290add9 je 0x1290ade7 */
  if (C.zf) goto L_1290ade7;
  /* 1290addb mov dword ptr [0x1292e67c], 2 */
  w32((uint32_t)(0x1292e67c), (0x2u));
  /* 1290ade5 jmp 0x1290adee */
  goto L_1290adee;
L_1290ade7:;
  /* 1290ade7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290ade9 jmp 0x1290af18 */
  goto L_1290af18;
L_1290adee:;
  /* 1290adee cmp dword ptr [0x1292e67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1292e67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290adf5 jne 0x1290ae25 */
  if (!C.zf) goto L_1290ae25;
  /* 1290adf7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290adfb jne 0x1290ae06 */
  if (!C.zf) goto L_1290ae06;
  /* 1290adfd mov edx, dword ptr [0x1292e688] */
  EDX = (r32((uint32_t)(0x1292e688)));
  /* 1290ae03 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1290ae06:;
  /* 1290ae06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290ae09 push eax */
  push32((uint32_t)(EAX));
  /* 1290ae0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ae0d push ecx */
  push32((uint32_t)(ECX));
  /* 1290ae0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290ae11 push edx */
  push32((uint32_t)(EDX));
  /* 1290ae12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ae15 push eax */
  push32((uint32_t)(EAX));
  /* 1290ae16 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1290ae19 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ae1a call dword ptr [0x12930320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930320))), 0x1290ae20u);
  /* 1290ae20 jmp 0x1290af18 */
  goto L_1290af18;
L_1290ae25:;
  /* 1290ae25 cmp dword ptr [0x1292e67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ae2c jne 0x1290af16 */
  if (!C.zf) goto L_1290af16;
  /* 1290ae32 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ae36 jne 0x1290ae41 */
  if (!C.zf) goto L_1290ae41;
  /* 1290ae38 mov edx, dword ptr [0x1292e698] */
  EDX = (r32((uint32_t)(0x1292e698)));
  /* 1290ae3e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1290ae41:;
  /* 1290ae41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290ae43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290ae45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ae48 push eax */
  push32((uint32_t)(EAX));
  /* 1290ae49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290ae4c push ecx */
  push32((uint32_t)(ECX));
  /* 1290ae4d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1290ae50 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290ae52 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ae54 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1290ae57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ae5a push edx */
  push32((uint32_t)(EDX));
  /* 1290ae5b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290ae5e push eax */
  push32((uint32_t)(EAX));
  /* 1290ae5f call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x1290ae65u);
  /* 1290ae65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1290ae68 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ae6c jne 0x1290ae75 */
  if (!C.zf) goto L_1290ae75;
  /* 1290ae6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290ae70 jmp 0x1290af18 */
  goto L_1290af18;
L_1290ae75:;
  /* 1290ae75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290ae7c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290ae7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1290ae81 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ae84 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1290ae86 call 0x12905ce0 */
  push32(0x1290ae8bu); f_12905ce0();
  /* 1290ae8b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1290ae8e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1290ae91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290ae94 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1290ae97 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290ae9a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1290ae9c push edx */
  push32((uint32_t)(EDX));
  /* 1290ae9d push 0 */
  push32((uint32_t)(0x0u));
  /* 1290ae9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290aea2 push eax */
  push32((uint32_t)(EAX));
  /* 1290aea3 call 0x129068b0 */
  push32(0x1290aea8u); f_129068b0();
  /* 1290aea8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290aeab mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1290aeb2 jmp 0x1290aecb */
  goto L_1290aecb;
  /* 1290aeb4 mov eax, 1 */
  EAX = (0x1u);
  /* 1290aeb9 ret  */
  ESPCHK(0x1290ad70u, _esp0);
  ESP += 4; return;
  /* 1290aeba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1290aebd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1290aec4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1290aecb:;
  /* 1290aecb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290aecf jne 0x1290aed5 */
  if (!C.zf) goto L_1290aed5;
  /* 1290aed1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290aed3 jmp 0x1290af18 */
  goto L_1290af18;
L_1290aed5:;
  /* 1290aed5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290aed8 push ecx */
  push32((uint32_t)(ECX));
  /* 1290aed9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290aedc push edx */
  push32((uint32_t)(EDX));
  /* 1290aedd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290aee0 push eax */
  push32((uint32_t)(EAX));
  /* 1290aee1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290aee4 push ecx */
  push32((uint32_t)(ECX));
  /* 1290aee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290aee7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290aeea push edx */
  push32((uint32_t)(EDX));
  /* 1290aeeb call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x1290aef1u);
  /* 1290aef1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1290aef4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290aef8 jne 0x1290aefe */
  if (!C.zf) goto L_1290aefe;
  /* 1290aefa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290aefc jmp 0x1290af18 */
  goto L_1290af18;
L_1290aefe:;
  /* 1290aefe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290af01 push eax */
  push32((uint32_t)(EAX));
  /* 1290af02 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1290af05 push ecx */
  push32((uint32_t)(ECX));
  /* 1290af06 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290af09 push edx */
  push32((uint32_t)(EDX));
  /* 1290af0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290af0d push eax */
  push32((uint32_t)(EAX));
  /* 1290af0e call dword ptr [0x12930324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930324))), 0x1290af14u);
  /* 1290af14 jmp 0x1290af18 */
  goto L_1290af18;
L_1290af16:;
  /* 1290af16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290af18:;
  /* 1290af18 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1290af1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290af1e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1290af25 pop edi */
  EDI = (pop32());
  /* 1290af26 pop esi */
  ESI = (pop32());
  /* 1290af27 pop ebx */
  EBX = (pop32());
  /* 1290af28 mov esp, ebp */
  ESP = (EBP);
  /* 1290af2a pop ebp */
  EBP = (pop32());
  /* 1290af2b ret  */
  ESPCHK(0x1290ad70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af30 @ 0x1290af30 (727 bytes, 263 insns) */
void f_1290af30(void) {
  FTRACE(0x1290af30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290af30 push ebp */
  push32((uint32_t)(EBP));
  /* 1290af31 mov ebp, esp */
  EBP = (ESP);
  /* 1290af33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1290af35 push 0x12929f38 */
  push32((uint32_t)(0x12929f38u));
  /* 1290af3a push 0x1290bc48 */
  push32((uint32_t)(0x1290bc48u));
  /* 1290af3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1290af45 push eax */
  push32((uint32_t)(EAX));
  /* 1290af46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1290af4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290af50 push ebx */
  push32((uint32_t)(EBX));
  /* 1290af51 push esi */
  push32((uint32_t)(ESI));
  /* 1290af52 push edi */
  push32((uint32_t)(EDI));
  /* 1290af53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1290af56 cmp dword ptr [0x1292e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290af5d jne 0x1290afb6 */
  if (!C.zf) goto L_1290afb6;
  /* 1290af5f push 0 */
  push32((uint32_t)(0x0u));
  /* 1290af61 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290af63 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290af65 push 0x12929f24 */
  push32((uint32_t)(0x12929f24u));
  /* 1290af6a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1290af6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1290af71 call dword ptr [0x12930328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930328))), 0x1290af77u);
  /* 1290af77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290af79 je 0x1290af87 */
  if (C.zf) goto L_1290af87;
  /* 1290af7b mov dword ptr [0x1292e6a0], 1 */
  w32((uint32_t)(0x1292e6a0), (0x1u));
  /* 1290af85 jmp 0x1290afb6 */
  goto L_1290afb6;
L_1290af87:;
  /* 1290af87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290af89 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290af8b push 1 */
  push32((uint32_t)(0x1u));
  /* 1290af8d push 0x12929f20 */
  push32((uint32_t)(0x12929f20u));
  /* 1290af92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1290af97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290af99 call dword ptr [0x12930308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930308))), 0x1290af9fu);
  /* 1290af9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290afa1 je 0x1290afaf */
  if (C.zf) goto L_1290afaf;
  /* 1290afa3 mov dword ptr [0x1292e6a0], 2 */
  w32((uint32_t)(0x1292e6a0), (0x2u));
  /* 1290afad jmp 0x1290afb6 */
  goto L_1290afb6;
L_1290afaf:;
  /* 1290afaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290afb1 jmp 0x1290b221 */
  goto L_1290b221;
L_1290afb6:;
  /* 1290afb6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290afba jle 0x1290afcf */
  if ((C.zf||C.sf!=C.of)) goto L_1290afcf;
  /* 1290afbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290afbf push eax */
  push32((uint32_t)(EAX));
  /* 1290afc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290afc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290afc4 call 0x1290b240 */
  push32(0x1290afc9u); f_1290b240();
  /* 1290afc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290afcc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1290afcf:;
  /* 1290afcf cmp dword ptr [0x1292e6a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290afd6 jne 0x1290affb */
  if (!C.zf) goto L_1290affb;
  /* 1290afd8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1290afdb push edx */
  push32((uint32_t)(EDX));
  /* 1290afdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290afdf push eax */
  push32((uint32_t)(EAX));
  /* 1290afe0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290afe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290afe4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290afe7 push edx */
  push32((uint32_t)(EDX));
  /* 1290afe8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290afeb push eax */
  push32((uint32_t)(EAX));
  /* 1290afec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290afef push ecx */
  push32((uint32_t)(ECX));
  /* 1290aff0 call dword ptr [0x12930308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930308))), 0x1290aff6u);
  /* 1290aff6 jmp 0x1290b221 */
  goto L_1290b221;
L_1290affb:;
  /* 1290affb cmp dword ptr [0x1292e6a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b002 jne 0x1290b21f */
  if (!C.zf) goto L_1290b21f;
  /* 1290b008 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b00c jne 0x1290b017 */
  if (!C.zf) goto L_1290b017;
  /* 1290b00e mov edx, dword ptr [0x1292e698] */
  EDX = (r32((uint32_t)(0x1292e698)));
  /* 1290b014 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1290b017:;
  /* 1290b017 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b019 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b01b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290b01e push eax */
  push32((uint32_t)(EAX));
  /* 1290b01f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290b022 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b023 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1290b026 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290b028 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b02a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1290b02d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b030 push edx */
  push32((uint32_t)(EDX));
  /* 1290b031 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1290b034 push eax */
  push32((uint32_t)(EAX));
  /* 1290b035 call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x1290b03bu);
  /* 1290b03b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1290b03e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b042 jne 0x1290b04b */
  if (!C.zf) goto L_1290b04b;
  /* 1290b044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b046 jmp 0x1290b221 */
  goto L_1290b221;
L_1290b04b:;
  /* 1290b04b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290b052 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290b055 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1290b057 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b05a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1290b05c call 0x12905ce0 */
  push32(0x1290b061u); f_12905ce0();
  /* 1290b061 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1290b064 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1290b067 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290b06a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1290b06d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1290b074 jmp 0x1290b08d */
  goto L_1290b08d;
  /* 1290b076 mov eax, 1 */
  EAX = (0x1u);
  /* 1290b07b ret  */
  ESPCHK(0x1290af30u, _esp0);
  ESP += 4; return;
  /* 1290b07c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1290b07f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1290b086 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1290b08d:;
  /* 1290b08d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b091 jne 0x1290b09a */
  if (!C.zf) goto L_1290b09a;
  /* 1290b093 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b095 jmp 0x1290b221 */
  goto L_1290b221;
L_1290b09a:;
  /* 1290b09a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290b09d push edx */
  push32((uint32_t)(EDX));
  /* 1290b09e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290b0a1 push eax */
  push32((uint32_t)(EAX));
  /* 1290b0a2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290b0a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b0a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290b0a9 push edx */
  push32((uint32_t)(EDX));
  /* 1290b0aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1290b0ac mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1290b0af push eax */
  push32((uint32_t)(EAX));
  /* 1290b0b0 call dword ptr [0x1293031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293031c))), 0x1290b0b6u);
  /* 1290b0b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290b0b8 jne 0x1290b0c1 */
  if (!C.zf) goto L_1290b0c1;
  /* 1290b0ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b0bc jmp 0x1290b221 */
  goto L_1290b221;
L_1290b0c1:;
  /* 1290b0c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b0c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b0c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290b0c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b0c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290b0cc push edx */
  push32((uint32_t)(EDX));
  /* 1290b0cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b0d0 push eax */
  push32((uint32_t)(EAX));
  /* 1290b0d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b0d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b0d5 call dword ptr [0x12930328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930328))), 0x1290b0dbu);
  /* 1290b0db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1290b0de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b0e2 jne 0x1290b0eb */
  if (!C.zf) goto L_1290b0eb;
  /* 1290b0e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b0e6 jmp 0x1290b221 */
  goto L_1290b221;
L_1290b0eb:;
  /* 1290b0eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b0ee and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1290b0f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290b0f6 je 0x1290b13b */
  if (C.zf) goto L_1290b13b;
  /* 1290b0f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b0fc je 0x1290b136 */
  if (C.zf) goto L_1290b136;
  /* 1290b0fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1290b101 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b104 jle 0x1290b10d */
  if ((C.zf||C.sf!=C.of)) goto L_1290b10d;
  /* 1290b106 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b108 jmp 0x1290b221 */
  goto L_1290b221;
L_1290b10d:;
  /* 1290b10d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1290b110 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b111 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290b114 push edx */
  push32((uint32_t)(EDX));
  /* 1290b115 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290b118 push eax */
  push32((uint32_t)(EAX));
  /* 1290b119 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290b11c push ecx */
  push32((uint32_t)(ECX));
  /* 1290b11d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b120 push edx */
  push32((uint32_t)(EDX));
  /* 1290b121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b124 push eax */
  push32((uint32_t)(EAX));
  /* 1290b125 call dword ptr [0x12930328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930328))), 0x1290b12bu);
  /* 1290b12b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290b12d jne 0x1290b136 */
  if (!C.zf) goto L_1290b136;
  /* 1290b12f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b131 jmp 0x1290b221 */
  goto L_1290b221;
L_1290b136:;
  /* 1290b136 jmp 0x1290b21a */
  goto L_1290b21a;
L_1290b13b:;
  /* 1290b13b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1290b13e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1290b141 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1290b148 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290b14b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1290b14d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b150 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1290b152 call 0x12905ce0 */
  push32(0x1290b157u); f_12905ce0();
  /* 1290b157 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1290b15a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1290b15d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1290b160 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1290b163 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1290b16a jmp 0x1290b183 */
  goto L_1290b183;
  /* 1290b16c mov eax, 1 */
  EAX = (0x1u);
  /* 1290b171 ret  */
  ESPCHK(0x1290af30u, _esp0);
  ESP += 4; return;
  /* 1290b172 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1290b175 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1290b17c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1290b183:;
  /* 1290b183 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b187 jne 0x1290b190 */
  if (!C.zf) goto L_1290b190;
  /* 1290b189 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b18b jmp 0x1290b221 */
  goto L_1290b221;
L_1290b190:;
  /* 1290b190 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290b193 push eax */
  push32((uint32_t)(EAX));
  /* 1290b194 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290b197 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b198 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290b19b push edx */
  push32((uint32_t)(EDX));
  /* 1290b19c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290b19f push eax */
  push32((uint32_t)(EAX));
  /* 1290b1a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b1a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b1a7 push edx */
  push32((uint32_t)(EDX));
  /* 1290b1a8 call dword ptr [0x12930328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930328))), 0x1290b1aeu);
  /* 1290b1ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290b1b0 jne 0x1290b1b6 */
  if (!C.zf) goto L_1290b1b6;
  /* 1290b1b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b1b4 jmp 0x1290b221 */
  goto L_1290b221;
L_1290b1b6:;
  /* 1290b1b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b1ba jne 0x1290b1ea */
  if (!C.zf) goto L_1290b1ea;
  /* 1290b1bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b1be push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b1c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b1c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b1c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290b1c7 push eax */
  push32((uint32_t)(EAX));
  /* 1290b1c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290b1cb push ecx */
  push32((uint32_t)(ECX));
  /* 1290b1cc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1290b1d1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1290b1d4 push edx */
  push32((uint32_t)(EDX));
  /* 1290b1d5 call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x1290b1dbu);
  /* 1290b1db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1290b1de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b1e2 jne 0x1290b1e8 */
  if (!C.zf) goto L_1290b1e8;
  /* 1290b1e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b1e6 jmp 0x1290b221 */
  goto L_1290b221;
L_1290b1e8:;
  /* 1290b1e8 jmp 0x1290b21a */
  goto L_1290b21a;
L_1290b1ea:;
  /* 1290b1ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b1ec push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b1ee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1290b1f1 push eax */
  push32((uint32_t)(EAX));
  /* 1290b1f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1290b1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b1f6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290b1f9 push edx */
  push32((uint32_t)(EDX));
  /* 1290b1fa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290b1fd push eax */
  push32((uint32_t)(EAX));
  /* 1290b1fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1290b203 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1290b206 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b207 call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x1290b20du);
  /* 1290b20d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1290b210 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b214 jne 0x1290b21a */
  if (!C.zf) goto L_1290b21a;
  /* 1290b216 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b218 jmp 0x1290b221 */
  goto L_1290b221;
L_1290b21a:;
  /* 1290b21a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1290b21d jmp 0x1290b221 */
  goto L_1290b221;
L_1290b21f:;
  /* 1290b21f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290b221:;
  /* 1290b221 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1290b224 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290b227 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1290b22e pop edi */
  EDI = (pop32());
  /* 1290b22f pop esi */
  ESI = (pop32());
  /* 1290b230 pop ebx */
  EBX = (pop32());
  /* 1290b231 mov esp, ebp */
  ESP = (EBP);
  /* 1290b233 pop ebp */
  EBP = (pop32());
  /* 1290b234 ret  */
  ESPCHK(0x1290af30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b240 @ 0x1290b240 (80 bytes, 32 insns) */
void f_1290b240(void) {
  FTRACE(0x1290b240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b240 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b241 mov ebp, esp */
  EBP = (ESP);
  /* 1290b243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b246 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b249 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290b24c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b24f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1290b252:;
  /* 1290b252 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290b255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290b258 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b25b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290b25e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290b260 je 0x1290b277 */
  if (C.zf) goto L_1290b277;
  /* 1290b262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b265 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290b268 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290b26a je 0x1290b277 */
  if (C.zf) goto L_1290b277;
  /* 1290b26c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b26f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b272 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290b275 jmp 0x1290b252 */
  goto L_1290b252;
L_1290b277:;
  /* 1290b277 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b27a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290b27d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290b27f jne 0x1290b289 */
  if (!C.zf) goto L_1290b289;
  /* 1290b281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b284 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b287 jmp 0x1290b28c */
  goto L_1290b28c;
L_1290b289:;
  /* 1290b289 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1290b28c:;
  /* 1290b28c mov esp, ebp */
  ESP = (EBP);
  /* 1290b28e pop ebp */
  EBP = (pop32());
  /* 1290b28f ret  */
  ESPCHK(0x1290b240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b290 @ 0x1290b290 (130 bytes, 43 insns) */
void f_1290b290(void) {
  FTRACE(0x1290b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b290 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b291 mov ebp, esp */
  EBP = (ESP);
  /* 1290b293 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b297 cmp eax, dword ptr [0x1292ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b29d jae 0x1290b2c1 */
  if (!C.cf) goto L_1290b2c1;
  /* 1290b29f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b2a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290b2a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b2a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290b2ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b2ae mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290b2b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1290b2ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1290b2bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290b2bf jne 0x1290b2dc */
  if (!C.zf) goto L_1290b2dc;
L_1290b2c1:;
  /* 1290b2c1 call 0x1290aa10 */
  push32(0x1290b2c6u); f_1290aa10();
  /* 1290b2c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290b2cc call 0x1290aa20 */
  push32(0x1290b2d1u); f_1290aa20();
  /* 1290b2d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1290b2d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290b2da jmp 0x1290b30e */
  goto L_1290b30e;
L_1290b2dc:;
  /* 1290b2dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b2df push edx */
  push32((uint32_t)(EDX));
  /* 1290b2e0 call 0x1290c230 */
  push32(0x1290b2e5u); f_1290c230();
  /* 1290b2e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b2e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290b2eb push eax */
  push32((uint32_t)(EAX));
  /* 1290b2ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b2ef push ecx */
  push32((uint32_t)(ECX));
  /* 1290b2f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b2f3 push edx */
  push32((uint32_t)(EDX));
  /* 1290b2f4 call 0x1290b320 */
  push32(0x1290b2f9u); f_1290b320();
  /* 1290b2f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b2fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290b2ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b302 push eax */
  push32((uint32_t)(EAX));
  /* 1290b303 call 0x1290c2c0 */
  push32(0x1290b308u); f_1290c2c0();
  /* 1290b308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b30b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1290b30e:;
  /* 1290b30e mov esp, ebp */
  ESP = (EBP);
  /* 1290b310 pop ebp */
  EBP = (pop32());
  /* 1290b311 ret  */
  ESPCHK(0x1290b290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b320 @ 0x1290b320 (178 bytes, 56 insns) */
void f_1290b320(void) {
  FTRACE(0x1290b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b320 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b321 mov ebp, esp */
  EBP = (ESP);
  /* 1290b323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b329 push eax */
  push32((uint32_t)(EAX));
  /* 1290b32a call 0x1290c0b0 */
  push32(0x1290b32fu); f_1290c0b0();
  /* 1290b32f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b332 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1290b335 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b339 jne 0x1290b34e */
  if (!C.zf) goto L_1290b34e;
  /* 1290b33b call 0x1290aa10 */
  push32(0x1290b340u); f_1290aa10();
  /* 1290b340 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290b346 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290b349 jmp 0x1290b3ce */
  goto L_1290b3ce;
L_1290b34e:;
  /* 1290b34e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290b351 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b352 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b354 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b357 push edx */
  push32((uint32_t)(EDX));
  /* 1290b358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290b35b push eax */
  push32((uint32_t)(EAX));
  /* 1290b35c call dword ptr [0x1293032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293032c))), 0x1290b362u);
  /* 1290b362 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290b365 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b369 jne 0x1290b376 */
  if (!C.zf) goto L_1290b376;
  /* 1290b36b call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x1290b371u);
  /* 1290b371 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290b374 jmp 0x1290b37d */
  goto L_1290b37d;
L_1290b376:;
  /* 1290b376 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1290b37d:;
  /* 1290b37d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b381 je 0x1290b394 */
  if (C.zf) goto L_1290b394;
  /* 1290b383 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b386 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b387 call 0x1290a970 */
  push32(0x1290b38cu); f_1290a970();
  /* 1290b38c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b38f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290b392 jmp 0x1290b3ce */
  goto L_1290b3ce;
L_1290b394:;
  /* 1290b394 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b397 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1290b39a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b39d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1290b3a0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b3a3 mov ecx, dword ptr [edx*4 + 0x1292fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1292fe60)));
  /* 1290b3aa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1290b3ae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1290b3b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b3b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290b3b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b3ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290b3bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b3c0 mov eax, dword ptr [eax*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290b3c7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1290b3cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1290b3ce:;
  /* 1290b3ce mov esp, ebp */
  ESP = (EBP);
  /* 1290b3d0 pop ebp */
  EBP = (pop32());
  /* 1290b3d1 ret  */
  ESPCHK(0x1290b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3e0 @ 0x1290b3e0 (130 bytes, 43 insns) */
void f_1290b3e0(void) {
  FTRACE(0x1290b3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1290b3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b3e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b3e7 cmp eax, dword ptr [0x1292ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b3ed jae 0x1290b411 */
  if (!C.cf) goto L_1290b411;
  /* 1290b3ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b3f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290b3f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b3f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290b3fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b3fe mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290b405 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1290b40a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1290b40d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290b40f jne 0x1290b42c */
  if (!C.zf) goto L_1290b42c;
L_1290b411:;
  /* 1290b411 call 0x1290aa10 */
  push32(0x1290b416u); f_1290aa10();
  /* 1290b416 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290b41c call 0x1290aa20 */
  push32(0x1290b421u); f_1290aa20();
  /* 1290b421 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1290b427 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290b42a jmp 0x1290b45e */
  goto L_1290b45e;
L_1290b42c:;
  /* 1290b42c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b42f push edx */
  push32((uint32_t)(EDX));
  /* 1290b430 call 0x1290c230 */
  push32(0x1290b435u); f_1290c230();
  /* 1290b435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b438 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290b43b push eax */
  push32((uint32_t)(EAX));
  /* 1290b43c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b43f push ecx */
  push32((uint32_t)(ECX));
  /* 1290b440 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b443 push edx */
  push32((uint32_t)(EDX));
  /* 1290b444 call 0x1290b470 */
  push32(0x1290b449u); f_1290b470();
  /* 1290b449 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b44c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290b44f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b452 push eax */
  push32((uint32_t)(EAX));
  /* 1290b453 call 0x1290c2c0 */
  push32(0x1290b458u); f_1290c2c0();
  /* 1290b458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b45b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1290b45e:;
  /* 1290b45e mov esp, ebp */
  ESP = (EBP);
  /* 1290b460 pop ebp */
  EBP = (pop32());
  /* 1290b461 ret  */
  ESPCHK(0x1290b3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b470 @ 0x1290b470 (627 bytes, 182 insns) */
void f_1290b470(void) {
  FTRACE(0x1290b470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b470 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b471 mov ebp, esp */
  EBP = (ESP);
  /* 1290b473 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b479 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290b480 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290b483 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1290b489 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b48d jne 0x1290b496 */
  if (!C.zf) goto L_1290b496;
  /* 1290b48f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b491 jmp 0x1290b6df */
  goto L_1290b6df;
L_1290b496:;
  /* 1290b496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b499 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290b49c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b49f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290b4a2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b4a5 mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290b4ac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1290b4b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1290b4b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290b4b6 je 0x1290b4c8 */
  if (C.zf) goto L_1290b4c8;
  /* 1290b4b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290b4ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b4bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b4bf push edx */
  push32((uint32_t)(EDX));
  /* 1290b4c0 call 0x1290b320 */
  push32(0x1290b4c5u); f_1290b320();
  /* 1290b4c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290b4c8:;
  /* 1290b4c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b4cb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290b4ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b4d1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290b4d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b4d7 mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290b4de movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1290b4e3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1290b4e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290b4ea je 0x1290b5fc */
  if (C.zf) goto L_1290b5fc;
  /* 1290b4f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b4f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1290b4f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1290b4fd:;
  /* 1290b4fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b500 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b503 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b506 jae 0x1290b5fa */
  if (!C.cf) goto L_1290b5fa;
  /* 1290b50c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1290b512 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1290b515:;
  /* 1290b515 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290b518 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1290b51e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b520 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b526 jge 0x1290b587 */
  if ((C.sf==C.of)) goto L_1290b587;
  /* 1290b528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b52b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b52e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b531 jae 0x1290b587 */
  if (!C.cf) goto L_1290b587;
  /* 1290b533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b536 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1290b538 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1290b53e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b541 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b544 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290b547 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1290b54e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b551 jne 0x1290b571 */
  if (!C.zf) goto L_1290b571;
  /* 1290b553 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1290b559 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b55c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1290b562 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290b565 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1290b568 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290b56b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b56e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1290b571:;
  /* 1290b571 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290b574 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1290b57a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1290b57c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290b57f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b582 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290b585 jmp 0x1290b515 */
  goto L_1290b515;
L_1290b587:;
  /* 1290b587 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b589 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1290b58f push edx */
  push32((uint32_t)(EDX));
  /* 1290b590 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290b593 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1290b599 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b59b push eax */
  push32((uint32_t)(EAX));
  /* 1290b59c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1290b5a2 push edx */
  push32((uint32_t)(EDX));
  /* 1290b5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b5a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290b5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b5ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290b5af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b5b2 mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290b5b9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1290b5bc push eax */
  push32((uint32_t)(EAX));
  /* 1290b5bd call dword ptr [0x12930264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930264))), 0x1290b5c3u);
  /* 1290b5c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290b5c5 je 0x1290b5ea */
  if (C.zf) goto L_1290b5ea;
  /* 1290b5c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290b5ca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b5d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1290b5d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290b5d6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1290b5dc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b5de cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b5e4 jge 0x1290b5e8 */
  if ((C.sf==C.of)) goto L_1290b5e8;
  /* 1290b5e6 jmp 0x1290b5fa */
  goto L_1290b5fa;
L_1290b5e8:;
  /* 1290b5e8 jmp 0x1290b5f5 */
  goto L_1290b5f5;
L_1290b5ea:;
  /* 1290b5ea call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x1290b5f0u);
  /* 1290b5f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1290b5f3 jmp 0x1290b5fa */
  goto L_1290b5fa;
L_1290b5f5:;
  /* 1290b5f5 jmp 0x1290b4fd */
  goto L_1290b4fd;
L_1290b5fa:;
  /* 1290b5fa jmp 0x1290b64c */
  goto L_1290b64c;
L_1290b5fc:;
  /* 1290b5fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b5fe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1290b604 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b605 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290b608 push edx */
  push32((uint32_t)(EDX));
  /* 1290b609 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b60c push eax */
  push32((uint32_t)(EAX));
  /* 1290b60d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b610 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290b613 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b616 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290b619 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b61c mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290b623 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1290b626 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b627 call dword ptr [0x12930264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930264))), 0x1290b62du);
  /* 1290b62d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290b62f je 0x1290b643 */
  if (C.zf) goto L_1290b643;
  /* 1290b631 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1290b638 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1290b63e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1290b641 jmp 0x1290b64c */
  goto L_1290b64c;
L_1290b643:;
  /* 1290b643 call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x1290b649u);
  /* 1290b649 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1290b64c:;
  /* 1290b64c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b650 jne 0x1290b6d6 */
  if (!C.zf) goto L_1290b6d6;
  /* 1290b656 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b65a je 0x1290b68a */
  if (C.zf) goto L_1290b68a;
  /* 1290b65c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b660 jne 0x1290b679 */
  if (!C.zf) goto L_1290b679;
  /* 1290b662 call 0x1290aa10 */
  push32(0x1290b667u); f_1290aa10();
  /* 1290b667 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290b66d call 0x1290aa20 */
  push32(0x1290b672u); f_1290aa20();
  /* 1290b672 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290b675 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1290b677 jmp 0x1290b685 */
  goto L_1290b685;
L_1290b679:;
  /* 1290b679 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290b67c push edx */
  push32((uint32_t)(EDX));
  /* 1290b67d call 0x1290a970 */
  push32(0x1290b682u); f_1290a970();
  /* 1290b682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290b685:;
  /* 1290b685 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290b688 jmp 0x1290b6df */
  goto L_1290b6df;
L_1290b68a:;
  /* 1290b68a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b68d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290b690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b693 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290b696 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b699 mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290b6a0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1290b6a5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1290b6a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290b6aa je 0x1290b6bb */
  if (C.zf) goto L_1290b6bb;
  /* 1290b6ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b6af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290b6b2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b6b5 jne 0x1290b6bb */
  if (!C.zf) goto L_1290b6bb;
  /* 1290b6b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b6b9 jmp 0x1290b6df */
  goto L_1290b6df;
L_1290b6bb:;
  /* 1290b6bb call 0x1290aa10 */
  push32(0x1290b6c0u); f_1290aa10();
  /* 1290b6c0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1290b6c6 call 0x1290aa20 */
  push32(0x1290b6cbu); f_1290aa20();
  /* 1290b6cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1290b6d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290b6d4 jmp 0x1290b6df */
  goto L_1290b6df;
L_1290b6d6:;
  /* 1290b6d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290b6d9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1290b6df:;
  /* 1290b6df mov esp, ebp */
  ESP = (EBP);
  /* 1290b6e1 pop ebp */
  EBP = (pop32());
  /* 1290b6e2 ret  */
  ESPCHK(0x1290b470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x1290b6f0 (199 bytes, 68 insns) */
void f_1290b6f0(void) {
  FTRACE(0x1290b6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1290b6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b6f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1290b6f5 push esi */
  push32((uint32_t)(ESI));
  /* 1290b6f6 push edi */
  push32((uint32_t)(EDI));
L_1290b6f7:;
  /* 1290b6f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b6fb jne 0x1290b71b */
  if (!C.zf) goto L_1290b71b;
  /* 1290b6fd push 0x12929e84 */
  push32((uint32_t)(0x12929e84u));
  /* 1290b702 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290b704 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1290b706 push 0x12929f50 */
  push32((uint32_t)(0x12929f50u));
  /* 1290b70b push 2 */
  push32((uint32_t)(0x2u));
  /* 1290b70d call 0x12901c00 */
  push32(0x1290b712u); f_12901c00();
  /* 1290b712 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b715 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b718 jne 0x1290b71b */
  if (!C.zf) goto L_1290b71b;
  /* 1290b71a int3  */
  x86_unimpl("int3 @ 0x1290b71a");
L_1290b71b:;
  /* 1290b71b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b71d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290b71f jne 0x1290b6f7 */
  if (!C.zf) goto L_1290b6f7;
  /* 1290b721 mov ecx, dword ptr [0x1292e6a4] */
  ECX = (r32((uint32_t)(0x1292e6a4)));
  /* 1290b727 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b72a mov dword ptr [0x1292e6a4], ecx */
  w32((uint32_t)(0x1292e6a4), (ECX));
  /* 1290b730 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b733 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290b736 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1290b738 push 0x12929f50 */
  push32((uint32_t)(0x12929f50u));
  /* 1290b73d push 2 */
  push32((uint32_t)(0x2u));
  /* 1290b73f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1290b744 call 0x12902b40 */
  push32(0x1290b749u); f_12902b40();
  /* 1290b749 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b74c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b74f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1290b752 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b755 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b759 je 0x1290b776 */
  if (C.zf) goto L_1290b776;
  /* 1290b75b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b75e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1290b761 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1290b764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b767 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1290b76a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b76d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1290b774 jmp 0x1290b79b */
  goto L_1290b79b;
L_1290b776:;
  /* 1290b776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b779 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290b77c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1290b77f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b782 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1290b785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b788 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b78b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b78e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1290b791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b794 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1290b79b:;
  /* 1290b79b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b79e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b7a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1290b7a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1290b7a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b7a9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1290b7b0 pop edi */
  EDI = (pop32());
  /* 1290b7b1 pop esi */
  ESI = (pop32());
  /* 1290b7b2 pop ebx */
  EBX = (pop32());
  /* 1290b7b3 mov esp, ebp */
  ESP = (EBP);
  /* 1290b7b5 pop ebp */
  EBP = (pop32());
  /* 1290b7b6 ret  */
  ESPCHK(0x1290b6f0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1290b7c0 (50 bytes, 17 insns) */
void f_1290b7c0(void) {
  FTRACE(0x1290b7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1290b7c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b7c6 cmp eax, dword ptr [0x1292ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b7cc jb 0x1290b7d2 */
  if (C.cf) goto L_1290b7d2;
  /* 1290b7ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290b7d0 jmp 0x1290b7f0 */
  goto L_1290b7f0;
L_1290b7d2:;
  /* 1290b7d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b7d5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290b7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b7db and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290b7de imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b7e1 mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290b7e8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1290b7ed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1290b7f0:;
  /* 1290b7f0 pop ebp */
  EBP = (pop32());
  /* 1290b7f1 ret  */
  ESPCHK(0x1290b7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x1290b800 (300 bytes, 80 insns) */
void f_1290b800(void) {
  FTRACE(0x1290b800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b800 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b801 mov ebp, esp */
  EBP = (ESP);
  /* 1290b803 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b804 cmp dword ptr [0x1292fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b80b jne 0x1290b819 */
  if (!C.zf) goto L_1290b819;
  /* 1290b80d mov dword ptr [0x1292fb60], 0x200 */
  w32((uint32_t)(0x1292fb60), (0x200u));
  /* 1290b817 jmp 0x1290b82c */
  goto L_1290b82c;
L_1290b819:;
  /* 1290b819 cmp dword ptr [0x1292fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x1292fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b820 jge 0x1290b82c */
  if ((C.sf==C.of)) goto L_1290b82c;
  /* 1290b822 mov dword ptr [0x1292fb60], 0x14 */
  w32((uint32_t)(0x1292fb60), (0x14u));
L_1290b82c:;
  /* 1290b82c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1290b831 push 0x12929f5c */
  push32((uint32_t)(0x12929f5cu));
  /* 1290b836 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290b838 push 4 */
  push32((uint32_t)(0x4u));
  /* 1290b83a mov eax, dword ptr [0x1292fb60] */
  EAX = (r32((uint32_t)(0x1292fb60)));
  /* 1290b83f push eax */
  push32((uint32_t)(EAX));
  /* 1290b840 call 0x12902f50 */
  push32(0x1290b845u); f_12902f50();
  /* 1290b845 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b848 mov dword ptr [0x1292e818], eax */
  w32((uint32_t)(0x1292e818), (EAX));
  /* 1290b84d cmp dword ptr [0x1292e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b854 jne 0x1290b895 */
  if (!C.zf) goto L_1290b895;
  /* 1290b856 mov dword ptr [0x1292fb60], 0x14 */
  w32((uint32_t)(0x1292fb60), (0x14u));
  /* 1290b860 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1290b865 push 0x12929f5c */
  push32((uint32_t)(0x12929f5cu));
  /* 1290b86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1290b86c push 4 */
  push32((uint32_t)(0x4u));
  /* 1290b86e mov ecx, dword ptr [0x1292fb60] */
  ECX = (r32((uint32_t)(0x1292fb60)));
  /* 1290b874 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b875 call 0x12902f50 */
  push32(0x1290b87au); f_12902f50();
  /* 1290b87a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b87d mov dword ptr [0x1292e818], eax */
  w32((uint32_t)(0x1292e818), (EAX));
  /* 1290b882 cmp dword ptr [0x1292e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b889 jne 0x1290b895 */
  if (!C.zf) goto L_1290b895;
  /* 1290b88b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1290b88d call 0x12901ab0 */
  push32(0x1290b892u); f_12901ab0();
  /* 1290b892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290b895:;
  /* 1290b895 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290b89c jmp 0x1290b8a7 */
  goto L_1290b8a7;
L_1290b89e:;
  /* 1290b89e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b8a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b8a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1290b8a7:;
  /* 1290b8a7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b8ab jge 0x1290b8c6 */
  if ((C.sf==C.of)) goto L_1290b8c6;
  /* 1290b8ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b8b0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290b8b3 add eax, 0x1292d120 */
  { uint32_t _a=(EAX),_b=(0x1292d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b8b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b8bb mov edx, dword ptr [0x1292e818] */
  EDX = (r32((uint32_t)(0x1292e818)));
  /* 1290b8c1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1290b8c4 jmp 0x1290b89e */
  goto L_1290b89e;
L_1290b8c6:;
  /* 1290b8c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290b8cd jmp 0x1290b8d8 */
  goto L_1290b8d8;
L_1290b8cf:;
  /* 1290b8cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b8d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b8d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290b8d8:;
  /* 1290b8d8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b8dc jge 0x1290b928 */
  if ((C.sf==C.of)) goto L_1290b928;
  /* 1290b8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b8e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290b8e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b8e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290b8ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b8ed mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290b8f4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b8f8 je 0x1290b916 */
  if (C.zf) goto L_1290b916;
  /* 1290b8fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b8fd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290b900 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b903 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290b906 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290b909 mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290b910 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b914 jne 0x1290b926 */
  if (!C.zf) goto L_1290b926;
L_1290b916:;
  /* 1290b916 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290b919 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290b91c mov dword ptr [ecx + 0x1292d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1292d130), (0xffffffffu));
L_1290b926:;
  /* 1290b926 jmp 0x1290b8cf */
  goto L_1290b8cf;
L_1290b928:;
  /* 1290b928 mov esp, ebp */
  ESP = (EBP);
  /* 1290b92a pop ebp */
  EBP = (pop32());
  /* 1290b92b ret  */
  ESPCHK(0x1290b800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b930 @ 0x1290b930 (26 bytes, 9 insns) */
void f_1290b930(void) {
  FTRACE(0x1290b930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b930 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b931 mov ebp, esp */
  EBP = (ESP);
  /* 1290b933 call 0x1290c530 */
  push32(0x1290b938u); f_1290c530();
  /* 1290b938 movsx eax, byte ptr [0x1292e4bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1292e4bc))));
  /* 1290b93f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290b941 je 0x1290b948 */
  if (C.zf) goto L_1290b948;
  /* 1290b943 call 0x1290c2f0 */
  push32(0x1290b948u); f_1290c2f0();
L_1290b948:;
  /* 1290b948 pop ebp */
  EBP = (pop32());
  /* 1290b949 ret  */
  ESPCHK(0x1290b930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x1290b950 (61 bytes, 20 insns) */
void f_1290b950(void) {
  FTRACE(0x1290b950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b950 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b951 mov ebp, esp */
  EBP = (ESP);
  /* 1290b953 cmp dword ptr [ebp + 8], 0x1292d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1292d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b95a jb 0x1290b97e */
  if (C.cf) goto L_1290b97e;
  /* 1290b95c cmp dword ptr [ebp + 8], 0x1292d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1292d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b963 ja 0x1290b97e */
  if ((!C.cf&&!C.zf)) goto L_1290b97e;
  /* 1290b965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b968 sub eax, 0x1292d120 */
  { uint32_t _a=(EAX),_b=(0x1292d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b96d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290b970 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b973 push eax */
  push32((uint32_t)(EAX));
  /* 1290b974 call 0x12906540 */
  push32(0x1290b979u); f_12906540();
  /* 1290b979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b97c jmp 0x1290b98b */
  goto L_1290b98b;
L_1290b97e:;
  /* 1290b97e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b981 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b984 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b985 call dword ptr [0x129302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f4))), 0x1290b98bu);
L_1290b98b:;
  /* 1290b98b pop ebp */
  EBP = (pop32());
  /* 1290b98c ret  */
  ESPCHK(0x1290b950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b990 @ 0x1290b990 (41 bytes, 16 insns) */
void f_1290b990(void) {
  FTRACE(0x1290b990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b990 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b991 mov ebp, esp */
  EBP = (ESP);
  /* 1290b993 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b997 jge 0x1290b9aa */
  if ((C.sf==C.of)) goto L_1290b9aa;
  /* 1290b999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b99c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b99f push eax */
  push32((uint32_t)(EAX));
  /* 1290b9a0 call 0x12906540 */
  push32(0x1290b9a5u); f_12906540();
  /* 1290b9a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b9a8 jmp 0x1290b9b7 */
  goto L_1290b9b7;
L_1290b9aa:;
  /* 1290b9aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290b9ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b9b1 call dword ptr [0x129302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f4))), 0x1290b9b7u);
L_1290b9b7:;
  /* 1290b9b7 pop ebp */
  EBP = (pop32());
  /* 1290b9b8 ret  */
  ESPCHK(0x1290b990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9c0 @ 0x1290b9c0 (61 bytes, 20 insns) */
void f_1290b9c0(void) {
  FTRACE(0x1290b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290b9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290b9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1290b9c3 cmp dword ptr [ebp + 8], 0x1292d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1292d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b9ca jb 0x1290b9ee */
  if (C.cf) goto L_1290b9ee;
  /* 1290b9cc cmp dword ptr [ebp + 8], 0x1292d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1292d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290b9d3 ja 0x1290b9ee */
  if ((!C.cf&&!C.zf)) goto L_1290b9ee;
  /* 1290b9d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b9d8 sub eax, 0x1292d120 */
  { uint32_t _a=(EAX),_b=(0x1292d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290b9dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290b9e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b9e3 push eax */
  push32((uint32_t)(EAX));
  /* 1290b9e4 call 0x129065e0 */
  push32(0x1290b9e9u); f_129065e0();
  /* 1290b9e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b9ec jmp 0x1290b9fb */
  goto L_1290b9fb;
L_1290b9ee:;
  /* 1290b9ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290b9f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290b9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1290b9f5 call dword ptr [0x129302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f8))), 0x1290b9fbu);
L_1290b9fb:;
  /* 1290b9fb pop ebp */
  EBP = (pop32());
  /* 1290b9fc ret  */
  ESPCHK(0x1290b9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba00 @ 0x1290ba00 (41 bytes, 16 insns) */
void f_1290ba00(void) {
  FTRACE(0x1290ba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290ba00 push ebp */
  push32((uint32_t)(EBP));
  /* 1290ba01 mov ebp, esp */
  EBP = (ESP);
  /* 1290ba03 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ba07 jge 0x1290ba1a */
  if ((C.sf==C.of)) goto L_1290ba1a;
  /* 1290ba09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ba0c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ba0f push eax */
  push32((uint32_t)(EAX));
  /* 1290ba10 call 0x129065e0 */
  push32(0x1290ba15u); f_129065e0();
  /* 1290ba15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ba18 jmp 0x1290ba27 */
  goto L_1290ba27;
L_1290ba1a:;
  /* 1290ba1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290ba1d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ba20 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ba21 call dword ptr [0x129302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f8))), 0x1290ba27u);
L_1290ba27:;
  /* 1290ba27 pop ebp */
  EBP = (pop32());
  /* 1290ba28 ret  */
  ESPCHK(0x1290ba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba30 @ 0x1290ba30 (119 bytes, 34 insns) */
void f_1290ba30(void) {
  FTRACE(0x1290ba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290ba30 push ebp */
  push32((uint32_t)(EBP));
  /* 1290ba31 mov ebp, esp */
  EBP = (ESP);
  /* 1290ba33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ba36 push 0x1292e814 */
  push32((uint32_t)(0x1292e814u));
  /* 1290ba3b call dword ptr [0x12930278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930278))), 0x1290ba41u);
  /* 1290ba41 cmp dword ptr [0x1292e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ba48 je 0x1290ba68 */
  if (C.zf) goto L_1290ba68;
  /* 1290ba4a push 0x1292e814 */
  push32((uint32_t)(0x1292e814u));
  /* 1290ba4f call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x1290ba55u);
  /* 1290ba55 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1290ba57 call 0x12906540 */
  push32(0x1290ba5cu); f_12906540();
  /* 1290ba5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ba5f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1290ba66 jmp 0x1290ba6f */
  goto L_1290ba6f;
L_1290ba68:;
  /* 1290ba68 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1290ba6f:;
  /* 1290ba6f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1290ba73 push eax */
  push32((uint32_t)(EAX));
  /* 1290ba74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ba77 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ba78 call 0x1290bab0 */
  push32(0x1290ba7du); f_1290bab0();
  /* 1290ba7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ba80 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290ba83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ba87 je 0x1290ba95 */
  if (C.zf) goto L_1290ba95;
  /* 1290ba89 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1290ba8b call 0x129065e0 */
  push32(0x1290ba90u); f_129065e0();
  /* 1290ba90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ba93 jmp 0x1290baa0 */
  goto L_1290baa0;
L_1290ba95:;
  /* 1290ba95 push 0x1292e814 */
  push32((uint32_t)(0x1292e814u));
  /* 1290ba9a call dword ptr [0x12930268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930268))), 0x1290baa0u);
L_1290baa0:;
  /* 1290baa0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290baa3 mov esp, ebp */
  ESP = (EBP);
  /* 1290baa5 pop ebp */
  EBP = (pop32());
  /* 1290baa6 ret  */
  ESPCHK(0x1290ba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x1290bab0 (160 bytes, 50 insns) */
void f_1290bab0(void) {
  FTRACE(0x1290bab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290bab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290bab1 mov ebp, esp */
  EBP = (ESP);
  /* 1290bab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290bab6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290baba jne 0x1290bac3 */
  if (!C.zf) goto L_1290bac3;
  /* 1290babc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290babe jmp 0x1290bb4c */
  goto L_1290bb4c;
L_1290bac3:;
  /* 1290bac3 cmp dword ptr [0x1292e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290baca jne 0x1290bafa */
  if (!C.zf) goto L_1290bafa;
  /* 1290bacc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290bacf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290bad4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bad9 jle 0x1290baeb */
  if ((C.zf||C.sf!=C.of)) goto L_1290baeb;
  /* 1290badb call 0x1290aa10 */
  push32(0x1290bae0u); f_1290aa10();
  /* 1290bae0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1290bae6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290bae9 jmp 0x1290bb4c */
  goto L_1290bb4c;
L_1290baeb:;
  /* 1290baeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290baee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1290baf1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1290baf3 mov eax, 1 */
  EAX = (0x1u);
  /* 1290baf8 jmp 0x1290bb4c */
  goto L_1290bb4c;
L_1290bafa:;
  /* 1290bafa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290bb01 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1290bb04 push eax */
  push32((uint32_t)(EAX));
  /* 1290bb05 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290bb07 mov ecx, dword ptr [0x1292cea4] */
  ECX = (r32((uint32_t)(0x1292cea4)));
  /* 1290bb0d push ecx */
  push32((uint32_t)(ECX));
  /* 1290bb0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bb11 push edx */
  push32((uint32_t)(EDX));
  /* 1290bb12 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290bb14 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1290bb17 push eax */
  push32((uint32_t)(EAX));
  /* 1290bb18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1290bb1d mov ecx, dword ptr [0x1292e698] */
  ECX = (r32((uint32_t)(0x1292e698)));
  /* 1290bb23 push ecx */
  push32((uint32_t)(ECX));
  /* 1290bb24 call dword ptr [0x129302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302d0))), 0x1290bb2au);
  /* 1290bb2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290bb2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bb31 je 0x1290bb39 */
  if (C.zf) goto L_1290bb39;
  /* 1290bb33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bb37 je 0x1290bb49 */
  if (C.zf) goto L_1290bb49;
L_1290bb39:;
  /* 1290bb39 call 0x1290aa10 */
  push32(0x1290bb3eu); f_1290aa10();
  /* 1290bb3e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1290bb44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290bb47 jmp 0x1290bb4c */
  goto L_1290bb4c;
L_1290bb49:;
  /* 1290bb49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1290bb4c:;
  /* 1290bb4c mov esp, ebp */
  ESP = (EBP);
  /* 1290bb4e pop ebp */
  EBP = (pop32());
  /* 1290bb4f ret  */
  ESPCHK(0x1290bab0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1290bb50 (32 bytes, 18 insns) */
void f_1290bb50(void) {
  FTRACE(0x1290bb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290bb50 push ebp */
  push32((uint32_t)(EBP));
  /* 1290bb51 mov ebp, esp */
  EBP = (ESP);
  /* 1290bb53 push ebx */
  push32((uint32_t)(EBX));
  /* 1290bb54 push esi */
  push32((uint32_t)(ESI));
  /* 1290bb55 push edi */
  push32((uint32_t)(EDI));
  /* 1290bb56 push ebp */
  push32((uint32_t)(EBP));
  /* 1290bb57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290bb59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290bb5b push 0x1290bb68 */
  push32((uint32_t)(0x1290bb68u));
  /* 1290bb60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1290bb63 call 0x1291329c */
  push32(0x1290bb68u); f_1291329c();
  /* 1290bb68 pop ebp */
  EBP = (pop32());
  /* 1290bb69 pop edi */
  EDI = (pop32());
  /* 1290bb6a pop esi */
  ESI = (pop32());
  /* 1290bb6b pop ebx */
  EBX = (pop32());
  /* 1290bb6c mov esp, ebp */
  ESP = (EBP);
  /* 1290bb6e pop ebp */
  EBP = (pop32());
  /* 1290bb6f ret  */
  ESPCHK(0x1290bb50u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1290bb92 (104 bytes, 33 insns) */
void f_1290bb92(void) {
  FTRACE(0x1290bb92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290bb92 push ebx */
  push32((uint32_t)(EBX));
  /* 1290bb93 push esi */
  push32((uint32_t)(ESI));
  /* 1290bb94 push edi */
  push32((uint32_t)(EDI));
  /* 1290bb95 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1290bb99 push eax */
  push32((uint32_t)(EAX));
  /* 1290bb9a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1290bb9c push 0x1290bb70 */
  push32((uint32_t)(0x1290bb70u));
  /* 1290bba1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1290bba8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1290bbaf:;
  /* 1290bbaf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1290bbb3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1290bbb6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1290bbb9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bbbc je 0x1290bbec */
  if (C.zf) goto L_1290bbec;
  /* 1290bbbe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bbc2 je 0x1290bbec */
  if (C.zf) goto L_1290bbec;
  /* 1290bbc4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1290bbc7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1290bbca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1290bbce mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1290bbd1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bbd6 jne 0x1290bbea */
  if (!C.zf) goto L_1290bbea;
  /* 1290bbd8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1290bbdd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1290bbe1 call 0x1290bc26 */
  push32(0x1290bbe6u); f_1290bc26();
  /* 1290bbe6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1290bbeau);
L_1290bbea:;
  /* 1290bbea jmp 0x1290bbaf */
  goto L_1290bbaf;
L_1290bbec:;
  /* 1290bbec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1290bbf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bbf6 pop edi */
  EDI = (pop32());
  /* 1290bbf7 pop esi */
  ESI = (pop32());
  /* 1290bbf8 pop ebx */
  EBX = (pop32());
  /* 1290bbf9 ret  */
  ESPCHK(0x1290bb92u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc26 @ 0x1290bc26 (24 bytes, 10 insns) */
void f_1290bc26(void) {
  FTRACE(0x1290bc26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290bc26 push ebx */
  push32((uint32_t)(EBX));
  /* 1290bc27 push ecx */
  push32((uint32_t)(ECX));
  /* 1290bc28 mov ebx, 0x1292d3b8 */
  EBX = (0x1292d3b8u);
  /* 1290bc2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bc30 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1290bc33 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1290bc36 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1290bc39 pop ecx */
  ECX = (pop32());
  /* 1290bc3a pop ebx */
  EBX = (pop32());
  /* 1290bc3b ret 4 */
  ESPCHK(0x1290bc26u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bd05 @ 0x1290bd05 (27 bytes, 11 insns) */
void f_1290bd05(void) {
  FTRACE(0x1290bd05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290bd05 push ebp */
  push32((uint32_t)(EBP));
  /* 1290bd06 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1290bd0a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1290bd0c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1290bd0f push eax */
  push32((uint32_t)(EAX));
  /* 1290bd10 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1290bd13 push eax */
  push32((uint32_t)(EAX));
  /* 1290bd14 call 0x1290bb92 */
  push32(0x1290bd19u); f_1290bb92();
  /* 1290bd19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bd1c pop ebp */
  EBP = (pop32());
  /* 1290bd1d ret 4 */
  ESPCHK(0x1290bd05u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bd20 @ 0x1290bd20 (482 bytes, 138 insns) */
void f_1290bd20(void) {
  FTRACE(0x1290bd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290bd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1290bd21 mov ebp, esp */
  EBP = (ESP);
  /* 1290bd23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290bd26 push esi */
  push32((uint32_t)(ESI));
  /* 1290bd27 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1290bd2e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1290bd30 call 0x12906540 */
  push32(0x1290bd35u); f_12906540();
  /* 1290bd35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bd38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1290bd3f jmp 0x1290bd4a */
  goto L_1290bd4a;
L_1290bd41:;
  /* 1290bd41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290bd44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bd47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1290bd4a:;
  /* 1290bd4a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bd4e jge 0x1290bef0 */
  if ((C.sf==C.of)) goto L_1290bef0;
  /* 1290bd54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290bd57 cmp dword ptr [ecx*4 + 0x1292fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1292fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bd5f je 0x1290be56 */
  if (C.zf) goto L_1290be56;
  /* 1290bd65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290bd68 mov eax, dword ptr [edx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292fe60)));
  /* 1290bd6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290bd72 jmp 0x1290bd7d */
  goto L_1290bd7d;
L_1290bd74:;
  /* 1290bd74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bd77 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bd7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1290bd7d:;
  /* 1290bd7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290bd80 mov eax, dword ptr [edx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292fe60)));
  /* 1290bd87 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bd8c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bd8f jae 0x1290be46 */
  if (!C.cf) goto L_1290be46;
  /* 1290bd95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bd98 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1290bd9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1290bd9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290bda1 jne 0x1290be41 */
  if (!C.zf) goto L_1290be41;
  /* 1290bda7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bdaa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bdae jne 0x1290bde9 */
  if (!C.zf) goto L_1290bde9;
  /* 1290bdb0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1290bdb2 call 0x12906540 */
  push32(0x1290bdb7u); f_12906540();
  /* 1290bdb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bdba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bdbd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bdc1 jne 0x1290bddf */
  if (!C.zf) goto L_1290bddf;
  /* 1290bdc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bdc6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bdc9 push edx */
  push32((uint32_t)(EDX));
  /* 1290bdca call dword ptr [0x129302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f0))), 0x1290bdd0u);
  /* 1290bdd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bdd3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1290bdd6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bdd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bddc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1290bddf:;
  /* 1290bddf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1290bde1 call 0x129065e0 */
  push32(0x1290bde6u); f_129065e0();
  /* 1290bde6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290bde9:;
  /* 1290bde9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bdec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290bdef push eax */
  push32((uint32_t)(EAX));
  /* 1290bdf0 call dword ptr [0x129302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f4))), 0x1290bdf6u);
  /* 1290bdf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bdf9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1290bdfd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1290be00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290be02 je 0x1290be16 */
  if (C.zf) goto L_1290be16;
  /* 1290be04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290be07 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290be0a push eax */
  push32((uint32_t)(EAX));
  /* 1290be0b call dword ptr [0x129302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f8))), 0x1290be11u);
  /* 1290be11 jmp 0x1290bd74 */
  goto L_1290bd74;
L_1290be16:;
  /* 1290be16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290be19 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1290be1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290be22 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290be25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290be28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290be2b sub eax, dword ptr [edx*4 + 0x1292fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x1292fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290be32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1290be33 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1290be38 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1290be3a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290be3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290be3f jmp 0x1290be46 */
  goto L_1290be46;
L_1290be41:;
  /* 1290be41 jmp 0x1290bd74 */
  goto L_1290bd74;
L_1290be46:;
  /* 1290be46 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290be4a je 0x1290be51 */
  if (C.zf) goto L_1290be51;
  /* 1290be4c jmp 0x1290bef0 */
  goto L_1290bef0;
L_1290be51:;
  /* 1290be51 jmp 0x1290beeb */
  goto L_1290beeb;
L_1290be56:;
  /* 1290be56 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1290be58 push 0x12929f64 */
  push32((uint32_t)(0x12929f64u));
  /* 1290be5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1290be5f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1290be64 call 0x12902b40 */
  push32(0x1290be69u); f_12902b40();
  /* 1290be69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290be6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290be6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290be73 je 0x1290bee9 */
  if (C.zf) goto L_1290bee9;
  /* 1290be75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290be78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290be7b mov dword ptr [eax*4 + 0x1292fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1292fe60), (ECX));
  /* 1290be82 mov edx, dword ptr [0x1292ff9c] */
  EDX = (r32((uint32_t)(0x1292ff9c)));
  /* 1290be88 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290be8b mov dword ptr [0x1292ff9c], edx */
  w32((uint32_t)(0x1292ff9c), (EDX));
  /* 1290be91 jmp 0x1290be9c */
  goto L_1290be9c;
L_1290be93:;
  /* 1290be93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290be96 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290be99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290be9c:;
  /* 1290be9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290be9f mov edx, dword ptr [ecx*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290bea6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290beac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290beaf jae 0x1290bed4 */
  if (!C.cf) goto L_1290bed4;
  /* 1290beb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290beb4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1290beb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bebb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1290bec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290bec4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1290bec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290becb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1290bed2 jmp 0x1290be93 */
  goto L_1290be93;
L_1290bed4:;
  /* 1290bed4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290bed7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290beda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290bedd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290bee0 push edx */
  push32((uint32_t)(EDX));
  /* 1290bee1 call 0x1290c230 */
  push32(0x1290bee6u); f_1290c230();
  /* 1290bee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290bee9:;
  /* 1290bee9 jmp 0x1290bef0 */
  goto L_1290bef0;
L_1290beeb:;
  /* 1290beeb jmp 0x1290bd41 */
  goto L_1290bd41;
L_1290bef0:;
  /* 1290bef0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1290bef2 call 0x129065e0 */
  push32(0x1290bef7u); f_129065e0();
  /* 1290bef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290befa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290befd pop esi */
  ESI = (pop32());
  /* 1290befe mov esp, ebp */
  ESP = (EBP);
  /* 1290bf00 pop ebp */
  EBP = (pop32());
  /* 1290bf01 ret  */
  ESPCHK(0x1290bd20u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1290bf10 (183 bytes, 57 insns) */
void f_1290bf10(void) {
  FTRACE(0x1290bf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290bf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1290bf11 mov ebp, esp */
  EBP = (ESP);
  /* 1290bf13 push ecx */
  push32((uint32_t)(ECX));
  /* 1290bf14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bf17 cmp eax, dword ptr [0x1292ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bf1d jae 0x1290bfaa */
  if (!C.cf) goto L_1290bfaa;
  /* 1290bf23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bf26 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290bf29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bf2c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290bf2f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290bf32 mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290bf39 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bf3d jne 0x1290bfaa */
  if (!C.zf) goto L_1290bfaa;
  /* 1290bf3f cmp dword ptr [0x1292e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bf46 jne 0x1290bf8a */
  if (!C.zf) goto L_1290bf8a;
  /* 1290bf48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bf4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1290bf4e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bf52 je 0x1290bf62 */
  if (C.zf) goto L_1290bf62;
  /* 1290bf54 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bf58 je 0x1290bf70 */
  if (C.zf) goto L_1290bf70;
  /* 1290bf5a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bf5e je 0x1290bf7e */
  if (C.zf) goto L_1290bf7e;
  /* 1290bf60 jmp 0x1290bf8a */
  goto L_1290bf8a;
L_1290bf62:;
  /* 1290bf62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290bf65 push edx */
  push32((uint32_t)(EDX));
  /* 1290bf66 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1290bf68 call dword ptr [0x12930334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930334))), 0x1290bf6eu);
  /* 1290bf6e jmp 0x1290bf8a */
  goto L_1290bf8a;
L_1290bf70:;
  /* 1290bf70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290bf73 push eax */
  push32((uint32_t)(EAX));
  /* 1290bf74 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1290bf76 call dword ptr [0x12930334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930334))), 0x1290bf7cu);
  /* 1290bf7c jmp 0x1290bf8a */
  goto L_1290bf8a;
L_1290bf7e:;
  /* 1290bf7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290bf81 push ecx */
  push32((uint32_t)(ECX));
  /* 1290bf82 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1290bf84 call dword ptr [0x12930334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930334))), 0x1290bf8au);
L_1290bf8a:;
  /* 1290bf8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bf8d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1290bf90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bf93 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1290bf96 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290bf99 mov ecx, dword ptr [edx*4 + 0x1292fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1292fe60)));
  /* 1290bfa0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290bfa3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1290bfa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290bfa8 jmp 0x1290bfc3 */
  goto L_1290bfc3;
L_1290bfaa:;
  /* 1290bfaa call 0x1290aa10 */
  push32(0x1290bfafu); f_1290aa10();
  /* 1290bfaf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290bfb5 call 0x1290aa20 */
  push32(0x1290bfbau); f_1290aa20();
  /* 1290bfba mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1290bfc0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1290bfc3:;
  /* 1290bfc3 mov esp, ebp */
  ESP = (EBP);
  /* 1290bfc5 pop ebp */
  EBP = (pop32());
  /* 1290bfc6 ret  */
  ESPCHK(0x1290bf10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfd0 @ 0x1290bfd0 (216 bytes, 63 insns) */
void f_1290bfd0(void) {
  FTRACE(0x1290bfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290bfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290bfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1290bfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290bfd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bfd7 cmp eax, dword ptr [0x1292ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290bfdd jae 0x1290c08b */
  if (!C.cf) goto L_1290c08b;
  /* 1290bfe3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bfe6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290bfe9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290bfec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290bfef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290bff2 mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290bff9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1290bffe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1290c001 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290c003 je 0x1290c08b */
  if (C.zf) goto L_1290c08b;
  /* 1290c009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c00c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1290c00f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c012 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1290c015 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c018 mov ecx, dword ptr [edx*4 + 0x1292fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1292fe60)));
  /* 1290c01f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c023 je 0x1290c08b */
  if (C.zf) goto L_1290c08b;
  /* 1290c025 cmp dword ptr [0x1292e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c02c jne 0x1290c06a */
  if (!C.zf) goto L_1290c06a;
  /* 1290c02e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c031 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290c034 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c038 je 0x1290c048 */
  if (C.zf) goto L_1290c048;
  /* 1290c03a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c03e je 0x1290c054 */
  if (C.zf) goto L_1290c054;
  /* 1290c040 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c044 je 0x1290c060 */
  if (C.zf) goto L_1290c060;
  /* 1290c046 jmp 0x1290c06a */
  goto L_1290c06a;
L_1290c048:;
  /* 1290c048 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290c04a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1290c04c call dword ptr [0x12930334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930334))), 0x1290c052u);
  /* 1290c052 jmp 0x1290c06a */
  goto L_1290c06a;
L_1290c054:;
  /* 1290c054 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290c056 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1290c058 call dword ptr [0x12930334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930334))), 0x1290c05eu);
  /* 1290c05e jmp 0x1290c06a */
  goto L_1290c06a;
L_1290c060:;
  /* 1290c060 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290c062 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1290c064 call dword ptr [0x12930334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930334))), 0x1290c06au);
L_1290c06a:;
  /* 1290c06a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c06d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290c070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c073 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290c076 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c079 mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290c080 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1290c087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290c089 jmp 0x1290c0a4 */
  goto L_1290c0a4;
L_1290c08b:;
  /* 1290c08b call 0x1290aa10 */
  push32(0x1290c090u); f_1290aa10();
  /* 1290c090 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290c096 call 0x1290aa20 */
  push32(0x1290c09bu); f_1290aa20();
  /* 1290c09b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1290c0a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1290c0a4:;
  /* 1290c0a4 mov esp, ebp */
  ESP = (EBP);
  /* 1290c0a6 pop ebp */
  EBP = (pop32());
  /* 1290c0a7 ret  */
  ESPCHK(0x1290bfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0b0 @ 0x1290c0b0 (102 bytes, 30 insns) */
void f_1290c0b0(void) {
  FTRACE(0x1290c0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1290c0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c0b6 cmp eax, dword ptr [0x1292ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c0bc jae 0x1290c0fb */
  if (!C.cf) goto L_1290c0fb;
  /* 1290c0be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c0c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290c0c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c0c7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290c0ca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c0cd mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290c0d4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1290c0d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1290c0dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290c0de je 0x1290c0fb */
  if (C.zf) goto L_1290c0fb;
  /* 1290c0e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c0e3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1290c0e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c0e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1290c0ec imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c0ef mov ecx, dword ptr [edx*4 + 0x1292fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x1292fe60)));
  /* 1290c0f6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1290c0f9 jmp 0x1290c114 */
  goto L_1290c114;
L_1290c0fb:;
  /* 1290c0fb call 0x1290aa10 */
  push32(0x1290c100u); f_1290aa10();
  /* 1290c100 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290c106 call 0x1290aa20 */
  push32(0x1290c10bu); f_1290aa20();
  /* 1290c10b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1290c111 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1290c114:;
  /* 1290c114 pop ebp */
  EBP = (pop32());
  /* 1290c115 ret  */
  ESPCHK(0x1290c0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x1290c120 (260 bytes, 83 insns) */
void f_1290c120(void) {
  FTRACE(0x1290c120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c120 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c121 mov ebp, esp */
  EBP = (ESP);
  /* 1290c123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c126 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1290c12a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290c12d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1290c130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290c132 je 0x1290c13d */
  if (C.zf) goto L_1290c13d;
  /* 1290c134 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1290c137 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1290c13a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1290c13d:;
  /* 1290c13d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290c140 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1290c146 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290c148 je 0x1290c152 */
  if (C.zf) goto L_1290c152;
  /* 1290c14a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1290c14d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1290c14f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1290c152:;
  /* 1290c152 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290c155 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1290c15b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290c15d je 0x1290c168 */
  if (C.zf) goto L_1290c168;
  /* 1290c15f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1290c162 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1290c165 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1290c168:;
  /* 1290c168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c16b push eax */
  push32((uint32_t)(EAX));
  /* 1290c16c call dword ptr [0x129302b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b0))), 0x1290c172u);
  /* 1290c172 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290c175 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c179 jne 0x1290c192 */
  if (!C.zf) goto L_1290c192;
  /* 1290c17b call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x1290c181u);
  /* 1290c181 push eax */
  push32((uint32_t)(EAX));
  /* 1290c182 call 0x1290a970 */
  push32(0x1290c187u); f_1290a970();
  /* 1290c187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c18a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290c18d jmp 0x1290c220 */
  goto L_1290c220;
L_1290c192:;
  /* 1290c192 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c196 jne 0x1290c1a3 */
  if (!C.zf) goto L_1290c1a3;
  /* 1290c198 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1290c19b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1290c19e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1290c1a1 jmp 0x1290c1b2 */
  goto L_1290c1b2;
L_1290c1a3:;
  /* 1290c1a3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c1a7 jne 0x1290c1b2 */
  if (!C.zf) goto L_1290c1b2;
  /* 1290c1a9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1290c1ac or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1290c1af mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1290c1b2:;
  /* 1290c1b2 call 0x1290bd20 */
  push32(0x1290c1b7u); f_1290bd20();
  /* 1290c1b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290c1ba cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c1be jne 0x1290c1db */
  if (!C.zf) goto L_1290c1db;
  /* 1290c1c0 call 0x1290aa10 */
  push32(0x1290c1c5u); f_1290aa10();
  /* 1290c1c5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1290c1cb call 0x1290aa20 */
  push32(0x1290c1d0u); f_1290aa20();
  /* 1290c1d0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1290c1d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290c1d9 jmp 0x1290c220 */
  goto L_1290c220;
L_1290c1db:;
  /* 1290c1db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c1de push eax */
  push32((uint32_t)(EAX));
  /* 1290c1df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c1e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c1e3 call 0x1290bf10 */
  push32(0x1290c1e8u); f_1290bf10();
  /* 1290c1e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c1eb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1290c1ee or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1290c1f1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1290c1f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c1f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290c1fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c1fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290c200 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c203 mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290c20a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1290c20d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1290c211 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c214 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c215 call 0x1290c2c0 */
  push32(0x1290c21au); f_1290c2c0();
  /* 1290c21a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c21d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1290c220:;
  /* 1290c220 mov esp, ebp */
  ESP = (EBP);
  /* 1290c222 pop ebp */
  EBP = (pop32());
  /* 1290c223 ret  */
  ESPCHK(0x1290c120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c230 @ 0x1290c230 (134 bytes, 44 insns) */
void f_1290c230(void) {
  FTRACE(0x1290c230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c230 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c231 mov ebp, esp */
  EBP = (ESP);
  /* 1290c233 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c237 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290c23a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c23d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290c240 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c243 mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290c24a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c24c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1290c24f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c252 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c256 jne 0x1290c291 */
  if (!C.zf) goto L_1290c291;
  /* 1290c258 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1290c25a call 0x12906540 */
  push32(0x1290c25fu); f_12906540();
  /* 1290c25f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c265 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c269 jne 0x1290c287 */
  if (!C.zf) goto L_1290c287;
  /* 1290c26b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c26e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c271 push edx */
  push32((uint32_t)(EDX));
  /* 1290c272 call dword ptr [0x129302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f0))), 0x1290c278u);
  /* 1290c278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c27b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1290c27e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c284 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1290c287:;
  /* 1290c287 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1290c289 call 0x129065e0 */
  push32(0x1290c28eu); f_129065e0();
  /* 1290c28e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290c291:;
  /* 1290c291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c294 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290c297 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c29a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290c29d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c2a0 mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290c2a7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1290c2ab push eax */
  push32((uint32_t)(EAX));
  /* 1290c2ac call dword ptr [0x129302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f4))), 0x1290c2b2u);
  /* 1290c2b2 mov esp, ebp */
  ESP = (EBP);
  /* 1290c2b4 pop ebp */
  EBP = (pop32());
  /* 1290c2b5 ret  */
  ESPCHK(0x1290c230u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1290c2c0 (38 bytes, 13 insns) */
void f_1290c2c0(void) {
  FTRACE(0x1290c2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1290c2c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c2c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290c2c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c2cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290c2cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c2d2 mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290c2d9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1290c2dd push eax */
  push32((uint32_t)(EAX));
  /* 1290c2de call dword ptr [0x129302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302f8))), 0x1290c2e4u);
  /* 1290c2e4 pop ebp */
  EBP = (pop32());
  /* 1290c2e5 ret  */
  ESPCHK(0x1290c2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2f0 @ 0x1290c2f0 (218 bytes, 63 insns) */
void f_1290c2f0(void) {
  FTRACE(0x1290c2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1290c2f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c2f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290c2fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1290c2ff call 0x12906540 */
  push32(0x1290c304u); f_12906540();
  /* 1290c304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c307 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1290c30e jmp 0x1290c319 */
  goto L_1290c319;
L_1290c310:;
  /* 1290c310 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c313 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c316 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1290c319:;
  /* 1290c319 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c31c cmp ecx, dword ptr [0x1292fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c322 jge 0x1290c3b9 */
  if ((C.sf==C.of)) goto L_1290c3b9;
  /* 1290c328 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c32b mov eax, dword ptr [0x1292e818] */
  EAX = (r32((uint32_t)(0x1292e818)));
  /* 1290c330 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c334 je 0x1290c3b4 */
  if (C.zf) goto L_1290c3b4;
  /* 1290c336 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c339 mov edx, dword ptr [0x1292e818] */
  EDX = (r32((uint32_t)(0x1292e818)));
  /* 1290c33f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1290c342 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1290c345 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1290c34b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290c34d je 0x1290c371 */
  if (C.zf) goto L_1290c371;
  /* 1290c34f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c352 mov eax, dword ptr [0x1292e818] */
  EAX = (r32((uint32_t)(0x1292e818)));
  /* 1290c357 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1290c35a push ecx */
  push32((uint32_t)(ECX));
  /* 1290c35b call 0x1290d0e0 */
  push32(0x1290c360u); f_1290d0e0();
  /* 1290c360 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c363 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c366 je 0x1290c371 */
  if (C.zf) goto L_1290c371;
  /* 1290c368 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c36b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c36e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1290c371:;
  /* 1290c371 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c375 jl 0x1290c3b4 */
  if ((C.sf!=C.of)) goto L_1290c3b4;
  /* 1290c377 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c37a mov ecx, dword ptr [0x1292e818] */
  ECX = (r32((uint32_t)(0x1292e818)));
  /* 1290c380 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1290c383 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c386 push edx */
  push32((uint32_t)(EDX));
  /* 1290c387 call dword ptr [0x129302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302b8))), 0x1290c38du);
  /* 1290c38d push 2 */
  push32((uint32_t)(0x2u));
  /* 1290c38f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c392 mov ecx, dword ptr [0x1292e818] */
  ECX = (r32((uint32_t)(0x1292e818)));
  /* 1290c398 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1290c39b push edx */
  push32((uint32_t)(EDX));
  /* 1290c39c call 0x129035d0 */
  push32(0x1290c3a1u); f_129035d0();
  /* 1290c3a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c3a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c3a7 mov ecx, dword ptr [0x1292e818] */
  ECX = (r32((uint32_t)(0x1292e818)));
  /* 1290c3ad mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1290c3b4:;
  /* 1290c3b4 jmp 0x1290c310 */
  goto L_1290c310;
L_1290c3b9:;
  /* 1290c3b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290c3bb call 0x129065e0 */
  push32(0x1290c3c0u); f_129065e0();
  /* 1290c3c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c3c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c3c6 mov esp, ebp */
  ESP = (EBP);
  /* 1290c3c8 pop ebp */
  EBP = (pop32());
  /* 1290c3c9 ret  */
  ESPCHK(0x1290c2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3d0 @ 0x1290c3d0 (68 bytes, 26 insns) */
void f_1290c3d0(void) {
  FTRACE(0x1290c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1290c3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c3d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c3d8 jne 0x1290c3e6 */
  if (!C.zf) goto L_1290c3e6;
  /* 1290c3da push 0 */
  push32((uint32_t)(0x0u));
  /* 1290c3dc call 0x1290c540 */
  push32(0x1290c3e1u); f_1290c540();
  /* 1290c3e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c3e4 jmp 0x1290c410 */
  goto L_1290c410;
L_1290c3e6:;
  /* 1290c3e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c3e9 push eax */
  push32((uint32_t)(EAX));
  /* 1290c3ea call 0x1290b950 */
  push32(0x1290c3efu); f_1290b950();
  /* 1290c3ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c3f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c3f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c3f6 call 0x1290c420 */
  push32(0x1290c3fbu); f_1290c420();
  /* 1290c3fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c3fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290c401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c404 push edx */
  push32((uint32_t)(EDX));
  /* 1290c405 call 0x1290b9c0 */
  push32(0x1290c40au); f_1290b9c0();
  /* 1290c40a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c40d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1290c410:;
  /* 1290c410 mov esp, ebp */
  ESP = (EBP);
  /* 1290c412 pop ebp */
  EBP = (pop32());
  /* 1290c413 ret  */
  ESPCHK(0x1290c3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c420 @ 0x1290c420 (65 bytes, 26 insns) */
void f_1290c420(void) {
  FTRACE(0x1290c420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c420 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c421 mov ebp, esp */
  EBP = (ESP);
  /* 1290c423 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c426 push eax */
  push32((uint32_t)(EAX));
  /* 1290c427 call 0x1290c470 */
  push32(0x1290c42cu); f_1290c470();
  /* 1290c42c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c42f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290c431 je 0x1290c438 */
  if (C.zf) goto L_1290c438;
  /* 1290c433 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290c436 jmp 0x1290c45f */
  goto L_1290c45f;
L_1290c438:;
  /* 1290c438 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c43b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290c43e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1290c444 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290c446 je 0x1290c45d */
  if (C.zf) goto L_1290c45d;
  /* 1290c448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c44b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1290c44e push ecx */
  push32((uint32_t)(ECX));
  /* 1290c44f call 0x1290d230 */
  push32(0x1290c454u); f_1290d230();
  /* 1290c454 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c457 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290c459 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c45b jmp 0x1290c45f */
  goto L_1290c45f;
L_1290c45d:;
  /* 1290c45d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290c45f:;
  /* 1290c45f pop ebp */
  EBP = (pop32());
  /* 1290c460 ret  */
  ESPCHK(0x1290c420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c470 @ 0x1290c470 (183 bytes, 62 insns) */
void f_1290c470(void) {
  FTRACE(0x1290c470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c470 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c471 mov ebp, esp */
  EBP = (ESP);
  /* 1290c473 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c476 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290c47d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c480 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290c483 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c486 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290c489 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1290c48c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c48f jne 0x1290c50b */
  if (!C.zf) goto L_1290c50b;
  /* 1290c491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c494 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1290c497 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1290c49d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290c49f je 0x1290c50b */
  if (C.zf) goto L_1290c50b;
  /* 1290c4a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c4a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c4a7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1290c4a9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c4ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290c4af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c4b3 jle 0x1290c50b */
  if ((C.zf||C.sf!=C.of)) goto L_1290c50b;
  /* 1290c4b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c4b8 push edx */
  push32((uint32_t)(EDX));
  /* 1290c4b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c4bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1290c4bf push ecx */
  push32((uint32_t)(ECX));
  /* 1290c4c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c4c3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1290c4c6 push eax */
  push32((uint32_t)(EAX));
  /* 1290c4c7 call 0x1290b3e0 */
  push32(0x1290c4ccu); f_1290b3e0();
  /* 1290c4cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c4cf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c4d2 jne 0x1290c4f5 */
  if (!C.zf) goto L_1290c4f5;
  /* 1290c4d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c4d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290c4da and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1290c4e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290c4e2 je 0x1290c4f3 */
  if (C.zf) goto L_1290c4f3;
  /* 1290c4e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c4e7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1290c4ea and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1290c4ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c4f0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1290c4f3:;
  /* 1290c4f3 jmp 0x1290c50b */
  goto L_1290c50b;
L_1290c4f5:;
  /* 1290c4f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c4f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1290c4fb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1290c4fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c501 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1290c504 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1290c50b:;
  /* 1290c50b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c50e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c511 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1290c514 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1290c516 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290c519 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1290c520 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c523 mov esp, ebp */
  ESP = (EBP);
  /* 1290c525 pop ebp */
  EBP = (pop32());
  /* 1290c526 ret  */
  ESPCHK(0x1290c470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c530 @ 0x1290c530 (15 bytes, 7 insns) */
void f_1290c530(void) {
  FTRACE(0x1290c530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c530 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c531 mov ebp, esp */
  EBP = (ESP);
  /* 1290c533 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290c535 call 0x1290c540 */
  push32(0x1290c53au); f_1290c540();
  /* 1290c53a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c53d pop ebp */
  EBP = (pop32());
  /* 1290c53e ret  */
  ESPCHK(0x1290c530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c540 @ 0x1290c540 (319 bytes, 94 insns) */
void f_1290c540(void) {
  FTRACE(0x1290c540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c540 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c541 mov ebp, esp */
  EBP = (ESP);
  /* 1290c543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c546 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290c54d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290c554 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290c556 call 0x12906540 */
  push32(0x1290c55bu); f_12906540();
  /* 1290c55b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c55e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1290c565 jmp 0x1290c570 */
  goto L_1290c570;
L_1290c567:;
  /* 1290c567 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c56a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c56d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1290c570:;
  /* 1290c570 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c573 cmp ecx, dword ptr [0x1292fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1292fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c579 jge 0x1290c663 */
  if ((C.sf==C.of)) goto L_1290c663;
  /* 1290c57f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c582 mov eax, dword ptr [0x1292e818] */
  EAX = (r32((uint32_t)(0x1292e818)));
  /* 1290c587 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c58b je 0x1290c65e */
  if (C.zf) goto L_1290c65e;
  /* 1290c591 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c594 mov edx, dword ptr [0x1292e818] */
  EDX = (r32((uint32_t)(0x1292e818)));
  /* 1290c59a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1290c59d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1290c5a0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1290c5a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290c5a8 je 0x1290c65e */
  if (C.zf) goto L_1290c65e;
  /* 1290c5ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c5b1 mov eax, dword ptr [0x1292e818] */
  EAX = (r32((uint32_t)(0x1292e818)));
  /* 1290c5b6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1290c5b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c5ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c5bd push edx */
  push32((uint32_t)(EDX));
  /* 1290c5be call 0x1290b990 */
  push32(0x1290c5c3u); f_1290b990();
  /* 1290c5c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c5c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c5c9 mov ecx, dword ptr [0x1292e818] */
  ECX = (r32((uint32_t)(0x1292e818)));
  /* 1290c5cf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1290c5d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1290c5d5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1290c5da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290c5dc je 0x1290c645 */
  if (C.zf) goto L_1290c645;
  /* 1290c5de cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c5e2 jne 0x1290c609 */
  if (!C.zf) goto L_1290c609;
  /* 1290c5e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c5e7 mov edx, dword ptr [0x1292e818] */
  EDX = (r32((uint32_t)(0x1292e818)));
  /* 1290c5ed mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1290c5f0 push eax */
  push32((uint32_t)(EAX));
  /* 1290c5f1 call 0x1290c420 */
  push32(0x1290c5f6u); f_1290c420();
  /* 1290c5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c5f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c5fc je 0x1290c607 */
  if (C.zf) goto L_1290c607;
  /* 1290c5fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c601 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c604 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1290c607:;
  /* 1290c607 jmp 0x1290c645 */
  goto L_1290c645;
L_1290c609:;
  /* 1290c609 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c60d jne 0x1290c645 */
  if (!C.zf) goto L_1290c645;
  /* 1290c60f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c612 mov eax, dword ptr [0x1292e818] */
  EAX = (r32((uint32_t)(0x1292e818)));
  /* 1290c617 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1290c61a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290c61d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1290c620 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290c622 je 0x1290c645 */
  if (C.zf) goto L_1290c645;
  /* 1290c624 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c627 mov ecx, dword ptr [0x1292e818] */
  ECX = (r32((uint32_t)(0x1292e818)));
  /* 1290c62d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1290c630 push edx */
  push32((uint32_t)(EDX));
  /* 1290c631 call 0x1290c420 */
  push32(0x1290c636u); f_1290c420();
  /* 1290c636 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c639 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c63c jne 0x1290c645 */
  if (!C.zf) goto L_1290c645;
  /* 1290c63e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1290c645:;
  /* 1290c645 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c648 mov ecx, dword ptr [0x1292e818] */
  ECX = (r32((uint32_t)(0x1292e818)));
  /* 1290c64e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1290c651 push edx */
  push32((uint32_t)(EDX));
  /* 1290c652 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c655 push eax */
  push32((uint32_t)(EAX));
  /* 1290c656 call 0x1290ba00 */
  push32(0x1290c65bu); f_1290ba00();
  /* 1290c65b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290c65e:;
  /* 1290c65e jmp 0x1290c567 */
  goto L_1290c567;
L_1290c663:;
  /* 1290c663 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290c665 call 0x129065e0 */
  push32(0x1290c66au); f_129065e0();
  /* 1290c66a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c66d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c671 jne 0x1290c678 */
  if (!C.zf) goto L_1290c678;
  /* 1290c673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290c676 jmp 0x1290c67b */
  goto L_1290c67b;
L_1290c678:;
  /* 1290c678 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1290c67b:;
  /* 1290c67b mov esp, ebp */
  ESP = (EBP);
  /* 1290c67d pop ebp */
  EBP = (pop32());
  /* 1290c67e ret  */
  ESPCHK(0x1290c540u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1290c680 (15 bytes, 7 insns) */
void f_1290c680(void) {
  FTRACE(0x1290c680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c680 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c681 mov ebp, esp */
  EBP = (ESP);
  /* 1290c683 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290c685 call 0x12901ab0 */
  push32(0x1290c68au); f_12901ab0();
  /* 1290c68a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c68d pop ebp */
  EBP = (pop32());
  /* 1290c68e ret  */
  ESPCHK(0x1290c680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c690 @ 0x1290c690 (1007 bytes, 269 insns) */
void f_1290c690(void) {
  FTRACE(0x1290c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290c690 push ebp */
  push32((uint32_t)(EBP));
  /* 1290c691 mov ebp, esp */
  EBP = (ESP);
  /* 1290c693 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c699 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c69d jl 0x1290c6a5 */
  if ((C.sf!=C.of)) goto L_1290c6a5;
  /* 1290c69f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c6a3 jle 0x1290c6ac */
  if ((C.zf||C.sf!=C.of)) goto L_1290c6ac;
L_1290c6a5:;
  /* 1290c6a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290c6a7 jmp 0x1290ca7b */
  goto L_1290ca7b;
L_1290c6ac:;
  /* 1290c6ac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1290c6ae call 0x12906540 */
  push32(0x1290c6b3u); f_12906540();
  /* 1290c6b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c6b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1290c6bd mov eax, dword ptr [0x1292e804] */
  EAX = (r32((uint32_t)(0x1292e804)));
  /* 1290c6c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c6c5 mov dword ptr [0x1292e804], eax */
  w32((uint32_t)(0x1292e804), (EAX));
L_1290c6ca:;
  /* 1290c6ca cmp dword ptr [0x1292e814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c6d1 je 0x1290c6dd */
  if (C.zf) goto L_1290c6dd;
  /* 1290c6d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290c6d5 call dword ptr [0x12930338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930338))), 0x1290c6dbu);
  /* 1290c6db jmp 0x1290c6ca */
  goto L_1290c6ca;
L_1290c6dd:;
  /* 1290c6dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c6e1 je 0x1290c721 */
  if (C.zf) goto L_1290c721;
  /* 1290c6e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c6e7 je 0x1290c701 */
  if (C.zf) goto L_1290c701;
  /* 1290c6e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290c6ec push ecx */
  push32((uint32_t)(ECX));
  /* 1290c6ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c6f0 push edx */
  push32((uint32_t)(EDX));
  /* 1290c6f1 call 0x1290ca80 */
  push32(0x1290c6f6u); f_1290ca80();
  /* 1290c6f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c6f9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1290c6ff jmp 0x1290c713 */
  goto L_1290c713;
L_1290c701:;
  /* 1290c701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c704 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c707 mov ecx, dword ptr [eax + 0x1292d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1292d4dc)));
  /* 1290c70d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1290c713:;
  /* 1290c713 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1290c719 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1290c71c jmp 0x1290ca5b */
  goto L_1290ca5b;
L_1290c721:;
  /* 1290c721 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1290c728 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1290c72f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c733 je 0x1290ca53 */
  if (C.zf) goto L_1290ca53;
  /* 1290c739 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290c73c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290c73f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c742 jne 0x1290c964 */
  if (!C.zf) goto L_1290c964;
  /* 1290c748 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290c74b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1290c74f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c752 jne 0x1290c964 */
  if (!C.zf) goto L_1290c964;
  /* 1290c758 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290c75b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1290c75f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c762 jne 0x1290c964 */
  if (!C.zf) goto L_1290c964;
  /* 1290c768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290c76b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1290c771:;
  /* 1290c771 push 0x12929fb4 */
  push32((uint32_t)(0x12929fb4u));
  /* 1290c776 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1290c77c push ecx */
  push32((uint32_t)(ECX));
  /* 1290c77d call 0x1290e8e0 */
  push32(0x1290c782u); f_1290e8e0();
  /* 1290c782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c785 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1290c78b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c792 je 0x1290c7bd */
  if (C.zf) goto L_1290c7bd;
  /* 1290c794 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1290c79a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c7a0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1290c7a6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c7ad je 0x1290c7bd */
  if (C.zf) goto L_1290c7bd;
  /* 1290c7af mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1290c7b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290c7b8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c7bb jne 0x1290c7e3 */
  if (!C.zf) goto L_1290c7e3;
L_1290c7bd:;
  /* 1290c7bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c7c1 je 0x1290c7dc */
  if (C.zf) goto L_1290c7dc;
  /* 1290c7c3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1290c7c5 call 0x129065e0 */
  push32(0x1290c7cau); f_129065e0();
  /* 1290c7ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c7cd mov edx, dword ptr [0x1292e804] */
  EDX = (r32((uint32_t)(0x1292e804)));
  /* 1290c7d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c7d6 mov dword ptr [0x1292e804], edx */
  w32((uint32_t)(0x1292e804), (EDX));
L_1290c7dc:;
  /* 1290c7dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290c7de jmp 0x1290ca7b */
  goto L_1290ca7b;
L_1290c7e3:;
  /* 1290c7e3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1290c7ea jmp 0x1290c7f5 */
  goto L_1290c7f5;
L_1290c7ec:;
  /* 1290c7ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290c7ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c7f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1290c7f5:;
  /* 1290c7f5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c7f9 jg 0x1290c843 */
  if ((!C.zf&&C.sf==C.of)) goto L_1290c843;
  /* 1290c7fb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1290c801 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c802 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1290c808 push edx */
  push32((uint32_t)(EDX));
  /* 1290c809 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290c80c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c80f mov ecx, dword ptr [eax + 0x1292d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1292d4d8)));
  /* 1290c815 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c816 call 0x1290e8a0 */
  push32(0x1290c81bu); f_1290e8a0();
  /* 1290c81b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c81e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290c820 jne 0x1290c841 */
  if (!C.zf) goto L_1290c841;
  /* 1290c822 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290c825 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c828 mov eax, dword ptr [edx + 0x1292d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1292d4d8)));
  /* 1290c82e push eax */
  push32((uint32_t)(EAX));
  /* 1290c82f call 0x12905970 */
  push32(0x1290c834u); f_12905970();
  /* 1290c834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c837 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c83d jne 0x1290c841 */
  if (!C.zf) goto L_1290c841;
  /* 1290c83f jmp 0x1290c843 */
  goto L_1290c843;
L_1290c841:;
  /* 1290c841 jmp 0x1290c7ec */
  goto L_1290c7ec;
L_1290c843:;
  /* 1290c843 push 0x12929fb0 */
  push32((uint32_t)(0x12929fb0u));
  /* 1290c848 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1290c84e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c851 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1290c857 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1290c85d push edx */
  push32((uint32_t)(EDX));
  /* 1290c85e call 0x1290e860 */
  push32(0x1290c863u); f_1290e860();
  /* 1290c863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c866 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1290c86c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c873 jne 0x1290c8a9 */
  if (!C.zf) goto L_1290c8a9;
  /* 1290c875 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1290c87b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290c87e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c881 je 0x1290c8a9 */
  if (C.zf) goto L_1290c8a9;
  /* 1290c883 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c887 je 0x1290c8a2 */
  if (C.zf) goto L_1290c8a2;
  /* 1290c889 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1290c88b call 0x129065e0 */
  push32(0x1290c890u); f_129065e0();
  /* 1290c890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c893 mov edx, dword ptr [0x1292e804] */
  EDX = (r32((uint32_t)(0x1292e804)));
  /* 1290c899 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290c89c mov dword ptr [0x1292e804], edx */
  w32((uint32_t)(0x1292e804), (EDX));
L_1290c8a2:;
  /* 1290c8a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290c8a4 jmp 0x1290ca7b */
  goto L_1290ca7b;
L_1290c8a9:;
  /* 1290c8a9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c8ad jg 0x1290c8fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1290c8fa;
  /* 1290c8af mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1290c8b5 push eax */
  push32((uint32_t)(EAX));
  /* 1290c8b6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1290c8bc push ecx */
  push32((uint32_t)(ECX));
  /* 1290c8bd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1290c8c3 push edx */
  push32((uint32_t)(EDX));
  /* 1290c8c4 call 0x12906360 */
  push32(0x1290c8c9u); f_12906360();
  /* 1290c8c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c8cc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1290c8d2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1290c8da lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1290c8e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c8e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290c8e4 push edx */
  push32((uint32_t)(EDX));
  /* 1290c8e5 call 0x1290ca80 */
  push32(0x1290c8eau); f_1290ca80();
  /* 1290c8ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c8ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290c8ef je 0x1290c8fa */
  if (C.zf) goto L_1290c8fa;
  /* 1290c8f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c8f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c8f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1290c8fa:;
  /* 1290c8fa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1290c900 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c906 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1290c90c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1290c912 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1290c915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290c917 je 0x1290c928 */
  if (C.zf) goto L_1290c928;
  /* 1290c919 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1290c91f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c922 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1290c928:;
  /* 1290c928 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1290c92e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1290c931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290c933 jne 0x1290c771 */
  if (!C.zf) goto L_1290c771;
  /* 1290c939 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c93d je 0x1290c94c */
  if (C.zf) goto L_1290c94c;
  /* 1290c93f call 0x1290cc20 */
  push32(0x1290c944u); f_1290cc20();
  /* 1290c944 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1290c94a jmp 0x1290c956 */
  goto L_1290c956;
L_1290c94c:;
  /* 1290c94c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1290c956:;
  /* 1290c956 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1290c95c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290c95f jmp 0x1290ca51 */
  goto L_1290ca51;
L_1290c964:;
  /* 1290c964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290c967 push edx */
  push32((uint32_t)(EDX));
  /* 1290c968 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290c96a push 0 */
  push32((uint32_t)(0x0u));
  /* 1290c96c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1290c972 push eax */
  push32((uint32_t)(EAX));
  /* 1290c973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290c976 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c977 call 0x1290cd20 */
  push32(0x1290c97cu); f_1290cd20();
  /* 1290c97c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c97f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290c982 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c986 je 0x1290ca51 */
  if (C.zf) goto L_1290ca51;
  /* 1290c98c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290c993 jmp 0x1290c99e */
  goto L_1290c99e;
L_1290c995:;
  /* 1290c995 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290c998 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c99b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1290c99e:;
  /* 1290c99e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c9a2 jg 0x1290ca00 */
  if ((!C.zf&&C.sf==C.of)) goto L_1290ca00;
  /* 1290c9a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290c9a8 je 0x1290c9fe */
  if (C.zf) goto L_1290c9fe;
  /* 1290c9aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290c9ad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290c9b0 mov ecx, dword ptr [eax + 0x1292d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1292d4dc)));
  /* 1290c9b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c9b7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1290c9bd push edx */
  push32((uint32_t)(EDX));
  /* 1290c9be call 0x1290e7d0 */
  push32(0x1290c9c3u); f_1290e7d0();
  /* 1290c9c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c9c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290c9c8 je 0x1290c9f5 */
  if (C.zf) goto L_1290c9f5;
  /* 1290c9ca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1290c9d0 push eax */
  push32((uint32_t)(EAX));
  /* 1290c9d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290c9d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1290c9d5 call 0x1290ca80 */
  push32(0x1290c9dau); f_1290ca80();
  /* 1290c9da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c9dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290c9df je 0x1290c9ec */
  if (C.zf) goto L_1290c9ec;
  /* 1290c9e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c9e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c9e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1290c9ea jmp 0x1290c9f3 */
  goto L_1290c9f3;
L_1290c9ec:;
  /* 1290c9ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1290c9f3:;
  /* 1290c9f3 jmp 0x1290c9fe */
  goto L_1290c9fe;
L_1290c9f5:;
  /* 1290c9f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290c9f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290c9fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1290c9fe:;
  /* 1290c9fe jmp 0x1290c995 */
  goto L_1290c995;
L_1290ca00:;
  /* 1290ca00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ca04 je 0x1290ca2b */
  if (C.zf) goto L_1290ca2b;
  /* 1290ca06 call 0x1290cc20 */
  push32(0x1290ca0bu); f_1290cc20();
  /* 1290ca0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290ca0e push 2 */
  push32((uint32_t)(0x2u));
  /* 1290ca10 mov ecx, dword ptr [0x1292d4dc] */
  ECX = (r32((uint32_t)(0x1292d4dc)));
  /* 1290ca16 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ca17 call 0x129035d0 */
  push32(0x1290ca1cu); f_129035d0();
  /* 1290ca1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ca1f mov dword ptr [0x1292d4dc], 0 */
  w32((uint32_t)(0x1292d4dc), (0x0u));
  /* 1290ca29 jmp 0x1290ca51 */
  goto L_1290ca51;
L_1290ca2b:;
  /* 1290ca2b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ca2f je 0x1290ca3e */
  if (C.zf) goto L_1290ca3e;
  /* 1290ca31 call 0x1290cc20 */
  push32(0x1290ca36u); f_1290cc20();
  /* 1290ca36 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1290ca3c jmp 0x1290ca48 */
  goto L_1290ca48;
L_1290ca3e:;
  /* 1290ca3e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1290ca48:;
  /* 1290ca48 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1290ca4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1290ca51:;
  /* 1290ca51 jmp 0x1290ca5b */
  goto L_1290ca5b;
L_1290ca53:;
  /* 1290ca53 call 0x1290cc20 */
  push32(0x1290ca58u); f_1290cc20();
  /* 1290ca58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1290ca5b:;
  /* 1290ca5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ca5f je 0x1290ca78 */
  if (C.zf) goto L_1290ca78;
  /* 1290ca61 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1290ca63 call 0x129065e0 */
  push32(0x1290ca68u); f_129065e0();
  /* 1290ca68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ca6b mov eax, dword ptr [0x1292e804] */
  EAX = (r32((uint32_t)(0x1292e804)));
  /* 1290ca70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ca73 mov dword ptr [0x1292e804], eax */
  w32((uint32_t)(0x1292e804), (EAX));
L_1290ca78:;
  /* 1290ca78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1290ca7b:;
  /* 1290ca7b mov esp, ebp */
  ESP = (EBP);
  /* 1290ca7d pop ebp */
  EBP = (pop32());
  /* 1290ca7e ret  */
  ESPCHK(0x1290c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca80 @ 0x1290ca80 (403 bytes, 117 insns) */
void f_1290ca80(void) {
  FTRACE(0x1290ca80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290ca80 push ebp */
  push32((uint32_t)(EBP));
  /* 1290ca81 mov ebp, esp */
  EBP = (ESP);
  /* 1290ca83 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ca89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ca8c push eax */
  push32((uint32_t)(EAX));
  /* 1290ca8d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1290ca93 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ca94 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1290ca9a push edx */
  push32((uint32_t)(EDX));
  /* 1290ca9b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1290caa1 push eax */
  push32((uint32_t)(EAX));
  /* 1290caa2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290caa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1290caa6 call 0x1290cd20 */
  push32(0x1290caabu); f_1290cd20();
  /* 1290caab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290caae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290cab0 jne 0x1290cab9 */
  if (!C.zf) goto L_1290cab9;
  /* 1290cab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290cab4 jmp 0x1290cc0f */
  goto L_1290cc0f;
L_1290cab9:;
  /* 1290cab9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1290cabe push 0x12929fb8 */
  push32((uint32_t)(0x12929fb8u));
  /* 1290cac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290cac5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1290cacb push edx */
  push32((uint32_t)(EDX));
  /* 1290cacc call 0x12905970 */
  push32(0x1290cad1u); f_12905970();
  /* 1290cad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cad4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cad7 push eax */
  push32((uint32_t)(EAX));
  /* 1290cad8 call 0x12902b40 */
  push32(0x1290caddu); f_12902b40();
  /* 1290cadd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cae0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290cae3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cae7 jne 0x1290caf0 */
  if (!C.zf) goto L_1290caf0;
  /* 1290cae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290caeb jmp 0x1290cc0f */
  goto L_1290cc0f;
L_1290caf0:;
  /* 1290caf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290caf3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290caf6 mov ecx, dword ptr [eax + 0x1292d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1292d4dc)));
  /* 1290cafc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290caff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cb02 mov eax, dword ptr [edx*4 + 0x1292e680] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1292e680)));
  /* 1290cb09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290cb0c push 6 */
  push32((uint32_t)(0x6u));
  /* 1290cb0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cb11 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290cb14 add ecx, 0x1292e6d0 */
  { uint32_t _a=(ECX),_b=(0x1292e6d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cb1a push ecx */
  push32((uint32_t)(ECX));
  /* 1290cb1b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1290cb1e push edx */
  push32((uint32_t)(EDX));
  /* 1290cb1f call 0x12909420 */
  push32(0x1290cb24u); f_12909420();
  /* 1290cb24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cb27 mov eax, dword ptr [0x1292e698] */
  EAX = (r32((uint32_t)(0x1292e698)));
  /* 1290cb2c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1290cb2f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1290cb35 push ecx */
  push32((uint32_t)(ECX));
  /* 1290cb36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290cb39 push edx */
  push32((uint32_t)(EDX));
  /* 1290cb3a call 0x12905af0 */
  push32(0x1290cb3fu); f_12905af0();
  /* 1290cb3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cb42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cb45 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290cb48 mov dword ptr [ecx + 0x1292d4dc], eax */
  w32((uint32_t)(ECX + 0x1292d4dc), (EAX));
  /* 1290cb4e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1290cb54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1290cb5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cb5d mov dword ptr [eax*4 + 0x1292e680], edx */
  w32((uint32_t)(EAX*4 + 0x1292e680), (EDX));
  /* 1290cb64 push 6 */
  push32((uint32_t)(0x6u));
  /* 1290cb66 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1290cb6c push ecx */
  push32((uint32_t)(ECX));
  /* 1290cb6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cb70 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290cb73 add edx, 0x1292e6d0 */
  { uint32_t _a=(EDX),_b=(0x1292e6d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cb79 push edx */
  push32((uint32_t)(EDX));
  /* 1290cb7a call 0x12909420 */
  push32(0x1290cb7fu); f_12909420();
  /* 1290cb7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cb82 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cb86 jne 0x1290cb93 */
  if (!C.zf) goto L_1290cb93;
  /* 1290cb88 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1290cb8e mov dword ptr [0x1292e698], eax */
  w32((uint32_t)(0x1292e698), (EAX));
L_1290cb93:;
  /* 1290cb93 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cb97 jne 0x1290cba5 */
  if (!C.zf) goto L_1290cba5;
  /* 1290cb99 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1290cb9f mov dword ptr [0x1292e69c], ecx */
  w32((uint32_t)(0x1292e69c), (ECX));
L_1290cba5:;
  /* 1290cba5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cba8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290cbab call dword ptr [edx + 0x1292d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1292d4e0))), 0x1290cbb1u);
  /* 1290cbb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290cbb3 je 0x1290cbec */
  if (C.zf) goto L_1290cbec;
  /* 1290cbb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cbb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290cbbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290cbbe mov dword ptr [eax + 0x1292d4dc], ecx */
  w32((uint32_t)(EAX + 0x1292d4dc), (ECX));
  /* 1290cbc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290cbc6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290cbc9 push edx */
  push32((uint32_t)(EDX));
  /* 1290cbca call 0x129035d0 */
  push32(0x1290cbcfu); f_129035d0();
  /* 1290cbcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cbd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cbd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290cbd8 mov dword ptr [eax*4 + 0x1292e680], ecx */
  w32((uint32_t)(EAX*4 + 0x1292e680), (ECX));
  /* 1290cbdf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290cbe2 mov dword ptr [0x1292e698], edx */
  w32((uint32_t)(0x1292e698), (EDX));
  /* 1290cbe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290cbea jmp 0x1290cc0f */
  goto L_1290cc0f;
L_1290cbec:;
  /* 1290cbec cmp dword ptr [ebp - 0xc], 0x1292d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1292d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cbf3 je 0x1290cc03 */
  if (C.zf) goto L_1290cc03;
  /* 1290cbf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290cbf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290cbfa push eax */
  push32((uint32_t)(EAX));
  /* 1290cbfb call 0x129035d0 */
  push32(0x1290cc00u); f_129035d0();
  /* 1290cc00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290cc03:;
  /* 1290cc03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cc06 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290cc09 mov eax, dword ptr [ecx + 0x1292d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1292d4dc)));
L_1290cc0f:;
  /* 1290cc0f mov esp, ebp */
  ESP = (EBP);
  /* 1290cc11 pop ebp */
  EBP = (pop32());
  /* 1290cc12 ret  */
  ESPCHK(0x1290ca80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x1290cc20 (256 bytes, 72 insns) */
void f_1290cc20(void) {
  FTRACE(0x1290cc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290cc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1290cc21 mov ebp, esp */
  EBP = (ESP);
  /* 1290cc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290cc26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1290cc2d cmp dword ptr [0x1292d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cc34 jne 0x1290cc54 */
  if (!C.zf) goto L_1290cc54;
  /* 1290cc36 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1290cc3b push 0x12929fb8 */
  push32((uint32_t)(0x12929fb8u));
  /* 1290cc40 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290cc42 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1290cc47 call 0x12902b40 */
  push32(0x1290cc4cu); f_12902b40();
  /* 1290cc4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cc4f mov dword ptr [0x1292d4dc], eax */
  w32((uint32_t)(0x1292d4dc), (EAX));
L_1290cc54:;
  /* 1290cc54 mov eax, dword ptr [0x1292d4dc] */
  EAX = (r32((uint32_t)(0x1292d4dc)));
  /* 1290cc59 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1290cc5c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1290cc63 jmp 0x1290cc6e */
  goto L_1290cc6e;
L_1290cc65:;
  /* 1290cc65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290cc68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cc6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1290cc6e:;
  /* 1290cc6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290cc71 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290cc74 mov eax, dword ptr [edx + 0x1292d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1292d4dc)));
  /* 1290cc7a push eax */
  push32((uint32_t)(EAX));
  /* 1290cc7b push 0x12929fc4 */
  push32((uint32_t)(0x12929fc4u));
  /* 1290cc80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290cc83 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290cc86 mov edx, dword ptr [ecx + 0x1292d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1292d4d8)));
  /* 1290cc8c push edx */
  push32((uint32_t)(EDX));
  /* 1290cc8d push 3 */
  push32((uint32_t)(0x3u));
  /* 1290cc8f mov eax, dword ptr [0x1292d4dc] */
  EAX = (r32((uint32_t)(0x1292d4dc)));
  /* 1290cc94 push eax */
  push32((uint32_t)(EAX));
  /* 1290cc95 call 0x1290cec0 */
  push32(0x1290cc9au); f_1290cec0();
  /* 1290cc9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cc9d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cca1 jge 0x1290cce9 */
  if ((C.sf==C.of)) goto L_1290cce9;
  /* 1290cca3 push 0x12929fb0 */
  push32((uint32_t)(0x12929fb0u));
  /* 1290cca8 mov ecx, dword ptr [0x1292d4dc] */
  ECX = (r32((uint32_t)(0x1292d4dc)));
  /* 1290ccae push ecx */
  push32((uint32_t)(ECX));
  /* 1290ccaf call 0x12905b00 */
  push32(0x1290ccb4u); f_12905b00();
  /* 1290ccb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ccb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290ccba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ccbd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290ccc0 mov eax, dword ptr [edx + 0x1292d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1292d4dc)));
  /* 1290ccc6 push eax */
  push32((uint32_t)(EAX));
  /* 1290ccc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290ccca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290cccd mov edx, dword ptr [ecx + 0x1292d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1292d4dc)));
  /* 1290ccd3 push edx */
  push32((uint32_t)(EDX));
  /* 1290ccd4 call 0x1290e7d0 */
  push32(0x1290ccd9u); f_1290e7d0();
  /* 1290ccd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ccdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ccde je 0x1290cce7 */
  if (C.zf) goto L_1290cce7;
  /* 1290cce0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1290cce7:;
  /* 1290cce7 jmp 0x1290cd17 */
  goto L_1290cd17;
L_1290cce9:;
  /* 1290cce9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cced jne 0x1290ccf6 */
  if (!C.zf) goto L_1290ccf6;
  /* 1290ccef mov eax, dword ptr [0x1292d4dc] */
  EAX = (r32((uint32_t)(0x1292d4dc)));
  /* 1290ccf4 jmp 0x1290cd1c */
  goto L_1290cd1c;
L_1290ccf6:;
  /* 1290ccf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290ccf8 mov eax, dword ptr [0x1292d4dc] */
  EAX = (r32((uint32_t)(0x1292d4dc)));
  /* 1290ccfd push eax */
  push32((uint32_t)(EAX));
  /* 1290ccfe call 0x129035d0 */
  push32(0x1290cd03u); f_129035d0();
  /* 1290cd03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cd06 mov dword ptr [0x1292d4dc], 0 */
  w32((uint32_t)(0x1292d4dc), (0x0u));
  /* 1290cd10 mov eax, dword ptr [0x1292d4f4] */
  EAX = (r32((uint32_t)(0x1292d4f4)));
  /* 1290cd15 jmp 0x1290cd1c */
  goto L_1290cd1c;
L_1290cd17:;
  /* 1290cd17 jmp 0x1290cc65 */
  goto L_1290cc65;
L_1290cd1c:;
  /* 1290cd1c mov esp, ebp */
  ESP = (EBP);
  /* 1290cd1e pop ebp */
  EBP = (pop32());
  /* 1290cd1f ret  */
  ESPCHK(0x1290cc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd20 @ 0x1290cd20 (388 bytes, 115 insns) */
void f_1290cd20(void) {
  FTRACE(0x1290cd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290cd20 push ebp */
  push32((uint32_t)(EBP));
  /* 1290cd21 mov ebp, esp */
  EBP = (ESP);
  /* 1290cd23 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290cd29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cd2d jne 0x1290cd36 */
  if (!C.zf) goto L_1290cd36;
  /* 1290cd2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290cd31 jmp 0x1290cea0 */
  goto L_1290cea0;
L_1290cd36:;
  /* 1290cd36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cd39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290cd3c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cd3f jne 0x1290cd90 */
  if (!C.zf) goto L_1290cd90;
  /* 1290cd41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cd44 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1290cd48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290cd4a jne 0x1290cd90 */
  if (!C.zf) goto L_1290cd90;
  /* 1290cd4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cd4f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1290cd52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cd55 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1290cd59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cd5d je 0x1290cd79 */
  if (C.zf) goto L_1290cd79;
  /* 1290cd5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290cd62 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1290cd67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290cd6a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1290cd70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290cd73 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1290cd79:;
  /* 1290cd79 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cd7d je 0x1290cd88 */
  if (C.zf) goto L_1290cd88;
  /* 1290cd7f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290cd82 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1290cd88:;
  /* 1290cd88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cd8b jmp 0x1290cea0 */
  goto L_1290cea0;
L_1290cd90:;
  /* 1290cd90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cd93 push ecx */
  push32((uint32_t)(ECX));
  /* 1290cd94 push 0x1292d450 */
  push32((uint32_t)(0x1292d450u));
  /* 1290cd99 call 0x1290e7d0 */
  push32(0x1290cd9eu); f_1290e7d0();
  /* 1290cd9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cda1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290cda3 je 0x1290ce58 */
  if (C.zf) goto L_1290ce58;
  /* 1290cda9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cdac push edx */
  push32((uint32_t)(EDX));
  /* 1290cdad push 0x1292d3cc */
  push32((uint32_t)(0x1292d3ccu));
  /* 1290cdb2 call 0x1290e7d0 */
  push32(0x1290cdb7u); f_1290e7d0();
  /* 1290cdb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cdba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290cdbc je 0x1290ce58 */
  if (C.zf) goto L_1290ce58;
  /* 1290cdc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cdc5 push eax */
  push32((uint32_t)(EAX));
  /* 1290cdc6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1290cdcc push ecx */
  push32((uint32_t)(ECX));
  /* 1290cdcd call 0x1290cf10 */
  push32(0x1290cdd2u); f_1290cf10();
  /* 1290cdd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cdd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290cdd7 je 0x1290cde0 */
  if (C.zf) goto L_1290cde0;
  /* 1290cdd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290cddb jmp 0x1290cea0 */
  goto L_1290cea0;
L_1290cde0:;
  /* 1290cde0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1290cde6 push edx */
  push32((uint32_t)(EDX));
  /* 1290cde7 push 0x1292e6a8 */
  push32((uint32_t)(0x1292e6a8u));
  /* 1290cdec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1290cdf2 push eax */
  push32((uint32_t)(EAX));
  /* 1290cdf3 call 0x1290e920 */
  push32(0x1290cdf8u); f_1290e920();
  /* 1290cdf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cdfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290cdfd jne 0x1290ce06 */
  if (!C.zf) goto L_1290ce06;
  /* 1290cdff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290ce01 jmp 0x1290cea0 */
  goto L_1290cea0;
L_1290ce06:;
  /* 1290ce06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290ce08 mov cx, word ptr [0x1292e6ac] */
  CX = (r16((uint32_t)(0x1292e6ac)));
  /* 1290ce0f mov dword ptr [0x1292e6b0], ecx */
  w32((uint32_t)(0x1292e6b0), (ECX));
  /* 1290ce15 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1290ce1b push edx */
  push32((uint32_t)(EDX));
  /* 1290ce1c push 0x1292d450 */
  push32((uint32_t)(0x1292d450u));
  /* 1290ce21 call 0x1290d070 */
  push32(0x1290ce26u); f_1290d070();
  /* 1290ce26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ce29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ce2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290ce2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290ce31 je 0x1290ce46 */
  if (C.zf) goto L_1290ce46;
  /* 1290ce33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ce36 push edx */
  push32((uint32_t)(EDX));
  /* 1290ce37 push 0x1292d3cc */
  push32((uint32_t)(0x1292d3ccu));
  /* 1290ce3c call 0x12905af0 */
  push32(0x1290ce41u); f_12905af0();
  /* 1290ce41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ce44 jmp 0x1290ce58 */
  goto L_1290ce58;
L_1290ce46:;
  /* 1290ce46 push 0x1292d450 */
  push32((uint32_t)(0x1292d450u));
  /* 1290ce4b push 0x1292d3cc */
  push32((uint32_t)(0x1292d3ccu));
  /* 1290ce50 call 0x12905af0 */
  push32(0x1290ce55u); f_12905af0();
  /* 1290ce55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290ce58:;
  /* 1290ce58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ce5c je 0x1290ce71 */
  if (C.zf) goto L_1290ce71;
  /* 1290ce5e push 6 */
  push32((uint32_t)(0x6u));
  /* 1290ce60 push 0x1292e6a8 */
  push32((uint32_t)(0x1292e6a8u));
  /* 1290ce65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290ce68 push eax */
  push32((uint32_t)(EAX));
  /* 1290ce69 call 0x12909420 */
  push32(0x1290ce6eu); f_12909420();
  /* 1290ce6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290ce71:;
  /* 1290ce71 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ce75 je 0x1290ce8a */
  if (C.zf) goto L_1290ce8a;
  /* 1290ce77 push 4 */
  push32((uint32_t)(0x4u));
  /* 1290ce79 push 0x1292e6b0 */
  push32((uint32_t)(0x1292e6b0u));
  /* 1290ce7e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290ce81 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ce82 call 0x12909420 */
  push32(0x1290ce87u); f_12909420();
  /* 1290ce87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290ce8a:;
  /* 1290ce8a push 0x1292d450 */
  push32((uint32_t)(0x1292d450u));
  /* 1290ce8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290ce92 push edx */
  push32((uint32_t)(EDX));
  /* 1290ce93 call 0x12905af0 */
  push32(0x1290ce98u); f_12905af0();
  /* 1290ce98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ce9b mov eax, 0x1292d450 */
  EAX = (0x1292d450u);
L_1290cea0:;
  /* 1290cea0 mov esp, ebp */
  ESP = (EBP);
  /* 1290cea2 pop ebp */
  EBP = (pop32());
  /* 1290cea3 ret  */
  ESPCHK(0x1290cd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ceb0 @ 0x1290ceb0 (7 bytes, 5 insns) */
void f_1290ceb0(void) {
  FTRACE(0x1290ceb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290ceb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290ceb1 mov ebp, esp */
  EBP = (ESP);
  /* 1290ceb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290ceb5 pop ebp */
  EBP = (pop32());
  /* 1290ceb6 ret  */
  ESPCHK(0x1290ceb0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1290cec0 (79 bytes, 28 insns) */
void f_1290cec0(void) {
  FTRACE(0x1290cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290cec1 mov ebp, esp */
  EBP = (ESP);
  /* 1290cec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290cec6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1290cec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290cecc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290ced3 jmp 0x1290cede */
  goto L_1290cede;
L_1290ced5:;
  /* 1290ced5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290ced8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cedb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1290cede:;
  /* 1290cede mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290cee1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cee4 jge 0x1290cf04 */
  if ((C.sf==C.of)) goto L_1290cf04;
  /* 1290cee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290cee9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ceec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290ceef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290cef2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1290cef5 push edx */
  push32((uint32_t)(EDX));
  /* 1290cef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cef9 push eax */
  push32((uint32_t)(EAX));
  /* 1290cefa call 0x12905b00 */
  push32(0x1290ceffu); f_12905b00();
  /* 1290ceff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cf02 jmp 0x1290ced5 */
  goto L_1290ced5;
L_1290cf04:;
  /* 1290cf04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290cf0b mov esp, ebp */
  ESP = (EBP);
  /* 1290cf0d pop ebp */
  EBP = (pop32());
  /* 1290cf0e ret  */
  ESPCHK(0x1290cec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf10 @ 0x1290cf10 (349 bytes, 122 insns) */
void f_1290cf10(void) {
  FTRACE(0x1290cf10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290cf10 push ebp */
  push32((uint32_t)(EBP));
  /* 1290cf11 mov ebp, esp */
  EBP = (ESP);
  /* 1290cf13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290cf16 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1290cf1b push 0 */
  push32((uint32_t)(0x0u));
  /* 1290cf1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cf20 push eax */
  push32((uint32_t)(EAX));
  /* 1290cf21 call 0x129068b0 */
  push32(0x1290cf26u); f_129068b0();
  /* 1290cf26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cf29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cf2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290cf2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290cf31 jne 0x1290cf3a */
  if (!C.zf) goto L_1290cf3a;
  /* 1290cf33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290cf35 jmp 0x1290d069 */
  goto L_1290d069;
L_1290cf3a:;
  /* 1290cf3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cf3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290cf40 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cf43 jne 0x1290cf70 */
  if (!C.zf) goto L_1290cf70;
  /* 1290cf45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cf48 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1290cf4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290cf4e je 0x1290cf70 */
  if (C.zf) goto L_1290cf70;
  /* 1290cf50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cf53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cf56 push ecx */
  push32((uint32_t)(ECX));
  /* 1290cf57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cf5a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cf60 push edx */
  push32((uint32_t)(EDX));
  /* 1290cf61 call 0x12905af0 */
  push32(0x1290cf66u); f_12905af0();
  /* 1290cf66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cf69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290cf6b jmp 0x1290d069 */
  goto L_1290d069;
L_1290cf70:;
  /* 1290cf70 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1290cf77 jmp 0x1290cf82 */
  goto L_1290cf82;
L_1290cf79:;
  /* 1290cf79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290cf7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cf7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290cf82:;
  /* 1290cf82 push 0x12929fc8 */
  push32((uint32_t)(0x12929fc8u));
  /* 1290cf87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cf8a push ecx */
  push32((uint32_t)(ECX));
  /* 1290cf8b call 0x1290e860 */
  push32(0x1290cf90u); f_1290e860();
  /* 1290cf90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cf93 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1290cf96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cf9a jne 0x1290cfa4 */
  if (!C.zf) goto L_1290cfa4;
  /* 1290cf9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290cf9f jmp 0x1290d069 */
  goto L_1290d069;
L_1290cfa4:;
  /* 1290cfa4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cfa7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cfaa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290cfac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1290cfaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cfb3 jne 0x1290cfda */
  if (!C.zf) goto L_1290cfda;
  /* 1290cfb5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cfb9 jge 0x1290cfda */
  if ((C.sf==C.of)) goto L_1290cfda;
  /* 1290cfbb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290cfbf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cfc2 je 0x1290cfda */
  if (C.zf) goto L_1290cfda;
  /* 1290cfc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290cfc7 push edx */
  push32((uint32_t)(EDX));
  /* 1290cfc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cfcb push eax */
  push32((uint32_t)(EAX));
  /* 1290cfcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cfcf push ecx */
  push32((uint32_t)(ECX));
  /* 1290cfd0 call 0x12906360 */
  push32(0x1290cfd5u); f_12906360();
  /* 1290cfd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cfd8 jmp 0x1290d040 */
  goto L_1290d040;
L_1290cfda:;
  /* 1290cfda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cfde jne 0x1290d008 */
  if (!C.zf) goto L_1290d008;
  /* 1290cfe0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cfe4 jge 0x1290d008 */
  if ((C.sf==C.of)) goto L_1290d008;
  /* 1290cfe6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290cfea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290cfed je 0x1290d008 */
  if (C.zf) goto L_1290d008;
  /* 1290cfef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290cff2 push eax */
  push32((uint32_t)(EAX));
  /* 1290cff3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290cff6 push ecx */
  push32((uint32_t)(ECX));
  /* 1290cff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290cffa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290cffd push edx */
  push32((uint32_t)(EDX));
  /* 1290cffe call 0x12906360 */
  push32(0x1290d003u); f_12906360();
  /* 1290d003 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d006 jmp 0x1290d040 */
  goto L_1290d040;
L_1290d008:;
  /* 1290d008 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d00c jne 0x1290d03b */
  if (!C.zf) goto L_1290d03b;
  /* 1290d00e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290d012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290d014 je 0x1290d01f */
  if (C.zf) goto L_1290d01f;
  /* 1290d016 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290d01a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d01d jne 0x1290d03b */
  if (!C.zf) goto L_1290d03b;
L_1290d01f:;
  /* 1290d01f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d022 push edx */
  push32((uint32_t)(EDX));
  /* 1290d023 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290d026 push eax */
  push32((uint32_t)(EAX));
  /* 1290d027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d02a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d030 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d031 call 0x12906360 */
  push32(0x1290d036u); f_12906360();
  /* 1290d036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d039 jmp 0x1290d040 */
  goto L_1290d040;
L_1290d03b:;
  /* 1290d03b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290d03e jmp 0x1290d069 */
  goto L_1290d069;
L_1290d040:;
  /* 1290d040 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290d044 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d047 jne 0x1290d04b */
  if (!C.zf) goto L_1290d04b;
  /* 1290d049 jmp 0x1290d067 */
  goto L_1290d067;
L_1290d04b:;
  /* 1290d04b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290d04f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290d051 jne 0x1290d055 */
  if (!C.zf) goto L_1290d055;
  /* 1290d053 jmp 0x1290d067 */
  goto L_1290d067;
L_1290d055:;
  /* 1290d055 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d058 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290d05b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1290d05f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1290d062 jmp 0x1290cf79 */
  goto L_1290cf79;
L_1290d067:;
  /* 1290d067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290d069:;
  /* 1290d069 mov esp, ebp */
  ESP = (EBP);
  /* 1290d06b pop ebp */
  EBP = (pop32());
  /* 1290d06c ret  */
  ESPCHK(0x1290cf10u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1290d070 (101 bytes, 36 insns) */
void f_1290d070(void) {
  FTRACE(0x1290d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290d070 push ebp */
  push32((uint32_t)(EBP));
  /* 1290d071 mov ebp, esp */
  EBP = (ESP);
  /* 1290d073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290d076 push eax */
  push32((uint32_t)(EAX));
  /* 1290d077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d07a push ecx */
  push32((uint32_t)(ECX));
  /* 1290d07b call 0x12905af0 */
  push32(0x1290d080u); f_12905af0();
  /* 1290d080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d083 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290d086 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1290d08a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290d08c je 0x1290d0a8 */
  if (C.zf) goto L_1290d0a8;
  /* 1290d08e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290d091 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d094 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d095 push 0x12929fd0 */
  push32((uint32_t)(0x12929fd0u));
  /* 1290d09a push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d09c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d09f push edx */
  push32((uint32_t)(EDX));
  /* 1290d0a0 call 0x1290cec0 */
  push32(0x1290d0a5u); f_1290cec0();
  /* 1290d0a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290d0a8:;
  /* 1290d0a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290d0ab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1290d0b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290d0b4 je 0x1290d0d3 */
  if (C.zf) goto L_1290d0d3;
  /* 1290d0b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290d0b9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d0bf push edx */
  push32((uint32_t)(EDX));
  /* 1290d0c0 push 0x12929fcc */
  push32((uint32_t)(0x12929fccu));
  /* 1290d0c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d0c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d0ca push eax */
  push32((uint32_t)(EAX));
  /* 1290d0cb call 0x1290cec0 */
  push32(0x1290d0d0u); f_1290cec0();
  /* 1290d0d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290d0d3:;
  /* 1290d0d3 pop ebp */
  EBP = (pop32());
  /* 1290d0d4 ret  */
  ESPCHK(0x1290d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0e0 @ 0x1290d0e0 (130 bytes, 50 insns) */
void f_1290d0e0(void) {
  FTRACE(0x1290d0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290d0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290d0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1290d0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d0e4 push ebx */
  push32((uint32_t)(EBX));
  /* 1290d0e5 push esi */
  push32((uint32_t)(ESI));
  /* 1290d0e6 push edi */
  push32((uint32_t)(EDI));
  /* 1290d0e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1290d0ee:;
  /* 1290d0ee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d0f2 jne 0x1290d112 */
  if (!C.zf) goto L_1290d112;
  /* 1290d0f4 push 0x12929fe0 */
  push32((uint32_t)(0x12929fe0u));
  /* 1290d0f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290d0fb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1290d0fd push 0x12929fd4 */
  push32((uint32_t)(0x12929fd4u));
  /* 1290d102 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d104 call 0x12901c00 */
  push32(0x1290d109u); f_12901c00();
  /* 1290d109 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d10c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d10f jne 0x1290d112 */
  if (!C.zf) goto L_1290d112;
  /* 1290d111 int3  */
  x86_unimpl("int3 @ 0x1290d111");
L_1290d112:;
  /* 1290d112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290d114 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290d116 jne 0x1290d0ee */
  if (!C.zf) goto L_1290d0ee;
  /* 1290d118 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d11b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290d11e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1290d121 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290d123 je 0x1290d131 */
  if (C.zf) goto L_1290d131;
  /* 1290d125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d128 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1290d12f jmp 0x1290d158 */
  goto L_1290d158;
L_1290d131:;
  /* 1290d131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d134 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d135 call 0x1290b950 */
  push32(0x1290d13au); f_1290b950();
  /* 1290d13a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d13d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d140 push edx */
  push32((uint32_t)(EDX));
  /* 1290d141 call 0x1290d170 */
  push32(0x1290d146u); f_1290d170();
  /* 1290d146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d149 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290d14c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d14f push eax */
  push32((uint32_t)(EAX));
  /* 1290d150 call 0x1290b9c0 */
  push32(0x1290d155u); f_1290b9c0();
  /* 1290d155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290d158:;
  /* 1290d158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d15b pop edi */
  EDI = (pop32());
  /* 1290d15c pop esi */
  ESI = (pop32());
  /* 1290d15d pop ebx */
  EBX = (pop32());
  /* 1290d15e mov esp, ebp */
  ESP = (EBP);
  /* 1290d160 pop ebp */
  EBP = (pop32());
  /* 1290d161 ret  */
  ESPCHK(0x1290d0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d170 @ 0x1290d170 (190 bytes, 67 insns) */
void f_1290d170(void) {
  FTRACE(0x1290d170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290d170 push ebp */
  push32((uint32_t)(EBP));
  /* 1290d171 mov ebp, esp */
  EBP = (ESP);
  /* 1290d173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290d176 push ebx */
  push32((uint32_t)(EBX));
  /* 1290d177 push esi */
  push32((uint32_t)(ESI));
  /* 1290d178 push edi */
  push32((uint32_t)(EDI));
  /* 1290d179 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1290d180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d183 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1290d186:;
  /* 1290d186 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d18a jne 0x1290d1aa */
  if (!C.zf) goto L_1290d1aa;
  /* 1290d18c push 0x12929e84 */
  push32((uint32_t)(0x12929e84u));
  /* 1290d191 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290d193 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1290d195 push 0x12929fd4 */
  push32((uint32_t)(0x12929fd4u));
  /* 1290d19a push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d19c call 0x12901c00 */
  push32(0x1290d1a1u); f_12901c00();
  /* 1290d1a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d1a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d1a7 jne 0x1290d1aa */
  if (!C.zf) goto L_1290d1aa;
  /* 1290d1a9 int3  */
  x86_unimpl("int3 @ 0x1290d1a9");
L_1290d1aa:;
  /* 1290d1aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d1ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290d1ae jne 0x1290d186 */
  if (!C.zf) goto L_1290d186;
  /* 1290d1b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d1b3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1290d1b6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1290d1bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290d1bd je 0x1290d21a */
  if (C.zf) goto L_1290d21a;
  /* 1290d1bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d1c2 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d1c3 call 0x1290c470 */
  push32(0x1290d1c8u); f_1290c470();
  /* 1290d1c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d1cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290d1ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d1d1 push edx */
  push32((uint32_t)(EDX));
  /* 1290d1d2 call 0x1290f7f0 */
  push32(0x1290d1d7u); f_1290f7f0();
  /* 1290d1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d1dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1290d1e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d1e1 call 0x1290f6c0 */
  push32(0x1290d1e6u); f_1290f6c0();
  /* 1290d1e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d1e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290d1eb jge 0x1290d1f6 */
  if ((C.sf==C.of)) goto L_1290d1f6;
  /* 1290d1ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1290d1f4 jmp 0x1290d21a */
  goto L_1290d21a;
L_1290d1f6:;
  /* 1290d1f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d1f9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d1fd je 0x1290d21a */
  if (C.zf) goto L_1290d21a;
  /* 1290d1ff push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d201 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d204 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1290d207 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d208 call 0x129035d0 */
  push32(0x1290d20du); f_129035d0();
  /* 1290d20d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d210 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d213 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1290d21a:;
  /* 1290d21a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d21d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1290d224 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d227 pop edi */
  EDI = (pop32());
  /* 1290d228 pop esi */
  ESI = (pop32());
  /* 1290d229 pop ebx */
  EBX = (pop32());
  /* 1290d22a mov esp, ebp */
  ESP = (EBP);
  /* 1290d22c pop ebp */
  EBP = (pop32());
  /* 1290d22d ret  */
  ESPCHK(0x1290d170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d230 @ 0x1290d230 (210 bytes, 63 insns) */
void f_1290d230(void) {
  FTRACE(0x1290d230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290d230 push ebp */
  push32((uint32_t)(EBP));
  /* 1290d231 mov ebp, esp */
  EBP = (ESP);
  /* 1290d233 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d237 cmp eax, dword ptr [0x1292ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d23d jae 0x1290d261 */
  if (!C.cf) goto L_1290d261;
  /* 1290d23f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d242 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290d245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d248 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290d24b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290d24e mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290d255 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1290d25a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1290d25d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290d25f jne 0x1290d274 */
  if (!C.zf) goto L_1290d274;
L_1290d261:;
  /* 1290d261 call 0x1290aa10 */
  push32(0x1290d266u); f_1290aa10();
  /* 1290d266 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290d26c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290d26f jmp 0x1290d2fe */
  goto L_1290d2fe;
L_1290d274:;
  /* 1290d274 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d277 push edx */
  push32((uint32_t)(EDX));
  /* 1290d278 call 0x1290c230 */
  push32(0x1290d27du); f_1290c230();
  /* 1290d27d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d283 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1290d286 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d289 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1290d28c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290d28f mov edx, dword ptr [eax*4 + 0x1292fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1292fe60)));
  /* 1290d296 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1290d29b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1290d29e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290d2a0 je 0x1290d2dd */
  if (C.zf) goto L_1290d2dd;
  /* 1290d2a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d2a6 call 0x1290c0b0 */
  push32(0x1290d2abu); f_1290c0b0();
  /* 1290d2ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d2ae push eax */
  push32((uint32_t)(EAX));
  /* 1290d2af call dword ptr [0x1293033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293033c))), 0x1290d2b5u);
  /* 1290d2b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290d2b7 jne 0x1290d2c4 */
  if (!C.zf) goto L_1290d2c4;
  /* 1290d2b9 call dword ptr [0x129302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302a4))), 0x1290d2bfu);
  /* 1290d2bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290d2c2 jmp 0x1290d2cb */
  goto L_1290d2cb;
L_1290d2c4:;
  /* 1290d2c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1290d2cb:;
  /* 1290d2cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d2cf jne 0x1290d2d3 */
  if (!C.zf) goto L_1290d2d3;
  /* 1290d2d1 jmp 0x1290d2ef */
  goto L_1290d2ef;
L_1290d2d3:;
  /* 1290d2d3 call 0x1290aa20 */
  push32(0x1290d2d8u); f_1290aa20();
  /* 1290d2d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d2db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1290d2dd:;
  /* 1290d2dd call 0x1290aa10 */
  push32(0x1290d2e2u); f_1290aa10();
  /* 1290d2e2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290d2e8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1290d2ef:;
  /* 1290d2ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d2f2 push eax */
  push32((uint32_t)(EAX));
  /* 1290d2f3 call 0x1290c2c0 */
  push32(0x1290d2f8u); f_1290c2c0();
  /* 1290d2f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d2fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1290d2fe:;
  /* 1290d2fe mov esp, ebp */
  ESP = (EBP);
  /* 1290d300 pop ebp */
  EBP = (pop32());
  /* 1290d301 ret  */
  ESPCHK(0x1290d230u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1290d310 (219 bytes, 64 insns) */
void f_1290d310(void) {
  FTRACE(0x1290d310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290d310 push ebp */
  push32((uint32_t)(EBP));
  /* 1290d311 mov ebp, esp */
  EBP = (ESP);
  /* 1290d313 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d314 cmp dword ptr [0x1292e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d31b je 0x1290d3b1 */
  if (C.zf) goto L_1290d3b1;
  /* 1290d321 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1290d323 push 0x12929ff0 */
  push32((uint32_t)(0x12929ff0u));
  /* 1290d328 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d32a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1290d32f push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d331 call 0x12902f50 */
  push32(0x1290d336u); f_12902f50();
  /* 1290d336 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290d33c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d340 jne 0x1290d34c */
  if (!C.zf) goto L_1290d34c;
  /* 1290d342 mov eax, 1 */
  EAX = (0x1u);
  /* 1290d347 jmp 0x1290d3e7 */
  goto L_1290d3e7;
L_1290d34c:;
  /* 1290d34c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d34f push eax */
  push32((uint32_t)(EAX));
  /* 1290d350 call 0x1290d3f0 */
  push32(0x1290d355u); f_1290d3f0();
  /* 1290d355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290d35a je 0x1290d37d */
  if (C.zf) goto L_1290d37d;
  /* 1290d35c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d35f push ecx */
  push32((uint32_t)(ECX));
  /* 1290d360 call 0x1290d980 */
  push32(0x1290d365u); f_1290d980();
  /* 1290d365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d368 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d36a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d36d push edx */
  push32((uint32_t)(EDX));
  /* 1290d36e call 0x129035d0 */
  push32(0x1290d373u); f_129035d0();
  /* 1290d373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d376 mov eax, 1 */
  EAX = (0x1u);
  /* 1290d37b jmp 0x1290d3e7 */
  goto L_1290d3e7;
L_1290d37d:;
  /* 1290d37d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d380 mov dword ptr [0x1292dc98], eax */
  w32((uint32_t)(0x1292dc98), (EAX));
  /* 1290d385 mov ecx, dword ptr [0x1292e6b4] */
  ECX = (r32((uint32_t)(0x1292e6b4)));
  /* 1290d38b push ecx */
  push32((uint32_t)(ECX));
  /* 1290d38c call 0x1290d980 */
  push32(0x1290d391u); f_1290d980();
  /* 1290d391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d394 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d396 mov edx, dword ptr [0x1292e6b4] */
  EDX = (r32((uint32_t)(0x1292e6b4)));
  /* 1290d39c push edx */
  push32((uint32_t)(EDX));
  /* 1290d39d call 0x129035d0 */
  push32(0x1290d3a2u); f_129035d0();
  /* 1290d3a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d3a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d3a8 mov dword ptr [0x1292e6b4], eax */
  w32((uint32_t)(0x1292e6b4), (EAX));
  /* 1290d3ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290d3af jmp 0x1290d3e7 */
  goto L_1290d3e7;
L_1290d3b1:;
  /* 1290d3b1 mov dword ptr [0x1292dc98], 0x1292dca0 */
  w32((uint32_t)(0x1292dc98), (0x1292dca0u));
  /* 1290d3bb mov ecx, dword ptr [0x1292e6b4] */
  ECX = (r32((uint32_t)(0x1292e6b4)));
  /* 1290d3c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d3c2 call 0x1290d980 */
  push32(0x1290d3c7u); f_1290d980();
  /* 1290d3c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d3ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d3cc mov edx, dword ptr [0x1292e6b4] */
  EDX = (r32((uint32_t)(0x1292e6b4)));
  /* 1290d3d2 push edx */
  push32((uint32_t)(EDX));
  /* 1290d3d3 call 0x129035d0 */
  push32(0x1290d3d8u); f_129035d0();
  /* 1290d3d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d3db mov dword ptr [0x1292e6b4], 0 */
  w32((uint32_t)(0x1292e6b4), (0x0u));
  /* 1290d3e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290d3e7:;
  /* 1290d3e7 mov esp, ebp */
  ESP = (EBP);
  /* 1290d3e9 pop ebp */
  EBP = (pop32());
  /* 1290d3ea ret  */
  ESPCHK(0x1290d310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1290d3f0 (1423 bytes, 533 insns) */
void f_1290d3f0(void) {
  FTRACE(0x1290d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1290d3f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290d3f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1290d3fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290d3ff mov ax, word ptr [0x1292e6ee] */
  AX = (r16((uint32_t)(0x1292e6ee)));
  /* 1290d405 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290d408 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d40a mov cx, word ptr [0x1292e6f0] */
  CX = (r16((uint32_t)(0x1292e6f0)));
  /* 1290d411 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290d414 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d418 jne 0x1290d422 */
  if (!C.zf) goto L_1290d422;
  /* 1290d41a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290d41d jmp 0x1290d97b */
  goto L_1290d97b;
L_1290d422:;
  /* 1290d422 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d425 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d428 push edx */
  push32((uint32_t)(EDX));
  /* 1290d429 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1290d42b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d42e push eax */
  push32((uint32_t)(EAX));
  /* 1290d42f push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d431 call 0x12910d00 */
  push32(0x1290d436u); f_12910d00();
  /* 1290d436 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d439 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d43c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d43e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d444 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d447 push edx */
  push32((uint32_t)(EDX));
  /* 1290d448 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1290d44a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d44d push eax */
  push32((uint32_t)(EAX));
  /* 1290d44e push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d450 call 0x12910d00 */
  push32(0x1290d455u); f_12910d00();
  /* 1290d455 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d458 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d45b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d45d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d460 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d463 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d466 push edx */
  push32((uint32_t)(EDX));
  /* 1290d467 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1290d469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d46c push eax */
  push32((uint32_t)(EAX));
  /* 1290d46d push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d46f call 0x12910d00 */
  push32(0x1290d474u); f_12910d00();
  /* 1290d474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d477 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d47a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d47c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d47f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d482 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d485 push edx */
  push32((uint32_t)(EDX));
  /* 1290d486 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1290d488 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d48b push eax */
  push32((uint32_t)(EAX));
  /* 1290d48c push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d48e call 0x12910d00 */
  push32(0x1290d493u); f_12910d00();
  /* 1290d493 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d496 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d499 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d49b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d49e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d4a1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d4a4 push edx */
  push32((uint32_t)(EDX));
  /* 1290d4a5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1290d4a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d4aa push eax */
  push32((uint32_t)(EAX));
  /* 1290d4ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d4ad call 0x12910d00 */
  push32(0x1290d4b2u); f_12910d00();
  /* 1290d4b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d4b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d4b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d4ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d4bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d4c0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d4c3 push edx */
  push32((uint32_t)(EDX));
  /* 1290d4c4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1290d4c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d4c9 push eax */
  push32((uint32_t)(EAX));
  /* 1290d4ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d4cc call 0x12910d00 */
  push32(0x1290d4d1u); f_12910d00();
  /* 1290d4d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d4d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d4d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d4d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d4dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d4df push edx */
  push32((uint32_t)(EDX));
  /* 1290d4e0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1290d4e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d4e5 push eax */
  push32((uint32_t)(EAX));
  /* 1290d4e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d4e8 call 0x12910d00 */
  push32(0x1290d4edu); f_12910d00();
  /* 1290d4ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d4f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d4f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d4f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d4f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d4fb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d4fe push edx */
  push32((uint32_t)(EDX));
  /* 1290d4ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1290d501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d504 push eax */
  push32((uint32_t)(EAX));
  /* 1290d505 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d507 call 0x12910d00 */
  push32(0x1290d50cu); f_12910d00();
  /* 1290d50c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d50f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d512 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d514 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d517 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d51a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d51d push edx */
  push32((uint32_t)(EDX));
  /* 1290d51e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1290d520 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d523 push eax */
  push32((uint32_t)(EAX));
  /* 1290d524 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d526 call 0x12910d00 */
  push32(0x1290d52bu); f_12910d00();
  /* 1290d52b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d52e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d531 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d533 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d536 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d539 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d53c push edx */
  push32((uint32_t)(EDX));
  /* 1290d53d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1290d53f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d542 push eax */
  push32((uint32_t)(EAX));
  /* 1290d543 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d545 call 0x12910d00 */
  push32(0x1290d54au); f_12910d00();
  /* 1290d54a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d54d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d550 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d552 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d558 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d55b push edx */
  push32((uint32_t)(EDX));
  /* 1290d55c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1290d55e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d561 push eax */
  push32((uint32_t)(EAX));
  /* 1290d562 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d564 call 0x12910d00 */
  push32(0x1290d569u); f_12910d00();
  /* 1290d569 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d56c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d56f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d571 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d577 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d57a push edx */
  push32((uint32_t)(EDX));
  /* 1290d57b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1290d57d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d580 push eax */
  push32((uint32_t)(EAX));
  /* 1290d581 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d583 call 0x12910d00 */
  push32(0x1290d588u); f_12910d00();
  /* 1290d588 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d58b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d58e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d590 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d593 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d596 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d599 push edx */
  push32((uint32_t)(EDX));
  /* 1290d59a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1290d59c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d59f push eax */
  push32((uint32_t)(EAX));
  /* 1290d5a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d5a2 call 0x12910d00 */
  push32(0x1290d5a7u); f_12910d00();
  /* 1290d5a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d5aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d5ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d5af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d5b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d5b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d5b8 push edx */
  push32((uint32_t)(EDX));
  /* 1290d5b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1290d5bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d5be push eax */
  push32((uint32_t)(EAX));
  /* 1290d5bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d5c1 call 0x12910d00 */
  push32(0x1290d5c6u); f_12910d00();
  /* 1290d5c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d5c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d5cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d5ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d5d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d5d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d5d7 push edx */
  push32((uint32_t)(EDX));
  /* 1290d5d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1290d5da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d5dd push eax */
  push32((uint32_t)(EAX));
  /* 1290d5de push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d5e0 call 0x12910d00 */
  push32(0x1290d5e5u); f_12910d00();
  /* 1290d5e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d5e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d5eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d5ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d5f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d5f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d5f6 push edx */
  push32((uint32_t)(EDX));
  /* 1290d5f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1290d5f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d5fc push eax */
  push32((uint32_t)(EAX));
  /* 1290d5fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d5ff call 0x12910d00 */
  push32(0x1290d604u); f_12910d00();
  /* 1290d604 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d607 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d60a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d60c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d60f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d612 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d615 push edx */
  push32((uint32_t)(EDX));
  /* 1290d616 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1290d618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d61b push eax */
  push32((uint32_t)(EAX));
  /* 1290d61c push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d61e call 0x12910d00 */
  push32(0x1290d623u); f_12910d00();
  /* 1290d623 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d626 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d629 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d62b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d62e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d631 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d634 push edx */
  push32((uint32_t)(EDX));
  /* 1290d635 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1290d637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d63a push eax */
  push32((uint32_t)(EAX));
  /* 1290d63b push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d63d call 0x12910d00 */
  push32(0x1290d642u); f_12910d00();
  /* 1290d642 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d645 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d648 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d64a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d64d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d650 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d653 push edx */
  push32((uint32_t)(EDX));
  /* 1290d654 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1290d656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d659 push eax */
  push32((uint32_t)(EAX));
  /* 1290d65a push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d65c call 0x12910d00 */
  push32(0x1290d661u); f_12910d00();
  /* 1290d661 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d664 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d667 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d669 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d66c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d66f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d672 push edx */
  push32((uint32_t)(EDX));
  /* 1290d673 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1290d675 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d678 push eax */
  push32((uint32_t)(EAX));
  /* 1290d679 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d67b call 0x12910d00 */
  push32(0x1290d680u); f_12910d00();
  /* 1290d680 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d683 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d686 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d688 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d68b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d68e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d691 push edx */
  push32((uint32_t)(EDX));
  /* 1290d692 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1290d694 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d697 push eax */
  push32((uint32_t)(EAX));
  /* 1290d698 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d69a call 0x12910d00 */
  push32(0x1290d69fu); f_12910d00();
  /* 1290d69f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d6a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d6a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d6a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d6aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d6ad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d6b0 push edx */
  push32((uint32_t)(EDX));
  /* 1290d6b1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1290d6b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d6b6 push eax */
  push32((uint32_t)(EAX));
  /* 1290d6b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d6b9 call 0x12910d00 */
  push32(0x1290d6beu); f_12910d00();
  /* 1290d6be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d6c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d6c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d6c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d6c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d6cc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d6cf push edx */
  push32((uint32_t)(EDX));
  /* 1290d6d0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1290d6d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d6d5 push eax */
  push32((uint32_t)(EAX));
  /* 1290d6d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d6d8 call 0x12910d00 */
  push32(0x1290d6ddu); f_12910d00();
  /* 1290d6dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d6e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d6e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d6e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d6e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d6eb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d6ee push edx */
  push32((uint32_t)(EDX));
  /* 1290d6ef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1290d6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d6f4 push eax */
  push32((uint32_t)(EAX));
  /* 1290d6f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d6f7 call 0x12910d00 */
  push32(0x1290d6fcu); f_12910d00();
  /* 1290d6fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d6ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d702 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d704 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d70a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d70d push edx */
  push32((uint32_t)(EDX));
  /* 1290d70e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1290d710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d713 push eax */
  push32((uint32_t)(EAX));
  /* 1290d714 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d716 call 0x12910d00 */
  push32(0x1290d71bu); f_12910d00();
  /* 1290d71b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d71e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d721 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d723 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d726 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d729 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d72c push edx */
  push32((uint32_t)(EDX));
  /* 1290d72d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1290d72f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d732 push eax */
  push32((uint32_t)(EAX));
  /* 1290d733 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d735 call 0x12910d00 */
  push32(0x1290d73au); f_12910d00();
  /* 1290d73a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d73d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d740 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d742 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d748 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d74b push edx */
  push32((uint32_t)(EDX));
  /* 1290d74c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1290d74e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d751 push eax */
  push32((uint32_t)(EAX));
  /* 1290d752 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d754 call 0x12910d00 */
  push32(0x1290d759u); f_12910d00();
  /* 1290d759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d75c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d75f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d761 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d767 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d76a push edx */
  push32((uint32_t)(EDX));
  /* 1290d76b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1290d76d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d770 push eax */
  push32((uint32_t)(EAX));
  /* 1290d771 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d773 call 0x12910d00 */
  push32(0x1290d778u); f_12910d00();
  /* 1290d778 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d77b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d77e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d780 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d783 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d786 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d789 push edx */
  push32((uint32_t)(EDX));
  /* 1290d78a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1290d78c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d78f push eax */
  push32((uint32_t)(EAX));
  /* 1290d790 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d792 call 0x12910d00 */
  push32(0x1290d797u); f_12910d00();
  /* 1290d797 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d79a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d79d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d79f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d7a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d7a5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d7a8 push edx */
  push32((uint32_t)(EDX));
  /* 1290d7a9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1290d7ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d7ae push eax */
  push32((uint32_t)(EAX));
  /* 1290d7af push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d7b1 call 0x12910d00 */
  push32(0x1290d7b6u); f_12910d00();
  /* 1290d7b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d7b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d7bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d7be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d7c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d7c4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d7c7 push edx */
  push32((uint32_t)(EDX));
  /* 1290d7c8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1290d7ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d7cd push eax */
  push32((uint32_t)(EAX));
  /* 1290d7ce push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d7d0 call 0x12910d00 */
  push32(0x1290d7d5u); f_12910d00();
  /* 1290d7d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d7d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d7db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d7dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d7e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d7e3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d7e6 push edx */
  push32((uint32_t)(EDX));
  /* 1290d7e7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1290d7e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d7ec push eax */
  push32((uint32_t)(EAX));
  /* 1290d7ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d7ef call 0x12910d00 */
  push32(0x1290d7f4u); f_12910d00();
  /* 1290d7f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d7f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d7fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d7fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d7ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d802 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d808 push edx */
  push32((uint32_t)(EDX));
  /* 1290d809 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1290d80b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d80e push eax */
  push32((uint32_t)(EAX));
  /* 1290d80f push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d811 call 0x12910d00 */
  push32(0x1290d816u); f_12910d00();
  /* 1290d816 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d819 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d81c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d81e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d824 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d82a push edx */
  push32((uint32_t)(EDX));
  /* 1290d82b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1290d82d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d830 push eax */
  push32((uint32_t)(EAX));
  /* 1290d831 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d833 call 0x12910d00 */
  push32(0x1290d838u); f_12910d00();
  /* 1290d838 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d83b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d83e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d840 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d846 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d84c push edx */
  push32((uint32_t)(EDX));
  /* 1290d84d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1290d84f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d852 push eax */
  push32((uint32_t)(EAX));
  /* 1290d853 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d855 call 0x12910d00 */
  push32(0x1290d85au); f_12910d00();
  /* 1290d85a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d85d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d860 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d862 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d865 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d868 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d86e push edx */
  push32((uint32_t)(EDX));
  /* 1290d86f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1290d871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d874 push eax */
  push32((uint32_t)(EAX));
  /* 1290d875 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d877 call 0x12910d00 */
  push32(0x1290d87cu); f_12910d00();
  /* 1290d87c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d87f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d882 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d884 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d88a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d890 push edx */
  push32((uint32_t)(EDX));
  /* 1290d891 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1290d893 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d896 push eax */
  push32((uint32_t)(EAX));
  /* 1290d897 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d899 call 0x12910d00 */
  push32(0x1290d89eu); f_12910d00();
  /* 1290d89e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d8a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d8a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d8a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d8a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d8ac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d8b2 push edx */
  push32((uint32_t)(EDX));
  /* 1290d8b3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1290d8b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d8b8 push eax */
  push32((uint32_t)(EAX));
  /* 1290d8b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d8bb call 0x12910d00 */
  push32(0x1290d8c0u); f_12910d00();
  /* 1290d8c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d8c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d8c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d8c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d8ce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d8d4 push edx */
  push32((uint32_t)(EDX));
  /* 1290d8d5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1290d8d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d8da push eax */
  push32((uint32_t)(EAX));
  /* 1290d8db push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d8dd call 0x12910d00 */
  push32(0x1290d8e2u); f_12910d00();
  /* 1290d8e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d8e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d8e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d8ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d8ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d8f0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d8f6 push edx */
  push32((uint32_t)(EDX));
  /* 1290d8f7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1290d8f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290d8fc push eax */
  push32((uint32_t)(EAX));
  /* 1290d8fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d8ff call 0x12910d00 */
  push32(0x1290d904u); f_12910d00();
  /* 1290d904 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d907 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d90a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d90c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d90f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d912 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d918 push edx */
  push32((uint32_t)(EDX));
  /* 1290d919 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1290d91b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d91e push eax */
  push32((uint32_t)(EAX));
  /* 1290d91f push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d921 call 0x12910d00 */
  push32(0x1290d926u); f_12910d00();
  /* 1290d926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d929 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d92c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d92e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d934 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d93a push edx */
  push32((uint32_t)(EDX));
  /* 1290d93b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1290d93d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d940 push eax */
  push32((uint32_t)(EAX));
  /* 1290d941 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d943 call 0x12910d00 */
  push32(0x1290d948u); f_12910d00();
  /* 1290d948 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d94b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d94e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d950 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d953 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d956 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d95c push edx */
  push32((uint32_t)(EDX));
  /* 1290d95d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1290d962 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290d965 push eax */
  push32((uint32_t)(EAX));
  /* 1290d966 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290d968 call 0x12910d00 */
  push32(0x1290d96du); f_12910d00();
  /* 1290d96d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d970 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290d973 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290d975 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1290d978 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1290d97b:;
  /* 1290d97b mov esp, ebp */
  ESP = (EBP);
  /* 1290d97d pop ebp */
  EBP = (pop32());
  /* 1290d97e ret  */
  ESPCHK(0x1290d3f0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1290d980 (779 bytes, 265 insns) */
void f_1290d980(void) {
  FTRACE(0x1290d980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290d980 push ebp */
  push32((uint32_t)(EBP));
  /* 1290d981 mov ebp, esp */
  EBP = (ESP);
  /* 1290d983 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290d987 jne 0x1290d98e */
  if (!C.zf) goto L_1290d98e;
  /* 1290d989 jmp 0x1290dc89 */
  goto L_1290dc89;
L_1290d98e:;
  /* 1290d98e push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d993 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1290d996 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d997 call 0x129035d0 */
  push32(0x1290d99cu); f_129035d0();
  /* 1290d99c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d99f push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d9a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d9a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1290d9a7 push eax */
  push32((uint32_t)(EAX));
  /* 1290d9a8 call 0x129035d0 */
  push32(0x1290d9adu); f_129035d0();
  /* 1290d9ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d9b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d9b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d9b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290d9b8 push edx */
  push32((uint32_t)(EDX));
  /* 1290d9b9 call 0x129035d0 */
  push32(0x1290d9beu); f_129035d0();
  /* 1290d9be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d9c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d9c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1290d9c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1290d9ca call 0x129035d0 */
  push32(0x1290d9cfu); f_129035d0();
  /* 1290d9cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d9d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d9d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d9d7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1290d9da push eax */
  push32((uint32_t)(EAX));
  /* 1290d9db call 0x129035d0 */
  push32(0x1290d9e0u); f_129035d0();
  /* 1290d9e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d9e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d9e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d9e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1290d9eb push edx */
  push32((uint32_t)(EDX));
  /* 1290d9ec call 0x129035d0 */
  push32(0x1290d9f1u); f_129035d0();
  /* 1290d9f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290d9f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290d9f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290d9f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290d9fb push ecx */
  push32((uint32_t)(ECX));
  /* 1290d9fc call 0x129035d0 */
  push32(0x1290da01u); f_129035d0();
  /* 1290da01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da04 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290da09 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1290da0c push eax */
  push32((uint32_t)(EAX));
  /* 1290da0d call 0x129035d0 */
  push32(0x1290da12u); f_129035d0();
  /* 1290da12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da15 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290da1a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1290da1d push edx */
  push32((uint32_t)(EDX));
  /* 1290da1e call 0x129035d0 */
  push32(0x1290da23u); f_129035d0();
  /* 1290da23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da26 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290da2b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1290da2e push ecx */
  push32((uint32_t)(ECX));
  /* 1290da2f call 0x129035d0 */
  push32(0x1290da34u); f_129035d0();
  /* 1290da34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da37 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290da3c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1290da3f push eax */
  push32((uint32_t)(EAX));
  /* 1290da40 call 0x129035d0 */
  push32(0x1290da45u); f_129035d0();
  /* 1290da45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da48 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290da4d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1290da50 push edx */
  push32((uint32_t)(EDX));
  /* 1290da51 call 0x129035d0 */
  push32(0x1290da56u); f_129035d0();
  /* 1290da56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da59 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290da5e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1290da61 push ecx */
  push32((uint32_t)(ECX));
  /* 1290da62 call 0x129035d0 */
  push32(0x1290da67u); f_129035d0();
  /* 1290da67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da6a push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290da6f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1290da72 push eax */
  push32((uint32_t)(EAX));
  /* 1290da73 call 0x129035d0 */
  push32(0x1290da78u); f_129035d0();
  /* 1290da78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da7b push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290da80 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1290da83 push edx */
  push32((uint32_t)(EDX));
  /* 1290da84 call 0x129035d0 */
  push32(0x1290da89u); f_129035d0();
  /* 1290da89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da8c push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290da91 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1290da94 push ecx */
  push32((uint32_t)(ECX));
  /* 1290da95 call 0x129035d0 */
  push32(0x1290da9au); f_129035d0();
  /* 1290da9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290da9d push 2 */
  push32((uint32_t)(0x2u));
  /* 1290da9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290daa2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1290daa5 push eax */
  push32((uint32_t)(EAX));
  /* 1290daa6 call 0x129035d0 */
  push32(0x1290daabu); f_129035d0();
  /* 1290daab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290daae push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dab3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1290dab6 push edx */
  push32((uint32_t)(EDX));
  /* 1290dab7 call 0x129035d0 */
  push32(0x1290dabcu); f_129035d0();
  /* 1290dabc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dabf push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dac4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1290dac7 push ecx */
  push32((uint32_t)(ECX));
  /* 1290dac8 call 0x129035d0 */
  push32(0x1290dacdu); f_129035d0();
  /* 1290dacd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dad0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dad2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dad5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1290dad8 push eax */
  push32((uint32_t)(EAX));
  /* 1290dad9 call 0x129035d0 */
  push32(0x1290dadeu); f_129035d0();
  /* 1290dade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dae1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dae3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dae6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1290dae9 push edx */
  push32((uint32_t)(EDX));
  /* 1290daea call 0x129035d0 */
  push32(0x1290daefu); f_129035d0();
  /* 1290daef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290daf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290daf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290daf7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1290dafa push ecx */
  push32((uint32_t)(ECX));
  /* 1290dafb call 0x129035d0 */
  push32(0x1290db00u); f_129035d0();
  /* 1290db00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db03 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290db08 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1290db0b push eax */
  push32((uint32_t)(EAX));
  /* 1290db0c call 0x129035d0 */
  push32(0x1290db11u); f_129035d0();
  /* 1290db11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db14 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290db19 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1290db1c push edx */
  push32((uint32_t)(EDX));
  /* 1290db1d call 0x129035d0 */
  push32(0x1290db22u); f_129035d0();
  /* 1290db22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290db2a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1290db2d push ecx */
  push32((uint32_t)(ECX));
  /* 1290db2e call 0x129035d0 */
  push32(0x1290db33u); f_129035d0();
  /* 1290db33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db36 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290db3b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1290db3e push eax */
  push32((uint32_t)(EAX));
  /* 1290db3f call 0x129035d0 */
  push32(0x1290db44u); f_129035d0();
  /* 1290db44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db47 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290db4c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1290db4f push edx */
  push32((uint32_t)(EDX));
  /* 1290db50 call 0x129035d0 */
  push32(0x1290db55u); f_129035d0();
  /* 1290db55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db58 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290db5d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1290db60 push ecx */
  push32((uint32_t)(ECX));
  /* 1290db61 call 0x129035d0 */
  push32(0x1290db66u); f_129035d0();
  /* 1290db66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db69 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290db6e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1290db71 push eax */
  push32((uint32_t)(EAX));
  /* 1290db72 call 0x129035d0 */
  push32(0x1290db77u); f_129035d0();
  /* 1290db77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db7a push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290db7f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1290db82 push edx */
  push32((uint32_t)(EDX));
  /* 1290db83 call 0x129035d0 */
  push32(0x1290db88u); f_129035d0();
  /* 1290db88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db8b push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290db90 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1290db93 push ecx */
  push32((uint32_t)(ECX));
  /* 1290db94 call 0x129035d0 */
  push32(0x1290db99u); f_129035d0();
  /* 1290db99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290db9c push 2 */
  push32((uint32_t)(0x2u));
  /* 1290db9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dba1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1290dba4 push eax */
  push32((uint32_t)(EAX));
  /* 1290dba5 call 0x129035d0 */
  push32(0x1290dbaau); f_129035d0();
  /* 1290dbaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dbad push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dbaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dbb2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1290dbb8 push edx */
  push32((uint32_t)(EDX));
  /* 1290dbb9 call 0x129035d0 */
  push32(0x1290dbbeu); f_129035d0();
  /* 1290dbbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dbc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dbc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dbc6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1290dbcc push ecx */
  push32((uint32_t)(ECX));
  /* 1290dbcd call 0x129035d0 */
  push32(0x1290dbd2u); f_129035d0();
  /* 1290dbd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dbd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dbd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dbda mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1290dbe0 push eax */
  push32((uint32_t)(EAX));
  /* 1290dbe1 call 0x129035d0 */
  push32(0x1290dbe6u); f_129035d0();
  /* 1290dbe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dbe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dbeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dbee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1290dbf4 push edx */
  push32((uint32_t)(EDX));
  /* 1290dbf5 call 0x129035d0 */
  push32(0x1290dbfau); f_129035d0();
  /* 1290dbfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dbfd push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dbff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dc02 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1290dc08 push ecx */
  push32((uint32_t)(ECX));
  /* 1290dc09 call 0x129035d0 */
  push32(0x1290dc0eu); f_129035d0();
  /* 1290dc0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dc11 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dc13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dc16 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1290dc1c push eax */
  push32((uint32_t)(EAX));
  /* 1290dc1d call 0x129035d0 */
  push32(0x1290dc22u); f_129035d0();
  /* 1290dc22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dc25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dc27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dc2a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1290dc30 push edx */
  push32((uint32_t)(EDX));
  /* 1290dc31 call 0x129035d0 */
  push32(0x1290dc36u); f_129035d0();
  /* 1290dc36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dc39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dc3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dc3e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1290dc44 push ecx */
  push32((uint32_t)(ECX));
  /* 1290dc45 call 0x129035d0 */
  push32(0x1290dc4au); f_129035d0();
  /* 1290dc4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dc4d push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dc4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dc52 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1290dc58 push eax */
  push32((uint32_t)(EAX));
  /* 1290dc59 call 0x129035d0 */
  push32(0x1290dc5eu); f_129035d0();
  /* 1290dc5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dc61 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dc63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dc66 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1290dc6c push edx */
  push32((uint32_t)(EDX));
  /* 1290dc6d call 0x129035d0 */
  push32(0x1290dc72u); f_129035d0();
  /* 1290dc72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dc75 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dc77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dc7a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1290dc80 push ecx */
  push32((uint32_t)(ECX));
  /* 1290dc81 call 0x129035d0 */
  push32(0x1290dc86u); f_129035d0();
  /* 1290dc86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290dc89:;
  /* 1290dc89 pop ebp */
  EBP = (pop32());
  /* 1290dc8a ret  */
  ESPCHK(0x1290d980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc90 @ 0x1290dc90 (678 bytes, 180 insns) */
void f_1290dc90(void) {
  FTRACE(0x1290dc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290dc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1290dc91 mov ebp, esp */
  EBP = (ESP);
  /* 1290dc93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290dc96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290dc9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290dc9f mov ax, word ptr [0x1292e6ea] */
  AX = (r16((uint32_t)(0x1292e6ea)));
  /* 1290dca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290dca8 cmp dword ptr [0x1292e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290dcaf je 0x1290de0a */
  if (C.zf) goto L_1290de0a;
  /* 1290dcb5 push 0x1292e6b8 */
  push32((uint32_t)(0x1292e6b8u));
  /* 1290dcba push 0xe */
  push32((uint32_t)(0xeu));
  /* 1290dcbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290dcbf push ecx */
  push32((uint32_t)(ECX));
  /* 1290dcc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290dcc2 call 0x12910d00 */
  push32(0x1290dcc7u); f_12910d00();
  /* 1290dcc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dcca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290dccd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1290dccf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1290dcd2 push 0x1292e6bc */
  push32((uint32_t)(0x1292e6bcu));
  /* 1290dcd7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1290dcd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290dcdc push eax */
  push32((uint32_t)(EAX));
  /* 1290dcdd push 1 */
  push32((uint32_t)(0x1u));
  /* 1290dcdf call 0x12910d00 */
  push32(0x1290dce4u); f_12910d00();
  /* 1290dce4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dce7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290dcea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290dcec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290dcef push 0x1292e6c0 */
  push32((uint32_t)(0x1292e6c0u));
  /* 1290dcf4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1290dcf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290dcf9 push edx */
  push32((uint32_t)(EDX));
  /* 1290dcfa push 1 */
  push32((uint32_t)(0x1u));
  /* 1290dcfc call 0x12910d00 */
  push32(0x1290dd01u); f_12910d00();
  /* 1290dd01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dd04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290dd07 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290dd09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290dd0c mov edx, dword ptr [0x1292e6c0] */
  EDX = (r32((uint32_t)(0x1292e6c0)));
  /* 1290dd12 push edx */
  push32((uint32_t)(EDX));
  /* 1290dd13 call 0x1290df40 */
  push32(0x1290dd18u); f_1290df40();
  /* 1290dd18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dd1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290dd1f je 0x1290dd79 */
  if (C.zf) goto L_1290dd79;
  /* 1290dd21 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dd23 mov eax, dword ptr [0x1292e6b8] */
  EAX = (r32((uint32_t)(0x1292e6b8)));
  /* 1290dd28 push eax */
  push32((uint32_t)(EAX));
  /* 1290dd29 call 0x129035d0 */
  push32(0x1290dd2eu); f_129035d0();
  /* 1290dd2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dd31 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dd33 mov ecx, dword ptr [0x1292e6bc] */
  ECX = (r32((uint32_t)(0x1292e6bc)));
  /* 1290dd39 push ecx */
  push32((uint32_t)(ECX));
  /* 1290dd3a call 0x129035d0 */
  push32(0x1290dd3fu); f_129035d0();
  /* 1290dd3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dd42 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dd44 mov edx, dword ptr [0x1292e6c0] */
  EDX = (r32((uint32_t)(0x1292e6c0)));
  /* 1290dd4a push edx */
  push32((uint32_t)(EDX));
  /* 1290dd4b call 0x129035d0 */
  push32(0x1290dd50u); f_129035d0();
  /* 1290dd50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dd53 mov dword ptr [0x1292e6b8], 0 */
  w32((uint32_t)(0x1292e6b8), (0x0u));
  /* 1290dd5d mov dword ptr [0x1292e6bc], 0 */
  w32((uint32_t)(0x1292e6bc), (0x0u));
  /* 1290dd67 mov dword ptr [0x1292e6c0], 0 */
  w32((uint32_t)(0x1292e6c0), (0x0u));
  /* 1290dd71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290dd74 jmp 0x1290df32 */
  goto L_1290df32;
L_1290dd79:;
  /* 1290dd79 mov eax, dword ptr [0x1292dd88] */
  EAX = (r32((uint32_t)(0x1292dd88)));
  /* 1290dd7e cmp dword ptr [eax], 0x1292dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1292dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290dd84 je 0x1290ddc0 */
  if (C.zf) goto L_1290ddc0;
  /* 1290dd86 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dd88 mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290dd8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290dd90 push edx */
  push32((uint32_t)(EDX));
  /* 1290dd91 call 0x129035d0 */
  push32(0x1290dd96u); f_129035d0();
  /* 1290dd96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dd99 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dd9b mov eax, dword ptr [0x1292dd88] */
  EAX = (r32((uint32_t)(0x1292dd88)));
  /* 1290dda0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1290dda3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290dda4 call 0x129035d0 */
  push32(0x1290dda9u); f_129035d0();
  /* 1290dda9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ddac push 2 */
  push32((uint32_t)(0x2u));
  /* 1290ddae mov edx, dword ptr [0x1292dd88] */
  EDX = (r32((uint32_t)(0x1292dd88)));
  /* 1290ddb4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1290ddb7 push eax */
  push32((uint32_t)(EAX));
  /* 1290ddb8 call 0x129035d0 */
  push32(0x1290ddbdu); f_129035d0();
  /* 1290ddbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290ddc0:;
  /* 1290ddc0 mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290ddc6 mov edx, dword ptr [0x1292e6b8] */
  EDX = (r32((uint32_t)(0x1292e6b8)));
  /* 1290ddcc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1290ddce mov eax, dword ptr [0x1292dd88] */
  EAX = (r32((uint32_t)(0x1292dd88)));
  /* 1290ddd3 mov ecx, dword ptr [0x1292e6bc] */
  ECX = (r32((uint32_t)(0x1292e6bc)));
  /* 1290ddd9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1290dddc mov edx, dword ptr [0x1292dd88] */
  EDX = (r32((uint32_t)(0x1292dd88)));
  /* 1290dde2 mov eax, dword ptr [0x1292e6c0] */
  EAX = (r32((uint32_t)(0x1292e6c0)));
  /* 1290dde7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1290ddea mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290ddf0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290ddf2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290ddf4 mov byte ptr [0x1292cea8], al */
  w8((uint32_t)(0x1292cea8), (AL));
  /* 1290ddf9 mov dword ptr [0x1292ceac], 1 */
  w32((uint32_t)(0x1292ceac), (0x1u));
  /* 1290de03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290de05 jmp 0x1290df32 */
  goto L_1290df32;
L_1290de0a:;
  /* 1290de0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1290de0c mov ecx, dword ptr [0x1292e6b8] */
  ECX = (r32((uint32_t)(0x1292e6b8)));
  /* 1290de12 push ecx */
  push32((uint32_t)(ECX));
  /* 1290de13 call 0x129035d0 */
  push32(0x1290de18u); f_129035d0();
  /* 1290de18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290de1b push 2 */
  push32((uint32_t)(0x2u));
  /* 1290de1d mov edx, dword ptr [0x1292e6bc] */
  EDX = (r32((uint32_t)(0x1292e6bc)));
  /* 1290de23 push edx */
  push32((uint32_t)(EDX));
  /* 1290de24 call 0x129035d0 */
  push32(0x1290de29u); f_129035d0();
  /* 1290de29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290de2c push 2 */
  push32((uint32_t)(0x2u));
  /* 1290de2e mov eax, dword ptr [0x1292e6c0] */
  EAX = (r32((uint32_t)(0x1292e6c0)));
  /* 1290de33 push eax */
  push32((uint32_t)(EAX));
  /* 1290de34 call 0x129035d0 */
  push32(0x1290de39u); f_129035d0();
  /* 1290de39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290de3c mov dword ptr [0x1292e6b8], 0 */
  w32((uint32_t)(0x1292e6b8), (0x0u));
  /* 1290de46 mov dword ptr [0x1292e6bc], 0 */
  w32((uint32_t)(0x1292e6bc), (0x0u));
  /* 1290de50 mov dword ptr [0x1292e6c0], 0 */
  w32((uint32_t)(0x1292e6c0), (0x0u));
  /* 1290de5a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1290de5f push 0x12929ffc */
  push32((uint32_t)(0x12929ffcu));
  /* 1290de64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290de66 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290de68 call 0x12902b40 */
  push32(0x1290de6du); f_12902b40();
  /* 1290de6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290de70 mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290de76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1290de78 mov edx, dword ptr [0x1292dd88] */
  EDX = (r32((uint32_t)(0x1292dd88)));
  /* 1290de7e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290de81 jne 0x1290de8b */
  if (!C.zf) goto L_1290de8b;
  /* 1290de83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290de86 jmp 0x1290df32 */
  goto L_1290df32;
L_1290de8b:;
  /* 1290de8b push 0x12929fcc */
  push32((uint32_t)(0x12929fccu));
  /* 1290de90 mov eax, dword ptr [0x1292dd88] */
  EAX = (r32((uint32_t)(0x1292dd88)));
  /* 1290de95 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1290de97 push ecx */
  push32((uint32_t)(ECX));
  /* 1290de98 call 0x12905af0 */
  push32(0x1290de9du); f_12905af0();
  /* 1290de9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dea0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1290dea5 push 0x12929ffc */
  push32((uint32_t)(0x12929ffcu));
  /* 1290deaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1290deac push 2 */
  push32((uint32_t)(0x2u));
  /* 1290deae call 0x12902b40 */
  push32(0x1290deb3u); f_12902b40();
  /* 1290deb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290deb6 mov edx, dword ptr [0x1292dd88] */
  EDX = (r32((uint32_t)(0x1292dd88)));
  /* 1290debc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1290debf mov eax, dword ptr [0x1292dd88] */
  EAX = (r32((uint32_t)(0x1292dd88)));
  /* 1290dec4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290dec8 jne 0x1290decf */
  if (!C.zf) goto L_1290decf;
  /* 1290deca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290decd jmp 0x1290df32 */
  goto L_1290df32;
L_1290decf:;
  /* 1290decf mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290ded5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1290ded8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1290dedb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1290dee0 push 0x12929ffc */
  push32((uint32_t)(0x12929ffcu));
  /* 1290dee5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dee7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dee9 call 0x12902b40 */
  push32(0x1290deeeu); f_12902b40();
  /* 1290deee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290def1 mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290def7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1290defa mov edx, dword ptr [0x1292dd88] */
  EDX = (r32((uint32_t)(0x1292dd88)));
  /* 1290df00 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290df04 jne 0x1290df0b */
  if (!C.zf) goto L_1290df0b;
  /* 1290df06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290df09 jmp 0x1290df32 */
  goto L_1290df32;
L_1290df0b:;
  /* 1290df0b mov eax, dword ptr [0x1292dd88] */
  EAX = (r32((uint32_t)(0x1292dd88)));
  /* 1290df10 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1290df13 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1290df16 mov edx, dword ptr [0x1292dd88] */
  EDX = (r32((uint32_t)(0x1292dd88)));
  /* 1290df1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1290df1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1290df20 mov byte ptr [0x1292cea8], cl */
  w8((uint32_t)(0x1292cea8), (CL));
  /* 1290df26 mov dword ptr [0x1292ceac], 1 */
  w32((uint32_t)(0x1292ceac), (0x1u));
  /* 1290df30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290df32:;
  /* 1290df32 mov esp, ebp */
  ESP = (EBP);
  /* 1290df34 pop ebp */
  EBP = (pop32());
  /* 1290df35 ret  */
  ESPCHK(0x1290dc90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1290df40 (125 bytes, 49 insns) */
void f_1290df40(void) {
  FTRACE(0x1290df40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290df40 push ebp */
  push32((uint32_t)(EBP));
  /* 1290df41 mov ebp, esp */
  EBP = (ESP);
  /* 1290df43 push ecx */
  push32((uint32_t)(ECX));
L_1290df44:;
  /* 1290df44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290df47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290df4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290df4c je 0x1290dfb9 */
  if (C.zf) goto L_1290dfb9;
  /* 1290df4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290df51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1290df54 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290df57 jl 0x1290df7d */
  if ((C.sf!=C.of)) goto L_1290df7d;
  /* 1290df59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290df5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290df5f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290df62 jg 0x1290df7d */
  if ((!C.zf&&C.sf==C.of)) goto L_1290df7d;
  /* 1290df64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290df67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290df6a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290df6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290df70 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1290df72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290df75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290df78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1290df7b jmp 0x1290dfb7 */
  goto L_1290dfb7;
L_1290df7d:;
  /* 1290df7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290df80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290df83 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290df86 jne 0x1290dfae */
  if (!C.zf) goto L_1290dfae;
  /* 1290df88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290df8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290df8e:;
  /* 1290df8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290df91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290df94 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1290df97 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1290df99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290df9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290df9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1290dfa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290dfa5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1290dfa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290dfaa jne 0x1290df8e */
  if (!C.zf) goto L_1290df8e;
  /* 1290dfac jmp 0x1290dfb7 */
  goto L_1290dfb7;
L_1290dfae:;
  /* 1290dfae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290dfb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dfb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1290dfb7:;
  /* 1290dfb7 jmp 0x1290df44 */
  goto L_1290df44;
L_1290dfb9:;
  /* 1290dfb9 mov esp, ebp */
  ESP = (EBP);
  /* 1290dfbb pop ebp */
  EBP = (pop32());
  /* 1290dfbc ret  */
  ESPCHK(0x1290df40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfc0 @ 0x1290dfc0 (304 bytes, 85 insns) */
void f_1290dfc0(void) {
  FTRACE(0x1290dfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290dfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290dfc1 mov ebp, esp */
  EBP = (ESP);
  /* 1290dfc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290dfc4 cmp dword ptr [0x1292e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290dfcb je 0x1290e08c */
  if (C.zf) goto L_1290e08c;
  /* 1290dfd1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1290dfd3 push 0x1292a008 */
  push32((uint32_t)(0x1292a008u));
  /* 1290dfd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290dfda push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1290dfdc push 1 */
  push32((uint32_t)(0x1u));
  /* 1290dfde call 0x12902f50 */
  push32(0x1290dfe3u); f_12902f50();
  /* 1290dfe3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290dfe6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290dfe9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290dfed jne 0x1290dff9 */
  if (!C.zf) goto L_1290dff9;
  /* 1290dfef mov eax, 1 */
  EAX = (0x1u);
  /* 1290dff4 jmp 0x1290e0ec */
  goto L_1290e0ec;
L_1290dff9:;
  /* 1290dff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290dffc push eax */
  push32((uint32_t)(EAX));
  /* 1290dffd call 0x1290e0f0 */
  push32(0x1290e002u); f_1290e0f0();
  /* 1290e002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290e007 je 0x1290e02d */
  if (C.zf) goto L_1290e02d;
  /* 1290e009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e00c push ecx */
  push32((uint32_t)(ECX));
  /* 1290e00d call 0x1290e380 */
  push32(0x1290e012u); f_1290e380();
  /* 1290e012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e015 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e017 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e01a push edx */
  push32((uint32_t)(EDX));
  /* 1290e01b call 0x129035d0 */
  push32(0x1290e020u); f_129035d0();
  /* 1290e020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e023 mov eax, 1 */
  EAX = (0x1u);
  /* 1290e028 jmp 0x1290e0ec */
  goto L_1290e0ec;
L_1290e02d:;
  /* 1290e02d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e030 mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290e036 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290e038 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1290e03a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e03d mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290e043 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1290e046 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1290e049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e04c mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290e052 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1290e055 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1290e058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e05b mov dword ptr [0x1292dd88], eax */
  w32((uint32_t)(0x1292dd88), (EAX));
  /* 1290e060 mov ecx, dword ptr [0x1292e6c4] */
  ECX = (r32((uint32_t)(0x1292e6c4)));
  /* 1290e066 push ecx */
  push32((uint32_t)(ECX));
  /* 1290e067 call 0x1290e380 */
  push32(0x1290e06cu); f_1290e380();
  /* 1290e06c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e06f push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e071 mov edx, dword ptr [0x1292e6c4] */
  EDX = (r32((uint32_t)(0x1292e6c4)));
  /* 1290e077 push edx */
  push32((uint32_t)(EDX));
  /* 1290e078 call 0x129035d0 */
  push32(0x1290e07du); f_129035d0();
  /* 1290e07d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e080 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e083 mov dword ptr [0x1292e6c4], eax */
  w32((uint32_t)(0x1292e6c4), (EAX));
  /* 1290e088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e08a jmp 0x1290e0ec */
  goto L_1290e0ec;
L_1290e08c:;
  /* 1290e08c mov ecx, dword ptr [0x1292dd88] */
  ECX = (r32((uint32_t)(0x1292dd88)));
  /* 1290e092 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290e094 mov dword ptr [0x1292dd58], edx */
  w32((uint32_t)(0x1292dd58), (EDX));
  /* 1290e09a mov eax, dword ptr [0x1292dd88] */
  EAX = (r32((uint32_t)(0x1292dd88)));
  /* 1290e09f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1290e0a2 mov dword ptr [0x1292dd5c], ecx */
  w32((uint32_t)(0x1292dd5c), (ECX));
  /* 1290e0a8 mov edx, dword ptr [0x1292dd88] */
  EDX = (r32((uint32_t)(0x1292dd88)));
  /* 1290e0ae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1290e0b1 mov dword ptr [0x1292dd60], eax */
  w32((uint32_t)(0x1292dd60), (EAX));
  /* 1290e0b6 mov dword ptr [0x1292dd88], 0x1292dd58 */
  w32((uint32_t)(0x1292dd88), (0x1292dd58u));
  /* 1290e0c0 mov ecx, dword ptr [0x1292e6c4] */
  ECX = (r32((uint32_t)(0x1292e6c4)));
  /* 1290e0c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1290e0c7 call 0x1290e380 */
  push32(0x1290e0ccu); f_1290e380();
  /* 1290e0cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e0cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e0d1 mov edx, dword ptr [0x1292e6c4] */
  EDX = (r32((uint32_t)(0x1292e6c4)));
  /* 1290e0d7 push edx */
  push32((uint32_t)(EDX));
  /* 1290e0d8 call 0x129035d0 */
  push32(0x1290e0ddu); f_129035d0();
  /* 1290e0dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e0e0 mov dword ptr [0x1292e6c4], 0 */
  w32((uint32_t)(0x1292e6c4), (0x0u));
  /* 1290e0ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290e0ec:;
  /* 1290e0ec mov esp, ebp */
  ESP = (EBP);
  /* 1290e0ee pop ebp */
  EBP = (pop32());
  /* 1290e0ef ret  */
  ESPCHK(0x1290dfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0f0 @ 0x1290e0f0 (525 bytes, 200 insns) */
void f_1290e0f0(void) {
  FTRACE(0x1290e0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290e0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1290e0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290e0f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290e0fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e0ff mov ax, word ptr [0x1292e6e4] */
  AX = (r16((uint32_t)(0x1292e6e4)));
  /* 1290e105 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290e108 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e10c jne 0x1290e116 */
  if (!C.zf) goto L_1290e116;
  /* 1290e10e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290e111 jmp 0x1290e2f9 */
  goto L_1290e2f9;
L_1290e116:;
  /* 1290e116 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e119 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e11c push ecx */
  push32((uint32_t)(ECX));
  /* 1290e11d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1290e11f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e122 push edx */
  push32((uint32_t)(EDX));
  /* 1290e123 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290e125 call 0x12910d00 */
  push32(0x1290e12au); f_12910d00();
  /* 1290e12a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e12d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e130 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e132 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e138 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e13b push edx */
  push32((uint32_t)(EDX));
  /* 1290e13c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1290e13e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e141 push eax */
  push32((uint32_t)(EAX));
  /* 1290e142 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290e144 call 0x12910d00 */
  push32(0x1290e149u); f_12910d00();
  /* 1290e149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e14c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e14f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e151 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e157 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e15a push edx */
  push32((uint32_t)(EDX));
  /* 1290e15b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1290e15d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e160 push eax */
  push32((uint32_t)(EAX));
  /* 1290e161 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290e163 call 0x12910d00 */
  push32(0x1290e168u); f_12910d00();
  /* 1290e168 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e16b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e16e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e170 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e173 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e176 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e179 push edx */
  push32((uint32_t)(EDX));
  /* 1290e17a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1290e17c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e17f push eax */
  push32((uint32_t)(EAX));
  /* 1290e180 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290e182 call 0x12910d00 */
  push32(0x1290e187u); f_12910d00();
  /* 1290e187 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e18a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e18d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e18f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e192 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e195 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e198 push edx */
  push32((uint32_t)(EDX));
  /* 1290e199 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1290e19b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e19e push eax */
  push32((uint32_t)(EAX));
  /* 1290e19f push 1 */
  push32((uint32_t)(0x1u));
  /* 1290e1a1 call 0x12910d00 */
  push32(0x1290e1a6u); f_12910d00();
  /* 1290e1a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e1a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e1ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e1ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e1b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e1b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1290e1b7 push eax */
  push32((uint32_t)(EAX));
  /* 1290e1b8 call 0x1290e300 */
  push32(0x1290e1bdu); f_1290e300();
  /* 1290e1bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e1c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e1c3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1290e1c7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1290e1c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e1cc push edx */
  push32((uint32_t)(EDX));
  /* 1290e1cd push 1 */
  push32((uint32_t)(0x1u));
  /* 1290e1cf call 0x12910d00 */
  push32(0x1290e1d4u); f_12910d00();
  /* 1290e1d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e1d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e1da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e1dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e1df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e1e2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e1e5 push edx */
  push32((uint32_t)(EDX));
  /* 1290e1e6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1290e1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e1eb push eax */
  push32((uint32_t)(EAX));
  /* 1290e1ec push 1 */
  push32((uint32_t)(0x1u));
  /* 1290e1ee call 0x12910d00 */
  push32(0x1290e1f3u); f_12910d00();
  /* 1290e1f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e1f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e1f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e1fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e1fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e201 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e204 push edx */
  push32((uint32_t)(EDX));
  /* 1290e205 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1290e207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e20a push eax */
  push32((uint32_t)(EAX));
  /* 1290e20b push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e20d call 0x12910d00 */
  push32(0x1290e212u); f_12910d00();
  /* 1290e212 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e215 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e218 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e21a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e21d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e220 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e223 push edx */
  push32((uint32_t)(EDX));
  /* 1290e224 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1290e226 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e229 push eax */
  push32((uint32_t)(EAX));
  /* 1290e22a push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e22c call 0x12910d00 */
  push32(0x1290e231u); f_12910d00();
  /* 1290e231 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e234 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e237 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e239 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e23c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e23f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e242 push edx */
  push32((uint32_t)(EDX));
  /* 1290e243 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1290e245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e248 push eax */
  push32((uint32_t)(EAX));
  /* 1290e249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e24b call 0x12910d00 */
  push32(0x1290e250u); f_12910d00();
  /* 1290e250 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e253 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e256 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e258 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e25b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e25e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e261 push edx */
  push32((uint32_t)(EDX));
  /* 1290e262 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1290e264 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e267 push eax */
  push32((uint32_t)(EAX));
  /* 1290e268 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e26a call 0x12910d00 */
  push32(0x1290e26fu); f_12910d00();
  /* 1290e26f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e272 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e275 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e277 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e27a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e27d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e280 push edx */
  push32((uint32_t)(EDX));
  /* 1290e281 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1290e283 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e286 push eax */
  push32((uint32_t)(EAX));
  /* 1290e287 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e289 call 0x12910d00 */
  push32(0x1290e28eu); f_12910d00();
  /* 1290e28e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e291 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e294 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e296 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e299 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e29c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e29f push edx */
  push32((uint32_t)(EDX));
  /* 1290e2a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1290e2a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e2a5 push eax */
  push32((uint32_t)(EAX));
  /* 1290e2a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e2a8 call 0x12910d00 */
  push32(0x1290e2adu); f_12910d00();
  /* 1290e2ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e2b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e2b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e2b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e2b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e2bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e2be push edx */
  push32((uint32_t)(EDX));
  /* 1290e2bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1290e2c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e2c4 push eax */
  push32((uint32_t)(EAX));
  /* 1290e2c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e2c7 call 0x12910d00 */
  push32(0x1290e2ccu); f_12910d00();
  /* 1290e2cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e2cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e2d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e2d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e2d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e2da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e2dd push edx */
  push32((uint32_t)(EDX));
  /* 1290e2de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1290e2e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e2e3 push eax */
  push32((uint32_t)(EAX));
  /* 1290e2e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e2e6 call 0x12910d00 */
  push32(0x1290e2ebu); f_12910d00();
  /* 1290e2eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e2ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e2f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e2f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290e2f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1290e2f9:;
  /* 1290e2f9 mov esp, ebp */
  ESP = (EBP);
  /* 1290e2fb pop ebp */
  EBP = (pop32());
  /* 1290e2fc ret  */
  ESPCHK(0x1290e0f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1290e300 (125 bytes, 49 insns) */
void f_1290e300(void) {
  FTRACE(0x1290e300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e300 push ebp */
  push32((uint32_t)(EBP));
  /* 1290e301 mov ebp, esp */
  EBP = (ESP);
  /* 1290e303 push ecx */
  push32((uint32_t)(ECX));
L_1290e304:;
  /* 1290e304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e307 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290e30a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290e30c je 0x1290e379 */
  if (C.zf) goto L_1290e379;
  /* 1290e30e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e311 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1290e314 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e317 jl 0x1290e33d */
  if ((C.sf!=C.of)) goto L_1290e33d;
  /* 1290e319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e31c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290e31f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e322 jg 0x1290e33d */
  if ((!C.zf&&C.sf==C.of)) goto L_1290e33d;
  /* 1290e324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e327 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290e32a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290e32d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e330 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1290e332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e335 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e338 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1290e33b jmp 0x1290e377 */
  goto L_1290e377;
L_1290e33d:;
  /* 1290e33d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e340 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290e343 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e346 jne 0x1290e36e */
  if (!C.zf) goto L_1290e36e;
  /* 1290e348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e34b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290e34e:;
  /* 1290e34e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e351 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e354 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1290e357 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1290e359 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e35c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e35f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1290e362 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290e365 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1290e368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290e36a jne 0x1290e34e */
  if (!C.zf) goto L_1290e34e;
  /* 1290e36c jmp 0x1290e377 */
  goto L_1290e377;
L_1290e36e:;
  /* 1290e36e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e371 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e374 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1290e377:;
  /* 1290e377 jmp 0x1290e304 */
  goto L_1290e304;
L_1290e379:;
  /* 1290e379 mov esp, ebp */
  ESP = (EBP);
  /* 1290e37b pop ebp */
  EBP = (pop32());
  /* 1290e37c ret  */
  ESPCHK(0x1290e300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e380 @ 0x1290e380 (147 bytes, 52 insns) */
void f_1290e380(void) {
  FTRACE(0x1290e380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e380 push ebp */
  push32((uint32_t)(EBP));
  /* 1290e381 mov ebp, esp */
  EBP = (ESP);
  /* 1290e383 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e387 jne 0x1290e38e */
  if (!C.zf) goto L_1290e38e;
  /* 1290e389 jmp 0x1290e411 */
  goto L_1290e411;
L_1290e38e:;
  /* 1290e38e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e391 cmp dword ptr [eax + 0xc], 0x1292e720 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1292e720u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e398 je 0x1290e411 */
  if (C.zf) goto L_1290e411;
  /* 1290e39a push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e39c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e39f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1290e3a2 push edx */
  push32((uint32_t)(EDX));
  /* 1290e3a3 call 0x129035d0 */
  push32(0x1290e3a8u); f_129035d0();
  /* 1290e3a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e3ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e3ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e3b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1290e3b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290e3b4 call 0x129035d0 */
  push32(0x1290e3b9u); f_129035d0();
  /* 1290e3b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e3bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e3be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e3c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1290e3c4 push eax */
  push32((uint32_t)(EAX));
  /* 1290e3c5 call 0x129035d0 */
  push32(0x1290e3cau); f_129035d0();
  /* 1290e3ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e3cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e3cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e3d2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1290e3d5 push edx */
  push32((uint32_t)(EDX));
  /* 1290e3d6 call 0x129035d0 */
  push32(0x1290e3dbu); f_129035d0();
  /* 1290e3db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e3de push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e3e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e3e3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1290e3e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1290e3e7 call 0x129035d0 */
  push32(0x1290e3ecu); f_129035d0();
  /* 1290e3ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e3ef push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e3f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e3f4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1290e3f7 push eax */
  push32((uint32_t)(EAX));
  /* 1290e3f8 call 0x129035d0 */
  push32(0x1290e3fdu); f_129035d0();
  /* 1290e3fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e400 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e405 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1290e408 push edx */
  push32((uint32_t)(EDX));
  /* 1290e409 call 0x129035d0 */
  push32(0x1290e40eu); f_129035d0();
  /* 1290e40e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290e411:;
  /* 1290e411 pop ebp */
  EBP = (pop32());
  /* 1290e412 ret  */
  ESPCHK(0x1290e380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e420 @ 0x1290e420 (928 bytes, 284 insns) */
void f_1290e420(void) {
  FTRACE(0x1290e420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e420 push ebp */
  push32((uint32_t)(EBP));
  /* 1290e421 mov ebp, esp */
  EBP = (ESP);
  /* 1290e423 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290e426 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1290e42d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1290e434 cmp dword ptr [0x1292e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e43b je 0x1290e771 */
  if (C.zf) goto L_1290e771;
  /* 1290e441 cmp dword ptr [0x1292e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e448 jne 0x1290e470 */
  if (!C.zf) goto L_1290e470;
  /* 1290e44a push 0x1292e698 */
  push32((uint32_t)(0x1292e698u));
  /* 1290e44f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1290e454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e456 mov ax, word ptr [0x1292e6dc] */
  AX = (r16((uint32_t)(0x1292e6dc)));
  /* 1290e45c push eax */
  push32((uint32_t)(EAX));
  /* 1290e45d push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e45f call 0x12910d00 */
  push32(0x1290e464u); f_12910d00();
  /* 1290e464 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290e469 je 0x1290e470 */
  if (C.zf) goto L_1290e470;
  /* 1290e46b jmp 0x1290e732 */
  goto L_1290e732;
L_1290e470:;
  /* 1290e470 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1290e472 push 0x1292a014 */
  push32((uint32_t)(0x1292a014u));
  /* 1290e477 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e479 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1290e47e call 0x12902b40 */
  push32(0x1290e483u); f_12902b40();
  /* 1290e483 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e486 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1290e489 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1290e48b push 0x1292a014 */
  push32((uint32_t)(0x1292a014u));
  /* 1290e490 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e492 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1290e497 call 0x12902b40 */
  push32(0x1290e49cu); f_12902b40();
  /* 1290e49c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e49f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1290e4a2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1290e4a4 push 0x1292a014 */
  push32((uint32_t)(0x1292a014u));
  /* 1290e4a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e4ab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1290e4b0 call 0x12902b40 */
  push32(0x1290e4b5u); f_12902b40();
  /* 1290e4b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e4b8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1290e4bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1290e4bd push 0x1292a014 */
  push32((uint32_t)(0x1292a014u));
  /* 1290e4c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e4c4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1290e4c9 call 0x12902b40 */
  push32(0x1290e4ceu); f_12902b40();
  /* 1290e4ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e4d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1290e4d4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e4d8 je 0x1290e4ec */
  if (C.zf) goto L_1290e4ec;
  /* 1290e4da cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e4de je 0x1290e4ec */
  if (C.zf) goto L_1290e4ec;
  /* 1290e4e0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e4e4 je 0x1290e4ec */
  if (C.zf) goto L_1290e4ec;
  /* 1290e4e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e4ea jne 0x1290e4f1 */
  if (!C.zf) goto L_1290e4f1;
L_1290e4ec:;
  /* 1290e4ec jmp 0x1290e732 */
  goto L_1290e732;
L_1290e4f1:;
  /* 1290e4f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290e4f4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1290e4f7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1290e4fe jmp 0x1290e509 */
  goto L_1290e509;
L_1290e500:;
  /* 1290e500 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290e503 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e506 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1290e509:;
  /* 1290e509 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e510 jge 0x1290e525 */
  if ((C.sf==C.of)) goto L_1290e525;
  /* 1290e512 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e515 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1290e518 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1290e51a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e51d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e520 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1290e523 jmp 0x1290e500 */
  goto L_1290e500;
L_1290e525:;
  /* 1290e525 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1290e528 push eax */
  push32((uint32_t)(EAX));
  /* 1290e529 mov ecx, dword ptr [0x1292e698] */
  ECX = (r32((uint32_t)(0x1292e698)));
  /* 1290e52f push ecx */
  push32((uint32_t)(ECX));
  /* 1290e530 call dword ptr [0x12930310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930310))), 0x1290e536u);
  /* 1290e536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290e538 jne 0x1290e53f */
  if (!C.zf) goto L_1290e53f;
  /* 1290e53a jmp 0x1290e732 */
  goto L_1290e732;
L_1290e53f:;
  /* 1290e53f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e543 jbe 0x1290e54a */
  if ((C.cf||C.zf)) goto L_1290e54a;
  /* 1290e545 jmp 0x1290e732 */
  goto L_1290e732;
L_1290e54a:;
  /* 1290e54a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1290e54d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1290e553 mov dword ptr [0x1292cea4], edx */
  w32((uint32_t)(0x1292cea4), (EDX));
  /* 1290e559 cmp dword ptr [0x1292cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e560 jle 0x1290e5b9 */
  if ((C.zf||C.sf!=C.of)) goto L_1290e5b9;
  /* 1290e562 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1290e565 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1290e568 jmp 0x1290e573 */
  goto L_1290e573;
L_1290e56a:;
  /* 1290e56a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e56d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e570 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1290e573:;
  /* 1290e573 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e578 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290e57a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290e57c je 0x1290e5b9 */
  if (C.zf) goto L_1290e5b9;
  /* 1290e57e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e581 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290e583 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1290e586 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290e588 je 0x1290e5b9 */
  if (C.zf) goto L_1290e5b9;
  /* 1290e58a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e58d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e58f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1290e591 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1290e594 jmp 0x1290e59f */
  goto L_1290e59f;
L_1290e596:;
  /* 1290e596 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290e599 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e59c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1290e59f:;
  /* 1290e59f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e5a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e5a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1290e5a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e5aa jg 0x1290e5b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1290e5b7;
  /* 1290e5ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290e5af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e5b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1290e5b5 jmp 0x1290e596 */
  goto L_1290e596;
L_1290e5b7:;
  /* 1290e5b7 jmp 0x1290e56a */
  goto L_1290e56a;
L_1290e5b9:;
  /* 1290e5b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e5bb push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e5bd push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e5bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290e5c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e5c5 push eax */
  push32((uint32_t)(EAX));
  /* 1290e5c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1290e5cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290e5ce push ecx */
  push32((uint32_t)(ECX));
  /* 1290e5cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1290e5d1 call 0x1290ad70 */
  push32(0x1290e5d6u); f_1290ad70();
  /* 1290e5d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e5d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290e5db jne 0x1290e5e2 */
  if (!C.zf) goto L_1290e5e2;
  /* 1290e5dd jmp 0x1290e732 */
  goto L_1290e732;
L_1290e5e2:;
  /* 1290e5e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290e5e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1290e5ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1290e5ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1290e5f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1290e5f7 jmp 0x1290e602 */
  goto L_1290e602;
L_1290e5f9:;
  /* 1290e5f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290e5fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e5ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1290e602:;
  /* 1290e602 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e609 jge 0x1290e620 */
  if ((C.sf==C.of)) goto L_1290e620;
  /* 1290e60b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290e60e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1290e612 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1290e615 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1290e618 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e61b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1290e61e jmp 0x1290e5f9 */
  goto L_1290e5f9;
L_1290e620:;
  /* 1290e620 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e622 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290e624 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290e627 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e62a push edx */
  push32((uint32_t)(EDX));
  /* 1290e62b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1290e630 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1290e633 push eax */
  push32((uint32_t)(EAX));
  /* 1290e634 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290e636 call 0x12910fa0 */
  push32(0x1290e63bu); f_12910fa0();
  /* 1290e63b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e63e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290e640 jne 0x1290e647 */
  if (!C.zf) goto L_1290e647;
  /* 1290e642 jmp 0x1290e732 */
  goto L_1290e732;
L_1290e647:;
  /* 1290e647 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290e64a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1290e64f cmp dword ptr [0x1292cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1292cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e656 jle 0x1290e6b3 */
  if ((C.zf||C.sf!=C.of)) goto L_1290e6b3;
  /* 1290e658 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1290e65b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1290e65e jmp 0x1290e669 */
  goto L_1290e669;
L_1290e660:;
  /* 1290e660 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e663 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e666 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1290e669:;
  /* 1290e669 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e66c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1290e66e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1290e670 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290e672 je 0x1290e6b3 */
  if (C.zf) goto L_1290e6b3;
  /* 1290e674 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e677 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e679 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1290e67c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290e67e je 0x1290e6b3 */
  if (C.zf) goto L_1290e6b3;
  /* 1290e680 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e685 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290e687 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1290e68a jmp 0x1290e695 */
  goto L_1290e695;
L_1290e68c:;
  /* 1290e68c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290e68f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e692 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1290e695:;
  /* 1290e695 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1290e698 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e69a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1290e69d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e6a0 jg 0x1290e6b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1290e6b1;
  /* 1290e6a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1290e6a5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290e6a8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1290e6af jmp 0x1290e68c */
  goto L_1290e68c;
L_1290e6b1:;
  /* 1290e6b1 jmp 0x1290e660 */
  goto L_1290e660;
L_1290e6b3:;
  /* 1290e6b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290e6b6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e6b9 mov dword ptr [0x1292cc98], eax */
  w32((uint32_t)(0x1292cc98), (EAX));
  /* 1290e6be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290e6c1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e6c4 mov dword ptr [0x1292cc9c], ecx */
  w32((uint32_t)(0x1292cc9c), (ECX));
  /* 1290e6ca cmp dword ptr [0x1292e6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e6d1 je 0x1290e6e4 */
  if (C.zf) goto L_1290e6e4;
  /* 1290e6d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e6d5 mov edx, dword ptr [0x1292e6c8] */
  EDX = (r32((uint32_t)(0x1292e6c8)));
  /* 1290e6db push edx */
  push32((uint32_t)(EDX));
  /* 1290e6dc call 0x129035d0 */
  push32(0x1290e6e1u); f_129035d0();
  /* 1290e6e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290e6e4:;
  /* 1290e6e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290e6e7 mov dword ptr [0x1292e6c8], eax */
  w32((uint32_t)(0x1292e6c8), (EAX));
  /* 1290e6ec cmp dword ptr [0x1292e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e6f3 je 0x1290e706 */
  if (C.zf) goto L_1290e706;
  /* 1290e6f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e6f7 mov ecx, dword ptr [0x1292e6cc] */
  ECX = (r32((uint32_t)(0x1292e6cc)));
  /* 1290e6fd push ecx */
  push32((uint32_t)(ECX));
  /* 1290e6fe call 0x129035d0 */
  push32(0x1290e703u); f_129035d0();
  /* 1290e703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290e706:;
  /* 1290e706 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290e709 mov dword ptr [0x1292e6cc], edx */
  w32((uint32_t)(0x1292e6cc), (EDX));
  /* 1290e70f push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e711 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290e714 push eax */
  push32((uint32_t)(EAX));
  /* 1290e715 call 0x129035d0 */
  push32(0x1290e71au); f_129035d0();
  /* 1290e71a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e71d push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e71f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1290e722 push ecx */
  push32((uint32_t)(ECX));
  /* 1290e723 call 0x129035d0 */
  push32(0x1290e728u); f_129035d0();
  /* 1290e728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e72b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e72d jmp 0x1290e7bc */
  goto L_1290e7bc;
L_1290e732:;
  /* 1290e732 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e734 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1290e737 push edx */
  push32((uint32_t)(EDX));
  /* 1290e738 call 0x129035d0 */
  push32(0x1290e73du); f_129035d0();
  /* 1290e73d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e740 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e742 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1290e745 push eax */
  push32((uint32_t)(EAX));
  /* 1290e746 call 0x129035d0 */
  push32(0x1290e74bu); f_129035d0();
  /* 1290e74b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e74e push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e750 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1290e753 push ecx */
  push32((uint32_t)(ECX));
  /* 1290e754 call 0x129035d0 */
  push32(0x1290e759u); f_129035d0();
  /* 1290e759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e75c push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e75e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1290e761 push edx */
  push32((uint32_t)(EDX));
  /* 1290e762 call 0x129035d0 */
  push32(0x1290e767u); f_129035d0();
  /* 1290e767 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e76a mov eax, 1 */
  EAX = (0x1u);
  /* 1290e76f jmp 0x1290e7bc */
  goto L_1290e7bc;
L_1290e771:;
  /* 1290e771 mov dword ptr [0x1292cc98], 0x1292cca2 */
  w32((uint32_t)(0x1292cc98), (0x1292cca2u));
  /* 1290e77b mov dword ptr [0x1292cc9c], 0x1292cca2 */
  w32((uint32_t)(0x1292cc9c), (0x1292cca2u));
  /* 1290e785 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e787 mov eax, dword ptr [0x1292e6c8] */
  EAX = (r32((uint32_t)(0x1292e6c8)));
  /* 1290e78c push eax */
  push32((uint32_t)(EAX));
  /* 1290e78d call 0x129035d0 */
  push32(0x1290e792u); f_129035d0();
  /* 1290e792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e795 push 2 */
  push32((uint32_t)(0x2u));
  /* 1290e797 mov ecx, dword ptr [0x1292e6cc] */
  ECX = (r32((uint32_t)(0x1292e6cc)));
  /* 1290e79d push ecx */
  push32((uint32_t)(ECX));
  /* 1290e79e call 0x129035d0 */
  push32(0x1290e7a3u); f_129035d0();
  /* 1290e7a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e7a6 mov dword ptr [0x1292e6c8], 0 */
  w32((uint32_t)(0x1292e6c8), (0x0u));
  /* 1290e7b0 mov dword ptr [0x1292e6cc], 0 */
  w32((uint32_t)(0x1292e6cc), (0x0u));
  /* 1290e7ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1290e7bc:;
  /* 1290e7bc mov esp, ebp */
  ESP = (EBP);
  /* 1290e7be pop ebp */
  EBP = (pop32());
  /* 1290e7bf ret  */
  ESPCHK(0x1290e420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7c0 @ 0x1290e7c0 (7 bytes, 5 insns) */
void f_1290e7c0(void) {
  FTRACE(0x1290e7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290e7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1290e7c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e7c5 pop ebp */
  EBP = (pop32());
  /* 1290e7c6 ret  */
  ESPCHK(0x1290e7c0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1290e7d0 (129 bytes, 56 insns) */
void f_1290e7d0(void) {
  FTRACE(0x1290e7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e7d0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1290e7d4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1290e7d8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1290e7de jne 0x1290e81c */
  if (!C.zf) goto L_1290e81c;
L_1290e7e0:;
  /* 1290e7e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1290e7e2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290e7e4 jne 0x1290e814 */
  if (!C.zf) goto L_1290e814;
  /* 1290e7e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1290e7e8 je 0x1290e810 */
  if (C.zf) goto L_1290e810;
  /* 1290e7ea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290e7ed jne 0x1290e814 */
  if (!C.zf) goto L_1290e814;
  /* 1290e7ef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1290e7f1 je 0x1290e810 */
  if (C.zf) goto L_1290e810;
  /* 1290e7f3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1290e7f6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290e7f9 jne 0x1290e814 */
  if (!C.zf) goto L_1290e814;
  /* 1290e7fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1290e7fd je 0x1290e810 */
  if (C.zf) goto L_1290e810;
  /* 1290e7ff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290e802 jne 0x1290e814 */
  if (!C.zf) goto L_1290e814;
  /* 1290e804 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e807 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e80a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1290e80c jne 0x1290e7e0 */
  if (!C.zf) goto L_1290e7e0;
  /* 1290e80e mov edi, edi */
  EDI = (EDI);
L_1290e810:;
  /* 1290e810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e812 ret  */
  ESPCHK(0x1290e7d0u, _esp0);
  ESP += 4; return;
  /* 1290e813 nop  */
  /* nop */
L_1290e814:;
  /* 1290e814 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290e816 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1290e818 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1290e819 ret  */
  ESPCHK(0x1290e7d0u, _esp0);
  ESP += 4; return;
  /* 1290e81a mov edi, edi */
  EDI = (EDI);
L_1290e81c:;
  /* 1290e81c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1290e822 je 0x1290e838 */
  if (C.zf) goto L_1290e838;
  /* 1290e824 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290e826 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1290e827 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290e829 jne 0x1290e814 */
  if (!C.zf) goto L_1290e814;
  /* 1290e82b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1290e82c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1290e82e je 0x1290e810 */
  if (C.zf) goto L_1290e810;
  /* 1290e830 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1290e836 je 0x1290e7e0 */
  if (C.zf) goto L_1290e7e0;
L_1290e838:;
  /* 1290e838 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1290e83b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e83e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290e840 jne 0x1290e814 */
  if (!C.zf) goto L_1290e814;
  /* 1290e842 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1290e844 je 0x1290e810 */
  if (C.zf) goto L_1290e810;
  /* 1290e846 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290e849 jne 0x1290e814 */
  if (!C.zf) goto L_1290e814;
  /* 1290e84b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1290e84d je 0x1290e810 */
  if (C.zf) goto L_1290e810;
  /* 1290e84f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e852 jmp 0x1290e7e0 */
  goto L_1290e7e0;
}

/* FUN_1000e860 @ 0x1290e860 (62 bytes, 35 insns) */
void f_1290e860(void) {
  FTRACE(0x1290e860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e860 push ebp */
  push32((uint32_t)(EBP));
  /* 1290e861 mov ebp, esp */
  EBP = (ESP);
  /* 1290e863 push esi */
  push32((uint32_t)(ESI));
  /* 1290e864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e866 push eax */
  push32((uint32_t)(EAX));
  /* 1290e867 push eax */
  push32((uint32_t)(EAX));
  /* 1290e868 push eax */
  push32((uint32_t)(EAX));
  /* 1290e869 push eax */
  push32((uint32_t)(EAX));
  /* 1290e86a push eax */
  push32((uint32_t)(EAX));
  /* 1290e86b push eax */
  push32((uint32_t)(EAX));
  /* 1290e86c push eax */
  push32((uint32_t)(EAX));
  /* 1290e86d push eax */
  push32((uint32_t)(EAX));
  /* 1290e86e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290e871 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1290e874:;
  /* 1290e874 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290e876 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1290e878 je 0x1290e881 */
  if (C.zf) goto L_1290e881;
  /* 1290e87a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1290e87b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1290e87b");
  /* 1290e87f jmp 0x1290e874 */
  goto L_1290e874;
L_1290e881:;
  /* 1290e881 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e884 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1290e887 nop  */
  /* nop */
L_1290e888:;
  /* 1290e888 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1290e889 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1290e88b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1290e88d je 0x1290e896 */
  if (C.zf) goto L_1290e896;
  /* 1290e88f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1290e890 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1290e890");
  /* 1290e894 jae 0x1290e888 */
  if (!C.cf) goto L_1290e888;
L_1290e896:;
  /* 1290e896 mov eax, ecx */
  EAX = (ECX);
  /* 1290e898 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e89b pop esi */
  ESI = (pop32());
  /* 1290e89c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290e89d ret  */
  ESPCHK(0x1290e860u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1290e8a0 (56 bytes, 31 insns) */
void f_1290e8a0(void) {
  FTRACE(0x1290e8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290e8a1 mov ebp, esp */
  EBP = (ESP);
  /* 1290e8a3 push edi */
  push32((uint32_t)(EDI));
  /* 1290e8a4 push esi */
  push32((uint32_t)(ESI));
  /* 1290e8a5 push ebx */
  push32((uint32_t)(EBX));
  /* 1290e8a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290e8a9 jecxz 0x1290e8d1 */
  x86_unimpl("jecxz @ 0x1290e8a9");
  /* 1290e8ab mov ebx, ecx */
  EBX = (ECX);
  /* 1290e8ad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e8b0 mov esi, edi */
  ESI = (EDI);
  /* 1290e8b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e8b4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1290e8b6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290e8b8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e8ba mov edi, esi */
  EDI = (ESI);
  /* 1290e8bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1290e8bf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1290e8c1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1290e8c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290e8c6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1290e8c9 ja 0x1290e8cf */
  if ((!C.cf&&!C.zf)) goto L_1290e8cf;
  /* 1290e8cb je 0x1290e8d1 */
  if (C.zf) goto L_1290e8d1;
  /* 1290e8cd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1290e8ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1290e8cf:;
  /* 1290e8cf not ecx */
  ECX = (~(ECX));
L_1290e8d1:;
  /* 1290e8d1 mov eax, ecx */
  EAX = (ECX);
  /* 1290e8d3 pop ebx */
  EBX = (pop32());
  /* 1290e8d4 pop esi */
  ESI = (pop32());
  /* 1290e8d5 pop edi */
  EDI = (pop32());
  /* 1290e8d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290e8d7 ret  */
  ESPCHK(0x1290e8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8e0 @ 0x1290e8e0 (58 bytes, 32 insns) */
void f_1290e8e0(void) {
  FTRACE(0x1290e8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290e8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1290e8e3 push esi */
  push32((uint32_t)(ESI));
  /* 1290e8e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290e8e6 push eax */
  push32((uint32_t)(EAX));
  /* 1290e8e7 push eax */
  push32((uint32_t)(EAX));
  /* 1290e8e8 push eax */
  push32((uint32_t)(EAX));
  /* 1290e8e9 push eax */
  push32((uint32_t)(EAX));
  /* 1290e8ea push eax */
  push32((uint32_t)(EAX));
  /* 1290e8eb push eax */
  push32((uint32_t)(EAX));
  /* 1290e8ec push eax */
  push32((uint32_t)(EAX));
  /* 1290e8ed push eax */
  push32((uint32_t)(EAX));
  /* 1290e8ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290e8f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1290e8f4:;
  /* 1290e8f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290e8f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1290e8f8 je 0x1290e901 */
  if (C.zf) goto L_1290e901;
  /* 1290e8fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1290e8fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1290e8fb");
  /* 1290e8ff jmp 0x1290e8f4 */
  goto L_1290e8f4;
L_1290e901:;
  /* 1290e901 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1290e904:;
  /* 1290e904 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1290e906 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1290e908 je 0x1290e914 */
  if (C.zf) goto L_1290e914;
  /* 1290e90a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1290e90b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1290e90b");
  /* 1290e90f jae 0x1290e904 */
  if (!C.cf) goto L_1290e904;
  /* 1290e911 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1290e914:;
  /* 1290e914 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e917 pop esi */
  ESI = (pop32());
  /* 1290e918 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1290e919 ret  */
  ESPCHK(0x1290e8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e920 @ 0x1290e920 (512 bytes, 147 insns) */
void f_1290e920(void) {
  FTRACE(0x1290e920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290e920 push ebp */
  push32((uint32_t)(EBP));
  /* 1290e921 mov ebp, esp */
  EBP = (ESP);
  /* 1290e923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290e926 cmp dword ptr [0x1292e714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e92d jne 0x1290e952 */
  if (!C.zf) goto L_1290e952;
  /* 1290e92f call 0x1290f3f0 */
  push32(0x1290e934u); f_1290f3f0();
  /* 1290e934 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290e936 je 0x1290e942 */
  if (C.zf) goto L_1290e942;
  /* 1290e938 mov eax, dword ptr [0x12930250] */
  EAX = (r32((uint32_t)(0x12930250)));
  /* 1290e93d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290e940 jmp 0x1290e949 */
  goto L_1290e949;
L_1290e942:;
  /* 1290e942 mov dword ptr [ebp - 8], 0x1290f440 */
  w32((uint32_t)(EBP + -0x8), (0x1290f440u));
L_1290e949:;
  /* 1290e949 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290e94c mov dword ptr [0x1292e714], ecx */
  w32((uint32_t)(0x1292e714), (ECX));
L_1290e952:;
  /* 1290e952 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e956 jne 0x1290e962 */
  if (!C.zf) goto L_1290e962;
  /* 1290e958 call 0x1290f240 */
  push32(0x1290e95du); f_1290f240();
  /* 1290e95d jmp 0x1290ea2e */
  goto L_1290ea2e;
L_1290e962:;
  /* 1290e962 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e965 mov dword ptr [0x1292e704], edx */
  w32((uint32_t)(0x1292e704), (EDX));
  /* 1290e96b cmp dword ptr [0x1292e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e972 je 0x1290e994 */
  if (C.zf) goto L_1290e994;
  /* 1290e974 mov eax, dword ptr [0x1292e704] */
  EAX = (r32((uint32_t)(0x1292e704)));
  /* 1290e979 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290e97c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290e97e je 0x1290e994 */
  if (C.zf) goto L_1290e994;
  /* 1290e980 push 0x1292e704 */
  push32((uint32_t)(0x1292e704u));
  /* 1290e985 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1290e987 push 0x1292da90 */
  push32((uint32_t)(0x1292da90u));
  /* 1290e98c call 0x1290eb20 */
  push32(0x1290e991u); f_1290eb20();
  /* 1290e991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290e994:;
  /* 1290e994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290e997 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290e99a mov dword ptr [0x1292e708], edx */
  w32((uint32_t)(0x1292e708), (EDX));
  /* 1290e9a0 cmp dword ptr [0x1292e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e9a7 je 0x1290e9c9 */
  if (C.zf) goto L_1290e9c9;
  /* 1290e9a9 mov eax, dword ptr [0x1292e708] */
  EAX = (r32((uint32_t)(0x1292e708)));
  /* 1290e9ae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290e9b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290e9b3 je 0x1290e9c9 */
  if (C.zf) goto L_1290e9c9;
  /* 1290e9b5 push 0x1292e708 */
  push32((uint32_t)(0x1292e708u));
  /* 1290e9ba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1290e9bc push 0x1292d9d8 */
  push32((uint32_t)(0x1292d9d8u));
  /* 1290e9c1 call 0x1290eb20 */
  push32(0x1290e9c6u); f_1290eb20();
  /* 1290e9c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290e9c9:;
  /* 1290e9c9 mov dword ptr [0x1292e70c], 0 */
  w32((uint32_t)(0x1292e70c), (0x0u));
  /* 1290e9d3 cmp dword ptr [0x1292e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e9da je 0x1290ea0d */
  if (C.zf) goto L_1290ea0d;
  /* 1290e9dc mov edx, dword ptr [0x1292e704] */
  EDX = (r32((uint32_t)(0x1292e704)));
  /* 1290e9e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1290e9e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290e9e7 je 0x1290ea0d */
  if (C.zf) goto L_1290ea0d;
  /* 1290e9e9 cmp dword ptr [0x1292e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290e9f0 je 0x1290ea06 */
  if (C.zf) goto L_1290ea06;
  /* 1290e9f2 mov ecx, dword ptr [0x1292e708] */
  ECX = (r32((uint32_t)(0x1292e708)));
  /* 1290e9f8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1290e9fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290e9fd je 0x1290ea06 */
  if (C.zf) goto L_1290ea06;
  /* 1290e9ff call 0x1290ebb0 */
  push32(0x1290ea04u); f_1290ebb0();
  /* 1290ea04 jmp 0x1290ea0b */
  goto L_1290ea0b;
L_1290ea06:;
  /* 1290ea06 call 0x1290efa0 */
  push32(0x1290ea0bu); f_1290efa0();
L_1290ea0b:;
  /* 1290ea0b jmp 0x1290ea2e */
  goto L_1290ea2e;
L_1290ea0d:;
  /* 1290ea0d cmp dword ptr [0x1292e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ea14 je 0x1290ea29 */
  if (C.zf) goto L_1290ea29;
  /* 1290ea16 mov eax, dword ptr [0x1292e708] */
  EAX = (r32((uint32_t)(0x1292e708)));
  /* 1290ea1b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290ea1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290ea20 je 0x1290ea29 */
  if (C.zf) goto L_1290ea29;
  /* 1290ea22 call 0x1290f140 */
  push32(0x1290ea27u); f_1290f140();
  /* 1290ea27 jmp 0x1290ea2e */
  goto L_1290ea2e;
L_1290ea29:;
  /* 1290ea29 call 0x1290f240 */
  push32(0x1290ea2eu); f_1290f240();
L_1290ea2e:;
  /* 1290ea2e cmp dword ptr [0x1292e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ea35 jne 0x1290ea3e */
  if (!C.zf) goto L_1290ea3e;
  /* 1290ea37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290ea39 jmp 0x1290eb1c */
  goto L_1290eb1c;
L_1290ea3e:;
  /* 1290ea3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ea41 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ea47 push edx */
  push32((uint32_t)(EDX));
  /* 1290ea48 call 0x1290f270 */
  push32(0x1290ea4du); f_1290f270();
  /* 1290ea4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ea50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290ea53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ea57 je 0x1290ea6c */
  if (C.zf) goto L_1290ea6c;
  /* 1290ea59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290ea5c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290ea61 push eax */
  push32((uint32_t)(EAX));
  /* 1290ea62 call dword ptr [0x129302c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129302c8))), 0x1290ea68u);
  /* 1290ea68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ea6a jne 0x1290ea73 */
  if (!C.zf) goto L_1290ea73;
L_1290ea6c:;
  /* 1290ea6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290ea6e jmp 0x1290eb1c */
  goto L_1290eb1c;
L_1290ea73:;
  /* 1290ea73 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290ea75 mov ecx, dword ptr [0x1292e6f4] */
  ECX = (r32((uint32_t)(0x1292e6f4)));
  /* 1290ea7b push ecx */
  push32((uint32_t)(ECX));
  /* 1290ea7c call dword ptr [0x12930340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930340))), 0x1290ea82u);
  /* 1290ea82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ea84 jne 0x1290ea8d */
  if (!C.zf) goto L_1290ea8d;
  /* 1290ea86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290ea88 jmp 0x1290eb1c */
  goto L_1290eb1c;
L_1290ea8d:;
  /* 1290ea8d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ea91 je 0x1290eab8 */
  if (C.zf) goto L_1290eab8;
  /* 1290ea93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290ea96 mov ax, word ptr [0x1292e6f4] */
  AX = (r16((uint32_t)(0x1292e6f4)));
  /* 1290ea9c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1290ea9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290eaa2 mov dx, word ptr [0x1292e710] */
  DX = (r16((uint32_t)(0x1292e710)));
  /* 1290eaa9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1290eaad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290eab0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1290eab4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1290eab8:;
  /* 1290eab8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290eabc je 0x1290eb17 */
  if (C.zf) goto L_1290eb17;
  /* 1290eabe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1290eac0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290eac3 push edx */
  push32((uint32_t)(EDX));
  /* 1290eac4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1290eac9 mov eax, dword ptr [0x1292e6f4] */
  EAX = (r32((uint32_t)(0x1292e6f4)));
  /* 1290eace push eax */
  push32((uint32_t)(EAX));
  /* 1290eacf call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290ead5u);
  /* 1290ead5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ead7 jne 0x1290eadd */
  if (!C.zf) goto L_1290eadd;
  /* 1290ead9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290eadb jmp 0x1290eb1c */
  goto L_1290eb1c;
L_1290eadd:;
  /* 1290eadd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1290eadf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290eae2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290eae5 push ecx */
  push32((uint32_t)(ECX));
  /* 1290eae6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1290eaeb mov edx, dword ptr [0x1292e710] */
  EDX = (r32((uint32_t)(0x1292e710)));
  /* 1290eaf1 push edx */
  push32((uint32_t)(EDX));
  /* 1290eaf2 call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290eaf8u);
  /* 1290eaf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290eafa jne 0x1290eb00 */
  if (!C.zf) goto L_1290eb00;
  /* 1290eafc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290eafe jmp 0x1290eb1c */
  goto L_1290eb1c;
L_1290eb00:;
  /* 1290eb00 push 0xa */
  push32((uint32_t)(0xau));
  /* 1290eb02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290eb05 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290eb0a push eax */
  push32((uint32_t)(EAX));
  /* 1290eb0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290eb0e push ecx */
  push32((uint32_t)(ECX));
  /* 1290eb0f call 0x12905680 */
  push32(0x1290eb14u); f_12905680();
  /* 1290eb14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290eb17:;
  /* 1290eb17 mov eax, 1 */
  EAX = (0x1u);
L_1290eb1c:;
  /* 1290eb1c mov esp, ebp */
  ESP = (EBP);
  /* 1290eb1e pop ebp */
  EBP = (pop32());
  /* 1290eb1f ret  */
  ESPCHK(0x1290e920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x1290eb20 (130 bytes, 47 insns) */
void f_1290eb20(void) {
  FTRACE(0x1290eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1290eb21 mov ebp, esp */
  EBP = (ESP);
  /* 1290eb23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290eb26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1290eb2d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1290eb34:;
  /* 1290eb34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290eb37 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290eb3a jg 0x1290eb9e */
  if ((!C.zf&&C.sf==C.of)) goto L_1290eb9e;
  /* 1290eb3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290eb40 je 0x1290eb9e */
  if (C.zf) goto L_1290eb9e;
  /* 1290eb42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290eb45 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290eb48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1290eb49 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290eb4b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1290eb4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290eb50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290eb53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290eb56 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1290eb59 push eax */
  push32((uint32_t)(EAX));
  /* 1290eb5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290eb5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1290eb5f push edx */
  push32((uint32_t)(EDX));
  /* 1290eb60 call 0x12911210 */
  push32(0x1290eb65u); f_12911210();
  /* 1290eb65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290eb68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290eb6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290eb6f jne 0x1290eb82 */
  if (!C.zf) goto L_1290eb82;
  /* 1290eb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290eb74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290eb77 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1290eb7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290eb7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1290eb80 jmp 0x1290eb9c */
  goto L_1290eb9c;
L_1290eb82:;
  /* 1290eb82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290eb86 jge 0x1290eb93 */
  if ((C.sf==C.of)) goto L_1290eb93;
  /* 1290eb88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290eb8b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290eb8e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1290eb91 jmp 0x1290eb9c */
  goto L_1290eb9c;
L_1290eb93:;
  /* 1290eb93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290eb96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290eb99 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1290eb9c:;
  /* 1290eb9c jmp 0x1290eb34 */
  goto L_1290eb34;
L_1290eb9e:;
  /* 1290eb9e mov esp, ebp */
  ESP = (EBP);
  /* 1290eba0 pop ebp */
  EBP = (pop32());
  /* 1290eba1 ret  */
  ESPCHK(0x1290eb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebb0 @ 0x1290ebb0 (186 bytes, 50 insns) */
void f_1290ebb0(void) {
  FTRACE(0x1290ebb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290ebb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290ebb1 mov ebp, esp */
  EBP = (ESP);
  /* 1290ebb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ebb4 mov eax, dword ptr [0x1292e704] */
  EAX = (r32((uint32_t)(0x1292e704)));
  /* 1290ebb9 push eax */
  push32((uint32_t)(EAX));
  /* 1290ebba call 0x12905970 */
  push32(0x1290ebbfu); f_12905970();
  /* 1290ebbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ebc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290ebc4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ebc7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1290ebca mov dword ptr [0x1292e700], ecx */
  w32((uint32_t)(0x1292e700), (ECX));
  /* 1290ebd0 mov edx, dword ptr [0x1292e708] */
  EDX = (r32((uint32_t)(0x1292e708)));
  /* 1290ebd6 push edx */
  push32((uint32_t)(EDX));
  /* 1290ebd7 call 0x12905970 */
  push32(0x1290ebdcu); f_12905970();
  /* 1290ebdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ebdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290ebe1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ebe4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1290ebe7 mov dword ptr [0x1292e6f8], ecx */
  w32((uint32_t)(0x1292e6f8), (ECX));
  /* 1290ebed mov dword ptr [0x1292e6f4], 0 */
  w32((uint32_t)(0x1292e6f4), (0x0u));
  /* 1290ebf7 cmp dword ptr [0x1292e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ebfe je 0x1290ec09 */
  if (C.zf) goto L_1290ec09;
  /* 1290ec00 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1290ec07 jmp 0x1290ec1b */
  goto L_1290ec1b;
L_1290ec09:;
  /* 1290ec09 mov edx, dword ptr [0x1292e704] */
  EDX = (r32((uint32_t)(0x1292e704)));
  /* 1290ec0f push edx */
  push32((uint32_t)(EDX));
  /* 1290ec10 call 0x1290f650 */
  push32(0x1290ec15u); f_1290f650();
  /* 1290ec15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ec18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290ec1b:;
  /* 1290ec1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290ec1e mov dword ptr [0x1292e6fc], eax */
  w32((uint32_t)(0x1292e6fc), (EAX));
  /* 1290ec23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290ec25 push 0x1290ec70 */
  push32((uint32_t)(0x1290ec70u));
  /* 1290ec2a call dword ptr [0x1293024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293024c))), 0x1290ec30u);
  /* 1290ec30 mov ecx, dword ptr [0x1292e70c] */
  ECX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ec36 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1290ec3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290ec3e je 0x1290ec5c */
  if (C.zf) goto L_1290ec5c;
  /* 1290ec40 mov edx, dword ptr [0x1292e70c] */
  EDX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ec46 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1290ec4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290ec4e je 0x1290ec5c */
  if (C.zf) goto L_1290ec5c;
  /* 1290ec50 mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ec55 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1290ec58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ec5a jne 0x1290ec66 */
  if (!C.zf) goto L_1290ec66;
L_1290ec5c:;
  /* 1290ec5c mov dword ptr [0x1292e70c], 0 */
  w32((uint32_t)(0x1292e70c), (0x0u));
L_1290ec66:;
  /* 1290ec66 mov esp, ebp */
  ESP = (EBP);
  /* 1290ec68 pop ebp */
  EBP = (pop32());
  /* 1290ec69 ret  */
  ESPCHK(0x1290ebb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec70 @ 0x1290ec70 (804 bytes, 220 insns) */
void f_1290ec70(void) {
  FTRACE(0x1290ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 1290ec71 mov ebp, esp */
  EBP = (ESP);
  /* 1290ec73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ec76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290ec79 push eax */
  push32((uint32_t)(EAX));
  /* 1290ec7a call 0x1290f5d0 */
  push32(0x1290ec7fu); f_1290f5d0();
  /* 1290ec7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ec82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1290ec85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1290ec87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1290ec8a push ecx */
  push32((uint32_t)(ECX));
  /* 1290ec8b mov edx, dword ptr [0x1292e6f8] */
  EDX = (r32((uint32_t)(0x1292e6f8)));
  /* 1290ec91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290ec93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ec95 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1290ec9b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290eca1 push edx */
  push32((uint32_t)(EDX));
  /* 1290eca2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290eca5 push eax */
  push32((uint32_t)(EAX));
  /* 1290eca6 call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290ecacu);
  /* 1290ecac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ecae jne 0x1290ecc4 */
  if (!C.zf) goto L_1290ecc4;
  /* 1290ecb0 mov dword ptr [0x1292e70c], 0 */
  w32((uint32_t)(0x1292e70c), (0x0u));
  /* 1290ecba mov eax, 1 */
  EAX = (0x1u);
  /* 1290ecbf jmp 0x1290ef8e */
  goto L_1290ef8e;
L_1290ecc4:;
  /* 1290ecc4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1290ecc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ecc8 mov edx, dword ptr [0x1292e708] */
  EDX = (r32((uint32_t)(0x1292e708)));
  /* 1290ecce push edx */
  push32((uint32_t)(EDX));
  /* 1290eccf call 0x12911210 */
  push32(0x1290ecd4u); f_12911210();
  /* 1290ecd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ecd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ecd9 jne 0x1290edff */
  if (!C.zf) goto L_1290edff;
  /* 1290ecdf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1290ece1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1290ece4 push eax */
  push32((uint32_t)(EAX));
  /* 1290ece5 mov ecx, dword ptr [0x1292e700] */
  ECX = (r32((uint32_t)(0x1292e700)));
  /* 1290eceb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290eced sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ecef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1290ecf5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ecfb push ecx */
  push32((uint32_t)(ECX));
  /* 1290ecfc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290ecff push edx */
  push32((uint32_t)(EDX));
  /* 1290ed00 call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290ed06u);
  /* 1290ed06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ed08 jne 0x1290ed1e */
  if (!C.zf) goto L_1290ed1e;
  /* 1290ed0a mov dword ptr [0x1292e70c], 0 */
  w32((uint32_t)(0x1292e70c), (0x0u));
  /* 1290ed14 mov eax, 1 */
  EAX = (0x1u);
  /* 1290ed19 jmp 0x1290ef8e */
  goto L_1290ef8e;
L_1290ed1e:;
  /* 1290ed1e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1290ed21 push eax */
  push32((uint32_t)(EAX));
  /* 1290ed22 mov ecx, dword ptr [0x1292e704] */
  ECX = (r32((uint32_t)(0x1292e704)));
  /* 1290ed28 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ed29 call 0x12911210 */
  push32(0x1290ed2eu); f_12911210();
  /* 1290ed2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ed31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ed33 jne 0x1290ed60 */
  if (!C.zf) goto L_1290ed60;
  /* 1290ed35 mov edx, dword ptr [0x1292e70c] */
  EDX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ed3b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1290ed41 mov dword ptr [0x1292e70c], edx */
  w32((uint32_t)(0x1292e70c), (EDX));
  /* 1290ed47 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290ed4a mov dword ptr [0x1292e710], eax */
  w32((uint32_t)(0x1292e710), (EAX));
  /* 1290ed4f mov ecx, dword ptr [0x1292e710] */
  ECX = (r32((uint32_t)(0x1292e710)));
  /* 1290ed55 mov dword ptr [0x1292e6f4], ecx */
  w32((uint32_t)(0x1292e6f4), (ECX));
  /* 1290ed5b jmp 0x1290edff */
  goto L_1290edff;
L_1290ed60:;
  /* 1290ed60 mov edx, dword ptr [0x1292e70c] */
  EDX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ed66 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1290ed69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290ed6b jne 0x1290edff */
  if (!C.zf) goto L_1290edff;
  /* 1290ed71 cmp dword ptr [0x1292e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ed78 je 0x1290edcd */
  if (C.zf) goto L_1290edcd;
  /* 1290ed7a mov eax, dword ptr [0x1292e6fc] */
  EAX = (r32((uint32_t)(0x1292e6fc)));
  /* 1290ed7f push eax */
  push32((uint32_t)(EAX));
  /* 1290ed80 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1290ed83 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ed84 mov edx, dword ptr [0x1292e704] */
  EDX = (r32((uint32_t)(0x1292e704)));
  /* 1290ed8a push edx */
  push32((uint32_t)(EDX));
  /* 1290ed8b call 0x129112e0 */
  push32(0x1290ed90u); f_129112e0();
  /* 1290ed90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ed93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ed95 jne 0x1290edcd */
  if (!C.zf) goto L_1290edcd;
  /* 1290ed97 mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ed9c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1290ed9e mov dword ptr [0x1292e70c], eax */
  w32((uint32_t)(0x1292e70c), (EAX));
  /* 1290eda3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290eda6 mov dword ptr [0x1292e710], ecx */
  w32((uint32_t)(0x1292e710), (ECX));
  /* 1290edac mov edx, dword ptr [0x1292e704] */
  EDX = (r32((uint32_t)(0x1292e704)));
  /* 1290edb2 push edx */
  push32((uint32_t)(EDX));
  /* 1290edb3 call 0x12905970 */
  push32(0x1290edb8u); f_12905970();
  /* 1290edb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290edbb cmp eax, dword ptr [0x1292e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290edc1 jne 0x1290edcb */
  if (!C.zf) goto L_1290edcb;
  /* 1290edc3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290edc6 mov dword ptr [0x1292e6f4], eax */
  w32((uint32_t)(0x1292e6f4), (EAX));
L_1290edcb:;
  /* 1290edcb jmp 0x1290edff */
  goto L_1290edff;
L_1290edcd:;
  /* 1290edcd mov ecx, dword ptr [0x1292e70c] */
  ECX = (r32((uint32_t)(0x1292e70c)));
  /* 1290edd3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1290edd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290edd8 jne 0x1290edff */
  if (!C.zf) goto L_1290edff;
  /* 1290edda mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290eddd push edx */
  push32((uint32_t)(EDX));
  /* 1290edde call 0x1290f310 */
  push32(0x1290ede3u); f_1290f310();
  /* 1290ede3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ede6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ede8 je 0x1290edff */
  if (C.zf) goto L_1290edff;
  /* 1290edea mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290edef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1290edf1 mov dword ptr [0x1292e70c], eax */
  w32((uint32_t)(0x1292e70c), (EAX));
  /* 1290edf6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290edf9 mov dword ptr [0x1292e710], ecx */
  w32((uint32_t)(0x1292e710), (ECX));
L_1290edff:;
  /* 1290edff mov edx, dword ptr [0x1292e70c] */
  EDX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ee05 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1290ee0b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ee11 je 0x1290ef81 */
  if (C.zf) goto L_1290ef81;
  /* 1290ee17 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1290ee19 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1290ee1c push eax */
  push32((uint32_t)(EAX));
  /* 1290ee1d mov ecx, dword ptr [0x1292e700] */
  ECX = (r32((uint32_t)(0x1292e700)));
  /* 1290ee23 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290ee25 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ee27 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1290ee2d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ee33 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ee34 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290ee37 push edx */
  push32((uint32_t)(EDX));
  /* 1290ee38 call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290ee3eu);
  /* 1290ee3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ee40 jne 0x1290ee56 */
  if (!C.zf) goto L_1290ee56;
  /* 1290ee42 mov dword ptr [0x1292e70c], 0 */
  w32((uint32_t)(0x1292e70c), (0x0u));
  /* 1290ee4c mov eax, 1 */
  EAX = (0x1u);
  /* 1290ee51 jmp 0x1290ef8e */
  goto L_1290ef8e;
L_1290ee56:;
  /* 1290ee56 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1290ee59 push eax */
  push32((uint32_t)(EAX));
  /* 1290ee5a mov ecx, dword ptr [0x1292e704] */
  ECX = (r32((uint32_t)(0x1292e704)));
  /* 1290ee60 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ee61 call 0x12911210 */
  push32(0x1290ee66u); f_12911210();
  /* 1290ee66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ee69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ee6b jne 0x1290ef20 */
  if (!C.zf) goto L_1290ef20;
  /* 1290ee71 mov edx, dword ptr [0x1292e70c] */
  EDX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ee77 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1290ee7a mov dword ptr [0x1292e70c], edx */
  w32((uint32_t)(0x1292e70c), (EDX));
  /* 1290ee80 cmp dword ptr [0x1292e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ee87 je 0x1290eeaa */
  if (C.zf) goto L_1290eeaa;
  /* 1290ee89 mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ee8e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1290ee91 mov dword ptr [0x1292e70c], eax */
  w32((uint32_t)(0x1292e70c), (EAX));
  /* 1290ee96 cmp dword ptr [0x1292e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ee9d jne 0x1290eea8 */
  if (!C.zf) goto L_1290eea8;
  /* 1290ee9f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290eea2 mov dword ptr [0x1292e6f4], ecx */
  w32((uint32_t)(0x1292e6f4), (ECX));
L_1290eea8:;
  /* 1290eea8 jmp 0x1290ef1e */
  goto L_1290ef1e;
L_1290eeaa:;
  /* 1290eeaa cmp dword ptr [0x1292e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290eeb1 je 0x1290eeff */
  if (C.zf) goto L_1290eeff;
  /* 1290eeb3 mov edx, dword ptr [0x1292e704] */
  EDX = (r32((uint32_t)(0x1292e704)));
  /* 1290eeb9 push edx */
  push32((uint32_t)(EDX));
  /* 1290eeba call 0x12905970 */
  push32(0x1290eebfu); f_12905970();
  /* 1290eebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290eec2 cmp eax, dword ptr [0x1292e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290eec8 jne 0x1290eeff */
  if (!C.zf) goto L_1290eeff;
  /* 1290eeca push 1 */
  push32((uint32_t)(0x1u));
  /* 1290eecc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290eecf push eax */
  push32((uint32_t)(EAX));
  /* 1290eed0 call 0x1290f360 */
  push32(0x1290eed5u); f_1290f360();
  /* 1290eed5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290eed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290eeda je 0x1290eefd */
  if (C.zf) goto L_1290eefd;
  /* 1290eedc mov ecx, dword ptr [0x1292e70c] */
  ECX = (r32((uint32_t)(0x1292e70c)));
  /* 1290eee2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1290eee5 mov dword ptr [0x1292e70c], ecx */
  w32((uint32_t)(0x1292e70c), (ECX));
  /* 1290eeeb cmp dword ptr [0x1292e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290eef2 jne 0x1290eefd */
  if (!C.zf) goto L_1290eefd;
  /* 1290eef4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290eef7 mov dword ptr [0x1292e6f4], edx */
  w32((uint32_t)(0x1292e6f4), (EDX));
L_1290eefd:;
  /* 1290eefd jmp 0x1290ef1e */
  goto L_1290ef1e;
L_1290eeff:;
  /* 1290eeff mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ef04 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1290ef07 mov dword ptr [0x1292e70c], eax */
  w32((uint32_t)(0x1292e70c), (EAX));
  /* 1290ef0c cmp dword ptr [0x1292e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ef13 jne 0x1290ef1e */
  if (!C.zf) goto L_1290ef1e;
  /* 1290ef15 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290ef18 mov dword ptr [0x1292e6f4], ecx */
  w32((uint32_t)(0x1292e6f4), (ECX));
L_1290ef1e:;
  /* 1290ef1e jmp 0x1290ef81 */
  goto L_1290ef81;
L_1290ef20:;
  /* 1290ef20 cmp dword ptr [0x1292e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ef27 jne 0x1290ef81 */
  if (!C.zf) goto L_1290ef81;
  /* 1290ef29 cmp dword ptr [0x1292e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ef30 je 0x1290ef81 */
  if (C.zf) goto L_1290ef81;
  /* 1290ef32 mov edx, dword ptr [0x1292e6fc] */
  EDX = (r32((uint32_t)(0x1292e6fc)));
  /* 1290ef38 push edx */
  push32((uint32_t)(EDX));
  /* 1290ef39 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1290ef3c push eax */
  push32((uint32_t)(EAX));
  /* 1290ef3d mov ecx, dword ptr [0x1292e704] */
  ECX = (r32((uint32_t)(0x1292e704)));
  /* 1290ef43 push ecx */
  push32((uint32_t)(ECX));
  /* 1290ef44 call 0x129112e0 */
  push32(0x1290ef49u); f_129112e0();
  /* 1290ef49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ef4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ef4e jne 0x1290ef81 */
  if (!C.zf) goto L_1290ef81;
  /* 1290ef50 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290ef52 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290ef55 push edx */
  push32((uint32_t)(EDX));
  /* 1290ef56 call 0x1290f360 */
  push32(0x1290ef5bu); f_1290f360();
  /* 1290ef5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290ef5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290ef60 je 0x1290ef81 */
  if (C.zf) goto L_1290ef81;
  /* 1290ef62 mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ef67 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1290ef6a mov dword ptr [0x1292e70c], eax */
  w32((uint32_t)(0x1292e70c), (EAX));
  /* 1290ef6f cmp dword ptr [0x1292e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290ef76 jne 0x1290ef81 */
  if (!C.zf) goto L_1290ef81;
  /* 1290ef78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290ef7b mov dword ptr [0x1292e6f4], ecx */
  w32((uint32_t)(0x1292e6f4), (ECX));
L_1290ef81:;
  /* 1290ef81 mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290ef86 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1290ef89 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290ef8b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290ef8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1290ef8e:;
  /* 1290ef8e mov esp, ebp */
  ESP = (EBP);
  /* 1290ef90 pop ebp */
  EBP = (pop32());
  /* 1290ef91 ret 4 */
  ESPCHK(0x1290ec70u, _esp0);
  ESP += 8; return;
}

/* FUN_1000efa0 @ 0x1290efa0 (116 bytes, 33 insns) */
void f_1290efa0(void) {
  FTRACE(0x1290efa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290efa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290efa1 mov ebp, esp */
  EBP = (ESP);
  /* 1290efa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290efa4 mov eax, dword ptr [0x1292e704] */
  EAX = (r32((uint32_t)(0x1292e704)));
  /* 1290efa9 push eax */
  push32((uint32_t)(EAX));
  /* 1290efaa call 0x12905970 */
  push32(0x1290efafu); f_12905970();
  /* 1290efaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290efb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290efb4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290efb7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1290efba mov dword ptr [0x1292e700], ecx */
  w32((uint32_t)(0x1292e700), (ECX));
  /* 1290efc0 cmp dword ptr [0x1292e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290efc7 je 0x1290efd2 */
  if (C.zf) goto L_1290efd2;
  /* 1290efc9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1290efd0 jmp 0x1290efe4 */
  goto L_1290efe4;
L_1290efd2:;
  /* 1290efd2 mov edx, dword ptr [0x1292e704] */
  EDX = (r32((uint32_t)(0x1292e704)));
  /* 1290efd8 push edx */
  push32((uint32_t)(EDX));
  /* 1290efd9 call 0x1290f650 */
  push32(0x1290efdeu); f_1290f650();
  /* 1290efde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290efe1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1290efe4:;
  /* 1290efe4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290efe7 mov dword ptr [0x1292e6fc], eax */
  w32((uint32_t)(0x1292e6fc), (EAX));
  /* 1290efec push 1 */
  push32((uint32_t)(0x1u));
  /* 1290efee push 0x1290f020 */
  push32((uint32_t)(0x1290f020u));
  /* 1290eff3 call dword ptr [0x1293024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293024c))), 0x1290eff9u);
  /* 1290eff9 mov ecx, dword ptr [0x1292e70c] */
  ECX = (r32((uint32_t)(0x1292e70c)));
  /* 1290efff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1290f002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290f004 jne 0x1290f010 */
  if (!C.zf) goto L_1290f010;
  /* 1290f006 mov dword ptr [0x1292e70c], 0 */
  w32((uint32_t)(0x1292e70c), (0x0u));
L_1290f010:;
  /* 1290f010 mov esp, ebp */
  ESP = (EBP);
  /* 1290f012 pop ebp */
  EBP = (pop32());
  /* 1290f013 ret  */
  ESPCHK(0x1290efa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f020 @ 0x1290f020 (287 bytes, 86 insns) */
void f_1290f020(void) {
  FTRACE(0x1290f020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f020 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f021 mov ebp, esp */
  EBP = (ESP);
  /* 1290f023 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f029 push eax */
  push32((uint32_t)(EAX));
  /* 1290f02a call 0x1290f5d0 */
  push32(0x1290f02fu); f_1290f5d0();
  /* 1290f02f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f032 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1290f035 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1290f037 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1290f03a push ecx */
  push32((uint32_t)(ECX));
  /* 1290f03b mov edx, dword ptr [0x1292e700] */
  EDX = (r32((uint32_t)(0x1292e700)));
  /* 1290f041 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290f043 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f045 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1290f04b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f051 push edx */
  push32((uint32_t)(EDX));
  /* 1290f052 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290f055 push eax */
  push32((uint32_t)(EAX));
  /* 1290f056 call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290f05cu);
  /* 1290f05c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f05e jne 0x1290f074 */
  if (!C.zf) goto L_1290f074;
  /* 1290f060 mov dword ptr [0x1292e70c], 0 */
  w32((uint32_t)(0x1292e70c), (0x0u));
  /* 1290f06a mov eax, 1 */
  EAX = (0x1u);
  /* 1290f06f jmp 0x1290f139 */
  goto L_1290f139;
L_1290f074:;
  /* 1290f074 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1290f077 push ecx */
  push32((uint32_t)(ECX));
  /* 1290f078 mov edx, dword ptr [0x1292e704] */
  EDX = (r32((uint32_t)(0x1292e704)));
  /* 1290f07e push edx */
  push32((uint32_t)(EDX));
  /* 1290f07f call 0x12911210 */
  push32(0x1290f084u); f_12911210();
  /* 1290f084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f087 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f089 jne 0x1290f0c9 */
  if (!C.zf) goto L_1290f0c9;
  /* 1290f08b cmp dword ptr [0x1292e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f092 jne 0x1290f0a6 */
  if (!C.zf) goto L_1290f0a6;
  /* 1290f094 push 1 */
  push32((uint32_t)(0x1u));
  /* 1290f096 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290f099 push eax */
  push32((uint32_t)(EAX));
  /* 1290f09a call 0x1290f360 */
  push32(0x1290f09fu); f_1290f360();
  /* 1290f09f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f0a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f0a4 je 0x1290f0c7 */
  if (C.zf) goto L_1290f0c7;
L_1290f0a6:;
  /* 1290f0a6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290f0a9 mov dword ptr [0x1292e710], ecx */
  w32((uint32_t)(0x1292e710), (ECX));
  /* 1290f0af mov edx, dword ptr [0x1292e710] */
  EDX = (r32((uint32_t)(0x1292e710)));
  /* 1290f0b5 mov dword ptr [0x1292e6f4], edx */
  w32((uint32_t)(0x1292e6f4), (EDX));
  /* 1290f0bb mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290f0c0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1290f0c2 mov dword ptr [0x1292e70c], eax */
  w32((uint32_t)(0x1292e70c), (EAX));
L_1290f0c7:;
  /* 1290f0c7 jmp 0x1290f12c */
  goto L_1290f12c;
L_1290f0c9:;
  /* 1290f0c9 cmp dword ptr [0x1292e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f0d0 jne 0x1290f12c */
  if (!C.zf) goto L_1290f12c;
  /* 1290f0d2 cmp dword ptr [0x1292e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1292e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f0d9 je 0x1290f12c */
  if (C.zf) goto L_1290f12c;
  /* 1290f0db mov ecx, dword ptr [0x1292e6fc] */
  ECX = (r32((uint32_t)(0x1292e6fc)));
  /* 1290f0e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1290f0e2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1290f0e5 push edx */
  push32((uint32_t)(EDX));
  /* 1290f0e6 mov eax, dword ptr [0x1292e704] */
  EAX = (r32((uint32_t)(0x1292e704)));
  /* 1290f0eb push eax */
  push32((uint32_t)(EAX));
  /* 1290f0ec call 0x129112e0 */
  push32(0x1290f0f1u); f_129112e0();
  /* 1290f0f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f0f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f0f6 jne 0x1290f12c */
  if (!C.zf) goto L_1290f12c;
  /* 1290f0f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1290f0fa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290f0fd push ecx */
  push32((uint32_t)(ECX));
  /* 1290f0fe call 0x1290f360 */
  push32(0x1290f103u); f_1290f360();
  /* 1290f103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f108 je 0x1290f12c */
  if (C.zf) goto L_1290f12c;
  /* 1290f10a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290f10d mov dword ptr [0x1292e710], edx */
  w32((uint32_t)(0x1292e710), (EDX));
  /* 1290f113 mov eax, dword ptr [0x1292e710] */
  EAX = (r32((uint32_t)(0x1292e710)));
  /* 1290f118 mov dword ptr [0x1292e6f4], eax */
  w32((uint32_t)(0x1292e6f4), (EAX));
  /* 1290f11d mov ecx, dword ptr [0x1292e70c] */
  ECX = (r32((uint32_t)(0x1292e70c)));
  /* 1290f123 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1290f126 mov dword ptr [0x1292e70c], ecx */
  w32((uint32_t)(0x1292e70c), (ECX));
L_1290f12c:;
  /* 1290f12c mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290f131 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1290f134 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290f136 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f138 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1290f139:;
  /* 1290f139 mov esp, ebp */
  ESP = (EBP);
  /* 1290f13b pop ebp */
  EBP = (pop32());
  /* 1290f13c ret 4 */
  ESPCHK(0x1290f020u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f140 @ 0x1290f140 (69 bytes, 20 insns) */
void f_1290f140(void) {
  FTRACE(0x1290f140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f140 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f141 mov ebp, esp */
  EBP = (ESP);
  /* 1290f143 mov eax, dword ptr [0x1292e708] */
  EAX = (r32((uint32_t)(0x1292e708)));
  /* 1290f148 push eax */
  push32((uint32_t)(EAX));
  /* 1290f149 call 0x12905970 */
  push32(0x1290f14eu); f_12905970();
  /* 1290f14e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f151 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290f153 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f156 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1290f159 mov dword ptr [0x1292e6f8], ecx */
  w32((uint32_t)(0x1292e6f8), (ECX));
  /* 1290f15f push 1 */
  push32((uint32_t)(0x1u));
  /* 1290f161 push 0x1290f190 */
  push32((uint32_t)(0x1290f190u));
  /* 1290f166 call dword ptr [0x1293024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1293024c))), 0x1290f16cu);
  /* 1290f16c mov edx, dword ptr [0x1292e70c] */
  EDX = (r32((uint32_t)(0x1292e70c)));
  /* 1290f172 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1290f175 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290f177 jne 0x1290f183 */
  if (!C.zf) goto L_1290f183;
  /* 1290f179 mov dword ptr [0x1292e70c], 0 */
  w32((uint32_t)(0x1292e70c), (0x0u));
L_1290f183:;
  /* 1290f183 pop ebp */
  EBP = (pop32());
  /* 1290f184 ret  */
  ESPCHK(0x1290f140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f190 @ 0x1290f190 (172 bytes, 54 insns) */
void f_1290f190(void) {
  FTRACE(0x1290f190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f190 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f191 mov ebp, esp */
  EBP = (ESP);
  /* 1290f193 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f199 push eax */
  push32((uint32_t)(EAX));
  /* 1290f19a call 0x1290f5d0 */
  push32(0x1290f19fu); f_1290f5d0();
  /* 1290f19f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f1a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1290f1a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1290f1a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1290f1aa push ecx */
  push32((uint32_t)(ECX));
  /* 1290f1ab mov edx, dword ptr [0x1292e6f8] */
  EDX = (r32((uint32_t)(0x1292e6f8)));
  /* 1290f1b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290f1b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f1b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1290f1bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f1c1 push edx */
  push32((uint32_t)(EDX));
  /* 1290f1c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290f1c5 push eax */
  push32((uint32_t)(EAX));
  /* 1290f1c6 call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290f1ccu);
  /* 1290f1cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f1ce jne 0x1290f1e1 */
  if (!C.zf) goto L_1290f1e1;
  /* 1290f1d0 mov dword ptr [0x1292e70c], 0 */
  w32((uint32_t)(0x1292e70c), (0x0u));
  /* 1290f1da mov eax, 1 */
  EAX = (0x1u);
  /* 1290f1df jmp 0x1290f236 */
  goto L_1290f236;
L_1290f1e1:;
  /* 1290f1e1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1290f1e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1290f1e5 mov edx, dword ptr [0x1292e708] */
  EDX = (r32((uint32_t)(0x1292e708)));
  /* 1290f1eb push edx */
  push32((uint32_t)(EDX));
  /* 1290f1ec call 0x12911210 */
  push32(0x1290f1f1u); f_12911210();
  /* 1290f1f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f1f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f1f6 jne 0x1290f229 */
  if (!C.zf) goto L_1290f229;
  /* 1290f1f8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290f1fb push eax */
  push32((uint32_t)(EAX));
  /* 1290f1fc call 0x1290f310 */
  push32(0x1290f201u); f_1290f310();
  /* 1290f201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f206 je 0x1290f229 */
  if (C.zf) goto L_1290f229;
  /* 1290f208 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1290f20b mov dword ptr [0x1292e710], ecx */
  w32((uint32_t)(0x1292e710), (ECX));
  /* 1290f211 mov edx, dword ptr [0x1292e710] */
  EDX = (r32((uint32_t)(0x1292e710)));
  /* 1290f217 mov dword ptr [0x1292e6f4], edx */
  w32((uint32_t)(0x1292e6f4), (EDX));
  /* 1290f21d mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290f222 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1290f224 mov dword ptr [0x1292e70c], eax */
  w32((uint32_t)(0x1292e70c), (EAX));
L_1290f229:;
  /* 1290f229 mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290f22e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1290f231 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1290f233 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f235 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1290f236:;
  /* 1290f236 mov esp, ebp */
  ESP = (EBP);
  /* 1290f238 pop ebp */
  EBP = (pop32());
  /* 1290f239 ret 4 */
  ESPCHK(0x1290f190u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f240 @ 0x1290f240 (43 bytes, 11 insns) */
void f_1290f240(void) {
  FTRACE(0x1290f240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f240 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f241 mov ebp, esp */
  EBP = (ESP);
  /* 1290f243 mov eax, dword ptr [0x1292e70c] */
  EAX = (r32((uint32_t)(0x1292e70c)));
  /* 1290f248 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1290f24d mov dword ptr [0x1292e70c], eax */
  w32((uint32_t)(0x1292e70c), (EAX));
  /* 1290f252 call dword ptr [0x12930248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930248))), 0x1290f258u);
  /* 1290f258 mov dword ptr [0x1292e710], eax */
  w32((uint32_t)(0x1292e710), (EAX));
  /* 1290f25d mov ecx, dword ptr [0x1292e710] */
  ECX = (r32((uint32_t)(0x1292e710)));
  /* 1290f263 mov dword ptr [0x1292e6f4], ecx */
  w32((uint32_t)(0x1292e6f4), (ECX));
  /* 1290f269 pop ebp */
  EBP = (pop32());
  /* 1290f26a ret  */
  ESPCHK(0x1290f240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f270 @ 0x1290f270 (155 bytes, 57 insns) */
void f_1290f270(void) {
  FTRACE(0x1290f270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f270 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f271 mov ebp, esp */
  EBP = (ESP);
  /* 1290f273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f276 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f27a je 0x1290f29b */
  if (C.zf) goto L_1290f29b;
  /* 1290f27c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f27f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1290f282 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290f284 je 0x1290f29b */
  if (C.zf) goto L_1290f29b;
  /* 1290f286 push 0x1292a6a4 */
  push32((uint32_t)(0x1292a6a4u));
  /* 1290f28b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f28e push edx */
  push32((uint32_t)(EDX));
  /* 1290f28f call 0x1290e7d0 */
  push32(0x1290f294u); f_1290e7d0();
  /* 1290f294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f299 jne 0x1290f2c3 */
  if (!C.zf) goto L_1290f2c3;
L_1290f29b:;
  /* 1290f29b push 8 */
  push32((uint32_t)(0x8u));
  /* 1290f29d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1290f2a0 push eax */
  push32((uint32_t)(EAX));
  /* 1290f2a1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1290f2a6 mov ecx, dword ptr [0x1292e710] */
  ECX = (r32((uint32_t)(0x1292e710)));
  /* 1290f2ac push ecx */
  push32((uint32_t)(ECX));
  /* 1290f2ad call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290f2b3u);
  /* 1290f2b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f2b5 jne 0x1290f2bb */
  if (!C.zf) goto L_1290f2bb;
  /* 1290f2b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290f2b9 jmp 0x1290f307 */
  goto L_1290f307;
L_1290f2bb:;
  /* 1290f2bb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1290f2be mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1290f2c1 jmp 0x1290f2fb */
  goto L_1290f2fb;
L_1290f2c3:;
  /* 1290f2c3 push 0x1292a6a0 */
  push32((uint32_t)(0x1292a6a0u));
  /* 1290f2c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f2cb push eax */
  push32((uint32_t)(EAX));
  /* 1290f2cc call 0x1290e7d0 */
  push32(0x1290f2d1u); f_1290e7d0();
  /* 1290f2d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f2d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f2d6 jne 0x1290f2fb */
  if (!C.zf) goto L_1290f2fb;
  /* 1290f2d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 1290f2da lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1290f2dd push ecx */
  push32((uint32_t)(ECX));
  /* 1290f2de push 0xb */
  push32((uint32_t)(0xbu));
  /* 1290f2e0 mov edx, dword ptr [0x1292e710] */
  EDX = (r32((uint32_t)(0x1292e710)));
  /* 1290f2e6 push edx */
  push32((uint32_t)(EDX));
  /* 1290f2e7 call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290f2edu);
  /* 1290f2ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f2ef jne 0x1290f2f5 */
  if (!C.zf) goto L_1290f2f5;
  /* 1290f2f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290f2f3 jmp 0x1290f307 */
  goto L_1290f307;
L_1290f2f5:;
  /* 1290f2f5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1290f2f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1290f2fb:;
  /* 1290f2fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f2fe push ecx */
  push32((uint32_t)(ECX));
  /* 1290f2ff call 0x129113f0 */
  push32(0x1290f304u); f_129113f0();
  /* 1290f304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1290f307:;
  /* 1290f307 mov esp, ebp */
  ESP = (EBP);
  /* 1290f309 pop ebp */
  EBP = (pop32());
  /* 1290f30a ret  */
  ESPCHK(0x1290f270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f310 @ 0x1290f310 (79 bytes, 26 insns) */
void f_1290f310(void) {
  FTRACE(0x1290f310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f310 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f311 mov ebp, esp */
  EBP = (ESP);
  /* 1290f313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f316 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1290f31a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1290f31e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290f325 jmp 0x1290f330 */
  goto L_1290f330;
L_1290f327:;
  /* 1290f327 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290f32a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f32d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1290f330:;
  /* 1290f330 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f334 jae 0x1290f356 */
  if (!C.cf) goto L_1290f356;
  /* 1290f336 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290f339 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1290f33f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290f342 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1290f344 mov cx, word ptr [eax*2 + 0x1292d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1292d9c4)));
  /* 1290f34c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f34e jne 0x1290f354 */
  if (!C.zf) goto L_1290f354;
  /* 1290f350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290f352 jmp 0x1290f35b */
  goto L_1290f35b;
L_1290f354:;
  /* 1290f354 jmp 0x1290f327 */
  goto L_1290f327;
L_1290f356:;
  /* 1290f356 mov eax, 1 */
  EAX = (0x1u);
L_1290f35b:;
  /* 1290f35b mov esp, ebp */
  ESP = (EBP);
  /* 1290f35d pop ebp */
  EBP = (pop32());
  /* 1290f35e ret  */
  ESPCHK(0x1290f310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f360 @ 0x1290f360 (135 bytes, 48 insns) */
void f_1290f360(void) {
  FTRACE(0x1290f360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f360 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f361 mov ebp, esp */
  EBP = (ESP);
  /* 1290f363 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f366 push esi */
  push32((uint32_t)(ESI));
  /* 1290f367 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f36a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290f36f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290f374 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290f379 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1290f37c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290f381 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290f384 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1290f386 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1290f389 push ecx */
  push32((uint32_t)(ECX));
  /* 1290f38a push 1 */
  push32((uint32_t)(0x1u));
  /* 1290f38c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290f38f push edx */
  push32((uint32_t)(EDX));
  /* 1290f390 call dword ptr [0x1292e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x1292e714))), 0x1290f396u);
  /* 1290f396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f398 jne 0x1290f39e */
  if (!C.zf) goto L_1290f39e;
  /* 1290f39a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290f39c jmp 0x1290f3e2 */
  goto L_1290f3e2;
L_1290f39e:;
  /* 1290f39e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1290f3a1 push eax */
  push32((uint32_t)(EAX));
  /* 1290f3a2 call 0x1290f5d0 */
  push32(0x1290f3a7u); f_1290f5d0();
  /* 1290f3a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f3aa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f3ad je 0x1290f3dd */
  if (C.zf) goto L_1290f3dd;
  /* 1290f3af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f3b3 je 0x1290f3dd */
  if (C.zf) goto L_1290f3dd;
  /* 1290f3b5 mov ecx, dword ptr [0x1292e704] */
  ECX = (r32((uint32_t)(0x1292e704)));
  /* 1290f3bb push ecx */
  push32((uint32_t)(ECX));
  /* 1290f3bc call 0x1290f650 */
  push32(0x1290f3c1u); f_1290f650();
  /* 1290f3c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f3c4 mov esi, eax */
  ESI = (EAX);
  /* 1290f3c6 mov edx, dword ptr [0x1292e704] */
  EDX = (r32((uint32_t)(0x1292e704)));
  /* 1290f3cc push edx */
  push32((uint32_t)(EDX));
  /* 1290f3cd call 0x12905970 */
  push32(0x1290f3d2u); f_12905970();
  /* 1290f3d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f3d5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f3d7 jne 0x1290f3dd */
  if (!C.zf) goto L_1290f3dd;
  /* 1290f3d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1290f3db jmp 0x1290f3e2 */
  goto L_1290f3e2;
L_1290f3dd:;
  /* 1290f3dd mov eax, 1 */
  EAX = (0x1u);
L_1290f3e2:;
  /* 1290f3e2 pop esi */
  ESI = (pop32());
  /* 1290f3e3 mov esp, ebp */
  ESP = (EBP);
  /* 1290f3e5 pop ebp */
  EBP = (pop32());
  /* 1290f3e6 ret  */
  ESPCHK(0x1290f360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3f0 @ 0x1290f3f0 (77 bytes, 18 insns) */
void f_1290f3f0(void) {
  FTRACE(0x1290f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1290f3f3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f3f9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1290f403 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1290f409 push eax */
  push32((uint32_t)(EAX));
  /* 1290f40a call dword ptr [0x12930244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930244))), 0x1290f410u);
  /* 1290f410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1290f412 je 0x1290f429 */
  if (C.zf) goto L_1290f429;
  /* 1290f414 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f41b jne 0x1290f429 */
  if (!C.zf) goto L_1290f429;
  /* 1290f41d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1290f427 jmp 0x1290f433 */
  goto L_1290f433;
L_1290f429:;
  /* 1290f429 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1290f433:;
  /* 1290f433 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1290f439 mov esp, ebp */
  ESP = (EBP);
  /* 1290f43b pop ebp */
  EBP = (pop32());
  /* 1290f43c ret  */
  ESPCHK(0x1290f3f0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1290f440 (388 bytes, 118 insns) */
void f_1290f440(void) {
  FTRACE(0x1290f440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f440 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f441 mov ebp, esp */
  EBP = (ESP);
  /* 1290f443 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f446 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1290f44d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1290f454 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1290f45b:;
  /* 1290f45b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f45e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f461 jg 0x1290f5a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_1290f5a8;
  /* 1290f467 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1290f46a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f46d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1290f46e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f470 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1290f472 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1290f475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f478 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f47b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f47e cmp edx, dword ptr [ecx + 0x1292d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1292d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f484 jne 0x1290f57e */
  if (!C.zf) goto L_1290f57e;
  /* 1290f48a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290f48d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1290f490 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f494 ja 0x1290f4b7 */
  if ((!C.cf&&!C.zf)) goto L_1290f4b7;
  /* 1290f496 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f49a je 0x1290f529 */
  if (C.zf) goto L_1290f529;
  /* 1290f4a0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f4a4 je 0x1290f4d4 */
  if (C.zf) goto L_1290f4d4;
  /* 1290f4a6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f4aa je 0x1290f4f6 */
  if (C.zf) goto L_1290f4f6;
  /* 1290f4ac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f4b0 je 0x1290f518 */
  if (C.zf) goto L_1290f518;
  /* 1290f4b2 jmp 0x1290f548 */
  goto L_1290f548;
L_1290f4b7:;
  /* 1290f4b7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f4be je 0x1290f4e5 */
  if (C.zf) goto L_1290f4e5;
  /* 1290f4c0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f4c7 je 0x1290f507 */
  if (C.zf) goto L_1290f507;
  /* 1290f4c9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f4d0 je 0x1290f53a */
  if (C.zf) goto L_1290f53a;
  /* 1290f4d2 jmp 0x1290f548 */
  goto L_1290f548;
L_1290f4d4:;
  /* 1290f4d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f4d7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f4da add ecx, 0x1292d524 */
  { uint32_t _a=(ECX),_b=(0x1292d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f4e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290f4e3 jmp 0x1290f548 */
  goto L_1290f548;
L_1290f4e5:;
  /* 1290f4e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f4e8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f4eb mov eax, dword ptr [edx + 0x1292d52c] */
  EAX = (r32((uint32_t)(EDX + 0x1292d52c)));
  /* 1290f4f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290f4f4 jmp 0x1290f548 */
  goto L_1290f548;
L_1290f4f6:;
  /* 1290f4f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f4f9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f4fc add ecx, 0x1292d530 */
  { uint32_t _a=(ECX),_b=(0x1292d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f502 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290f505 jmp 0x1290f548 */
  goto L_1290f548;
L_1290f507:;
  /* 1290f507 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f50a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f50d mov eax, dword ptr [edx + 0x1292d534] */
  EAX = (r32((uint32_t)(EDX + 0x1292d534)));
  /* 1290f513 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1290f516 jmp 0x1290f548 */
  goto L_1290f548;
L_1290f518:;
  /* 1290f518 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f51b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f51e add ecx, 0x1292d538 */
  { uint32_t _a=(ECX),_b=(0x1292d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f524 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290f527 jmp 0x1290f548 */
  goto L_1290f548;
L_1290f529:;
  /* 1290f529 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f52c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f52f add edx, 0x1292d53c */
  { uint32_t _a=(EDX),_b=(0x1292d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f535 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1290f538 jmp 0x1290f548 */
  goto L_1290f548;
L_1290f53a:;
  /* 1290f53a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f53d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f540 add eax, 0x1292d544 */
  { uint32_t _a=(EAX),_b=(0x1292d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f545 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1290f548:;
  /* 1290f548 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f54c je 0x1290f554 */
  if (C.zf) goto L_1290f554;
  /* 1290f54e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f552 jge 0x1290f556 */
  if ((C.sf==C.of)) goto L_1290f556;
L_1290f554:;
  /* 1290f554 jmp 0x1290f5a8 */
  goto L_1290f5a8;
L_1290f556:;
  /* 1290f556 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290f559 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f55c push ecx */
  push32((uint32_t)(ECX));
  /* 1290f55d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290f560 push edx */
  push32((uint32_t)(EDX));
  /* 1290f561 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290f564 push eax */
  push32((uint32_t)(EAX));
  /* 1290f565 call 0x12906360 */
  push32(0x1290f56au); f_12906360();
  /* 1290f56a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f56d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290f570 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f573 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1290f577 mov eax, 1 */
  EAX = (0x1u);
  /* 1290f57c jmp 0x1290f5be */
  goto L_1290f5be;
L_1290f57e:;
  /* 1290f57e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f581 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f587 cmp eax, dword ptr [edx + 0x1292d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1292d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f58d jae 0x1290f59a */
  if (!C.cf) goto L_1290f59a;
  /* 1290f58f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f592 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f595 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1290f598 jmp 0x1290f5a3 */
  goto L_1290f5a3;
L_1290f59a:;
  /* 1290f59a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1290f59d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f5a0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1290f5a3:;
  /* 1290f5a3 jmp 0x1290f45b */
  goto L_1290f45b;
L_1290f5a8:;
  /* 1290f5a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1290f5ab push eax */
  push32((uint32_t)(EAX));
  /* 1290f5ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1290f5af push ecx */
  push32((uint32_t)(ECX));
  /* 1290f5b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1290f5b3 push edx */
  push32((uint32_t)(EDX));
  /* 1290f5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f5b7 push eax */
  push32((uint32_t)(EAX));
  /* 1290f5b8 call dword ptr [0x12930250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12930250))), 0x1290f5beu);
L_1290f5be:;
  /* 1290f5be mov esp, ebp */
  ESP = (EBP);
  /* 1290f5c0 pop ebp */
  EBP = (pop32());
  /* 1290f5c1 ret 0x10 */
  ESPCHK(0x1290f440u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f5d0 @ 0x1290f5d0 (118 bytes, 42 insns) */
void f_1290f5d0(void) {
  FTRACE(0x1290f5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f5d1 mov ebp, esp */
  EBP = (ESP);
  /* 1290f5d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f5d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1290f5dd:;
  /* 1290f5dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f5e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1290f5e2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1290f5e5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290f5e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f5ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f5ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1290f5f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1290f5f4 je 0x1290f63f */
  if (C.zf) goto L_1290f63f;
  /* 1290f5f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290f5fa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f5fd jl 0x1290f612 */
  if ((C.sf!=C.of)) goto L_1290f612;
  /* 1290f5ff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290f603 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f606 jg 0x1290f612 */
  if ((!C.zf&&C.sf==C.of)) goto L_1290f612;
  /* 1290f608 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1290f60b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1290f60d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1290f610 jmp 0x1290f62c */
  goto L_1290f62c;
L_1290f612:;
  /* 1290f612 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290f616 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f619 jl 0x1290f62c */
  if ((C.sf!=C.of)) goto L_1290f62c;
  /* 1290f61b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290f61f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f622 jg 0x1290f62c */
  if ((!C.zf&&C.sf==C.of)) goto L_1290f62c;
  /* 1290f624 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1290f627 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1290f629 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1290f62c:;
  /* 1290f62c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290f62f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1290f632 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1290f636 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1290f63a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290f63d jmp 0x1290f5dd */
  goto L_1290f5dd;
L_1290f63f:;
  /* 1290f63f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1290f642 mov esp, ebp */
  ESP = (EBP);
  /* 1290f644 pop ebp */
  EBP = (pop32());
  /* 1290f645 ret  */
  ESPCHK(0x1290f5d0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x1290f650 (101 bytes, 36 insns) */
void f_1290f650(void) {
  FTRACE(0x1290f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f650 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f651 mov ebp, esp */
  EBP = (ESP);
  /* 1290f653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1290f656 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1290f65d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f660 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1290f662 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1290f665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f668 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f66b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1290f66e:;
  /* 1290f66e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1290f672 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f675 jl 0x1290f680 */
  if ((C.sf!=C.of)) goto L_1290f680;
  /* 1290f677 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1290f67b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f67e jle 0x1290f692 */
  if ((C.zf||C.sf!=C.of)) goto L_1290f692;
L_1290f680:;
  /* 1290f680 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1290f684 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f687 jl 0x1290f6ae */
  if ((C.sf!=C.of)) goto L_1290f6ae;
  /* 1290f689 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1290f68d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f690 jg 0x1290f6ae */
  if ((!C.zf&&C.sf==C.of)) goto L_1290f6ae;
L_1290f692:;
  /* 1290f692 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290f695 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f698 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1290f69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f69e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1290f6a0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1290f6a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f6a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f6a9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1290f6ac jmp 0x1290f66e */
  goto L_1290f66e;
L_1290f6ae:;
  /* 1290f6ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1290f6b1 mov esp, ebp */
  ESP = (EBP);
  /* 1290f6b3 pop ebp */
  EBP = (pop32());
  /* 1290f6b4 ret  */
  ESPCHK(0x1290f650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6c0 @ 0x1290f6c0 (122 bytes, 39 insns) */
void f_1290f6c0(void) {
  FTRACE(0x1290f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1290f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1290f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1290f6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1290f6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f6c7 cmp eax, dword ptr [0x1292ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1292ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1290f6cd jae 0x1290f6f1 */
  if (!C.cf) goto L_1290f6f1;
  /* 1290f6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f6d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1290f6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f6d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1290f6db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1290f6de mov eax, dword ptr [ecx*4 + 0x1292fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1292fe60)));
  /* 1290f6e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1290f6ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1290f6ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1290f6ef jne 0x1290f70c */
  if (!C.zf) goto L_1290f70c;
L_1290f6f1:;
  /* 1290f6f1 call 0x1290aa10 */
  push32(0x1290f6f6u); f_1290aa10();
  /* 1290f6f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1290f6fc call 0x1290aa20 */
  push32(0x1290f701u); f_1290aa20();
  /* 1290f701 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1290f707 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1290f70a jmp 0x1290f736 */
  goto L_1290f736;
L_1290f70c:;
  /* 1290f70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f70f push edx */
  push32((uint32_t)(EDX));
  /* 1290f710 call 0x1290c230 */
  push32(0x1290f715u); f_1290c230();
  /* 1290f715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f718 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f71b push eax */
  push32((uint32_t)(EAX));
  /* 1290f71c call 0x1290f740 */
  push32(0x1290f721u); f_1290f740();
  /* 1290f721 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f724 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1290f727 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1290f72a push ecx */
  push32((uint32_t)(ECX));
  /* 1290f72b call 0x1290c2c0 */
  push32(0x1290f730u); f_1290c2c0();
  /* 1290f730 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1290f733 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1290f736:;
  /* 1290f736 mov esp, ebp */
  ESP = (EBP);
  /* 1290f738 pop ebp */
  EBP = (pop32());
  /* 1290f739 ret  */
  ESPCHK(0x1290f6c0u, _esp0);
  ESP += 4; return;
}

