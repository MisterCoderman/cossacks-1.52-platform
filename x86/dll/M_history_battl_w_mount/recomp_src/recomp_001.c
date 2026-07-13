#include "recomp.h"

/* FUN_10006a10 @ 0x12c46a10 (10 bytes, 5 insns) */
void f_12c46a10(void) {
  FTRACE(0x12c46a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46a11 mov ebp, esp */
  EBP = (ESP);
  /* 12c46a13 mov eax, 1 */
  EAX = (0x1u);
  /* 12c46a18 pop ebp */
  EBP = (pop32());
  /* 12c46a19 ret  */
  ESPCHK(0x12c46a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x12c46a20 (173 bytes, 59 insns) */
void f_12c46a20(void) {
  FTRACE(0x12c46a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46a21 mov ebp, esp */
  EBP = (ESP);
  /* 12c46a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46a26 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46a2a jbe 0x12c46a33 */
  if ((C.cf||C.zf)) goto L_12c46a33;
  /* 12c46a2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c46a2e jmp 0x12c46ac9 */
  goto L_12c46ac9;
L_12c46a33:;
  /* 12c46a33 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46a35 call 0x12c46550 */
  push32(0x12c46a3au); f_12c46550();
  /* 12c46a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46a3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46a40 push eax */
  push32((uint32_t)(EAX));
  /* 12c46a41 call 0x12c46e50 */
  push32(0x12c46a46u); f_12c46e50();
  /* 12c46a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46a49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c46a4c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46a50 je 0x12c46a91 */
  if (C.zf) goto L_12c46a91;
  /* 12c46a52 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c46a59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46a5c cmp ecx, dword ptr [0x12c6cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46a62 ja 0x12c46a82 */
  if ((!C.cf&&!C.zf)) goto L_12c46a82;
  /* 12c46a64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46a67 push edx */
  push32((uint32_t)(EDX));
  /* 12c46a68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46a6b push eax */
  push32((uint32_t)(EAX));
  /* 12c46a6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46a6f push ecx */
  push32((uint32_t)(ECX));
  /* 12c46a70 call 0x12c47d20 */
  push32(0x12c46a75u); f_12c47d20();
  /* 12c46a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c46a7a je 0x12c46a82 */
  if (C.zf) goto L_12c46a82;
  /* 12c46a7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46a7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c46a82:;
  /* 12c46a82 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46a84 call 0x12c465f0 */
  push32(0x12c46a89u); f_12c465f0();
  /* 12c46a89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46a8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46a8f jmp 0x12c46ac9 */
  goto L_12c46ac9;
L_12c46a91:;
  /* 12c46a91 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46a93 call 0x12c465f0 */
  push32(0x12c46a98u); f_12c465f0();
  /* 12c46a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46a9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46a9f jne 0x12c46aa8 */
  if (!C.zf) goto L_12c46aa8;
  /* 12c46aa1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12c46aa8:;
  /* 12c46aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46aab add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46aae and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12c46ab0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c46ab3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46aba push edx */
  push32((uint32_t)(EDX));
  /* 12c46abb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c46abd mov eax, dword ptr [0x12c6fe2c] */
  EAX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c46ac2 push eax */
  push32((uint32_t)(EAX));
  /* 12c46ac3 call dword ptr [0x12c702cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702cc))), 0x12c46ac9u);
L_12c46ac9:;
  /* 12c46ac9 mov esp, ebp */
  ESP = (EBP);
  /* 12c46acb pop ebp */
  EBP = (pop32());
  /* 12c46acc ret  */
  ESPCHK(0x12c46a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x12c46ad0 (490 bytes, 165 insns) */
void f_12c46ad0(void) {
  FTRACE(0x12c46ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12c46ad3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46ad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46ada jne 0x12c46aed */
  if (!C.zf) goto L_12c46aed;
  /* 12c46adc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46adf push eax */
  push32((uint32_t)(EAX));
  /* 12c46ae0 call 0x12c46920 */
  push32(0x12c46ae5u); f_12c46920();
  /* 12c46ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46ae8 jmp 0x12c46cb6 */
  goto L_12c46cb6;
L_12c46aed:;
  /* 12c46aed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46af1 jne 0x12c46b06 */
  if (!C.zf) goto L_12c46b06;
  /* 12c46af3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46af6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46af7 call 0x12c46cc0 */
  push32(0x12c46afcu); f_12c46cc0();
  /* 12c46afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46aff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c46b01 jmp 0x12c46cb6 */
  goto L_12c46cb6;
L_12c46b06:;
  /* 12c46b06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c46b0d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46b11 ja 0x12c46c89 */
  if ((!C.cf&&!C.zf)) goto L_12c46c89;
  /* 12c46b17 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46b19 call 0x12c46550 */
  push32(0x12c46b1eu); f_12c46550();
  /* 12c46b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46b24 push edx */
  push32((uint32_t)(EDX));
  /* 12c46b25 call 0x12c46e50 */
  push32(0x12c46b2au); f_12c46e50();
  /* 12c46b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46b2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c46b30 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46b34 je 0x12c46c4c */
  if (C.zf) goto L_12c46c4c;
  /* 12c46b3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46b3d cmp eax, dword ptr [0x12c6cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46b43 ja 0x12c46bc0 */
  if ((!C.cf&&!C.zf)) goto L_12c46bc0;
  /* 12c46b45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46b48 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46b4c push edx */
  push32((uint32_t)(EDX));
  /* 12c46b4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c46b50 push eax */
  push32((uint32_t)(EAX));
  /* 12c46b51 call 0x12c47d20 */
  push32(0x12c46b56u); f_12c47d20();
  /* 12c46b56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c46b5b je 0x12c46b65 */
  if (C.zf) goto L_12c46b65;
  /* 12c46b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46b60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c46b63 jmp 0x12c46bc0 */
  goto L_12c46bc0;
L_12c46b65:;
  /* 12c46b65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46b68 push edx */
  push32((uint32_t)(EDX));
  /* 12c46b69 call 0x12c474e0 */
  push32(0x12c46b6eu); f_12c474e0();
  /* 12c46b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46b71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c46b74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46b78 je 0x12c46bc0 */
  if (C.zf) goto L_12c46bc0;
  /* 12c46b7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46b7d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12c46b80 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46b83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c46b86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46b89 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46b8c jae 0x12c46b96 */
  if (!C.cf) goto L_12c46b96;
  /* 12c46b8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46b91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c46b94 jmp 0x12c46b9c */
  goto L_12c46b9c;
L_12c46b96:;
  /* 12c46b96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46b99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c46b9c:;
  /* 12c46b9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c46b9f push edx */
  push32((uint32_t)(EDX));
  /* 12c46ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46ba3 push eax */
  push32((uint32_t)(EAX));
  /* 12c46ba4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46ba8 call 0x12c49430 */
  push32(0x12c46badu); f_12c49430();
  /* 12c46bad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46bb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46bb3 push edx */
  push32((uint32_t)(EDX));
  /* 12c46bb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c46bb7 push eax */
  push32((uint32_t)(EAX));
  /* 12c46bb8 call 0x12c46f10 */
  push32(0x12c46bbdu); f_12c46f10();
  /* 12c46bbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c46bc0:;
  /* 12c46bc0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46bc4 jne 0x12c46c40 */
  if (!C.zf) goto L_12c46c40;
  /* 12c46bc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46bca jne 0x12c46bd3 */
  if (!C.zf) goto L_12c46bd3;
  /* 12c46bcc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12c46bd3:;
  /* 12c46bd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46bd6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46bd9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12c46bdc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c46bdf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46be2 push edx */
  push32((uint32_t)(EDX));
  /* 12c46be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c46be5 mov eax, dword ptr [0x12c6fe2c] */
  EAX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c46bea push eax */
  push32((uint32_t)(EAX));
  /* 12c46beb call dword ptr [0x12c70304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70304))), 0x12c46bf1u);
  /* 12c46bf1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c46bf4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46bf8 je 0x12c46c40 */
  if (C.zf) goto L_12c46c40;
  /* 12c46bfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46bfd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c46c00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46c03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c46c06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46c09 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46c0c jae 0x12c46c16 */
  if (!C.cf) goto L_12c46c16;
  /* 12c46c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46c11 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c46c14 jmp 0x12c46c1c */
  goto L_12c46c1c;
L_12c46c16:;
  /* 12c46c16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46c19 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12c46c1c:;
  /* 12c46c1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c46c1f push eax */
  push32((uint32_t)(EAX));
  /* 12c46c20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46c24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46c27 push edx */
  push32((uint32_t)(EDX));
  /* 12c46c28 call 0x12c49430 */
  push32(0x12c46c2du); f_12c49430();
  /* 12c46c2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46c33 push eax */
  push32((uint32_t)(EAX));
  /* 12c46c34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c46c37 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46c38 call 0x12c46f10 */
  push32(0x12c46c3du); f_12c46f10();
  /* 12c46c3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c46c40:;
  /* 12c46c40 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46c42 call 0x12c465f0 */
  push32(0x12c46c47u); f_12c465f0();
  /* 12c46c47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46c4a jmp 0x12c46c89 */
  goto L_12c46c89;
L_12c46c4c:;
  /* 12c46c4c push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46c4e call 0x12c465f0 */
  push32(0x12c46c53u); f_12c465f0();
  /* 12c46c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46c56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46c5a jne 0x12c46c63 */
  if (!C.zf) goto L_12c46c63;
  /* 12c46c5c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12c46c63:;
  /* 12c46c63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46c66 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46c69 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12c46c6c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12c46c6f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46c72 push eax */
  push32((uint32_t)(EAX));
  /* 12c46c73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46c76 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c46c79 mov edx, dword ptr [0x12c6fe2c] */
  EDX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c46c7f push edx */
  push32((uint32_t)(EDX));
  /* 12c46c80 call dword ptr [0x12c702cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702cc))), 0x12c46c86u);
  /* 12c46c86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c46c89:;
  /* 12c46c89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46c8d jne 0x12c46c98 */
  if (!C.zf) goto L_12c46c98;
  /* 12c46c8f cmp dword ptr [0x12c6e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46c96 jne 0x12c46c9d */
  if (!C.zf) goto L_12c46c9d;
L_12c46c98:;
  /* 12c46c98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46c9b jmp 0x12c46cb6 */
  goto L_12c46cb6;
L_12c46c9d:;
  /* 12c46c9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46ca0 push eax */
  push32((uint32_t)(EAX));
  /* 12c46ca1 call 0x12c46890 */
  push32(0x12c46ca6u); f_12c46890();
  /* 12c46ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c46cab jne 0x12c46cb1 */
  if (!C.zf) goto L_12c46cb1;
  /* 12c46cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c46caf jmp 0x12c46cb6 */
  goto L_12c46cb6;
L_12c46cb1:;
  /* 12c46cb1 jmp 0x12c46b06 */
  goto L_12c46b06;
L_12c46cb6:;
  /* 12c46cb6 mov esp, ebp */
  ESP = (EBP);
  /* 12c46cb8 pop ebp */
  EBP = (pop32());
  /* 12c46cb9 ret  */
  ESPCHK(0x12c46ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x12c46cc0 (104 bytes, 38 insns) */
void f_12c46cc0(void) {
  FTRACE(0x12c46cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12c46cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46cc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46cc8 jne 0x12c46ccc */
  if (!C.zf) goto L_12c46ccc;
  /* 12c46cca jmp 0x12c46d24 */
  goto L_12c46d24;
L_12c46ccc:;
  /* 12c46ccc push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46cce call 0x12c46550 */
  push32(0x12c46cd3u); f_12c46550();
  /* 12c46cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46cd9 push eax */
  push32((uint32_t)(EAX));
  /* 12c46cda call 0x12c46e50 */
  push32(0x12c46cdfu); f_12c46e50();
  /* 12c46cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46ce2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c46ce5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46ce9 je 0x12c46d07 */
  if (C.zf) goto L_12c46d07;
  /* 12c46ceb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46cee push ecx */
  push32((uint32_t)(ECX));
  /* 12c46cef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46cf2 push edx */
  push32((uint32_t)(EDX));
  /* 12c46cf3 call 0x12c46f10 */
  push32(0x12c46cf8u); f_12c46f10();
  /* 12c46cf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46cfb push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46cfd call 0x12c465f0 */
  push32(0x12c46d02u); f_12c465f0();
  /* 12c46d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46d05 jmp 0x12c46d24 */
  goto L_12c46d24;
L_12c46d07:;
  /* 12c46d07 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46d09 call 0x12c465f0 */
  push32(0x12c46d0eu); f_12c465f0();
  /* 12c46d0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46d14 push eax */
  push32((uint32_t)(EAX));
  /* 12c46d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c46d17 mov ecx, dword ptr [0x12c6fe2c] */
  ECX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c46d1d push ecx */
  push32((uint32_t)(ECX));
  /* 12c46d1e call dword ptr [0x12c702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e4))), 0x12c46d24u);
L_12c46d24:;
  /* 12c46d24 mov esp, ebp */
  ESP = (EBP);
  /* 12c46d26 pop ebp */
  EBP = (pop32());
  /* 12c46d27 ret  */
  ESPCHK(0x12c46cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d30 @ 0x12c46d30 (116 bytes, 34 insns) */
void f_12c46d30(void) {
  FTRACE(0x12c46d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46d31 mov ebp, esp */
  EBP = (ESP);
  /* 12c46d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12c46d34 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12c46d3b push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46d3d call 0x12c46550 */
  push32(0x12c46d42u); f_12c46550();
  /* 12c46d42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46d45 call 0x12c48440 */
  push32(0x12c46d4au); f_12c48440();
  /* 12c46d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c46d4c jge 0x12c46d55 */
  if ((C.sf==C.of)) goto L_12c46d55;
  /* 12c46d4e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12c46d55:;
  /* 12c46d55 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c46d57 call 0x12c465f0 */
  push32(0x12c46d5cu); f_12c465f0();
  /* 12c46d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c46d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c46d63 mov eax, dword ptr [0x12c6fe2c] */
  EAX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c46d68 push eax */
  push32((uint32_t)(EAX));
  /* 12c46d69 call dword ptr [0x12c702c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702c4))), 0x12c46d6fu);
  /* 12c46d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c46d71 jne 0x12c46d9d */
  if (!C.zf) goto L_12c46d9d;
  /* 12c46d73 call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c46d79u);
  /* 12c46d79 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46d7c jne 0x12c46d96 */
  if (!C.zf) goto L_12c46d96;
  /* 12c46d7e call 0x12c4aa30 */
  push32(0x12c46d83u); f_12c4aa30();
  /* 12c46d83 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12c46d89 call 0x12c4aa20 */
  push32(0x12c46d8eu); f_12c4aa20();
  /* 12c46d8e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12c46d94 jmp 0x12c46d9d */
  goto L_12c46d9d;
L_12c46d96:;
  /* 12c46d96 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12c46d9d:;
  /* 12c46d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46da0 mov esp, ebp */
  ESP = (EBP);
  /* 12c46da2 pop ebp */
  EBP = (pop32());
  /* 12c46da3 ret  */
  ESPCHK(0x12c46d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x12c46db0 (10 bytes, 5 insns) */
void f_12c46db0(void) {
  FTRACE(0x12c46db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46db1 mov ebp, esp */
  EBP = (ESP);
  /* 12c46db3 call 0x12c46d30 */
  push32(0x12c46db8u); f_12c46d30();
  /* 12c46db8 pop ebp */
  EBP = (pop32());
  /* 12c46db9 ret  */
  ESPCHK(0x12c46db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x12c46dc0 (10 bytes, 5 insns) */
void f_12c46dc0(void) {
  FTRACE(0x12c46dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12c46dc3 mov eax, dword ptr [0x12c6cc94] */
  EAX = (r32((uint32_t)(0x12c6cc94)));
  /* 12c46dc8 pop ebp */
  EBP = (pop32());
  /* 12c46dc9 ret  */
  ESPCHK(0x12c46dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd0 @ 0x12c46dd0 (31 bytes, 11 insns) */
void f_12c46dd0(void) {
  FTRACE(0x12c46dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12c46dd3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46dda jbe 0x12c46de0 */
  if ((C.cf||C.zf)) goto L_12c46de0;
  /* 12c46ddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c46dde jmp 0x12c46ded */
  goto L_12c46ded;
L_12c46de0:;
  /* 12c46de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46de3 mov dword ptr [0x12c6cc94], eax */
  w32((uint32_t)(0x12c6cc94), (EAX));
  /* 12c46de8 mov eax, 1 */
  EAX = (0x1u);
L_12c46ded:;
  /* 12c46ded pop ebp */
  EBP = (pop32());
  /* 12c46dee ret  */
  ESPCHK(0x12c46dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006df0 @ 0x12c46df0 (89 bytes, 20 insns) */
void f_12c46df0(void) {
  FTRACE(0x12c46df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46df1 mov ebp, esp */
  EBP = (ESP);
  /* 12c46df3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12c46df8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c46dfa mov eax, dword ptr [0x12c6fe2c] */
  EAX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c46dff push eax */
  push32((uint32_t)(EAX));
  /* 12c46e00 call dword ptr [0x12c70304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70304))), 0x12c46e06u);
  /* 12c46e06 mov dword ptr [0x12c6fe28], eax */
  w32((uint32_t)(0x12c6fe28), (EAX));
  /* 12c46e0b cmp dword ptr [0x12c6fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46e12 jne 0x12c46e18 */
  if (!C.zf) goto L_12c46e18;
  /* 12c46e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c46e16 jmp 0x12c46e47 */
  goto L_12c46e47;
L_12c46e18:;
  /* 12c46e18 mov ecx, dword ptr [0x12c6fe28] */
  ECX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c46e1e mov dword ptr [0x12c6fe1c], ecx */
  w32((uint32_t)(0x12c6fe1c), (ECX));
  /* 12c46e24 mov dword ptr [0x12c6fe20], 0 */
  w32((uint32_t)(0x12c6fe20), (0x0u));
  /* 12c46e2e mov dword ptr [0x12c6fe24], 0 */
  w32((uint32_t)(0x12c6fe24), (0x0u));
  /* 12c46e38 mov dword ptr [0x12c6fe08], 0x10 */
  w32((uint32_t)(0x12c6fe08), (0x10u));
  /* 12c46e42 mov eax, 1 */
  EAX = (0x1u);
L_12c46e47:;
  /* 12c46e47 pop ebp */
  EBP = (pop32());
  /* 12c46e48 ret  */
  ESPCHK(0x12c46df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e50 @ 0x12c46e50 (85 bytes, 29 insns) */
void f_12c46e50(void) {
  FTRACE(0x12c46e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46e51 mov ebp, esp */
  EBP = (ESP);
  /* 12c46e53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46e56 mov eax, dword ptr [0x12c6fe24] */
  EAX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c46e5b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c46e5e mov ecx, dword ptr [0x12c6fe28] */
  ECX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c46e64 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46e66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c46e69 mov edx, dword ptr [0x12c6fe28] */
  EDX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c46e6f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c46e72:;
  /* 12c46e72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46e75 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46e78 jae 0x12c46e9f */
  if (!C.cf) goto L_12c46e9f;
  /* 12c46e7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46e7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46e80 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46e83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c46e86 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46e8d jae 0x12c46e94 */
  if (!C.cf) goto L_12c46e94;
  /* 12c46e8f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46e92 jmp 0x12c46ea1 */
  goto L_12c46ea1;
L_12c46e94:;
  /* 12c46e94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46e97 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46e9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c46e9d jmp 0x12c46e72 */
  goto L_12c46e72;
L_12c46e9f:;
  /* 12c46e9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c46ea1:;
  /* 12c46ea1 mov esp, ebp */
  ESP = (EBP);
  /* 12c46ea3 pop ebp */
  EBP = (pop32());
  /* 12c46ea4 ret  */
  ESPCHK(0x12c46e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eb0 @ 0x12c46eb0 (95 bytes, 33 insns) */
void f_12c46eb0(void) {
  FTRACE(0x12c46eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12c46eb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46eb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46ebc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46ebf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c46ec2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46ec5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12c46ec8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c46ecb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c46ed0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46ed3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c46ed5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46ed8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c46edb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c46edd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c46edf jne 0x12c46f01 */
  if (!C.zf) goto L_12c46f01;
  /* 12c46ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46ee4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12c46ee7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c46ee9 jne 0x12c46f01 */
  if (!C.zf) goto L_12c46f01;
  /* 12c46eeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c46eee and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c46ef4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c46ef6 je 0x12c46f01 */
  if (C.zf) goto L_12c46f01;
  /* 12c46ef8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12c46eff jmp 0x12c46f08 */
  goto L_12c46f08;
L_12c46f01:;
  /* 12c46f01 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12c46f08:;
  /* 12c46f08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c46f0b mov esp, ebp */
  ESP = (EBP);
  /* 12c46f0d pop ebp */
  EBP = (pop32());
  /* 12c46f0e ret  */
  ESPCHK(0x12c46eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f10 @ 0x12c46f10 (1485 bytes, 453 insns) */
void f_12c46f10(void) {
  FTRACE(0x12c46f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c46f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c46f11 mov ebp, esp */
  EBP = (ESP);
  /* 12c46f13 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46f19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c46f1c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12c46f1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c46f22 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46f25 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46f28 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c46f2b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c46f2e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12c46f31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c46f34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46f37 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c46f3d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c46f40 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12c46f47 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c46f4a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c46f4d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46f50 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c46f53 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c46f56 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c46f58 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46f5b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12c46f5e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c46f61 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46f64 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12c46f67 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c46f6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c46f6c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c46f6f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c46f72 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12c46f75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c46f78 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c46f7b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c46f7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c46f80 jne 0x12c470a8 */
  if (!C.zf) goto L_12c470a8;
  /* 12c46f86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c46f89 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c46f8c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c46f8f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c46f92 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46f96 jbe 0x12c46f9f */
  if ((C.cf||C.zf)) goto L_12c46f9f;
  /* 12c46f98 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12c46f9f:;
  /* 12c46f9f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c46fa2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c46fa5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c46fa8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46fab jne 0x12c47081 */
  if (!C.zf) goto L_12c47081;
  /* 12c46fb1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c46fb5 jae 0x12c47016 */
  if (!C.cf) goto L_12c47016;
  /* 12c46fb7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c46fbc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c46fbf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c46fc1 not eax */
  EAX = (~(EAX));
  /* 12c46fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46fc6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c46fc9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12c46fcd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c46fcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c46fd2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c46fd5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12c46fd9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c46fdc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46fdf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c46fe2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c46fe5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c46fe8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46feb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c46fee mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c46ff1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c46ff4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c46ff8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c46ffa jne 0x12c47014 */
  if (!C.zf) goto L_12c47014;
  /* 12c46ffc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c47001 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c47004 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c47006 not eax */
  EAX = (~(EAX));
  /* 12c47008 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4700b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4700d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4700f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47012 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c47014:;
  /* 12c47014 jmp 0x12c47081 */
  goto L_12c47081;
L_12c47016:;
  /* 12c47016 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c47019 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4701c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47021 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47023 not edx */
  EDX = (~(EDX));
  /* 12c47025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47028 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c4702b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12c47032 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c47034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47037 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c4703a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12c47041 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47044 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47047 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c4704a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c4704d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47050 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47053 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c47056 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47059 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4705c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c47060 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c47062 jne 0x12c47081 */
  if (!C.zf) goto L_12c47081;
  /* 12c47064 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c47067 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4706a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c4706f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47071 not edx */
  EDX = (~(EDX));
  /* 12c47073 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47076 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c47079 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4707b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4707e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12c47081:;
  /* 12c47081 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47084 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c47087 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c4708a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c4708d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c47090 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47093 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c47096 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47099 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c4709c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c4709f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c470a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c470a5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12c470a8:;
  /* 12c470a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c470ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c470ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c470b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c470b4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c470b8 jbe 0x12c470c1 */
  if ((C.cf||C.zf)) goto L_12c470c1;
  /* 12c470ba mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12c470c1:;
  /* 12c470c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c470c4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c470c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c470c9 jne 0x12c47225 */
  if (!C.zf) goto L_12c47225;
  /* 12c470cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c470d2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c470d5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12c470d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c470db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c470de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c470e1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12c470e4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c470e8 jbe 0x12c470f1 */
  if ((C.cf||C.zf)) goto L_12c470f1;
  /* 12c470ea mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12c470f1:;
  /* 12c470f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c470f4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c470f7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12c470fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c470fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c47100 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47103 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12c47106 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4710a jbe 0x12c47113 */
  if ((C.cf||C.zf)) goto L_12c47113;
  /* 12c4710c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12c47113:;
  /* 12c47113 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47116 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47119 je 0x12c4721f */
  if (C.zf) goto L_12c4721f;
  /* 12c4711f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c47122 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c47125 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c47128 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4712b jne 0x12c47201 */
  if (!C.zf) goto L_12c47201;
  /* 12c47131 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47135 jae 0x12c47196 */
  if (!C.cf) goto L_12c47196;
  /* 12c47137 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c4713c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4713f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47141 not edx */
  EDX = (~(EDX));
  /* 12c47143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47146 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47149 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c4714d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4714f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47152 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47155 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c47159 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c4715c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4715f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c47162 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c47165 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47168 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4716b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c4716e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47171 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47174 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c47178 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4717a jne 0x12c47194 */
  if (!C.zf) goto L_12c47194;
  /* 12c4717c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47181 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47184 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47186 not edx */
  EDX = (~(EDX));
  /* 12c47188 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4718b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4718d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4718f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47192 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c47194:;
  /* 12c47194 jmp 0x12c47201 */
  goto L_12c47201;
L_12c47196:;
  /* 12c47196 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47199 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4719c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c471a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c471a3 not eax */
  EAX = (~(EAX));
  /* 12c471a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c471a8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c471ab mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c471b2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c471b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c471b7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c471ba mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12c471c1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c471c4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c471c7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c471ca sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c471cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c471d0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c471d3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c471d6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c471d9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c471dc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c471e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c471e2 jne 0x12c47201 */
  if (!C.zf) goto L_12c47201;
  /* 12c471e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c471e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c471ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c471ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c471f1 not eax */
  EAX = (~(EAX));
  /* 12c471f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c471f6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c471f9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c471fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c471fe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c47201:;
  /* 12c47201 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c47204 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c47207 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c4720a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c4720d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c47210 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c47213 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c47216 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c47219 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c4721c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12c4721f:;
  /* 12c4721f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c47222 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12c47225:;
  /* 12c47225 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c47228 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4722b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4722d jne 0x12c4723b */
  if (!C.zf) goto L_12c4723b;
  /* 12c4722f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47232 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47235 je 0x12c4734b */
  if (C.zf) goto L_12c4734b;
L_12c4723b:;
  /* 12c4723b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4723e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c47241 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12c47244 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c47247 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4724a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4724d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c47250 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c47253 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c47256 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47259 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12c4725c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4725f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c47262 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12c47265 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c47268 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c4726b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4726e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c47271 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c47274 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c47277 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c4727a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4727d jne 0x12c4734b */
  if (!C.zf) goto L_12c4734b;
  /* 12c47283 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47287 jae 0x12c472e4 */
  if (!C.cf) goto L_12c472e4;
  /* 12c47289 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c4728c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4728f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c47293 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47296 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47299 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c4729c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c4729f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c472a2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c472a5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12c472a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c472aa jne 0x12c472c2 */
  if (!C.zf) goto L_12c472c2;
  /* 12c472ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c472b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c472b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c472b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c472b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c472bb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c472bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c472c0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c472c2:;
  /* 12c472c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c472c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c472ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c472cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c472cf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c472d2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12c472d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c472d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c472db mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c472de mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12c472e2 jmp 0x12c4734b */
  goto L_12c4734b;
L_12c472e4:;
  /* 12c472e4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c472e7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c472ea movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c472ee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c472f1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c472f4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c472f7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c472fa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c472fd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47300 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12c47303 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c47305 jne 0x12c47322 */
  if (!C.zf) goto L_12c47322;
  /* 12c47307 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4730a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4730d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47312 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47317 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c4731a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4731c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4731f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12c47322:;
  /* 12c47322 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47325 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47328 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c4732d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c4732f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47332 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47335 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c4733c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4733e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47341 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12c47344 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12c4734b:;
  /* 12c4734b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4734e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47351 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c47353 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c47356 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47359 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4735c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12c4735f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c47362 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c47364 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47367 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4736a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c4736c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4736f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47372 jne 0x12c474d9 */
  if (!C.zf) goto L_12c474d9;
  /* 12c47378 cmp dword ptr [0x12c6fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4737f je 0x12c474c8 */
  if (C.zf) goto L_12c474c8;
  /* 12c47385 mov eax, dword ptr [0x12c6fe18] */
  EAX = (r32((uint32_t)(0x12c6fe18)));
  /* 12c4738a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12c4738d mov ecx, dword ptr [0x12c6fe20] */
  ECX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c47393 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c47396 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47398 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c4739b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12c473a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c473a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c473a8 push eax */
  push32((uint32_t)(EAX));
  /* 12c473a9 call dword ptr [0x12c702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e8))), 0x12c473afu);
  /* 12c473af mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c473b4 mov ecx, dword ptr [0x12c6fe18] */
  ECX = (r32((uint32_t)(0x12c6fe18)));
  /* 12c473ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c473bc mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c473c1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c473c4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c473c6 mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c473cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c473cf mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c473d4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c473d7 mov edx, dword ptr [0x12c6fe18] */
  EDX = (r32((uint32_t)(0x12c6fe18)));
  /* 12c473dd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12c473e8 mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c473ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c473f0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12c473f3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c473f6 mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c473fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c473fe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12c47401 mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c47407 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c4740a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12c4740e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c47410 jne 0x12c47426 */
  if (!C.zf) goto L_12c47426;
  /* 12c47412 mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c47418 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c4741b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12c4741d mov ecx, dword ptr [0x12c6fe20] */
  ECX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c47423 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12c47426:;
  /* 12c47426 mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c4742c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47430 jne 0x12c474c8 */
  if (!C.zf) goto L_12c474c8;
  /* 12c47436 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c4743b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4743d mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c47442 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c47445 push ecx */
  push32((uint32_t)(ECX));
  /* 12c47446 call dword ptr [0x12c702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e8))), 0x12c4744cu);
  /* 12c4744c mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c47452 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c47455 push eax */
  push32((uint32_t)(EAX));
  /* 12c47456 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c47458 mov ecx, dword ptr [0x12c6fe2c] */
  ECX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c4745e push ecx */
  push32((uint32_t)(ECX));
  /* 12c4745f call dword ptr [0x12c702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e4))), 0x12c47465u);
  /* 12c47465 mov edx, dword ptr [0x12c6fe24] */
  EDX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c4746b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4746e mov eax, dword ptr [0x12c6fe28] */
  EAX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c47473 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47475 mov ecx, dword ptr [0x12c6fe20] */
  ECX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c4747b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4747e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47480 push eax */
  push32((uint32_t)(EAX));
  /* 12c47481 mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c47487 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4748a push edx */
  push32((uint32_t)(EDX));
  /* 12c4748b mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c47490 push eax */
  push32((uint32_t)(EAX));
  /* 12c47491 call 0x12c4aa40 */
  push32(0x12c47496u); f_12c4aa40();
  /* 12c47496 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47499 mov ecx, dword ptr [0x12c6fe24] */
  ECX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c4749f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c474a2 mov dword ptr [0x12c6fe24], ecx */
  w32((uint32_t)(0x12c6fe24), (ECX));
  /* 12c474a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c474ab cmp edx, dword ptr [0x12c6fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c6fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c474b1 jbe 0x12c474bc */
  if ((C.cf||C.zf)) goto L_12c474bc;
  /* 12c474b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c474b6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c474b9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c474bc:;
  /* 12c474bc mov ecx, dword ptr [0x12c6fe28] */
  ECX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c474c2 mov dword ptr [0x12c6fe1c], ecx */
  w32((uint32_t)(0x12c6fe1c), (ECX));
L_12c474c8:;
  /* 12c474c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c474cb mov dword ptr [0x12c6fe20], edx */
  w32((uint32_t)(0x12c6fe20), (EDX));
  /* 12c474d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c474d4 mov dword ptr [0x12c6fe18], eax */
  w32((uint32_t)(0x12c6fe18), (EAX));
L_12c474d9:;
  /* 12c474d9 mov esp, ebp */
  ESP = (EBP);
  /* 12c474db pop ebp */
  EBP = (pop32());
  /* 12c474dc ret  */
  ESPCHK(0x12c46f10u, _esp0);
  ESP += 4; return;
}

/* FUN_100074e0 @ 0x12c474e0 (1334 bytes, 427 insns) */
void f_12c474e0(void) {
  FTRACE(0x12c474e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c474e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c474e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c474e3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c474e6 push esi */
  push32((uint32_t)(ESI));
  /* 12c474e7 mov eax, dword ptr [0x12c6fe24] */
  EAX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c474ec imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c474ef mov ecx, dword ptr [0x12c6fe28] */
  ECX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c474f5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c474f7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c474fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c474fd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47500 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12c47503 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12c47506 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47509 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c4750c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4750f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c47512 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47516 jge 0x12c4752c */
  if ((C.sf==C.of)) goto L_12c4752c;
  /* 12c47518 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4751b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4751e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47520 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c47523 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12c4752a jmp 0x12c47541 */
  goto L_12c47541;
L_12c4752c:;
  /* 12c4752c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c47533 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47536 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47539 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4753c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c4753e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12c47541:;
  /* 12c47541 mov ecx, dword ptr [0x12c6fe1c] */
  ECX = (r32((uint32_t)(0x12c6fe1c)));
  /* 12c47547 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12c4754a:;
  /* 12c4754a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4754d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47550 jae 0x12c47576 */
  if (!C.cf) goto L_12c47576;
  /* 12c47552 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47555 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c47558 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12c4755a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4755d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c47560 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12c47563 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c47565 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c47567 je 0x12c4756b */
  if (C.zf) goto L_12c4756b;
  /* 12c47569 jmp 0x12c47576 */
  goto L_12c47576;
L_12c4756b:;
  /* 12c4756b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4756e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47571 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c47574 jmp 0x12c4754a */
  goto L_12c4754a;
L_12c47576:;
  /* 12c47576 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47579 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4757c jne 0x12c4765d */
  if (!C.zf) goto L_12c4765d;
  /* 12c47582 mov eax, dword ptr [0x12c6fe28] */
  EAX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c47587 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12c4758a:;
  /* 12c4758a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4758d cmp ecx, dword ptr [0x12c6fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47593 jae 0x12c475b9 */
  if (!C.cf) goto L_12c475b9;
  /* 12c47595 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47598 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4759b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12c4759d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c475a0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c475a3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12c475a6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c475a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c475aa je 0x12c475ae */
  if (C.zf) goto L_12c475ae;
  /* 12c475ac jmp 0x12c475b9 */
  goto L_12c475b9;
L_12c475ae:;
  /* 12c475ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c475b1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c475b4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c475b7 jmp 0x12c4758a */
  goto L_12c4758a;
L_12c475b9:;
  /* 12c475b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c475bc cmp ecx, dword ptr [0x12c6fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c475c2 jne 0x12c4765d */
  if (!C.zf) goto L_12c4765d;
L_12c475c8:;
  /* 12c475c8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c475cb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c475ce jae 0x12c475e6 */
  if (!C.cf) goto L_12c475e6;
  /* 12c475d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c475d3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c475d7 je 0x12c475db */
  if (C.zf) goto L_12c475db;
  /* 12c475d9 jmp 0x12c475e6 */
  goto L_12c475e6;
L_12c475db:;
  /* 12c475db mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c475de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c475e1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c475e4 jmp 0x12c475c8 */
  goto L_12c475c8;
L_12c475e6:;
  /* 12c475e6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c475e9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c475ec jne 0x12c47637 */
  if (!C.zf) goto L_12c47637;
  /* 12c475ee mov eax, dword ptr [0x12c6fe28] */
  EAX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c475f3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12c475f6:;
  /* 12c475f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c475f9 cmp ecx, dword ptr [0x12c6fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c475ff jae 0x12c47617 */
  if (!C.cf) goto L_12c47617;
  /* 12c47601 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47604 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47608 je 0x12c4760c */
  if (C.zf) goto L_12c4760c;
  /* 12c4760a jmp 0x12c47617 */
  goto L_12c47617;
L_12c4760c:;
  /* 12c4760c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4760f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47612 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c47615 jmp 0x12c475f6 */
  goto L_12c475f6;
L_12c47617:;
  /* 12c47617 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4761a cmp ecx, dword ptr [0x12c6fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47620 jne 0x12c47637 */
  if (!C.zf) goto L_12c47637;
  /* 12c47622 call 0x12c47a20 */
  push32(0x12c47627u); f_12c47a20();
  /* 12c47627 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c4762a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4762e jne 0x12c47637 */
  if (!C.zf) goto L_12c47637;
  /* 12c47630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c47632 jmp 0x12c47a11 */
  goto L_12c47a11;
L_12c47637:;
  /* 12c47637 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4763a push edx */
  push32((uint32_t)(EDX));
  /* 12c4763b call 0x12c47b30 */
  push32(0x12c47640u); f_12c47b30();
  /* 12c47640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47643 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47646 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c47649 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c4764b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4764e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c47651 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47654 jne 0x12c4765d */
  if (!C.zf) goto L_12c4765d;
  /* 12c47656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c47658 jmp 0x12c47a11 */
  goto L_12c47a11;
L_12c4765d:;
  /* 12c4765d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47660 mov dword ptr [0x12c6fe1c], edx */
  w32((uint32_t)(0x12c6fe1c), (EDX));
  /* 12c47666 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47669 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c4766c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12c4766f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47672 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c47674 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12c47677 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4767b je 0x12c476a0 */
  if (C.zf) goto L_12c476a0;
  /* 12c4767d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47680 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47683 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c47686 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12c4768a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4768d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47690 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12c47693 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12c4769a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12c4769c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4769e jne 0x12c476d5 */
  if (!C.zf) goto L_12c476d5;
L_12c476a0:;
  /* 12c476a0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12c476a7:;
  /* 12c476a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c476aa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c476ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c476b0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12c476b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c476b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c476ba mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12c476bd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12c476c4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12c476c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c476c8 jne 0x12c476d5 */
  if (!C.zf) goto L_12c476d5;
  /* 12c476ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c476cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c476d0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12c476d3 jmp 0x12c476a7 */
  goto L_12c476a7;
L_12c476d5:;
  /* 12c476d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c476d8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c476de mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c476e1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12c476e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c476eb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c476f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c476f5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c476f8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c476fb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12c476ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c47702 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47706 jne 0x12c47722 */
  if (!C.zf) goto L_12c47722;
  /* 12c47708 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12c4770f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47712 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47715 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c47718 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12c4771f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12c47722:;
  /* 12c47722 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47726 jl 0x12c4773b */
  if ((C.sf!=C.of)) goto L_12c4773b;
  /* 12c47728 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4772b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c4772d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c47730 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47733 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47736 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c47739 jmp 0x12c47722 */
  goto L_12c47722;
L_12c4773b:;
  /* 12c4773b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4773e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47741 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12c47745 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c47748 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4774b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c4774d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47750 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c47753 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c47756 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c47759 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4775c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c4775f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47763 jle 0x12c4776c */
  if ((C.zf||C.sf!=C.of)) goto L_12c4776c;
  /* 12c47765 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12c4776c:;
  /* 12c4776c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4776f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47772 je 0x12c47990 */
  if (C.zf) goto L_12c47990;
  /* 12c47778 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4777b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4777e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c47781 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47784 jne 0x12c4785a */
  if (!C.zf) goto L_12c4785a;
  /* 12c4778a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4778e jge 0x12c477ef */
  if ((C.sf==C.of)) goto L_12c477ef;
  /* 12c47790 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c47795 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47798 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c4779a not eax */
  EAX = (~(EAX));
  /* 12c4779c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4779f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c477a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12c477a6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c477a8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c477ab mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c477ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12c477b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c477b5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c477b8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c477bb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c477be mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c477c1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c477c4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c477c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c477ca add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c477cd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c477d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c477d3 jne 0x12c477ed */
  if (!C.zf) goto L_12c477ed;
  /* 12c477d5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c477da mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c477dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c477df not eax */
  EAX = (~(EAX));
  /* 12c477e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c477e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c477e6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c477e8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c477eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c477ed:;
  /* 12c477ed jmp 0x12c4785a */
  goto L_12c4785a;
L_12c477ef:;
  /* 12c477ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c477f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c477f5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c477fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c477fc not edx */
  EDX = (~(EDX));
  /* 12c477fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47801 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47804 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12c4780b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4780d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47810 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47813 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12c4781a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c4781d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47820 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c47823 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c47826 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47829 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4782c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c4782f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47832 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47835 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c47839 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4783b jne 0x12c4785a */
  if (!C.zf) goto L_12c4785a;
  /* 12c4783d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47840 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47843 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47848 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c4784a not edx */
  EDX = (~(EDX));
  /* 12c4784c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4784f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c47852 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c47854 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47857 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12c4785a:;
  /* 12c4785a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4785d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c47860 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47863 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c47866 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c47869 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4786c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c4786f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47872 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c47875 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c47878 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4787c je 0x12c47990 */
  if (C.zf) goto L_12c47990;
  /* 12c47882 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47888 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12c4788b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4788e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c47894 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c47897 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c4789a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4789d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c478a0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c478a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c478a6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c478a9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c478ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c478af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c478b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c478b5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c478b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c478bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c478be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c478c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c478c4 jne 0x12c47990 */
  if (!C.zf) goto L_12c47990;
  /* 12c478ca cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c478ce jge 0x12c4792a */
  if ((C.sf==C.of)) goto L_12c4792a;
  /* 12c478d0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c478d3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c478d6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c478da mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c478dd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c478e0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c478e3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c478e5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c478e8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c478eb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12c478ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c478f0 jne 0x12c47908 */
  if (!C.zf) goto L_12c47908;
  /* 12c478f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c478f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c478fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c478fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c478ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c47901 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c47903 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47906 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c47908:;
  /* 12c47908 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c4790d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47910 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47912 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47915 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47918 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c4791c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4791e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47921 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47924 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c47928 jmp 0x12c47990 */
  goto L_12c47990;
L_12c4792a:;
  /* 12c4792a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c4792d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47930 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c47934 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47937 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4793a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c4793d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c4793f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47942 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47945 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12c47948 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4794a jne 0x12c47967 */
  if (!C.zf) goto L_12c47967;
  /* 12c4794c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4794f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47952 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c47957 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c47959 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4795c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c4795f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c47961 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47964 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c47967:;
  /* 12c47967 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4796a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4796d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47972 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47974 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47977 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c4797a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12c47981 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c47983 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47986 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47989 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12c47990:;
  /* 12c47990 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47994 je 0x12c479aa */
  if (C.zf) goto L_12c479aa;
  /* 12c47996 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4799c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c4799e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c479a1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c479a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c479a7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12c479aa:;
  /* 12c479aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c479ad add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c479b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c479b3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c479b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c479b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c479bc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c479be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c479c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c479c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c479c7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c479ca mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12c479cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c479d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c479d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c479d5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c479d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c479da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c479dd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c479df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c479e1 jne 0x12c47a03 */
  if (!C.zf) goto L_12c47a03;
  /* 12c479e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c479e6 cmp eax, dword ptr [0x12c6fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c479ec jne 0x12c47a03 */
  if (!C.zf) goto L_12c47a03;
  /* 12c479ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c479f1 cmp ecx, dword ptr [0x12c6fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c479f7 jne 0x12c47a03 */
  if (!C.zf) goto L_12c47a03;
  /* 12c479f9 mov dword ptr [0x12c6fe20], 0 */
  w32((uint32_t)(0x12c6fe20), (0x0u));
L_12c47a03:;
  /* 12c47a03 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12c47a06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47a09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c47a0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47a0e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c47a11:;
  /* 12c47a11 pop esi */
  ESI = (pop32());
  /* 12c47a12 mov esp, ebp */
  ESP = (EBP);
  /* 12c47a14 pop ebp */
  EBP = (pop32());
  /* 12c47a15 ret  */
  ESPCHK(0x12c474e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a20 @ 0x12c47a20 (271 bytes, 78 insns) */
void f_12c47a20(void) {
  FTRACE(0x12c47a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c47a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c47a21 mov ebp, esp */
  EBP = (ESP);
  /* 12c47a23 push ecx */
  push32((uint32_t)(ECX));
  /* 12c47a24 mov eax, dword ptr [0x12c6fe24] */
  EAX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c47a29 cmp eax, dword ptr [0x12c6fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47a2f jne 0x12c47a7b */
  if (!C.zf) goto L_12c47a7b;
  /* 12c47a31 mov ecx, dword ptr [0x12c6fe08] */
  ECX = (r32((uint32_t)(0x12c6fe08)));
  /* 12c47a37 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47a3a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c47a3d push ecx */
  push32((uint32_t)(ECX));
  /* 12c47a3e mov edx, dword ptr [0x12c6fe28] */
  EDX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c47a44 push edx */
  push32((uint32_t)(EDX));
  /* 12c47a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c47a47 mov eax, dword ptr [0x12c6fe2c] */
  EAX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c47a4c push eax */
  push32((uint32_t)(EAX));
  /* 12c47a4d call dword ptr [0x12c702cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702cc))), 0x12c47a53u);
  /* 12c47a53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c47a56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47a5a jne 0x12c47a63 */
  if (!C.zf) goto L_12c47a63;
  /* 12c47a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c47a5e jmp 0x12c47b2b */
  goto L_12c47b2b;
L_12c47a63:;
  /* 12c47a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47a66 mov dword ptr [0x12c6fe28], ecx */
  w32((uint32_t)(0x12c6fe28), (ECX));
  /* 12c47a6c mov edx, dword ptr [0x12c6fe08] */
  EDX = (r32((uint32_t)(0x12c6fe08)));
  /* 12c47a72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47a75 mov dword ptr [0x12c6fe08], edx */
  w32((uint32_t)(0x12c6fe08), (EDX));
L_12c47a7b:;
  /* 12c47a7b mov eax, dword ptr [0x12c6fe24] */
  EAX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c47a80 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c47a83 mov ecx, dword ptr [0x12c6fe28] */
  ECX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c47a89 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47a8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c47a8e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12c47a93 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c47a95 mov edx, dword ptr [0x12c6fe2c] */
  EDX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c47a9b push edx */
  push32((uint32_t)(EDX));
  /* 12c47a9c call dword ptr [0x12c70304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70304))), 0x12c47aa2u);
  /* 12c47aa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47aa5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12c47aa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47aab cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47aaf jne 0x12c47ab5 */
  if (!C.zf) goto L_12c47ab5;
  /* 12c47ab1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c47ab3 jmp 0x12c47b2b */
  goto L_12c47b2b;
L_12c47ab5:;
  /* 12c47ab5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c47ab7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12c47abc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12c47ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c47ac3 call dword ptr [0x12c7030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7030c))), 0x12c47ac9u);
  /* 12c47ac9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47acc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12c47acf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47ad2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47ad6 jne 0x12c47af2 */
  if (!C.zf) goto L_12c47af2;
  /* 12c47ad8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47adb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c47ade push ecx */
  push32((uint32_t)(ECX));
  /* 12c47adf push 0 */
  push32((uint32_t)(0x0u));
  /* 12c47ae1 mov edx, dword ptr [0x12c6fe2c] */
  EDX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c47ae7 push edx */
  push32((uint32_t)(EDX));
  /* 12c47ae8 call dword ptr [0x12c702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e4))), 0x12c47aeeu);
  /* 12c47aee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c47af0 jmp 0x12c47b2b */
  goto L_12c47b2b;
L_12c47af2:;
  /* 12c47af2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47af5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c47afb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47afe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c47b05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47b08 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12c47b0f mov eax, dword ptr [0x12c6fe24] */
  EAX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c47b14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47b17 mov dword ptr [0x12c6fe24], eax */
  w32((uint32_t)(0x12c6fe24), (EAX));
  /* 12c47b1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47b1f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c47b22 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12c47b28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c47b2b:;
  /* 12c47b2b mov esp, ebp */
  ESP = (EBP);
  /* 12c47b2d pop ebp */
  EBP = (pop32());
  /* 12c47b2e ret  */
  ESPCHK(0x12c47a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b30 @ 0x12c47b30 (494 bytes, 149 insns) */
void f_12c47b30(void) {
  FTRACE(0x12c47b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c47b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c47b31 mov ebp, esp */
  EBP = (ESP);
  /* 12c47b33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47b39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c47b3c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c47b3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47b42 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c47b45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c47b48 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12c47b4f:;
  /* 12c47b4f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47b53 jl 0x12c47b68 */
  if ((C.sf!=C.of)) goto L_12c47b68;
  /* 12c47b55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c47b58 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c47b5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c47b5d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47b60 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47b63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12c47b66 jmp 0x12c47b4f */
  goto L_12c47b4f;
L_12c47b68:;
  /* 12c47b68 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47b6b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c47b71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47b74 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12c47b7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c47b7e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c47b85 jmp 0x12c47b90 */
  goto L_12c47b90;
L_12c47b87:;
  /* 12c47b87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47b8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47b8d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12c47b90:;
  /* 12c47b90 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47b94 jge 0x12c47bb6 */
  if ((C.sf==C.of)) goto L_12c47bb6;
  /* 12c47b96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c47b9c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12c47b9f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c47ba2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47ba5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47ba8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c47bab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47bae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47bb1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c47bb4 jmp 0x12c47b87 */
  goto L_12c47b87;
L_12c47bb6:;
  /* 12c47bb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47bb9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12c47bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47bbf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c47bc2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47bc4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c47bc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c47bc9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c47bce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c47bd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47bd6 push edx */
  push32((uint32_t)(EDX));
  /* 12c47bd7 call dword ptr [0x12c7030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7030c))), 0x12c47bddu);
  /* 12c47bdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c47bdf jne 0x12c47be9 */
  if (!C.zf) goto L_12c47be9;
  /* 12c47be1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c47be4 jmp 0x12c47d1a */
  goto L_12c47d1a;
L_12c47be9:;
  /* 12c47be9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47bec add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47bf1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c47bf4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47bf7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c47bfa jmp 0x12c47c08 */
  goto L_12c47c08;
L_12c47bfc:;
  /* 12c47bfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47bff add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47c05 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c47c08:;
  /* 12c47c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47c0b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47c0e ja 0x12c47c6d */
  if ((!C.cf&&!C.zf)) goto L_12c47c6d;
  /* 12c47c10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47c13 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12c47c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47c1d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12c47c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47c2a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47c2d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c47c30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47c33 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12c47c39 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47c3c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47c42 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47c45 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c47c48 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47c4b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47c51 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47c54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c47c57 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47c5a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47c5f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c47c62 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c47c65 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12c47c6b jmp 0x12c47bfc */
  goto L_12c47bfc;
L_12c47c6d:;
  /* 12c47c6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c47c70 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47c76 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c47c79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47c7c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47c7f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47c82 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c47c85 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47c88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c47c8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c47c8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47c91 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47c94 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c47c97 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c47c9a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47c9d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47ca0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c47ca3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47ca6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c47ca9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c47cac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47caf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47cb2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c47cb5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47cb8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47cbb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12c47cc3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47cc6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47cc9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12c47cd4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47cd7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12c47cdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47cde mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12c47ce1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c47ce4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47ce7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12c47cea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c47cec jne 0x12c47cfd */
  if (!C.zf) goto L_12c47cfd;
  /* 12c47cee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47cf1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c47cf4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c47cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47cfa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c47cfd:;
  /* 12c47cfd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47d02 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47d05 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47d07 not edx */
  EDX = (~(EDX));
  /* 12c47d09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47d0c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c47d0f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c47d11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47d14 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c47d17 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12c47d1a:;
  /* 12c47d1a mov esp, ebp */
  ESP = (EBP);
  /* 12c47d1c pop ebp */
  EBP = (pop32());
  /* 12c47d1d ret  */
  ESPCHK(0x12c47b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d20 @ 0x12c47d20 (1515 bytes, 489 insns) */
void f_12c47d20(void) {
  FTRACE(0x12c47d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c47d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c47d21 mov ebp, esp */
  EBP = (ESP);
  /* 12c47d23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47d26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c47d29 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47d2c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12c47d2e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c47d31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47d34 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c47d37 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12c47d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47d3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c47d40 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47d43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c47d46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c47d49 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12c47d4c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c47d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47d52 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c47d58 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47d5b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12c47d62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c47d65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c47d68 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47d6b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c47d6e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47d71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c47d73 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47d76 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12c47d79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47d7c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47d7f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12c47d82 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47d85 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c47d87 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c47d8a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c47d8d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47d90 jle 0x12c48046 */
  if ((C.zf||C.sf!=C.of)) goto L_12c48046;
  /* 12c47d96 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47d99 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c47d9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c47d9e jne 0x12c47dab */
  if (!C.zf) goto L_12c47dab;
  /* 12c47da0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47da3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47da6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47da9 jle 0x12c47db2 */
  if ((C.zf||C.sf!=C.of)) goto L_12c47db2;
L_12c47dab:;
  /* 12c47dab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c47dad jmp 0x12c48307 */
  goto L_12c48307;
L_12c47db2:;
  /* 12c47db2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47db5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c47db8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47dbb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c47dbe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47dc2 jbe 0x12c47dcb */
  if ((C.cf||C.zf)) goto L_12c47dcb;
  /* 12c47dc4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12c47dcb:;
  /* 12c47dcb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47dce mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47dd1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c47dd4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47dd7 jne 0x12c47ead */
  if (!C.zf) goto L_12c47ead;
  /* 12c47ddd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47de1 jae 0x12c47e42 */
  if (!C.cf) goto L_12c47e42;
  /* 12c47de3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47de8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47deb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47ded not edx */
  EDX = (~(EDX));
  /* 12c47def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47df2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47df5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c47df9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c47dfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47dfe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47e01 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c47e05 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47e08 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47e0b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c47e0e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c47e11 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47e14 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47e17 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c47e1a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47e1d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47e20 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c47e24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c47e26 jne 0x12c47e40 */
  if (!C.zf) goto L_12c47e40;
  /* 12c47e28 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47e2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47e30 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47e32 not edx */
  EDX = (~(EDX));
  /* 12c47e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47e37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c47e39 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c47e3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47e3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c47e40:;
  /* 12c47e40 jmp 0x12c47ead */
  goto L_12c47ead;
L_12c47e42:;
  /* 12c47e42 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47e45 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47e48 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c47e4d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c47e4f not eax */
  EAX = (~(EAX));
  /* 12c47e51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47e54 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47e57 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c47e5e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c47e60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47e63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47e66 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12c47e6d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47e70 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47e73 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c47e76 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c47e79 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47e7c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47e7f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c47e82 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47e85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47e88 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c47e8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c47e8e jne 0x12c47ead */
  if (!C.zf) goto L_12c47ead;
  /* 12c47e90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47e93 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47e96 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c47e9b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c47e9d not eax */
  EAX = (~(EAX));
  /* 12c47e9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47ea2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c47ea5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c47ea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47eaa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c47ead:;
  /* 12c47ead mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47eb0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c47eb3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47eb6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c47eb9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c47ebc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47ebf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c47ec2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47ec5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c47ec8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12c47ecb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c47ece add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47ed1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47ed4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c47ed7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47edb jle 0x12c48027 */
  if ((C.zf||C.sf!=C.of)) goto L_12c48027;
  /* 12c47ee1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c47ee4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47ee7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c47eea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c47eed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c47ef0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47ef3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c47ef6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47efa jbe 0x12c47f03 */
  if ((C.cf||C.zf)) goto L_12c47f03;
  /* 12c47efc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12c47f03:;
  /* 12c47f03 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47f06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c47f09 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12c47f0c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c47f0f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47f12 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47f15 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c47f18 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c47f1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47f1e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47f21 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12c47f24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c47f27 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47f2a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12c47f2d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47f30 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c47f33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47f36 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c47f39 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47f3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c47f3f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c47f42 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47f45 jne 0x12c48013 */
  if (!C.zf) goto L_12c48013;
  /* 12c47f4b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c47f4f jae 0x12c47fac */
  if (!C.cf) goto L_12c47fac;
  /* 12c47f51 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47f54 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47f57 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c47f5b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47f5e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47f61 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c47f64 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c47f67 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47f6a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47f6d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12c47f70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c47f72 jne 0x12c47f8a */
  if (!C.zf) goto L_12c47f8a;
  /* 12c47f74 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47f79 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47f7c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47f7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47f81 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c47f83 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c47f85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47f88 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c47f8a:;
  /* 12c47f8a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c47f8f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47f92 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c47f94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47f97 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47f9a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12c47f9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c47fa0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47fa3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47fa6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12c47faa jmp 0x12c48013 */
  goto L_12c48013;
L_12c47fac:;
  /* 12c47fac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47faf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47fb2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c47fb6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47fb9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47fbc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c47fbf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c47fc2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47fc5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c47fc8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12c47fcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c47fcd jne 0x12c47fea */
  if (!C.zf) goto L_12c47fea;
  /* 12c47fcf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47fd2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47fd5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c47fda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c47fdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47fdf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c47fe2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c47fe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c47fe7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12c47fea:;
  /* 12c47fea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c47fed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c47ff0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c47ff5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c47ff7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c47ffa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c47ffd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c48004 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c48006 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48009 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4800c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12c48013:;
  /* 12c48013 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c48016 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c48019 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c4801b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4801e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48021 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c48024 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12c48027:;
  /* 12c48027 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4802a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4802d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48030 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c48032 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c48035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48038 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4803b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4803e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12c48041 jmp 0x12c48302 */
  goto L_12c48302;
L_12c48046:;
  /* 12c48046 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c48049 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4804c jge 0x12c48302 */
  if ((C.sf==C.of)) goto L_12c48302;
  /* 12c48052 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c48055 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48058 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4805b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c4805d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c48060 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48063 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48066 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48069 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12c4806c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4806f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48072 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c48075 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c48078 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4807b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c4807e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c48081 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c48084 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48087 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c4808a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4808e jbe 0x12c48097 */
  if ((C.cf||C.zf)) goto L_12c48097;
  /* 12c48090 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12c48097:;
  /* 12c48097 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4809a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4809d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4809f jne 0x12c481e0 */
  if (!C.zf) goto L_12c481e0;
  /* 12c480a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c480a8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12c480ab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c480ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c480b1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c480b5 jbe 0x12c480be */
  if ((C.cf||C.zf)) goto L_12c480be;
  /* 12c480b7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12c480be:;
  /* 12c480be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c480c1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c480c4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c480c7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c480ca jne 0x12c481a0 */
  if (!C.zf) goto L_12c481a0;
  /* 12c480d0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c480d4 jae 0x12c48135 */
  if (!C.cf) goto L_12c48135;
  /* 12c480d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c480db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c480de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c480e0 not edx */
  EDX = (~(EDX));
  /* 12c480e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c480e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c480e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c480ec and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c480ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c480f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c480f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c480f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c480fb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c480fe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c48101 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c48104 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48107 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4810a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12c4810d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48110 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48113 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c48117 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c48119 jne 0x12c48133 */
  if (!C.zf) goto L_12c48133;
  /* 12c4811b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c48120 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c48123 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c48125 not edx */
  EDX = (~(EDX));
  /* 12c48127 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4812a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4812c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4812e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48131 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c48133:;
  /* 12c48133 jmp 0x12c481a0 */
  goto L_12c481a0;
L_12c48135:;
  /* 12c48135 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c48138 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4813b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c48140 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c48142 not eax */
  EAX = (~(EAX));
  /* 12c48144 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48147 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4814a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12c48151 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c48153 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48156 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48159 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12c48160 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48163 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48166 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12c48169 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c4816c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4816f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48172 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12c48175 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48178 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4817b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c4817f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c48181 jne 0x12c481a0 */
  if (!C.zf) goto L_12c481a0;
  /* 12c48183 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c48186 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48189 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c4818e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c48190 not eax */
  EAX = (~(EAX));
  /* 12c48192 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48195 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c48198 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4819a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4819d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c481a0:;
  /* 12c481a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c481a3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c481a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c481a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c481ac mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c481af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c481b2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c481b5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c481b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c481bb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12c481be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c481c1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c481c4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c481c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c481ca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c481cd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c481d0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c481d3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c481d7 jbe 0x12c481e0 */
  if ((C.cf||C.zf)) goto L_12c481e0;
  /* 12c481d9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12c481e0:;
  /* 12c481e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c481e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c481e6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12c481e9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c481ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c481ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c481f2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c481f5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c481f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c481fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c481fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c48201 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c48204 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48207 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c4820a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4820d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c48210 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48213 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c48216 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48219 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4821c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c4821f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48222 jne 0x12c482ee */
  if (!C.zf) goto L_12c482ee;
  /* 12c48228 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4822c jae 0x12c48288 */
  if (!C.cf) goto L_12c48288;
  /* 12c4822e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48231 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48234 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c48238 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4823b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4823e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c48241 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c48243 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48246 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48249 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12c4824c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4824e jne 0x12c48266 */
  if (!C.zf) goto L_12c48266;
  /* 12c48250 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c48255 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48258 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c4825a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4825d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4825f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c48261 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48264 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c48266:;
  /* 12c48266 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c4826b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4826e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c48270 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48273 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48276 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12c4827a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4827c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4827f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48282 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12c48286 jmp 0x12c482ee */
  goto L_12c482ee;
L_12c48288:;
  /* 12c48288 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4828b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4828e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12c48292 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c48295 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48298 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c4829b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c4829d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c482a0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c482a3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12c482a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c482a8 jne 0x12c482c5 */
  if (!C.zf) goto L_12c482c5;
  /* 12c482aa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c482ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c482b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12c482b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12c482b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c482ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c482bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c482bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c482c2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12c482c5:;
  /* 12c482c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c482c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c482cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c482d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c482d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c482d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c482d8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12c482df or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c482e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c482e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c482e7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12c482ee:;
  /* 12c482ee mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c482f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c482f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c482f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c482f9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c482fc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c482ff mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12c48302:;
  /* 12c48302 mov eax, 1 */
  EAX = (0x1u);
L_12c48307:;
  /* 12c48307 mov esp, ebp */
  ESP = (EBP);
  /* 12c48309 pop ebp */
  EBP = (pop32());
  /* 12c4830a ret  */
  ESPCHK(0x12c47d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x12c48310 (304 bytes, 79 insns) */
void f_12c48310(void) {
  FTRACE(0x12c48310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c48310 push ebp */
  push32((uint32_t)(EBP));
  /* 12c48311 mov ebp, esp */
  EBP = (ESP);
  /* 12c48313 push ecx */
  push32((uint32_t)(ECX));
  /* 12c48314 cmp dword ptr [0x12c6fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4831b je 0x12c4843c */
  if (C.zf) goto L_12c4843c;
  /* 12c48321 mov eax, dword ptr [0x12c6fe18] */
  EAX = (r32((uint32_t)(0x12c6fe18)));
  /* 12c48326 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12c48329 mov ecx, dword ptr [0x12c6fe20] */
  ECX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c4832f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c48332 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48334 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c48337 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12c4833c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c48341 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48344 push eax */
  push32((uint32_t)(EAX));
  /* 12c48345 call dword ptr [0x12c702e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e8))), 0x12c4834bu);
  /* 12c4834b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c48350 mov ecx, dword ptr [0x12c6fe18] */
  ECX = (r32((uint32_t)(0x12c6fe18)));
  /* 12c48356 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c48358 mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c4835d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c48360 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12c48362 mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c48368 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c4836b mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c48370 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c48373 mov edx, dword ptr [0x12c6fe18] */
  EDX = (r32((uint32_t)(0x12c6fe18)));
  /* 12c48379 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12c48384 mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c48389 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c4838c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12c4838f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12c48392 mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c48397 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c4839a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12c4839d mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c483a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c483a6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12c483aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c483ac jne 0x12c483c2 */
  if (!C.zf) goto L_12c483c2;
  /* 12c483ae mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c483b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c483b7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12c483b9 mov ecx, dword ptr [0x12c6fe20] */
  ECX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c483bf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12c483c2:;
  /* 12c483c2 mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c483c8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c483cc jne 0x12c48432 */
  if (!C.zf) goto L_12c48432;
  /* 12c483ce cmp dword ptr [0x12c6fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c483d5 jle 0x12c48432 */
  if ((C.zf||C.sf!=C.of)) goto L_12c48432;
  /* 12c483d7 mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c483dc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c483df push ecx */
  push32((uint32_t)(ECX));
  /* 12c483e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c483e2 mov edx, dword ptr [0x12c6fe2c] */
  EDX = (r32((uint32_t)(0x12c6fe2c)));
  /* 12c483e8 push edx */
  push32((uint32_t)(EDX));
  /* 12c483e9 call dword ptr [0x12c702e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702e4))), 0x12c483efu);
  /* 12c483ef mov eax, dword ptr [0x12c6fe24] */
  EAX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c483f4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c483f7 mov ecx, dword ptr [0x12c6fe28] */
  ECX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c483fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c483ff mov edx, dword ptr [0x12c6fe20] */
  EDX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c48405 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48408 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4840a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4840b mov eax, dword ptr [0x12c6fe20] */
  EAX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c48410 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48413 push eax */
  push32((uint32_t)(EAX));
  /* 12c48414 mov ecx, dword ptr [0x12c6fe20] */
  ECX = (r32((uint32_t)(0x12c6fe20)));
  /* 12c4841a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4841b call 0x12c4aa40 */
  push32(0x12c48420u); f_12c4aa40();
  /* 12c48420 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48423 mov edx, dword ptr [0x12c6fe24] */
  EDX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c48429 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4842c mov dword ptr [0x12c6fe24], edx */
  w32((uint32_t)(0x12c6fe24), (EDX));
L_12c48432:;
  /* 12c48432 mov dword ptr [0x12c6fe20], 0 */
  w32((uint32_t)(0x12c6fe20), (0x0u));
L_12c4843c:;
  /* 12c4843c mov esp, ebp */
  ESP = (EBP);
  /* 12c4843e pop ebp */
  EBP = (pop32());
  /* 12c4843f ret  */
  ESPCHK(0x12c48310u, _esp0);
  ESP += 4; return;
}

/* FUN_10008440 @ 0x12c48440 (1565 bytes, 343 insns) */
void f_12c48440(void) {
  FTRACE(0x12c48440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c48440 push ebp */
  push32((uint32_t)(EBP));
  /* 12c48441 mov ebp, esp */
  EBP = (ESP);
  /* 12c48443 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48449 mov eax, dword ptr [0x12c6fe24] */
  EAX = (r32((uint32_t)(0x12c6fe24)));
  /* 12c4844e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c48451 push eax */
  push32((uint32_t)(EAX));
  /* 12c48452 mov ecx, dword ptr [0x12c6fe28] */
  ECX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c48458 push ecx */
  push32((uint32_t)(ECX));
  /* 12c48459 call dword ptr [0x12c702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702bc))), 0x12c4845fu);
  /* 12c4845f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c48461 je 0x12c4846b */
  if (C.zf) goto L_12c4846b;
  /* 12c48463 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c48466 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c4846b:;
  /* 12c4846b mov edx, dword ptr [0x12c6fe28] */
  EDX = (r32((uint32_t)(0x12c6fe28)));
  /* 12c48471 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12c48477 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12c48481 jmp 0x12c48492 */
  goto L_12c48492;
L_12c48483:;
  /* 12c48483 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12c48489 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4848c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12c48492:;
  /* 12c48492 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12c48498 cmp ecx, dword ptr [0x12c6fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4849e jge 0x12c48a57 */
  if ((C.sf==C.of)) goto L_12c48a57;
  /* 12c484a4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c484aa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c484ad mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12c484b3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12c484b8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12c484be push ecx */
  push32((uint32_t)(ECX));
  /* 12c484bf call dword ptr [0x12c702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702bc))), 0x12c484c5u);
  /* 12c484c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c484c7 je 0x12c484d3 */
  if (C.zf) goto L_12c484d3;
  /* 12c484c9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12c484ce jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c484d3:;
  /* 12c484d3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c484d9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c484dc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12c484e2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12c484e8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c484ee mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c484f1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c484f7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c484fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c484fd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12c48507 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12c48511 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c48518 jmp 0x12c48523 */
  goto L_12c48523;
L_12c4851a:;
  /* 12c4851a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4851d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48520 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c48523:;
  /* 12c48523 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48527 jge 0x12c48a1b */
  if ((C.sf==C.of)) goto L_12c48a1b;
  /* 12c4852d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12c48537 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12c48541 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12c4854b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12c48555 jmp 0x12c48566 */
  goto L_12c48566;
L_12c48557:;
  /* 12c48557 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c4855d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48560 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12c48566:;
  /* 12c48566 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4856d jge 0x12c48582 */
  if ((C.sf==C.of)) goto L_12c48582;
  /* 12c4856f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c48575 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12c48580 jmp 0x12c48557 */
  goto L_12c48557;
L_12c48582:;
  /* 12c48582 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48586 jl 0x12c489bd */
  if ((C.sf!=C.of)) goto L_12c489bd;
  /* 12c4858c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c48591 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12c48597 push ecx */
  push32((uint32_t)(ECX));
  /* 12c48598 call dword ptr [0x12c702bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702bc))), 0x12c4859eu);
  /* 12c4859e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c485a0 je 0x12c485ac */
  if (C.zf) goto L_12c485ac;
  /* 12c485a2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12c485a7 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c485ac:;
  /* 12c485ac mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12c485b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c485b5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12c485bf jmp 0x12c485d0 */
  goto L_12c485d0;
L_12c485c1:;
  /* 12c485c1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12c485c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c485ca mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12c485d0:;
  /* 12c485d0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c485d7 jge 0x12c48754 */
  if ((C.sf==C.of)) goto L_12c48754;
  /* 12c485dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c485e0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c485e3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12c485e9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c485ef add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c485f5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12c485fb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c48601 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48605 jne 0x12c48612 */
  if (!C.zf) goto L_12c48612;
  /* 12c48607 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12c4860d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48610 je 0x12c4861c */
  if (C.zf) goto L_12c4861c;
L_12c48612:;
  /* 12c48612 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12c48617 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c4861c:;
  /* 12c4861c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c48622 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c48624 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12c4862a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12c48630 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12c48636 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12c4863c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4863f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c48641 je 0x12c48679 */
  if (C.zf) goto L_12c48679;
  /* 12c48643 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12c48649 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4864c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12c48652 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4865c jle 0x12c48668 */
  if ((C.zf||C.sf!=C.of)) goto L_12c48668;
  /* 12c4865e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12c48663 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c48668:;
  /* 12c48668 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12c4866e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48671 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12c48677 jmp 0x12c486bb */
  goto L_12c486bb;
L_12c48679:;
  /* 12c48679 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12c4867f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c48682 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48685 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12c4868b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48692 jle 0x12c4869e */
  if ((C.zf||C.sf!=C.of)) goto L_12c4869e;
  /* 12c48694 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12c4869e:;
  /* 12c4869e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c486a4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12c486ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c486ae mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c486b4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12c486bb:;
  /* 12c486bb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c486c2 jl 0x12c486dd */
  if ((C.sf!=C.of)) goto L_12c486dd;
  /* 12c486c4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12c486ca and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12c486cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c486cf jne 0x12c486dd */
  if (!C.zf) goto L_12c486dd;
  /* 12c486d1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c486db jle 0x12c486e7 */
  if ((C.zf||C.sf!=C.of)) goto L_12c486e7;
L_12c486dd:;
  /* 12c486dd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12c486e2 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c486e7:;
  /* 12c486e7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c486ed add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c486f3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c486f6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c486fc je 0x12c48708 */
  if (C.zf) goto L_12c48708;
  /* 12c486fe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12c48703 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c48708:;
  /* 12c48708 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c4870e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48714 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12c4871a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c48720 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48726 jb 0x12c4861c */
  if (C.cf) goto L_12c4861c;
  /* 12c4872c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c48732 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48738 je 0x12c48744 */
  if (C.zf) goto L_12c48744;
  /* 12c4873a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12c4873f jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c48744:;
  /* 12c48744 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c48747 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4874c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4874f jmp 0x12c485c1 */
  goto L_12c485c1;
L_12c48754:;
  /* 12c48754 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c48757 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c48759 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4875f je 0x12c4876b */
  if (C.zf) goto L_12c4876b;
  /* 12c48761 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12c48766 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c4876b:;
  /* 12c4876b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4876e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12c48774 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12c4877b jmp 0x12c48786 */
  goto L_12c48786;
L_12c4877d:;
  /* 12c4877d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48780 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48783 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12c48786:;
  /* 12c48786 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4878a jge 0x12c489bd */
  if ((C.sf==C.of)) goto L_12c489bd;
  /* 12c48790 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12c4879a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12c487a0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12c487a6:;
  /* 12c487a6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c487ac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c487af mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12c487b5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c487bb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c487c1 je 0x12c488ea */
  if (C.zf) goto L_12c488ea;
  /* 12c487c7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c487ca mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12c487d0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c487d7 je 0x12c488ea */
  if (C.zf) goto L_12c488ea;
  /* 12c487dd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c487e3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c487e9 jb 0x12c487fe */
  if (C.cf) goto L_12c487fe;
  /* 12c487eb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12c487f1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c487f6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c487fc jb 0x12c48808 */
  if (C.cf) goto L_12c48808;
L_12c487fe:;
  /* 12c487fe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12c48803 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c48808:;
  /* 12c48808 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c4880e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12c48814 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12c4881a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12c48820 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48823 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c48826 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c48829 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4882e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12c48834:;
  /* 12c48834 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c48837 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4883d je 0x12c4885e */
  if (C.zf) goto L_12c4885e;
  /* 12c4883f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c48842 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48848 jne 0x12c4884c */
  if (!C.zf) goto L_12c4884c;
  /* 12c4884a jmp 0x12c4885e */
  goto L_12c4885e;
L_12c4884c:;
  /* 12c4884c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4884f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c48851 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12c48854 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c48857 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48859 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c4885c jmp 0x12c48834 */
  goto L_12c48834;
L_12c4885e:;
  /* 12c4885e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c48861 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48867 jne 0x12c48873 */
  if (!C.zf) goto L_12c48873;
  /* 12c48869 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12c4886e jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c48873:;
  /* 12c48873 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c48879 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4887b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c4887e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48881 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12c48887 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4888e jle 0x12c4889a */
  if ((C.zf||C.sf!=C.of)) goto L_12c4889a;
  /* 12c48890 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12c4889a:;
  /* 12c4889a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12c488a0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c488a3 je 0x12c488af */
  if (C.zf) goto L_12c488af;
  /* 12c488a5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12c488aa jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c488af:;
  /* 12c488af mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c488b5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c488b8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c488be je 0x12c488ca */
  if (C.zf) goto L_12c488ca;
  /* 12c488c0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12c488c5 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c488ca:;
  /* 12c488ca mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12c488d0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12c488d6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12c488dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c488df mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12c488e5 jmp 0x12c487a6 */
  goto L_12c487a6;
L_12c488ea:;
  /* 12c488ea cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c488f1 je 0x12c48961 */
  if (C.zf) goto L_12c48961;
  /* 12c488f3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c488f7 jge 0x12c4892b */
  if ((C.sf==C.of)) goto L_12c4892b;
  /* 12c488f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c488fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48901 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c48903 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12c48909 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4890b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12c48911 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c48916 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48919 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c4891b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12c48921 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48923 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12c48929 jmp 0x12c48961 */
  goto L_12c48961;
L_12c4892b:;
  /* 12c4892b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4892e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48931 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c48936 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c48938 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12c4893e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48940 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12c48946 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48949 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4894c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12c48951 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12c48953 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12c48959 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4895b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12c48961:;
  /* 12c48961 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12c48967 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c4896a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48970 jne 0x12c48984 */
  if (!C.zf) goto L_12c48984;
  /* 12c48972 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c48975 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12c4897b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48982 je 0x12c4898e */
  if (C.zf) goto L_12c4898e;
L_12c48984:;
  /* 12c48984 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12c48989 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c4898e:;
  /* 12c4898e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12c48994 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c48997 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4899d je 0x12c489a9 */
  if (C.zf) goto L_12c489a9;
  /* 12c4899f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12c489a4 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c489a9:;
  /* 12c489a9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12c489af add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c489b2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12c489b8 jmp 0x12c4877d */
  goto L_12c4877d;
L_12c489bd:;
  /* 12c489bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c489c0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12c489c6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12c489cc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c489d0 jne 0x12c489ea */
  if (!C.zf) goto L_12c489ea;
  /* 12c489d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c489d5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12c489db mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12c489e1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c489e8 je 0x12c489f1 */
  if (C.zf) goto L_12c489f1;
L_12c489ea:;
  /* 12c489ea mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12c489ef jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c489f1:;
  /* 12c489f1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12c489f7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c489fd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12c48a03 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c48a06 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48a0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c48a0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48a11 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c48a13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c48a16 jmp 0x12c4851a */
  goto L_12c4851a;
L_12c48a1b:;
  /* 12c48a1b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c48a21 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12c48a27 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48a29 jne 0x12c48a3c */
  if (!C.zf) goto L_12c48a3c;
  /* 12c48a2b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c48a31 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12c48a37 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48a3a je 0x12c48a43 */
  if (C.zf) goto L_12c48a43;
L_12c48a3c:;
  /* 12c48a3c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12c48a41 jmp 0x12c48a59 */
  goto L_12c48a59;
L_12c48a43:;
  /* 12c48a43 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12c48a49 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48a4c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12c48a52 jmp 0x12c48483 */
  goto L_12c48483;
L_12c48a57:;
  /* 12c48a57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c48a59:;
  /* 12c48a59 mov esp, ebp */
  ESP = (EBP);
  /* 12c48a5b pop ebp */
  EBP = (pop32());
  /* 12c48a5c ret  */
  ESPCHK(0x12c48440u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a60 @ 0x12c48a60 (250 bytes, 92 insns) */
void f_12c48a60(void) {
  FTRACE(0x12c48a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c48a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c48a61 mov ebp, esp */
  EBP = (ESP);
  /* 12c48a63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48a66 push ebx */
  push32((uint32_t)(EBX));
  /* 12c48a67 push esi */
  push32((uint32_t)(ESI));
  /* 12c48a68 push edi */
  push32((uint32_t)(EDI));
  /* 12c48a69 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c48a6c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c48a6f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12c48a72 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12c48a75:;
  /* 12c48a75 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48a79 jne 0x12c48a99 */
  if (!C.zf) goto L_12c48a99;
  /* 12c48a7b push 0x12c69dd8 */
  push32((uint32_t)(0x12c69dd8u));
  /* 12c48a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c48a82 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12c48a84 push 0x12c69dcc */
  push32((uint32_t)(0x12c69dccu));
  /* 12c48a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c48a8b call 0x12c41c10 */
  push32(0x12c48a90u); f_12c41c10();
  /* 12c48a90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48a93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48a96 jne 0x12c48a99 */
  if (!C.zf) goto L_12c48a99;
  /* 12c48a98 int3  */
  x86_unimpl("int3 @ 0x12c48a98");
L_12c48a99:;
  /* 12c48a99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c48a9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c48a9d jne 0x12c48a75 */
  if (!C.zf) goto L_12c48a75;
L_12c48a9f:;
  /* 12c48a9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48aa3 jne 0x12c48ac3 */
  if (!C.zf) goto L_12c48ac3;
  /* 12c48aa5 push 0x12c69dbc */
  push32((uint32_t)(0x12c69dbcu));
  /* 12c48aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c48aac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12c48aae push 0x12c69dcc */
  push32((uint32_t)(0x12c69dccu));
  /* 12c48ab3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c48ab5 call 0x12c41c10 */
  push32(0x12c48abau); f_12c41c10();
  /* 12c48aba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48abd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48ac0 jne 0x12c48ac3 */
  if (!C.zf) goto L_12c48ac3;
  /* 12c48ac2 int3  */
  x86_unimpl("int3 @ 0x12c48ac2");
L_12c48ac3:;
  /* 12c48ac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c48ac7 jne 0x12c48a9f */
  if (!C.zf) goto L_12c48a9f;
  /* 12c48ac9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48acc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12c48ad3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48ad6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48ad9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c48adc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48adf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48ae2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c48ae4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48ae7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12c48aee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c48af1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c48af2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c48af5 push edx */
  push32((uint32_t)(EDX));
  /* 12c48af6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48af9 push eax */
  push32((uint32_t)(EAX));
  /* 12c48afa call 0x12c49ae0 */
  push32(0x12c48affu); f_12c49ae0();
  /* 12c48aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48b02 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c48b05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48b08 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c48b0b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48b0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48b11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c48b14 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48b17 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48b1b jl 0x12c48b3f */
  if ((C.sf!=C.of)) goto L_12c48b3f;
  /* 12c48b1d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48b20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c48b22 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c48b25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c48b27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c48b2d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12c48b30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48b33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c48b35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48b38 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48b3b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c48b3d jmp 0x12c48b50 */
  goto L_12c48b50;
L_12c48b3f:;
  /* 12c48b3f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48b42 push edx */
  push32((uint32_t)(EDX));
  /* 12c48b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c48b45 call 0x12c49860 */
  push32(0x12c48b4au); f_12c49860();
  /* 12c48b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48b4d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12c48b50:;
  /* 12c48b50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c48b53 pop edi */
  EDI = (pop32());
  /* 12c48b54 pop esi */
  ESI = (pop32());
  /* 12c48b55 pop ebx */
  EBX = (pop32());
  /* 12c48b56 mov esp, ebp */
  ESP = (EBP);
  /* 12c48b58 pop ebp */
  EBP = (pop32());
  /* 12c48b59 ret  */
  ESPCHK(0x12c48a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b60 @ 0x12c48b60 (183 bytes, 58 insns) */
void f_12c48b60(void) {
  FTRACE(0x12c48b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c48b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c48b61 mov ebp, esp */
  EBP = (ESP);
  /* 12c48b63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48b69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48b6c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48b71 ja 0x12c48b8a */
  if ((!C.cf&&!C.zf)) goto L_12c48b8a;
  /* 12c48b73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48b76 mov edx, dword ptr [0x12c6cc98] */
  EDX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c48b7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48b7e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12c48b82 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12c48b85 jmp 0x12c48c13 */
  goto L_12c48c13;
L_12c48b8a:;
  /* 12c48b8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48b8d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12c48b90 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c48b96 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c48b9c mov edx, dword ptr [0x12c6cc98] */
  EDX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c48ba2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48ba4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12c48ba8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12c48bad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c48baf je 0x12c48bd3 */
  if (C.zf) goto L_12c48bd3;
  /* 12c48bb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48bb4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12c48bb7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c48bbd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12c48bc0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c48bc3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12c48bc6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12c48bca mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12c48bd1 jmp 0x12c48be4 */
  goto L_12c48be4;
L_12c48bd3:;
  /* 12c48bd3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c48bd6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12c48bd9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12c48bdd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12c48be4:;
  /* 12c48be4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c48be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c48be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c48bea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12c48bed push ecx */
  push32((uint32_t)(ECX));
  /* 12c48bee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c48bf1 push edx */
  push32((uint32_t)(EDX));
  /* 12c48bf2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c48bf5 push eax */
  push32((uint32_t)(EAX));
  /* 12c48bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c48bf8 call 0x12c4ad80 */
  push32(0x12c48bfdu); f_12c4ad80();
  /* 12c48bfd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48c00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c48c02 jne 0x12c48c08 */
  if (!C.zf) goto L_12c48c08;
  /* 12c48c04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48c06 jmp 0x12c48c13 */
  goto L_12c48c13;
L_12c48c08:;
  /* 12c48c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48c0b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c48c10 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12c48c13:;
  /* 12c48c13 mov esp, ebp */
  ESP = (EBP);
  /* 12c48c15 pop ebp */
  EBP = (pop32());
  /* 12c48c16 ret  */
  ESPCHK(0x12c48b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c20 @ 0x12c48c20 (836 bytes, 238 insns) */
void f_12c48c20(void) {
  FTRACE(0x12c48c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c48c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c48c21 mov ebp, esp */
  EBP = (ESP);
  /* 12c48c23 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48c26 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c48c28 call 0x12c46550 */
  push32(0x12c48c2du); f_12c46550();
  /* 12c48c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48c33 push eax */
  push32((uint32_t)(EAX));
  /* 12c48c34 call 0x12c48f70 */
  push32(0x12c48c39u); f_12c48f70();
  /* 12c48c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48c3c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c48c3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48c42 cmp ecx, dword ptr [0x12c6fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48c48 jne 0x12c48c5b */
  if (!C.zf) goto L_12c48c5b;
  /* 12c48c4a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c48c4c call 0x12c465f0 */
  push32(0x12c48c51u); f_12c465f0();
  /* 12c48c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48c56 jmp 0x12c48f60 */
  goto L_12c48f60;
L_12c48c5b:;
  /* 12c48c5b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48c5f jne 0x12c48c7c */
  if (!C.zf) goto L_12c48c7c;
  /* 12c48c61 call 0x12c49050 */
  push32(0x12c48c66u); f_12c49050();
  /* 12c48c66 call 0x12c490d0 */
  push32(0x12c48c6bu); f_12c490d0();
  /* 12c48c6b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c48c6d call 0x12c465f0 */
  push32(0x12c48c72u); f_12c465f0();
  /* 12c48c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48c75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48c77 jmp 0x12c48f60 */
  goto L_12c48f60;
L_12c48c7c:;
  /* 12c48c7c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c48c83 jmp 0x12c48c8e */
  goto L_12c48c8e;
L_12c48c85:;
  /* 12c48c85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48c88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48c8b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c48c8e:;
  /* 12c48c8e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48c92 jae 0x12c48ddf */
  if (!C.cf) goto L_12c48ddf;
  /* 12c48c98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48c9b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c48c9e mov ecx, dword ptr [eax + 0x12c6ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x12c6ceb8)));
  /* 12c48ca4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48ca7 jne 0x12c48dda */
  if (!C.zf) goto L_12c48dda;
  /* 12c48cad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c48cb4 jmp 0x12c48cbf */
  goto L_12c48cbf;
L_12c48cb6:;
  /* 12c48cb6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48cb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48cbc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12c48cbf:;
  /* 12c48cbf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48cc6 jae 0x12c48cd4 */
  if (!C.cf) goto L_12c48cd4;
  /* 12c48cc8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48ccb mov byte ptr [eax + 0x12c6fd00], 0 */
  w8((uint32_t)(EAX + 0x12c6fd00), (0x0u));
  /* 12c48cd2 jmp 0x12c48cb6 */
  goto L_12c48cb6;
L_12c48cd4:;
  /* 12c48cd4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c48cdb jmp 0x12c48ce6 */
  goto L_12c48ce6;
L_12c48cdd:;
  /* 12c48cdd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c48ce0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48ce3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c48ce6:;
  /* 12c48ce6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48cea jae 0x12c48d67 */
  if (!C.cf) goto L_12c48d67;
  /* 12c48cec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48cef imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c48cf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c48cf5 lea ecx, [edx + eax*8 + 0x12c6cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12c6cec8));
  /* 12c48cfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c48cff jmp 0x12c48d0a */
  goto L_12c48d0a;
L_12c48d01:;
  /* 12c48d01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c48d04 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48d07 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c48d0a:;
  /* 12c48d0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c48d0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c48d0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c48d11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c48d13 je 0x12c48d62 */
  if (C.zf) goto L_12c48d62;
  /* 12c48d15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c48d18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48d1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c48d1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c48d1f je 0x12c48d62 */
  if (C.zf) goto L_12c48d62;
  /* 12c48d21 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c48d24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c48d26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c48d28 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c48d2b jmp 0x12c48d36 */
  goto L_12c48d36;
L_12c48d2d:;
  /* 12c48d2d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48d30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48d33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c48d36:;
  /* 12c48d36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c48d39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c48d3b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c48d3e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48d41 ja 0x12c48d60 */
  if ((!C.cf&&!C.zf)) goto L_12c48d60;
  /* 12c48d43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48d46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c48d49 mov dl, byte ptr [eax + 0x12c6fd01] */
  DL = (r8((uint32_t)(EAX + 0x12c6fd01)));
  /* 12c48d4f or dl, byte ptr [ecx + 0x12c6ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12c6ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 12c48d55 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48d58 mov byte ptr [eax + 0x12c6fd01], dl */
  w8((uint32_t)(EAX + 0x12c6fd01), (DL));
  /* 12c48d5e jmp 0x12c48d2d */
  goto L_12c48d2d;
L_12c48d60:;
  /* 12c48d60 jmp 0x12c48d01 */
  goto L_12c48d01;
L_12c48d62:;
  /* 12c48d62 jmp 0x12c48cdd */
  goto L_12c48cdd;
L_12c48d67:;
  /* 12c48d67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48d6a mov dword ptr [0x12c6fb64], ecx */
  w32((uint32_t)(0x12c6fb64), (ECX));
  /* 12c48d70 mov dword ptr [0x12c6fbec], 1 */
  w32((uint32_t)(0x12c6fbec), (0x1u));
  /* 12c48d7a mov edx, dword ptr [0x12c6fb64] */
  EDX = (r32((uint32_t)(0x12c6fb64)));
  /* 12c48d80 push edx */
  push32((uint32_t)(EDX));
  /* 12c48d81 call 0x12c48fd0 */
  push32(0x12c48d86u); f_12c48fd0();
  /* 12c48d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48d89 mov dword ptr [0x12c6fe04], eax */
  w32((uint32_t)(0x12c6fe04), (EAX));
  /* 12c48d8e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c48d95 jmp 0x12c48da0 */
  goto L_12c48da0;
L_12c48d97:;
  /* 12c48d97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c48d9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48d9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c48da0:;
  /* 12c48da0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48da4 jae 0x12c48dc4 */
  if (!C.cf) goto L_12c48dc4;
  /* 12c48da6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48da9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c48dac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c48daf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c48db2 mov cx, word ptr [ecx + eax*2 + 0x12c6cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12c6cebc)));
  /* 12c48dba mov word ptr [edx*2 + 0x12c6fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x12c6fbe0), (CX));
  /* 12c48dc2 jmp 0x12c48d97 */
  goto L_12c48d97;
L_12c48dc4:;
  /* 12c48dc4 call 0x12c490d0 */
  push32(0x12c48dc9u); f_12c490d0();
  /* 12c48dc9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c48dcb call 0x12c465f0 */
  push32(0x12c48dd0u); f_12c465f0();
  /* 12c48dd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48dd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48dd5 jmp 0x12c48f60 */
  goto L_12c48f60;
L_12c48dda:;
  /* 12c48dda jmp 0x12c48c85 */
  goto L_12c48c85;
L_12c48ddf:;
  /* 12c48ddf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12c48de2 push edx */
  push32((uint32_t)(EDX));
  /* 12c48de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48de6 push eax */
  push32((uint32_t)(EAX));
  /* 12c48de7 call dword ptr [0x12c70310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70310))), 0x12c48dedu);
  /* 12c48ded cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48df0 jne 0x12c48f32 */
  if (!C.zf) goto L_12c48f32;
  /* 12c48df6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c48dfd jmp 0x12c48e08 */
  goto L_12c48e08;
L_12c48dff:;
  /* 12c48dff mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48e02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48e05 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12c48e08:;
  /* 12c48e08 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48e0f jae 0x12c48e1d */
  if (!C.cf) goto L_12c48e1d;
  /* 12c48e11 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48e14 mov byte ptr [edx + 0x12c6fd00], 0 */
  w8((uint32_t)(EDX + 0x12c6fd00), (0x0u));
  /* 12c48e1b jmp 0x12c48dff */
  goto L_12c48dff;
L_12c48e1d:;
  /* 12c48e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48e20 mov dword ptr [0x12c6fb64], eax */
  w32((uint32_t)(0x12c6fb64), (EAX));
  /* 12c48e25 mov dword ptr [0x12c6fe04], 0 */
  w32((uint32_t)(0x12c6fe04), (0x0u));
  /* 12c48e2f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48e33 jbe 0x12c48eee */
  if ((C.cf||C.zf)) goto L_12c48eee;
  /* 12c48e39 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12c48e3c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12c48e3f jmp 0x12c48e4a */
  goto L_12c48e4a;
L_12c48e41:;
  /* 12c48e41 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c48e44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48e47 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12c48e4a:;
  /* 12c48e4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c48e4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c48e4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c48e51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c48e53 je 0x12c48e9c */
  if (C.zf) goto L_12c48e9c;
  /* 12c48e55 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c48e58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48e5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c48e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c48e5f je 0x12c48e9c */
  if (C.zf) goto L_12c48e9c;
  /* 12c48e61 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c48e64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c48e66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c48e68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c48e6b jmp 0x12c48e76 */
  goto L_12c48e76;
L_12c48e6d:;
  /* 12c48e6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48e70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48e73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c48e76:;
  /* 12c48e76 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c48e79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c48e7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c48e7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48e81 ja 0x12c48e9a */
  if ((!C.cf&&!C.zf)) goto L_12c48e9a;
  /* 12c48e83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48e86 mov cl, byte ptr [eax + 0x12c6fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c6fd01)));
  /* 12c48e8c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12c48e8f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48e92 mov byte ptr [edx + 0x12c6fd01], cl */
  w8((uint32_t)(EDX + 0x12c6fd01), (CL));
  /* 12c48e98 jmp 0x12c48e6d */
  goto L_12c48e6d;
L_12c48e9a:;
  /* 12c48e9a jmp 0x12c48e41 */
  goto L_12c48e41;
L_12c48e9c:;
  /* 12c48e9c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12c48ea3 jmp 0x12c48eae */
  goto L_12c48eae;
L_12c48ea5:;
  /* 12c48ea5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48ea8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48eab mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c48eae:;
  /* 12c48eae cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48eb5 jae 0x12c48ece */
  if (!C.cf) goto L_12c48ece;
  /* 12c48eb7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48eba mov dl, byte ptr [ecx + 0x12c6fd01] */
  DL = (r8((uint32_t)(ECX + 0x12c6fd01)));
  /* 12c48ec0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12c48ec3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c48ec6 mov byte ptr [eax + 0x12c6fd01], dl */
  w8((uint32_t)(EAX + 0x12c6fd01), (DL));
  /* 12c48ecc jmp 0x12c48ea5 */
  goto L_12c48ea5;
L_12c48ece:;
  /* 12c48ece mov ecx, dword ptr [0x12c6fb64] */
  ECX = (r32((uint32_t)(0x12c6fb64)));
  /* 12c48ed4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c48ed5 call 0x12c48fd0 */
  push32(0x12c48edau); f_12c48fd0();
  /* 12c48eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48edd mov dword ptr [0x12c6fe04], eax */
  w32((uint32_t)(0x12c6fe04), (EAX));
  /* 12c48ee2 mov dword ptr [0x12c6fbec], 1 */
  w32((uint32_t)(0x12c6fbec), (0x1u));
  /* 12c48eec jmp 0x12c48ef8 */
  goto L_12c48ef8;
L_12c48eee:;
  /* 12c48eee mov dword ptr [0x12c6fbec], 0 */
  w32((uint32_t)(0x12c6fbec), (0x0u));
L_12c48ef8:;
  /* 12c48ef8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c48eff jmp 0x12c48f0a */
  goto L_12c48f0a;
L_12c48f01:;
  /* 12c48f01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c48f04 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48f07 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c48f0a:;
  /* 12c48f0a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48f0e jae 0x12c48f1f */
  if (!C.cf) goto L_12c48f1f;
  /* 12c48f10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c48f13 mov word ptr [eax*2 + 0x12c6fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12c6fbe0), (0x0u));
  /* 12c48f1d jmp 0x12c48f01 */
  goto L_12c48f01;
L_12c48f1f:;
  /* 12c48f1f call 0x12c490d0 */
  push32(0x12c48f24u); f_12c490d0();
  /* 12c48f24 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c48f26 call 0x12c465f0 */
  push32(0x12c48f2bu); f_12c465f0();
  /* 12c48f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48f2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48f30 jmp 0x12c48f60 */
  goto L_12c48f60;
L_12c48f32:;
  /* 12c48f32 cmp dword ptr [0x12c6e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48f39 je 0x12c48f53 */
  if (C.zf) goto L_12c48f53;
  /* 12c48f3b call 0x12c49050 */
  push32(0x12c48f40u); f_12c49050();
  /* 12c48f40 call 0x12c490d0 */
  push32(0x12c48f45u); f_12c490d0();
  /* 12c48f45 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c48f47 call 0x12c465f0 */
  push32(0x12c48f4cu); f_12c465f0();
  /* 12c48f4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48f4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c48f51 jmp 0x12c48f60 */
  goto L_12c48f60;
L_12c48f53:;
  /* 12c48f53 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c48f55 call 0x12c465f0 */
  push32(0x12c48f5au); f_12c465f0();
  /* 12c48f5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c48f5d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c48f60:;
  /* 12c48f60 mov esp, ebp */
  ESP = (EBP);
  /* 12c48f62 pop ebp */
  EBP = (pop32());
  /* 12c48f63 ret  */
  ESPCHK(0x12c48c20u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12c48f70 (89 bytes, 21 insns) */
void f_12c48f70(void) {
  FTRACE(0x12c48f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c48f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c48f71 mov ebp, esp */
  EBP = (ESP);
  /* 12c48f73 mov dword ptr [0x12c6e678], 0 */
  w32((uint32_t)(0x12c6e678), (0x0u));
  /* 12c48f7d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48f81 jne 0x12c48f95 */
  if (!C.zf) goto L_12c48f95;
  /* 12c48f83 mov dword ptr [0x12c6e678], 1 */
  w32((uint32_t)(0x12c6e678), (0x1u));
  /* 12c48f8d call dword ptr [0x12c70318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70318))), 0x12c48f93u);
  /* 12c48f93 jmp 0x12c48fc7 */
  goto L_12c48fc7;
L_12c48f95:;
  /* 12c48f95 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48f99 jne 0x12c48fad */
  if (!C.zf) goto L_12c48fad;
  /* 12c48f9b mov dword ptr [0x12c6e678], 1 */
  w32((uint32_t)(0x12c6e678), (0x1u));
  /* 12c48fa5 call dword ptr [0x12c70314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70314))), 0x12c48fabu);
  /* 12c48fab jmp 0x12c48fc7 */
  goto L_12c48fc7;
L_12c48fad:;
  /* 12c48fad cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48fb1 jne 0x12c48fc4 */
  if (!C.zf) goto L_12c48fc4;
  /* 12c48fb3 mov dword ptr [0x12c6e678], 1 */
  w32((uint32_t)(0x12c6e678), (0x1u));
  /* 12c48fbd mov eax, dword ptr [0x12c6e698] */
  EAX = (r32((uint32_t)(0x12c6e698)));
  /* 12c48fc2 jmp 0x12c48fc7 */
  goto L_12c48fc7;
L_12c48fc4:;
  /* 12c48fc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12c48fc7:;
  /* 12c48fc7 pop ebp */
  EBP = (pop32());
  /* 12c48fc8 ret  */
  ESPCHK(0x12c48f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fd0 @ 0x12c48fd0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12c48fd0(void) {
  FTRACE(0x12c48fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c48fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c48fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12c48fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c48fd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c48fd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c48fda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48fdd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c48fe3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c48fe6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c48fea ja 0x12c4901a */
  if ((!C.cf&&!C.zf)) goto L_12c4901a;
  /* 12c48fec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c48fef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c48ff1 mov dl, byte ptr [eax + 0x12c49034] */
  DL = (r8((uint32_t)(EAX + 0x12c49034)));
  /* 12c48ff7 jmp dword ptr [edx*4 + 0x12c49020] */
  switch (EDX) {
    case 0: goto L_12c48ffe;
    case 1: goto L_12c49005;
    case 2: goto L_12c4900c;
    case 3: goto L_12c49013;
    case 4: goto L_12c4901a;
    default: x86_unimpl("switch@0x12c48ff7 out of table"); return;
  }
L_12c48ffe:;
  /* 12c48ffe mov eax, 0x411 */
  EAX = (0x411u);
  /* 12c49003 jmp 0x12c4901c */
  goto L_12c4901c;
L_12c49005:;
  /* 12c49005 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12c4900a jmp 0x12c4901c */
  goto L_12c4901c;
L_12c4900c:;
  /* 12c4900c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12c49011 jmp 0x12c4901c */
  goto L_12c4901c;
L_12c49013:;
  /* 12c49013 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12c49018 jmp 0x12c4901c */
  goto L_12c4901c;
L_12c4901a:;
  /* 12c4901a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4901c:;
  /* 12c4901c mov esp, ebp */
  ESP = (EBP);
  /* 12c4901e pop ebp */
  EBP = (pop32());
  /* 12c4901f ret  */
  ESPCHK(0x12c48fd0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12c49050 (116 bytes, 29 insns) */
void f_12c49050(void) {
  FTRACE(0x12c49050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c49050 push ebp */
  push32((uint32_t)(EBP));
  /* 12c49051 mov ebp, esp */
  EBP = (ESP);
  /* 12c49053 push ecx */
  push32((uint32_t)(ECX));
  /* 12c49054 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4905b jmp 0x12c49066 */
  goto L_12c49066;
L_12c4905d:;
  /* 12c4905d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49060 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49063 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c49066:;
  /* 12c49066 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4906d jge 0x12c4907b */
  if ((C.sf==C.of)) goto L_12c4907b;
  /* 12c4906f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49072 mov byte ptr [ecx + 0x12c6fd00], 0 */
  w8((uint32_t)(ECX + 0x12c6fd00), (0x0u));
  /* 12c49079 jmp 0x12c4905d */
  goto L_12c4905d;
L_12c4907b:;
  /* 12c4907b mov dword ptr [0x12c6fb64], 0 */
  w32((uint32_t)(0x12c6fb64), (0x0u));
  /* 12c49085 mov dword ptr [0x12c6fbec], 0 */
  w32((uint32_t)(0x12c6fbec), (0x0u));
  /* 12c4908f mov dword ptr [0x12c6fe04], 0 */
  w32((uint32_t)(0x12c6fe04), (0x0u));
  /* 12c49099 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c490a0 jmp 0x12c490ab */
  goto L_12c490ab;
L_12c490a2:;
  /* 12c490a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c490a5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c490a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c490ab:;
  /* 12c490ab cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c490af jge 0x12c490c0 */
  if ((C.sf==C.of)) goto L_12c490c0;
  /* 12c490b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c490b4 mov word ptr [eax*2 + 0x12c6fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12c6fbe0), (0x0u));
  /* 12c490be jmp 0x12c490a2 */
  goto L_12c490a2;
L_12c490c0:;
  /* 12c490c0 mov esp, ebp */
  ESP = (EBP);
  /* 12c490c2 pop ebp */
  EBP = (pop32());
  /* 12c490c3 ret  */
  ESPCHK(0x12c49050u, _esp0);
  ESP += 4; return;
}

/* FUN_100090d0 @ 0x12c490d0 (770 bytes, 175 insns) */
void f_12c490d0(void) {
  FTRACE(0x12c490d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c490d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c490d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c490d3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c490d9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12c490df push eax */
  push32((uint32_t)(EAX));
  /* 12c490e0 mov ecx, dword ptr [0x12c6fb64] */
  ECX = (r32((uint32_t)(0x12c6fb64)));
  /* 12c490e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c490e7 call dword ptr [0x12c70310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70310))), 0x12c490edu);
  /* 12c490ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c490f0 jne 0x12c49309 */
  if (!C.zf) goto L_12c49309;
  /* 12c490f6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12c49100 jmp 0x12c49111 */
  goto L_12c49111;
L_12c49102:;
  /* 12c49102 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49108 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4910b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12c49111:;
  /* 12c49111 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4911b jae 0x12c49132 */
  if (!C.cf) goto L_12c49132;
  /* 12c4911d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49123 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12c49129 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12c49130 jmp 0x12c49102 */
  goto L_12c49102;
L_12c49132:;
  /* 12c49132 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12c49139 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12c4913f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c49142 jmp 0x12c4914d */
  goto L_12c4914d;
L_12c49144:;
  /* 12c49144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49147 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4914a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4914d:;
  /* 12c4914d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49150 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c49152 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c49154 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c49156 je 0x12c49198 */
  if (C.zf) goto L_12c49198;
  /* 12c49158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4915b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4915d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c4915f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12c49165 jmp 0x12c49176 */
  goto L_12c49176;
L_12c49167:;
  /* 12c49167 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c4916d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49170 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12c49176:;
  /* 12c49176 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49179 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4917b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c4917e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49184 ja 0x12c49196 */
  if ((!C.cf&&!C.zf)) goto L_12c49196;
  /* 12c49186 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c4918c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12c49194 jmp 0x12c49167 */
  goto L_12c49167;
L_12c49196:;
  /* 12c49196 jmp 0x12c49144 */
  goto L_12c49144;
L_12c49198:;
  /* 12c49198 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4919a mov eax, dword ptr [0x12c6fe04] */
  EAX = (r32((uint32_t)(0x12c6fe04)));
  /* 12c4919f push eax */
  push32((uint32_t)(EAX));
  /* 12c491a0 mov ecx, dword ptr [0x12c6fb64] */
  ECX = (r32((uint32_t)(0x12c6fb64)));
  /* 12c491a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c491a7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12c491ad push edx */
  push32((uint32_t)(EDX));
  /* 12c491ae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c491b3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12c491b9 push eax */
  push32((uint32_t)(EAX));
  /* 12c491ba push 1 */
  push32((uint32_t)(0x1u));
  /* 12c491bc call 0x12c4ad80 */
  push32(0x12c491c1u); f_12c4ad80();
  /* 12c491c1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c491c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c491c6 mov ecx, dword ptr [0x12c6fb64] */
  ECX = (r32((uint32_t)(0x12c6fb64)));
  /* 12c491cc push ecx */
  push32((uint32_t)(ECX));
  /* 12c491cd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c491d2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12c491d8 push edx */
  push32((uint32_t)(EDX));
  /* 12c491d9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c491de lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12c491e4 push eax */
  push32((uint32_t)(EAX));
  /* 12c491e5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c491ea mov ecx, dword ptr [0x12c6fe04] */
  ECX = (r32((uint32_t)(0x12c6fe04)));
  /* 12c491f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c491f1 call 0x12c4af40 */
  push32(0x12c491f6u); f_12c4af40();
  /* 12c491f6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c491f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c491fb mov edx, dword ptr [0x12c6fb64] */
  EDX = (r32((uint32_t)(0x12c6fb64)));
  /* 12c49201 push edx */
  push32((uint32_t)(EDX));
  /* 12c49202 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c49207 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12c4920d push eax */
  push32((uint32_t)(EAX));
  /* 12c4920e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c49213 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12c49219 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4921a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12c4921f mov edx, dword ptr [0x12c6fe04] */
  EDX = (r32((uint32_t)(0x12c6fe04)));
  /* 12c49225 push edx */
  push32((uint32_t)(EDX));
  /* 12c49226 call 0x12c4af40 */
  push32(0x12c4922bu); f_12c4af40();
  /* 12c4922b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4922e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12c49238 jmp 0x12c49249 */
  goto L_12c49249;
L_12c4923a:;
  /* 12c4923a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49243 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12c49249:;
  /* 12c49249 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49253 jae 0x12c49304 */
  if (!C.cf) goto L_12c49304;
  /* 12c49259 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c4925f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c49261 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12c49269 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4926c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4926e je 0x12c492a6 */
  if (C.zf) goto L_12c492a6;
  /* 12c49270 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49276 mov cl, byte ptr [eax + 0x12c6fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c6fd01)));
  /* 12c4927c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12c4927f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49285 mov byte ptr [edx + 0x12c6fd01], cl */
  w8((uint32_t)(EDX + 0x12c6fd01), (CL));
  /* 12c4928b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49291 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49297 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12c4929e mov byte ptr [eax + 0x12c6fc00], dl */
  w8((uint32_t)(EAX + 0x12c6fc00), (DL));
  /* 12c492a4 jmp 0x12c492ff */
  goto L_12c492ff;
L_12c492a6:;
  /* 12c492a6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c492ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c492ae mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12c492b6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12c492b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c492bb je 0x12c492f2 */
  if (C.zf) goto L_12c492f2;
  /* 12c492bd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c492c3 mov al, byte ptr [edx + 0x12c6fd01] */
  AL = (r8((uint32_t)(EDX + 0x12c6fd01)));
  /* 12c492c9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12c492cb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c492d1 mov byte ptr [ecx + 0x12c6fd01], al */
  w8((uint32_t)(ECX + 0x12c6fd01), (AL));
  /* 12c492d7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c492dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c492e3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12c492ea mov byte ptr [edx + 0x12c6fc00], cl */
  w8((uint32_t)(EDX + 0x12c6fc00), (CL));
  /* 12c492f0 jmp 0x12c492ff */
  goto L_12c492ff;
L_12c492f2:;
  /* 12c492f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c492f8 mov byte ptr [edx + 0x12c6fc00], 0 */
  w8((uint32_t)(EDX + 0x12c6fc00), (0x0u));
L_12c492ff:;
  /* 12c492ff jmp 0x12c4923a */
  goto L_12c4923a;
L_12c49304:;
  /* 12c49304 jmp 0x12c493ce */
  goto L_12c493ce;
L_12c49309:;
  /* 12c49309 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12c49313 jmp 0x12c49324 */
  goto L_12c49324;
L_12c49315:;
  /* 12c49315 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c4931b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4931e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12c49324:;
  /* 12c49324 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4932e jae 0x12c493ce */
  if (!C.cf) goto L_12c493ce;
  /* 12c49334 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4933b jb 0x12c49378 */
  if (C.cf) goto L_12c49378;
  /* 12c4933d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49344 ja 0x12c49378 */
  if ((!C.cf&&!C.zf)) goto L_12c49378;
  /* 12c49346 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c4934c mov dl, byte ptr [ecx + 0x12c6fd01] */
  DL = (r8((uint32_t)(ECX + 0x12c6fd01)));
  /* 12c49352 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12c49355 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c4935b mov byte ptr [eax + 0x12c6fd01], dl */
  w8((uint32_t)(EAX + 0x12c6fd01), (DL));
  /* 12c49361 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49367 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4936a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49370 mov byte ptr [edx + 0x12c6fc00], cl */
  w8((uint32_t)(EDX + 0x12c6fc00), (CL));
  /* 12c49376 jmp 0x12c493c9 */
  goto L_12c493c9;
L_12c49378:;
  /* 12c49378 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4937f jb 0x12c493bc */
  if (C.cf) goto L_12c493bc;
  /* 12c49381 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49388 ja 0x12c493bc */
  if ((!C.cf&&!C.zf)) goto L_12c493bc;
  /* 12c4938a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c49390 mov cl, byte ptr [eax + 0x12c6fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c6fd01)));
  /* 12c49396 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c49399 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c4939f mov byte ptr [edx + 0x12c6fd01], cl */
  w8((uint32_t)(EDX + 0x12c6fd01), (CL));
  /* 12c493a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c493ab sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c493ae mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c493b4 mov byte ptr [ecx + 0x12c6fc00], al */
  w8((uint32_t)(ECX + 0x12c6fc00), (AL));
  /* 12c493ba jmp 0x12c493c9 */
  goto L_12c493c9;
L_12c493bc:;
  /* 12c493bc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12c493c2 mov byte ptr [edx + 0x12c6fc00], 0 */
  w8((uint32_t)(EDX + 0x12c6fc00), (0x0u));
L_12c493c9:;
  /* 12c493c9 jmp 0x12c49315 */
  goto L_12c49315;
L_12c493ce:;
  /* 12c493ce mov esp, ebp */
  ESP = (EBP);
  /* 12c493d0 pop ebp */
  EBP = (pop32());
  /* 12c493d1 ret  */
  ESPCHK(0x12c490d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e0 @ 0x12c493e0 (23 bytes, 9 insns) */
void f_12c493e0(void) {
  FTRACE(0x12c493e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c493e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c493e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c493e3 cmp dword ptr [0x12c6fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c493ea je 0x12c493f3 */
  if (C.zf) goto L_12c493f3;
  /* 12c493ec mov eax, dword ptr [0x12c6fb64] */
  EAX = (r32((uint32_t)(0x12c6fb64)));
  /* 12c493f1 jmp 0x12c493f5 */
  goto L_12c493f5;
L_12c493f3:;
  /* 12c493f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c493f5:;
  /* 12c493f5 pop ebp */
  EBP = (pop32());
  /* 12c493f6 ret  */
  ESPCHK(0x12c493e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009400 @ 0x12c49400 (34 bytes, 10 insns) */
void f_12c49400(void) {
  FTRACE(0x12c49400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c49400 push ebp */
  push32((uint32_t)(EBP));
  /* 12c49401 mov ebp, esp */
  EBP = (ESP);
  /* 12c49403 cmp dword ptr [0x12c6ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4940a jne 0x12c49420 */
  if (!C.zf) goto L_12c49420;
  /* 12c4940c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12c4940e call 0x12c48c20 */
  push32(0x12c49413u); f_12c48c20();
  /* 12c49413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49416 mov dword ptr [0x12c6ffb0], 1 */
  w32((uint32_t)(0x12c6ffb0), (0x1u));
L_12c49420:;
  /* 12c49420 pop ebp */
  EBP = (pop32());
  /* 12c49421 ret  */
  ESPCHK(0x12c49400u, _esp0);
  ESP += 4; return;
}

/* FUN_10009430 @ 0x12c49430 (664 bytes, 263 insns) [15 switch table(s)] */
void f_12c49430(void) {
  FTRACE(0x12c49430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c49430 push ebp */
  push32((uint32_t)(EBP));
  /* 12c49431 mov ebp, esp */
  EBP = (ESP);
  /* 12c49433 push edi */
  push32((uint32_t)(EDI));
  /* 12c49434 push esi */
  push32((uint32_t)(ESI));
  /* 12c49435 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c49438 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4943b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4943e mov eax, ecx */
  EAX = (ECX);
  /* 12c49440 mov edx, ecx */
  EDX = (ECX);
  /* 12c49442 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49444 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49446 jbe 0x12c49450 */
  if ((C.cf||C.zf)) goto L_12c49450;
  /* 12c49448 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4944a jb 0x12c495c8 */
  if (C.cf) goto L_12c495c8;
L_12c49450:;
  /* 12c49450 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c49456 jne 0x12c4946c */
  if (!C.zf) goto L_12c4946c;
  /* 12c49458 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c4945b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4945e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49461 jb 0x12c4948c */
  if (C.cf) goto L_12c4948c;
  /* 12c49463 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c49465 jmp dword ptr [edx*4 + 0x12c49578] */
  switch (EDX) {
    case 0: goto L_12c49588;
    case 1: goto L_12c49590;
    case 2: goto L_12c4959c;
    case 3: goto L_12c495b0;
    default: x86_unimpl("switch@0x12c49465 out of table"); return;
  }
L_12c4946c:;
  /* 12c4946c mov eax, edi */
  EAX = (EDI);
  /* 12c4946e mov edx, 3 */
  EDX = (0x3u);
  /* 12c49473 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c49476 jb 0x12c49484 */
  if (C.cf) goto L_12c49484;
  /* 12c49478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4947b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4947d jmp dword ptr [eax*4 + 0x12c49490] */
  switch (EAX) {
    case 1: goto L_12c494a0;
    case 2: goto L_12c494cc;
    case 3: goto L_12c494f0;
    default: x86_unimpl("switch@0x12c4947d out of table"); return;
  }
L_12c49484:;
  /* 12c49484 jmp dword ptr [ecx*4 + 0x12c49588] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12c49588)))); return;
  /* 12c4948b nop  */
  /* nop */
L_12c4948c:;
  /* 12c4948c jmp dword ptr [ecx*4 + 0x12c4950c] */
  switch (ECX) {
    case 0: goto L_12c4956f;
    case 1: goto L_12c4955c;
    case 2: goto L_12c49554;
    case 3: goto L_12c4954c;
    case 4: goto L_12c49544;
    case 5: goto L_12c4953c;
    case 6: goto L_12c49534;
    case 7: goto L_12c4952c;
    default: x86_unimpl("switch@0x12c4948c out of table"); return;
  }
  /* 12c49493 nop  */
  /* nop */
L_12c494a0:;
  /* 12c494a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c494a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c494a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c494a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c494a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c494ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c494af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c494b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c494b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c494b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c494bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c494be jb 0x12c4948c */
  if (C.cf) goto L_12c4948c;
  /* 12c494c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c494c2 jmp dword ptr [edx*4 + 0x12c49578] */
  switch (EDX) {
    case 0: goto L_12c49588;
    case 1: goto L_12c49590;
    case 2: goto L_12c4959c;
    case 3: goto L_12c495b0;
    default: x86_unimpl("switch@0x12c494c2 out of table"); return;
  }
  /* 12c494c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c494cc:;
  /* 12c494cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c494ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c494d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c494d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c494d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c494d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c494db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c494de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c494e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c494e4 jb 0x12c4948c */
  if (C.cf) goto L_12c4948c;
  /* 12c494e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c494e8 jmp dword ptr [edx*4 + 0x12c49578] */
  switch (EDX) {
    case 0: goto L_12c49588;
    case 1: goto L_12c49590;
    case 2: goto L_12c4959c;
    case 3: goto L_12c495b0;
    default: x86_unimpl("switch@0x12c494e8 out of table"); return;
  }
  /* 12c494ef nop  */
  /* nop */
L_12c494f0:;
  /* 12c494f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c494f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c494f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c494f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c494f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c494fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c494fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c494fe jb 0x12c4948c */
  if (C.cf) goto L_12c4948c;
  /* 12c49500 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c49502 jmp dword ptr [edx*4 + 0x12c49578] */
  switch (EDX) {
    case 0: goto L_12c49588;
    case 1: goto L_12c49590;
    case 2: goto L_12c4959c;
    case 3: goto L_12c495b0;
    default: x86_unimpl("switch@0x12c49502 out of table"); return;
  }
  /* 12c49509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c4952c:;
  /* 12c4952c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12c49530 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12c49534:;
  /* 12c49534 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12c49538 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12c4953c:;
  /* 12c4953c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12c49540 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12c49544:;
  /* 12c49544 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12c49548 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12c4954c:;
  /* 12c4954c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12c49550 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12c49554:;
  /* 12c49554 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12c49558 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12c4955c:;
  /* 12c4955c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12c49560 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12c49564 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c4956b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4956d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c4956f:;
  /* 12c4956f jmp dword ptr [edx*4 + 0x12c49578] */
  switch (EDX) {
    case 0: goto L_12c49588;
    case 1: goto L_12c49590;
    case 2: goto L_12c4959c;
    case 3: goto L_12c495b0;
    default: x86_unimpl("switch@0x12c4956f out of table"); return;
  }
  /* 12c49576 mov edi, edi */
  EDI = (EDI);
L_12c49588:;
  /* 12c49588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4958b pop esi */
  ESI = (pop32());
  /* 12c4958c pop edi */
  EDI = (pop32());
  /* 12c4958d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4958e ret  */
  ESPCHK(0x12c49430u, _esp0);
  ESP += 4; return;
  /* 12c4958f nop  */
  /* nop */
L_12c49590:;
  /* 12c49590 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c49592 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c49594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c49597 pop esi */
  ESI = (pop32());
  /* 12c49598 pop edi */
  EDI = (pop32());
  /* 12c49599 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4959a ret  */
  ESPCHK(0x12c49430u, _esp0);
  ESP += 4; return;
  /* 12c4959b nop  */
  /* nop */
L_12c4959c:;
  /* 12c4959c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c4959e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c495a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c495a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c495a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c495a9 pop esi */
  ESI = (pop32());
  /* 12c495aa pop edi */
  EDI = (pop32());
  /* 12c495ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c495ac ret  */
  ESPCHK(0x12c49430u, _esp0);
  ESP += 4; return;
  /* 12c495ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c495b0:;
  /* 12c495b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c495b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c495b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c495b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c495ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c495bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c495c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c495c3 pop esi */
  ESI = (pop32());
  /* 12c495c4 pop edi */
  EDI = (pop32());
  /* 12c495c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c495c6 ret  */
  ESPCHK(0x12c49430u, _esp0);
  ESP += 4; return;
  /* 12c495c7 nop  */
  /* nop */
L_12c495c8:;
  /* 12c495c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12c495cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12c495d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c495d6 jne 0x12c495fc */
  if (!C.zf) goto L_12c495fc;
  /* 12c495d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c495db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c495de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c495e1 jb 0x12c495f0 */
  if (C.cf) goto L_12c495f0;
  /* 12c495e3 std  */
  C.df=1;
  /* 12c495e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c495e6 cld  */
  C.df=0;
  /* 12c495e7 jmp dword ptr [edx*4 + 0x12c49710] */
  switch (EDX) {
    case 0: goto L_12c49720;
    case 1: goto L_12c49728;
    case 2: goto L_12c49738;
    case 3: goto L_12c4974c;
    default: x86_unimpl("switch@0x12c495e7 out of table"); return;
  }
  /* 12c495ee mov edi, edi */
  EDI = (EDI);
L_12c495f0:;
  /* 12c495f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c495f2 jmp dword ptr [ecx*4 + 0x12c496c0] */
  switch (ECX) {
    case 0: goto L_12c49707;
    default: x86_unimpl("switch@0x12c495f2 out of table"); return;
  }
  /* 12c495f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c495fc:;
  /* 12c495fc mov eax, edi */
  EAX = (EDI);
  /* 12c495fe mov edx, 3 */
  EDX = (0x3u);
  /* 12c49603 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49606 jb 0x12c49614 */
  if (C.cf) goto L_12c49614;
  /* 12c49608 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4960b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4960d jmp dword ptr [eax*4 + 0x12c49618] */
  switch (EAX) {
    case 1: goto L_12c49628;
    case 2: goto L_12c49648;
    case 3: goto L_12c49670;
    default: x86_unimpl("switch@0x12c4960d out of table"); return;
  }
L_12c49614:;
  /* 12c49614 jmp dword ptr [ecx*4 + 0x12c49710] */
  switch (ECX) {
    case 0: goto L_12c49720;
    case 1: goto L_12c49728;
    case 2: goto L_12c49738;
    case 3: goto L_12c4974c;
    default: x86_unimpl("switch@0x12c49614 out of table"); return;
  }
  /* 12c4961b nop  */
  /* nop */
L_12c49628:;
  /* 12c49628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4962b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4962d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c49630 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c49631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c49634 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c49635 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49638 jb 0x12c495f0 */
  if (C.cf) goto L_12c495f0;
  /* 12c4963a std  */
  C.df=1;
  /* 12c4963b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c4963d cld  */
  C.df=0;
  /* 12c4963e jmp dword ptr [edx*4 + 0x12c49710] */
  switch (EDX) {
    case 0: goto L_12c49720;
    case 1: goto L_12c49728;
    case 2: goto L_12c49738;
    case 3: goto L_12c4974c;
    default: x86_unimpl("switch@0x12c4963e out of table"); return;
  }
  /* 12c49645 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c49648:;
  /* 12c49648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4964b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4964d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c49650 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c49653 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c49656 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c49659 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4965c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4965f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49662 jb 0x12c495f0 */
  if (C.cf) goto L_12c495f0;
  /* 12c49664 std  */
  C.df=1;
  /* 12c49665 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c49667 cld  */
  C.df=0;
  /* 12c49668 jmp dword ptr [edx*4 + 0x12c49710] */
  switch (EDX) {
    case 0: goto L_12c49720;
    case 1: goto L_12c49728;
    case 2: goto L_12c49738;
    case 3: goto L_12c4974c;
    default: x86_unimpl("switch@0x12c49668 out of table"); return;
  }
  /* 12c4966f nop  */
  /* nop */
L_12c49670:;
  /* 12c49670 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c49673 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c49675 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c49678 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c4967b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c4967e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c49681 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c49684 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c49687 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4968a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4968d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49690 jb 0x12c495f0 */
  if (C.cf) goto L_12c495f0;
  /* 12c49696 std  */
  C.df=1;
  /* 12c49697 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c49699 cld  */
  C.df=0;
  /* 12c4969a jmp dword ptr [edx*4 + 0x12c49710] */
  switch (EDX) {
    case 0: goto L_12c49720;
    case 1: goto L_12c49728;
    case 2: goto L_12c49738;
    case 3: goto L_12c4974c;
    default: x86_unimpl("switch@0x12c4969a out of table"); return;
  }
  /* 12c496a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12c496a4 les edx, ptr [esi - 0x6933ed3c] */
  x86_unimpl("les @ 0x12c496a4");
  /* 12c496aa les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c496aa");
  /* 12c496ac aam 0x96 */
  x86_unimpl("aam @ 0x12c496ac");
  /* 12c496ae les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c496ae");
  /* 12c496b0 fcom qword ptr [esi - 0x691bed3c] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESI + -0x691bed3c)));
  /* 12c496b6 les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c496b6");
  /* 12c496b8 in al, dx */
  x86_unimpl("in @ 0x12c496b8");
  /* 12c496b9 xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 12c496ba les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c496ba");
  /* 12c496bc hlt  */
  x86_unimpl("hlt @ 0x12c496bc");
  /* 12c496bd xchg esi, eax */
  { uint32_t _t=(ESI); ESI = (EAX); EAX = (_t); }
  /* 12c496be les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c496be");
  /* 12c496c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12c496c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12c496cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12c496d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12c496d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12c496d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12c496dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12c496e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12c496e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12c496e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12c496ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12c496f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12c496f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12c496f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12c496fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c49703 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49705 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c49707:;
  /* 12c49707 jmp dword ptr [edx*4 + 0x12c49710] */
  switch (EDX) {
    case 0: goto L_12c49720;
    case 1: goto L_12c49728;
    case 2: goto L_12c49738;
    case 3: goto L_12c4974c;
    default: x86_unimpl("switch@0x12c49707 out of table"); return;
  }
  /* 12c4970e mov edi, edi */
  EDI = (EDI);
L_12c49720:;
  /* 12c49720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c49723 pop esi */
  ESI = (pop32());
  /* 12c49724 pop edi */
  EDI = (pop32());
  /* 12c49725 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c49726 ret  */
  ESPCHK(0x12c49430u, _esp0);
  ESP += 4; return;
  /* 12c49727 nop  */
  /* nop */
L_12c49728:;
  /* 12c49728 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4972b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c4972e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c49731 pop esi */
  ESI = (pop32());
  /* 12c49732 pop edi */
  EDI = (pop32());
  /* 12c49733 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c49734 ret  */
  ESPCHK(0x12c49430u, _esp0);
  ESP += 4; return;
  /* 12c49735 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c49738:;
  /* 12c49738 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4973b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c4973e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c49741 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c49744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c49747 pop esi */
  ESI = (pop32());
  /* 12c49748 pop edi */
  EDI = (pop32());
  /* 12c49749 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4974a ret  */
  ESPCHK(0x12c49430u, _esp0);
  ESP += 4; return;
  /* 12c4974b nop  */
  /* nop */
L_12c4974c:;
  /* 12c4974c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4974f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c49752 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c49755 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c49758 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c4975b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c4975e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c49761 pop esi */
  ESI = (pop32());
  /* 12c49762 pop edi */
  EDI = (pop32());
  /* 12c49763 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c49764 ret  */
  ESPCHK(0x12c49430u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12c49770 (104 bytes, 43 insns) */
void f_12c49770(void) {
  FTRACE(0x12c49770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c49770 push ebx */
  push32((uint32_t)(EBX));
  /* 12c49771 push esi */
  push32((uint32_t)(ESI));
  /* 12c49772 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12c49776 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c49778 jne 0x12c49792 */
  if (!C.zf) goto L_12c49792;
  /* 12c4977a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c4977e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c49782 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c49784 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c49786 mov ebx, eax */
  EBX = (EAX);
  /* 12c49788 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c4978c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c4978e mov edx, ebx */
  EDX = (EBX);
  /* 12c49790 jmp 0x12c497d3 */
  goto L_12c497d3;
L_12c49792:;
  /* 12c49792 mov ecx, eax */
  ECX = (EAX);
  /* 12c49794 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c49798 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c4979c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12c497a0:;
  /* 12c497a0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c497a2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12c497a4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c497a6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12c497a8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c497aa jne 0x12c497a0 */
  if (!C.zf) goto L_12c497a0;
  /* 12c497ac div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c497ae mov esi, eax */
  ESI = (EAX);
  /* 12c497b0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c497b4 mov ecx, eax */
  ECX = (EAX);
  /* 12c497b6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c497ba mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c497bc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c497be jb 0x12c497ce */
  if (C.cf) goto L_12c497ce;
  /* 12c497c0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c497c4 ja 0x12c497ce */
  if ((!C.cf&&!C.zf)) goto L_12c497ce;
  /* 12c497c6 jb 0x12c497cf */
  if (C.cf) goto L_12c497cf;
  /* 12c497c8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c497cc jbe 0x12c497cf */
  if ((C.cf||C.zf)) goto L_12c497cf;
L_12c497ce:;
  /* 12c497ce dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12c497cf:;
  /* 12c497cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c497d1 mov eax, esi */
  EAX = (ESI);
L_12c497d3:;
  /* 12c497d3 pop esi */
  ESI = (pop32());
  /* 12c497d4 pop ebx */
  EBX = (pop32());
  /* 12c497d5 ret 0x10 */
  ESPCHK(0x12c49770u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12c497e0 (117 bytes, 44 insns) */
void f_12c497e0(void) {
  FTRACE(0x12c497e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c497e0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c497e1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12c497e5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c497e7 jne 0x12c49801 */
  if (!C.zf) goto L_12c49801;
  /* 12c497e9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c497ed mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c497f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c497f3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c497f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c497f9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c497fb mov eax, edx */
  EAX = (EDX);
  /* 12c497fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c497ff jmp 0x12c49851 */
  goto L_12c49851;
L_12c49801:;
  /* 12c49801 mov ecx, eax */
  ECX = (EAX);
  /* 12c49803 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c49807 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c4980b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12c4980f:;
  /* 12c4980f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c49811 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12c49813 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c49815 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12c49817 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c49819 jne 0x12c4980f */
  if (!C.zf) goto L_12c4980f;
  /* 12c4981b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c4981d mov ecx, eax */
  ECX = (EAX);
  /* 12c4981f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c49823 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12c49824 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12c49828 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4982a jb 0x12c4983a */
  if (C.cf) goto L_12c4983a;
  /* 12c4982c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49830 ja 0x12c4983a */
  if ((!C.cf&&!C.zf)) goto L_12c4983a;
  /* 12c49832 jb 0x12c49842 */
  if (C.cf) goto L_12c49842;
  /* 12c49834 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49838 jbe 0x12c49842 */
  if ((C.cf||C.zf)) goto L_12c49842;
L_12c4983a:;
  /* 12c4983a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4983e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c49842:;
  /* 12c49842 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c49846 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4984a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4984c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4984e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12c49851:;
  /* 12c49851 pop ebx */
  EBX = (pop32());
  /* 12c49852 ret 0x10 */
  ESPCHK(0x12c497e0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009860 @ 0x12c49860 (628 bytes, 214 insns) */
void f_12c49860(void) {
  FTRACE(0x12c49860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c49860 push ebp */
  push32((uint32_t)(EBP));
  /* 12c49861 mov ebp, esp */
  EBP = (ESP);
  /* 12c49863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c49866 push ebx */
  push32((uint32_t)(EBX));
  /* 12c49867 push esi */
  push32((uint32_t)(ESI));
  /* 12c49868 push edi */
  push32((uint32_t)(EDI));
L_12c49869:;
  /* 12c49869 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4986d jne 0x12c4988d */
  if (!C.zf) goto L_12c4988d;
  /* 12c4986f push 0x12c69e84 */
  push32((uint32_t)(0x12c69e84u));
  /* 12c49874 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c49876 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12c49878 push 0x12c69e78 */
  push32((uint32_t)(0x12c69e78u));
  /* 12c4987d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4987f call 0x12c41c10 */
  push32(0x12c49884u); f_12c41c10();
  /* 12c49884 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49887 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4988a jne 0x12c4988d */
  if (!C.zf) goto L_12c4988d;
  /* 12c4988c int3  */
  x86_unimpl("int3 @ 0x12c4988c");
L_12c4988d:;
  /* 12c4988d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4988f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c49891 jne 0x12c49869 */
  if (!C.zf) goto L_12c49869;
  /* 12c49893 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c49896 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c49899 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4989c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c4989f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c498a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c498a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c498a8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12c498ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c498b0 je 0x12c498bf */
  if (C.zf) goto L_12c498bf;
  /* 12c498b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c498b5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c498b8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12c498bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c498bd je 0x12c498d5 */
  if (C.zf) goto L_12c498d5;
L_12c498bf:;
  /* 12c498bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c498c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c498c5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12c498c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c498ca mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12c498cd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c498d0 jmp 0x12c49acd */
  goto L_12c49acd;
L_12c498d5:;
  /* 12c498d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c498d8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c498db and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c498de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c498e0 je 0x12c4992c */
  if (C.zf) goto L_12c4992c;
  /* 12c498e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c498e5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c498ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c498ef mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c498f2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12c498f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c498f7 je 0x12c49915 */
  if (C.zf) goto L_12c49915;
  /* 12c498f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c498fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c498ff mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c49902 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c49904 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49907 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4990a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4990d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49910 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c49913 jmp 0x12c4992c */
  goto L_12c4992c;
L_12c49915:;
  /* 12c49915 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49918 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4991b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4991e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49921 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c49924 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c49927 jmp 0x12c49acd */
  goto L_12c49acd;
L_12c4992c:;
  /* 12c4992c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4992f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c49932 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12c49935 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49938 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c4993b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4993e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c49941 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12c49944 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49947 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c4994a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4994d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c49954 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4995b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4995e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c49961 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49964 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c49967 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4996d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4996f jne 0x12c4999f */
  if (!C.zf) goto L_12c4999f;
  /* 12c49971 cmp dword ptr [ebp - 8], 0x12c6d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12c6d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49978 je 0x12c49983 */
  if (C.zf) goto L_12c49983;
  /* 12c4997a cmp dword ptr [ebp - 8], 0x12c6d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12c6d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49981 jne 0x12c49993 */
  if (!C.zf) goto L_12c49993;
L_12c49983:;
  /* 12c49983 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c49986 push edx */
  push32((uint32_t)(EDX));
  /* 12c49987 call 0x12c4b7d0 */
  push32(0x12c4998cu); f_12c4b7d0();
  /* 12c4998c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4998f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c49991 jne 0x12c4999f */
  if (!C.zf) goto L_12c4999f;
L_12c49993:;
  /* 12c49993 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49996 push eax */
  push32((uint32_t)(EAX));
  /* 12c49997 call 0x12c4b700 */
  push32(0x12c4999cu); f_12c4b700();
  /* 12c4999c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4999f:;
  /* 12c4999f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c499a2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c499a5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12c499ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c499ad je 0x12c49a8b */
  if (C.zf) goto L_12c49a8b;
L_12c499b3:;
  /* 12c499b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c499b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c499b9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12c499bb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c499be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c499c0 jge 0x12c499e3 */
  if ((C.sf==C.of)) goto L_12c499e3;
  /* 12c499c2 push 0x12c69e38 */
  push32((uint32_t)(0x12c69e38u));
  /* 12c499c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c499c9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12c499ce push 0x12c69e78 */
  push32((uint32_t)(0x12c69e78u));
  /* 12c499d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c499d5 call 0x12c41c10 */
  push32(0x12c499dau); f_12c41c10();
  /* 12c499da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c499dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c499e0 jne 0x12c499e3 */
  if (!C.zf) goto L_12c499e3;
  /* 12c499e2 int3  */
  x86_unimpl("int3 @ 0x12c499e2");
L_12c499e3:;
  /* 12c499e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c499e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c499e7 jne 0x12c499b3 */
  if (!C.zf) goto L_12c499b3;
  /* 12c499e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c499ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c499ef mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c499f1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c499f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c499f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c499fa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c499fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49a00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49a03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c49a05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49a08 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c49a0b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c49a0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49a11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c49a14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49a18 jle 0x12c49a36 */
  if ((C.zf||C.sf!=C.of)) goto L_12c49a36;
  /* 12c49a1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49a1d push ecx */
  push32((uint32_t)(ECX));
  /* 12c49a1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49a21 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c49a24 push eax */
  push32((uint32_t)(EAX));
  /* 12c49a25 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c49a28 push ecx */
  push32((uint32_t)(ECX));
  /* 12c49a29 call 0x12c4b3f0 */
  push32(0x12c49a2eu); f_12c4b3f0();
  /* 12c49a2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49a31 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c49a34 jmp 0x12c49a7e */
  goto L_12c49a7e;
L_12c49a36:;
  /* 12c49a36 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49a3a je 0x12c49a59 */
  if (C.zf) goto L_12c49a59;
  /* 12c49a3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c49a3f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c49a42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c49a45 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c49a48 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c49a4b mov ecx, dword ptr [edx*4 + 0x12c6fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c6fe60)));
  /* 12c49a52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49a54 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c49a57 jmp 0x12c49a60 */
  goto L_12c49a60;
L_12c49a59:;
  /* 12c49a59 mov dword ptr [ebp - 0x14], 0x12c6ca60 */
  w32((uint32_t)(EBP + -0x14), (0x12c6ca60u));
L_12c49a60:;
  /* 12c49a60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c49a63 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12c49a67 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12c49a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c49a6c je 0x12c49a7e */
  if (C.zf) goto L_12c49a7e;
  /* 12c49a6e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c49a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c49a72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c49a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12c49a76 call 0x12c4b2a0 */
  push32(0x12c49a7bu); f_12c4b2a0();
  /* 12c49a7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c49a7e:;
  /* 12c49a7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49a81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c49a84 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c49a87 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c49a89 jmp 0x12c49aa9 */
  goto L_12c49aa9;
L_12c49a8b:;
  /* 12c49a8b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c49a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49a95 push edx */
  push32((uint32_t)(EDX));
  /* 12c49a96 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12c49a99 push eax */
  push32((uint32_t)(EAX));
  /* 12c49a9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c49a9d push ecx */
  push32((uint32_t)(ECX));
  /* 12c49a9e call 0x12c4b3f0 */
  push32(0x12c49aa3u); f_12c4b3f0();
  /* 12c49aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49aa6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c49aa9:;
  /* 12c49aa9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c49aac cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49aaf je 0x12c49ac5 */
  if (C.zf) goto L_12c49ac5;
  /* 12c49ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49ab4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c49ab7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12c49aba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49abd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12c49ac0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c49ac3 jmp 0x12c49acd */
  goto L_12c49acd;
L_12c49ac5:;
  /* 12c49ac5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c49ac8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12c49acd:;
  /* 12c49acd pop edi */
  EDI = (pop32());
  /* 12c49ace pop esi */
  ESI = (pop32());
  /* 12c49acf pop ebx */
  EBX = (pop32());
  /* 12c49ad0 mov esp, ebp */
  ESP = (EBP);
  /* 12c49ad2 pop ebp */
  EBP = (pop32());
  /* 12c49ad3 ret  */
  ESPCHK(0x12c49860u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ae0 @ 0x12c49ae0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12c49ae0(void) {
  FTRACE(0x12c49ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c49ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c49ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12c49ae3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c49ae9 push ebx */
  push32((uint32_t)(EBX));
  /* 12c49aea push esi */
  push32((uint32_t)(ESI));
  /* 12c49aeb push edi */
  push32((uint32_t)(EDI));
  /* 12c49aec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c49af3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12c49afd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12c49b04:;
  /* 12c49b04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c49b07 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c49b09 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12c49b0c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49b10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c49b13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49b16 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c49b19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c49b1b je 0x12c4a6f7 */
  if (C.zf) goto L_12c4a6f7;
  /* 12c49b21 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49b28 jl 0x12c4a6f7 */
  if ((C.sf!=C.of)) goto L_12c4a6f7;
  /* 12c49b2e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49b32 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49b35 jl 0x12c49b56 */
  if ((C.sf!=C.of)) goto L_12c49b56;
  /* 12c49b37 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49b3b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49b3e jg 0x12c49b56 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c49b56;
  /* 12c49b40 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49b44 movsx ecx, byte ptr [eax + 0x12c69e70] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12c69e70))));
  /* 12c49b4b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12c49b4e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12c49b54 jmp 0x12c49b60 */
  goto L_12c49b60;
L_12c49b56:;
  /* 12c49b56 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12c49b60:;
  /* 12c49b60 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12c49b66 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c49b69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c49b6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c49b6f movsx edx, byte ptr [ecx + eax*8 + 0x12c69e90] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12c69e90))));
  /* 12c49b77 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12c49b7a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c49b7d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c49b80 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12c49b86 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49b8d ja 0x12c4a6f2 */
  if ((!C.cf&&!C.zf)) goto L_12c4a6f2;
  /* 12c49b93 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12c49b99 jmp dword ptr [ecx*4 + 0x12c4a704] */
  switch (ECX) {
    case 0: goto L_12c49ba0;
    case 1: goto L_12c49c3a;
    case 2: goto L_12c49c7c;
    case 3: goto L_12c49ceb;
    case 4: goto L_12c49d43;
    case 5: goto L_12c49d52;
    case 6: goto L_12c49d9e;
    case 7: goto L_12c49e31;
    case 8: goto L_12c49cc8;
    case 9: goto L_12c49cd3;
    case 10: goto L_12c49cbe;
    case 11: goto L_12c49cb3;
    case 12: goto L_12c49cde;
    case 13: goto L_12c49ce6;
    default: x86_unimpl("switch@0x12c49b99 out of table"); return;
  }
L_12c49ba0:;
  /* 12c49ba0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12c49ba7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c49baa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c49bb0 mov eax, dword ptr [0x12c6cc98] */
  EAX = (r32((uint32_t)(0x12c6cc98)));
  /* 12c49bb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c49bb7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12c49bbb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12c49bc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c49bc3 je 0x12c49c1d */
  if (C.zf) goto L_12c49c1d;
  /* 12c49bc5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12c49bcb push edx */
  push32((uint32_t)(EDX));
  /* 12c49bcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c49bcf push eax */
  push32((uint32_t)(EAX));
  /* 12c49bd0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c49bd5 call 0x12c4a810 */
  push32(0x12c49bdau); f_12c4a810();
  /* 12c49bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49bdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c49be0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c49be2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12c49be5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c49be8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49beb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12c49bee:;
  /* 12c49bee movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49bf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c49bf4 jne 0x12c49c17 */
  if (!C.zf) goto L_12c49c17;
  /* 12c49bf6 push 0x12c69f10 */
  push32((uint32_t)(0x12c69f10u));
  /* 12c49bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c49bfd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12c49c02 push 0x12c69f04 */
  push32((uint32_t)(0x12c69f04u));
  /* 12c49c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c49c09 call 0x12c41c10 */
  push32(0x12c49c0eu); f_12c41c10();
  /* 12c49c0e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49c11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49c14 jne 0x12c49c17 */
  if (!C.zf) goto L_12c49c17;
  /* 12c49c16 int3  */
  x86_unimpl("int3 @ 0x12c49c16");
L_12c49c17:;
  /* 12c49c17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c49c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c49c1b jne 0x12c49bee */
  if (!C.zf) goto L_12c49bee;
L_12c49c1d:;
  /* 12c49c1d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12c49c23 push ecx */
  push32((uint32_t)(ECX));
  /* 12c49c24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c49c27 push edx */
  push32((uint32_t)(EDX));
  /* 12c49c28 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49c2c push eax */
  push32((uint32_t)(EAX));
  /* 12c49c2d call 0x12c4a810 */
  push32(0x12c49c32u); f_12c4a810();
  /* 12c49c32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49c35 jmp 0x12c4a6f2 */
  goto L_12c4a6f2;
L_12c49c3a:;
  /* 12c49c3a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c49c41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c49c44 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12c49c4a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12c49c50 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12c49c56 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12c49c5c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c49c5f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c49c66 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12c49c70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12c49c77 jmp 0x12c4a6f2 */
  goto L_12c4a6f2;
L_12c49c7c:;
  /* 12c49c7c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49c80 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12c49c86 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12c49c8c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c49c8f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12c49c95 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49c9c ja 0x12c49ce6 */
  if ((!C.cf&&!C.zf)) goto L_12c49ce6;
  /* 12c49c9e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12c49ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c49ca6 mov al, byte ptr [ecx + 0x12c4a73c] */
  AL = (r8((uint32_t)(ECX + 0x12c4a73c)));
  /* 12c49cac jmp dword ptr [eax*4 + 0x12c4a724] */
  switch (EAX) {
    case 0: goto L_12c49cc8;
    case 1: goto L_12c49cd3;
    case 2: goto L_12c49cbe;
    case 3: goto L_12c49cb3;
    case 4: goto L_12c49cde;
    case 5: goto L_12c49ce6;
    default: x86_unimpl("switch@0x12c49cac out of table"); return;
  }
L_12c49cb3:;
  /* 12c49cb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49cb6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c49cb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c49cbc jmp 0x12c49ce6 */
  goto L_12c49ce6;
L_12c49cbe:;
  /* 12c49cbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49cc1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12c49cc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c49cc6 jmp 0x12c49ce6 */
  goto L_12c49ce6;
L_12c49cc8:;
  /* 12c49cc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49ccb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12c49cce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c49cd1 jmp 0x12c49ce6 */
  goto L_12c49ce6;
L_12c49cd3:;
  /* 12c49cd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49cd6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12c49cd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c49cdc jmp 0x12c49ce6 */
  goto L_12c49ce6;
L_12c49cde:;
  /* 12c49cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49ce1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12c49ce3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c49ce6:;
  /* 12c49ce6 jmp 0x12c4a6f2 */
  goto L_12c4a6f2;
L_12c49ceb:;
  /* 12c49ceb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49cef cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49cf2 jne 0x12c49d27 */
  if (!C.zf) goto L_12c49d27;
  /* 12c49cf4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c49cf7 push edx */
  push32((uint32_t)(EDX));
  /* 12c49cf8 call 0x12c4a920 */
  push32(0x12c49cfdu); f_12c4a920();
  /* 12c49cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49d00 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12c49d06 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49d0d jge 0x12c49d25 */
  if ((C.sf==C.of)) goto L_12c49d25;
  /* 12c49d0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49d12 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12c49d14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c49d17 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12c49d1d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c49d1f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12c49d25:;
  /* 12c49d25 jmp 0x12c49d3e */
  goto L_12c49d3e;
L_12c49d27:;
  /* 12c49d27 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12c49d2d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c49d30 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49d34 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12c49d38 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12c49d3e:;
  /* 12c49d3e jmp 0x12c4a6f2 */
  goto L_12c4a6f2;
L_12c49d43:;
  /* 12c49d43 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12c49d4d jmp 0x12c4a6f2 */
  goto L_12c4a6f2;
L_12c49d52:;
  /* 12c49d52 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49d56 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49d59 jne 0x12c49d82 */
  if (!C.zf) goto L_12c49d82;
  /* 12c49d5b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c49d5e push eax */
  push32((uint32_t)(EAX));
  /* 12c49d5f call 0x12c4a920 */
  push32(0x12c49d64u); f_12c4a920();
  /* 12c49d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49d67 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12c49d6d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49d74 jge 0x12c49d80 */
  if ((C.sf==C.of)) goto L_12c49d80;
  /* 12c49d76 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12c49d80:;
  /* 12c49d80 jmp 0x12c49d99 */
  goto L_12c49d99;
L_12c49d82:;
  /* 12c49d82 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c49d88 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c49d8b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49d8f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12c49d93 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12c49d99:;
  /* 12c49d99 jmp 0x12c4a6f2 */
  goto L_12c4a6f2;
L_12c49d9e:;
  /* 12c49d9e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49da2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12c49da8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12c49dae sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c49db1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12c49db7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49dbe ja 0x12c49e2c */
  if ((!C.cf&&!C.zf)) goto L_12c49e2c;
  /* 12c49dc0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12c49dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c49dc8 mov al, byte ptr [ecx + 0x12c4a761] */
  AL = (r8((uint32_t)(ECX + 0x12c4a761)));
  /* 12c49dce jmp dword ptr [eax*4 + 0x12c4a74d] */
  switch (EAX) {
    case 0: goto L_12c49de0;
    case 1: goto L_12c49e19;
    case 2: goto L_12c49dd5;
    case 3: goto L_12c49e23;
    case 4: goto L_12c49e2c;
    default: x86_unimpl("switch@0x12c49dce out of table"); return;
  }
L_12c49dd5:;
  /* 12c49dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49dd8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12c49ddb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c49dde jmp 0x12c49e2c */
  goto L_12c49e2c;
L_12c49de0:;
  /* 12c49de0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c49de3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c49de6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49de9 jne 0x12c49e0b */
  if (!C.zf) goto L_12c49e0b;
  /* 12c49deb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c49dee movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c49df2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49df5 jne 0x12c49e0b */
  if (!C.zf) goto L_12c49e0b;
  /* 12c49df7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c49dfa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49dfd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c49e00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49e03 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c49e06 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c49e09 jmp 0x12c49e17 */
  goto L_12c49e17;
L_12c49e0b:;
  /* 12c49e0b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12c49e12 jmp 0x12c49ba0 */
  goto L_12c49ba0;
L_12c49e17:;
  /* 12c49e17 jmp 0x12c49e2c */
  goto L_12c49e2c;
L_12c49e19:;
  /* 12c49e19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49e1c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12c49e1e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c49e21 jmp 0x12c49e2c */
  goto L_12c49e2c;
L_12c49e23:;
  /* 12c49e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49e26 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c49e29 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c49e2c:;
  /* 12c49e2c jmp 0x12c4a6f2 */
  goto L_12c4a6f2;
L_12c49e31:;
  /* 12c49e31 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c49e35 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12c49e3b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12c49e41 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c49e44 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12c49e4a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49e51 ja 0x12c4a517 */
  if ((!C.cf&&!C.zf)) goto L_12c4a517;
  /* 12c49e57 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12c49e5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c49e5f mov cl, byte ptr [edx + 0x12c4a7cc] */
  CL = (r8((uint32_t)(EDX + 0x12c4a7cc)));
  /* 12c49e65 jmp dword ptr [ecx*4 + 0x12c4a790] */
  switch (ECX) {
    case 0: goto L_12c49e6c;
    case 1: goto L_12c4a100;
    case 2: goto L_12c49f90;
    case 3: goto L_12c4a239;
    case 4: goto L_12c49efb;
    case 5: goto L_12c49e81;
    case 6: goto L_12c4a20b;
    case 7: goto L_12c4a110;
    case 8: goto L_12c4a0b5;
    case 9: goto L_12c4a285;
    case 10: goto L_12c4a22f;
    case 11: goto L_12c49fa6;
    case 12: goto L_12c4a223;
    case 13: goto L_12c4a245;
    case 14: goto L_12c4a517;
    default: x86_unimpl("switch@0x12c49e65 out of table"); return;
  }
L_12c49e6c:;
  /* 12c49e6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49e6f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12c49e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c49e76 jne 0x12c49e81 */
  if (!C.zf) goto L_12c49e81;
  /* 12c49e78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49e7b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c49e7e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c49e81:;
  /* 12c49e81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49e84 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12c49e8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c49e8c je 0x12c49ec7 */
  if (C.zf) goto L_12c49ec7;
  /* 12c49e8e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c49e91 push eax */
  push32((uint32_t)(EAX));
  /* 12c49e92 call 0x12c4a960 */
  push32(0x12c49e97u); f_12c4a960();
  /* 12c49e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49e9a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12c49e9e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12c49ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c49ea3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12c49ea9 push edx */
  push32((uint32_t)(EDX));
  /* 12c49eaa call 0x12c4ba40 */
  push32(0x12c49eafu); f_12c4ba40();
  /* 12c49eaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49eb2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c49eb5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49eb9 jge 0x12c49ec5 */
  if ((C.sf==C.of)) goto L_12c49ec5;
  /* 12c49ebb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12c49ec5:;
  /* 12c49ec5 jmp 0x12c49eed */
  goto L_12c49eed;
L_12c49ec7:;
  /* 12c49ec7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c49eca push eax */
  push32((uint32_t)(EAX));
  /* 12c49ecb call 0x12c4a920 */
  push32(0x12c49ed0u); f_12c4a920();
  /* 12c49ed0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49ed3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12c49eda mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12c49ee0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12c49ee6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12c49eed:;
  /* 12c49eed lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12c49ef3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c49ef6 jmp 0x12c4a517 */
  goto L_12c4a517;
L_12c49efb:;
  /* 12c49efb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c49efe push eax */
  push32((uint32_t)(EAX));
  /* 12c49eff call 0x12c4a920 */
  push32(0x12c49f04u); f_12c4a920();
  /* 12c49f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49f07 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12c49f0d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49f14 je 0x12c49f22 */
  if (C.zf) goto L_12c49f22;
  /* 12c49f16 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c49f1c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49f20 jne 0x12c49f3c */
  if (!C.zf) goto L_12c49f3c;
L_12c49f22:;
  /* 12c49f22 mov edx, dword ptr [0x12c6cfb0] */
  EDX = (r32((uint32_t)(0x12c6cfb0)));
  /* 12c49f28 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c49f2b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c49f2e push eax */
  push32((uint32_t)(EAX));
  /* 12c49f2f call 0x12c45980 */
  push32(0x12c49f34u); f_12c45980();
  /* 12c49f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49f37 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c49f3a jmp 0x12c49f8b */
  goto L_12c49f8b;
L_12c49f3c:;
  /* 12c49f3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49f3f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12c49f45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c49f47 je 0x12c49f6c */
  if (C.zf) goto L_12c49f6c;
  /* 12c49f49 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c49f4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c49f52 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c49f55 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c49f5b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12c49f5e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c49f60 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c49f63 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12c49f6a jmp 0x12c49f8b */
  goto L_12c49f8b;
L_12c49f6c:;
  /* 12c49f6c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12c49f73 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c49f79 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c49f7c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c49f7f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12c49f85 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12c49f88 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c49f8b:;
  /* 12c49f8b jmp 0x12c4a517 */
  goto L_12c4a517;
L_12c49f90:;
  /* 12c49f90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49f93 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12c49f99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c49f9b jne 0x12c49fa6 */
  if (!C.zf) goto L_12c49fa6;
  /* 12c49f9d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49fa0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c49fa3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c49fa6:;
  /* 12c49fa6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49fad jne 0x12c49fbb */
  if (!C.zf) goto L_12c49fbb;
  /* 12c49faf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12c49fb9 jmp 0x12c49fc7 */
  goto L_12c49fc7;
L_12c49fbb:;
  /* 12c49fbb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c49fc1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12c49fc7:;
  /* 12c49fc7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12c49fcd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12c49fd3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c49fd6 push edx */
  push32((uint32_t)(EDX));
  /* 12c49fd7 call 0x12c4a920 */
  push32(0x12c49fdcu); f_12c4a920();
  /* 12c49fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c49fdf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c49fe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c49fe5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12c49fea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c49fec je 0x12c4a056 */
  if (C.zf) goto L_12c4a056;
  /* 12c49fee cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c49ff2 jne 0x12c49ffd */
  if (!C.zf) goto L_12c49ffd;
  /* 12c49ff4 mov ecx, dword ptr [0x12c6cfb4] */
  ECX = (r32((uint32_t)(0x12c6cfb4)));
  /* 12c49ffa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12c49ffd:;
  /* 12c49ffd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12c4a004 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a007 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12c4a00d:;
  /* 12c4a00d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12c4a013 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12c4a019 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a01c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12c4a022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a024 je 0x12c4a046 */
  if (C.zf) goto L_12c4a046;
  /* 12c4a026 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12c4a02c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a02e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12c4a031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a033 je 0x12c4a046 */
  if (C.zf) goto L_12c4a046;
  /* 12c4a035 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12c4a03b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a03e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12c4a044 jmp 0x12c4a00d */
  goto L_12c4a00d;
L_12c4a046:;
  /* 12c4a046 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12c4a04c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a04f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c4a051 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12c4a054 jmp 0x12c4a0b0 */
  goto L_12c4a0b0;
L_12c4a056:;
  /* 12c4a056 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a05a jne 0x12c4a064 */
  if (!C.zf) goto L_12c4a064;
  /* 12c4a05c mov eax, dword ptr [0x12c6cfb0] */
  EAX = (r32((uint32_t)(0x12c6cfb0)));
  /* 12c4a061 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12c4a064:;
  /* 12c4a064 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a067 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12c4a06d:;
  /* 12c4a06d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12c4a073 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12c4a079 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a07c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12c4a082 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a084 je 0x12c4a0a4 */
  if (C.zf) goto L_12c4a0a4;
  /* 12c4a086 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12c4a08c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4a08f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a091 je 0x12c4a0a4 */
  if (C.zf) goto L_12c4a0a4;
  /* 12c4a093 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12c4a099 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a09c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12c4a0a2 jmp 0x12c4a06d */
  goto L_12c4a06d;
L_12c4a0a4:;
  /* 12c4a0a4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12c4a0aa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a0ad mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12c4a0b0:;
  /* 12c4a0b0 jmp 0x12c4a517 */
  goto L_12c4a517;
L_12c4a0b5:;
  /* 12c4a0b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c4a0b8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a0b9 call 0x12c4a920 */
  push32(0x12c4a0beu); f_12c4a920();
  /* 12c4a0be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a0c1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12c4a0c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a0ca and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a0cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a0cf je 0x12c4a0e3 */
  if (C.zf) goto L_12c4a0e3;
  /* 12c4a0d1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12c4a0d7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12c4a0de mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12c4a0e1 jmp 0x12c4a0f1 */
  goto L_12c4a0f1;
L_12c4a0e3:;
  /* 12c4a0e3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12c4a0e9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12c4a0ef mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12c4a0f1:;
  /* 12c4a0f1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12c4a0fb jmp 0x12c4a517 */
  goto L_12c4a517;
L_12c4a100:;
  /* 12c4a100 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c4a107 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12c4a10a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c4a10d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12c4a110:;
  /* 12c4a110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a113 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12c4a115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4a118 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12c4a11e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c4a121 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a128 jge 0x12c4a136 */
  if ((C.sf==C.of)) goto L_12c4a136;
  /* 12c4a12a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12c4a134 jmp 0x12c4a152 */
  goto L_12c4a152;
L_12c4a136:;
  /* 12c4a136 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a13d jne 0x12c4a152 */
  if (!C.zf) goto L_12c4a152;
  /* 12c4a13f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c4a143 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a146 jne 0x12c4a152 */
  if (!C.zf) goto L_12c4a152;
  /* 12c4a148 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12c4a152:;
  /* 12c4a152 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4a155 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a158 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12c4a15b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4a15e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a161 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4a163 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c4a166 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12c4a16c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12c4a172 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4a175 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a176 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c4a17c push edx */
  push32((uint32_t)(EDX));
  /* 12c4a17d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c4a181 push eax */
  push32((uint32_t)(EAX));
  /* 12c4a182 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a185 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a186 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12c4a18c push edx */
  push32((uint32_t)(EDX));
  /* 12c4a18d call dword ptr [0x12c6d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6d3a0))), 0x12c4a193u);
  /* 12c4a193 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a196 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a199 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a19e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a1a0 je 0x12c4a1b8 */
  if (C.zf) goto L_12c4a1b8;
  /* 12c4a1a2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a1a9 jne 0x12c4a1b8 */
  if (!C.zf) goto L_12c4a1b8;
  /* 12c4a1ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a1ae push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a1af call dword ptr [0x12c6d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6d3ac))), 0x12c4a1b5u);
  /* 12c4a1b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4a1b8:;
  /* 12c4a1b8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12c4a1bc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a1bf jne 0x12c4a1da */
  if (!C.zf) goto L_12c4a1da;
  /* 12c4a1c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a1c4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a1c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a1cb jne 0x12c4a1da */
  if (!C.zf) goto L_12c4a1da;
  /* 12c4a1cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a1d1 call dword ptr [0x12c6d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6d3a4))), 0x12c4a1d7u);
  /* 12c4a1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4a1da:;
  /* 12c4a1da mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a1dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c4a1e0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a1e3 jne 0x12c4a1f7 */
  if (!C.zf) goto L_12c4a1f7;
  /* 12c4a1e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a1e8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c4a1eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4a1ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a1f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a1f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12c4a1f7:;
  /* 12c4a1f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a1fa push eax */
  push32((uint32_t)(EAX));
  /* 12c4a1fb call 0x12c45980 */
  push32(0x12c4a200u); f_12c45980();
  /* 12c4a200 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a203 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c4a206 jmp 0x12c4a517 */
  goto L_12c4a517;
L_12c4a20b:;
  /* 12c4a20b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a20e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4a211 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4a214 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12c4a21e jmp 0x12c4a2a5 */
  goto L_12c4a2a5;
L_12c4a223:;
  /* 12c4a223 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12c4a22d jmp 0x12c4a2a5 */
  goto L_12c4a2a5;
L_12c4a22f:;
  /* 12c4a22f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12c4a239:;
  /* 12c4a239 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12c4a243 jmp 0x12c4a24f */
  goto L_12c4a24f;
L_12c4a245:;
  /* 12c4a245 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12c4a24f:;
  /* 12c4a24f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12c4a259 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a25c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4a262 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a264 je 0x12c4a283 */
  if (C.zf) goto L_12c4a283;
  /* 12c4a266 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12c4a26d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12c4a273 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a276 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12c4a27c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12c4a283:;
  /* 12c4a283 jmp 0x12c4a2a5 */
  goto L_12c4a2a5;
L_12c4a285:;
  /* 12c4a285 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12c4a28f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a292 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4a298 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4a29a je 0x12c4a2a5 */
  if (C.zf) goto L_12c4a2a5;
  /* 12c4a29c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a29f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c4a2a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c4a2a5:;
  /* 12c4a2a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a2a8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a2ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a2af je 0x12c4a2ce */
  if (C.zf) goto L_12c4a2ce;
  /* 12c4a2b1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12c4a2b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a2b5 call 0x12c4a940 */
  push32(0x12c4a2bau); f_12c4a940();
  /* 12c4a2ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a2bd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c4a2c3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12c4a2c9 jmp 0x12c4a35f */
  goto L_12c4a35f;
L_12c4a2ce:;
  /* 12c4a2ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a2d1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4a2d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a2d6 je 0x12c4a320 */
  if (C.zf) goto L_12c4a320;
  /* 12c4a2d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a2db and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a2de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a2e0 je 0x12c4a300 */
  if (C.zf) goto L_12c4a300;
  /* 12c4a2e2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12c4a2e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a2e6 call 0x12c4a920 */
  push32(0x12c4a2ebu); f_12c4a920();
  /* 12c4a2eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a2ee movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12c4a2f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c4a2f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c4a2f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12c4a2fe jmp 0x12c4a31e */
  goto L_12c4a31e;
L_12c4a300:;
  /* 12c4a300 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c4a303 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a304 call 0x12c4a920 */
  push32(0x12c4a309u); f_12c4a920();
  /* 12c4a309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a30c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a311 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c4a312 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c4a318 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12c4a31e:;
  /* 12c4a31e jmp 0x12c4a35f */
  goto L_12c4a35f;
L_12c4a320:;
  /* 12c4a320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a323 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a328 je 0x12c4a345 */
  if (C.zf) goto L_12c4a345;
  /* 12c4a32a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12c4a32d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a32e call 0x12c4a920 */
  push32(0x12c4a333u); f_12c4a920();
  /* 12c4a333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a336 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c4a337 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c4a33d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12c4a343 jmp 0x12c4a35f */
  goto L_12c4a35f;
L_12c4a345:;
  /* 12c4a345 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12c4a348 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a349 call 0x12c4a920 */
  push32(0x12c4a34eu); f_12c4a920();
  /* 12c4a34e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a351 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4a353 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12c4a359 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12c4a35f:;
  /* 12c4a35f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a362 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4a365 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a367 je 0x12c4a3a7 */
  if (C.zf) goto L_12c4a3a7;
  /* 12c4a369 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a370 jg 0x12c4a3a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4a3a7;
  /* 12c4a372 jl 0x12c4a37d */
  if ((C.sf!=C.of)) goto L_12c4a37d;
  /* 12c4a374 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a37b jae 0x12c4a3a7 */
  if (!C.cf) goto L_12c4a3a7;
L_12c4a37d:;
  /* 12c4a37d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12c4a383 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4a385 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12c4a38b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a38e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4a390 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12c4a396 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12c4a39c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a39f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c4a3a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4a3a5 jmp 0x12c4a3bf */
  goto L_12c4a3bf;
L_12c4a3a7:;
  /* 12c4a3a7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12c4a3ad mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12c4a3b3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12c4a3b9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12c4a3bf:;
  /* 12c4a3bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a3c2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4a3c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a3ca jne 0x12c4a3e7 */
  if (!C.zf) goto L_12c4a3e7;
  /* 12c4a3cc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c4a3d2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12c4a3d8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4a3db mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12c4a3e1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12c4a3e7:;
  /* 12c4a3e7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a3ee jge 0x12c4a3fc */
  if ((C.sf==C.of)) goto L_12c4a3fc;
  /* 12c4a3f0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12c4a3fa jmp 0x12c4a405 */
  goto L_12c4a405;
L_12c4a3fc:;
  /* 12c4a3fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a3ff and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4a402 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c4a405:;
  /* 12c4a405 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c4a40b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a413 jne 0x12c4a41c */
  if (!C.zf) goto L_12c4a41c;
  /* 12c4a415 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c4a41c:;
  /* 12c4a41c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12c4a41f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12c4a422:;
  /* 12c4a422 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c4a428 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12c4a42e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a431 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12c4a437 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a439 jg 0x12c4a44f */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4a44f;
  /* 12c4a43b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c4a441 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12c4a447 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4a449 je 0x12c4a4d0 */
  if (C.zf) goto L_12c4a4d0;
L_12c4a44f:;
  /* 12c4a44f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12c4a455 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c4a456 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a457 push eax */
  push32((uint32_t)(EAX));
  /* 12c4a458 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12c4a45e push edx */
  push32((uint32_t)(EDX));
  /* 12c4a45f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c4a465 push eax */
  push32((uint32_t)(EAX));
  /* 12c4a466 call 0x12c497e0 */
  push32(0x12c4a46bu); f_12c497e0();
  /* 12c4a46b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a46e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12c4a474 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12c4a47a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c4a47b push edx */
  push32((uint32_t)(EDX));
  /* 12c4a47c push eax */
  push32((uint32_t)(EAX));
  /* 12c4a47d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12c4a483 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a484 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12c4a48a push edx */
  push32((uint32_t)(EDX));
  /* 12c4a48b call 0x12c49770 */
  push32(0x12c4a490u); f_12c49770();
  /* 12c4a490 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12c4a496 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12c4a49c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a4a3 jle 0x12c4a4b7 */
  if ((C.zf||C.sf!=C.of)) goto L_12c4a4b7;
  /* 12c4a4a5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12c4a4ab add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a4b1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12c4a4b7:;
  /* 12c4a4b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a4ba mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12c4a4c0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12c4a4c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a4c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a4c8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c4a4cb jmp 0x12c4a422 */
  goto L_12c4a422;
L_12c4a4d0:;
  /* 12c4a4d0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12c4a4d3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a4d6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c4a4d9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a4dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a4df mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c4a4e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a4e5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a4ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a4ec je 0x12c4a517 */
  if (C.zf) goto L_12c4a517;
  /* 12c4a4ee mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a4f1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4a4f4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a4f7 jne 0x12c4a4ff */
  if (!C.zf) goto L_12c4a4ff;
  /* 12c4a4f9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a4fd jne 0x12c4a517 */
  if (!C.zf) goto L_12c4a517;
L_12c4a4ff:;
  /* 12c4a4ff mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a502 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a505 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c4a508 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a50b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12c4a50e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4a511 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a514 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12c4a517:;
  /* 12c4a517 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a51e jne 0x12c4a6f2 */
  if (!C.zf) goto L_12c4a6f2;
  /* 12c4a524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a527 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a52a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a52c je 0x12c4a57d */
  if (C.zf) goto L_12c4a57d;
  /* 12c4a52e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a531 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4a537 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4a539 je 0x12c4a54b */
  if (C.zf) goto L_12c4a54b;
  /* 12c4a53b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12c4a542 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c4a549 jmp 0x12c4a57d */
  goto L_12c4a57d;
L_12c4a54b:;
  /* 12c4a54b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a54e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4a551 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a553 je 0x12c4a565 */
  if (C.zf) goto L_12c4a565;
  /* 12c4a555 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12c4a55c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c4a563 jmp 0x12c4a57d */
  goto L_12c4a57d;
L_12c4a565:;
  /* 12c4a565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a568 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4a56b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a56d je 0x12c4a57d */
  if (C.zf) goto L_12c4a57d;
  /* 12c4a56f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12c4a576 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12c4a57d:;
  /* 12c4a57d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12c4a583 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a586 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a589 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12c4a58f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a592 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4a595 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a597 jne 0x12c4a5b5 */
  if (!C.zf) goto L_12c4a5b5;
  /* 12c4a599 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c4a59f push eax */
  push32((uint32_t)(EAX));
  /* 12c4a5a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a5a4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12c4a5aa push edx */
  push32((uint32_t)(EDX));
  /* 12c4a5ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c4a5ad call 0x12c4a890 */
  push32(0x12c4a5b2u); f_12c4a890();
  /* 12c4a5b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4a5b5:;
  /* 12c4a5b5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c4a5bb push eax */
  push32((uint32_t)(EAX));
  /* 12c4a5bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a5bf push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a5c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4a5c3 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a5c4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12c4a5ca push eax */
  push32((uint32_t)(EAX));
  /* 12c4a5cb call 0x12c4a8d0 */
  push32(0x12c4a5d0u); f_12c4a8d0();
  /* 12c4a5d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a5d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a5d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4a5d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4a5db je 0x12c4a603 */
  if (C.zf) goto L_12c4a603;
  /* 12c4a5dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a5e0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4a5e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a5e5 jne 0x12c4a603 */
  if (!C.zf) goto L_12c4a603;
  /* 12c4a5e7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c4a5ed push eax */
  push32((uint32_t)(EAX));
  /* 12c4a5ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a5f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a5f2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12c4a5f8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a5f9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c4a5fb call 0x12c4a890 */
  push32(0x12c4a600u); f_12c4a890();
  /* 12c4a600 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4a603:;
  /* 12c4a603 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a607 je 0x12c4a6b1 */
  if (C.zf) goto L_12c4a6b1;
  /* 12c4a60d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a611 jle 0x12c4a6b1 */
  if ((C.zf||C.sf!=C.of)) goto L_12c4a6b1;
  /* 12c4a617 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a61a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12c4a620 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4a623 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12c4a629:;
  /* 12c4a629 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12c4a62f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12c4a635 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a638 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12c4a63e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a640 je 0x12c4a6af */
  if (C.zf) goto L_12c4a6af;
  /* 12c4a642 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12c4a648 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12c4a64b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12c4a652 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12c4a659 push eax */
  push32((uint32_t)(EAX));
  /* 12c4a65a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12c4a660 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a661 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12c4a667 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a66a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12c4a670 call 0x12c4ba40 */
  push32(0x12c4a675u); f_12c4ba40();
  /* 12c4a675 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a678 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12c4a67e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a685 jg 0x12c4a689 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4a689;
  /* 12c4a687 jmp 0x12c4a6af */
  goto L_12c4a6af;
L_12c4a689:;
  /* 12c4a689 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c4a68f push eax */
  push32((uint32_t)(EAX));
  /* 12c4a690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a693 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a694 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12c4a69a push edx */
  push32((uint32_t)(EDX));
  /* 12c4a69b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12c4a6a1 push eax */
  push32((uint32_t)(EAX));
  /* 12c4a6a2 call 0x12c4a8d0 */
  push32(0x12c4a6a7u); f_12c4a8d0();
  /* 12c4a6a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a6aa jmp 0x12c4a629 */
  goto L_12c4a629;
L_12c4a6af:;
  /* 12c4a6af jmp 0x12c4a6cc */
  goto L_12c4a6cc;
L_12c4a6b1:;
  /* 12c4a6b1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12c4a6b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a6b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a6bb push edx */
  push32((uint32_t)(EDX));
  /* 12c4a6bc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4a6bf push eax */
  push32((uint32_t)(EAX));
  /* 12c4a6c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4a6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a6c4 call 0x12c4a8d0 */
  push32(0x12c4a6c9u); f_12c4a8d0();
  /* 12c4a6c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4a6cc:;
  /* 12c4a6cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a6cf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4a6d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4a6d4 je 0x12c4a6f2 */
  if (C.zf) goto L_12c4a6f2;
  /* 12c4a6d6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12c4a6dc push eax */
  push32((uint32_t)(EAX));
  /* 12c4a6dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a6e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a6e1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12c4a6e7 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a6e8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c4a6ea call 0x12c4a890 */
  push32(0x12c4a6efu); f_12c4a890();
  /* 12c4a6ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4a6f2:;
  /* 12c4a6f2 jmp 0x12c49b04 */
  goto L_12c49b04;
L_12c4a6f7:;
  /* 12c4a6f7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12c4a6fd pop edi */
  EDI = (pop32());
  /* 12c4a6fe pop esi */
  ESI = (pop32());
  /* 12c4a6ff pop ebx */
  EBX = (pop32());
  /* 12c4a700 mov esp, ebp */
  ESP = (EBP);
  /* 12c4a702 pop ebp */
  EBP = (pop32());
  /* 12c4a703 ret  */
  ESPCHK(0x12c49ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a810 @ 0x12c4a810 (119 bytes, 44 insns) */
void f_12c4a810(void) {
  FTRACE(0x12c4a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4a810 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4a811 mov ebp, esp */
  EBP = (ESP);
  /* 12c4a813 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a814 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a817 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c4a81a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a81d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a820 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12c4a823 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a826 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a82a jl 0x12c4a852 */
  if ((C.sf!=C.of)) goto L_12c4a852;
  /* 12c4a82c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a82f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4a831 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12c4a834 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c4a836 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12c4a83a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4a840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4a843 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a846 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c4a848 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a84b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a84e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c4a850 jmp 0x12c4a865 */
  goto L_12c4a865;
L_12c4a852:;
  /* 12c4a852 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a855 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a859 push eax */
  push32((uint32_t)(EAX));
  /* 12c4a85a call 0x12c49860 */
  push32(0x12c4a85fu); f_12c49860();
  /* 12c4a85f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a862 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4a865:;
  /* 12c4a865 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a869 jne 0x12c4a876 */
  if (!C.zf) goto L_12c4a876;
  /* 12c4a86b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4a86e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c4a874 jmp 0x12c4a883 */
  goto L_12c4a883;
L_12c4a876:;
  /* 12c4a876 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4a879 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c4a87b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a87e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4a881 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c4a883:;
  /* 12c4a883 mov esp, ebp */
  ESP = (EBP);
  /* 12c4a885 pop ebp */
  EBP = (pop32());
  /* 12c4a886 ret  */
  ESPCHK(0x12c4a810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a890 @ 0x12c4a890 (53 bytes, 23 insns) */
void f_12c4a890(void) {
  FTRACE(0x12c4a890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4a890 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4a891 mov ebp, esp */
  EBP = (ESP);
L_12c4a893:;
  /* 12c4a893 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a896 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a899 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a89c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c4a89f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a8a1 jle 0x12c4a8c3 */
  if ((C.zf||C.sf!=C.of)) goto L_12c4a8c3;
  /* 12c4a8a3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4a8a6 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a8a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4a8aa push eax */
  push32((uint32_t)(EAX));
  /* 12c4a8ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a8ae push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a8af call 0x12c4a810 */
  push32(0x12c4a8b4u); f_12c4a810();
  /* 12c4a8b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a8b7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4a8ba cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a8bd jne 0x12c4a8c1 */
  if (!C.zf) goto L_12c4a8c1;
  /* 12c4a8bf jmp 0x12c4a8c3 */
  goto L_12c4a8c3;
L_12c4a8c1:;
  /* 12c4a8c1 jmp 0x12c4a893 */
  goto L_12c4a893;
L_12c4a8c3:;
  /* 12c4a8c3 pop ebp */
  EBP = (pop32());
  /* 12c4a8c4 ret  */
  ESPCHK(0x12c4a890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8d0 @ 0x12c4a8d0 (74 bytes, 31 insns) */
void f_12c4a8d0(void) {
  FTRACE(0x12c4a8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4a8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4a8d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4a8d3 push ecx */
  push32((uint32_t)(ECX));
L_12c4a8d4:;
  /* 12c4a8d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a8d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4a8da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a8dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c4a8e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4a8e2 jle 0x12c4a916 */
  if ((C.zf||C.sf!=C.of)) goto L_12c4a916;
  /* 12c4a8e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4a8e7 push edx */
  push32((uint32_t)(EDX));
  /* 12c4a8e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4a8eb push eax */
  push32((uint32_t)(EAX));
  /* 12c4a8ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a8ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4a8f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4a8f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a8f8 push eax */
  push32((uint32_t)(EAX));
  /* 12c4a8f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a8fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a8ff mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c4a902 call 0x12c4a810 */
  push32(0x12c4a907u); f_12c4a810();
  /* 12c4a907 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a90a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4a90d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a910 jne 0x12c4a914 */
  if (!C.zf) goto L_12c4a914;
  /* 12c4a912 jmp 0x12c4a916 */
  goto L_12c4a916;
L_12c4a914:;
  /* 12c4a914 jmp 0x12c4a8d4 */
  goto L_12c4a8d4;
L_12c4a916:;
  /* 12c4a916 mov esp, ebp */
  ESP = (EBP);
  /* 12c4a918 pop ebp */
  EBP = (pop32());
  /* 12c4a919 ret  */
  ESPCHK(0x12c4a8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a920 @ 0x12c4a920 (26 bytes, 12 insns) */
void f_12c4a920(void) {
  FTRACE(0x12c4a920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4a920 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4a921 mov ebp, esp */
  EBP = (ESP);
  /* 12c4a923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a926 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4a928 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a92b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a92e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c4a930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a933 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4a935 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c4a938 pop ebp */
  EBP = (pop32());
  /* 12c4a939 ret  */
  ESPCHK(0x12c4a920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a940 @ 0x12c4a940 (31 bytes, 14 insns) */
void f_12c4a940(void) {
  FTRACE(0x12c4a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4a940 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4a941 mov ebp, esp */
  EBP = (ESP);
  /* 12c4a943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a946 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4a948 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a94b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a94e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c4a950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a953 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4a955 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4a958 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c4a95a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c4a95d pop ebp */
  EBP = (pop32());
  /* 12c4a95e ret  */
  ESPCHK(0x12c4a940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a960 @ 0x12c4a960 (27 bytes, 12 insns) */
void f_12c4a960(void) {
  FTRACE(0x12c4a960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4a960 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4a961 mov ebp, esp */
  EBP = (ESP);
  /* 12c4a963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a966 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4a968 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a96e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c4a970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a973 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4a975 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12c4a979 pop ebp */
  EBP = (pop32());
  /* 12c4a97a ret  */
  ESPCHK(0x12c4a960u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12c4a980 (145 bytes, 42 insns) */
void f_12c4a980(void) {
  FTRACE(0x12c4a980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4a980 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4a981 mov ebp, esp */
  EBP = (ESP);
  /* 12c4a983 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4a984 call 0x12c4aa30 */
  push32(0x12c4a989u); f_12c4aa30();
  /* 12c4a989 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a98c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c4a98e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4a995 jmp 0x12c4a9a0 */
  goto L_12c4a9a0;
L_12c4a997:;
  /* 12c4a997 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a99a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4a99d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c4a9a0:;
  /* 12c4a9a0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a9a4 jae 0x12c4a9ca */
  if (!C.cf) goto L_12c4a9ca;
  /* 12c4a9a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a9a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4a9ac cmp ecx, dword ptr [eax*8 + 0x12c6cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12c6cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a9b3 jne 0x12c4a9c8 */
  if (!C.zf) goto L_12c4a9c8;
  /* 12c4a9b5 call 0x12c4aa20 */
  push32(0x12c4a9bau); f_12c4aa20();
  /* 12c4a9ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4a9bd mov ecx, dword ptr [edx*8 + 0x12c6cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12c6cfbc)));
  /* 12c4a9c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c4a9c6 jmp 0x12c4aa0d */
  goto L_12c4aa0d;
L_12c4a9c8:;
  /* 12c4a9c8 jmp 0x12c4a997 */
  goto L_12c4a997;
L_12c4a9ca:;
  /* 12c4a9ca cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a9ce jb 0x12c4a9e3 */
  if (C.cf) goto L_12c4a9e3;
  /* 12c4a9d0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a9d4 ja 0x12c4a9e3 */
  if ((!C.cf&&!C.zf)) goto L_12c4a9e3;
  /* 12c4a9d6 call 0x12c4aa20 */
  push32(0x12c4a9dbu); f_12c4aa20();
  /* 12c4a9db mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12c4a9e1 jmp 0x12c4aa0d */
  goto L_12c4aa0d;
L_12c4a9e3:;
  /* 12c4a9e3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a9ea jb 0x12c4aa02 */
  if (C.cf) goto L_12c4aa02;
  /* 12c4a9ec cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4a9f3 ja 0x12c4aa02 */
  if ((!C.cf&&!C.zf)) goto L_12c4aa02;
  /* 12c4a9f5 call 0x12c4aa20 */
  push32(0x12c4a9fau); f_12c4aa20();
  /* 12c4a9fa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12c4aa00 jmp 0x12c4aa0d */
  goto L_12c4aa0d;
L_12c4aa02:;
  /* 12c4aa02 call 0x12c4aa20 */
  push32(0x12c4aa07u); f_12c4aa20();
  /* 12c4aa07 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12c4aa0d:;
  /* 12c4aa0d mov esp, ebp */
  ESP = (EBP);
  /* 12c4aa0f pop ebp */
  EBP = (pop32());
  /* 12c4aa10 ret  */
  ESPCHK(0x12c4a980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x12c4aa20 (13 bytes, 6 insns) */
void f_12c4aa20(void) {
  FTRACE(0x12c4aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4aa21 mov ebp, esp */
  EBP = (ESP);
  /* 12c4aa23 call 0x12c42590 */
  push32(0x12c4aa28u); f_12c42590();
  /* 12c4aa28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4aa2b pop ebp */
  EBP = (pop32());
  /* 12c4aa2c ret  */
  ESPCHK(0x12c4aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa30 @ 0x12c4aa30 (13 bytes, 6 insns) */
void f_12c4aa30(void) {
  FTRACE(0x12c4aa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4aa30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4aa31 mov ebp, esp */
  EBP = (ESP);
  /* 12c4aa33 call 0x12c42590 */
  push32(0x12c4aa38u); f_12c42590();
  /* 12c4aa38 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4aa3b pop ebp */
  EBP = (pop32());
  /* 12c4aa3c ret  */
  ESPCHK(0x12c4aa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa40 @ 0x12c4aa40 (664 bytes, 265 insns) [15 switch table(s)] */
void f_12c4aa40(void) {
  FTRACE(0x12c4aa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4aa40 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4aa41 mov ebp, esp */
  EBP = (ESP);
  /* 12c4aa43 push edi */
  push32((uint32_t)(EDI));
  /* 12c4aa44 push esi */
  push32((uint32_t)(ESI));
  /* 12c4aa45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4aa48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4aa4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4aa4e mov eax, ecx */
  EAX = (ECX);
  /* 12c4aa50 mov edx, ecx */
  EDX = (ECX);
  /* 12c4aa52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4aa54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4aa56 jbe 0x12c4aa60 */
  if ((C.cf||C.zf)) goto L_12c4aa60;
  /* 12c4aa58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4aa5a jb 0x12c4abd8 */
  if (C.cf) goto L_12c4abd8;
L_12c4aa60:;
  /* 12c4aa60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c4aa66 jne 0x12c4aa7c */
  if (!C.zf) goto L_12c4aa7c;
  /* 12c4aa68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c4aa6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4aa6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4aa71 jb 0x12c4aa9c */
  if (C.cf) goto L_12c4aa9c;
  /* 12c4aa73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c4aa75 jmp dword ptr [edx*4 + 0x12c4ab88] */
  switch (EDX) {
    case 0: goto L_12c4ab98;
    case 1: goto L_12c4aba0;
    case 2: goto L_12c4abac;
    case 3: goto L_12c4abc0;
    default: x86_unimpl("switch@0x12c4aa75 out of table"); return;
  }
L_12c4aa7c:;
  /* 12c4aa7c mov eax, edi */
  EAX = (EDI);
  /* 12c4aa7e mov edx, 3 */
  EDX = (0x3u);
  /* 12c4aa83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4aa86 jb 0x12c4aa94 */
  if (C.cf) goto L_12c4aa94;
  /* 12c4aa88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4aa8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4aa8d jmp dword ptr [eax*4 + 0x12c4aaa0] */
  switch (EAX) {
    case 1: goto L_12c4aab0;
    case 2: goto L_12c4aadc;
    case 3: goto L_12c4ab00;
    default: x86_unimpl("switch@0x12c4aa8d out of table"); return;
  }
L_12c4aa94:;
  /* 12c4aa94 jmp dword ptr [ecx*4 + 0x12c4ab98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12c4ab98)))); return;
  /* 12c4aa9b nop  */
  /* nop */
L_12c4aa9c:;
  /* 12c4aa9c jmp dword ptr [ecx*4 + 0x12c4ab1c] */
  switch (ECX) {
    case 0: goto L_12c4ab7f;
    case 1: goto L_12c4ab6c;
    case 2: goto L_12c4ab64;
    case 3: goto L_12c4ab5c;
    case 4: goto L_12c4ab54;
    case 5: goto L_12c4ab4c;
    case 6: goto L_12c4ab44;
    case 7: goto L_12c4ab3c;
    default: x86_unimpl("switch@0x12c4aa9c out of table"); return;
  }
  /* 12c4aaa3 nop  */
  /* nop */
L_12c4aab0:;
  /* 12c4aab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4aab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c4aab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c4aab6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c4aab9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c4aabc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c4aabf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c4aac2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c4aac5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4aac8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4aacb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4aace jb 0x12c4aa9c */
  if (C.cf) goto L_12c4aa9c;
  /* 12c4aad0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c4aad2 jmp dword ptr [edx*4 + 0x12c4ab88] */
  switch (EDX) {
    case 0: goto L_12c4ab98;
    case 1: goto L_12c4aba0;
    case 2: goto L_12c4abac;
    case 3: goto L_12c4abc0;
    default: x86_unimpl("switch@0x12c4aad2 out of table"); return;
  }
  /* 12c4aad9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c4aadc:;
  /* 12c4aadc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4aade mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c4aae0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c4aae2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c4aae5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c4aae8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c4aaeb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4aaee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4aaf1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4aaf4 jb 0x12c4aa9c */
  if (C.cf) goto L_12c4aa9c;
  /* 12c4aaf6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c4aaf8 jmp dword ptr [edx*4 + 0x12c4ab88] */
  switch (EDX) {
    case 0: goto L_12c4ab98;
    case 1: goto L_12c4aba0;
    case 2: goto L_12c4abac;
    case 3: goto L_12c4abc0;
    default: x86_unimpl("switch@0x12c4aaf8 out of table"); return;
  }
  /* 12c4aaff nop  */
  /* nop */
L_12c4ab00:;
  /* 12c4ab00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ab02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c4ab04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c4ab06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c4ab07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c4ab0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c4ab0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ab0e jb 0x12c4aa9c */
  if (C.cf) goto L_12c4aa9c;
  /* 12c4ab10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c4ab12 jmp dword ptr [edx*4 + 0x12c4ab88] */
  switch (EDX) {
    case 0: goto L_12c4ab98;
    case 1: goto L_12c4aba0;
    case 2: goto L_12c4abac;
    case 3: goto L_12c4abc0;
    default: x86_unimpl("switch@0x12c4ab12 out of table"); return;
  }
  /* 12c4ab19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c4ab3c:;
  /* 12c4ab3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12c4ab40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12c4ab44:;
  /* 12c4ab44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12c4ab48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12c4ab4c:;
  /* 12c4ab4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12c4ab50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12c4ab54:;
  /* 12c4ab54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12c4ab58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12c4ab5c:;
  /* 12c4ab5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12c4ab60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12c4ab64:;
  /* 12c4ab64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12c4ab68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12c4ab6c:;
  /* 12c4ab6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12c4ab70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12c4ab74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c4ab7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ab7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c4ab7f:;
  /* 12c4ab7f jmp dword ptr [edx*4 + 0x12c4ab88] */
  switch (EDX) {
    case 0: goto L_12c4ab98;
    case 1: goto L_12c4aba0;
    case 2: goto L_12c4abac;
    case 3: goto L_12c4abc0;
    default: x86_unimpl("switch@0x12c4ab7f out of table"); return;
  }
  /* 12c4ab86 mov edi, edi */
  EDI = (EDI);
L_12c4ab98:;
  /* 12c4ab98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ab9b pop esi */
  ESI = (pop32());
  /* 12c4ab9c pop edi */
  EDI = (pop32());
  /* 12c4ab9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4ab9e ret  */
  ESPCHK(0x12c4aa40u, _esp0);
  ESP += 4; return;
  /* 12c4ab9f nop  */
  /* nop */
L_12c4aba0:;
  /* 12c4aba0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c4aba2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c4aba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4aba7 pop esi */
  ESI = (pop32());
  /* 12c4aba8 pop edi */
  EDI = (pop32());
  /* 12c4aba9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4abaa ret  */
  ESPCHK(0x12c4aa40u, _esp0);
  ESP += 4; return;
  /* 12c4abab nop  */
  /* nop */
L_12c4abac:;
  /* 12c4abac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c4abae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c4abb0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c4abb3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c4abb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4abb9 pop esi */
  ESI = (pop32());
  /* 12c4abba pop edi */
  EDI = (pop32());
  /* 12c4abbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4abbc ret  */
  ESPCHK(0x12c4aa40u, _esp0);
  ESP += 4; return;
  /* 12c4abbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c4abc0:;
  /* 12c4abc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c4abc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c4abc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c4abc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c4abca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c4abcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c4abd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4abd3 pop esi */
  ESI = (pop32());
  /* 12c4abd4 pop edi */
  EDI = (pop32());
  /* 12c4abd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4abd6 ret  */
  ESPCHK(0x12c4aa40u, _esp0);
  ESP += 4; return;
  /* 12c4abd7 nop  */
  /* nop */
L_12c4abd8:;
  /* 12c4abd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12c4abdc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12c4abe0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c4abe6 jne 0x12c4ac0c */
  if (!C.zf) goto L_12c4ac0c;
  /* 12c4abe8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c4abeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4abee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4abf1 jb 0x12c4ac00 */
  if (C.cf) goto L_12c4ac00;
  /* 12c4abf3 std  */
  C.df=1;
  /* 12c4abf4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c4abf6 cld  */
  C.df=0;
  /* 12c4abf7 jmp dword ptr [edx*4 + 0x12c4ad20] */
  switch (EDX) {
    case 0: goto L_12c4ad30;
    case 1: goto L_12c4ad38;
    case 2: goto L_12c4ad48;
    case 3: goto L_12c4ad5c;
    default: x86_unimpl("switch@0x12c4abf7 out of table"); return;
  }
  /* 12c4abfe mov edi, edi */
  EDI = (EDI);
L_12c4ac00:;
  /* 12c4ac00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4ac02 jmp dword ptr [ecx*4 + 0x12c4acd0] */
  switch (ECX) {
    case 0: goto L_12c4ad17;
    default: x86_unimpl("switch@0x12c4ac02 out of table"); return;
  }
  /* 12c4ac09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c4ac0c:;
  /* 12c4ac0c mov eax, edi */
  EAX = (EDI);
  /* 12c4ac0e mov edx, 3 */
  EDX = (0x3u);
  /* 12c4ac13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ac16 jb 0x12c4ac24 */
  if (C.cf) goto L_12c4ac24;
  /* 12c4ac18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ac1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ac1d jmp dword ptr [eax*4 + 0x12c4ac28] */
  switch (EAX) {
    case 1: goto L_12c4ac38;
    case 2: goto L_12c4ac58;
    case 3: goto L_12c4ac80;
    default: x86_unimpl("switch@0x12c4ac1d out of table"); return;
  }
L_12c4ac24:;
  /* 12c4ac24 jmp dword ptr [ecx*4 + 0x12c4ad20] */
  switch (ECX) {
    case 0: goto L_12c4ad30;
    case 1: goto L_12c4ad38;
    case 2: goto L_12c4ad48;
    case 3: goto L_12c4ad5c;
    default: x86_unimpl("switch@0x12c4ac24 out of table"); return;
  }
  /* 12c4ac2b nop  */
  /* nop */
L_12c4ac38:;
  /* 12c4ac38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4ac3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ac3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c4ac40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12c4ac41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c4ac44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12c4ac45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ac48 jb 0x12c4ac00 */
  if (C.cf) goto L_12c4ac00;
  /* 12c4ac4a std  */
  C.df=1;
  /* 12c4ac4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c4ac4d cld  */
  C.df=0;
  /* 12c4ac4e jmp dword ptr [edx*4 + 0x12c4ad20] */
  switch (EDX) {
    case 0: goto L_12c4ad30;
    case 1: goto L_12c4ad38;
    case 2: goto L_12c4ad48;
    case 3: goto L_12c4ad5c;
    default: x86_unimpl("switch@0x12c4ac4e out of table"); return;
  }
  /* 12c4ac55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c4ac58:;
  /* 12c4ac58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4ac5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ac5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c4ac60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c4ac63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c4ac66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c4ac69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ac6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ac6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ac72 jb 0x12c4ac00 */
  if (C.cf) goto L_12c4ac00;
  /* 12c4ac74 std  */
  C.df=1;
  /* 12c4ac75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c4ac77 cld  */
  C.df=0;
  /* 12c4ac78 jmp dword ptr [edx*4 + 0x12c4ad20] */
  switch (EDX) {
    case 0: goto L_12c4ad30;
    case 1: goto L_12c4ad38;
    case 2: goto L_12c4ad48;
    case 3: goto L_12c4ad5c;
    default: x86_unimpl("switch@0x12c4ac78 out of table"); return;
  }
  /* 12c4ac7f nop  */
  /* nop */
L_12c4ac80:;
  /* 12c4ac80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4ac83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ac85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c4ac88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c4ac8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c4ac8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c4ac91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c4ac94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c4ac97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ac9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ac9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4aca0 jb 0x12c4ac00 */
  if (C.cf) goto L_12c4ac00;
  /* 12c4aca6 std  */
  C.df=1;
  /* 12c4aca7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12c4aca9 cld  */
  C.df=0;
  /* 12c4acaa jmp dword ptr [edx*4 + 0x12c4ad20] */
  switch (EDX) {
    case 0: goto L_12c4ad30;
    case 1: goto L_12c4ad38;
    case 2: goto L_12c4ad48;
    case 3: goto L_12c4ad5c;
    default: x86_unimpl("switch@0x12c4acaa out of table"); return;
  }
  /* 12c4acb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12c4acb4 aam 0xac */
  x86_unimpl("aam @ 0x12c4acb4");
  /* 12c4acb6 les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c4acb6");
  /* 12c4acb8 fsubr qword ptr [esp + eax*8 - 0x3b531bee] */
  FPU_ST(0) = (rf64((uint32_t)(ESP + EAX*8 + -0x3b531bee))) - FPU_ST(0);
  /* 12c4acbf adc ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12c4acc1 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 12c4acc2 les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c4acc2");
  /* 12c4acc4 hlt  */
  x86_unimpl("hlt @ 0x12c4acc4");
  /* 12c4acc5 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 12c4acc6 les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c4acc6");
  /* 12c4acc8 cld  */
  C.df=0;
  /* 12c4acc9 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 12c4acca les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c4acca");
  /* 12c4accc add al, 0xad */
  { uint32_t _a=(AL),_b=(0xadu),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c4acce les edx, ptr [edx] */
  x86_unimpl("les @ 0x12c4acce");
  /* 12c4acd4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12c4acd8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12c4acdc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12c4ace0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12c4ace4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12c4ace8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12c4acec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12c4acf0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12c4acf4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12c4acf8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12c4acfc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12c4ad00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12c4ad04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12c4ad08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12c4ad0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12c4ad13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ad15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c4ad17:;
  /* 12c4ad17 jmp dword ptr [edx*4 + 0x12c4ad20] */
  switch (EDX) {
    case 0: goto L_12c4ad30;
    case 1: goto L_12c4ad38;
    case 2: goto L_12c4ad48;
    case 3: goto L_12c4ad5c;
    default: x86_unimpl("switch@0x12c4ad17 out of table"); return;
  }
  /* 12c4ad1e mov edi, edi */
  EDI = (EDI);
L_12c4ad30:;
  /* 12c4ad30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ad33 pop esi */
  ESI = (pop32());
  /* 12c4ad34 pop edi */
  EDI = (pop32());
  /* 12c4ad35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4ad36 ret  */
  ESPCHK(0x12c4aa40u, _esp0);
  ESP += 4; return;
  /* 12c4ad37 nop  */
  /* nop */
L_12c4ad38:;
  /* 12c4ad38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4ad3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c4ad3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ad41 pop esi */
  ESI = (pop32());
  /* 12c4ad42 pop edi */
  EDI = (pop32());
  /* 12c4ad43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4ad44 ret  */
  ESPCHK(0x12c4aa40u, _esp0);
  ESP += 4; return;
  /* 12c4ad45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c4ad48:;
  /* 12c4ad48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4ad4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c4ad4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c4ad51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c4ad54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ad57 pop esi */
  ESI = (pop32());
  /* 12c4ad58 pop edi */
  EDI = (pop32());
  /* 12c4ad59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4ad5a ret  */
  ESPCHK(0x12c4aa40u, _esp0);
  ESP += 4; return;
  /* 12c4ad5b nop  */
  /* nop */
L_12c4ad5c:;
  /* 12c4ad5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12c4ad5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12c4ad62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12c4ad65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12c4ad68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12c4ad6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12c4ad6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ad71 pop esi */
  ESI = (pop32());
  /* 12c4ad72 pop edi */
  EDI = (pop32());
  /* 12c4ad73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4ad74 ret  */
  ESPCHK(0x12c4aa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad80 @ 0x12c4ad80 (421 bytes, 148 insns) */
void f_12c4ad80(void) {
  FTRACE(0x12c4ad80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4ad80 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4ad81 mov ebp, esp */
  EBP = (ESP);
  /* 12c4ad83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c4ad85 push 0x12c69f28 */
  push32((uint32_t)(0x12c69f28u));
  /* 12c4ad8a push 0x12c4bc58 */
  push32((uint32_t)(0x12c4bc58u));
  /* 12c4ad8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c4ad95 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ad96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c4ad9d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ada0 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4ada1 push esi */
  push32((uint32_t)(ESI));
  /* 12c4ada2 push edi */
  push32((uint32_t)(EDI));
  /* 12c4ada3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c4ada6 cmp dword ptr [0x12c6e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4adad jne 0x12c4adfe */
  if (!C.zf) goto L_12c4adfe;
  /* 12c4adaf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12c4adb2 push eax */
  push32((uint32_t)(EAX));
  /* 12c4adb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4adb5 push 0x12c69f24 */
  push32((uint32_t)(0x12c69f24u));
  /* 12c4adba push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4adbc call dword ptr [0x12c70324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70324))), 0x12c4adc2u);
  /* 12c4adc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4adc4 je 0x12c4add2 */
  if (C.zf) goto L_12c4add2;
  /* 12c4adc6 mov dword ptr [0x12c6e67c], 1 */
  w32((uint32_t)(0x12c6e67c), (0x1u));
  /* 12c4add0 jmp 0x12c4adfe */
  goto L_12c4adfe;
L_12c4add2:;
  /* 12c4add2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12c4add5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4add6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4add8 push 0x12c69f20 */
  push32((uint32_t)(0x12c69f20u));
  /* 12c4addd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4addf push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4ade1 call dword ptr [0x12c70320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70320))), 0x12c4ade7u);
  /* 12c4ade7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ade9 je 0x12c4adf7 */
  if (C.zf) goto L_12c4adf7;
  /* 12c4adeb mov dword ptr [0x12c6e67c], 2 */
  w32((uint32_t)(0x12c6e67c), (0x2u));
  /* 12c4adf5 jmp 0x12c4adfe */
  goto L_12c4adfe;
L_12c4adf7:;
  /* 12c4adf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4adf9 jmp 0x12c4af28 */
  goto L_12c4af28;
L_12c4adfe:;
  /* 12c4adfe cmp dword ptr [0x12c6e67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ae05 jne 0x12c4ae35 */
  if (!C.zf) goto L_12c4ae35;
  /* 12c4ae07 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ae0b jne 0x12c4ae16 */
  if (!C.zf) goto L_12c4ae16;
  /* 12c4ae0d mov edx, dword ptr [0x12c6e688] */
  EDX = (r32((uint32_t)(0x12c6e688)));
  /* 12c4ae13 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12c4ae16:;
  /* 12c4ae16 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4ae19 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ae1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ae1d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ae1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4ae21 push edx */
  push32((uint32_t)(EDX));
  /* 12c4ae22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ae25 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ae26 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c4ae29 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ae2a call dword ptr [0x12c70320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70320))), 0x12c4ae30u);
  /* 12c4ae30 jmp 0x12c4af28 */
  goto L_12c4af28;
L_12c4ae35:;
  /* 12c4ae35 cmp dword ptr [0x12c6e67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ae3c jne 0x12c4af26 */
  if (!C.zf) goto L_12c4af26;
  /* 12c4ae42 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ae46 jne 0x12c4ae51 */
  if (!C.zf) goto L_12c4ae51;
  /* 12c4ae48 mov edx, dword ptr [0x12c6e698] */
  EDX = (r32((uint32_t)(0x12c6e698)));
  /* 12c4ae4e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12c4ae51:;
  /* 12c4ae51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4ae53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4ae55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ae58 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ae59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4ae5c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ae5d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c4ae60 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4ae62 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ae64 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ae67 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ae6a push edx */
  push32((uint32_t)(EDX));
  /* 12c4ae6b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4ae6e push eax */
  push32((uint32_t)(EAX));
  /* 12c4ae6f call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c4ae75u);
  /* 12c4ae75 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c4ae78 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ae7c jne 0x12c4ae85 */
  if (!C.zf) goto L_12c4ae85;
  /* 12c4ae7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ae80 jmp 0x12c4af28 */
  goto L_12c4af28;
L_12c4ae85:;
  /* 12c4ae85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4ae8c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4ae8f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c4ae91 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ae94 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c4ae96 call 0x12c45cf0 */
  push32(0x12c4ae9bu); f_12c45cf0();
  /* 12c4ae9b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12c4ae9e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c4aea1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4aea4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c4aea7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4aeaa shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12c4aeac push edx */
  push32((uint32_t)(EDX));
  /* 12c4aead push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4aeaf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4aeb2 push eax */
  push32((uint32_t)(EAX));
  /* 12c4aeb3 call 0x12c468c0 */
  push32(0x12c4aeb8u); f_12c468c0();
  /* 12c4aeb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4aebb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c4aec2 jmp 0x12c4aedb */
  goto L_12c4aedb;
  /* 12c4aec4 mov eax, 1 */
  EAX = (0x1u);
  /* 12c4aec9 ret  */
  ESPCHK(0x12c4ad80u, _esp0);
  ESP += 4; return;
  /* 12c4aeca mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4aecd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c4aed4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c4aedb:;
  /* 12c4aedb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4aedf jne 0x12c4aee5 */
  if (!C.zf) goto L_12c4aee5;
  /* 12c4aee1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4aee3 jmp 0x12c4af28 */
  goto L_12c4af28;
L_12c4aee5:;
  /* 12c4aee5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4aee8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4aee9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4aeec push edx */
  push32((uint32_t)(EDX));
  /* 12c4aeed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4aef0 push eax */
  push32((uint32_t)(EAX));
  /* 12c4aef1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4aef4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4aef5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4aef7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4aefa push edx */
  push32((uint32_t)(EDX));
  /* 12c4aefb call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c4af01u);
  /* 12c4af01 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c4af04 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4af08 jne 0x12c4af0e */
  if (!C.zf) goto L_12c4af0e;
  /* 12c4af0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4af0c jmp 0x12c4af28 */
  goto L_12c4af28;
L_12c4af0e:;
  /* 12c4af0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4af11 push eax */
  push32((uint32_t)(EAX));
  /* 12c4af12 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4af15 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4af16 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4af19 push edx */
  push32((uint32_t)(EDX));
  /* 12c4af1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4af1d push eax */
  push32((uint32_t)(EAX));
  /* 12c4af1e call dword ptr [0x12c70324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70324))), 0x12c4af24u);
  /* 12c4af24 jmp 0x12c4af28 */
  goto L_12c4af28;
L_12c4af26:;
  /* 12c4af26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4af28:;
  /* 12c4af28 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12c4af2b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4af2e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c4af35 pop edi */
  EDI = (pop32());
  /* 12c4af36 pop esi */
  ESI = (pop32());
  /* 12c4af37 pop ebx */
  EBX = (pop32());
  /* 12c4af38 mov esp, ebp */
  ESP = (EBP);
  /* 12c4af3a pop ebp */
  EBP = (pop32());
  /* 12c4af3b ret  */
  ESPCHK(0x12c4ad80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af40 @ 0x12c4af40 (727 bytes, 263 insns) */
void f_12c4af40(void) {
  FTRACE(0x12c4af40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4af40 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4af41 mov ebp, esp */
  EBP = (ESP);
  /* 12c4af43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c4af45 push 0x12c69f38 */
  push32((uint32_t)(0x12c69f38u));
  /* 12c4af4a push 0x12c4bc58 */
  push32((uint32_t)(0x12c4bc58u));
  /* 12c4af4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12c4af55 push eax */
  push32((uint32_t)(EAX));
  /* 12c4af56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12c4af5d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4af60 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4af61 push esi */
  push32((uint32_t)(ESI));
  /* 12c4af62 push edi */
  push32((uint32_t)(EDI));
  /* 12c4af63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c4af66 cmp dword ptr [0x12c6e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4af6d jne 0x12c4afc6 */
  if (!C.zf) goto L_12c4afc6;
  /* 12c4af6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4af71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4af73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4af75 push 0x12c69f24 */
  push32((uint32_t)(0x12c69f24u));
  /* 12c4af7a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c4af7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4af81 call dword ptr [0x12c70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70328))), 0x12c4af87u);
  /* 12c4af87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4af89 je 0x12c4af97 */
  if (C.zf) goto L_12c4af97;
  /* 12c4af8b mov dword ptr [0x12c6e6a0], 1 */
  w32((uint32_t)(0x12c6e6a0), (0x1u));
  /* 12c4af95 jmp 0x12c4afc6 */
  goto L_12c4afc6;
L_12c4af97:;
  /* 12c4af97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4af99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4af9b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4af9d push 0x12c69f20 */
  push32((uint32_t)(0x12c69f20u));
  /* 12c4afa2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c4afa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4afa9 call dword ptr [0x12c70308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70308))), 0x12c4afafu);
  /* 12c4afaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4afb1 je 0x12c4afbf */
  if (C.zf) goto L_12c4afbf;
  /* 12c4afb3 mov dword ptr [0x12c6e6a0], 2 */
  w32((uint32_t)(0x12c6e6a0), (0x2u));
  /* 12c4afbd jmp 0x12c4afc6 */
  goto L_12c4afc6;
L_12c4afbf:;
  /* 12c4afbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4afc1 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4afc6:;
  /* 12c4afc6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4afca jle 0x12c4afdf */
  if ((C.zf||C.sf!=C.of)) goto L_12c4afdf;
  /* 12c4afcc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4afcf push eax */
  push32((uint32_t)(EAX));
  /* 12c4afd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4afd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4afd4 call 0x12c4b250 */
  push32(0x12c4afd9u); f_12c4b250();
  /* 12c4afd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4afdc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12c4afdf:;
  /* 12c4afdf cmp dword ptr [0x12c6e6a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4afe6 jne 0x12c4b00b */
  if (!C.zf) goto L_12c4b00b;
  /* 12c4afe8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c4afeb push edx */
  push32((uint32_t)(EDX));
  /* 12c4afec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4afef push eax */
  push32((uint32_t)(EAX));
  /* 12c4aff0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4aff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4aff4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4aff7 push edx */
  push32((uint32_t)(EDX));
  /* 12c4aff8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4affb push eax */
  push32((uint32_t)(EAX));
  /* 12c4affc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4afff push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b000 call dword ptr [0x12c70308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70308))), 0x12c4b006u);
  /* 12c4b006 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b00b:;
  /* 12c4b00b cmp dword ptr [0x12c6e6a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b012 jne 0x12c4b22f */
  if (!C.zf) goto L_12c4b22f;
  /* 12c4b018 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b01c jne 0x12c4b027 */
  if (!C.zf) goto L_12c4b027;
  /* 12c4b01e mov edx, dword ptr [0x12c6e698] */
  EDX = (r32((uint32_t)(0x12c6e698)));
  /* 12c4b024 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12c4b027:;
  /* 12c4b027 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b029 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b02b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4b02e push eax */
  push32((uint32_t)(EAX));
  /* 12c4b02f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4b032 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b033 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12c4b036 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4b038 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b03a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b03d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b040 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b041 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c4b044 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b045 call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c4b04bu);
  /* 12c4b04b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c4b04e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b052 jne 0x12c4b05b */
  if (!C.zf) goto L_12c4b05b;
  /* 12c4b054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b056 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b05b:;
  /* 12c4b05b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4b062 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4b065 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c4b067 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b06a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c4b06c call 0x12c45cf0 */
  push32(0x12c4b071u); f_12c45cf0();
  /* 12c4b071 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12c4b074 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c4b077 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4b07a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c4b07d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c4b084 jmp 0x12c4b09d */
  goto L_12c4b09d;
  /* 12c4b086 mov eax, 1 */
  EAX = (0x1u);
  /* 12c4b08b ret  */
  ESPCHK(0x12c4af40u, _esp0);
  ESP += 4; return;
  /* 12c4b08c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4b08f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12c4b096 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c4b09d:;
  /* 12c4b09d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b0a1 jne 0x12c4b0aa */
  if (!C.zf) goto L_12c4b0aa;
  /* 12c4b0a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b0a5 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b0aa:;
  /* 12c4b0aa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4b0ad push edx */
  push32((uint32_t)(EDX));
  /* 12c4b0ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4b0b1 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b0b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4b0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b0b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4b0b9 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b0ba push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4b0bc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c4b0bf push eax */
  push32((uint32_t)(EAX));
  /* 12c4b0c0 call dword ptr [0x12c7031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7031c))), 0x12c4b0c6u);
  /* 12c4b0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4b0c8 jne 0x12c4b0d1 */
  if (!C.zf) goto L_12c4b0d1;
  /* 12c4b0ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b0cc jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b0d1:;
  /* 12c4b0d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b0d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b0d5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4b0d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b0d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4b0dc push edx */
  push32((uint32_t)(EDX));
  /* 12c4b0dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b0e0 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b0e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b0e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b0e5 call dword ptr [0x12c70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70328))), 0x12c4b0ebu);
  /* 12c4b0eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c4b0ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b0f2 jne 0x12c4b0fb */
  if (!C.zf) goto L_12c4b0fb;
  /* 12c4b0f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b0f6 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b0fb:;
  /* 12c4b0fb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b0fe and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b104 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4b106 je 0x12c4b14b */
  if (C.zf) goto L_12c4b14b;
  /* 12c4b108 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b10c je 0x12c4b146 */
  if (C.zf) goto L_12c4b146;
  /* 12c4b10e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4b111 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b114 jle 0x12c4b11d */
  if ((C.zf||C.sf!=C.of)) goto L_12c4b11d;
  /* 12c4b116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b118 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b11d:;
  /* 12c4b11d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c4b120 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b121 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4b124 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b125 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4b128 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b129 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4b12c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b12d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b130 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b134 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b135 call dword ptr [0x12c70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70328))), 0x12c4b13bu);
  /* 12c4b13b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4b13d jne 0x12c4b146 */
  if (!C.zf) goto L_12c4b146;
  /* 12c4b13f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b141 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b146:;
  /* 12c4b146 jmp 0x12c4b22a */
  goto L_12c4b22a;
L_12c4b14b:;
  /* 12c4b14b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4b14e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c4b151 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c4b158 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4b15b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c4b15d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b160 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12c4b162 call 0x12c45cf0 */
  push32(0x12c4b167u); f_12c45cf0();
  /* 12c4b167 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12c4b16a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12c4b16d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12c4b170 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12c4b173 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c4b17a jmp 0x12c4b193 */
  goto L_12c4b193;
  /* 12c4b17c mov eax, 1 */
  EAX = (0x1u);
  /* 12c4b181 ret  */
  ESPCHK(0x12c4af40u, _esp0);
  ESP += 4; return;
  /* 12c4b182 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4b185 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c4b18c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c4b193:;
  /* 12c4b193 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b197 jne 0x12c4b1a0 */
  if (!C.zf) goto L_12c4b1a0;
  /* 12c4b199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b19b jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b1a0:;
  /* 12c4b1a0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4b1a3 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b1a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4b1a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b1a8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4b1ab push edx */
  push32((uint32_t)(EDX));
  /* 12c4b1ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4b1af push eax */
  push32((uint32_t)(EAX));
  /* 12c4b1b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b1b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b1b7 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b1b8 call dword ptr [0x12c70328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70328))), 0x12c4b1beu);
  /* 12c4b1be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4b1c0 jne 0x12c4b1c6 */
  if (!C.zf) goto L_12c4b1c6;
  /* 12c4b1c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b1c4 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b1c6:;
  /* 12c4b1c6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b1ca jne 0x12c4b1fa */
  if (!C.zf) goto L_12c4b1fa;
  /* 12c4b1cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b1ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b1d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b1d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b1d4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4b1d7 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b1d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4b1db push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b1dc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c4b1e1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c4b1e4 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b1e5 call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c4b1ebu);
  /* 12c4b1eb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c4b1ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b1f2 jne 0x12c4b1f8 */
  if (!C.zf) goto L_12c4b1f8;
  /* 12c4b1f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b1f6 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b1f8:;
  /* 12c4b1f8 jmp 0x12c4b22a */
  goto L_12c4b22a;
L_12c4b1fa:;
  /* 12c4b1fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b1fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b1fe mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12c4b201 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b202 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c4b205 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b206 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4b209 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b20a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4b20d push eax */
  push32((uint32_t)(EAX));
  /* 12c4b20e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c4b213 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12c4b216 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b217 call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c4b21du);
  /* 12c4b21d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c4b220 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b224 jne 0x12c4b22a */
  if (!C.zf) goto L_12c4b22a;
  /* 12c4b226 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b228 jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b22a:;
  /* 12c4b22a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4b22d jmp 0x12c4b231 */
  goto L_12c4b231;
L_12c4b22f:;
  /* 12c4b22f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4b231:;
  /* 12c4b231 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12c4b234 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4b237 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12c4b23e pop edi */
  EDI = (pop32());
  /* 12c4b23f pop esi */
  ESI = (pop32());
  /* 12c4b240 pop ebx */
  EBX = (pop32());
  /* 12c4b241 mov esp, ebp */
  ESP = (EBP);
  /* 12c4b243 pop ebp */
  EBP = (pop32());
  /* 12c4b244 ret  */
  ESPCHK(0x12c4af40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x12c4b250 (80 bytes, 32 insns) */
void f_12c4b250(void) {
  FTRACE(0x12c4b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b250 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b251 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b253 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b256 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b259 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4b25c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b25f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c4b262:;
  /* 12c4b262 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4b265 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4b268 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b26b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4b26e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4b270 je 0x12c4b287 */
  if (C.zf) goto L_12c4b287;
  /* 12c4b272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b275 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4b278 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4b27a je 0x12c4b287 */
  if (C.zf) goto L_12c4b287;
  /* 12c4b27c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b27f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b282 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4b285 jmp 0x12c4b262 */
  goto L_12c4b262;
L_12c4b287:;
  /* 12c4b287 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b28a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4b28d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4b28f jne 0x12c4b299 */
  if (!C.zf) goto L_12c4b299;
  /* 12c4b291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b294 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b297 jmp 0x12c4b29c */
  goto L_12c4b29c;
L_12c4b299:;
  /* 12c4b299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12c4b29c:;
  /* 12c4b29c mov esp, ebp */
  ESP = (EBP);
  /* 12c4b29e pop ebp */
  EBP = (pop32());
  /* 12c4b29f ret  */
  ESPCHK(0x12c4b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2a0 @ 0x12c4b2a0 (130 bytes, 43 insns) */
void f_12c4b2a0(void) {
  FTRACE(0x12c4b2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b2a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b2a7 cmp eax, dword ptr [0x12c6ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b2ad jae 0x12c4b2d1 */
  if (!C.cf) goto L_12c4b2d1;
  /* 12c4b2af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b2b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4b2b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b2b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b2bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b2be mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4b2c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c4b2ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4b2cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4b2cf jne 0x12c4b2ec */
  if (!C.zf) goto L_12c4b2ec;
L_12c4b2d1:;
  /* 12c4b2d1 call 0x12c4aa20 */
  push32(0x12c4b2d6u); f_12c4aa20();
  /* 12c4b2d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4b2dc call 0x12c4aa30 */
  push32(0x12c4b2e1u); f_12c4aa30();
  /* 12c4b2e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c4b2e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b2ea jmp 0x12c4b31e */
  goto L_12c4b31e;
L_12c4b2ec:;
  /* 12c4b2ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b2ef push edx */
  push32((uint32_t)(EDX));
  /* 12c4b2f0 call 0x12c4c240 */
  push32(0x12c4b2f5u); f_12c4c240();
  /* 12c4b2f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b2f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4b2fb push eax */
  push32((uint32_t)(EAX));
  /* 12c4b2fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b2ff push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b300 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b303 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b304 call 0x12c4b330 */
  push32(0x12c4b309u); f_12c4b330();
  /* 12c4b309 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b30c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4b30f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b312 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b313 call 0x12c4c2d0 */
  push32(0x12c4b318u); f_12c4c2d0();
  /* 12c4b318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b31b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c4b31e:;
  /* 12c4b31e mov esp, ebp */
  ESP = (EBP);
  /* 12c4b320 pop ebp */
  EBP = (pop32());
  /* 12c4b321 ret  */
  ESPCHK(0x12c4b2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b330 @ 0x12c4b330 (178 bytes, 56 insns) */
void f_12c4b330(void) {
  FTRACE(0x12c4b330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b330 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b331 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b333 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b339 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b33a call 0x12c4c0c0 */
  push32(0x12c4b33fu); f_12c4c0c0();
  /* 12c4b33f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b342 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c4b345 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b349 jne 0x12c4b35e */
  if (!C.zf) goto L_12c4b35e;
  /* 12c4b34b call 0x12c4aa20 */
  push32(0x12c4b350u); f_12c4aa20();
  /* 12c4b350 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4b356 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b359 jmp 0x12c4b3de */
  goto L_12c4b3de;
L_12c4b35e:;
  /* 12c4b35e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4b361 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b362 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b364 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b367 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b368 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4b36b push eax */
  push32((uint32_t)(EAX));
  /* 12c4b36c call dword ptr [0x12c7032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7032c))), 0x12c4b372u);
  /* 12c4b372 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4b375 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b379 jne 0x12c4b386 */
  if (!C.zf) goto L_12c4b386;
  /* 12c4b37b call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c4b381u);
  /* 12c4b381 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4b384 jmp 0x12c4b38d */
  goto L_12c4b38d;
L_12c4b386:;
  /* 12c4b386 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c4b38d:;
  /* 12c4b38d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b391 je 0x12c4b3a4 */
  if (C.zf) goto L_12c4b3a4;
  /* 12c4b393 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b396 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b397 call 0x12c4a980 */
  push32(0x12c4b39cu); f_12c4a980();
  /* 12c4b39c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b39f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b3a2 jmp 0x12c4b3de */
  goto L_12c4b3de;
L_12c4b3a4:;
  /* 12c4b3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b3a7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c4b3aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b3ad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b3b0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b3b3 mov ecx, dword ptr [edx*4 + 0x12c6fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c6fe60)));
  /* 12c4b3ba mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12c4b3be and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12c4b3c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b3c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4b3c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b3ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4b3cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b3d0 mov eax, dword ptr [eax*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4b3d7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12c4b3db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c4b3de:;
  /* 12c4b3de mov esp, ebp */
  ESP = (EBP);
  /* 12c4b3e0 pop ebp */
  EBP = (pop32());
  /* 12c4b3e1 ret  */
  ESPCHK(0x12c4b330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3f0 @ 0x12c4b3f0 (130 bytes, 43 insns) */
void f_12c4b3f0(void) {
  FTRACE(0x12c4b3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b3f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b3f7 cmp eax, dword ptr [0x12c6ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b3fd jae 0x12c4b421 */
  if (!C.cf) goto L_12c4b421;
  /* 12c4b3ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b402 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4b405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b408 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b40b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b40e mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4b415 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c4b41a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4b41d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4b41f jne 0x12c4b43c */
  if (!C.zf) goto L_12c4b43c;
L_12c4b421:;
  /* 12c4b421 call 0x12c4aa20 */
  push32(0x12c4b426u); f_12c4aa20();
  /* 12c4b426 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4b42c call 0x12c4aa30 */
  push32(0x12c4b431u); f_12c4aa30();
  /* 12c4b431 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c4b437 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b43a jmp 0x12c4b46e */
  goto L_12c4b46e;
L_12c4b43c:;
  /* 12c4b43c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b43f push edx */
  push32((uint32_t)(EDX));
  /* 12c4b440 call 0x12c4c240 */
  push32(0x12c4b445u); f_12c4c240();
  /* 12c4b445 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b448 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4b44b push eax */
  push32((uint32_t)(EAX));
  /* 12c4b44c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b44f push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b450 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b453 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b454 call 0x12c4b480 */
  push32(0x12c4b459u); f_12c4b480();
  /* 12c4b459 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b45c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4b45f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b462 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b463 call 0x12c4c2d0 */
  push32(0x12c4b468u); f_12c4c2d0();
  /* 12c4b468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b46b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c4b46e:;
  /* 12c4b46e mov esp, ebp */
  ESP = (EBP);
  /* 12c4b470 pop ebp */
  EBP = (pop32());
  /* 12c4b471 ret  */
  ESPCHK(0x12c4b3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x12c4b480 (627 bytes, 182 insns) */
void f_12c4b480(void) {
  FTRACE(0x12c4b480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b480 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b481 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b483 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b489 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4b490 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4b493 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12c4b499 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b49d jne 0x12c4b4a6 */
  if (!C.zf) goto L_12c4b4a6;
  /* 12c4b49f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b4a1 jmp 0x12c4b6ef */
  goto L_12c4b6ef;
L_12c4b4a6:;
  /* 12c4b4a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b4a9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4b4ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b4af and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b4b2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b4b5 mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4b4bc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c4b4c1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4b4c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4b4c6 je 0x12c4b4d8 */
  if (C.zf) goto L_12c4b4d8;
  /* 12c4b4c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4b4ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b4cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b4cf push edx */
  push32((uint32_t)(EDX));
  /* 12c4b4d0 call 0x12c4b330 */
  push32(0x12c4b4d5u); f_12c4b330();
  /* 12c4b4d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4b4d8:;
  /* 12c4b4d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b4db sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4b4de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b4e1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4b4e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b4e7 mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4b4ee movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12c4b4f3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b4f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4b4fa je 0x12c4b60c */
  if (C.zf) goto L_12c4b60c;
  /* 12c4b500 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b503 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4b506 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12c4b50d:;
  /* 12c4b50d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b510 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b513 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b516 jae 0x12c4b60a */
  if (!C.cf) goto L_12c4b60a;
  /* 12c4b51c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12c4b522 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c4b525:;
  /* 12c4b525 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4b528 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12c4b52e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b530 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b536 jge 0x12c4b597 */
  if ((C.sf==C.of)) goto L_12c4b597;
  /* 12c4b538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b53b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b53e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b541 jae 0x12c4b597 */
  if (!C.cf) goto L_12c4b597;
  /* 12c4b543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b546 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c4b548 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12c4b54e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b551 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b554 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4b557 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12c4b55e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b561 jne 0x12c4b581 */
  if (!C.zf) goto L_12c4b581;
  /* 12c4b563 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12c4b569 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b56c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12c4b572 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4b575 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12c4b578 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4b57b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b57e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c4b581:;
  /* 12c4b581 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4b584 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12c4b58a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12c4b58c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4b58f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b592 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4b595 jmp 0x12c4b525 */
  goto L_12c4b525;
L_12c4b597:;
  /* 12c4b597 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b599 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12c4b59f push edx */
  push32((uint32_t)(EDX));
  /* 12c4b5a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4b5a3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12c4b5a9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b5ab push eax */
  push32((uint32_t)(EAX));
  /* 12c4b5ac lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12c4b5b2 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b5b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4b5b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b5bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4b5bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b5c2 mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4b5c9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12c4b5cc push eax */
  push32((uint32_t)(EAX));
  /* 12c4b5cd call dword ptr [0x12c70264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70264))), 0x12c4b5d3u);
  /* 12c4b5d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4b5d5 je 0x12c4b5fa */
  if (C.zf) goto L_12c4b5fa;
  /* 12c4b5d7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4b5da add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b5e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c4b5e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4b5e6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12c4b5ec sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b5ee cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b5f4 jge 0x12c4b5f8 */
  if ((C.sf==C.of)) goto L_12c4b5f8;
  /* 12c4b5f6 jmp 0x12c4b60a */
  goto L_12c4b60a;
L_12c4b5f8:;
  /* 12c4b5f8 jmp 0x12c4b605 */
  goto L_12c4b605;
L_12c4b5fa:;
  /* 12c4b5fa call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c4b600u);
  /* 12c4b600 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c4b603 jmp 0x12c4b60a */
  goto L_12c4b60a;
L_12c4b605:;
  /* 12c4b605 jmp 0x12c4b50d */
  goto L_12c4b50d;
L_12c4b60a:;
  /* 12c4b60a jmp 0x12c4b65c */
  goto L_12c4b65c;
L_12c4b60c:;
  /* 12c4b60c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b60e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12c4b614 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b615 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4b618 push edx */
  push32((uint32_t)(EDX));
  /* 12c4b619 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b61c push eax */
  push32((uint32_t)(EAX));
  /* 12c4b61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b620 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4b623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b626 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b629 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b62c mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4b633 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12c4b636 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b637 call dword ptr [0x12c70264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70264))), 0x12c4b63du);
  /* 12c4b63d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4b63f je 0x12c4b653 */
  if (C.zf) goto L_12c4b653;
  /* 12c4b641 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c4b648 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12c4b64e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c4b651 jmp 0x12c4b65c */
  goto L_12c4b65c;
L_12c4b653:;
  /* 12c4b653 call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c4b659u);
  /* 12c4b659 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c4b65c:;
  /* 12c4b65c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b660 jne 0x12c4b6e6 */
  if (!C.zf) goto L_12c4b6e6;
  /* 12c4b666 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b66a je 0x12c4b69a */
  if (C.zf) goto L_12c4b69a;
  /* 12c4b66c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b670 jne 0x12c4b689 */
  if (!C.zf) goto L_12c4b689;
  /* 12c4b672 call 0x12c4aa20 */
  push32(0x12c4b677u); f_12c4aa20();
  /* 12c4b677 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4b67d call 0x12c4aa30 */
  push32(0x12c4b682u); f_12c4aa30();
  /* 12c4b682 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4b685 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c4b687 jmp 0x12c4b695 */
  goto L_12c4b695;
L_12c4b689:;
  /* 12c4b689 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4b68c push edx */
  push32((uint32_t)(EDX));
  /* 12c4b68d call 0x12c4a980 */
  push32(0x12c4b692u); f_12c4a980();
  /* 12c4b692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4b695:;
  /* 12c4b695 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b698 jmp 0x12c4b6ef */
  goto L_12c4b6ef;
L_12c4b69a:;
  /* 12c4b69a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b69d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4b6a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b6a3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4b6a6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b6a9 mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4b6b0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12c4b6b5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b6b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4b6ba je 0x12c4b6cb */
  if (C.zf) goto L_12c4b6cb;
  /* 12c4b6bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b6bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4b6c2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b6c5 jne 0x12c4b6cb */
  if (!C.zf) goto L_12c4b6cb;
  /* 12c4b6c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b6c9 jmp 0x12c4b6ef */
  goto L_12c4b6ef;
L_12c4b6cb:;
  /* 12c4b6cb call 0x12c4aa20 */
  push32(0x12c4b6d0u); f_12c4aa20();
  /* 12c4b6d0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12c4b6d6 call 0x12c4aa30 */
  push32(0x12c4b6dbu); f_12c4aa30();
  /* 12c4b6db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c4b6e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b6e4 jmp 0x12c4b6ef */
  goto L_12c4b6ef;
L_12c4b6e6:;
  /* 12c4b6e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4b6e9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12c4b6ef:;
  /* 12c4b6ef mov esp, ebp */
  ESP = (EBP);
  /* 12c4b6f1 pop ebp */
  EBP = (pop32());
  /* 12c4b6f2 ret  */
  ESPCHK(0x12c4b480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b700 @ 0x12c4b700 (199 bytes, 68 insns) */
void f_12c4b700(void) {
  FTRACE(0x12c4b700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b700 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b701 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b703 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b704 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4b705 push esi */
  push32((uint32_t)(ESI));
  /* 12c4b706 push edi */
  push32((uint32_t)(EDI));
L_12c4b707:;
  /* 12c4b707 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b70b jne 0x12c4b72b */
  if (!C.zf) goto L_12c4b72b;
  /* 12c4b70d push 0x12c69e84 */
  push32((uint32_t)(0x12c69e84u));
  /* 12c4b712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4b714 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12c4b716 push 0x12c69f50 */
  push32((uint32_t)(0x12c69f50u));
  /* 12c4b71b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4b71d call 0x12c41c10 */
  push32(0x12c4b722u); f_12c41c10();
  /* 12c4b722 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b725 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b728 jne 0x12c4b72b */
  if (!C.zf) goto L_12c4b72b;
  /* 12c4b72a int3  */
  x86_unimpl("int3 @ 0x12c4b72a");
L_12c4b72b:;
  /* 12c4b72b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4b72f jne 0x12c4b707 */
  if (!C.zf) goto L_12c4b707;
  /* 12c4b731 mov ecx, dword ptr [0x12c6e6a4] */
  ECX = (r32((uint32_t)(0x12c6e6a4)));
  /* 12c4b737 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b73a mov dword ptr [0x12c6e6a4], ecx */
  w32((uint32_t)(0x12c6e6a4), (ECX));
  /* 12c4b740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b743 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4b746 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12c4b748 push 0x12c69f50 */
  push32((uint32_t)(0x12c69f50u));
  /* 12c4b74d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4b74f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c4b754 call 0x12c42b50 */
  push32(0x12c4b759u); f_12c42b50();
  /* 12c4b759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b75c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b75f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c4b762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b765 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b769 je 0x12c4b786 */
  if (C.zf) goto L_12c4b786;
  /* 12c4b76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b76e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c4b771 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4b774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b777 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12c4b77a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b77d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12c4b784 jmp 0x12c4b7ab */
  goto L_12c4b7ab;
L_12c4b786:;
  /* 12c4b786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b789 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4b78c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b78f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b792 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12c4b795 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b798 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b79b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b79e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12c4b7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b7a4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12c4b7ab:;
  /* 12c4b7ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b7ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b7b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c4b7b4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c4b7b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b7b9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c4b7c0 pop edi */
  EDI = (pop32());
  /* 12c4b7c1 pop esi */
  ESI = (pop32());
  /* 12c4b7c2 pop ebx */
  EBX = (pop32());
  /* 12c4b7c3 mov esp, ebp */
  ESP = (EBP);
  /* 12c4b7c5 pop ebp */
  EBP = (pop32());
  /* 12c4b7c6 ret  */
  ESPCHK(0x12c4b700u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12c4b7d0 (50 bytes, 17 insns) */
void f_12c4b7d0(void) {
  FTRACE(0x12c4b7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b7d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b7d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b7d6 cmp eax, dword ptr [0x12c6ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b7dc jb 0x12c4b7e2 */
  if (C.cf) goto L_12c4b7e2;
  /* 12c4b7de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4b7e0 jmp 0x12c4b800 */
  goto L_12c4b800;
L_12c4b7e2:;
  /* 12c4b7e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b7e5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4b7e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b7eb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b7ee imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b7f1 mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4b7f8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c4b7fd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12c4b800:;
  /* 12c4b800 pop ebp */
  EBP = (pop32());
  /* 12c4b801 ret  */
  ESPCHK(0x12c4b7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b810 @ 0x12c4b810 (300 bytes, 80 insns) */
void f_12c4b810(void) {
  FTRACE(0x12c4b810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b810 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b811 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b813 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b814 cmp dword ptr [0x12c6fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b81b jne 0x12c4b829 */
  if (!C.zf) goto L_12c4b829;
  /* 12c4b81d mov dword ptr [0x12c6fb60], 0x200 */
  w32((uint32_t)(0x12c6fb60), (0x200u));
  /* 12c4b827 jmp 0x12c4b83c */
  goto L_12c4b83c;
L_12c4b829:;
  /* 12c4b829 cmp dword ptr [0x12c6fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12c6fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b830 jge 0x12c4b83c */
  if ((C.sf==C.of)) goto L_12c4b83c;
  /* 12c4b832 mov dword ptr [0x12c6fb60], 0x14 */
  w32((uint32_t)(0x12c6fb60), (0x14u));
L_12c4b83c:;
  /* 12c4b83c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12c4b841 push 0x12c69f5c */
  push32((uint32_t)(0x12c69f5cu));
  /* 12c4b846 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4b848 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c4b84a mov eax, dword ptr [0x12c6fb60] */
  EAX = (r32((uint32_t)(0x12c6fb60)));
  /* 12c4b84f push eax */
  push32((uint32_t)(EAX));
  /* 12c4b850 call 0x12c42f60 */
  push32(0x12c4b855u); f_12c42f60();
  /* 12c4b855 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b858 mov dword ptr [0x12c6e818], eax */
  w32((uint32_t)(0x12c6e818), (EAX));
  /* 12c4b85d cmp dword ptr [0x12c6e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b864 jne 0x12c4b8a5 */
  if (!C.zf) goto L_12c4b8a5;
  /* 12c4b866 mov dword ptr [0x12c6fb60], 0x14 */
  w32((uint32_t)(0x12c6fb60), (0x14u));
  /* 12c4b870 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12c4b875 push 0x12c69f5c */
  push32((uint32_t)(0x12c69f5cu));
  /* 12c4b87a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4b87c push 4 */
  push32((uint32_t)(0x4u));
  /* 12c4b87e mov ecx, dword ptr [0x12c6fb60] */
  ECX = (r32((uint32_t)(0x12c6fb60)));
  /* 12c4b884 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b885 call 0x12c42f60 */
  push32(0x12c4b88au); f_12c42f60();
  /* 12c4b88a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b88d mov dword ptr [0x12c6e818], eax */
  w32((uint32_t)(0x12c6e818), (EAX));
  /* 12c4b892 cmp dword ptr [0x12c6e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b899 jne 0x12c4b8a5 */
  if (!C.zf) goto L_12c4b8a5;
  /* 12c4b89b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12c4b89d call 0x12c41ac0 */
  push32(0x12c4b8a2u); f_12c41ac0();
  /* 12c4b8a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4b8a5:;
  /* 12c4b8a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4b8ac jmp 0x12c4b8b7 */
  goto L_12c4b8b7;
L_12c4b8ae:;
  /* 12c4b8ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b8b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b8b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c4b8b7:;
  /* 12c4b8b7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b8bb jge 0x12c4b8d6 */
  if ((C.sf==C.of)) goto L_12c4b8d6;
  /* 12c4b8bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b8c0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4b8c3 add eax, 0x12c6d120 */
  { uint32_t _a=(EAX),_b=(0x12c6d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b8c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b8cb mov edx, dword ptr [0x12c6e818] */
  EDX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4b8d1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12c4b8d4 jmp 0x12c4b8ae */
  goto L_12c4b8ae;
L_12c4b8d6:;
  /* 12c4b8d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4b8dd jmp 0x12c4b8e8 */
  goto L_12c4b8e8;
L_12c4b8df:;
  /* 12c4b8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b8e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b8e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4b8e8:;
  /* 12c4b8e8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b8ec jge 0x12c4b938 */
  if ((C.sf==C.of)) goto L_12c4b938;
  /* 12c4b8ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b8f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4b8f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b8f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b8fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b8fd mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4b904 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b908 je 0x12c4b926 */
  if (C.zf) goto L_12c4b926;
  /* 12c4b90a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b90d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4b910 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b913 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4b916 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4b919 mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4b920 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b924 jne 0x12c4b936 */
  if (!C.zf) goto L_12c4b936;
L_12c4b926:;
  /* 12c4b926 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4b929 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4b92c mov dword ptr [ecx + 0x12c6d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12c6d130), (0xffffffffu));
L_12c4b936:;
  /* 12c4b936 jmp 0x12c4b8df */
  goto L_12c4b8df;
L_12c4b938:;
  /* 12c4b938 mov esp, ebp */
  ESP = (EBP);
  /* 12c4b93a pop ebp */
  EBP = (pop32());
  /* 12c4b93b ret  */
  ESPCHK(0x12c4b810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b940 @ 0x12c4b940 (26 bytes, 9 insns) */
void f_12c4b940(void) {
  FTRACE(0x12c4b940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b940 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b941 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b943 call 0x12c4c540 */
  push32(0x12c4b948u); f_12c4c540();
  /* 12c4b948 movsx eax, byte ptr [0x12c6e4bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12c6e4bc))));
  /* 12c4b94f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4b951 je 0x12c4b958 */
  if (C.zf) goto L_12c4b958;
  /* 12c4b953 call 0x12c4c300 */
  push32(0x12c4b958u); f_12c4c300();
L_12c4b958:;
  /* 12c4b958 pop ebp */
  EBP = (pop32());
  /* 12c4b959 ret  */
  ESPCHK(0x12c4b940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b960 @ 0x12c4b960 (61 bytes, 20 insns) */
void f_12c4b960(void) {
  FTRACE(0x12c4b960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b960 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b961 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b963 cmp dword ptr [ebp + 8], 0x12c6d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12c6d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b96a jb 0x12c4b98e */
  if (C.cf) goto L_12c4b98e;
  /* 12c4b96c cmp dword ptr [ebp + 8], 0x12c6d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12c6d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b973 ja 0x12c4b98e */
  if ((!C.cf&&!C.zf)) goto L_12c4b98e;
  /* 12c4b975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b978 sub eax, 0x12c6d120 */
  { uint32_t _a=(EAX),_b=(0x12c6d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b97d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4b980 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b983 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b984 call 0x12c46550 */
  push32(0x12c4b989u); f_12c46550();
  /* 12c4b989 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b98c jmp 0x12c4b99b */
  goto L_12c4b99b;
L_12c4b98e:;
  /* 12c4b98e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b991 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b994 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b995 call dword ptr [0x12c702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f4))), 0x12c4b99bu);
L_12c4b99b:;
  /* 12c4b99b pop ebp */
  EBP = (pop32());
  /* 12c4b99c ret  */
  ESPCHK(0x12c4b960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9a0 @ 0x12c4b9a0 (41 bytes, 16 insns) */
void f_12c4b9a0(void) {
  FTRACE(0x12c4b9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b9a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b9a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b9a7 jge 0x12c4b9ba */
  if ((C.sf==C.of)) goto L_12c4b9ba;
  /* 12c4b9a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b9ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b9af push eax */
  push32((uint32_t)(EAX));
  /* 12c4b9b0 call 0x12c46550 */
  push32(0x12c4b9b5u); f_12c46550();
  /* 12c4b9b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b9b8 jmp 0x12c4b9c7 */
  goto L_12c4b9c7;
L_12c4b9ba:;
  /* 12c4b9ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4b9bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b9c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4b9c1 call dword ptr [0x12c702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f4))), 0x12c4b9c7u);
L_12c4b9c7:;
  /* 12c4b9c7 pop ebp */
  EBP = (pop32());
  /* 12c4b9c8 ret  */
  ESPCHK(0x12c4b9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x12c4b9d0 (61 bytes, 20 insns) */
void f_12c4b9d0(void) {
  FTRACE(0x12c4b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4b9d3 cmp dword ptr [ebp + 8], 0x12c6d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12c6d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b9da jb 0x12c4b9fe */
  if (C.cf) goto L_12c4b9fe;
  /* 12c4b9dc cmp dword ptr [ebp + 8], 0x12c6d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12c6d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4b9e3 ja 0x12c4b9fe */
  if ((!C.cf&&!C.zf)) goto L_12c4b9fe;
  /* 12c4b9e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4b9e8 sub eax, 0x12c6d120 */
  { uint32_t _a=(EAX),_b=(0x12c6d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4b9ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4b9f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b9f3 push eax */
  push32((uint32_t)(EAX));
  /* 12c4b9f4 call 0x12c465f0 */
  push32(0x12c4b9f9u); f_12c465f0();
  /* 12c4b9f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4b9fc jmp 0x12c4ba0b */
  goto L_12c4ba0b;
L_12c4b9fe:;
  /* 12c4b9fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ba01 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ba04 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ba05 call dword ptr [0x12c702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f8))), 0x12c4ba0bu);
L_12c4ba0b:;
  /* 12c4ba0b pop ebp */
  EBP = (pop32());
  /* 12c4ba0c ret  */
  ESPCHK(0x12c4b9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba10 @ 0x12c4ba10 (41 bytes, 16 insns) */
void f_12c4ba10(void) {
  FTRACE(0x12c4ba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4ba10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4ba11 mov ebp, esp */
  EBP = (ESP);
  /* 12c4ba13 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ba17 jge 0x12c4ba2a */
  if ((C.sf==C.of)) goto L_12c4ba2a;
  /* 12c4ba19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ba1c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ba1f push eax */
  push32((uint32_t)(EAX));
  /* 12c4ba20 call 0x12c465f0 */
  push32(0x12c4ba25u); f_12c465f0();
  /* 12c4ba25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ba28 jmp 0x12c4ba37 */
  goto L_12c4ba37;
L_12c4ba2a:;
  /* 12c4ba2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4ba2d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ba30 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ba31 call dword ptr [0x12c702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f8))), 0x12c4ba37u);
L_12c4ba37:;
  /* 12c4ba37 pop ebp */
  EBP = (pop32());
  /* 12c4ba38 ret  */
  ESPCHK(0x12c4ba10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba40 @ 0x12c4ba40 (119 bytes, 34 insns) */
void f_12c4ba40(void) {
  FTRACE(0x12c4ba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4ba40 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4ba41 mov ebp, esp */
  EBP = (ESP);
  /* 12c4ba43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ba46 push 0x12c6e814 */
  push32((uint32_t)(0x12c6e814u));
  /* 12c4ba4b call dword ptr [0x12c70278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70278))), 0x12c4ba51u);
  /* 12c4ba51 cmp dword ptr [0x12c6e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ba58 je 0x12c4ba78 */
  if (C.zf) goto L_12c4ba78;
  /* 12c4ba5a push 0x12c6e814 */
  push32((uint32_t)(0x12c6e814u));
  /* 12c4ba5f call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c4ba65u);
  /* 12c4ba65 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c4ba67 call 0x12c46550 */
  push32(0x12c4ba6cu); f_12c46550();
  /* 12c4ba6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ba6f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c4ba76 jmp 0x12c4ba7f */
  goto L_12c4ba7f;
L_12c4ba78:;
  /* 12c4ba78 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c4ba7f:;
  /* 12c4ba7f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12c4ba83 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ba84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ba87 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ba88 call 0x12c4bac0 */
  push32(0x12c4ba8du); f_12c4bac0();
  /* 12c4ba8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ba90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4ba93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ba97 je 0x12c4baa5 */
  if (C.zf) goto L_12c4baa5;
  /* 12c4ba99 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c4ba9b call 0x12c465f0 */
  push32(0x12c4baa0u); f_12c465f0();
  /* 12c4baa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4baa3 jmp 0x12c4bab0 */
  goto L_12c4bab0;
L_12c4baa5:;
  /* 12c4baa5 push 0x12c6e814 */
  push32((uint32_t)(0x12c6e814u));
  /* 12c4baaa call dword ptr [0x12c70268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70268))), 0x12c4bab0u);
L_12c4bab0:;
  /* 12c4bab0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4bab3 mov esp, ebp */
  ESP = (EBP);
  /* 12c4bab5 pop ebp */
  EBP = (pop32());
  /* 12c4bab6 ret  */
  ESPCHK(0x12c4ba40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac0 @ 0x12c4bac0 (160 bytes, 50 insns) */
void f_12c4bac0(void) {
  FTRACE(0x12c4bac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4bac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4bac1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4bac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4bac6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4baca jne 0x12c4bad3 */
  if (!C.zf) goto L_12c4bad3;
  /* 12c4bacc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4bace jmp 0x12c4bb5c */
  goto L_12c4bb5c;
L_12c4bad3:;
  /* 12c4bad3 cmp dword ptr [0x12c6e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bada jne 0x12c4bb0a */
  if (!C.zf) goto L_12c4bb0a;
  /* 12c4badc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4badf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4bae4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bae9 jle 0x12c4bafb */
  if ((C.zf||C.sf!=C.of)) goto L_12c4bafb;
  /* 12c4baeb call 0x12c4aa20 */
  push32(0x12c4baf0u); f_12c4aa20();
  /* 12c4baf0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12c4baf6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4baf9 jmp 0x12c4bb5c */
  goto L_12c4bb5c;
L_12c4bafb:;
  /* 12c4bafb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bafe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12c4bb01 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12c4bb03 mov eax, 1 */
  EAX = (0x1u);
  /* 12c4bb08 jmp 0x12c4bb5c */
  goto L_12c4bb5c;
L_12c4bb0a:;
  /* 12c4bb0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4bb11 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c4bb14 push eax */
  push32((uint32_t)(EAX));
  /* 12c4bb15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4bb17 mov ecx, dword ptr [0x12c6cea4] */
  ECX = (r32((uint32_t)(0x12c6cea4)));
  /* 12c4bb1d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4bb1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bb21 push edx */
  push32((uint32_t)(EDX));
  /* 12c4bb22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4bb24 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12c4bb27 push eax */
  push32((uint32_t)(EAX));
  /* 12c4bb28 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12c4bb2d mov ecx, dword ptr [0x12c6e698] */
  ECX = (r32((uint32_t)(0x12c6e698)));
  /* 12c4bb33 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4bb34 call dword ptr [0x12c702d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702d0))), 0x12c4bb3au);
  /* 12c4bb3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4bb3d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bb41 je 0x12c4bb49 */
  if (C.zf) goto L_12c4bb49;
  /* 12c4bb43 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bb47 je 0x12c4bb59 */
  if (C.zf) goto L_12c4bb59;
L_12c4bb49:;
  /* 12c4bb49 call 0x12c4aa20 */
  push32(0x12c4bb4eu); f_12c4aa20();
  /* 12c4bb4e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12c4bb54 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4bb57 jmp 0x12c4bb5c */
  goto L_12c4bb5c;
L_12c4bb59:;
  /* 12c4bb59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c4bb5c:;
  /* 12c4bb5c mov esp, ebp */
  ESP = (EBP);
  /* 12c4bb5e pop ebp */
  EBP = (pop32());
  /* 12c4bb5f ret  */
  ESPCHK(0x12c4bac0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12c4bb60 (32 bytes, 18 insns) */
void f_12c4bb60(void) {
  FTRACE(0x12c4bb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4bb60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4bb61 mov ebp, esp */
  EBP = (ESP);
  /* 12c4bb63 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4bb64 push esi */
  push32((uint32_t)(ESI));
  /* 12c4bb65 push edi */
  push32((uint32_t)(EDI));
  /* 12c4bb66 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4bb67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4bb69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4bb6b push 0x12c4bb78 */
  push32((uint32_t)(0x12c4bb78u));
  /* 12c4bb70 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12c4bb73 call 0x12c532ac */
  push32(0x12c4bb78u); f_12c532ac();
  /* 12c4bb78 pop ebp */
  EBP = (pop32());
  /* 12c4bb79 pop edi */
  EDI = (pop32());
  /* 12c4bb7a pop esi */
  ESI = (pop32());
  /* 12c4bb7b pop ebx */
  EBX = (pop32());
  /* 12c4bb7c mov esp, ebp */
  ESP = (EBP);
  /* 12c4bb7e pop ebp */
  EBP = (pop32());
  /* 12c4bb7f ret  */
  ESPCHK(0x12c4bb60u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12c4bba2 (104 bytes, 33 insns) */
void f_12c4bba2(void) {
  FTRACE(0x12c4bba2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4bba2 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4bba3 push esi */
  push32((uint32_t)(ESI));
  /* 12c4bba4 push edi */
  push32((uint32_t)(EDI));
  /* 12c4bba5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c4bba9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4bbaa push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12c4bbac push 0x12c4bb80 */
  push32((uint32_t)(0x12c4bb80u));
  /* 12c4bbb1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12c4bbb8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12c4bbbf:;
  /* 12c4bbbf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12c4bbc3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c4bbc6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12c4bbc9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bbcc je 0x12c4bbfc */
  if (C.zf) goto L_12c4bbfc;
  /* 12c4bbce cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bbd2 je 0x12c4bbfc */
  if (C.zf) goto L_12c4bbfc;
  /* 12c4bbd4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12c4bbd7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12c4bbda mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12c4bbde mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12c4bbe1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bbe6 jne 0x12c4bbfa */
  if (!C.zf) goto L_12c4bbfa;
  /* 12c4bbe8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12c4bbed mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12c4bbf1 call 0x12c4bc36 */
  push32(0x12c4bbf6u); f_12c4bc36();
  /* 12c4bbf6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12c4bbfau);
L_12c4bbfa:;
  /* 12c4bbfa jmp 0x12c4bbbf */
  goto L_12c4bbbf;
L_12c4bbfc:;
  /* 12c4bbfc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12c4bc03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bc06 pop edi */
  EDI = (pop32());
  /* 12c4bc07 pop esi */
  ESI = (pop32());
  /* 12c4bc08 pop ebx */
  EBX = (pop32());
  /* 12c4bc09 ret  */
  ESPCHK(0x12c4bba2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc36 @ 0x12c4bc36 (24 bytes, 10 insns) */
void f_12c4bc36(void) {
  FTRACE(0x12c4bc36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4bc36 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4bc37 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4bc38 mov ebx, 0x12c6d3b8 */
  EBX = (0x12c6d3b8u);
  /* 12c4bc3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bc40 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12c4bc43 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12c4bc46 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12c4bc49 pop ecx */
  ECX = (pop32());
  /* 12c4bc4a pop ebx */
  EBX = (pop32());
  /* 12c4bc4b ret 4 */
  ESPCHK(0x12c4bc36u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bd15 @ 0x12c4bd15 (27 bytes, 11 insns) */
void f_12c4bd15(void) {
  FTRACE(0x12c4bd15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4bd15 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4bd16 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c4bd1a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12c4bd1c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12c4bd1f push eax */
  push32((uint32_t)(EAX));
  /* 12c4bd20 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c4bd23 push eax */
  push32((uint32_t)(EAX));
  /* 12c4bd24 call 0x12c4bba2 */
  push32(0x12c4bd29u); f_12c4bba2();
  /* 12c4bd29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bd2c pop ebp */
  EBP = (pop32());
  /* 12c4bd2d ret 4 */
  ESPCHK(0x12c4bd15u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bd30 @ 0x12c4bd30 (482 bytes, 138 insns) */
void f_12c4bd30(void) {
  FTRACE(0x12c4bd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4bd30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4bd31 mov ebp, esp */
  EBP = (ESP);
  /* 12c4bd33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4bd36 push esi */
  push32((uint32_t)(ESI));
  /* 12c4bd37 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12c4bd3e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12c4bd40 call 0x12c46550 */
  push32(0x12c4bd45u); f_12c46550();
  /* 12c4bd45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bd48 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c4bd4f jmp 0x12c4bd5a */
  goto L_12c4bd5a;
L_12c4bd51:;
  /* 12c4bd51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4bd54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bd57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c4bd5a:;
  /* 12c4bd5a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bd5e jge 0x12c4bf00 */
  if ((C.sf==C.of)) goto L_12c4bf00;
  /* 12c4bd64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4bd67 cmp dword ptr [ecx*4 + 0x12c6fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12c6fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bd6f je 0x12c4be66 */
  if (C.zf) goto L_12c4be66;
  /* 12c4bd75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4bd78 mov eax, dword ptr [edx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6fe60)));
  /* 12c4bd7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4bd82 jmp 0x12c4bd8d */
  goto L_12c4bd8d;
L_12c4bd84:;
  /* 12c4bd84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bd87 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bd8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c4bd8d:;
  /* 12c4bd8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4bd90 mov eax, dword ptr [edx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6fe60)));
  /* 12c4bd97 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bd9c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bd9f jae 0x12c4be56 */
  if (!C.cf) goto L_12c4be56;
  /* 12c4bda5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bda8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c4bdac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4bdaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4bdb1 jne 0x12c4be51 */
  if (!C.zf) goto L_12c4be51;
  /* 12c4bdb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bdba cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bdbe jne 0x12c4bdf9 */
  if (!C.zf) goto L_12c4bdf9;
  /* 12c4bdc0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c4bdc2 call 0x12c46550 */
  push32(0x12c4bdc7u); f_12c46550();
  /* 12c4bdc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bdca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bdcd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bdd1 jne 0x12c4bdef */
  if (!C.zf) goto L_12c4bdef;
  /* 12c4bdd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bdd6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bdd9 push edx */
  push32((uint32_t)(EDX));
  /* 12c4bdda call dword ptr [0x12c702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f0))), 0x12c4bde0u);
  /* 12c4bde0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bde3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c4bde6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bde9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bdec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12c4bdef:;
  /* 12c4bdef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c4bdf1 call 0x12c465f0 */
  push32(0x12c4bdf6u); f_12c465f0();
  /* 12c4bdf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4bdf9:;
  /* 12c4bdf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bdfc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bdff push eax */
  push32((uint32_t)(EAX));
  /* 12c4be00 call dword ptr [0x12c702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f4))), 0x12c4be06u);
  /* 12c4be06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4be09 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12c4be0d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4be10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4be12 je 0x12c4be26 */
  if (C.zf) goto L_12c4be26;
  /* 12c4be14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4be17 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4be1a push eax */
  push32((uint32_t)(EAX));
  /* 12c4be1b call dword ptr [0x12c702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f8))), 0x12c4be21u);
  /* 12c4be21 jmp 0x12c4bd84 */
  goto L_12c4bd84;
L_12c4be26:;
  /* 12c4be26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4be29 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c4be2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4be32 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4be35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4be38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4be3b sub eax, dword ptr [edx*4 + 0x12c6fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12c6fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4be42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c4be43 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12c4be48 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c4be4a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4be4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4be4f jmp 0x12c4be56 */
  goto L_12c4be56;
L_12c4be51:;
  /* 12c4be51 jmp 0x12c4bd84 */
  goto L_12c4bd84;
L_12c4be56:;
  /* 12c4be56 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4be5a je 0x12c4be61 */
  if (C.zf) goto L_12c4be61;
  /* 12c4be5c jmp 0x12c4bf00 */
  goto L_12c4bf00;
L_12c4be61:;
  /* 12c4be61 jmp 0x12c4befb */
  goto L_12c4befb;
L_12c4be66:;
  /* 12c4be66 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12c4be68 push 0x12c69f64 */
  push32((uint32_t)(0x12c69f64u));
  /* 12c4be6d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4be6f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12c4be74 call 0x12c42b50 */
  push32(0x12c4be79u); f_12c42b50();
  /* 12c4be79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4be7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4be7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4be83 je 0x12c4bef9 */
  if (C.zf) goto L_12c4bef9;
  /* 12c4be85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4be88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4be8b mov dword ptr [eax*4 + 0x12c6fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12c6fe60), (ECX));
  /* 12c4be92 mov edx, dword ptr [0x12c6ff9c] */
  EDX = (r32((uint32_t)(0x12c6ff9c)));
  /* 12c4be98 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4be9b mov dword ptr [0x12c6ff9c], edx */
  w32((uint32_t)(0x12c6ff9c), (EDX));
  /* 12c4bea1 jmp 0x12c4beac */
  goto L_12c4beac;
L_12c4bea3:;
  /* 12c4bea3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bea6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bea9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4beac:;
  /* 12c4beac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4beaf mov edx, dword ptr [ecx*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4beb6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bebc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bebf jae 0x12c4bee4 */
  if (!C.cf) goto L_12c4bee4;
  /* 12c4bec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bec4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c4bec8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4becb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c4bed1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bed4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12c4bed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4bedb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12c4bee2 jmp 0x12c4bea3 */
  goto L_12c4bea3;
L_12c4bee4:;
  /* 12c4bee4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4bee7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4beea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4beed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4bef0 push edx */
  push32((uint32_t)(EDX));
  /* 12c4bef1 call 0x12c4c240 */
  push32(0x12c4bef6u); f_12c4c240();
  /* 12c4bef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4bef9:;
  /* 12c4bef9 jmp 0x12c4bf00 */
  goto L_12c4bf00;
L_12c4befb:;
  /* 12c4befb jmp 0x12c4bd51 */
  goto L_12c4bd51;
L_12c4bf00:;
  /* 12c4bf00 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12c4bf02 call 0x12c465f0 */
  push32(0x12c4bf07u); f_12c465f0();
  /* 12c4bf07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4bf0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4bf0d pop esi */
  ESI = (pop32());
  /* 12c4bf0e mov esp, ebp */
  ESP = (EBP);
  /* 12c4bf10 pop ebp */
  EBP = (pop32());
  /* 12c4bf11 ret  */
  ESPCHK(0x12c4bd30u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12c4bf20 (183 bytes, 57 insns) */
void f_12c4bf20(void) {
  FTRACE(0x12c4bf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4bf20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4bf21 mov ebp, esp */
  EBP = (ESP);
  /* 12c4bf23 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4bf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bf27 cmp eax, dword ptr [0x12c6ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bf2d jae 0x12c4bfba */
  if (!C.cf) goto L_12c4bfba;
  /* 12c4bf33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bf36 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4bf39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bf3c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4bf3f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4bf42 mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4bf49 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bf4d jne 0x12c4bfba */
  if (!C.zf) goto L_12c4bfba;
  /* 12c4bf4f cmp dword ptr [0x12c6e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bf56 jne 0x12c4bf9a */
  if (!C.zf) goto L_12c4bf9a;
  /* 12c4bf58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bf5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4bf5e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bf62 je 0x12c4bf72 */
  if (C.zf) goto L_12c4bf72;
  /* 12c4bf64 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bf68 je 0x12c4bf80 */
  if (C.zf) goto L_12c4bf80;
  /* 12c4bf6a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bf6e je 0x12c4bf8e */
  if (C.zf) goto L_12c4bf8e;
  /* 12c4bf70 jmp 0x12c4bf9a */
  goto L_12c4bf9a;
L_12c4bf72:;
  /* 12c4bf72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4bf75 push edx */
  push32((uint32_t)(EDX));
  /* 12c4bf76 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12c4bf78 call dword ptr [0x12c70334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70334))), 0x12c4bf7eu);
  /* 12c4bf7e jmp 0x12c4bf9a */
  goto L_12c4bf9a;
L_12c4bf80:;
  /* 12c4bf80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4bf83 push eax */
  push32((uint32_t)(EAX));
  /* 12c4bf84 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12c4bf86 call dword ptr [0x12c70334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70334))), 0x12c4bf8cu);
  /* 12c4bf8c jmp 0x12c4bf9a */
  goto L_12c4bf9a;
L_12c4bf8e:;
  /* 12c4bf8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4bf91 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4bf92 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c4bf94 call dword ptr [0x12c70334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70334))), 0x12c4bf9au);
L_12c4bf9a:;
  /* 12c4bf9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bf9d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c4bfa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bfa3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4bfa6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4bfa9 mov ecx, dword ptr [edx*4 + 0x12c6fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c6fe60)));
  /* 12c4bfb0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4bfb3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12c4bfb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4bfb8 jmp 0x12c4bfd3 */
  goto L_12c4bfd3;
L_12c4bfba:;
  /* 12c4bfba call 0x12c4aa20 */
  push32(0x12c4bfbfu); f_12c4aa20();
  /* 12c4bfbf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4bfc5 call 0x12c4aa30 */
  push32(0x12c4bfcau); f_12c4aa30();
  /* 12c4bfca mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c4bfd0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c4bfd3:;
  /* 12c4bfd3 mov esp, ebp */
  ESP = (EBP);
  /* 12c4bfd5 pop ebp */
  EBP = (pop32());
  /* 12c4bfd6 ret  */
  ESPCHK(0x12c4bf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfe0 @ 0x12c4bfe0 (216 bytes, 63 insns) */
void f_12c4bfe0(void) {
  FTRACE(0x12c4bfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4bfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4bfe1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4bfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4bfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bfe7 cmp eax, dword ptr [0x12c6ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4bfed jae 0x12c4c09b */
  if (!C.cf) goto L_12c4c09b;
  /* 12c4bff3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bff6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4bff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4bffc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4bfff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c002 mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4c009 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c4c00e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c011 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4c013 je 0x12c4c09b */
  if (C.zf) goto L_12c4c09b;
  /* 12c4c019 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c01c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c4c01f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c022 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c025 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c028 mov ecx, dword ptr [edx*4 + 0x12c6fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c6fe60)));
  /* 12c4c02f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c033 je 0x12c4c09b */
  if (C.zf) goto L_12c4c09b;
  /* 12c4c035 cmp dword ptr [0x12c6e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c03c jne 0x12c4c07a */
  if (!C.zf) goto L_12c4c07a;
  /* 12c4c03e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c041 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4c044 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c048 je 0x12c4c058 */
  if (C.zf) goto L_12c4c058;
  /* 12c4c04a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c04e je 0x12c4c064 */
  if (C.zf) goto L_12c4c064;
  /* 12c4c050 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c054 je 0x12c4c070 */
  if (C.zf) goto L_12c4c070;
  /* 12c4c056 jmp 0x12c4c07a */
  goto L_12c4c07a;
L_12c4c058:;
  /* 12c4c058 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4c05a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12c4c05c call dword ptr [0x12c70334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70334))), 0x12c4c062u);
  /* 12c4c062 jmp 0x12c4c07a */
  goto L_12c4c07a;
L_12c4c064:;
  /* 12c4c064 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4c066 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12c4c068 call dword ptr [0x12c70334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70334))), 0x12c4c06eu);
  /* 12c4c06e jmp 0x12c4c07a */
  goto L_12c4c07a;
L_12c4c070:;
  /* 12c4c070 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4c072 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c4c074 call dword ptr [0x12c70334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70334))), 0x12c4c07au);
L_12c4c07a:;
  /* 12c4c07a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c07d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4c080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c083 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c086 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c089 mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4c090 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12c4c097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c099 jmp 0x12c4c0b4 */
  goto L_12c4c0b4;
L_12c4c09b:;
  /* 12c4c09b call 0x12c4aa20 */
  push32(0x12c4c0a0u); f_12c4aa20();
  /* 12c4c0a0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4c0a6 call 0x12c4aa30 */
  push32(0x12c4c0abu); f_12c4aa30();
  /* 12c4c0ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c4c0b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c4c0b4:;
  /* 12c4c0b4 mov esp, ebp */
  ESP = (EBP);
  /* 12c4c0b6 pop ebp */
  EBP = (pop32());
  /* 12c4c0b7 ret  */
  ESPCHK(0x12c4bfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c0 @ 0x12c4c0c0 (102 bytes, 30 insns) */
void f_12c4c0c0(void) {
  FTRACE(0x12c4c0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c0c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c0c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c0c6 cmp eax, dword ptr [0x12c6ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c0cc jae 0x12c4c10b */
  if (!C.cf) goto L_12c4c10b;
  /* 12c4c0ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c0d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4c0d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c0d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4c0da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c0dd mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4c0e4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c4c0e9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c0ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4c0ee je 0x12c4c10b */
  if (C.zf) goto L_12c4c10b;
  /* 12c4c0f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c0f3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12c4c0f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c0f9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c0fc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c0ff mov ecx, dword ptr [edx*4 + 0x12c6fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12c6fe60)));
  /* 12c4c106 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12c4c109 jmp 0x12c4c124 */
  goto L_12c4c124;
L_12c4c10b:;
  /* 12c4c10b call 0x12c4aa20 */
  push32(0x12c4c110u); f_12c4aa20();
  /* 12c4c110 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4c116 call 0x12c4aa30 */
  push32(0x12c4c11bu); f_12c4aa30();
  /* 12c4c11b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c4c121 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c4c124:;
  /* 12c4c124 pop ebp */
  EBP = (pop32());
  /* 12c4c125 ret  */
  ESPCHK(0x12c4c0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c130 @ 0x12c4c130 (260 bytes, 83 insns) */
void f_12c4c130(void) {
  FTRACE(0x12c4c130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c130 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c131 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c133 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c136 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c4c13a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4c13d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c140 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4c142 je 0x12c4c14d */
  if (C.zf) goto L_12c4c14d;
  /* 12c4c144 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c4c147 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12c4c14a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12c4c14d:;
  /* 12c4c14d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4c150 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4c156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4c158 je 0x12c4c162 */
  if (C.zf) goto L_12c4c162;
  /* 12c4c15a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c4c15d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12c4c15f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12c4c162:;
  /* 12c4c162 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4c165 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c16b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4c16d je 0x12c4c178 */
  if (C.zf) goto L_12c4c178;
  /* 12c4c16f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c4c172 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12c4c175 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12c4c178:;
  /* 12c4c178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c17b push eax */
  push32((uint32_t)(EAX));
  /* 12c4c17c call dword ptr [0x12c702b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b0))), 0x12c4c182u);
  /* 12c4c182 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4c185 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c189 jne 0x12c4c1a2 */
  if (!C.zf) goto L_12c4c1a2;
  /* 12c4c18b call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c4c191u);
  /* 12c4c191 push eax */
  push32((uint32_t)(EAX));
  /* 12c4c192 call 0x12c4a980 */
  push32(0x12c4c197u); f_12c4a980();
  /* 12c4c197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c19a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c19d jmp 0x12c4c230 */
  goto L_12c4c230;
L_12c4c1a2:;
  /* 12c4c1a2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c1a6 jne 0x12c4c1b3 */
  if (!C.zf) goto L_12c4c1b3;
  /* 12c4c1a8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c4c1ab or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12c4c1ae mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12c4c1b1 jmp 0x12c4c1c2 */
  goto L_12c4c1c2;
L_12c4c1b3:;
  /* 12c4c1b3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c1b7 jne 0x12c4c1c2 */
  if (!C.zf) goto L_12c4c1c2;
  /* 12c4c1b9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c4c1bc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12c4c1bf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12c4c1c2:;
  /* 12c4c1c2 call 0x12c4bd30 */
  push32(0x12c4c1c7u); f_12c4bd30();
  /* 12c4c1c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4c1ca cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c1ce jne 0x12c4c1eb */
  if (!C.zf) goto L_12c4c1eb;
  /* 12c4c1d0 call 0x12c4aa20 */
  push32(0x12c4c1d5u); f_12c4aa20();
  /* 12c4c1d5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12c4c1db call 0x12c4aa30 */
  push32(0x12c4c1e0u); f_12c4aa30();
  /* 12c4c1e0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c4c1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c1e9 jmp 0x12c4c230 */
  goto L_12c4c230;
L_12c4c1eb:;
  /* 12c4c1eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c1ee push eax */
  push32((uint32_t)(EAX));
  /* 12c4c1ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c1f2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c1f3 call 0x12c4bf20 */
  push32(0x12c4c1f8u); f_12c4bf20();
  /* 12c4c1f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c1fb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c4c1fe or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12c4c201 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12c4c204 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c207 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4c20a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c20d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c210 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c213 mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4c21a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12c4c21d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12c4c221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c224 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c225 call 0x12c4c2d0 */
  push32(0x12c4c22au); f_12c4c2d0();
  /* 12c4c22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c22d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c4c230:;
  /* 12c4c230 mov esp, ebp */
  ESP = (EBP);
  /* 12c4c232 pop ebp */
  EBP = (pop32());
  /* 12c4c233 ret  */
  ESPCHK(0x12c4c130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c240 @ 0x12c4c240 (134 bytes, 44 insns) */
void f_12c4c240(void) {
  FTRACE(0x12c4c240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c240 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c241 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c243 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c247 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4c24a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c24d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c250 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c253 mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4c25a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c25c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c4c25f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c262 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c266 jne 0x12c4c2a1 */
  if (!C.zf) goto L_12c4c2a1;
  /* 12c4c268 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c4c26a call 0x12c46550 */
  push32(0x12c4c26fu); f_12c46550();
  /* 12c4c26f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c272 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c275 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c279 jne 0x12c4c297 */
  if (!C.zf) goto L_12c4c297;
  /* 12c4c27b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c27e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c281 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c282 call dword ptr [0x12c702f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f0))), 0x12c4c288u);
  /* 12c4c288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c28b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c4c28e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c294 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12c4c297:;
  /* 12c4c297 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c4c299 call 0x12c465f0 */
  push32(0x12c4c29eu); f_12c465f0();
  /* 12c4c29e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4c2a1:;
  /* 12c4c2a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c2a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4c2a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c2aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c2ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c2b0 mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4c2b7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12c4c2bb push eax */
  push32((uint32_t)(EAX));
  /* 12c4c2bc call dword ptr [0x12c702f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f4))), 0x12c4c2c2u);
  /* 12c4c2c2 mov esp, ebp */
  ESP = (EBP);
  /* 12c4c2c4 pop ebp */
  EBP = (pop32());
  /* 12c4c2c5 ret  */
  ESPCHK(0x12c4c240u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12c4c2d0 (38 bytes, 13 insns) */
void f_12c4c2d0(void) {
  FTRACE(0x12c4c2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c2d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c2d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c2d6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4c2d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c2dc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c2df imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c2e2 mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4c2e9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12c4c2ed push eax */
  push32((uint32_t)(EAX));
  /* 12c4c2ee call dword ptr [0x12c702f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702f8))), 0x12c4c2f4u);
  /* 12c4c2f4 pop ebp */
  EBP = (pop32());
  /* 12c4c2f5 ret  */
  ESPCHK(0x12c4c2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c300 @ 0x12c4c300 (218 bytes, 63 insns) */
void f_12c4c300(void) {
  FTRACE(0x12c4c300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c300 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c301 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c306 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4c30d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4c30f call 0x12c46550 */
  push32(0x12c4c314u); f_12c46550();
  /* 12c4c314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c317 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12c4c31e jmp 0x12c4c329 */
  goto L_12c4c329;
L_12c4c320:;
  /* 12c4c320 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c323 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c326 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c4c329:;
  /* 12c4c329 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c32c cmp ecx, dword ptr [0x12c6fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c332 jge 0x12c4c3c9 */
  if ((C.sf==C.of)) goto L_12c4c3c9;
  /* 12c4c338 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c33b mov eax, dword ptr [0x12c6e818] */
  EAX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c340 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c344 je 0x12c4c3c4 */
  if (C.zf) goto L_12c4c3c4;
  /* 12c4c346 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c349 mov edx, dword ptr [0x12c6e818] */
  EDX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c34f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12c4c352 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c4c355 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c35b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4c35d je 0x12c4c381 */
  if (C.zf) goto L_12c4c381;
  /* 12c4c35f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c362 mov eax, dword ptr [0x12c6e818] */
  EAX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c367 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c4c36a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c36b call 0x12c4d0f0 */
  push32(0x12c4c370u); f_12c4d0f0();
  /* 12c4c370 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c373 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c376 je 0x12c4c381 */
  if (C.zf) goto L_12c4c381;
  /* 12c4c378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c37b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c37e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c4c381:;
  /* 12c4c381 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c385 jl 0x12c4c3c4 */
  if ((C.sf!=C.of)) goto L_12c4c3c4;
  /* 12c4c387 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c38a mov ecx, dword ptr [0x12c6e818] */
  ECX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c390 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c4c393 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c396 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c397 call dword ptr [0x12c702b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702b8))), 0x12c4c39du);
  /* 12c4c39d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4c39f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c3a2 mov ecx, dword ptr [0x12c6e818] */
  ECX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c3a8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c4c3ab push edx */
  push32((uint32_t)(EDX));
  /* 12c4c3ac call 0x12c435e0 */
  push32(0x12c4c3b1u); f_12c435e0();
  /* 12c4c3b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c3b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c3b7 mov ecx, dword ptr [0x12c6e818] */
  ECX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c3bd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12c4c3c4:;
  /* 12c4c3c4 jmp 0x12c4c320 */
  goto L_12c4c320;
L_12c4c3c9:;
  /* 12c4c3c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4c3cb call 0x12c465f0 */
  push32(0x12c4c3d0u); f_12c465f0();
  /* 12c4c3d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c3d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c3d6 mov esp, ebp */
  ESP = (EBP);
  /* 12c4c3d8 pop ebp */
  EBP = (pop32());
  /* 12c4c3d9 ret  */
  ESPCHK(0x12c4c300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3e0 @ 0x12c4c3e0 (68 bytes, 26 insns) */
void f_12c4c3e0(void) {
  FTRACE(0x12c4c3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c3e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c3e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c3e8 jne 0x12c4c3f6 */
  if (!C.zf) goto L_12c4c3f6;
  /* 12c4c3ea push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4c3ec call 0x12c4c550 */
  push32(0x12c4c3f1u); f_12c4c550();
  /* 12c4c3f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c3f4 jmp 0x12c4c420 */
  goto L_12c4c420;
L_12c4c3f6:;
  /* 12c4c3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c3f9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4c3fa call 0x12c4b960 */
  push32(0x12c4c3ffu); f_12c4b960();
  /* 12c4c3ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c405 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c406 call 0x12c4c430 */
  push32(0x12c4c40bu); f_12c4c430();
  /* 12c4c40b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c40e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4c411 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c414 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c415 call 0x12c4b9d0 */
  push32(0x12c4c41au); f_12c4b9d0();
  /* 12c4c41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c41d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c4c420:;
  /* 12c4c420 mov esp, ebp */
  ESP = (EBP);
  /* 12c4c422 pop ebp */
  EBP = (pop32());
  /* 12c4c423 ret  */
  ESPCHK(0x12c4c3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x12c4c430 (65 bytes, 26 insns) */
void f_12c4c430(void) {
  FTRACE(0x12c4c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c430 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c431 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c436 push eax */
  push32((uint32_t)(EAX));
  /* 12c4c437 call 0x12c4c480 */
  push32(0x12c4c43cu); f_12c4c480();
  /* 12c4c43c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c43f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4c441 je 0x12c4c448 */
  if (C.zf) goto L_12c4c448;
  /* 12c4c443 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c446 jmp 0x12c4c46f */
  goto L_12c4c46f;
L_12c4c448:;
  /* 12c4c448 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c44b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4c44e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4c454 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4c456 je 0x12c4c46d */
  if (C.zf) goto L_12c4c46d;
  /* 12c4c458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c45b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c4c45e push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c45f call 0x12c4d240 */
  push32(0x12c4c464u); f_12c4d240();
  /* 12c4c464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c467 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4c469 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c46b jmp 0x12c4c46f */
  goto L_12c4c46f;
L_12c4c46d:;
  /* 12c4c46d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4c46f:;
  /* 12c4c46f pop ebp */
  EBP = (pop32());
  /* 12c4c470 ret  */
  ESPCHK(0x12c4c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c480 @ 0x12c4c480 (183 bytes, 62 insns) */
void f_12c4c480(void) {
  FTRACE(0x12c4c480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c480 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c481 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c486 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4c48d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c490 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4c493 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c496 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4c499 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4c49c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c49f jne 0x12c4c51b */
  if (!C.zf) goto L_12c4c51b;
  /* 12c4c4a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c4a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c4c4a7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c4ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4c4af je 0x12c4c51b */
  if (C.zf) goto L_12c4c51b;
  /* 12c4c4b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c4b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c4b7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12c4c4b9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c4bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4c4bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c4c3 jle 0x12c4c51b */
  if ((C.zf||C.sf!=C.of)) goto L_12c4c51b;
  /* 12c4c4c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c4c8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c4c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c4cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c4c4cf push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c4d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c4d3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c4c4d6 push eax */
  push32((uint32_t)(EAX));
  /* 12c4c4d7 call 0x12c4b3f0 */
  push32(0x12c4c4dcu); f_12c4b3f0();
  /* 12c4c4dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c4df cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c4e2 jne 0x12c4c505 */
  if (!C.zf) goto L_12c4c505;
  /* 12c4c4e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c4e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4c4ea and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4c4f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4c4f2 je 0x12c4c503 */
  if (C.zf) goto L_12c4c503;
  /* 12c4c4f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c4f7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c4c4fa and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c4fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c500 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12c4c503:;
  /* 12c4c503 jmp 0x12c4c51b */
  goto L_12c4c51b;
L_12c4c505:;
  /* 12c4c505 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c508 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c4c50b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c50e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c511 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12c4c514 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c4c51b:;
  /* 12c4c51b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c51e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c521 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c4c524 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c4c526 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4c529 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c4c530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c533 mov esp, ebp */
  ESP = (EBP);
  /* 12c4c535 pop ebp */
  EBP = (pop32());
  /* 12c4c536 ret  */
  ESPCHK(0x12c4c480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c540 @ 0x12c4c540 (15 bytes, 7 insns) */
void f_12c4c540(void) {
  FTRACE(0x12c4c540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c540 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c541 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c543 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4c545 call 0x12c4c550 */
  push32(0x12c4c54au); f_12c4c550();
  /* 12c4c54a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c54d pop ebp */
  EBP = (pop32());
  /* 12c4c54e ret  */
  ESPCHK(0x12c4c540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c550 @ 0x12c4c550 (319 bytes, 94 insns) */
void f_12c4c550(void) {
  FTRACE(0x12c4c550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c550 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c551 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c553 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c556 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4c55d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4c564 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4c566 call 0x12c46550 */
  push32(0x12c4c56bu); f_12c46550();
  /* 12c4c56b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c56e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c4c575 jmp 0x12c4c580 */
  goto L_12c4c580;
L_12c4c577:;
  /* 12c4c577 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c57a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c57d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c4c580:;
  /* 12c4c580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c583 cmp ecx, dword ptr [0x12c6fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c6fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c589 jge 0x12c4c673 */
  if ((C.sf==C.of)) goto L_12c4c673;
  /* 12c4c58f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c592 mov eax, dword ptr [0x12c6e818] */
  EAX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c597 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c59b je 0x12c4c66e */
  if (C.zf) goto L_12c4c66e;
  /* 12c4c5a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c5a4 mov edx, dword ptr [0x12c6e818] */
  EDX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c5aa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12c4c5ad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c4c5b0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4c5b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4c5b8 je 0x12c4c66e */
  if (C.zf) goto L_12c4c66e;
  /* 12c4c5be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c5c1 mov eax, dword ptr [0x12c6e818] */
  EAX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c5c6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c4c5c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c5ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c5cd push edx */
  push32((uint32_t)(EDX));
  /* 12c4c5ce call 0x12c4b9a0 */
  push32(0x12c4c5d3u); f_12c4b9a0();
  /* 12c4c5d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c5d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c5d9 mov ecx, dword ptr [0x12c6e818] */
  ECX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c5df mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c4c5e2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c4c5e5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c5ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4c5ec je 0x12c4c655 */
  if (C.zf) goto L_12c4c655;
  /* 12c4c5ee cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c5f2 jne 0x12c4c619 */
  if (!C.zf) goto L_12c4c619;
  /* 12c4c5f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c5f7 mov edx, dword ptr [0x12c6e818] */
  EDX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c5fd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12c4c600 push eax */
  push32((uint32_t)(EAX));
  /* 12c4c601 call 0x12c4c430 */
  push32(0x12c4c606u); f_12c4c430();
  /* 12c4c606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c609 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c60c je 0x12c4c617 */
  if (C.zf) goto L_12c4c617;
  /* 12c4c60e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c611 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c614 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c4c617:;
  /* 12c4c617 jmp 0x12c4c655 */
  goto L_12c4c655;
L_12c4c619:;
  /* 12c4c619 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c61d jne 0x12c4c655 */
  if (!C.zf) goto L_12c4c655;
  /* 12c4c61f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c622 mov eax, dword ptr [0x12c6e818] */
  EAX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c627 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12c4c62a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4c62d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4c630 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4c632 je 0x12c4c655 */
  if (C.zf) goto L_12c4c655;
  /* 12c4c634 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c637 mov ecx, dword ptr [0x12c6e818] */
  ECX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c63d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c4c640 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c641 call 0x12c4c430 */
  push32(0x12c4c646u); f_12c4c430();
  /* 12c4c646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c649 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c64c jne 0x12c4c655 */
  if (!C.zf) goto L_12c4c655;
  /* 12c4c64e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12c4c655:;
  /* 12c4c655 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c658 mov ecx, dword ptr [0x12c6e818] */
  ECX = (r32((uint32_t)(0x12c6e818)));
  /* 12c4c65e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12c4c661 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c662 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c665 push eax */
  push32((uint32_t)(EAX));
  /* 12c4c666 call 0x12c4ba10 */
  push32(0x12c4c66bu); f_12c4ba10();
  /* 12c4c66b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4c66e:;
  /* 12c4c66e jmp 0x12c4c577 */
  goto L_12c4c577;
L_12c4c673:;
  /* 12c4c673 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4c675 call 0x12c465f0 */
  push32(0x12c4c67au); f_12c465f0();
  /* 12c4c67a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c67d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c681 jne 0x12c4c688 */
  if (!C.zf) goto L_12c4c688;
  /* 12c4c683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4c686 jmp 0x12c4c68b */
  goto L_12c4c68b;
L_12c4c688:;
  /* 12c4c688 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c4c68b:;
  /* 12c4c68b mov esp, ebp */
  ESP = (EBP);
  /* 12c4c68d pop ebp */
  EBP = (pop32());
  /* 12c4c68e ret  */
  ESPCHK(0x12c4c550u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12c4c690 (15 bytes, 7 insns) */
void f_12c4c690(void) {
  FTRACE(0x12c4c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c690 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c691 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c693 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4c695 call 0x12c41ac0 */
  push32(0x12c4c69au); f_12c41ac0();
  /* 12c4c69a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c69d pop ebp */
  EBP = (pop32());
  /* 12c4c69e ret  */
  ESPCHK(0x12c4c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6a0 @ 0x12c4c6a0 (1007 bytes, 269 insns) */
void f_12c4c6a0(void) {
  FTRACE(0x12c4c6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4c6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4c6a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4c6a3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c6a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c6ad jl 0x12c4c6b5 */
  if ((C.sf!=C.of)) goto L_12c4c6b5;
  /* 12c4c6af cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c6b3 jle 0x12c4c6bc */
  if ((C.zf||C.sf!=C.of)) goto L_12c4c6bc;
L_12c4c6b5:;
  /* 12c4c6b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c6b7 jmp 0x12c4ca8b */
  goto L_12c4ca8b;
L_12c4c6bc:;
  /* 12c4c6bc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c4c6be call 0x12c46550 */
  push32(0x12c4c6c3u); f_12c46550();
  /* 12c4c6c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c6c6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c4c6cd mov eax, dword ptr [0x12c6e804] */
  EAX = (r32((uint32_t)(0x12c6e804)));
  /* 12c4c6d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c6d5 mov dword ptr [0x12c6e804], eax */
  w32((uint32_t)(0x12c6e804), (EAX));
L_12c4c6da:;
  /* 12c4c6da cmp dword ptr [0x12c6e814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c6e1 je 0x12c4c6ed */
  if (C.zf) goto L_12c4c6ed;
  /* 12c4c6e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4c6e5 call dword ptr [0x12c70338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70338))), 0x12c4c6ebu);
  /* 12c4c6eb jmp 0x12c4c6da */
  goto L_12c4c6da;
L_12c4c6ed:;
  /* 12c4c6ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c6f1 je 0x12c4c731 */
  if (C.zf) goto L_12c4c731;
  /* 12c4c6f3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c6f7 je 0x12c4c711 */
  if (C.zf) goto L_12c4c711;
  /* 12c4c6f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4c6fc push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c6fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c700 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c701 call 0x12c4ca90 */
  push32(0x12c4c706u); f_12c4ca90();
  /* 12c4c706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c709 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12c4c70f jmp 0x12c4c723 */
  goto L_12c4c723;
L_12c4c711:;
  /* 12c4c711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c714 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c717 mov ecx, dword ptr [eax + 0x12c6d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12c6d4dc)));
  /* 12c4c71d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12c4c723:;
  /* 12c4c723 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12c4c729 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c4c72c jmp 0x12c4ca6b */
  goto L_12c4ca6b;
L_12c4c731:;
  /* 12c4c731 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12c4c738 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c4c73f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c743 je 0x12c4ca63 */
  if (C.zf) goto L_12c4ca63;
  /* 12c4c749 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4c74c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4c74f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c752 jne 0x12c4c974 */
  if (!C.zf) goto L_12c4c974;
  /* 12c4c758 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4c75b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c4c75f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c762 jne 0x12c4c974 */
  if (!C.zf) goto L_12c4c974;
  /* 12c4c768 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4c76b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12c4c76f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c772 jne 0x12c4c974 */
  if (!C.zf) goto L_12c4c974;
  /* 12c4c778 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4c77b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12c4c781:;
  /* 12c4c781 push 0x12c69fb4 */
  push32((uint32_t)(0x12c69fb4u));
  /* 12c4c786 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c4c78c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c78d call 0x12c4e8f0 */
  push32(0x12c4c792u); f_12c4e8f0();
  /* 12c4c792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c795 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12c4c79b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c7a2 je 0x12c4c7cd */
  if (C.zf) goto L_12c4c7cd;
  /* 12c4c7a4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c4c7aa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c7b0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12c4c7b6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c7bd je 0x12c4c7cd */
  if (C.zf) goto L_12c4c7cd;
  /* 12c4c7bf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c4c7c5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4c7c8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c7cb jne 0x12c4c7f3 */
  if (!C.zf) goto L_12c4c7f3;
L_12c4c7cd:;
  /* 12c4c7cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c7d1 je 0x12c4c7ec */
  if (C.zf) goto L_12c4c7ec;
  /* 12c4c7d3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c4c7d5 call 0x12c465f0 */
  push32(0x12c4c7dau); f_12c465f0();
  /* 12c4c7da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c7dd mov edx, dword ptr [0x12c6e804] */
  EDX = (r32((uint32_t)(0x12c6e804)));
  /* 12c4c7e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c7e6 mov dword ptr [0x12c6e804], edx */
  w32((uint32_t)(0x12c6e804), (EDX));
L_12c4c7ec:;
  /* 12c4c7ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c7ee jmp 0x12c4ca8b */
  goto L_12c4ca8b;
L_12c4c7f3:;
  /* 12c4c7f3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c4c7fa jmp 0x12c4c805 */
  goto L_12c4c805;
L_12c4c7fc:;
  /* 12c4c7fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4c7ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c802 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c4c805:;
  /* 12c4c805 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c809 jg 0x12c4c853 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4c853;
  /* 12c4c80b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12c4c811 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c812 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c4c818 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c819 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4c81c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c81f mov ecx, dword ptr [eax + 0x12c6d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12c6d4d8)));
  /* 12c4c825 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c826 call 0x12c4e8b0 */
  push32(0x12c4c82bu); f_12c4e8b0();
  /* 12c4c82b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c82e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4c830 jne 0x12c4c851 */
  if (!C.zf) goto L_12c4c851;
  /* 12c4c832 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4c835 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c838 mov eax, dword ptr [edx + 0x12c6d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12c6d4d8)));
  /* 12c4c83e push eax */
  push32((uint32_t)(EAX));
  /* 12c4c83f call 0x12c45980 */
  push32(0x12c4c844u); f_12c45980();
  /* 12c4c844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c847 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c84d jne 0x12c4c851 */
  if (!C.zf) goto L_12c4c851;
  /* 12c4c84f jmp 0x12c4c853 */
  goto L_12c4c853;
L_12c4c851:;
  /* 12c4c851 jmp 0x12c4c7fc */
  goto L_12c4c7fc;
L_12c4c853:;
  /* 12c4c853 push 0x12c69fb0 */
  push32((uint32_t)(0x12c69fb0u));
  /* 12c4c858 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c4c85e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c861 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12c4c867 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c4c86d push edx */
  push32((uint32_t)(EDX));
  /* 12c4c86e call 0x12c4e870 */
  push32(0x12c4c873u); f_12c4e870();
  /* 12c4c873 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c876 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12c4c87c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c883 jne 0x12c4c8b9 */
  if (!C.zf) goto L_12c4c8b9;
  /* 12c4c885 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c4c88b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4c88e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c891 je 0x12c4c8b9 */
  if (C.zf) goto L_12c4c8b9;
  /* 12c4c893 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c897 je 0x12c4c8b2 */
  if (C.zf) goto L_12c4c8b2;
  /* 12c4c899 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c4c89b call 0x12c465f0 */
  push32(0x12c4c8a0u); f_12c465f0();
  /* 12c4c8a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c8a3 mov edx, dword ptr [0x12c6e804] */
  EDX = (r32((uint32_t)(0x12c6e804)));
  /* 12c4c8a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4c8ac mov dword ptr [0x12c6e804], edx */
  w32((uint32_t)(0x12c6e804), (EDX));
L_12c4c8b2:;
  /* 12c4c8b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4c8b4 jmp 0x12c4ca8b */
  goto L_12c4ca8b;
L_12c4c8b9:;
  /* 12c4c8b9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c8bd jg 0x12c4c90a */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4c90a;
  /* 12c4c8bf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12c4c8c5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4c8c6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c4c8cc push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c8cd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12c4c8d3 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c8d4 call 0x12c46370 */
  push32(0x12c4c8d9u); f_12c46370();
  /* 12c4c8d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c8dc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12c4c8e2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12c4c8ea lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12c4c8f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c8f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4c8f4 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c8f5 call 0x12c4ca90 */
  push32(0x12c4c8fau); f_12c4ca90();
  /* 12c4c8fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c8fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4c8ff je 0x12c4c90a */
  if (C.zf) goto L_12c4c90a;
  /* 12c4c901 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c907 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c4c90a:;
  /* 12c4c90a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c4c910 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c916 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12c4c91c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c4c922 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c4c925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4c927 je 0x12c4c938 */
  if (C.zf) goto L_12c4c938;
  /* 12c4c929 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c4c92f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c932 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12c4c938:;
  /* 12c4c938 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12c4c93e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c4c941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4c943 jne 0x12c4c781 */
  if (!C.zf) goto L_12c4c781;
  /* 12c4c949 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c94d je 0x12c4c95c */
  if (C.zf) goto L_12c4c95c;
  /* 12c4c94f call 0x12c4cc30 */
  push32(0x12c4c954u); f_12c4cc30();
  /* 12c4c954 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12c4c95a jmp 0x12c4c966 */
  goto L_12c4c966;
L_12c4c95c:;
  /* 12c4c95c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12c4c966:;
  /* 12c4c966 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12c4c96c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4c96f jmp 0x12c4ca61 */
  goto L_12c4ca61;
L_12c4c974:;
  /* 12c4c974 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4c977 push edx */
  push32((uint32_t)(EDX));
  /* 12c4c978 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4c97a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4c97c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12c4c982 push eax */
  push32((uint32_t)(EAX));
  /* 12c4c983 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4c986 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c987 call 0x12c4cd30 */
  push32(0x12c4c98cu); f_12c4cd30();
  /* 12c4c98c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c98f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4c992 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c996 je 0x12c4ca61 */
  if (C.zf) goto L_12c4ca61;
  /* 12c4c99c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4c9a3 jmp 0x12c4c9ae */
  goto L_12c4c9ae;
L_12c4c9a5:;
  /* 12c4c9a5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4c9a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c9ab mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c4c9ae:;
  /* 12c4c9ae cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c9b2 jg 0x12c4ca10 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4ca10;
  /* 12c4c9b4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4c9b8 je 0x12c4ca0e */
  if (C.zf) goto L_12c4ca0e;
  /* 12c4c9ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4c9bd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4c9c0 mov ecx, dword ptr [eax + 0x12c6d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12c6d4dc)));
  /* 12c4c9c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c9c7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12c4c9cd push edx */
  push32((uint32_t)(EDX));
  /* 12c4c9ce call 0x12c4e7e0 */
  push32(0x12c4c9d3u); f_12c4e7e0();
  /* 12c4c9d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c9d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4c9d8 je 0x12c4ca05 */
  if (C.zf) goto L_12c4ca05;
  /* 12c4c9da lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12c4c9e0 push eax */
  push32((uint32_t)(EAX));
  /* 12c4c9e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4c9e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4c9e5 call 0x12c4ca90 */
  push32(0x12c4c9eau); f_12c4ca90();
  /* 12c4c9ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c9ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4c9ef je 0x12c4c9fc */
  if (C.zf) goto L_12c4c9fc;
  /* 12c4c9f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4c9f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4c9f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c4c9fa jmp 0x12c4ca03 */
  goto L_12c4ca03;
L_12c4c9fc:;
  /* 12c4c9fc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12c4ca03:;
  /* 12c4ca03 jmp 0x12c4ca0e */
  goto L_12c4ca0e;
L_12c4ca05:;
  /* 12c4ca05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4ca08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ca0b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c4ca0e:;
  /* 12c4ca0e jmp 0x12c4c9a5 */
  goto L_12c4c9a5;
L_12c4ca10:;
  /* 12c4ca10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ca14 je 0x12c4ca3b */
  if (C.zf) goto L_12c4ca3b;
  /* 12c4ca16 call 0x12c4cc30 */
  push32(0x12c4ca1bu); f_12c4cc30();
  /* 12c4ca1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4ca1e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4ca20 mov ecx, dword ptr [0x12c6d4dc] */
  ECX = (r32((uint32_t)(0x12c6d4dc)));
  /* 12c4ca26 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ca27 call 0x12c435e0 */
  push32(0x12c4ca2cu); f_12c435e0();
  /* 12c4ca2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ca2f mov dword ptr [0x12c6d4dc], 0 */
  w32((uint32_t)(0x12c6d4dc), (0x0u));
  /* 12c4ca39 jmp 0x12c4ca61 */
  goto L_12c4ca61;
L_12c4ca3b:;
  /* 12c4ca3b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ca3f je 0x12c4ca4e */
  if (C.zf) goto L_12c4ca4e;
  /* 12c4ca41 call 0x12c4cc30 */
  push32(0x12c4ca46u); f_12c4cc30();
  /* 12c4ca46 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12c4ca4c jmp 0x12c4ca58 */
  goto L_12c4ca58;
L_12c4ca4e:;
  /* 12c4ca4e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12c4ca58:;
  /* 12c4ca58 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12c4ca5e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c4ca61:;
  /* 12c4ca61 jmp 0x12c4ca6b */
  goto L_12c4ca6b;
L_12c4ca63:;
  /* 12c4ca63 call 0x12c4cc30 */
  push32(0x12c4ca68u); f_12c4cc30();
  /* 12c4ca68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c4ca6b:;
  /* 12c4ca6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ca6f je 0x12c4ca88 */
  if (C.zf) goto L_12c4ca88;
  /* 12c4ca71 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12c4ca73 call 0x12c465f0 */
  push32(0x12c4ca78u); f_12c465f0();
  /* 12c4ca78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ca7b mov eax, dword ptr [0x12c6e804] */
  EAX = (r32((uint32_t)(0x12c6e804)));
  /* 12c4ca80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ca83 mov dword ptr [0x12c6e804], eax */
  w32((uint32_t)(0x12c6e804), (EAX));
L_12c4ca88:;
  /* 12c4ca88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c4ca8b:;
  /* 12c4ca8b mov esp, ebp */
  ESP = (EBP);
  /* 12c4ca8d pop ebp */
  EBP = (pop32());
  /* 12c4ca8e ret  */
  ESPCHK(0x12c4c6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca90 @ 0x12c4ca90 (403 bytes, 117 insns) */
void f_12c4ca90(void) {
  FTRACE(0x12c4ca90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4ca90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4ca91 mov ebp, esp */
  EBP = (ESP);
  /* 12c4ca93 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ca99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ca9c push eax */
  push32((uint32_t)(EAX));
  /* 12c4ca9d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12c4caa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4caa4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12c4caaa push edx */
  push32((uint32_t)(EDX));
  /* 12c4caab lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12c4cab1 push eax */
  push32((uint32_t)(EAX));
  /* 12c4cab2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cab5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4cab6 call 0x12c4cd30 */
  push32(0x12c4cabbu); f_12c4cd30();
  /* 12c4cabb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cabe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4cac0 jne 0x12c4cac9 */
  if (!C.zf) goto L_12c4cac9;
  /* 12c4cac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4cac4 jmp 0x12c4cc1f */
  goto L_12c4cc1f;
L_12c4cac9:;
  /* 12c4cac9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12c4cace push 0x12c69fb8 */
  push32((uint32_t)(0x12c69fb8u));
  /* 12c4cad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4cad5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12c4cadb push edx */
  push32((uint32_t)(EDX));
  /* 12c4cadc call 0x12c45980 */
  push32(0x12c4cae1u); f_12c45980();
  /* 12c4cae1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cae7 push eax */
  push32((uint32_t)(EAX));
  /* 12c4cae8 call 0x12c42b50 */
  push32(0x12c4caedu); f_12c42b50();
  /* 12c4caed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4caf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4caf3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4caf7 jne 0x12c4cb00 */
  if (!C.zf) goto L_12c4cb00;
  /* 12c4caf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4cafb jmp 0x12c4cc1f */
  goto L_12c4cc1f;
L_12c4cb00:;
  /* 12c4cb00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cb03 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4cb06 mov ecx, dword ptr [eax + 0x12c6d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12c6d4dc)));
  /* 12c4cb0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4cb0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cb12 mov eax, dword ptr [edx*4 + 0x12c6e680] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c6e680)));
  /* 12c4cb19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4cb1c push 6 */
  push32((uint32_t)(0x6u));
  /* 12c4cb1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cb21 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4cb24 add ecx, 0x12c6e6d0 */
  { uint32_t _a=(ECX),_b=(0x12c6e6d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cb2a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4cb2b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12c4cb2e push edx */
  push32((uint32_t)(EDX));
  /* 12c4cb2f call 0x12c49430 */
  push32(0x12c4cb34u); f_12c49430();
  /* 12c4cb34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cb37 mov eax, dword ptr [0x12c6e698] */
  EAX = (r32((uint32_t)(0x12c6e698)));
  /* 12c4cb3c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c4cb3f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12c4cb45 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4cb46 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4cb49 push edx */
  push32((uint32_t)(EDX));
  /* 12c4cb4a call 0x12c45b00 */
  push32(0x12c4cb4fu); f_12c45b00();
  /* 12c4cb4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cb52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cb55 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4cb58 mov dword ptr [ecx + 0x12c6d4dc], eax */
  w32((uint32_t)(ECX + 0x12c6d4dc), (EAX));
  /* 12c4cb5e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12c4cb64 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4cb6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cb6d mov dword ptr [eax*4 + 0x12c6e680], edx */
  w32((uint32_t)(EAX*4 + 0x12c6e680), (EDX));
  /* 12c4cb74 push 6 */
  push32((uint32_t)(0x6u));
  /* 12c4cb76 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12c4cb7c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4cb7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cb80 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4cb83 add edx, 0x12c6e6d0 */
  { uint32_t _a=(EDX),_b=(0x12c6e6d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cb89 push edx */
  push32((uint32_t)(EDX));
  /* 12c4cb8a call 0x12c49430 */
  push32(0x12c4cb8fu); f_12c49430();
  /* 12c4cb8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cb92 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cb96 jne 0x12c4cba3 */
  if (!C.zf) goto L_12c4cba3;
  /* 12c4cb98 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c4cb9e mov dword ptr [0x12c6e698], eax */
  w32((uint32_t)(0x12c6e698), (EAX));
L_12c4cba3:;
  /* 12c4cba3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cba7 jne 0x12c4cbb5 */
  if (!C.zf) goto L_12c4cbb5;
  /* 12c4cba9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12c4cbaf mov dword ptr [0x12c6e69c], ecx */
  w32((uint32_t)(0x12c6e69c), (ECX));
L_12c4cbb5:;
  /* 12c4cbb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cbb8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4cbbb call dword ptr [edx + 0x12c6d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12c6d4e0))), 0x12c4cbc1u);
  /* 12c4cbc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4cbc3 je 0x12c4cbfc */
  if (C.zf) goto L_12c4cbfc;
  /* 12c4cbc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cbc8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4cbcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4cbce mov dword ptr [eax + 0x12c6d4dc], ecx */
  w32((uint32_t)(EAX + 0x12c6d4dc), (ECX));
  /* 12c4cbd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4cbd6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4cbd9 push edx */
  push32((uint32_t)(EDX));
  /* 12c4cbda call 0x12c435e0 */
  push32(0x12c4cbdfu); f_12c435e0();
  /* 12c4cbdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cbe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cbe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4cbe8 mov dword ptr [eax*4 + 0x12c6e680], ecx */
  w32((uint32_t)(EAX*4 + 0x12c6e680), (ECX));
  /* 12c4cbef mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4cbf2 mov dword ptr [0x12c6e698], edx */
  w32((uint32_t)(0x12c6e698), (EDX));
  /* 12c4cbf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4cbfa jmp 0x12c4cc1f */
  goto L_12c4cc1f;
L_12c4cbfc:;
  /* 12c4cbfc cmp dword ptr [ebp - 0xc], 0x12c6d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12c6d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cc03 je 0x12c4cc13 */
  if (C.zf) goto L_12c4cc13;
  /* 12c4cc05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4cc07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4cc0a push eax */
  push32((uint32_t)(EAX));
  /* 12c4cc0b call 0x12c435e0 */
  push32(0x12c4cc10u); f_12c435e0();
  /* 12c4cc10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4cc13:;
  /* 12c4cc13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cc16 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4cc19 mov eax, dword ptr [ecx + 0x12c6d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12c6d4dc)));
L_12c4cc1f:;
  /* 12c4cc1f mov esp, ebp */
  ESP = (EBP);
  /* 12c4cc21 pop ebp */
  EBP = (pop32());
  /* 12c4cc22 ret  */
  ESPCHK(0x12c4ca90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc30 @ 0x12c4cc30 (256 bytes, 72 insns) */
void f_12c4cc30(void) {
  FTRACE(0x12c4cc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4cc30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4cc31 mov ebp, esp */
  EBP = (ESP);
  /* 12c4cc33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4cc36 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c4cc3d cmp dword ptr [0x12c6d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cc44 jne 0x12c4cc64 */
  if (!C.zf) goto L_12c4cc64;
  /* 12c4cc46 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12c4cc4b push 0x12c69fb8 */
  push32((uint32_t)(0x12c69fb8u));
  /* 12c4cc50 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4cc52 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12c4cc57 call 0x12c42b50 */
  push32(0x12c4cc5cu); f_12c42b50();
  /* 12c4cc5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cc5f mov dword ptr [0x12c6d4dc], eax */
  w32((uint32_t)(0x12c6d4dc), (EAX));
L_12c4cc64:;
  /* 12c4cc64 mov eax, dword ptr [0x12c6d4dc] */
  EAX = (r32((uint32_t)(0x12c6d4dc)));
  /* 12c4cc69 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c4cc6c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c4cc73 jmp 0x12c4cc7e */
  goto L_12c4cc7e;
L_12c4cc75:;
  /* 12c4cc75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4cc78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cc7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c4cc7e:;
  /* 12c4cc7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4cc81 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4cc84 mov eax, dword ptr [edx + 0x12c6d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12c6d4dc)));
  /* 12c4cc8a push eax */
  push32((uint32_t)(EAX));
  /* 12c4cc8b push 0x12c69fc4 */
  push32((uint32_t)(0x12c69fc4u));
  /* 12c4cc90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4cc93 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4cc96 mov edx, dword ptr [ecx + 0x12c6d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12c6d4d8)));
  /* 12c4cc9c push edx */
  push32((uint32_t)(EDX));
  /* 12c4cc9d push 3 */
  push32((uint32_t)(0x3u));
  /* 12c4cc9f mov eax, dword ptr [0x12c6d4dc] */
  EAX = (r32((uint32_t)(0x12c6d4dc)));
  /* 12c4cca4 push eax */
  push32((uint32_t)(EAX));
  /* 12c4cca5 call 0x12c4ced0 */
  push32(0x12c4ccaau); f_12c4ced0();
  /* 12c4ccaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ccad cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ccb1 jge 0x12c4ccf9 */
  if ((C.sf==C.of)) goto L_12c4ccf9;
  /* 12c4ccb3 push 0x12c69fb0 */
  push32((uint32_t)(0x12c69fb0u));
  /* 12c4ccb8 mov ecx, dword ptr [0x12c6d4dc] */
  ECX = (r32((uint32_t)(0x12c6d4dc)));
  /* 12c4ccbe push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ccbf call 0x12c45b10 */
  push32(0x12c4ccc4u); f_12c45b10();
  /* 12c4ccc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ccc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4ccca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cccd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4ccd0 mov eax, dword ptr [edx + 0x12c6d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12c6d4dc)));
  /* 12c4ccd6 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ccd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4ccda imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4ccdd mov edx, dword ptr [ecx + 0x12c6d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12c6d4dc)));
  /* 12c4cce3 push edx */
  push32((uint32_t)(EDX));
  /* 12c4cce4 call 0x12c4e7e0 */
  push32(0x12c4cce9u); f_12c4e7e0();
  /* 12c4cce9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ccec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ccee je 0x12c4ccf7 */
  if (C.zf) goto L_12c4ccf7;
  /* 12c4ccf0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c4ccf7:;
  /* 12c4ccf7 jmp 0x12c4cd27 */
  goto L_12c4cd27;
L_12c4ccf9:;
  /* 12c4ccf9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ccfd jne 0x12c4cd06 */
  if (!C.zf) goto L_12c4cd06;
  /* 12c4ccff mov eax, dword ptr [0x12c6d4dc] */
  EAX = (r32((uint32_t)(0x12c6d4dc)));
  /* 12c4cd04 jmp 0x12c4cd2c */
  goto L_12c4cd2c;
L_12c4cd06:;
  /* 12c4cd06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4cd08 mov eax, dword ptr [0x12c6d4dc] */
  EAX = (r32((uint32_t)(0x12c6d4dc)));
  /* 12c4cd0d push eax */
  push32((uint32_t)(EAX));
  /* 12c4cd0e call 0x12c435e0 */
  push32(0x12c4cd13u); f_12c435e0();
  /* 12c4cd13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cd16 mov dword ptr [0x12c6d4dc], 0 */
  w32((uint32_t)(0x12c6d4dc), (0x0u));
  /* 12c4cd20 mov eax, dword ptr [0x12c6d4f4] */
  EAX = (r32((uint32_t)(0x12c6d4f4)));
  /* 12c4cd25 jmp 0x12c4cd2c */
  goto L_12c4cd2c;
L_12c4cd27:;
  /* 12c4cd27 jmp 0x12c4cc75 */
  goto L_12c4cc75;
L_12c4cd2c:;
  /* 12c4cd2c mov esp, ebp */
  ESP = (EBP);
  /* 12c4cd2e pop ebp */
  EBP = (pop32());
  /* 12c4cd2f ret  */
  ESPCHK(0x12c4cc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd30 @ 0x12c4cd30 (388 bytes, 115 insns) */
void f_12c4cd30(void) {
  FTRACE(0x12c4cd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4cd30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4cd31 mov ebp, esp */
  EBP = (ESP);
  /* 12c4cd33 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4cd39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cd3d jne 0x12c4cd46 */
  if (!C.zf) goto L_12c4cd46;
  /* 12c4cd3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4cd41 jmp 0x12c4ceb0 */
  goto L_12c4ceb0;
L_12c4cd46:;
  /* 12c4cd46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cd49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4cd4c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cd4f jne 0x12c4cda0 */
  if (!C.zf) goto L_12c4cda0;
  /* 12c4cd51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cd54 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c4cd58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4cd5a jne 0x12c4cda0 */
  if (!C.zf) goto L_12c4cda0;
  /* 12c4cd5c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cd5f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12c4cd62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cd65 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12c4cd69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cd6d je 0x12c4cd89 */
  if (C.zf) goto L_12c4cd89;
  /* 12c4cd6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4cd72 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12c4cd77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4cd7a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12c4cd80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4cd83 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12c4cd89:;
  /* 12c4cd89 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cd8d je 0x12c4cd98 */
  if (C.zf) goto L_12c4cd98;
  /* 12c4cd8f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4cd92 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12c4cd98:;
  /* 12c4cd98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cd9b jmp 0x12c4ceb0 */
  goto L_12c4ceb0;
L_12c4cda0:;
  /* 12c4cda0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cda3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4cda4 push 0x12c6d450 */
  push32((uint32_t)(0x12c6d450u));
  /* 12c4cda9 call 0x12c4e7e0 */
  push32(0x12c4cdaeu); f_12c4e7e0();
  /* 12c4cdae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cdb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4cdb3 je 0x12c4ce68 */
  if (C.zf) goto L_12c4ce68;
  /* 12c4cdb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cdbc push edx */
  push32((uint32_t)(EDX));
  /* 12c4cdbd push 0x12c6d3cc */
  push32((uint32_t)(0x12c6d3ccu));
  /* 12c4cdc2 call 0x12c4e7e0 */
  push32(0x12c4cdc7u); f_12c4e7e0();
  /* 12c4cdc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cdca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4cdcc je 0x12c4ce68 */
  if (C.zf) goto L_12c4ce68;
  /* 12c4cdd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cdd5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4cdd6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12c4cddc push ecx */
  push32((uint32_t)(ECX));
  /* 12c4cddd call 0x12c4cf20 */
  push32(0x12c4cde2u); f_12c4cf20();
  /* 12c4cde2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cde5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4cde7 je 0x12c4cdf0 */
  if (C.zf) goto L_12c4cdf0;
  /* 12c4cde9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4cdeb jmp 0x12c4ceb0 */
  goto L_12c4ceb0;
L_12c4cdf0:;
  /* 12c4cdf0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12c4cdf6 push edx */
  push32((uint32_t)(EDX));
  /* 12c4cdf7 push 0x12c6e6a8 */
  push32((uint32_t)(0x12c6e6a8u));
  /* 12c4cdfc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12c4ce02 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ce03 call 0x12c4e930 */
  push32(0x12c4ce08u); f_12c4e930();
  /* 12c4ce08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ce0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ce0d jne 0x12c4ce16 */
  if (!C.zf) goto L_12c4ce16;
  /* 12c4ce0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ce11 jmp 0x12c4ceb0 */
  goto L_12c4ceb0;
L_12c4ce16:;
  /* 12c4ce16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4ce18 mov cx, word ptr [0x12c6e6ac] */
  CX = (r16((uint32_t)(0x12c6e6ac)));
  /* 12c4ce1f mov dword ptr [0x12c6e6b0], ecx */
  w32((uint32_t)(0x12c6e6b0), (ECX));
  /* 12c4ce25 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12c4ce2b push edx */
  push32((uint32_t)(EDX));
  /* 12c4ce2c push 0x12c6d450 */
  push32((uint32_t)(0x12c6d450u));
  /* 12c4ce31 call 0x12c4d080 */
  push32(0x12c4ce36u); f_12c4d080();
  /* 12c4ce36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ce39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ce3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4ce3f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4ce41 je 0x12c4ce56 */
  if (C.zf) goto L_12c4ce56;
  /* 12c4ce43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ce46 push edx */
  push32((uint32_t)(EDX));
  /* 12c4ce47 push 0x12c6d3cc */
  push32((uint32_t)(0x12c6d3ccu));
  /* 12c4ce4c call 0x12c45b00 */
  push32(0x12c4ce51u); f_12c45b00();
  /* 12c4ce51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ce54 jmp 0x12c4ce68 */
  goto L_12c4ce68;
L_12c4ce56:;
  /* 12c4ce56 push 0x12c6d450 */
  push32((uint32_t)(0x12c6d450u));
  /* 12c4ce5b push 0x12c6d3cc */
  push32((uint32_t)(0x12c6d3ccu));
  /* 12c4ce60 call 0x12c45b00 */
  push32(0x12c4ce65u); f_12c45b00();
  /* 12c4ce65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4ce68:;
  /* 12c4ce68 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ce6c je 0x12c4ce81 */
  if (C.zf) goto L_12c4ce81;
  /* 12c4ce6e push 6 */
  push32((uint32_t)(0x6u));
  /* 12c4ce70 push 0x12c6e6a8 */
  push32((uint32_t)(0x12c6e6a8u));
  /* 12c4ce75 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ce78 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ce79 call 0x12c49430 */
  push32(0x12c4ce7eu); f_12c49430();
  /* 12c4ce7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4ce81:;
  /* 12c4ce81 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ce85 je 0x12c4ce9a */
  if (C.zf) goto L_12c4ce9a;
  /* 12c4ce87 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c4ce89 push 0x12c6e6b0 */
  push32((uint32_t)(0x12c6e6b0u));
  /* 12c4ce8e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4ce91 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ce92 call 0x12c49430 */
  push32(0x12c4ce97u); f_12c49430();
  /* 12c4ce97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4ce9a:;
  /* 12c4ce9a push 0x12c6d450 */
  push32((uint32_t)(0x12c6d450u));
  /* 12c4ce9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cea2 push edx */
  push32((uint32_t)(EDX));
  /* 12c4cea3 call 0x12c45b00 */
  push32(0x12c4cea8u); f_12c45b00();
  /* 12c4cea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ceab mov eax, 0x12c6d450 */
  EAX = (0x12c6d450u);
L_12c4ceb0:;
  /* 12c4ceb0 mov esp, ebp */
  ESP = (EBP);
  /* 12c4ceb2 pop ebp */
  EBP = (pop32());
  /* 12c4ceb3 ret  */
  ESPCHK(0x12c4cd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x12c4cec0 (7 bytes, 5 insns) */
void f_12c4cec0(void) {
  FTRACE(0x12c4cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4cec1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4cec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4cec5 pop ebp */
  EBP = (pop32());
  /* 12c4cec6 ret  */
  ESPCHK(0x12c4cec0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12c4ced0 (79 bytes, 28 insns) */
void f_12c4ced0(void) {
  FTRACE(0x12c4ced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4ced0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4ced1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4ced3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ced6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12c4ced9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4cedc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4cee3 jmp 0x12c4ceee */
  goto L_12c4ceee;
L_12c4cee5:;
  /* 12c4cee5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4cee8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ceeb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c4ceee:;
  /* 12c4ceee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4cef1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cef4 jge 0x12c4cf14 */
  if ((C.sf==C.of)) goto L_12c4cf14;
  /* 12c4cef6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4cef9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cefc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4ceff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4cf02 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c4cf05 push edx */
  push32((uint32_t)(EDX));
  /* 12c4cf06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cf09 push eax */
  push32((uint32_t)(EAX));
  /* 12c4cf0a call 0x12c45b10 */
  push32(0x12c4cf0fu); f_12c45b10();
  /* 12c4cf0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cf12 jmp 0x12c4cee5 */
  goto L_12c4cee5;
L_12c4cf14:;
  /* 12c4cf14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4cf1b mov esp, ebp */
  ESP = (EBP);
  /* 12c4cf1d pop ebp */
  EBP = (pop32());
  /* 12c4cf1e ret  */
  ESPCHK(0x12c4ced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x12c4cf20 (349 bytes, 122 insns) */
void f_12c4cf20(void) {
  FTRACE(0x12c4cf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4cf20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4cf21 mov ebp, esp */
  EBP = (ESP);
  /* 12c4cf23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4cf26 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12c4cf2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4cf2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cf30 push eax */
  push32((uint32_t)(EAX));
  /* 12c4cf31 call 0x12c468c0 */
  push32(0x12c4cf36u); f_12c468c0();
  /* 12c4cf36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cf39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cf3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4cf3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4cf41 jne 0x12c4cf4a */
  if (!C.zf) goto L_12c4cf4a;
  /* 12c4cf43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4cf45 jmp 0x12c4d079 */
  goto L_12c4d079;
L_12c4cf4a:;
  /* 12c4cf4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cf4d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4cf50 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cf53 jne 0x12c4cf80 */
  if (!C.zf) goto L_12c4cf80;
  /* 12c4cf55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cf58 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c4cf5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4cf5e je 0x12c4cf80 */
  if (C.zf) goto L_12c4cf80;
  /* 12c4cf60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cf63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cf66 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4cf67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cf6a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cf70 push edx */
  push32((uint32_t)(EDX));
  /* 12c4cf71 call 0x12c45b00 */
  push32(0x12c4cf76u); f_12c45b00();
  /* 12c4cf76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cf79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4cf7b jmp 0x12c4d079 */
  goto L_12c4d079;
L_12c4cf80:;
  /* 12c4cf80 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c4cf87 jmp 0x12c4cf92 */
  goto L_12c4cf92;
L_12c4cf89:;
  /* 12c4cf89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4cf8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cf8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4cf92:;
  /* 12c4cf92 push 0x12c69fc8 */
  push32((uint32_t)(0x12c69fc8u));
  /* 12c4cf97 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cf9a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4cf9b call 0x12c4e870 */
  push32(0x12c4cfa0u); f_12c4e870();
  /* 12c4cfa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cfa3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c4cfa6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cfaa jne 0x12c4cfb4 */
  if (!C.zf) goto L_12c4cfb4;
  /* 12c4cfac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4cfaf jmp 0x12c4d079 */
  goto L_12c4d079;
L_12c4cfb4:;
  /* 12c4cfb4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cfb7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cfba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4cfbc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12c4cfbf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cfc3 jne 0x12c4cfea */
  if (!C.zf) goto L_12c4cfea;
  /* 12c4cfc5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cfc9 jge 0x12c4cfea */
  if ((C.sf==C.of)) goto L_12c4cfea;
  /* 12c4cfcb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4cfcf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cfd2 je 0x12c4cfea */
  if (C.zf) goto L_12c4cfea;
  /* 12c4cfd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4cfd7 push edx */
  push32((uint32_t)(EDX));
  /* 12c4cfd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4cfdb push eax */
  push32((uint32_t)(EAX));
  /* 12c4cfdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4cfdf push ecx */
  push32((uint32_t)(ECX));
  /* 12c4cfe0 call 0x12c46370 */
  push32(0x12c4cfe5u); f_12c46370();
  /* 12c4cfe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4cfe8 jmp 0x12c4d050 */
  goto L_12c4d050;
L_12c4cfea:;
  /* 12c4cfea cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cfee jne 0x12c4d018 */
  if (!C.zf) goto L_12c4d018;
  /* 12c4cff0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cff4 jge 0x12c4d018 */
  if ((C.sf==C.of)) goto L_12c4d018;
  /* 12c4cff6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4cffa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4cffd je 0x12c4d018 */
  if (C.zf) goto L_12c4d018;
  /* 12c4cfff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d002 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d003 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4d006 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d007 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d00a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d00d push edx */
  push32((uint32_t)(EDX));
  /* 12c4d00e call 0x12c46370 */
  push32(0x12c4d013u); f_12c46370();
  /* 12c4d013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d016 jmp 0x12c4d050 */
  goto L_12c4d050;
L_12c4d018:;
  /* 12c4d018 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d01c jne 0x12c4d04b */
  if (!C.zf) goto L_12c4d04b;
  /* 12c4d01e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4d022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4d024 je 0x12c4d02f */
  if (C.zf) goto L_12c4d02f;
  /* 12c4d026 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4d02a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d02d jne 0x12c4d04b */
  if (!C.zf) goto L_12c4d04b;
L_12c4d02f:;
  /* 12c4d02f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d032 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4d036 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d03a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d040 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d041 call 0x12c46370 */
  push32(0x12c4d046u); f_12c46370();
  /* 12c4d046 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d049 jmp 0x12c4d050 */
  goto L_12c4d050;
L_12c4d04b:;
  /* 12c4d04b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4d04e jmp 0x12c4d079 */
  goto L_12c4d079;
L_12c4d050:;
  /* 12c4d050 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4d054 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d057 jne 0x12c4d05b */
  if (!C.zf) goto L_12c4d05b;
  /* 12c4d059 jmp 0x12c4d077 */
  goto L_12c4d077;
L_12c4d05b:;
  /* 12c4d05b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4d05f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4d061 jne 0x12c4d065 */
  if (!C.zf) goto L_12c4d065;
  /* 12c4d063 jmp 0x12c4d077 */
  goto L_12c4d077;
L_12c4d065:;
  /* 12c4d065 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d068 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4d06b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12c4d06f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c4d072 jmp 0x12c4cf89 */
  goto L_12c4cf89;
L_12c4d077:;
  /* 12c4d077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4d079:;
  /* 12c4d079 mov esp, ebp */
  ESP = (EBP);
  /* 12c4d07b pop ebp */
  EBP = (pop32());
  /* 12c4d07c ret  */
  ESPCHK(0x12c4cf20u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12c4d080 (101 bytes, 36 insns) */
void f_12c4d080(void) {
  FTRACE(0x12c4d080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4d080 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4d081 mov ebp, esp */
  EBP = (ESP);
  /* 12c4d083 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4d086 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d08a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d08b call 0x12c45b00 */
  push32(0x12c4d090u); f_12c45b00();
  /* 12c4d090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d093 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4d096 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12c4d09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4d09c je 0x12c4d0b8 */
  if (C.zf) goto L_12c4d0b8;
  /* 12c4d09e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4d0a1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d0a5 push 0x12c69fd0 */
  push32((uint32_t)(0x12c69fd0u));
  /* 12c4d0aa push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d0ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d0af push edx */
  push32((uint32_t)(EDX));
  /* 12c4d0b0 call 0x12c4ced0 */
  push32(0x12c4d0b5u); f_12c4ced0();
  /* 12c4d0b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4d0b8:;
  /* 12c4d0b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4d0bb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12c4d0c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4d0c4 je 0x12c4d0e3 */
  if (C.zf) goto L_12c4d0e3;
  /* 12c4d0c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4d0c9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d0cf push edx */
  push32((uint32_t)(EDX));
  /* 12c4d0d0 push 0x12c69fcc */
  push32((uint32_t)(0x12c69fccu));
  /* 12c4d0d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d0d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d0da push eax */
  push32((uint32_t)(EAX));
  /* 12c4d0db call 0x12c4ced0 */
  push32(0x12c4d0e0u); f_12c4ced0();
  /* 12c4d0e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4d0e3:;
  /* 12c4d0e3 pop ebp */
  EBP = (pop32());
  /* 12c4d0e4 ret  */
  ESPCHK(0x12c4d080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x12c4d0f0 (130 bytes, 50 insns) */
void f_12c4d0f0(void) {
  FTRACE(0x12c4d0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4d0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4d0f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4d0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d0f4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4d0f5 push esi */
  push32((uint32_t)(ESI));
  /* 12c4d0f6 push edi */
  push32((uint32_t)(EDI));
  /* 12c4d0f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c4d0fe:;
  /* 12c4d0fe cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d102 jne 0x12c4d122 */
  if (!C.zf) goto L_12c4d122;
  /* 12c4d104 push 0x12c69fe0 */
  push32((uint32_t)(0x12c69fe0u));
  /* 12c4d109 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4d10b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12c4d10d push 0x12c69fd4 */
  push32((uint32_t)(0x12c69fd4u));
  /* 12c4d112 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d114 call 0x12c41c10 */
  push32(0x12c4d119u); f_12c41c10();
  /* 12c4d119 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d11c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d11f jne 0x12c4d122 */
  if (!C.zf) goto L_12c4d122;
  /* 12c4d121 int3  */
  x86_unimpl("int3 @ 0x12c4d121");
L_12c4d122:;
  /* 12c4d122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4d124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4d126 jne 0x12c4d0fe */
  if (!C.zf) goto L_12c4d0fe;
  /* 12c4d128 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d12b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4d12e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4d131 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4d133 je 0x12c4d141 */
  if (C.zf) goto L_12c4d141;
  /* 12c4d135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d138 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12c4d13f jmp 0x12c4d168 */
  goto L_12c4d168;
L_12c4d141:;
  /* 12c4d141 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d144 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d145 call 0x12c4b960 */
  push32(0x12c4d14au); f_12c4b960();
  /* 12c4d14a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d14d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d150 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d151 call 0x12c4d180 */
  push32(0x12c4d156u); f_12c4d180();
  /* 12c4d156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d159 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4d15c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d15f push eax */
  push32((uint32_t)(EAX));
  /* 12c4d160 call 0x12c4b9d0 */
  push32(0x12c4d165u); f_12c4b9d0();
  /* 12c4d165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4d168:;
  /* 12c4d168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d16b pop edi */
  EDI = (pop32());
  /* 12c4d16c pop esi */
  ESI = (pop32());
  /* 12c4d16d pop ebx */
  EBX = (pop32());
  /* 12c4d16e mov esp, ebp */
  ESP = (EBP);
  /* 12c4d170 pop ebp */
  EBP = (pop32());
  /* 12c4d171 ret  */
  ESPCHK(0x12c4d0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x12c4d180 (190 bytes, 67 insns) */
void f_12c4d180(void) {
  FTRACE(0x12c4d180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4d180 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4d181 mov ebp, esp */
  EBP = (ESP);
  /* 12c4d183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4d186 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4d187 push esi */
  push32((uint32_t)(ESI));
  /* 12c4d188 push edi */
  push32((uint32_t)(EDI));
  /* 12c4d189 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c4d190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d193 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c4d196:;
  /* 12c4d196 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d19a jne 0x12c4d1ba */
  if (!C.zf) goto L_12c4d1ba;
  /* 12c4d19c push 0x12c69e84 */
  push32((uint32_t)(0x12c69e84u));
  /* 12c4d1a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4d1a3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12c4d1a5 push 0x12c69fd4 */
  push32((uint32_t)(0x12c69fd4u));
  /* 12c4d1aa push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d1ac call 0x12c41c10 */
  push32(0x12c4d1b1u); f_12c41c10();
  /* 12c4d1b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d1b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d1b7 jne 0x12c4d1ba */
  if (!C.zf) goto L_12c4d1ba;
  /* 12c4d1b9 int3  */
  x86_unimpl("int3 @ 0x12c4d1b9");
L_12c4d1ba:;
  /* 12c4d1ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d1bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4d1be jne 0x12c4d196 */
  if (!C.zf) goto L_12c4d196;
  /* 12c4d1c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d1c3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c4d1c6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4d1cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4d1cd je 0x12c4d22a */
  if (C.zf) goto L_12c4d22a;
  /* 12c4d1cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d1d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d1d3 call 0x12c4c480 */
  push32(0x12c4d1d8u); f_12c4c480();
  /* 12c4d1d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d1db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4d1de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d1e1 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d1e2 call 0x12c4f800 */
  push32(0x12c4d1e7u); f_12c4f800();
  /* 12c4d1e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d1ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d1ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c4d1f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d1f1 call 0x12c4f6d0 */
  push32(0x12c4d1f6u); f_12c4f6d0();
  /* 12c4d1f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d1f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4d1fb jge 0x12c4d206 */
  if ((C.sf==C.of)) goto L_12c4d206;
  /* 12c4d1fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12c4d204 jmp 0x12c4d22a */
  goto L_12c4d22a;
L_12c4d206:;
  /* 12c4d206 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d209 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d20d je 0x12c4d22a */
  if (C.zf) goto L_12c4d22a;
  /* 12c4d20f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d214 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c4d217 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d218 call 0x12c435e0 */
  push32(0x12c4d21du); f_12c435e0();
  /* 12c4d21d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d220 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d223 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12c4d22a:;
  /* 12c4d22a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d22d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12c4d234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d237 pop edi */
  EDI = (pop32());
  /* 12c4d238 pop esi */
  ESI = (pop32());
  /* 12c4d239 pop ebx */
  EBX = (pop32());
  /* 12c4d23a mov esp, ebp */
  ESP = (EBP);
  /* 12c4d23c pop ebp */
  EBP = (pop32());
  /* 12c4d23d ret  */
  ESPCHK(0x12c4d180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x12c4d240 (210 bytes, 63 insns) */
void f_12c4d240(void) {
  FTRACE(0x12c4d240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4d240 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4d241 mov ebp, esp */
  EBP = (ESP);
  /* 12c4d243 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d247 cmp eax, dword ptr [0x12c6ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d24d jae 0x12c4d271 */
  if (!C.cf) goto L_12c4d271;
  /* 12c4d24f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d252 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4d255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d258 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4d25b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4d25e mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4d265 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c4d26a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d26d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4d26f jne 0x12c4d284 */
  if (!C.zf) goto L_12c4d284;
L_12c4d271:;
  /* 12c4d271 call 0x12c4aa20 */
  push32(0x12c4d276u); f_12c4aa20();
  /* 12c4d276 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4d27c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4d27f jmp 0x12c4d30e */
  goto L_12c4d30e;
L_12c4d284:;
  /* 12c4d284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d287 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d288 call 0x12c4c240 */
  push32(0x12c4d28du); f_12c4c240();
  /* 12c4d28d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d293 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c4d296 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d299 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d29c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4d29f mov edx, dword ptr [eax*4 + 0x12c6fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c6fe60)));
  /* 12c4d2a6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12c4d2ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4d2ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4d2b0 je 0x12c4d2ed */
  if (C.zf) goto L_12c4d2ed;
  /* 12c4d2b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d2b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d2b6 call 0x12c4c0c0 */
  push32(0x12c4d2bbu); f_12c4c0c0();
  /* 12c4d2bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d2be push eax */
  push32((uint32_t)(EAX));
  /* 12c4d2bf call dword ptr [0x12c7033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7033c))), 0x12c4d2c5u);
  /* 12c4d2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4d2c7 jne 0x12c4d2d4 */
  if (!C.zf) goto L_12c4d2d4;
  /* 12c4d2c9 call dword ptr [0x12c702a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702a4))), 0x12c4d2cfu);
  /* 12c4d2cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4d2d2 jmp 0x12c4d2db */
  goto L_12c4d2db;
L_12c4d2d4:;
  /* 12c4d2d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c4d2db:;
  /* 12c4d2db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d2df jne 0x12c4d2e3 */
  if (!C.zf) goto L_12c4d2e3;
  /* 12c4d2e1 jmp 0x12c4d2ff */
  goto L_12c4d2ff;
L_12c4d2e3:;
  /* 12c4d2e3 call 0x12c4aa30 */
  push32(0x12c4d2e8u); f_12c4aa30();
  /* 12c4d2e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d2eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c4d2ed:;
  /* 12c4d2ed call 0x12c4aa20 */
  push32(0x12c4d2f2u); f_12c4aa20();
  /* 12c4d2f2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4d2f8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12c4d2ff:;
  /* 12c4d2ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d302 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d303 call 0x12c4c2d0 */
  push32(0x12c4d308u); f_12c4c2d0();
  /* 12c4d308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d30b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c4d30e:;
  /* 12c4d30e mov esp, ebp */
  ESP = (EBP);
  /* 12c4d310 pop ebp */
  EBP = (pop32());
  /* 12c4d311 ret  */
  ESPCHK(0x12c4d240u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12c4d320 (219 bytes, 64 insns) */
void f_12c4d320(void) {
  FTRACE(0x12c4d320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4d320 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4d321 mov ebp, esp */
  EBP = (ESP);
  /* 12c4d323 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d324 cmp dword ptr [0x12c6e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d32b je 0x12c4d3c1 */
  if (C.zf) goto L_12c4d3c1;
  /* 12c4d331 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12c4d333 push 0x12c69ff0 */
  push32((uint32_t)(0x12c69ff0u));
  /* 12c4d338 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d33a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12c4d33f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d341 call 0x12c42f60 */
  push32(0x12c4d346u); f_12c42f60();
  /* 12c4d346 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d349 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4d34c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d350 jne 0x12c4d35c */
  if (!C.zf) goto L_12c4d35c;
  /* 12c4d352 mov eax, 1 */
  EAX = (0x1u);
  /* 12c4d357 jmp 0x12c4d3f7 */
  goto L_12c4d3f7;
L_12c4d35c:;
  /* 12c4d35c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d35f push eax */
  push32((uint32_t)(EAX));
  /* 12c4d360 call 0x12c4d400 */
  push32(0x12c4d365u); f_12c4d400();
  /* 12c4d365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4d36a je 0x12c4d38d */
  if (C.zf) goto L_12c4d38d;
  /* 12c4d36c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d36f push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d370 call 0x12c4d990 */
  push32(0x12c4d375u); f_12c4d990();
  /* 12c4d375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d378 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d37a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d37d push edx */
  push32((uint32_t)(EDX));
  /* 12c4d37e call 0x12c435e0 */
  push32(0x12c4d383u); f_12c435e0();
  /* 12c4d383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d386 mov eax, 1 */
  EAX = (0x1u);
  /* 12c4d38b jmp 0x12c4d3f7 */
  goto L_12c4d3f7;
L_12c4d38d:;
  /* 12c4d38d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d390 mov dword ptr [0x12c6dc98], eax */
  w32((uint32_t)(0x12c6dc98), (EAX));
  /* 12c4d395 mov ecx, dword ptr [0x12c6e6b4] */
  ECX = (r32((uint32_t)(0x12c6e6b4)));
  /* 12c4d39b push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d39c call 0x12c4d990 */
  push32(0x12c4d3a1u); f_12c4d990();
  /* 12c4d3a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d3a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d3a6 mov edx, dword ptr [0x12c6e6b4] */
  EDX = (r32((uint32_t)(0x12c6e6b4)));
  /* 12c4d3ac push edx */
  push32((uint32_t)(EDX));
  /* 12c4d3ad call 0x12c435e0 */
  push32(0x12c4d3b2u); f_12c435e0();
  /* 12c4d3b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d3b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d3b8 mov dword ptr [0x12c6e6b4], eax */
  w32((uint32_t)(0x12c6e6b4), (EAX));
  /* 12c4d3bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4d3bf jmp 0x12c4d3f7 */
  goto L_12c4d3f7;
L_12c4d3c1:;
  /* 12c4d3c1 mov dword ptr [0x12c6dc98], 0x12c6dca0 */
  w32((uint32_t)(0x12c6dc98), (0x12c6dca0u));
  /* 12c4d3cb mov ecx, dword ptr [0x12c6e6b4] */
  ECX = (r32((uint32_t)(0x12c6e6b4)));
  /* 12c4d3d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d3d2 call 0x12c4d990 */
  push32(0x12c4d3d7u); f_12c4d990();
  /* 12c4d3d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d3da push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d3dc mov edx, dword ptr [0x12c6e6b4] */
  EDX = (r32((uint32_t)(0x12c6e6b4)));
  /* 12c4d3e2 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d3e3 call 0x12c435e0 */
  push32(0x12c4d3e8u); f_12c435e0();
  /* 12c4d3e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d3eb mov dword ptr [0x12c6e6b4], 0 */
  w32((uint32_t)(0x12c6e6b4), (0x0u));
  /* 12c4d3f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4d3f7:;
  /* 12c4d3f7 mov esp, ebp */
  ESP = (EBP);
  /* 12c4d3f9 pop ebp */
  EBP = (pop32());
  /* 12c4d3fa ret  */
  ESPCHK(0x12c4d320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x12c4d400 (1423 bytes, 533 insns) */
void f_12c4d400(void) {
  FTRACE(0x12c4d400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4d400 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4d401 mov ebp, esp */
  EBP = (ESP);
  /* 12c4d403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4d406 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c4d40d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4d40f mov ax, word ptr [0x12c6e6ee] */
  AX = (r16((uint32_t)(0x12c6e6ee)));
  /* 12c4d415 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4d418 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d41a mov cx, word ptr [0x12c6e6f0] */
  CX = (r16((uint32_t)(0x12c6e6f0)));
  /* 12c4d421 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4d424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d428 jne 0x12c4d432 */
  if (!C.zf) goto L_12c4d432;
  /* 12c4d42a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4d42d jmp 0x12c4d98b */
  goto L_12c4d98b;
L_12c4d432:;
  /* 12c4d432 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d435 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d438 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d439 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12c4d43b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d43e push eax */
  push32((uint32_t)(EAX));
  /* 12c4d43f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d441 call 0x12c50d10 */
  push32(0x12c4d446u); f_12c50d10();
  /* 12c4d446 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d44c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d44e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d454 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d457 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d458 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12c4d45a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d45d push eax */
  push32((uint32_t)(EAX));
  /* 12c4d45e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d460 call 0x12c50d10 */
  push32(0x12c4d465u); f_12c50d10();
  /* 12c4d465 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d468 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d46b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d46d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d470 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d473 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d476 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d477 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12c4d479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d47c push eax */
  push32((uint32_t)(EAX));
  /* 12c4d47d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d47f call 0x12c50d10 */
  push32(0x12c4d484u); f_12c50d10();
  /* 12c4d484 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d487 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d48a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d48c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d48f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d492 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d495 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d496 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12c4d498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d49b push eax */
  push32((uint32_t)(EAX));
  /* 12c4d49c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d49e call 0x12c50d10 */
  push32(0x12c4d4a3u); f_12c50d10();
  /* 12c4d4a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d4a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d4a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d4ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d4ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d4b1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d4b4 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d4b5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12c4d4b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d4ba push eax */
  push32((uint32_t)(EAX));
  /* 12c4d4bb push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d4bd call 0x12c50d10 */
  push32(0x12c4d4c2u); f_12c50d10();
  /* 12c4d4c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d4c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d4c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d4ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d4cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d4d0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d4d3 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d4d4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12c4d4d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d4d9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d4da push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d4dc call 0x12c50d10 */
  push32(0x12c4d4e1u); f_12c50d10();
  /* 12c4d4e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d4e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d4e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d4e9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d4ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d4ef push edx */
  push32((uint32_t)(EDX));
  /* 12c4d4f0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12c4d4f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d4f5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d4f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d4f8 call 0x12c50d10 */
  push32(0x12c4d4fdu); f_12c50d10();
  /* 12c4d4fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d500 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d503 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d505 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d50b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d50e push edx */
  push32((uint32_t)(EDX));
  /* 12c4d50f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12c4d511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d514 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d515 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d517 call 0x12c50d10 */
  push32(0x12c4d51cu); f_12c50d10();
  /* 12c4d51c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d51f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d522 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d524 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d527 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d52a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d52d push edx */
  push32((uint32_t)(EDX));
  /* 12c4d52e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12c4d530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d533 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d534 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d536 call 0x12c50d10 */
  push32(0x12c4d53bu); f_12c50d10();
  /* 12c4d53b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d53e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d541 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d543 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d546 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d549 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d54c push edx */
  push32((uint32_t)(EDX));
  /* 12c4d54d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12c4d54f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d552 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d553 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d555 call 0x12c50d10 */
  push32(0x12c4d55au); f_12c50d10();
  /* 12c4d55a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d55d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d560 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d562 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d568 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d56b push edx */
  push32((uint32_t)(EDX));
  /* 12c4d56c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12c4d56e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d571 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d572 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d574 call 0x12c50d10 */
  push32(0x12c4d579u); f_12c50d10();
  /* 12c4d579 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d57c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d57f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d581 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d584 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d587 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d58a push edx */
  push32((uint32_t)(EDX));
  /* 12c4d58b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12c4d58d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d590 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d591 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d593 call 0x12c50d10 */
  push32(0x12c4d598u); f_12c50d10();
  /* 12c4d598 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d59b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d59e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d5a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d5a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d5a6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d5a9 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d5aa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12c4d5ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d5af push eax */
  push32((uint32_t)(EAX));
  /* 12c4d5b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d5b2 call 0x12c50d10 */
  push32(0x12c4d5b7u); f_12c50d10();
  /* 12c4d5b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d5ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d5bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d5bf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d5c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d5c5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d5c8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d5c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c4d5cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d5ce push eax */
  push32((uint32_t)(EAX));
  /* 12c4d5cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d5d1 call 0x12c50d10 */
  push32(0x12c4d5d6u); f_12c50d10();
  /* 12c4d5d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d5d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d5dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d5de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d5e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d5e4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d5e7 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d5e8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12c4d5ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d5ed push eax */
  push32((uint32_t)(EAX));
  /* 12c4d5ee push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d5f0 call 0x12c50d10 */
  push32(0x12c4d5f5u); f_12c50d10();
  /* 12c4d5f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d5f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d5fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d5fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d600 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d603 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d606 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d607 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12c4d609 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d60c push eax */
  push32((uint32_t)(EAX));
  /* 12c4d60d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d60f call 0x12c50d10 */
  push32(0x12c4d614u); f_12c50d10();
  /* 12c4d614 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d617 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d61a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d61c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d61f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d622 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d625 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d626 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12c4d628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d62b push eax */
  push32((uint32_t)(EAX));
  /* 12c4d62c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d62e call 0x12c50d10 */
  push32(0x12c4d633u); f_12c50d10();
  /* 12c4d633 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d639 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d63b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d63e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d641 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d644 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d645 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12c4d647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d64a push eax */
  push32((uint32_t)(EAX));
  /* 12c4d64b push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d64d call 0x12c50d10 */
  push32(0x12c4d652u); f_12c50d10();
  /* 12c4d652 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d655 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d658 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d65a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d65d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d660 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d663 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d664 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12c4d666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d669 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d66a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d66c call 0x12c50d10 */
  push32(0x12c4d671u); f_12c50d10();
  /* 12c4d671 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d674 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d677 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d679 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d67c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d67f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d682 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d683 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12c4d685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d688 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d689 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d68b call 0x12c50d10 */
  push32(0x12c4d690u); f_12c50d10();
  /* 12c4d690 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d693 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d696 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d698 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d69e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d6a1 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d6a2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12c4d6a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d6a7 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d6a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d6aa call 0x12c50d10 */
  push32(0x12c4d6afu); f_12c50d10();
  /* 12c4d6af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d6b2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d6b5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d6b7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d6ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d6bd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d6c0 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d6c1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12c4d6c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d6c6 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d6c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d6c9 call 0x12c50d10 */
  push32(0x12c4d6ceu); f_12c50d10();
  /* 12c4d6ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d6d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d6d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d6d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d6d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d6dc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d6df push edx */
  push32((uint32_t)(EDX));
  /* 12c4d6e0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12c4d6e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d6e5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d6e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d6e8 call 0x12c50d10 */
  push32(0x12c4d6edu); f_12c50d10();
  /* 12c4d6ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d6f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d6f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d6f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d6f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d6fb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d6fe push edx */
  push32((uint32_t)(EDX));
  /* 12c4d6ff push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12c4d701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d704 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d705 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d707 call 0x12c50d10 */
  push32(0x12c4d70cu); f_12c50d10();
  /* 12c4d70c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d70f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d712 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d714 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d717 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d71a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d71d push edx */
  push32((uint32_t)(EDX));
  /* 12c4d71e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12c4d720 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d723 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d724 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d726 call 0x12c50d10 */
  push32(0x12c4d72bu); f_12c50d10();
  /* 12c4d72b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d72e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d731 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d733 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d736 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d739 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d73c push edx */
  push32((uint32_t)(EDX));
  /* 12c4d73d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12c4d73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d742 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d743 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d745 call 0x12c50d10 */
  push32(0x12c4d74au); f_12c50d10();
  /* 12c4d74a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d74d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d750 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d752 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d755 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d758 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d75b push edx */
  push32((uint32_t)(EDX));
  /* 12c4d75c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12c4d75e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d761 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d762 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d764 call 0x12c50d10 */
  push32(0x12c4d769u); f_12c50d10();
  /* 12c4d769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d76c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d76f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d771 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d777 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d77a push edx */
  push32((uint32_t)(EDX));
  /* 12c4d77b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12c4d77d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d780 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d781 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d783 call 0x12c50d10 */
  push32(0x12c4d788u); f_12c50d10();
  /* 12c4d788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d78b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d78e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d790 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d796 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d799 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d79a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12c4d79c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d79f push eax */
  push32((uint32_t)(EAX));
  /* 12c4d7a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d7a2 call 0x12c50d10 */
  push32(0x12c4d7a7u); f_12c50d10();
  /* 12c4d7a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d7aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d7ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d7af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d7b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d7b5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d7b8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d7b9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12c4d7bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d7be push eax */
  push32((uint32_t)(EAX));
  /* 12c4d7bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d7c1 call 0x12c50d10 */
  push32(0x12c4d7c6u); f_12c50d10();
  /* 12c4d7c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d7c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d7cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d7ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d7d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d7d4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d7d7 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d7d8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12c4d7da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d7dd push eax */
  push32((uint32_t)(EAX));
  /* 12c4d7de push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d7e0 call 0x12c50d10 */
  push32(0x12c4d7e5u); f_12c50d10();
  /* 12c4d7e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d7e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d7eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d7ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d7f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d7f3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d7f6 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d7f7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12c4d7f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d7fc push eax */
  push32((uint32_t)(EAX));
  /* 12c4d7fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d7ff call 0x12c50d10 */
  push32(0x12c4d804u); f_12c50d10();
  /* 12c4d804 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d807 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d80a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d80c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d80f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d812 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d818 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d819 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12c4d81b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d81e push eax */
  push32((uint32_t)(EAX));
  /* 12c4d81f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d821 call 0x12c50d10 */
  push32(0x12c4d826u); f_12c50d10();
  /* 12c4d826 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d829 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d82c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d82e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d834 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d83a push edx */
  push32((uint32_t)(EDX));
  /* 12c4d83b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12c4d83d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d840 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d841 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d843 call 0x12c50d10 */
  push32(0x12c4d848u); f_12c50d10();
  /* 12c4d848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d84b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d84e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d850 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d856 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d85c push edx */
  push32((uint32_t)(EDX));
  /* 12c4d85d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c4d85f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d862 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d863 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d865 call 0x12c50d10 */
  push32(0x12c4d86au); f_12c50d10();
  /* 12c4d86a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d86d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d870 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d872 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d878 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d87e push edx */
  push32((uint32_t)(EDX));
  /* 12c4d87f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12c4d881 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d884 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d885 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d887 call 0x12c50d10 */
  push32(0x12c4d88cu); f_12c50d10();
  /* 12c4d88c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d88f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d892 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d894 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d897 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d89a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d8a0 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d8a1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12c4d8a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d8a6 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d8a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d8a9 call 0x12c50d10 */
  push32(0x12c4d8aeu); f_12c50d10();
  /* 12c4d8ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d8b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d8b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d8b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d8b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d8bc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d8c2 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d8c3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12c4d8c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d8c8 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d8c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d8cb call 0x12c50d10 */
  push32(0x12c4d8d0u); f_12c50d10();
  /* 12c4d8d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d8d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d8d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d8d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d8db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d8de add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d8e4 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d8e5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12c4d8e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d8ea push eax */
  push32((uint32_t)(EAX));
  /* 12c4d8eb push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d8ed call 0x12c50d10 */
  push32(0x12c4d8f2u); f_12c50d10();
  /* 12c4d8f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d8f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d8f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d8fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d8fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d900 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d906 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d907 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12c4d909 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4d90c push eax */
  push32((uint32_t)(EAX));
  /* 12c4d90d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d90f call 0x12c50d10 */
  push32(0x12c4d914u); f_12c50d10();
  /* 12c4d914 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d917 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d91a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d91c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d91f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d922 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d928 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d929 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12c4d92b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d92e push eax */
  push32((uint32_t)(EAX));
  /* 12c4d92f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d931 call 0x12c50d10 */
  push32(0x12c4d936u); f_12c50d10();
  /* 12c4d936 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d939 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d93c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d93e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d941 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d944 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d94a push edx */
  push32((uint32_t)(EDX));
  /* 12c4d94b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c4d94d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d950 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d951 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d953 call 0x12c50d10 */
  push32(0x12c4d958u); f_12c50d10();
  /* 12c4d958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d95b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d95e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d960 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d963 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d966 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d96c push edx */
  push32((uint32_t)(EDX));
  /* 12c4d96d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12c4d972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4d975 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d976 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4d978 call 0x12c50d10 */
  push32(0x12c4d97du); f_12c50d10();
  /* 12c4d97d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d980 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4d983 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4d985 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c4d988 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12c4d98b:;
  /* 12c4d98b mov esp, ebp */
  ESP = (EBP);
  /* 12c4d98d pop ebp */
  EBP = (pop32());
  /* 12c4d98e ret  */
  ESPCHK(0x12c4d400u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12c4d990 (779 bytes, 265 insns) */
void f_12c4d990(void) {
  FTRACE(0x12c4d990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4d990 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4d991 mov ebp, esp */
  EBP = (ESP);
  /* 12c4d993 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4d997 jne 0x12c4d99e */
  if (!C.zf) goto L_12c4d99e;
  /* 12c4d999 jmp 0x12c4dc99 */
  goto L_12c4dc99;
L_12c4d99e:;
  /* 12c4d99e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d9a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d9a3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c4d9a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d9a7 call 0x12c435e0 */
  push32(0x12c4d9acu); f_12c435e0();
  /* 12c4d9ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d9af push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d9b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d9b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c4d9b7 push eax */
  push32((uint32_t)(EAX));
  /* 12c4d9b8 call 0x12c435e0 */
  push32(0x12c4d9bdu); f_12c435e0();
  /* 12c4d9bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d9c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d9c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d9c5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4d9c8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4d9c9 call 0x12c435e0 */
  push32(0x12c4d9ceu); f_12c435e0();
  /* 12c4d9ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d9d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d9d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d9d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c4d9d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4d9da call 0x12c435e0 */
  push32(0x12c4d9dfu); f_12c435e0();
  /* 12c4d9df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d9e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d9e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d9e7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c4d9ea push eax */
  push32((uint32_t)(EAX));
  /* 12c4d9eb call 0x12c435e0 */
  push32(0x12c4d9f0u); f_12c435e0();
  /* 12c4d9f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4d9f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4d9f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4d9f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c4d9fb push edx */
  push32((uint32_t)(EDX));
  /* 12c4d9fc call 0x12c435e0 */
  push32(0x12c4da01u); f_12c435e0();
  /* 12c4da01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da04 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4da09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4da0b push ecx */
  push32((uint32_t)(ECX));
  /* 12c4da0c call 0x12c435e0 */
  push32(0x12c4da11u); f_12c435e0();
  /* 12c4da11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da14 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4da19 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12c4da1c push eax */
  push32((uint32_t)(EAX));
  /* 12c4da1d call 0x12c435e0 */
  push32(0x12c4da22u); f_12c435e0();
  /* 12c4da22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4da2a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12c4da2d push edx */
  push32((uint32_t)(EDX));
  /* 12c4da2e call 0x12c435e0 */
  push32(0x12c4da33u); f_12c435e0();
  /* 12c4da33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4da3b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12c4da3e push ecx */
  push32((uint32_t)(ECX));
  /* 12c4da3f call 0x12c435e0 */
  push32(0x12c4da44u); f_12c435e0();
  /* 12c4da44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4da4c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12c4da4f push eax */
  push32((uint32_t)(EAX));
  /* 12c4da50 call 0x12c435e0 */
  push32(0x12c4da55u); f_12c435e0();
  /* 12c4da55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da58 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4da5d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12c4da60 push edx */
  push32((uint32_t)(EDX));
  /* 12c4da61 call 0x12c435e0 */
  push32(0x12c4da66u); f_12c435e0();
  /* 12c4da66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da69 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4da6e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12c4da71 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4da72 call 0x12c435e0 */
  push32(0x12c4da77u); f_12c435e0();
  /* 12c4da77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4da7f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c4da82 push eax */
  push32((uint32_t)(EAX));
  /* 12c4da83 call 0x12c435e0 */
  push32(0x12c4da88u); f_12c435e0();
  /* 12c4da88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4da90 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12c4da93 push edx */
  push32((uint32_t)(EDX));
  /* 12c4da94 call 0x12c435e0 */
  push32(0x12c4da99u); f_12c435e0();
  /* 12c4da99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4da9c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4da9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4daa1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12c4daa4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4daa5 call 0x12c435e0 */
  push32(0x12c4daaau); f_12c435e0();
  /* 12c4daaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4daad push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4daaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dab2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12c4dab5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4dab6 call 0x12c435e0 */
  push32(0x12c4dabbu); f_12c435e0();
  /* 12c4dabb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dabe push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dac0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dac3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12c4dac6 push edx */
  push32((uint32_t)(EDX));
  /* 12c4dac7 call 0x12c435e0 */
  push32(0x12c4daccu); f_12c435e0();
  /* 12c4dacc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dacf push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dad4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12c4dad7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dad8 call 0x12c435e0 */
  push32(0x12c4daddu); f_12c435e0();
  /* 12c4dadd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dae0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dae2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dae5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12c4dae8 push eax */
  push32((uint32_t)(EAX));
  /* 12c4dae9 call 0x12c435e0 */
  push32(0x12c4daeeu); f_12c435e0();
  /* 12c4daee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4daf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4daf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4daf6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c4daf9 push edx */
  push32((uint32_t)(EDX));
  /* 12c4dafa call 0x12c435e0 */
  push32(0x12c4daffu); f_12c435e0();
  /* 12c4daff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db02 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4db07 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12c4db0a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4db0b call 0x12c435e0 */
  push32(0x12c4db10u); f_12c435e0();
  /* 12c4db10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db13 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4db18 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12c4db1b push eax */
  push32((uint32_t)(EAX));
  /* 12c4db1c call 0x12c435e0 */
  push32(0x12c4db21u); f_12c435e0();
  /* 12c4db21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db24 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4db29 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12c4db2c push edx */
  push32((uint32_t)(EDX));
  /* 12c4db2d call 0x12c435e0 */
  push32(0x12c4db32u); f_12c435e0();
  /* 12c4db32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db35 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4db3a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12c4db3d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4db3e call 0x12c435e0 */
  push32(0x12c4db43u); f_12c435e0();
  /* 12c4db43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4db4b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12c4db4e push eax */
  push32((uint32_t)(EAX));
  /* 12c4db4f call 0x12c435e0 */
  push32(0x12c4db54u); f_12c435e0();
  /* 12c4db54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4db5c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12c4db5f push edx */
  push32((uint32_t)(EDX));
  /* 12c4db60 call 0x12c435e0 */
  push32(0x12c4db65u); f_12c435e0();
  /* 12c4db65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db68 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4db6d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12c4db70 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4db71 call 0x12c435e0 */
  push32(0x12c4db76u); f_12c435e0();
  /* 12c4db76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4db7e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12c4db81 push eax */
  push32((uint32_t)(EAX));
  /* 12c4db82 call 0x12c435e0 */
  push32(0x12c4db87u); f_12c435e0();
  /* 12c4db87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db8a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4db8f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12c4db92 push edx */
  push32((uint32_t)(EDX));
  /* 12c4db93 call 0x12c435e0 */
  push32(0x12c4db98u); f_12c435e0();
  /* 12c4db98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4db9b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4db9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dba0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12c4dba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dba4 call 0x12c435e0 */
  push32(0x12c4dba9u); f_12c435e0();
  /* 12c4dba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dbac push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dbae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dbb1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12c4dbb4 push eax */
  push32((uint32_t)(EAX));
  /* 12c4dbb5 call 0x12c435e0 */
  push32(0x12c4dbbau); f_12c435e0();
  /* 12c4dbba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dbbd push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dbbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dbc2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12c4dbc8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4dbc9 call 0x12c435e0 */
  push32(0x12c4dbceu); f_12c435e0();
  /* 12c4dbce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dbd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dbd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dbd6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12c4dbdc push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dbdd call 0x12c435e0 */
  push32(0x12c4dbe2u); f_12c435e0();
  /* 12c4dbe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dbe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dbe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dbea mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12c4dbf0 push eax */
  push32((uint32_t)(EAX));
  /* 12c4dbf1 call 0x12c435e0 */
  push32(0x12c4dbf6u); f_12c435e0();
  /* 12c4dbf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dbf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dbfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dbfe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12c4dc04 push edx */
  push32((uint32_t)(EDX));
  /* 12c4dc05 call 0x12c435e0 */
  push32(0x12c4dc0au); f_12c435e0();
  /* 12c4dc0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dc0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dc12 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12c4dc18 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dc19 call 0x12c435e0 */
  push32(0x12c4dc1eu); f_12c435e0();
  /* 12c4dc1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dc21 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dc23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dc26 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12c4dc2c push eax */
  push32((uint32_t)(EAX));
  /* 12c4dc2d call 0x12c435e0 */
  push32(0x12c4dc32u); f_12c435e0();
  /* 12c4dc32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dc35 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dc37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dc3a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12c4dc40 push edx */
  push32((uint32_t)(EDX));
  /* 12c4dc41 call 0x12c435e0 */
  push32(0x12c4dc46u); f_12c435e0();
  /* 12c4dc46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dc49 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dc4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dc4e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12c4dc54 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dc55 call 0x12c435e0 */
  push32(0x12c4dc5au); f_12c435e0();
  /* 12c4dc5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dc5d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dc5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dc62 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12c4dc68 push eax */
  push32((uint32_t)(EAX));
  /* 12c4dc69 call 0x12c435e0 */
  push32(0x12c4dc6eu); f_12c435e0();
  /* 12c4dc6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dc71 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dc73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dc76 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12c4dc7c push edx */
  push32((uint32_t)(EDX));
  /* 12c4dc7d call 0x12c435e0 */
  push32(0x12c4dc82u); f_12c435e0();
  /* 12c4dc82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dc85 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dc87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dc8a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12c4dc90 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dc91 call 0x12c435e0 */
  push32(0x12c4dc96u); f_12c435e0();
  /* 12c4dc96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4dc99:;
  /* 12c4dc99 pop ebp */
  EBP = (pop32());
  /* 12c4dc9a ret  */
  ESPCHK(0x12c4d990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dca0 @ 0x12c4dca0 (678 bytes, 180 insns) */
void f_12c4dca0(void) {
  FTRACE(0x12c4dca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4dca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4dca1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4dca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4dca6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4dcad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4dcaf mov ax, word ptr [0x12c6e6ea] */
  AX = (r16((uint32_t)(0x12c6e6ea)));
  /* 12c4dcb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4dcb8 cmp dword ptr [0x12c6e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4dcbf je 0x12c4de1a */
  if (C.zf) goto L_12c4de1a;
  /* 12c4dcc5 push 0x12c6e6b8 */
  push32((uint32_t)(0x12c6e6b8u));
  /* 12c4dcca push 0xe */
  push32((uint32_t)(0xeu));
  /* 12c4dccc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4dccf push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dcd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4dcd2 call 0x12c50d10 */
  push32(0x12c4dcd7u); f_12c50d10();
  /* 12c4dcd7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dcda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4dcdd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4dcdf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c4dce2 push 0x12c6e6bc */
  push32((uint32_t)(0x12c6e6bcu));
  /* 12c4dce7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12c4dce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4dcec push eax */
  push32((uint32_t)(EAX));
  /* 12c4dced push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4dcef call 0x12c50d10 */
  push32(0x12c4dcf4u); f_12c50d10();
  /* 12c4dcf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dcf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4dcfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4dcfc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4dcff push 0x12c6e6c0 */
  push32((uint32_t)(0x12c6e6c0u));
  /* 12c4dd04 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c4dd06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4dd09 push edx */
  push32((uint32_t)(EDX));
  /* 12c4dd0a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4dd0c call 0x12c50d10 */
  push32(0x12c4dd11u); f_12c50d10();
  /* 12c4dd11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dd14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4dd17 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4dd19 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4dd1c mov edx, dword ptr [0x12c6e6c0] */
  EDX = (r32((uint32_t)(0x12c6e6c0)));
  /* 12c4dd22 push edx */
  push32((uint32_t)(EDX));
  /* 12c4dd23 call 0x12c4df50 */
  push32(0x12c4dd28u); f_12c4df50();
  /* 12c4dd28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dd2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4dd2f je 0x12c4dd89 */
  if (C.zf) goto L_12c4dd89;
  /* 12c4dd31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dd33 mov eax, dword ptr [0x12c6e6b8] */
  EAX = (r32((uint32_t)(0x12c6e6b8)));
  /* 12c4dd38 push eax */
  push32((uint32_t)(EAX));
  /* 12c4dd39 call 0x12c435e0 */
  push32(0x12c4dd3eu); f_12c435e0();
  /* 12c4dd3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dd41 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dd43 mov ecx, dword ptr [0x12c6e6bc] */
  ECX = (r32((uint32_t)(0x12c6e6bc)));
  /* 12c4dd49 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dd4a call 0x12c435e0 */
  push32(0x12c4dd4fu); f_12c435e0();
  /* 12c4dd4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dd52 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dd54 mov edx, dword ptr [0x12c6e6c0] */
  EDX = (r32((uint32_t)(0x12c6e6c0)));
  /* 12c4dd5a push edx */
  push32((uint32_t)(EDX));
  /* 12c4dd5b call 0x12c435e0 */
  push32(0x12c4dd60u); f_12c435e0();
  /* 12c4dd60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dd63 mov dword ptr [0x12c6e6b8], 0 */
  w32((uint32_t)(0x12c6e6b8), (0x0u));
  /* 12c4dd6d mov dword ptr [0x12c6e6bc], 0 */
  w32((uint32_t)(0x12c6e6bc), (0x0u));
  /* 12c4dd77 mov dword ptr [0x12c6e6c0], 0 */
  w32((uint32_t)(0x12c6e6c0), (0x0u));
  /* 12c4dd81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4dd84 jmp 0x12c4df42 */
  goto L_12c4df42;
L_12c4dd89:;
  /* 12c4dd89 mov eax, dword ptr [0x12c6dd88] */
  EAX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4dd8e cmp dword ptr [eax], 0x12c6dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12c6dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4dd94 je 0x12c4ddd0 */
  if (C.zf) goto L_12c4ddd0;
  /* 12c4dd96 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dd98 mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4dd9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4dda0 push edx */
  push32((uint32_t)(EDX));
  /* 12c4dda1 call 0x12c435e0 */
  push32(0x12c4dda6u); f_12c435e0();
  /* 12c4dda6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dda9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4ddab mov eax, dword ptr [0x12c6dd88] */
  EAX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4ddb0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c4ddb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ddb4 call 0x12c435e0 */
  push32(0x12c4ddb9u); f_12c435e0();
  /* 12c4ddb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ddbc push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4ddbe mov edx, dword ptr [0x12c6dd88] */
  EDX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4ddc4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c4ddc7 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ddc8 call 0x12c435e0 */
  push32(0x12c4ddcdu); f_12c435e0();
  /* 12c4ddcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4ddd0:;
  /* 12c4ddd0 mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4ddd6 mov edx, dword ptr [0x12c6e6b8] */
  EDX = (r32((uint32_t)(0x12c6e6b8)));
  /* 12c4dddc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c4ddde mov eax, dword ptr [0x12c6dd88] */
  EAX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4dde3 mov ecx, dword ptr [0x12c6e6bc] */
  ECX = (r32((uint32_t)(0x12c6e6bc)));
  /* 12c4dde9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c4ddec mov edx, dword ptr [0x12c6dd88] */
  EDX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4ddf2 mov eax, dword ptr [0x12c6e6c0] */
  EAX = (r32((uint32_t)(0x12c6e6c0)));
  /* 12c4ddf7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c4ddfa mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4de00 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4de02 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4de04 mov byte ptr [0x12c6cea8], al */
  w8((uint32_t)(0x12c6cea8), (AL));
  /* 12c4de09 mov dword ptr [0x12c6ceac], 1 */
  w32((uint32_t)(0x12c6ceac), (0x1u));
  /* 12c4de13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4de15 jmp 0x12c4df42 */
  goto L_12c4df42;
L_12c4de1a:;
  /* 12c4de1a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4de1c mov ecx, dword ptr [0x12c6e6b8] */
  ECX = (r32((uint32_t)(0x12c6e6b8)));
  /* 12c4de22 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4de23 call 0x12c435e0 */
  push32(0x12c4de28u); f_12c435e0();
  /* 12c4de28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4de2b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4de2d mov edx, dword ptr [0x12c6e6bc] */
  EDX = (r32((uint32_t)(0x12c6e6bc)));
  /* 12c4de33 push edx */
  push32((uint32_t)(EDX));
  /* 12c4de34 call 0x12c435e0 */
  push32(0x12c4de39u); f_12c435e0();
  /* 12c4de39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4de3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4de3e mov eax, dword ptr [0x12c6e6c0] */
  EAX = (r32((uint32_t)(0x12c6e6c0)));
  /* 12c4de43 push eax */
  push32((uint32_t)(EAX));
  /* 12c4de44 call 0x12c435e0 */
  push32(0x12c4de49u); f_12c435e0();
  /* 12c4de49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4de4c mov dword ptr [0x12c6e6b8], 0 */
  w32((uint32_t)(0x12c6e6b8), (0x0u));
  /* 12c4de56 mov dword ptr [0x12c6e6bc], 0 */
  w32((uint32_t)(0x12c6e6bc), (0x0u));
  /* 12c4de60 mov dword ptr [0x12c6e6c0], 0 */
  w32((uint32_t)(0x12c6e6c0), (0x0u));
  /* 12c4de6a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12c4de6f push 0x12c69ffc */
  push32((uint32_t)(0x12c69ffcu));
  /* 12c4de74 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4de76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4de78 call 0x12c42b50 */
  push32(0x12c4de7du); f_12c42b50();
  /* 12c4de7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4de80 mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4de86 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c4de88 mov edx, dword ptr [0x12c6dd88] */
  EDX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4de8e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4de91 jne 0x12c4de9b */
  if (!C.zf) goto L_12c4de9b;
  /* 12c4de93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4de96 jmp 0x12c4df42 */
  goto L_12c4df42;
L_12c4de9b:;
  /* 12c4de9b push 0x12c69fcc */
  push32((uint32_t)(0x12c69fccu));
  /* 12c4dea0 mov eax, dword ptr [0x12c6dd88] */
  EAX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4dea5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c4dea7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dea8 call 0x12c45b00 */
  push32(0x12c4deadu); f_12c45b00();
  /* 12c4dead add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4deb0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12c4deb5 push 0x12c69ffc */
  push32((uint32_t)(0x12c69ffcu));
  /* 12c4deba push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4debc push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4debe call 0x12c42b50 */
  push32(0x12c4dec3u); f_12c42b50();
  /* 12c4dec3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dec6 mov edx, dword ptr [0x12c6dd88] */
  EDX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4decc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12c4decf mov eax, dword ptr [0x12c6dd88] */
  EAX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4ded4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ded8 jne 0x12c4dedf */
  if (!C.zf) goto L_12c4dedf;
  /* 12c4deda or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4dedd jmp 0x12c4df42 */
  goto L_12c4df42;
L_12c4dedf:;
  /* 12c4dedf mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4dee5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c4dee8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c4deeb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12c4def0 push 0x12c69ffc */
  push32((uint32_t)(0x12c69ffcu));
  /* 12c4def5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4def7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4def9 call 0x12c42b50 */
  push32(0x12c4defeu); f_12c42b50();
  /* 12c4defe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4df01 mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4df07 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12c4df0a mov edx, dword ptr [0x12c6dd88] */
  EDX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4df10 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4df14 jne 0x12c4df1b */
  if (!C.zf) goto L_12c4df1b;
  /* 12c4df16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4df19 jmp 0x12c4df42 */
  goto L_12c4df42;
L_12c4df1b:;
  /* 12c4df1b mov eax, dword ptr [0x12c6dd88] */
  EAX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4df20 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c4df23 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12c4df26 mov edx, dword ptr [0x12c6dd88] */
  EDX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4df2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c4df2e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c4df30 mov byte ptr [0x12c6cea8], cl */
  w8((uint32_t)(0x12c6cea8), (CL));
  /* 12c4df36 mov dword ptr [0x12c6ceac], 1 */
  w32((uint32_t)(0x12c6ceac), (0x1u));
  /* 12c4df40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4df42:;
  /* 12c4df42 mov esp, ebp */
  ESP = (EBP);
  /* 12c4df44 pop ebp */
  EBP = (pop32());
  /* 12c4df45 ret  */
  ESPCHK(0x12c4dca0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12c4df50 (125 bytes, 49 insns) */
void f_12c4df50(void) {
  FTRACE(0x12c4df50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4df50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4df51 mov ebp, esp */
  EBP = (ESP);
  /* 12c4df53 push ecx */
  push32((uint32_t)(ECX));
L_12c4df54:;
  /* 12c4df54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4df57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4df5a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4df5c je 0x12c4dfc9 */
  if (C.zf) goto L_12c4dfc9;
  /* 12c4df5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4df61 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c4df64 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4df67 jl 0x12c4df8d */
  if ((C.sf!=C.of)) goto L_12c4df8d;
  /* 12c4df69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4df6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4df6f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4df72 jg 0x12c4df8d */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4df8d;
  /* 12c4df74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4df77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4df7a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4df7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4df80 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c4df82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4df85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4df88 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c4df8b jmp 0x12c4dfc7 */
  goto L_12c4dfc7;
L_12c4df8d:;
  /* 12c4df8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4df90 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4df93 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4df96 jne 0x12c4dfbe */
  if (!C.zf) goto L_12c4dfbe;
  /* 12c4df98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4df9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4df9e:;
  /* 12c4df9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4dfa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4dfa4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c4dfa7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c4dfa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4dfac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dfaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4dfb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4dfb5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c4dfb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4dfba jne 0x12c4df9e */
  if (!C.zf) goto L_12c4df9e;
  /* 12c4dfbc jmp 0x12c4dfc7 */
  goto L_12c4dfc7;
L_12c4dfbe:;
  /* 12c4dfbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4dfc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dfc4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12c4dfc7:;
  /* 12c4dfc7 jmp 0x12c4df54 */
  goto L_12c4df54;
L_12c4dfc9:;
  /* 12c4dfc9 mov esp, ebp */
  ESP = (EBP);
  /* 12c4dfcb pop ebp */
  EBP = (pop32());
  /* 12c4dfcc ret  */
  ESPCHK(0x12c4df50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfd0 @ 0x12c4dfd0 (304 bytes, 85 insns) */
void f_12c4dfd0(void) {
  FTRACE(0x12c4dfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4dfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4dfd1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4dfd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4dfd4 cmp dword ptr [0x12c6e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4dfdb je 0x12c4e09c */
  if (C.zf) goto L_12c4e09c;
  /* 12c4dfe1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12c4dfe3 push 0x12c6a008 */
  push32((uint32_t)(0x12c6a008u));
  /* 12c4dfe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4dfea push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12c4dfec push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4dfee call 0x12c42f60 */
  push32(0x12c4dff3u); f_12c42f60();
  /* 12c4dff3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4dff6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4dff9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4dffd jne 0x12c4e009 */
  if (!C.zf) goto L_12c4e009;
  /* 12c4dfff mov eax, 1 */
  EAX = (0x1u);
  /* 12c4e004 jmp 0x12c4e0fc */
  goto L_12c4e0fc;
L_12c4e009:;
  /* 12c4e009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e00c push eax */
  push32((uint32_t)(EAX));
  /* 12c4e00d call 0x12c4e100 */
  push32(0x12c4e012u); f_12c4e100();
  /* 12c4e012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4e017 je 0x12c4e03d */
  if (C.zf) goto L_12c4e03d;
  /* 12c4e019 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e01c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e01d call 0x12c4e390 */
  push32(0x12c4e022u); f_12c4e390();
  /* 12c4e022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e025 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e027 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e02a push edx */
  push32((uint32_t)(EDX));
  /* 12c4e02b call 0x12c435e0 */
  push32(0x12c4e030u); f_12c435e0();
  /* 12c4e030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e033 mov eax, 1 */
  EAX = (0x1u);
  /* 12c4e038 jmp 0x12c4e0fc */
  goto L_12c4e0fc;
L_12c4e03d:;
  /* 12c4e03d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e040 mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4e046 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4e048 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c4e04a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e04d mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4e053 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c4e056 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c4e059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e05c mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4e062 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c4e065 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12c4e068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e06b mov dword ptr [0x12c6dd88], eax */
  w32((uint32_t)(0x12c6dd88), (EAX));
  /* 12c4e070 mov ecx, dword ptr [0x12c6e6c4] */
  ECX = (r32((uint32_t)(0x12c6e6c4)));
  /* 12c4e076 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e077 call 0x12c4e390 */
  push32(0x12c4e07cu); f_12c4e390();
  /* 12c4e07c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e07f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e081 mov edx, dword ptr [0x12c6e6c4] */
  EDX = (r32((uint32_t)(0x12c6e6c4)));
  /* 12c4e087 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e088 call 0x12c435e0 */
  push32(0x12c4e08du); f_12c435e0();
  /* 12c4e08d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e093 mov dword ptr [0x12c6e6c4], eax */
  w32((uint32_t)(0x12c6e6c4), (EAX));
  /* 12c4e098 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e09a jmp 0x12c4e0fc */
  goto L_12c4e0fc;
L_12c4e09c:;
  /* 12c4e09c mov ecx, dword ptr [0x12c6dd88] */
  ECX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4e0a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4e0a4 mov dword ptr [0x12c6dd58], edx */
  w32((uint32_t)(0x12c6dd58), (EDX));
  /* 12c4e0aa mov eax, dword ptr [0x12c6dd88] */
  EAX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4e0af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c4e0b2 mov dword ptr [0x12c6dd5c], ecx */
  w32((uint32_t)(0x12c6dd5c), (ECX));
  /* 12c4e0b8 mov edx, dword ptr [0x12c6dd88] */
  EDX = (r32((uint32_t)(0x12c6dd88)));
  /* 12c4e0be mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c4e0c1 mov dword ptr [0x12c6dd60], eax */
  w32((uint32_t)(0x12c6dd60), (EAX));
  /* 12c4e0c6 mov dword ptr [0x12c6dd88], 0x12c6dd58 */
  w32((uint32_t)(0x12c6dd88), (0x12c6dd58u));
  /* 12c4e0d0 mov ecx, dword ptr [0x12c6e6c4] */
  ECX = (r32((uint32_t)(0x12c6e6c4)));
  /* 12c4e0d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e0d7 call 0x12c4e390 */
  push32(0x12c4e0dcu); f_12c4e390();
  /* 12c4e0dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e0df push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e0e1 mov edx, dword ptr [0x12c6e6c4] */
  EDX = (r32((uint32_t)(0x12c6e6c4)));
  /* 12c4e0e7 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e0e8 call 0x12c435e0 */
  push32(0x12c4e0edu); f_12c435e0();
  /* 12c4e0ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e0f0 mov dword ptr [0x12c6e6c4], 0 */
  w32((uint32_t)(0x12c6e6c4), (0x0u));
  /* 12c4e0fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4e0fc:;
  /* 12c4e0fc mov esp, ebp */
  ESP = (EBP);
  /* 12c4e0fe pop ebp */
  EBP = (pop32());
  /* 12c4e0ff ret  */
  ESPCHK(0x12c4dfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e100 @ 0x12c4e100 (525 bytes, 200 insns) */
void f_12c4e100(void) {
  FTRACE(0x12c4e100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e100 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4e101 mov ebp, esp */
  EBP = (ESP);
  /* 12c4e103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4e106 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4e10d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e10f mov ax, word ptr [0x12c6e6e4] */
  AX = (r16((uint32_t)(0x12c6e6e4)));
  /* 12c4e115 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4e118 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e11c jne 0x12c4e126 */
  if (!C.zf) goto L_12c4e126;
  /* 12c4e11e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e121 jmp 0x12c4e309 */
  goto L_12c4e309;
L_12c4e126:;
  /* 12c4e126 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e129 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e12c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e12d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12c4e12f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e132 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e133 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4e135 call 0x12c50d10 */
  push32(0x12c4e13au); f_12c50d10();
  /* 12c4e13a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e13d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e140 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e142 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e148 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e14b push edx */
  push32((uint32_t)(EDX));
  /* 12c4e14c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12c4e14e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e151 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e152 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4e154 call 0x12c50d10 */
  push32(0x12c4e159u); f_12c50d10();
  /* 12c4e159 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e15c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e15f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e161 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e164 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e167 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e16a push edx */
  push32((uint32_t)(EDX));
  /* 12c4e16b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12c4e16d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e170 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e171 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4e173 call 0x12c50d10 */
  push32(0x12c4e178u); f_12c50d10();
  /* 12c4e178 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e17b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e17e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e180 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e183 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e186 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e189 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e18a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12c4e18c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e18f push eax */
  push32((uint32_t)(EAX));
  /* 12c4e190 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4e192 call 0x12c50d10 */
  push32(0x12c4e197u); f_12c50d10();
  /* 12c4e197 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e19a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e19d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e19f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e1a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e1a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e1a8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e1a9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12c4e1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e1ae push eax */
  push32((uint32_t)(EAX));
  /* 12c4e1af push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4e1b1 call 0x12c50d10 */
  push32(0x12c4e1b6u); f_12c50d10();
  /* 12c4e1b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e1b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e1bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e1be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e1c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e1c4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12c4e1c7 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e1c8 call 0x12c4e310 */
  push32(0x12c4e1cdu); f_12c4e310();
  /* 12c4e1cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e1d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e1d3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e1d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e1d7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12c4e1d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e1dc push edx */
  push32((uint32_t)(EDX));
  /* 12c4e1dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4e1df call 0x12c50d10 */
  push32(0x12c4e1e4u); f_12c50d10();
  /* 12c4e1e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e1e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e1ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e1ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e1ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e1f2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e1f5 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e1f6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12c4e1f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e1fb push eax */
  push32((uint32_t)(EAX));
  /* 12c4e1fc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4e1fe call 0x12c50d10 */
  push32(0x12c4e203u); f_12c50d10();
  /* 12c4e203 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e209 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e20b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e20e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e211 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e214 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e215 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12c4e217 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e21a push eax */
  push32((uint32_t)(EAX));
  /* 12c4e21b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e21d call 0x12c50d10 */
  push32(0x12c4e222u); f_12c50d10();
  /* 12c4e222 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e225 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e228 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e22a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e22d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e230 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e233 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e234 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12c4e236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e239 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e23a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e23c call 0x12c50d10 */
  push32(0x12c4e241u); f_12c50d10();
  /* 12c4e241 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e244 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e247 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e249 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e24c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e24f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e252 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e253 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12c4e255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e258 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e259 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e25b call 0x12c50d10 */
  push32(0x12c4e260u); f_12c50d10();
  /* 12c4e260 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e263 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e266 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e268 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e26b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e26e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e271 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e272 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12c4e274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e277 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e278 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e27a call 0x12c50d10 */
  push32(0x12c4e27fu); f_12c50d10();
  /* 12c4e27f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e282 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e285 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e287 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e28a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e28d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e290 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e291 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12c4e293 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e296 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e297 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e299 call 0x12c50d10 */
  push32(0x12c4e29eu); f_12c50d10();
  /* 12c4e29e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e2a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e2a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e2a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e2a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e2ac add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e2af push edx */
  push32((uint32_t)(EDX));
  /* 12c4e2b0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12c4e2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e2b5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e2b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e2b8 call 0x12c50d10 */
  push32(0x12c4e2bdu); f_12c50d10();
  /* 12c4e2bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e2c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e2c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e2c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e2c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e2cb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e2ce push edx */
  push32((uint32_t)(EDX));
  /* 12c4e2cf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12c4e2d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e2d4 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e2d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e2d7 call 0x12c50d10 */
  push32(0x12c4e2dcu); f_12c50d10();
  /* 12c4e2dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e2df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e2e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e2e4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e2e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e2ea add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e2ed push edx */
  push32((uint32_t)(EDX));
  /* 12c4e2ee push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12c4e2f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e2f3 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e2f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e2f6 call 0x12c50d10 */
  push32(0x12c4e2fbu); f_12c50d10();
  /* 12c4e2fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e2fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e301 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e303 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4e306 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c4e309:;
  /* 12c4e309 mov esp, ebp */
  ESP = (EBP);
  /* 12c4e30b pop ebp */
  EBP = (pop32());
  /* 12c4e30c ret  */
  ESPCHK(0x12c4e100u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12c4e310 (125 bytes, 49 insns) */
void f_12c4e310(void) {
  FTRACE(0x12c4e310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e310 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4e311 mov ebp, esp */
  EBP = (ESP);
  /* 12c4e313 push ecx */
  push32((uint32_t)(ECX));
L_12c4e314:;
  /* 12c4e314 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e317 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4e31a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4e31c je 0x12c4e389 */
  if (C.zf) goto L_12c4e389;
  /* 12c4e31e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e321 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c4e324 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e327 jl 0x12c4e34d */
  if ((C.sf!=C.of)) goto L_12c4e34d;
  /* 12c4e329 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e32c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4e32f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e332 jg 0x12c4e34d */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4e34d;
  /* 12c4e334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e337 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4e33a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4e33d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e340 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c4e342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e345 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e348 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c4e34b jmp 0x12c4e387 */
  goto L_12c4e387;
L_12c4e34d:;
  /* 12c4e34d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e350 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4e353 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e356 jne 0x12c4e37e */
  if (!C.zf) goto L_12c4e37e;
  /* 12c4e358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e35b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4e35e:;
  /* 12c4e35e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e361 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e364 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c4e367 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c4e369 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e36c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e36f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4e372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4e375 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c4e378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4e37a jne 0x12c4e35e */
  if (!C.zf) goto L_12c4e35e;
  /* 12c4e37c jmp 0x12c4e387 */
  goto L_12c4e387;
L_12c4e37e:;
  /* 12c4e37e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e381 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e384 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12c4e387:;
  /* 12c4e387 jmp 0x12c4e314 */
  goto L_12c4e314;
L_12c4e389:;
  /* 12c4e389 mov esp, ebp */
  ESP = (EBP);
  /* 12c4e38b pop ebp */
  EBP = (pop32());
  /* 12c4e38c ret  */
  ESPCHK(0x12c4e310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e390 @ 0x12c4e390 (147 bytes, 52 insns) */
void f_12c4e390(void) {
  FTRACE(0x12c4e390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e390 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4e391 mov ebp, esp */
  EBP = (ESP);
  /* 12c4e393 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e397 jne 0x12c4e39e */
  if (!C.zf) goto L_12c4e39e;
  /* 12c4e399 jmp 0x12c4e421 */
  goto L_12c4e421;
L_12c4e39e:;
  /* 12c4e39e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e3a1 cmp dword ptr [eax + 0xc], 0x12c6e720 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12c6e720u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e3a8 je 0x12c4e421 */
  if (C.zf) goto L_12c4e421;
  /* 12c4e3aa push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e3ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e3af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c4e3b2 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e3b3 call 0x12c435e0 */
  push32(0x12c4e3b8u); f_12c435e0();
  /* 12c4e3b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e3bb push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e3bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e3c0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c4e3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e3c4 call 0x12c435e0 */
  push32(0x12c4e3c9u); f_12c435e0();
  /* 12c4e3c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e3cc push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e3ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e3d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c4e3d4 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e3d5 call 0x12c435e0 */
  push32(0x12c4e3dau); f_12c435e0();
  /* 12c4e3da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e3dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e3df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e3e2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c4e3e5 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e3e6 call 0x12c435e0 */
  push32(0x12c4e3ebu); f_12c435e0();
  /* 12c4e3eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e3ee push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e3f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e3f3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12c4e3f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e3f7 call 0x12c435e0 */
  push32(0x12c4e3fcu); f_12c435e0();
  /* 12c4e3fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e3ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e404 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12c4e407 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e408 call 0x12c435e0 */
  push32(0x12c4e40du); f_12c435e0();
  /* 12c4e40d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e410 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e412 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e415 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12c4e418 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e419 call 0x12c435e0 */
  push32(0x12c4e41eu); f_12c435e0();
  /* 12c4e41e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4e421:;
  /* 12c4e421 pop ebp */
  EBP = (pop32());
  /* 12c4e422 ret  */
  ESPCHK(0x12c4e390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e430 @ 0x12c4e430 (928 bytes, 284 insns) */
void f_12c4e430(void) {
  FTRACE(0x12c4e430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e430 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4e431 mov ebp, esp */
  EBP = (ESP);
  /* 12c4e433 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4e436 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12c4e43d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12c4e444 cmp dword ptr [0x12c6e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e44b je 0x12c4e781 */
  if (C.zf) goto L_12c4e781;
  /* 12c4e451 cmp dword ptr [0x12c6e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e458 jne 0x12c4e480 */
  if (!C.zf) goto L_12c4e480;
  /* 12c4e45a push 0x12c6e698 */
  push32((uint32_t)(0x12c6e698u));
  /* 12c4e45f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12c4e464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e466 mov ax, word ptr [0x12c6e6dc] */
  AX = (r16((uint32_t)(0x12c6e6dc)));
  /* 12c4e46c push eax */
  push32((uint32_t)(EAX));
  /* 12c4e46d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e46f call 0x12c50d10 */
  push32(0x12c4e474u); f_12c50d10();
  /* 12c4e474 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4e479 je 0x12c4e480 */
  if (C.zf) goto L_12c4e480;
  /* 12c4e47b jmp 0x12c4e742 */
  goto L_12c4e742;
L_12c4e480:;
  /* 12c4e480 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12c4e482 push 0x12c6a014 */
  push32((uint32_t)(0x12c6a014u));
  /* 12c4e487 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e489 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12c4e48e call 0x12c42b50 */
  push32(0x12c4e493u); f_12c42b50();
  /* 12c4e493 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e496 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12c4e499 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12c4e49b push 0x12c6a014 */
  push32((uint32_t)(0x12c6a014u));
  /* 12c4e4a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e4a2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12c4e4a7 call 0x12c42b50 */
  push32(0x12c4e4acu); f_12c42b50();
  /* 12c4e4ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e4af mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12c4e4b2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12c4e4b4 push 0x12c6a014 */
  push32((uint32_t)(0x12c6a014u));
  /* 12c4e4b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e4bb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12c4e4c0 call 0x12c42b50 */
  push32(0x12c4e4c5u); f_12c42b50();
  /* 12c4e4c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e4c8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12c4e4cb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12c4e4cd push 0x12c6a014 */
  push32((uint32_t)(0x12c6a014u));
  /* 12c4e4d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e4d4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12c4e4d9 call 0x12c42b50 */
  push32(0x12c4e4deu); f_12c42b50();
  /* 12c4e4de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e4e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c4e4e4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e4e8 je 0x12c4e4fc */
  if (C.zf) goto L_12c4e4fc;
  /* 12c4e4ea cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e4ee je 0x12c4e4fc */
  if (C.zf) goto L_12c4e4fc;
  /* 12c4e4f0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e4f4 je 0x12c4e4fc */
  if (C.zf) goto L_12c4e4fc;
  /* 12c4e4f6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e4fa jne 0x12c4e501 */
  if (!C.zf) goto L_12c4e501;
L_12c4e4fc:;
  /* 12c4e4fc jmp 0x12c4e742 */
  goto L_12c4e742;
L_12c4e501:;
  /* 12c4e501 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4e504 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c4e507 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c4e50e jmp 0x12c4e519 */
  goto L_12c4e519;
L_12c4e510:;
  /* 12c4e510 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4e513 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e516 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12c4e519:;
  /* 12c4e519 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e520 jge 0x12c4e535 */
  if ((C.sf==C.of)) goto L_12c4e535;
  /* 12c4e522 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e525 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12c4e528 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c4e52a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e52d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e530 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c4e533 jmp 0x12c4e510 */
  goto L_12c4e510;
L_12c4e535:;
  /* 12c4e535 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12c4e538 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e539 mov ecx, dword ptr [0x12c6e698] */
  ECX = (r32((uint32_t)(0x12c6e698)));
  /* 12c4e53f push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e540 call dword ptr [0x12c70310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70310))), 0x12c4e546u);
  /* 12c4e546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4e548 jne 0x12c4e54f */
  if (!C.zf) goto L_12c4e54f;
  /* 12c4e54a jmp 0x12c4e742 */
  goto L_12c4e742;
L_12c4e54f:;
  /* 12c4e54f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e553 jbe 0x12c4e55a */
  if ((C.cf||C.zf)) goto L_12c4e55a;
  /* 12c4e555 jmp 0x12c4e742 */
  goto L_12c4e742;
L_12c4e55a:;
  /* 12c4e55a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c4e55d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4e563 mov dword ptr [0x12c6cea4], edx */
  w32((uint32_t)(0x12c6cea4), (EDX));
  /* 12c4e569 cmp dword ptr [0x12c6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e570 jle 0x12c4e5c9 */
  if ((C.zf||C.sf!=C.of)) goto L_12c4e5c9;
  /* 12c4e572 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12c4e575 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c4e578 jmp 0x12c4e583 */
  goto L_12c4e583;
L_12c4e57a:;
  /* 12c4e57a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e57d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e580 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12c4e583:;
  /* 12c4e583 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e588 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4e58a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4e58c je 0x12c4e5c9 */
  if (C.zf) goto L_12c4e5c9;
  /* 12c4e58e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e591 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4e593 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12c4e596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4e598 je 0x12c4e5c9 */
  if (C.zf) goto L_12c4e5c9;
  /* 12c4e59a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e59d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e59f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c4e5a1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c4e5a4 jmp 0x12c4e5af */
  goto L_12c4e5af;
L_12c4e5a6:;
  /* 12c4e5a6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4e5a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e5ac mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12c4e5af:;
  /* 12c4e5af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e5b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e5b4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c4e5b7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e5ba jg 0x12c4e5c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4e5c7;
  /* 12c4e5bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4e5bf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e5c2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c4e5c5 jmp 0x12c4e5a6 */
  goto L_12c4e5a6;
L_12c4e5c7:;
  /* 12c4e5c7 jmp 0x12c4e57a */
  goto L_12c4e57a;
L_12c4e5c9:;
  /* 12c4e5c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e5cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e5cd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e5cf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4e5d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e5d5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e5d6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c4e5db mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4e5de push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e5df push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4e5e1 call 0x12c4ad80 */
  push32(0x12c4e5e6u); f_12c4ad80();
  /* 12c4e5e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e5e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4e5eb jne 0x12c4e5f2 */
  if (!C.zf) goto L_12c4e5f2;
  /* 12c4e5ed jmp 0x12c4e742 */
  goto L_12c4e742;
L_12c4e5f2:;
  /* 12c4e5f2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4e5f5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12c4e5fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4e5fd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c4e600 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12c4e607 jmp 0x12c4e612 */
  goto L_12c4e612;
L_12c4e609:;
  /* 12c4e609 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4e60c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e60f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12c4e612:;
  /* 12c4e612 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e619 jge 0x12c4e630 */
  if ((C.sf==C.of)) goto L_12c4e630;
  /* 12c4e61b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4e61e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12c4e622 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12c4e625 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c4e628 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e62b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12c4e62e jmp 0x12c4e609 */
  goto L_12c4e609;
L_12c4e630:;
  /* 12c4e630 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e632 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4e634 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4e637 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e63a push edx */
  push32((uint32_t)(EDX));
  /* 12c4e63b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12c4e640 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4e643 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e644 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4e646 call 0x12c50fb0 */
  push32(0x12c4e64bu); f_12c50fb0();
  /* 12c4e64b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e64e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4e650 jne 0x12c4e657 */
  if (!C.zf) goto L_12c4e657;
  /* 12c4e652 jmp 0x12c4e742 */
  goto L_12c4e742;
L_12c4e657:;
  /* 12c4e657 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4e65a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12c4e65f cmp dword ptr [0x12c6cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c6cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e666 jle 0x12c4e6c3 */
  if ((C.zf||C.sf!=C.of)) goto L_12c4e6c3;
  /* 12c4e668 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12c4e66b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c4e66e jmp 0x12c4e679 */
  goto L_12c4e679;
L_12c4e670:;
  /* 12c4e670 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e673 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e676 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12c4e679:;
  /* 12c4e679 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e67c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c4e67e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c4e680 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4e682 je 0x12c4e6c3 */
  if (C.zf) goto L_12c4e6c3;
  /* 12c4e684 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e687 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e689 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12c4e68c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4e68e je 0x12c4e6c3 */
  if (C.zf) goto L_12c4e6c3;
  /* 12c4e690 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e695 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4e697 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c4e69a jmp 0x12c4e6a5 */
  goto L_12c4e6a5;
L_12c4e69c:;
  /* 12c4e69c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4e69f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e6a2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12c4e6a5:;
  /* 12c4e6a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c4e6a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e6aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12c4e6ad cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e6b0 jg 0x12c4e6c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4e6c1;
  /* 12c4e6b2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c4e6b5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4e6b8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12c4e6bf jmp 0x12c4e69c */
  goto L_12c4e69c;
L_12c4e6c1:;
  /* 12c4e6c1 jmp 0x12c4e670 */
  goto L_12c4e670;
L_12c4e6c3:;
  /* 12c4e6c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4e6c6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e6c9 mov dword ptr [0x12c6cc98], eax */
  w32((uint32_t)(0x12c6cc98), (EAX));
  /* 12c4e6ce mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4e6d1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e6d4 mov dword ptr [0x12c6cc9c], ecx */
  w32((uint32_t)(0x12c6cc9c), (ECX));
  /* 12c4e6da cmp dword ptr [0x12c6e6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e6e1 je 0x12c4e6f4 */
  if (C.zf) goto L_12c4e6f4;
  /* 12c4e6e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e6e5 mov edx, dword ptr [0x12c6e6c8] */
  EDX = (r32((uint32_t)(0x12c6e6c8)));
  /* 12c4e6eb push edx */
  push32((uint32_t)(EDX));
  /* 12c4e6ec call 0x12c435e0 */
  push32(0x12c4e6f1u); f_12c435e0();
  /* 12c4e6f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4e6f4:;
  /* 12c4e6f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4e6f7 mov dword ptr [0x12c6e6c8], eax */
  w32((uint32_t)(0x12c6e6c8), (EAX));
  /* 12c4e6fc cmp dword ptr [0x12c6e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e703 je 0x12c4e716 */
  if (C.zf) goto L_12c4e716;
  /* 12c4e705 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e707 mov ecx, dword ptr [0x12c6e6cc] */
  ECX = (r32((uint32_t)(0x12c6e6cc)));
  /* 12c4e70d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e70e call 0x12c435e0 */
  push32(0x12c4e713u); f_12c435e0();
  /* 12c4e713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4e716:;
  /* 12c4e716 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4e719 mov dword ptr [0x12c6e6cc], edx */
  w32((uint32_t)(0x12c6e6cc), (EDX));
  /* 12c4e71f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e721 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4e724 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e725 call 0x12c435e0 */
  push32(0x12c4e72au); f_12c435e0();
  /* 12c4e72a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e72d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e72f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4e732 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e733 call 0x12c435e0 */
  push32(0x12c4e738u); f_12c435e0();
  /* 12c4e738 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e73b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e73d jmp 0x12c4e7cc */
  goto L_12c4e7cc;
L_12c4e742:;
  /* 12c4e742 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e744 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12c4e747 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e748 call 0x12c435e0 */
  push32(0x12c4e74du); f_12c435e0();
  /* 12c4e74d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e750 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e752 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12c4e755 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e756 call 0x12c435e0 */
  push32(0x12c4e75bu); f_12c435e0();
  /* 12c4e75b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e75e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e760 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c4e763 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e764 call 0x12c435e0 */
  push32(0x12c4e769u); f_12c435e0();
  /* 12c4e769 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e76c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e76e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c4e771 push edx */
  push32((uint32_t)(EDX));
  /* 12c4e772 call 0x12c435e0 */
  push32(0x12c4e777u); f_12c435e0();
  /* 12c4e777 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e77a mov eax, 1 */
  EAX = (0x1u);
  /* 12c4e77f jmp 0x12c4e7cc */
  goto L_12c4e7cc;
L_12c4e781:;
  /* 12c4e781 mov dword ptr [0x12c6cc98], 0x12c6cca2 */
  w32((uint32_t)(0x12c6cc98), (0x12c6cca2u));
  /* 12c4e78b mov dword ptr [0x12c6cc9c], 0x12c6cca2 */
  w32((uint32_t)(0x12c6cc9c), (0x12c6cca2u));
  /* 12c4e795 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e797 mov eax, dword ptr [0x12c6e6c8] */
  EAX = (r32((uint32_t)(0x12c6e6c8)));
  /* 12c4e79c push eax */
  push32((uint32_t)(EAX));
  /* 12c4e79d call 0x12c435e0 */
  push32(0x12c4e7a2u); f_12c435e0();
  /* 12c4e7a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e7a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c4e7a7 mov ecx, dword ptr [0x12c6e6cc] */
  ECX = (r32((uint32_t)(0x12c6e6cc)));
  /* 12c4e7ad push ecx */
  push32((uint32_t)(ECX));
  /* 12c4e7ae call 0x12c435e0 */
  push32(0x12c4e7b3u); f_12c435e0();
  /* 12c4e7b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e7b6 mov dword ptr [0x12c6e6c8], 0 */
  w32((uint32_t)(0x12c6e6c8), (0x0u));
  /* 12c4e7c0 mov dword ptr [0x12c6e6cc], 0 */
  w32((uint32_t)(0x12c6e6cc), (0x0u));
  /* 12c4e7ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c4e7cc:;
  /* 12c4e7cc mov esp, ebp */
  ESP = (EBP);
  /* 12c4e7ce pop ebp */
  EBP = (pop32());
  /* 12c4e7cf ret  */
  ESPCHK(0x12c4e430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7d0 @ 0x12c4e7d0 (7 bytes, 5 insns) */
void f_12c4e7d0(void) {
  FTRACE(0x12c4e7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4e7d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4e7d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e7d5 pop ebp */
  EBP = (pop32());
  /* 12c4e7d6 ret  */
  ESPCHK(0x12c4e7d0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12c4e7e0 (129 bytes, 56 insns) */
void f_12c4e7e0(void) {
  FTRACE(0x12c4e7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e7e0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c4e7e4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c4e7e8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12c4e7ee jne 0x12c4e82c */
  if (!C.zf) goto L_12c4e82c;
L_12c4e7f0:;
  /* 12c4e7f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c4e7f2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4e7f4 jne 0x12c4e824 */
  if (!C.zf) goto L_12c4e824;
  /* 12c4e7f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c4e7f8 je 0x12c4e820 */
  if (C.zf) goto L_12c4e820;
  /* 12c4e7fa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4e7fd jne 0x12c4e824 */
  if (!C.zf) goto L_12c4e824;
  /* 12c4e7ff or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c4e801 je 0x12c4e820 */
  if (C.zf) goto L_12c4e820;
  /* 12c4e803 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c4e806 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4e809 jne 0x12c4e824 */
  if (!C.zf) goto L_12c4e824;
  /* 12c4e80b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c4e80d je 0x12c4e820 */
  if (C.zf) goto L_12c4e820;
  /* 12c4e80f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4e812 jne 0x12c4e824 */
  if (!C.zf) goto L_12c4e824;
  /* 12c4e814 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e817 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e81a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c4e81c jne 0x12c4e7f0 */
  if (!C.zf) goto L_12c4e7f0;
  /* 12c4e81e mov edi, edi */
  EDI = (EDI);
L_12c4e820:;
  /* 12c4e820 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e822 ret  */
  ESPCHK(0x12c4e7e0u, _esp0);
  ESP += 4; return;
  /* 12c4e823 nop  */
  /* nop */
L_12c4e824:;
  /* 12c4e824 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4e826 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c4e828 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12c4e829 ret  */
  ESPCHK(0x12c4e7e0u, _esp0);
  ESP += 4; return;
  /* 12c4e82a mov edi, edi */
  EDI = (EDI);
L_12c4e82c:;
  /* 12c4e82c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12c4e832 je 0x12c4e848 */
  if (C.zf) goto L_12c4e848;
  /* 12c4e834 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4e836 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c4e837 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4e839 jne 0x12c4e824 */
  if (!C.zf) goto L_12c4e824;
  /* 12c4e83b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c4e83c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c4e83e je 0x12c4e820 */
  if (C.zf) goto L_12c4e820;
  /* 12c4e840 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12c4e846 je 0x12c4e7f0 */
  if (C.zf) goto L_12c4e7f0;
L_12c4e848:;
  /* 12c4e848 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12c4e84b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e84e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4e850 jne 0x12c4e824 */
  if (!C.zf) goto L_12c4e824;
  /* 12c4e852 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c4e854 je 0x12c4e820 */
  if (C.zf) goto L_12c4e820;
  /* 12c4e856 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4e859 jne 0x12c4e824 */
  if (!C.zf) goto L_12c4e824;
  /* 12c4e85b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12c4e85d je 0x12c4e820 */
  if (C.zf) goto L_12c4e820;
  /* 12c4e85f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e862 jmp 0x12c4e7f0 */
  goto L_12c4e7f0;
}

/* FUN_1000e870 @ 0x12c4e870 (62 bytes, 35 insns) */
void f_12c4e870(void) {
  FTRACE(0x12c4e870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e870 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4e871 mov ebp, esp */
  EBP = (ESP);
  /* 12c4e873 push esi */
  push32((uint32_t)(ESI));
  /* 12c4e874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e876 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e877 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e878 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e879 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e87a push eax */
  push32((uint32_t)(EAX));
  /* 12c4e87b push eax */
  push32((uint32_t)(EAX));
  /* 12c4e87c push eax */
  push32((uint32_t)(EAX));
  /* 12c4e87d push eax */
  push32((uint32_t)(EAX));
  /* 12c4e87e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4e881 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c4e884:;
  /* 12c4e884 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4e886 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c4e888 je 0x12c4e891 */
  if (C.zf) goto L_12c4e891;
  /* 12c4e88a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c4e88b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12c4e88b");
  /* 12c4e88f jmp 0x12c4e884 */
  goto L_12c4e884;
L_12c4e891:;
  /* 12c4e891 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e894 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e897 nop  */
  /* nop */
L_12c4e898:;
  /* 12c4e898 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c4e899 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c4e89b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c4e89d je 0x12c4e8a6 */
  if (C.zf) goto L_12c4e8a6;
  /* 12c4e89f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c4e8a0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12c4e8a0");
  /* 12c4e8a4 jae 0x12c4e898 */
  if (!C.cf) goto L_12c4e898;
L_12c4e8a6:;
  /* 12c4e8a6 mov eax, ecx */
  EAX = (ECX);
  /* 12c4e8a8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e8ab pop esi */
  ESI = (pop32());
  /* 12c4e8ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4e8ad ret  */
  ESPCHK(0x12c4e870u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12c4e8b0 (56 bytes, 31 insns) */
void f_12c4e8b0(void) {
  FTRACE(0x12c4e8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4e8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4e8b3 push edi */
  push32((uint32_t)(EDI));
  /* 12c4e8b4 push esi */
  push32((uint32_t)(ESI));
  /* 12c4e8b5 push ebx */
  push32((uint32_t)(EBX));
  /* 12c4e8b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4e8b9 jecxz 0x12c4e8e1 */
  x86_unimpl("jecxz @ 0x12c4e8b9");
  /* 12c4e8bb mov ebx, ecx */
  EBX = (ECX);
  /* 12c4e8bd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e8c0 mov esi, edi */
  ESI = (EDI);
  /* 12c4e8c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e8c4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12c4e8c6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4e8c8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e8ca mov edi, esi */
  EDI = (ESI);
  /* 12c4e8cc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4e8cf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12c4e8d1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12c4e8d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4e8d6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12c4e8d9 ja 0x12c4e8df */
  if ((!C.cf&&!C.zf)) goto L_12c4e8df;
  /* 12c4e8db je 0x12c4e8e1 */
  if (C.zf) goto L_12c4e8e1;
  /* 12c4e8dd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c4e8de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12c4e8df:;
  /* 12c4e8df not ecx */
  ECX = (~(ECX));
L_12c4e8e1:;
  /* 12c4e8e1 mov eax, ecx */
  EAX = (ECX);
  /* 12c4e8e3 pop ebx */
  EBX = (pop32());
  /* 12c4e8e4 pop esi */
  ESI = (pop32());
  /* 12c4e8e5 pop edi */
  EDI = (pop32());
  /* 12c4e8e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4e8e7 ret  */
  ESPCHK(0x12c4e8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8f0 @ 0x12c4e8f0 (58 bytes, 32 insns) */
void f_12c4e8f0(void) {
  FTRACE(0x12c4e8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4e8f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4e8f3 push esi */
  push32((uint32_t)(ESI));
  /* 12c4e8f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4e8f6 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e8f7 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e8f8 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e8f9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4e8fa push eax */
  push32((uint32_t)(EAX));
  /* 12c4e8fb push eax */
  push32((uint32_t)(EAX));
  /* 12c4e8fc push eax */
  push32((uint32_t)(EAX));
  /* 12c4e8fd push eax */
  push32((uint32_t)(EAX));
  /* 12c4e8fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4e901 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12c4e904:;
  /* 12c4e904 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4e906 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c4e908 je 0x12c4e911 */
  if (C.zf) goto L_12c4e911;
  /* 12c4e90a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12c4e90b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12c4e90b");
  /* 12c4e90f jmp 0x12c4e904 */
  goto L_12c4e904;
L_12c4e911:;
  /* 12c4e911 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12c4e914:;
  /* 12c4e914 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c4e916 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12c4e918 je 0x12c4e924 */
  if (C.zf) goto L_12c4e924;
  /* 12c4e91a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c4e91b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12c4e91b");
  /* 12c4e91f jae 0x12c4e914 */
  if (!C.cf) goto L_12c4e914;
  /* 12c4e921 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12c4e924:;
  /* 12c4e924 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e927 pop esi */
  ESI = (pop32());
  /* 12c4e928 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12c4e929 ret  */
  ESPCHK(0x12c4e8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e930 @ 0x12c4e930 (512 bytes, 147 insns) */
void f_12c4e930(void) {
  FTRACE(0x12c4e930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4e930 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4e931 mov ebp, esp */
  EBP = (ESP);
  /* 12c4e933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4e936 cmp dword ptr [0x12c6e714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e93d jne 0x12c4e962 */
  if (!C.zf) goto L_12c4e962;
  /* 12c4e93f call 0x12c4f400 */
  push32(0x12c4e944u); f_12c4f400();
  /* 12c4e944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4e946 je 0x12c4e952 */
  if (C.zf) goto L_12c4e952;
  /* 12c4e948 mov eax, dword ptr [0x12c70250] */
  EAX = (r32((uint32_t)(0x12c70250)));
  /* 12c4e94d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4e950 jmp 0x12c4e959 */
  goto L_12c4e959;
L_12c4e952:;
  /* 12c4e952 mov dword ptr [ebp - 8], 0x12c4f450 */
  w32((uint32_t)(EBP + -0x8), (0x12c4f450u));
L_12c4e959:;
  /* 12c4e959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4e95c mov dword ptr [0x12c6e714], ecx */
  w32((uint32_t)(0x12c6e714), (ECX));
L_12c4e962:;
  /* 12c4e962 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e966 jne 0x12c4e972 */
  if (!C.zf) goto L_12c4e972;
  /* 12c4e968 call 0x12c4f250 */
  push32(0x12c4e96du); f_12c4f250();
  /* 12c4e96d jmp 0x12c4ea3e */
  goto L_12c4ea3e;
L_12c4e972:;
  /* 12c4e972 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e975 mov dword ptr [0x12c6e704], edx */
  w32((uint32_t)(0x12c6e704), (EDX));
  /* 12c4e97b cmp dword ptr [0x12c6e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e982 je 0x12c4e9a4 */
  if (C.zf) goto L_12c4e9a4;
  /* 12c4e984 mov eax, dword ptr [0x12c6e704] */
  EAX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4e989 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4e98c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4e98e je 0x12c4e9a4 */
  if (C.zf) goto L_12c4e9a4;
  /* 12c4e990 push 0x12c6e704 */
  push32((uint32_t)(0x12c6e704u));
  /* 12c4e995 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c4e997 push 0x12c6da90 */
  push32((uint32_t)(0x12c6da90u));
  /* 12c4e99c call 0x12c4eb30 */
  push32(0x12c4e9a1u); f_12c4eb30();
  /* 12c4e9a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4e9a4:;
  /* 12c4e9a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4e9a7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4e9aa mov dword ptr [0x12c6e708], edx */
  w32((uint32_t)(0x12c6e708), (EDX));
  /* 12c4e9b0 cmp dword ptr [0x12c6e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e9b7 je 0x12c4e9d9 */
  if (C.zf) goto L_12c4e9d9;
  /* 12c4e9b9 mov eax, dword ptr [0x12c6e708] */
  EAX = (r32((uint32_t)(0x12c6e708)));
  /* 12c4e9be movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4e9c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4e9c3 je 0x12c4e9d9 */
  if (C.zf) goto L_12c4e9d9;
  /* 12c4e9c5 push 0x12c6e708 */
  push32((uint32_t)(0x12c6e708u));
  /* 12c4e9ca push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12c4e9cc push 0x12c6d9d8 */
  push32((uint32_t)(0x12c6d9d8u));
  /* 12c4e9d1 call 0x12c4eb30 */
  push32(0x12c4e9d6u); f_12c4eb30();
  /* 12c4e9d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4e9d9:;
  /* 12c4e9d9 mov dword ptr [0x12c6e70c], 0 */
  w32((uint32_t)(0x12c6e70c), (0x0u));
  /* 12c4e9e3 cmp dword ptr [0x12c6e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4e9ea je 0x12c4ea1d */
  if (C.zf) goto L_12c4ea1d;
  /* 12c4e9ec mov edx, dword ptr [0x12c6e704] */
  EDX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4e9f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c4e9f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4e9f7 je 0x12c4ea1d */
  if (C.zf) goto L_12c4ea1d;
  /* 12c4e9f9 cmp dword ptr [0x12c6e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ea00 je 0x12c4ea16 */
  if (C.zf) goto L_12c4ea16;
  /* 12c4ea02 mov ecx, dword ptr [0x12c6e708] */
  ECX = (r32((uint32_t)(0x12c6e708)));
  /* 12c4ea08 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c4ea0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4ea0d je 0x12c4ea16 */
  if (C.zf) goto L_12c4ea16;
  /* 12c4ea0f call 0x12c4ebc0 */
  push32(0x12c4ea14u); f_12c4ebc0();
  /* 12c4ea14 jmp 0x12c4ea1b */
  goto L_12c4ea1b;
L_12c4ea16:;
  /* 12c4ea16 call 0x12c4efb0 */
  push32(0x12c4ea1bu); f_12c4efb0();
L_12c4ea1b:;
  /* 12c4ea1b jmp 0x12c4ea3e */
  goto L_12c4ea3e;
L_12c4ea1d:;
  /* 12c4ea1d cmp dword ptr [0x12c6e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ea24 je 0x12c4ea39 */
  if (C.zf) goto L_12c4ea39;
  /* 12c4ea26 mov eax, dword ptr [0x12c6e708] */
  EAX = (r32((uint32_t)(0x12c6e708)));
  /* 12c4ea2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4ea2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4ea30 je 0x12c4ea39 */
  if (C.zf) goto L_12c4ea39;
  /* 12c4ea32 call 0x12c4f150 */
  push32(0x12c4ea37u); f_12c4f150();
  /* 12c4ea37 jmp 0x12c4ea3e */
  goto L_12c4ea3e;
L_12c4ea39:;
  /* 12c4ea39 call 0x12c4f250 */
  push32(0x12c4ea3eu); f_12c4f250();
L_12c4ea3e:;
  /* 12c4ea3e cmp dword ptr [0x12c6e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ea45 jne 0x12c4ea4e */
  if (!C.zf) goto L_12c4ea4e;
  /* 12c4ea47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ea49 jmp 0x12c4eb2c */
  goto L_12c4eb2c;
L_12c4ea4e:;
  /* 12c4ea4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ea51 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ea57 push edx */
  push32((uint32_t)(EDX));
  /* 12c4ea58 call 0x12c4f280 */
  push32(0x12c4ea5du); f_12c4f280();
  /* 12c4ea5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ea60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4ea63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ea67 je 0x12c4ea7c */
  if (C.zf) goto L_12c4ea7c;
  /* 12c4ea69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4ea6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ea71 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ea72 call dword ptr [0x12c702c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c702c8))), 0x12c4ea78u);
  /* 12c4ea78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ea7a jne 0x12c4ea83 */
  if (!C.zf) goto L_12c4ea83;
L_12c4ea7c:;
  /* 12c4ea7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ea7e jmp 0x12c4eb2c */
  goto L_12c4eb2c;
L_12c4ea83:;
  /* 12c4ea83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4ea85 mov ecx, dword ptr [0x12c6e6f4] */
  ECX = (r32((uint32_t)(0x12c6e6f4)));
  /* 12c4ea8b push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ea8c call dword ptr [0x12c70340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70340))), 0x12c4ea92u);
  /* 12c4ea92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ea94 jne 0x12c4ea9d */
  if (!C.zf) goto L_12c4ea9d;
  /* 12c4ea96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ea98 jmp 0x12c4eb2c */
  goto L_12c4eb2c;
L_12c4ea9d:;
  /* 12c4ea9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4eaa1 je 0x12c4eac8 */
  if (C.zf) goto L_12c4eac8;
  /* 12c4eaa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4eaa6 mov ax, word ptr [0x12c6e6f4] */
  AX = (r16((uint32_t)(0x12c6e6f4)));
  /* 12c4eaac mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12c4eaaf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4eab2 mov dx, word ptr [0x12c6e710] */
  DX = (r16((uint32_t)(0x12c6e710)));
  /* 12c4eab9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12c4eabd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4eac0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12c4eac4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12c4eac8:;
  /* 12c4eac8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4eacc je 0x12c4eb27 */
  if (C.zf) goto L_12c4eb27;
  /* 12c4eace push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c4ead0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4ead3 push edx */
  push32((uint32_t)(EDX));
  /* 12c4ead4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12c4ead9 mov eax, dword ptr [0x12c6e6f4] */
  EAX = (r32((uint32_t)(0x12c6e6f4)));
  /* 12c4eade push eax */
  push32((uint32_t)(EAX));
  /* 12c4eadf call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4eae5u);
  /* 12c4eae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4eae7 jne 0x12c4eaed */
  if (!C.zf) goto L_12c4eaed;
  /* 12c4eae9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4eaeb jmp 0x12c4eb2c */
  goto L_12c4eb2c;
L_12c4eaed:;
  /* 12c4eaed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12c4eaef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4eaf2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4eaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4eaf6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12c4eafb mov edx, dword ptr [0x12c6e710] */
  EDX = (r32((uint32_t)(0x12c6e710)));
  /* 12c4eb01 push edx */
  push32((uint32_t)(EDX));
  /* 12c4eb02 call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4eb08u);
  /* 12c4eb08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4eb0a jne 0x12c4eb10 */
  if (!C.zf) goto L_12c4eb10;
  /* 12c4eb0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4eb0e jmp 0x12c4eb2c */
  goto L_12c4eb2c;
L_12c4eb10:;
  /* 12c4eb10 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c4eb12 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4eb15 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4eb1a push eax */
  push32((uint32_t)(EAX));
  /* 12c4eb1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4eb1e push ecx */
  push32((uint32_t)(ECX));
  /* 12c4eb1f call 0x12c45690 */
  push32(0x12c4eb24u); f_12c45690();
  /* 12c4eb24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4eb27:;
  /* 12c4eb27 mov eax, 1 */
  EAX = (0x1u);
L_12c4eb2c:;
  /* 12c4eb2c mov esp, ebp */
  ESP = (EBP);
  /* 12c4eb2e pop ebp */
  EBP = (pop32());
  /* 12c4eb2f ret  */
  ESPCHK(0x12c4e930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb30 @ 0x12c4eb30 (130 bytes, 47 insns) */
void f_12c4eb30(void) {
  FTRACE(0x12c4eb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4eb30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4eb31 mov ebp, esp */
  EBP = (ESP);
  /* 12c4eb33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4eb36 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c4eb3d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12c4eb44:;
  /* 12c4eb44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4eb47 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4eb4a jg 0x12c4ebae */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4ebae;
  /* 12c4eb4c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4eb50 je 0x12c4ebae */
  if (C.zf) goto L_12c4ebae;
  /* 12c4eb52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4eb55 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4eb58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c4eb59 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4eb5b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c4eb5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4eb60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4eb63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4eb66 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12c4eb69 push eax */
  push32((uint32_t)(EAX));
  /* 12c4eb6a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4eb6d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c4eb6f push edx */
  push32((uint32_t)(EDX));
  /* 12c4eb70 call 0x12c51220 */
  push32(0x12c4eb75u); f_12c51220();
  /* 12c4eb75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4eb78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4eb7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4eb7f jne 0x12c4eb92 */
  if (!C.zf) goto L_12c4eb92;
  /* 12c4eb81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4eb84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4eb87 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12c4eb8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4eb8e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c4eb90 jmp 0x12c4ebac */
  goto L_12c4ebac;
L_12c4eb92:;
  /* 12c4eb92 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4eb96 jge 0x12c4eba3 */
  if ((C.sf==C.of)) goto L_12c4eba3;
  /* 12c4eb98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4eb9b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4eb9e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12c4eba1 jmp 0x12c4ebac */
  goto L_12c4ebac;
L_12c4eba3:;
  /* 12c4eba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4eba6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4eba9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c4ebac:;
  /* 12c4ebac jmp 0x12c4eb44 */
  goto L_12c4eb44;
L_12c4ebae:;
  /* 12c4ebae mov esp, ebp */
  ESP = (EBP);
  /* 12c4ebb0 pop ebp */
  EBP = (pop32());
  /* 12c4ebb1 ret  */
  ESPCHK(0x12c4eb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebc0 @ 0x12c4ebc0 (186 bytes, 50 insns) */
void f_12c4ebc0(void) {
  FTRACE(0x12c4ebc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4ebc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4ebc1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4ebc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ebc4 mov eax, dword ptr [0x12c6e704] */
  EAX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4ebc9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ebca call 0x12c45980 */
  push32(0x12c4ebcfu); f_12c45980();
  /* 12c4ebcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ebd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4ebd4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ebd7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12c4ebda mov dword ptr [0x12c6e700], ecx */
  w32((uint32_t)(0x12c6e700), (ECX));
  /* 12c4ebe0 mov edx, dword ptr [0x12c6e708] */
  EDX = (r32((uint32_t)(0x12c6e708)));
  /* 12c4ebe6 push edx */
  push32((uint32_t)(EDX));
  /* 12c4ebe7 call 0x12c45980 */
  push32(0x12c4ebecu); f_12c45980();
  /* 12c4ebec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ebef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4ebf1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ebf4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12c4ebf7 mov dword ptr [0x12c6e6f8], ecx */
  w32((uint32_t)(0x12c6e6f8), (ECX));
  /* 12c4ebfd mov dword ptr [0x12c6e6f4], 0 */
  w32((uint32_t)(0x12c6e6f4), (0x0u));
  /* 12c4ec07 cmp dword ptr [0x12c6e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ec0e je 0x12c4ec19 */
  if (C.zf) goto L_12c4ec19;
  /* 12c4ec10 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12c4ec17 jmp 0x12c4ec2b */
  goto L_12c4ec2b;
L_12c4ec19:;
  /* 12c4ec19 mov edx, dword ptr [0x12c6e704] */
  EDX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4ec1f push edx */
  push32((uint32_t)(EDX));
  /* 12c4ec20 call 0x12c4f660 */
  push32(0x12c4ec25u); f_12c4f660();
  /* 12c4ec25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ec28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4ec2b:;
  /* 12c4ec2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4ec2e mov dword ptr [0x12c6e6fc], eax */
  w32((uint32_t)(0x12c6e6fc), (EAX));
  /* 12c4ec33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4ec35 push 0x12c4ec80 */
  push32((uint32_t)(0x12c4ec80u));
  /* 12c4ec3a call dword ptr [0x12c7024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7024c))), 0x12c4ec40u);
  /* 12c4ec40 mov ecx, dword ptr [0x12c6e70c] */
  ECX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ec46 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4ec4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4ec4e je 0x12c4ec6c */
  if (C.zf) goto L_12c4ec6c;
  /* 12c4ec50 mov edx, dword ptr [0x12c6e70c] */
  EDX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ec56 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ec5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4ec5e je 0x12c4ec6c */
  if (C.zf) goto L_12c4ec6c;
  /* 12c4ec60 mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ec65 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ec68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ec6a jne 0x12c4ec76 */
  if (!C.zf) goto L_12c4ec76;
L_12c4ec6c:;
  /* 12c4ec6c mov dword ptr [0x12c6e70c], 0 */
  w32((uint32_t)(0x12c6e70c), (0x0u));
L_12c4ec76:;
  /* 12c4ec76 mov esp, ebp */
  ESP = (EBP);
  /* 12c4ec78 pop ebp */
  EBP = (pop32());
  /* 12c4ec79 ret  */
  ESPCHK(0x12c4ebc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec80 @ 0x12c4ec80 (804 bytes, 220 insns) */
void f_12c4ec80(void) {
  FTRACE(0x12c4ec80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4ec80 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4ec81 mov ebp, esp */
  EBP = (ESP);
  /* 12c4ec83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ec86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4ec89 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ec8a call 0x12c4f5e0 */
  push32(0x12c4ec8fu); f_12c4f5e0();
  /* 12c4ec8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ec92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12c4ec95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c4ec97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c4ec9a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ec9b mov edx, dword ptr [0x12c6e6f8] */
  EDX = (r32((uint32_t)(0x12c6e6f8)));
  /* 12c4eca1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4eca3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4eca5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ecab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ecb1 push edx */
  push32((uint32_t)(EDX));
  /* 12c4ecb2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4ecb5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ecb6 call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4ecbcu);
  /* 12c4ecbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ecbe jne 0x12c4ecd4 */
  if (!C.zf) goto L_12c4ecd4;
  /* 12c4ecc0 mov dword ptr [0x12c6e70c], 0 */
  w32((uint32_t)(0x12c6e70c), (0x0u));
  /* 12c4ecca mov eax, 1 */
  EAX = (0x1u);
  /* 12c4eccf jmp 0x12c4ef9e */
  goto L_12c4ef9e;
L_12c4ecd4:;
  /* 12c4ecd4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c4ecd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ecd8 mov edx, dword ptr [0x12c6e708] */
  EDX = (r32((uint32_t)(0x12c6e708)));
  /* 12c4ecde push edx */
  push32((uint32_t)(EDX));
  /* 12c4ecdf call 0x12c51220 */
  push32(0x12c4ece4u); f_12c51220();
  /* 12c4ece4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ece7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ece9 jne 0x12c4ee0f */
  if (!C.zf) goto L_12c4ee0f;
  /* 12c4ecef push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c4ecf1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c4ecf4 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ecf5 mov ecx, dword ptr [0x12c6e700] */
  ECX = (r32((uint32_t)(0x12c6e700)));
  /* 12c4ecfb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4ecfd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ecff and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4ed05 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ed0b push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ed0c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4ed0f push edx */
  push32((uint32_t)(EDX));
  /* 12c4ed10 call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4ed16u);
  /* 12c4ed16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ed18 jne 0x12c4ed2e */
  if (!C.zf) goto L_12c4ed2e;
  /* 12c4ed1a mov dword ptr [0x12c6e70c], 0 */
  w32((uint32_t)(0x12c6e70c), (0x0u));
  /* 12c4ed24 mov eax, 1 */
  EAX = (0x1u);
  /* 12c4ed29 jmp 0x12c4ef9e */
  goto L_12c4ef9e;
L_12c4ed2e:;
  /* 12c4ed2e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c4ed31 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ed32 mov ecx, dword ptr [0x12c6e704] */
  ECX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4ed38 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ed39 call 0x12c51220 */
  push32(0x12c4ed3eu); f_12c51220();
  /* 12c4ed3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ed41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ed43 jne 0x12c4ed70 */
  if (!C.zf) goto L_12c4ed70;
  /* 12c4ed45 mov edx, dword ptr [0x12c6e70c] */
  EDX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ed4b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ed51 mov dword ptr [0x12c6e70c], edx */
  w32((uint32_t)(0x12c6e70c), (EDX));
  /* 12c4ed57 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4ed5a mov dword ptr [0x12c6e710], eax */
  w32((uint32_t)(0x12c6e710), (EAX));
  /* 12c4ed5f mov ecx, dword ptr [0x12c6e710] */
  ECX = (r32((uint32_t)(0x12c6e710)));
  /* 12c4ed65 mov dword ptr [0x12c6e6f4], ecx */
  w32((uint32_t)(0x12c6e6f4), (ECX));
  /* 12c4ed6b jmp 0x12c4ee0f */
  goto L_12c4ee0f;
L_12c4ed70:;
  /* 12c4ed70 mov edx, dword ptr [0x12c6e70c] */
  EDX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ed76 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ed79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4ed7b jne 0x12c4ee0f */
  if (!C.zf) goto L_12c4ee0f;
  /* 12c4ed81 cmp dword ptr [0x12c6e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ed88 je 0x12c4eddd */
  if (C.zf) goto L_12c4eddd;
  /* 12c4ed8a mov eax, dword ptr [0x12c6e6fc] */
  EAX = (r32((uint32_t)(0x12c6e6fc)));
  /* 12c4ed8f push eax */
  push32((uint32_t)(EAX));
  /* 12c4ed90 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c4ed93 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ed94 mov edx, dword ptr [0x12c6e704] */
  EDX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4ed9a push edx */
  push32((uint32_t)(EDX));
  /* 12c4ed9b call 0x12c512f0 */
  push32(0x12c4eda0u); f_12c512f0();
  /* 12c4eda0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4eda3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4eda5 jne 0x12c4eddd */
  if (!C.zf) goto L_12c4eddd;
  /* 12c4eda7 mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4edac or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12c4edae mov dword ptr [0x12c6e70c], eax */
  w32((uint32_t)(0x12c6e70c), (EAX));
  /* 12c4edb3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4edb6 mov dword ptr [0x12c6e710], ecx */
  w32((uint32_t)(0x12c6e710), (ECX));
  /* 12c4edbc mov edx, dword ptr [0x12c6e704] */
  EDX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4edc2 push edx */
  push32((uint32_t)(EDX));
  /* 12c4edc3 call 0x12c45980 */
  push32(0x12c4edc8u); f_12c45980();
  /* 12c4edc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4edcb cmp eax, dword ptr [0x12c6e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4edd1 jne 0x12c4eddb */
  if (!C.zf) goto L_12c4eddb;
  /* 12c4edd3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4edd6 mov dword ptr [0x12c6e6f4], eax */
  w32((uint32_t)(0x12c6e6f4), (EAX));
L_12c4eddb:;
  /* 12c4eddb jmp 0x12c4ee0f */
  goto L_12c4ee0f;
L_12c4eddd:;
  /* 12c4eddd mov ecx, dword ptr [0x12c6e70c] */
  ECX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ede3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4ede6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4ede8 jne 0x12c4ee0f */
  if (!C.zf) goto L_12c4ee0f;
  /* 12c4edea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4eded push edx */
  push32((uint32_t)(EDX));
  /* 12c4edee call 0x12c4f320 */
  push32(0x12c4edf3u); f_12c4f320();
  /* 12c4edf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4edf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4edf8 je 0x12c4ee0f */
  if (C.zf) goto L_12c4ee0f;
  /* 12c4edfa mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4edff or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12c4ee01 mov dword ptr [0x12c6e70c], eax */
  w32((uint32_t)(0x12c6e70c), (EAX));
  /* 12c4ee06 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4ee09 mov dword ptr [0x12c6e710], ecx */
  w32((uint32_t)(0x12c6e710), (ECX));
L_12c4ee0f:;
  /* 12c4ee0f mov edx, dword ptr [0x12c6e70c] */
  EDX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ee15 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4ee1b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ee21 je 0x12c4ef91 */
  if (C.zf) goto L_12c4ef91;
  /* 12c4ee27 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c4ee29 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c4ee2c push eax */
  push32((uint32_t)(EAX));
  /* 12c4ee2d mov ecx, dword ptr [0x12c6e700] */
  ECX = (r32((uint32_t)(0x12c6e700)));
  /* 12c4ee33 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4ee35 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ee37 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4ee3d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ee43 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ee44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4ee47 push edx */
  push32((uint32_t)(EDX));
  /* 12c4ee48 call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4ee4eu);
  /* 12c4ee4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ee50 jne 0x12c4ee66 */
  if (!C.zf) goto L_12c4ee66;
  /* 12c4ee52 mov dword ptr [0x12c6e70c], 0 */
  w32((uint32_t)(0x12c6e70c), (0x0u));
  /* 12c4ee5c mov eax, 1 */
  EAX = (0x1u);
  /* 12c4ee61 jmp 0x12c4ef9e */
  goto L_12c4ef9e;
L_12c4ee66:;
  /* 12c4ee66 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c4ee69 push eax */
  push32((uint32_t)(EAX));
  /* 12c4ee6a mov ecx, dword ptr [0x12c6e704] */
  ECX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4ee70 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ee71 call 0x12c51220 */
  push32(0x12c4ee76u); f_12c51220();
  /* 12c4ee76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ee79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ee7b jne 0x12c4ef30 */
  if (!C.zf) goto L_12c4ef30;
  /* 12c4ee81 mov edx, dword ptr [0x12c6e70c] */
  EDX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ee87 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12c4ee8a mov dword ptr [0x12c6e70c], edx */
  w32((uint32_t)(0x12c6e70c), (EDX));
  /* 12c4ee90 cmp dword ptr [0x12c6e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ee97 je 0x12c4eeba */
  if (C.zf) goto L_12c4eeba;
  /* 12c4ee99 mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ee9e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12c4eea1 mov dword ptr [0x12c6e70c], eax */
  w32((uint32_t)(0x12c6e70c), (EAX));
  /* 12c4eea6 cmp dword ptr [0x12c6e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4eead jne 0x12c4eeb8 */
  if (!C.zf) goto L_12c4eeb8;
  /* 12c4eeaf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4eeb2 mov dword ptr [0x12c6e6f4], ecx */
  w32((uint32_t)(0x12c6e6f4), (ECX));
L_12c4eeb8:;
  /* 12c4eeb8 jmp 0x12c4ef2e */
  goto L_12c4ef2e;
L_12c4eeba:;
  /* 12c4eeba cmp dword ptr [0x12c6e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4eec1 je 0x12c4ef0f */
  if (C.zf) goto L_12c4ef0f;
  /* 12c4eec3 mov edx, dword ptr [0x12c6e704] */
  EDX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4eec9 push edx */
  push32((uint32_t)(EDX));
  /* 12c4eeca call 0x12c45980 */
  push32(0x12c4eecfu); f_12c45980();
  /* 12c4eecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4eed2 cmp eax, dword ptr [0x12c6e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4eed8 jne 0x12c4ef0f */
  if (!C.zf) goto L_12c4ef0f;
  /* 12c4eeda push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4eedc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4eedf push eax */
  push32((uint32_t)(EAX));
  /* 12c4eee0 call 0x12c4f370 */
  push32(0x12c4eee5u); f_12c4f370();
  /* 12c4eee5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4eee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4eeea je 0x12c4ef0d */
  if (C.zf) goto L_12c4ef0d;
  /* 12c4eeec mov ecx, dword ptr [0x12c6e70c] */
  ECX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4eef2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12c4eef5 mov dword ptr [0x12c6e70c], ecx */
  w32((uint32_t)(0x12c6e70c), (ECX));
  /* 12c4eefb cmp dword ptr [0x12c6e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ef02 jne 0x12c4ef0d */
  if (!C.zf) goto L_12c4ef0d;
  /* 12c4ef04 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4ef07 mov dword ptr [0x12c6e6f4], edx */
  w32((uint32_t)(0x12c6e6f4), (EDX));
L_12c4ef0d:;
  /* 12c4ef0d jmp 0x12c4ef2e */
  goto L_12c4ef2e;
L_12c4ef0f:;
  /* 12c4ef0f mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ef14 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12c4ef17 mov dword ptr [0x12c6e70c], eax */
  w32((uint32_t)(0x12c6e70c), (EAX));
  /* 12c4ef1c cmp dword ptr [0x12c6e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ef23 jne 0x12c4ef2e */
  if (!C.zf) goto L_12c4ef2e;
  /* 12c4ef25 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4ef28 mov dword ptr [0x12c6e6f4], ecx */
  w32((uint32_t)(0x12c6e6f4), (ECX));
L_12c4ef2e:;
  /* 12c4ef2e jmp 0x12c4ef91 */
  goto L_12c4ef91;
L_12c4ef30:;
  /* 12c4ef30 cmp dword ptr [0x12c6e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ef37 jne 0x12c4ef91 */
  if (!C.zf) goto L_12c4ef91;
  /* 12c4ef39 cmp dword ptr [0x12c6e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ef40 je 0x12c4ef91 */
  if (C.zf) goto L_12c4ef91;
  /* 12c4ef42 mov edx, dword ptr [0x12c6e6fc] */
  EDX = (r32((uint32_t)(0x12c6e6fc)));
  /* 12c4ef48 push edx */
  push32((uint32_t)(EDX));
  /* 12c4ef49 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12c4ef4c push eax */
  push32((uint32_t)(EAX));
  /* 12c4ef4d mov ecx, dword ptr [0x12c6e704] */
  ECX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4ef53 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4ef54 call 0x12c512f0 */
  push32(0x12c4ef59u); f_12c512f0();
  /* 12c4ef59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ef5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ef5e jne 0x12c4ef91 */
  if (!C.zf) goto L_12c4ef91;
  /* 12c4ef60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4ef62 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4ef65 push edx */
  push32((uint32_t)(EDX));
  /* 12c4ef66 call 0x12c4f370 */
  push32(0x12c4ef6bu); f_12c4f370();
  /* 12c4ef6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4ef6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4ef70 je 0x12c4ef91 */
  if (C.zf) goto L_12c4ef91;
  /* 12c4ef72 mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ef77 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12c4ef7a mov dword ptr [0x12c6e70c], eax */
  w32((uint32_t)(0x12c6e70c), (EAX));
  /* 12c4ef7f cmp dword ptr [0x12c6e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4ef86 jne 0x12c4ef91 */
  if (!C.zf) goto L_12c4ef91;
  /* 12c4ef88 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4ef8b mov dword ptr [0x12c6e6f4], ecx */
  w32((uint32_t)(0x12c6e6f4), (ECX));
L_12c4ef91:;
  /* 12c4ef91 mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4ef96 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4ef99 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4ef9b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4ef9d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12c4ef9e:;
  /* 12c4ef9e mov esp, ebp */
  ESP = (EBP);
  /* 12c4efa0 pop ebp */
  EBP = (pop32());
  /* 12c4efa1 ret 4 */
  ESPCHK(0x12c4ec80u, _esp0);
  ESP += 8; return;
}

/* FUN_1000efb0 @ 0x12c4efb0 (116 bytes, 33 insns) */
void f_12c4efb0(void) {
  FTRACE(0x12c4efb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4efb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4efb1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4efb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4efb4 mov eax, dword ptr [0x12c6e704] */
  EAX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4efb9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4efba call 0x12c45980 */
  push32(0x12c4efbfu); f_12c45980();
  /* 12c4efbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4efc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4efc4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4efc7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12c4efca mov dword ptr [0x12c6e700], ecx */
  w32((uint32_t)(0x12c6e700), (ECX));
  /* 12c4efd0 cmp dword ptr [0x12c6e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4efd7 je 0x12c4efe2 */
  if (C.zf) goto L_12c4efe2;
  /* 12c4efd9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12c4efe0 jmp 0x12c4eff4 */
  goto L_12c4eff4;
L_12c4efe2:;
  /* 12c4efe2 mov edx, dword ptr [0x12c6e704] */
  EDX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4efe8 push edx */
  push32((uint32_t)(EDX));
  /* 12c4efe9 call 0x12c4f660 */
  push32(0x12c4efeeu); f_12c4f660();
  /* 12c4efee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4eff1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c4eff4:;
  /* 12c4eff4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4eff7 mov dword ptr [0x12c6e6fc], eax */
  w32((uint32_t)(0x12c6e6fc), (EAX));
  /* 12c4effc push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4effe push 0x12c4f030 */
  push32((uint32_t)(0x12c4f030u));
  /* 12c4f003 call dword ptr [0x12c7024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7024c))), 0x12c4f009u);
  /* 12c4f009 mov ecx, dword ptr [0x12c6e70c] */
  ECX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4f00f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4f012 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4f014 jne 0x12c4f020 */
  if (!C.zf) goto L_12c4f020;
  /* 12c4f016 mov dword ptr [0x12c6e70c], 0 */
  w32((uint32_t)(0x12c6e70c), (0x0u));
L_12c4f020:;
  /* 12c4f020 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f022 pop ebp */
  EBP = (pop32());
  /* 12c4f023 ret  */
  ESPCHK(0x12c4efb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f030 @ 0x12c4f030 (287 bytes, 86 insns) */
void f_12c4f030(void) {
  FTRACE(0x12c4f030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f030 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f031 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f033 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f039 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f03a call 0x12c4f5e0 */
  push32(0x12c4f03fu); f_12c4f5e0();
  /* 12c4f03f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f042 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12c4f045 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c4f047 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c4f04a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f04b mov edx, dword ptr [0x12c6e700] */
  EDX = (r32((uint32_t)(0x12c6e700)));
  /* 12c4f051 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4f053 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f055 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4f05b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f061 push edx */
  push32((uint32_t)(EDX));
  /* 12c4f062 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4f065 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f066 call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4f06cu);
  /* 12c4f06c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f06e jne 0x12c4f084 */
  if (!C.zf) goto L_12c4f084;
  /* 12c4f070 mov dword ptr [0x12c6e70c], 0 */
  w32((uint32_t)(0x12c6e70c), (0x0u));
  /* 12c4f07a mov eax, 1 */
  EAX = (0x1u);
  /* 12c4f07f jmp 0x12c4f149 */
  goto L_12c4f149;
L_12c4f084:;
  /* 12c4f084 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c4f087 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f088 mov edx, dword ptr [0x12c6e704] */
  EDX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4f08e push edx */
  push32((uint32_t)(EDX));
  /* 12c4f08f call 0x12c51220 */
  push32(0x12c4f094u); f_12c51220();
  /* 12c4f094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f099 jne 0x12c4f0d9 */
  if (!C.zf) goto L_12c4f0d9;
  /* 12c4f09b cmp dword ptr [0x12c6e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f0a2 jne 0x12c4f0b6 */
  if (!C.zf) goto L_12c4f0b6;
  /* 12c4f0a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4f0a6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4f0a9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f0aa call 0x12c4f370 */
  push32(0x12c4f0afu); f_12c4f370();
  /* 12c4f0af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f0b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f0b4 je 0x12c4f0d7 */
  if (C.zf) goto L_12c4f0d7;
L_12c4f0b6:;
  /* 12c4f0b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4f0b9 mov dword ptr [0x12c6e710], ecx */
  w32((uint32_t)(0x12c6e710), (ECX));
  /* 12c4f0bf mov edx, dword ptr [0x12c6e710] */
  EDX = (r32((uint32_t)(0x12c6e710)));
  /* 12c4f0c5 mov dword ptr [0x12c6e6f4], edx */
  w32((uint32_t)(0x12c6e6f4), (EDX));
  /* 12c4f0cb mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4f0d0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12c4f0d2 mov dword ptr [0x12c6e70c], eax */
  w32((uint32_t)(0x12c6e70c), (EAX));
L_12c4f0d7:;
  /* 12c4f0d7 jmp 0x12c4f13c */
  goto L_12c4f13c;
L_12c4f0d9:;
  /* 12c4f0d9 cmp dword ptr [0x12c6e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f0e0 jne 0x12c4f13c */
  if (!C.zf) goto L_12c4f13c;
  /* 12c4f0e2 cmp dword ptr [0x12c6e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c6e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f0e9 je 0x12c4f13c */
  if (C.zf) goto L_12c4f13c;
  /* 12c4f0eb mov ecx, dword ptr [0x12c6e6fc] */
  ECX = (r32((uint32_t)(0x12c6e6fc)));
  /* 12c4f0f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f0f2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12c4f0f5 push edx */
  push32((uint32_t)(EDX));
  /* 12c4f0f6 mov eax, dword ptr [0x12c6e704] */
  EAX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4f0fb push eax */
  push32((uint32_t)(EAX));
  /* 12c4f0fc call 0x12c512f0 */
  push32(0x12c4f101u); f_12c512f0();
  /* 12c4f101 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f106 jne 0x12c4f13c */
  if (!C.zf) goto L_12c4f13c;
  /* 12c4f108 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c4f10a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4f10d push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f10e call 0x12c4f370 */
  push32(0x12c4f113u); f_12c4f370();
  /* 12c4f113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f118 je 0x12c4f13c */
  if (C.zf) goto L_12c4f13c;
  /* 12c4f11a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4f11d mov dword ptr [0x12c6e710], edx */
  w32((uint32_t)(0x12c6e710), (EDX));
  /* 12c4f123 mov eax, dword ptr [0x12c6e710] */
  EAX = (r32((uint32_t)(0x12c6e710)));
  /* 12c4f128 mov dword ptr [0x12c6e6f4], eax */
  w32((uint32_t)(0x12c6e6f4), (EAX));
  /* 12c4f12d mov ecx, dword ptr [0x12c6e70c] */
  ECX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4f133 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4f136 mov dword ptr [0x12c6e70c], ecx */
  w32((uint32_t)(0x12c6e70c), (ECX));
L_12c4f13c:;
  /* 12c4f13c mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4f141 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f144 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4f146 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f148 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12c4f149:;
  /* 12c4f149 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f14b pop ebp */
  EBP = (pop32());
  /* 12c4f14c ret 4 */
  ESPCHK(0x12c4f030u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f150 @ 0x12c4f150 (69 bytes, 20 insns) */
void f_12c4f150(void) {
  FTRACE(0x12c4f150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f150 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f151 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f153 mov eax, dword ptr [0x12c6e708] */
  EAX = (r32((uint32_t)(0x12c6e708)));
  /* 12c4f158 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f159 call 0x12c45980 */
  push32(0x12c4f15eu); f_12c45980();
  /* 12c4f15e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f161 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4f163 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f166 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12c4f169 mov dword ptr [0x12c6e6f8], ecx */
  w32((uint32_t)(0x12c6e6f8), (ECX));
  /* 12c4f16f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4f171 push 0x12c4f1a0 */
  push32((uint32_t)(0x12c4f1a0u));
  /* 12c4f176 call dword ptr [0x12c7024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c7024c))), 0x12c4f17cu);
  /* 12c4f17c mov edx, dword ptr [0x12c6e70c] */
  EDX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4f182 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4f185 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4f187 jne 0x12c4f193 */
  if (!C.zf) goto L_12c4f193;
  /* 12c4f189 mov dword ptr [0x12c6e70c], 0 */
  w32((uint32_t)(0x12c6e70c), (0x0u));
L_12c4f193:;
  /* 12c4f193 pop ebp */
  EBP = (pop32());
  /* 12c4f194 ret  */
  ESPCHK(0x12c4f150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1a0 @ 0x12c4f1a0 (172 bytes, 54 insns) */
void f_12c4f1a0(void) {
  FTRACE(0x12c4f1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f1a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f1a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f1a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f1a9 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f1aa call 0x12c4f5e0 */
  push32(0x12c4f1afu); f_12c4f5e0();
  /* 12c4f1af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f1b2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12c4f1b5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c4f1b7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c4f1ba push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f1bb mov edx, dword ptr [0x12c6e6f8] */
  EDX = (r32((uint32_t)(0x12c6e6f8)));
  /* 12c4f1c1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4f1c3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f1c5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12c4f1cb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f1d1 push edx */
  push32((uint32_t)(EDX));
  /* 12c4f1d2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4f1d5 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f1d6 call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4f1dcu);
  /* 12c4f1dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f1de jne 0x12c4f1f1 */
  if (!C.zf) goto L_12c4f1f1;
  /* 12c4f1e0 mov dword ptr [0x12c6e70c], 0 */
  w32((uint32_t)(0x12c6e70c), (0x0u));
  /* 12c4f1ea mov eax, 1 */
  EAX = (0x1u);
  /* 12c4f1ef jmp 0x12c4f246 */
  goto L_12c4f246;
L_12c4f1f1:;
  /* 12c4f1f1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12c4f1f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f1f5 mov edx, dword ptr [0x12c6e708] */
  EDX = (r32((uint32_t)(0x12c6e708)));
  /* 12c4f1fb push edx */
  push32((uint32_t)(EDX));
  /* 12c4f1fc call 0x12c51220 */
  push32(0x12c4f201u); f_12c51220();
  /* 12c4f201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f206 jne 0x12c4f239 */
  if (!C.zf) goto L_12c4f239;
  /* 12c4f208 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4f20b push eax */
  push32((uint32_t)(EAX));
  /* 12c4f20c call 0x12c4f320 */
  push32(0x12c4f211u); f_12c4f320();
  /* 12c4f211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f216 je 0x12c4f239 */
  if (C.zf) goto L_12c4f239;
  /* 12c4f218 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12c4f21b mov dword ptr [0x12c6e710], ecx */
  w32((uint32_t)(0x12c6e710), (ECX));
  /* 12c4f221 mov edx, dword ptr [0x12c6e710] */
  EDX = (r32((uint32_t)(0x12c6e710)));
  /* 12c4f227 mov dword ptr [0x12c6e6f4], edx */
  w32((uint32_t)(0x12c6e6f4), (EDX));
  /* 12c4f22d mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4f232 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12c4f234 mov dword ptr [0x12c6e70c], eax */
  w32((uint32_t)(0x12c6e70c), (EAX));
L_12c4f239:;
  /* 12c4f239 mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4f23e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f241 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c4f243 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f245 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12c4f246:;
  /* 12c4f246 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f248 pop ebp */
  EBP = (pop32());
  /* 12c4f249 ret 4 */
  ESPCHK(0x12c4f1a0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f250 @ 0x12c4f250 (43 bytes, 11 insns) */
void f_12c4f250(void) {
  FTRACE(0x12c4f250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f250 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f251 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f253 mov eax, dword ptr [0x12c6e70c] */
  EAX = (r32((uint32_t)(0x12c6e70c)));
  /* 12c4f258 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f25d mov dword ptr [0x12c6e70c], eax */
  w32((uint32_t)(0x12c6e70c), (EAX));
  /* 12c4f262 call dword ptr [0x12c70248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70248))), 0x12c4f268u);
  /* 12c4f268 mov dword ptr [0x12c6e710], eax */
  w32((uint32_t)(0x12c6e710), (EAX));
  /* 12c4f26d mov ecx, dword ptr [0x12c6e710] */
  ECX = (r32((uint32_t)(0x12c6e710)));
  /* 12c4f273 mov dword ptr [0x12c6e6f4], ecx */
  w32((uint32_t)(0x12c6e6f4), (ECX));
  /* 12c4f279 pop ebp */
  EBP = (pop32());
  /* 12c4f27a ret  */
  ESPCHK(0x12c4f250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f280 @ 0x12c4f280 (155 bytes, 57 insns) */
void f_12c4f280(void) {
  FTRACE(0x12c4f280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f280 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f281 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f286 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f28a je 0x12c4f2ab */
  if (C.zf) goto L_12c4f2ab;
  /* 12c4f28c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f28f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c4f292 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4f294 je 0x12c4f2ab */
  if (C.zf) goto L_12c4f2ab;
  /* 12c4f296 push 0x12c6a6a4 */
  push32((uint32_t)(0x12c6a6a4u));
  /* 12c4f29b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f29e push edx */
  push32((uint32_t)(EDX));
  /* 12c4f29f call 0x12c4e7e0 */
  push32(0x12c4f2a4u); f_12c4e7e0();
  /* 12c4f2a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f2a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f2a9 jne 0x12c4f2d3 */
  if (!C.zf) goto L_12c4f2d3;
L_12c4f2ab:;
  /* 12c4f2ab push 8 */
  push32((uint32_t)(0x8u));
  /* 12c4f2ad lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c4f2b0 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f2b1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12c4f2b6 mov ecx, dword ptr [0x12c6e710] */
  ECX = (r32((uint32_t)(0x12c6e710)));
  /* 12c4f2bc push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f2bd call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4f2c3u);
  /* 12c4f2c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f2c5 jne 0x12c4f2cb */
  if (!C.zf) goto L_12c4f2cb;
  /* 12c4f2c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f2c9 jmp 0x12c4f317 */
  goto L_12c4f317;
L_12c4f2cb:;
  /* 12c4f2cb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12c4f2ce mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c4f2d1 jmp 0x12c4f30b */
  goto L_12c4f30b;
L_12c4f2d3:;
  /* 12c4f2d3 push 0x12c6a6a0 */
  push32((uint32_t)(0x12c6a6a0u));
  /* 12c4f2d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f2db push eax */
  push32((uint32_t)(EAX));
  /* 12c4f2dc call 0x12c4e7e0 */
  push32(0x12c4f2e1u); f_12c4e7e0();
  /* 12c4f2e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f2e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f2e6 jne 0x12c4f30b */
  if (!C.zf) goto L_12c4f30b;
  /* 12c4f2e8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c4f2ea lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12c4f2ed push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f2ee push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c4f2f0 mov edx, dword ptr [0x12c6e710] */
  EDX = (r32((uint32_t)(0x12c6e710)));
  /* 12c4f2f6 push edx */
  push32((uint32_t)(EDX));
  /* 12c4f2f7 call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4f2fdu);
  /* 12c4f2fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f2ff jne 0x12c4f305 */
  if (!C.zf) goto L_12c4f305;
  /* 12c4f301 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f303 jmp 0x12c4f317 */
  goto L_12c4f317;
L_12c4f305:;
  /* 12c4f305 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12c4f308 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c4f30b:;
  /* 12c4f30b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f30e push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f30f call 0x12c51400 */
  push32(0x12c4f314u); f_12c51400();
  /* 12c4f314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c4f317:;
  /* 12c4f317 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f319 pop ebp */
  EBP = (pop32());
  /* 12c4f31a ret  */
  ESPCHK(0x12c4f280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f320 @ 0x12c4f320 (79 bytes, 26 insns) */
void f_12c4f320(void) {
  FTRACE(0x12c4f320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f320 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f321 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f323 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f326 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12c4f32a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12c4f32e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4f335 jmp 0x12c4f340 */
  goto L_12c4f340;
L_12c4f337:;
  /* 12c4f337 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4f33a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f33d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c4f340:;
  /* 12c4f340 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f344 jae 0x12c4f366 */
  if (!C.cf) goto L_12c4f366;
  /* 12c4f346 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4f349 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4f34f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4f352 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c4f354 mov cx, word ptr [eax*2 + 0x12c6d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12c6d9c4)));
  /* 12c4f35c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f35e jne 0x12c4f364 */
  if (!C.zf) goto L_12c4f364;
  /* 12c4f360 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f362 jmp 0x12c4f36b */
  goto L_12c4f36b;
L_12c4f364:;
  /* 12c4f364 jmp 0x12c4f337 */
  goto L_12c4f337;
L_12c4f366:;
  /* 12c4f366 mov eax, 1 */
  EAX = (0x1u);
L_12c4f36b:;
  /* 12c4f36b mov esp, ebp */
  ESP = (EBP);
  /* 12c4f36d pop ebp */
  EBP = (pop32());
  /* 12c4f36e ret  */
  ESPCHK(0x12c4f320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x12c4f370 (135 bytes, 48 insns) */
void f_12c4f370(void) {
  FTRACE(0x12c4f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f370 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f371 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f373 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f376 push esi */
  push32((uint32_t)(ESI));
  /* 12c4f377 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f37a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f37f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f384 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f389 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12c4f38c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f391 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4f394 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12c4f396 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12c4f399 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f39a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c4f39c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4f39f push edx */
  push32((uint32_t)(EDX));
  /* 12c4f3a0 call dword ptr [0x12c6e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c6e714))), 0x12c4f3a6u);
  /* 12c4f3a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f3a8 jne 0x12c4f3ae */
  if (!C.zf) goto L_12c4f3ae;
  /* 12c4f3aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f3ac jmp 0x12c4f3f2 */
  goto L_12c4f3f2;
L_12c4f3ae:;
  /* 12c4f3ae lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12c4f3b1 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f3b2 call 0x12c4f5e0 */
  push32(0x12c4f3b7u); f_12c4f5e0();
  /* 12c4f3b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f3ba cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f3bd je 0x12c4f3ed */
  if (C.zf) goto L_12c4f3ed;
  /* 12c4f3bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f3c3 je 0x12c4f3ed */
  if (C.zf) goto L_12c4f3ed;
  /* 12c4f3c5 mov ecx, dword ptr [0x12c6e704] */
  ECX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4f3cb push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f3cc call 0x12c4f660 */
  push32(0x12c4f3d1u); f_12c4f660();
  /* 12c4f3d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f3d4 mov esi, eax */
  ESI = (EAX);
  /* 12c4f3d6 mov edx, dword ptr [0x12c6e704] */
  EDX = (r32((uint32_t)(0x12c6e704)));
  /* 12c4f3dc push edx */
  push32((uint32_t)(EDX));
  /* 12c4f3dd call 0x12c45980 */
  push32(0x12c4f3e2u); f_12c45980();
  /* 12c4f3e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f3e5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f3e7 jne 0x12c4f3ed */
  if (!C.zf) goto L_12c4f3ed;
  /* 12c4f3e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f3eb jmp 0x12c4f3f2 */
  goto L_12c4f3f2;
L_12c4f3ed:;
  /* 12c4f3ed mov eax, 1 */
  EAX = (0x1u);
L_12c4f3f2:;
  /* 12c4f3f2 pop esi */
  ESI = (pop32());
  /* 12c4f3f3 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f3f5 pop ebp */
  EBP = (pop32());
  /* 12c4f3f6 ret  */
  ESPCHK(0x12c4f370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f400 @ 0x12c4f400 (77 bytes, 18 insns) */
void f_12c4f400(void) {
  FTRACE(0x12c4f400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f400 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f401 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f403 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f409 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12c4f413 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12c4f419 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f41a call dword ptr [0x12c70244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70244))), 0x12c4f420u);
  /* 12c4f420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c4f422 je 0x12c4f439 */
  if (C.zf) goto L_12c4f439;
  /* 12c4f424 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f42b jne 0x12c4f439 */
  if (!C.zf) goto L_12c4f439;
  /* 12c4f42d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12c4f437 jmp 0x12c4f443 */
  goto L_12c4f443;
L_12c4f439:;
  /* 12c4f439 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12c4f443:;
  /* 12c4f443 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12c4f449 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f44b pop ebp */
  EBP = (pop32());
  /* 12c4f44c ret  */
  ESPCHK(0x12c4f400u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12c4f450 (388 bytes, 118 insns) */
void f_12c4f450(void) {
  FTRACE(0x12c4f450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f450 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f451 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f453 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f456 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12c4f45d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12c4f464 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c4f46b:;
  /* 12c4f46b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4f46e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f471 jg 0x12c4f5b8 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4f5b8;
  /* 12c4f477 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c4f47a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f47d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12c4f47e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f480 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c4f482 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c4f485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f488 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f48b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f48e cmp edx, dword ptr [ecx + 0x12c6d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12c6d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f494 jne 0x12c4f58e */
  if (!C.zf) goto L_12c4f58e;
  /* 12c4f49a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4f49d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c4f4a0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f4a4 ja 0x12c4f4c7 */
  if ((!C.cf&&!C.zf)) goto L_12c4f4c7;
  /* 12c4f4a6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f4aa je 0x12c4f539 */
  if (C.zf) goto L_12c4f539;
  /* 12c4f4b0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f4b4 je 0x12c4f4e4 */
  if (C.zf) goto L_12c4f4e4;
  /* 12c4f4b6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f4ba je 0x12c4f506 */
  if (C.zf) goto L_12c4f506;
  /* 12c4f4bc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f4c0 je 0x12c4f528 */
  if (C.zf) goto L_12c4f528;
  /* 12c4f4c2 jmp 0x12c4f558 */
  goto L_12c4f558;
L_12c4f4c7:;
  /* 12c4f4c7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f4ce je 0x12c4f4f5 */
  if (C.zf) goto L_12c4f4f5;
  /* 12c4f4d0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f4d7 je 0x12c4f517 */
  if (C.zf) goto L_12c4f517;
  /* 12c4f4d9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f4e0 je 0x12c4f54a */
  if (C.zf) goto L_12c4f54a;
  /* 12c4f4e2 jmp 0x12c4f558 */
  goto L_12c4f558;
L_12c4f4e4:;
  /* 12c4f4e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f4e7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f4ea add ecx, 0x12c6d524 */
  { uint32_t _a=(ECX),_b=(0x12c6d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f4f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4f4f3 jmp 0x12c4f558 */
  goto L_12c4f558;
L_12c4f4f5:;
  /* 12c4f4f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f4f8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f4fb mov eax, dword ptr [edx + 0x12c6d52c] */
  EAX = (r32((uint32_t)(EDX + 0x12c6d52c)));
  /* 12c4f501 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4f504 jmp 0x12c4f558 */
  goto L_12c4f558;
L_12c4f506:;
  /* 12c4f506 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f509 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f50c add ecx, 0x12c6d530 */
  { uint32_t _a=(ECX),_b=(0x12c6d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f512 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4f515 jmp 0x12c4f558 */
  goto L_12c4f558;
L_12c4f517:;
  /* 12c4f517 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f51a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f51d mov eax, dword ptr [edx + 0x12c6d534] */
  EAX = (r32((uint32_t)(EDX + 0x12c6d534)));
  /* 12c4f523 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c4f526 jmp 0x12c4f558 */
  goto L_12c4f558;
L_12c4f528:;
  /* 12c4f528 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f52b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f52e add ecx, 0x12c6d538 */
  { uint32_t _a=(ECX),_b=(0x12c6d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f534 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4f537 jmp 0x12c4f558 */
  goto L_12c4f558;
L_12c4f539:;
  /* 12c4f539 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f53c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f53f add edx, 0x12c6d53c */
  { uint32_t _a=(EDX),_b=(0x12c6d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f545 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c4f548 jmp 0x12c4f558 */
  goto L_12c4f558;
L_12c4f54a:;
  /* 12c4f54a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f54d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f550 add eax, 0x12c6d544 */
  { uint32_t _a=(EAX),_b=(0x12c6d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f555 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c4f558:;
  /* 12c4f558 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f55c je 0x12c4f564 */
  if (C.zf) goto L_12c4f564;
  /* 12c4f55e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f562 jge 0x12c4f566 */
  if ((C.sf==C.of)) goto L_12c4f566;
L_12c4f564:;
  /* 12c4f564 jmp 0x12c4f5b8 */
  goto L_12c4f5b8;
L_12c4f566:;
  /* 12c4f566 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4f569 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f56c push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f56d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4f570 push edx */
  push32((uint32_t)(EDX));
  /* 12c4f571 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4f574 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f575 call 0x12c46370 */
  push32(0x12c4f57au); f_12c46370();
  /* 12c4f57a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f57d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4f580 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f583 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12c4f587 mov eax, 1 */
  EAX = (0x1u);
  /* 12c4f58c jmp 0x12c4f5ce */
  goto L_12c4f5ce;
L_12c4f58e:;
  /* 12c4f58e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f591 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f597 cmp eax, dword ptr [edx + 0x12c6d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12c6d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f59d jae 0x12c4f5aa */
  if (!C.cf) goto L_12c4f5aa;
  /* 12c4f59f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f5a2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f5a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c4f5a8 jmp 0x12c4f5b3 */
  goto L_12c4f5b3;
L_12c4f5aa:;
  /* 12c4f5aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c4f5ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f5b0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12c4f5b3:;
  /* 12c4f5b3 jmp 0x12c4f46b */
  goto L_12c4f46b;
L_12c4f5b8:;
  /* 12c4f5b8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c4f5bb push eax */
  push32((uint32_t)(EAX));
  /* 12c4f5bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c4f5bf push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f5c0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c4f5c3 push edx */
  push32((uint32_t)(EDX));
  /* 12c4f5c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f5c7 push eax */
  push32((uint32_t)(EAX));
  /* 12c4f5c8 call dword ptr [0x12c70250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c70250))), 0x12c4f5ceu);
L_12c4f5ce:;
  /* 12c4f5ce mov esp, ebp */
  ESP = (EBP);
  /* 12c4f5d0 pop ebp */
  EBP = (pop32());
  /* 12c4f5d1 ret 0x10 */
  ESPCHK(0x12c4f450u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f5e0 @ 0x12c4f5e0 (118 bytes, 42 insns) */
void f_12c4f5e0(void) {
  FTRACE(0x12c4f5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f5e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f5e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f5e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c4f5ed:;
  /* 12c4f5ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f5f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c4f5f2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12c4f5f5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4f5f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f5fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f5ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c4f602 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c4f604 je 0x12c4f64f */
  if (C.zf) goto L_12c4f64f;
  /* 12c4f606 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4f60a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f60d jl 0x12c4f622 */
  if ((C.sf!=C.of)) goto L_12c4f622;
  /* 12c4f60f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4f613 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f616 jg 0x12c4f622 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4f622;
  /* 12c4f618 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12c4f61b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c4f61d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12c4f620 jmp 0x12c4f63c */
  goto L_12c4f63c;
L_12c4f622:;
  /* 12c4f622 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4f626 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f629 jl 0x12c4f63c */
  if ((C.sf!=C.of)) goto L_12c4f63c;
  /* 12c4f62b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4f62f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f632 jg 0x12c4f63c */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4f63c;
  /* 12c4f634 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12c4f637 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12c4f639 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12c4f63c:;
  /* 12c4f63c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4f63f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12c4f642 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12c4f646 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12c4f64a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4f64d jmp 0x12c4f5ed */
  goto L_12c4f5ed;
L_12c4f64f:;
  /* 12c4f64f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c4f652 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f654 pop ebp */
  EBP = (pop32());
  /* 12c4f655 ret  */
  ESPCHK(0x12c4f5e0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12c4f660 (101 bytes, 36 insns) */
void f_12c4f660(void) {
  FTRACE(0x12c4f660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f660 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f661 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c4f666 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c4f66d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f670 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c4f672 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12c4f675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f678 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f67b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12c4f67e:;
  /* 12c4f67e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c4f682 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f685 jl 0x12c4f690 */
  if ((C.sf!=C.of)) goto L_12c4f690;
  /* 12c4f687 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c4f68b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f68e jle 0x12c4f6a2 */
  if ((C.zf||C.sf!=C.of)) goto L_12c4f6a2;
L_12c4f690:;
  /* 12c4f690 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c4f694 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f697 jl 0x12c4f6be */
  if ((C.sf!=C.of)) goto L_12c4f6be;
  /* 12c4f699 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12c4f69d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f6a0 jg 0x12c4f6be */
  if ((!C.zf&&C.sf==C.of)) goto L_12c4f6be;
L_12c4f6a2:;
  /* 12c4f6a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4f6a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f6a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c4f6ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f6ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c4f6b0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12c4f6b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f6b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f6b9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12c4f6bc jmp 0x12c4f67e */
  goto L_12c4f67e;
L_12c4f6be:;
  /* 12c4f6be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c4f6c1 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f6c3 pop ebp */
  EBP = (pop32());
  /* 12c4f6c4 ret  */
  ESPCHK(0x12c4f660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x12c4f6d0 (122 bytes, 39 insns) */
void f_12c4f6d0(void) {
  FTRACE(0x12c4f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c4f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c4f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c4f6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f6d7 cmp eax, dword ptr [0x12c6ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c6ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c4f6dd jae 0x12c4f701 */
  if (!C.cf) goto L_12c4f701;
  /* 12c4f6df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f6e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12c4f6e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f6e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12c4f6eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c4f6ee mov eax, dword ptr [ecx*4 + 0x12c6fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12c6fe60)));
  /* 12c4f6f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12c4f6fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c4f6fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c4f6ff jne 0x12c4f71c */
  if (!C.zf) goto L_12c4f71c;
L_12c4f701:;
  /* 12c4f701 call 0x12c4aa20 */
  push32(0x12c4f706u); f_12c4aa20();
  /* 12c4f706 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12c4f70c call 0x12c4aa30 */
  push32(0x12c4f711u); f_12c4aa30();
  /* 12c4f711 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c4f717 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c4f71a jmp 0x12c4f746 */
  goto L_12c4f746;
L_12c4f71c:;
  /* 12c4f71c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f71f push edx */
  push32((uint32_t)(EDX));
  /* 12c4f720 call 0x12c4c240 */
  push32(0x12c4f725u); f_12c4c240();
  /* 12c4f725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f72b push eax */
  push32((uint32_t)(EAX));
  /* 12c4f72c call 0x12c4f750 */
  push32(0x12c4f731u); f_12c4f750();
  /* 12c4f731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f734 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c4f737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c4f73a push ecx */
  push32((uint32_t)(ECX));
  /* 12c4f73b call 0x12c4c2d0 */
  push32(0x12c4f740u); f_12c4c2d0();
  /* 12c4f740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c4f743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c4f746:;
  /* 12c4f746 mov esp, ebp */
  ESP = (EBP);
  /* 12c4f748 pop ebp */
  EBP = (pop32());
  /* 12c4f749 ret  */
  ESPCHK(0x12c4f6d0u, _esp0);
  ESP += 4; return;
}

